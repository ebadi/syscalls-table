#!/bin/python

import collections
import csv
import datetime
import io
import os
import re
import sys

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
if sys.argv[1] == '32' :
    template = 'arm_syscalls.c'
elif sys.argv[1] == '64' :
    template = 'aarch64_syscalls.c'
with open (template, 'r' ) as f:
    content = f.read()

arc = sys.argv[2]

content  = content.replace("TEMPLATE_ARCH", arc)

found = notfound = 0
lstNF = "//List of syscalls that are not found in the template"
for syscall in sorted(syscalls.keys()):
    #print(syscall)
    regex = ""
    subst =""
    try : 
        regex = r"\{\"" +syscall+ "\"(\s*,\s*)TEMPLATE_NUM"
        subst = "{\"" +syscall+ "\"\\1 "+str((syscalls[syscall])[arc])
        # str((syscalls[syscall])[arc])
    except :
        pass
        continue
    new_content  = re.sub(regex, subst, content, 0, re.MULTILINE)
    if  new_content is content :
        print("Syscall not found in the template:", syscall)
        notfound= notfound + 1
        lstNF = lstNF + "\n//" +  syscall 
    else : 
        print("Found:", syscall)
        found =found + 1
    content  = new_content

print("found:", found)
print("not found", notfound)
print(lstNF)
output_file = open(arc + '_syscalls.c', 'w')
output_file.write(content)
output_file.write(lstNF)
