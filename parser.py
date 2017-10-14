#!/bin/python

import collections
import csv
import datetime
import io
import os
import re

syscalls = collections.OrderedDict()

present_archs = []
os.chdir('tables')
for filename in os.listdir(os.getcwd()):

    try:
        arch=filename.replace('syscalls-', '')

        with io.open(filename, newline='') as csvh:
            seccompdata = csv.reader(csvh, delimiter="\t")
            present_archs.append(arch)

            for row in seccompdata:
                try:
                    syscalls[row[0]][arch] = row[1]
                except KeyError:
                    syscalls[row[0]] = collections.OrderedDict()
                    syscalls[row[0]][arch] = row[1]
                except IndexError:
                    pass

    except IndexError:
        pass

archs = ['arm64', 'arm', 'armoabi',
          'x86_64', 'x32', 'i386',
          'mips64', 'mips64n32', 'mipso32',
          'powerpc64', 'powerpc',
          's390x', 's390']

for arch in sorted(present_archs):

    if not arch in archs:
        archs.append(arch)

os.chdir('..')

with open ('template_syscalls.c', 'r' ) as f:
    content = f.read()

arc = "mips64"

content  = content.replace("TEMPLATE_ARCH", arc)

for syscall in sorted(syscalls.keys()):
    regex = ""
    subst =""
    try : 
        regex = "\{\"" +syscall+ "\"(\s*,\s*)TEMPLATE_NUM"
        subst = "\"" +syscall+ "\"\\1 " + str((syscalls[syscall])[arc])
    except :
        pass
        continue
    new_content  = re.sub(regex, subst, content, 0, re.MULTILINE)
    if  new_content is content :
        print("Syscall not found in the template:", syscall, regex, subst)
    #else : 
        #print("Found:", syscall, regex, subst)
    content  = new_content

output_file = open(arc + '_syscalls.c', 'w')
output_file.write(content)
