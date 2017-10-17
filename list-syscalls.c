#include <stdio.h>

#include <asm/unistd.h>

int main(void)
{


#ifdef __NR__llseek
    printf("_llseek\t%d\n", __NR__llseek);
#else    
    printf("_llseek\t\n");
#endif


#ifdef __NR__newselect
    printf("_newselect\t%d\n", __NR__newselect);
#else    
    printf("_newselect\t\n");
#endif


#ifdef __NR__sysctl
    printf("_sysctl\t%d\n", __NR__sysctl);
#else    
    printf("_sysctl\t\n");
#endif


#ifdef __NR_accept
    printf("accept\t%d\n", __NR_accept);
#else    
    printf("accept\t\n");
#endif


#ifdef __NR_accept4
    printf("accept4\t%d\n", __NR_accept4);
#else    
    printf("accept4\t\n");
#endif


#ifdef __NR_access
    printf("access\t%d\n", __NR_access);
#else    
    printf("access\t\n");
#endif


#ifdef __NR_acct
    printf("acct\t%d\n", __NR_acct);
#else    
    printf("acct\t\n");
#endif


#ifdef __NR_add_key
    printf("add_key\t%d\n", __NR_add_key);
#else    
    printf("add_key\t\n");
#endif


#ifdef __NR_adjtimex
    printf("adjtimex\t%d\n", __NR_adjtimex);
#else    
    printf("adjtimex\t\n");
#endif


#ifdef __NR_afs_syscall
    printf("afs_syscall\t%d\n", __NR_afs_syscall);
#else    
    printf("afs_syscall\t\n");
#endif


#ifdef __NR_alarm
    printf("alarm\t%d\n", __NR_alarm);
#else    
    printf("alarm\t\n");
#endif


#ifdef __NR_arm_fadvise64_64
    printf("arm_fadvise64_64\t%d\n", __NR_arm_fadvise64_64);
#else    
    printf("arm_fadvise64_64\t\n");
#endif


#ifdef __NR_arm_sync_file_range
    printf("arm_sync_file_range\t%d\n", __NR_arm_sync_file_range);
#else    
    printf("arm_sync_file_range\t\n");
#endif


#ifdef __NR_arch_prctl
    printf("arch_prctl\t%d\n", __NR_arch_prctl);
#else    
    printf("arch_prctl\t\n");
#endif


#ifdef __NR_bdflush
    printf("bdflush\t%d\n", __NR_bdflush);
#else    
    printf("bdflush\t\n");
#endif


#ifdef __NR_bind
    printf("bind\t%d\n", __NR_bind);
#else    
    printf("bind\t\n");
#endif


#ifdef __NR_bpf
    printf("bpf\t%d\n", __NR_bpf);
#else    
    printf("bpf\t\n");
#endif


#ifdef __NR_break
    printf("break\t%d\n", __NR_break);
#else    
    printf("break\t\n");
#endif


#ifdef __NR_brk
    printf("brk\t%d\n", __NR_brk);
#else    
    printf("brk\t\n");
#endif


#ifdef __NR_cachectl
    printf("cachectl\t%d\n", __NR_cachectl);
#else    
    printf("cachectl\t\n");
#endif


#ifdef __NR_cacheflush
    printf("cacheflush\t%d\n", __NR_cacheflush);
#else    
    printf("cacheflush\t\n");
#endif


#ifdef __NR_capget
    printf("capget\t%d\n", __NR_capget);
#else    
    printf("capget\t\n");
#endif


#ifdef __NR_capset
    printf("capset\t%d\n", __NR_capset);
#else    
    printf("capset\t\n");
#endif


#ifdef __NR_chdir
    printf("chdir\t%d\n", __NR_chdir);
#else    
    printf("chdir\t\n");
#endif


#ifdef __NR_chmod
    printf("chmod\t%d\n", __NR_chmod);
#else    
    printf("chmod\t\n");
#endif


#ifdef __NR_chown
    printf("chown\t%d\n", __NR_chown);
#else    
    printf("chown\t\n");
#endif


#ifdef __NR_chown32
    printf("chown32\t%d\n", __NR_chown32);
#else    
    printf("chown32\t\n");
#endif


#ifdef __NR_chroot
    printf("chroot\t%d\n", __NR_chroot);
#else    
    printf("chroot\t\n");
#endif


#ifdef __NR_clock_adjtime
    printf("clock_adjtime\t%d\n", __NR_clock_adjtime);
#else    
    printf("clock_adjtime\t\n");
#endif


#ifdef __NR_clock_getres
    printf("clock_getres\t%d\n", __NR_clock_getres);
#else    
    printf("clock_getres\t\n");
#endif


#ifdef __NR_clock_gettime
    printf("clock_gettime\t%d\n", __NR_clock_gettime);
#else    
    printf("clock_gettime\t\n");
#endif


#ifdef __NR_clock_nanosleep
    printf("clock_nanosleep\t%d\n", __NR_clock_nanosleep);
#else    
    printf("clock_nanosleep\t\n");
#endif


#ifdef __NR_clock_settime
    printf("clock_settime\t%d\n", __NR_clock_settime);
#else    
    printf("clock_settime\t\n");
#endif


#ifdef __NR_clone
    printf("clone\t%d\n", __NR_clone);
#else    
    printf("clone\t\n");
#endif


#ifdef __NR_close
    printf("close\t%d\n", __NR_close);
#else    
    printf("close\t\n");
#endif


#ifdef __NR_connect
    printf("connect\t%d\n", __NR_connect);
#else    
    printf("connect\t\n");
#endif


#ifdef __NR_creat
    printf("creat\t%d\n", __NR_creat);
#else    
    printf("creat\t\n");
#endif


#ifdef __NR_create_module
    printf("create_module\t%d\n", __NR_create_module);
#else    
    printf("create_module\t\n");
#endif


#ifdef __NR_delete_module
    printf("delete_module\t%d\n", __NR_delete_module);
#else    
    printf("delete_module\t\n");
#endif


#ifdef __NR_dup
    printf("dup\t%d\n", __NR_dup);
#else    
    printf("dup\t\n");
#endif


#ifdef __NR_dup2
    printf("dup2\t%d\n", __NR_dup2);
#else    
    printf("dup2\t\n");
#endif


#ifdef __NR_dup3
    printf("dup3\t%d\n", __NR_dup3);
#else    
    printf("dup3\t\n");
#endif


#ifdef __NR_epoll_create
    printf("epoll_create\t%d\n", __NR_epoll_create);
#else    
    printf("epoll_create\t\n");
#endif


#ifdef __NR_epoll_create1
    printf("epoll_create1\t%d\n", __NR_epoll_create1);
#else    
    printf("epoll_create1\t\n");
#endif


#ifdef __NR_epoll_ctl
    printf("epoll_ctl\t%d\n", __NR_epoll_ctl);
#else    
    printf("epoll_ctl\t\n");
#endif


#ifdef __NR_epoll_ctl_old
    printf("epoll_ctl_old\t%d\n", __NR_epoll_ctl_old);
#else    
    printf("epoll_ctl_old\t\n");
#endif


#ifdef __NR_epoll_pwait
    printf("epoll_pwait\t%d\n", __NR_epoll_pwait);
#else    
    printf("epoll_pwait\t\n");
#endif


#ifdef __NR_epoll_wait
    printf("epoll_wait\t%d\n", __NR_epoll_wait);
#else    
    printf("epoll_wait\t\n");
#endif


#ifdef __NR_epoll_wait_old
    printf("epoll_wait_old\t%d\n", __NR_epoll_wait_old);
#else    
    printf("epoll_wait_old\t\n");
#endif


#ifdef __NR_eventfd
    printf("eventfd\t%d\n", __NR_eventfd);
#else    
    printf("eventfd\t\n");
#endif


#ifdef __NR_eventfd2
    printf("eventfd2\t%d\n", __NR_eventfd2);
#else    
    printf("eventfd2\t\n");
#endif


#ifdef __NR_execve
    printf("execve\t%d\n", __NR_execve);
#else    
    printf("execve\t\n");
#endif


#ifdef __NR_execveat
    printf("execveat\t%d\n", __NR_execveat);
#else    
    printf("execveat\t\n");
#endif


#ifdef __NR_exit
    printf("exit\t%d\n", __NR_exit);
#else    
    printf("exit\t\n");
#endif


#ifdef __NR_exit_group
    printf("exit_group\t%d\n", __NR_exit_group);
#else    
    printf("exit_group\t\n");
#endif


#ifdef __NR_faccessat
    printf("faccessat\t%d\n", __NR_faccessat);
#else    
    printf("faccessat\t\n");
#endif


#ifdef __NR_fadvise64
    printf("fadvise64\t%d\n", __NR_fadvise64);
#else    
    printf("fadvise64\t\n");
#endif


#ifdef __NR_fadvise64_64
    printf("fadvise64_64\t%d\n", __NR_fadvise64_64);
#else    
    printf("fadvise64_64\t\n");
#endif


#ifdef __NR_fallocate
    printf("fallocate\t%d\n", __NR_fallocate);
#else    
    printf("fallocate\t\n");
#endif


#ifdef __NR_fanotify_init
    printf("fanotify_init\t%d\n", __NR_fanotify_init);
#else    
    printf("fanotify_init\t\n");
#endif


#ifdef __NR_fanotify_mark
    printf("fanotify_mark\t%d\n", __NR_fanotify_mark);
#else    
    printf("fanotify_mark\t\n");
#endif


#ifdef __NR_fchdir
    printf("fchdir\t%d\n", __NR_fchdir);
#else    
    printf("fchdir\t\n");
#endif


#ifdef __NR_fchmod
    printf("fchmod\t%d\n", __NR_fchmod);
#else    
    printf("fchmod\t\n");
#endif


#ifdef __NR_fchmodat
    printf("fchmodat\t%d\n", __NR_fchmodat);
#else    
    printf("fchmodat\t\n");
#endif


#ifdef __NR_fchown
    printf("fchown\t%d\n", __NR_fchown);
#else    
    printf("fchown\t\n");
#endif


#ifdef __NR_fchown32
    printf("fchown32\t%d\n", __NR_fchown32);
#else    
    printf("fchown32\t\n");
#endif


#ifdef __NR_fchownat
    printf("fchownat\t%d\n", __NR_fchownat);
#else    
    printf("fchownat\t\n");
#endif


#ifdef __NR_fcntl
    printf("fcntl\t%d\n", __NR_fcntl);
#else    
    printf("fcntl\t\n");
#endif


#ifdef __NR_fcntl64
    printf("fcntl64\t%d\n", __NR_fcntl64);
#else    
    printf("fcntl64\t\n");
#endif


#ifdef __NR_fdatasync
    printf("fdatasync\t%d\n", __NR_fdatasync);
#else    
    printf("fdatasync\t\n");
#endif


#ifdef __NR_fgetxattr
    printf("fgetxattr\t%d\n", __NR_fgetxattr);
#else    
    printf("fgetxattr\t\n");
#endif


#ifdef __NR_finit_module
    printf("finit_module\t%d\n", __NR_finit_module);
#else    
    printf("finit_module\t\n");
#endif


#ifdef __NR_flistxattr
    printf("flistxattr\t%d\n", __NR_flistxattr);
#else    
    printf("flistxattr\t\n");
#endif


#ifdef __NR_flock
    printf("flock\t%d\n", __NR_flock);
#else    
    printf("flock\t\n");
#endif


#ifdef __NR_fork
    printf("fork\t%d\n", __NR_fork);
#else    
    printf("fork\t\n");
#endif


#ifdef __NR_fremovexattr
    printf("fremovexattr\t%d\n", __NR_fremovexattr);
#else    
    printf("fremovexattr\t\n");
#endif


#ifdef __NR_fsetxattr
    printf("fsetxattr\t%d\n", __NR_fsetxattr);
#else    
    printf("fsetxattr\t\n");
#endif


#ifdef __NR_fstat
    printf("fstat\t%d\n", __NR_fstat);
#else    
    printf("fstat\t\n");
#endif


#ifdef __NR_fstat64
    printf("fstat64\t%d\n", __NR_fstat64);
#else    
    printf("fstat64\t\n");
#endif


#ifdef __NR_fstatat64
    printf("fstatat64\t%d\n", __NR_fstatat64);
#else    
    printf("fstatat64\t\n");
#endif


#ifdef __NR_fstatfs
    printf("fstatfs\t%d\n", __NR_fstatfs);
#else    
    printf("fstatfs\t\n");
#endif


#ifdef __NR_fstatfs64
    printf("fstatfs64\t%d\n", __NR_fstatfs64);
#else    
    printf("fstatfs64\t\n");
#endif


#ifdef __NR_fsync
    printf("fsync\t%d\n", __NR_fsync);
#else    
    printf("fsync\t\n");
#endif


#ifdef __NR_ftime
    printf("ftime\t%d\n", __NR_ftime);
#else    
    printf("ftime\t\n");
#endif


#ifdef __NR_ftruncate
    printf("ftruncate\t%d\n", __NR_ftruncate);
#else    
    printf("ftruncate\t\n");
#endif


#ifdef __NR_ftruncate64
    printf("ftruncate64\t%d\n", __NR_ftruncate64);
#else    
    printf("ftruncate64\t\n");
#endif


#ifdef __NR_futex
    printf("futex\t%d\n", __NR_futex);
#else    
    printf("futex\t\n");
#endif


#ifdef __NR_futimesat
    printf("futimesat\t%d\n", __NR_futimesat);
#else    
    printf("futimesat\t\n");
#endif


#ifdef __NR_get_kernel_syms
    printf("get_kernel_syms\t%d\n", __NR_get_kernel_syms);
#else    
    printf("get_kernel_syms\t\n");
#endif


#ifdef __NR_get_mempolicy
    printf("get_mempolicy\t%d\n", __NR_get_mempolicy);
#else    
    printf("get_mempolicy\t\n");
#endif


#ifdef __NR_get_robust_list
    printf("get_robust_list\t%d\n", __NR_get_robust_list);
#else    
    printf("get_robust_list\t\n");
#endif


#ifdef __NR_get_thread_area
    printf("get_thread_area\t%d\n", __NR_get_thread_area);
#else    
    printf("get_thread_area\t\n");
#endif


#ifdef __NR_getcpu
    printf("getcpu\t%d\n", __NR_getcpu);
#else    
    printf("getcpu\t\n");
#endif


#ifdef __NR_getcwd
    printf("getcwd\t%d\n", __NR_getcwd);
#else    
    printf("getcwd\t\n");
#endif


#ifdef __NR_getdents
    printf("getdents\t%d\n", __NR_getdents);
#else    
    printf("getdents\t\n");
#endif


#ifdef __NR_getdents64
    printf("getdents64\t%d\n", __NR_getdents64);
#else    
    printf("getdents64\t\n");
#endif


#ifdef __NR_getegid
    printf("getegid\t%d\n", __NR_getegid);
#else    
    printf("getegid\t\n");
#endif


#ifdef __NR_getegid32
    printf("getegid32\t%d\n", __NR_getegid32);
#else    
    printf("getegid32\t\n");
#endif


#ifdef __NR_geteuid
    printf("geteuid\t%d\n", __NR_geteuid);
#else    
    printf("geteuid\t\n");
#endif


#ifdef __NR_geteuid32
    printf("geteuid32\t%d\n", __NR_geteuid32);
#else    
    printf("geteuid32\t\n");
#endif


#ifdef __NR_getgid
    printf("getgid\t%d\n", __NR_getgid);
#else    
    printf("getgid\t\n");
#endif


#ifdef __NR_getgid32
    printf("getgid32\t%d\n", __NR_getgid32);
#else    
    printf("getgid32\t\n");
#endif


#ifdef __NR_getgroups
    printf("getgroups\t%d\n", __NR_getgroups);
#else    
    printf("getgroups\t\n");
#endif


#ifdef __NR_getgroups32
    printf("getgroups32\t%d\n", __NR_getgroups32);
#else    
    printf("getgroups32\t\n");
#endif


#ifdef __NR_getitimer
    printf("getitimer\t%d\n", __NR_getitimer);
#else    
    printf("getitimer\t\n");
#endif


#ifdef __NR_getpeername
    printf("getpeername\t%d\n", __NR_getpeername);
#else    
    printf("getpeername\t\n");
#endif


#ifdef __NR_getpgid
    printf("getpgid\t%d\n", __NR_getpgid);
#else    
    printf("getpgid\t\n");
#endif


#ifdef __NR_getpgrp
    printf("getpgrp\t%d\n", __NR_getpgrp);
#else    
    printf("getpgrp\t\n");
#endif


#ifdef __NR_getpid
    printf("getpid\t%d\n", __NR_getpid);
#else    
    printf("getpid\t\n");
#endif


#ifdef __NR_getpmsg
    printf("getpmsg\t%d\n", __NR_getpmsg);
#else    
    printf("getpmsg\t\n");
#endif


#ifdef __NR_getppid
    printf("getppid\t%d\n", __NR_getppid);
#else    
    printf("getppid\t\n");
#endif


#ifdef __NR_getpriority
    printf("getpriority\t%d\n", __NR_getpriority);
#else    
    printf("getpriority\t\n");
#endif


#ifdef __NR_getrandom
    printf("getrandom\t%d\n", __NR_getrandom);
#else    
    printf("getrandom\t\n");
#endif


#ifdef __NR_getresgid
    printf("getresgid\t%d\n", __NR_getresgid);
#else    
    printf("getresgid\t\n");
#endif


#ifdef __NR_getresgid32
    printf("getresgid32\t%d\n", __NR_getresgid32);
#else    
    printf("getresgid32\t\n");
#endif


#ifdef __NR_getresuid
    printf("getresuid\t%d\n", __NR_getresuid);
#else    
    printf("getresuid\t\n");
#endif


#ifdef __NR_getresuid32
    printf("getresuid32\t%d\n", __NR_getresuid32);
#else    
    printf("getresuid32\t\n");
#endif


#ifdef __NR_getrlimit
    printf("getrlimit\t%d\n", __NR_getrlimit);
#else    
    printf("getrlimit\t\n");
#endif


#ifdef __NR_getrusage
    printf("getrusage\t%d\n", __NR_getrusage);
#else    
    printf("getrusage\t\n");
#endif


#ifdef __NR_getsid
    printf("getsid\t%d\n", __NR_getsid);
#else    
    printf("getsid\t\n");
#endif


#ifdef __NR_getsockname
    printf("getsockname\t%d\n", __NR_getsockname);
#else    
    printf("getsockname\t\n");
#endif


#ifdef __NR_getsockopt
    printf("getsockopt\t%d\n", __NR_getsockopt);
#else    
    printf("getsockopt\t\n");
#endif


#ifdef __NR_gettid
    printf("gettid\t%d\n", __NR_gettid);
#else    
    printf("gettid\t\n");
#endif


#ifdef __NR_gettimeofday
    printf("gettimeofday\t%d\n", __NR_gettimeofday);
#else    
    printf("gettimeofday\t\n");
#endif


#ifdef __NR_getuid
    printf("getuid\t%d\n", __NR_getuid);
#else    
    printf("getuid\t\n");
#endif


#ifdef __NR_getuid32
    printf("getuid32\t%d\n", __NR_getuid32);
#else    
    printf("getuid32\t\n");
#endif


#ifdef __NR_getxattr
    printf("getxattr\t%d\n", __NR_getxattr);
#else    
    printf("getxattr\t\n");
#endif


#ifdef __NR_gtty
    printf("gtty\t%d\n", __NR_gtty);
#else    
    printf("gtty\t\n");
#endif


#ifdef __NR_idle
    printf("idle\t%d\n", __NR_idle);
#else    
    printf("idle\t\n");
#endif


#ifdef __NR_init_module
    printf("init_module\t%d\n", __NR_init_module);
#else    
    printf("init_module\t\n");
#endif


#ifdef __NR_inotify_add_watch
    printf("inotify_add_watch\t%d\n", __NR_inotify_add_watch);
#else    
    printf("inotify_add_watch\t\n");
#endif


#ifdef __NR_inotify_init
    printf("inotify_init\t%d\n", __NR_inotify_init);
#else    
    printf("inotify_init\t\n");
#endif


#ifdef __NR_inotify_init1
    printf("inotify_init1\t%d\n", __NR_inotify_init1);
#else    
    printf("inotify_init1\t\n");
#endif


#ifdef __NR_inotify_rm_watch
    printf("inotify_rm_watch\t%d\n", __NR_inotify_rm_watch);
#else    
    printf("inotify_rm_watch\t\n");
#endif


#ifdef __NR_io_cancel
    printf("io_cancel\t%d\n", __NR_io_cancel);
#else    
    printf("io_cancel\t\n");
#endif


#ifdef __NR_io_destroy
    printf("io_destroy\t%d\n", __NR_io_destroy);
#else    
    printf("io_destroy\t\n");
#endif


#ifdef __NR_io_getevents
    printf("io_getevents\t%d\n", __NR_io_getevents);
#else    
    printf("io_getevents\t\n");
#endif


#ifdef __NR_io_setup
    printf("io_setup\t%d\n", __NR_io_setup);
#else    
    printf("io_setup\t\n");
#endif


#ifdef __NR_io_submit
    printf("io_submit\t%d\n", __NR_io_submit);
#else    
    printf("io_submit\t\n");
#endif


#ifdef __NR_ioctl
    printf("ioctl\t%d\n", __NR_ioctl);
#else    
    printf("ioctl\t\n");
#endif


#ifdef __NR_ioperm
    printf("ioperm\t%d\n", __NR_ioperm);
#else    
    printf("ioperm\t\n");
#endif


#ifdef __NR_iopl
    printf("iopl\t%d\n", __NR_iopl);
#else    
    printf("iopl\t\n");
#endif


#ifdef __NR_ioprio_get
    printf("ioprio_get\t%d\n", __NR_ioprio_get);
#else    
    printf("ioprio_get\t\n");
#endif


#ifdef __NR_ioprio_set
    printf("ioprio_set\t%d\n", __NR_ioprio_set);
#else    
    printf("ioprio_set\t\n");
#endif


#ifdef __NR_ipc
    printf("ipc\t%d\n", __NR_ipc);
#else    
    printf("ipc\t\n");
#endif


#ifdef __NR_kcmp
    printf("kcmp\t%d\n", __NR_kcmp);
#else    
    printf("kcmp\t\n");
#endif


#ifdef __NR_kexec_file_load
    printf("kexec_file_load\t%d\n", __NR_kexec_file_load);
#else    
    printf("kexec_file_load\t\n");
#endif


#ifdef __NR_kexec_load
    printf("kexec_load\t%d\n", __NR_kexec_load);
#else    
    printf("kexec_load\t\n");
#endif


#ifdef __NR_keyctl
    printf("keyctl\t%d\n", __NR_keyctl);
#else    
    printf("keyctl\t\n");
#endif


#ifdef __NR_kill
    printf("kill\t%d\n", __NR_kill);
#else    
    printf("kill\t\n");
#endif


#ifdef __NR_lchown
    printf("lchown\t%d\n", __NR_lchown);
#else    
    printf("lchown\t\n");
#endif


#ifdef __NR_lchown32
    printf("lchown32\t%d\n", __NR_lchown32);
#else    
    printf("lchown32\t\n");
#endif


#ifdef __NR_lgetxattr
    printf("lgetxattr\t%d\n", __NR_lgetxattr);
#else    
    printf("lgetxattr\t\n");
#endif


#ifdef __NR_link
    printf("link\t%d\n", __NR_link);
#else    
    printf("link\t\n");
#endif


#ifdef __NR_linkat
    printf("linkat\t%d\n", __NR_linkat);
#else    
    printf("linkat\t\n");
#endif


#ifdef __NR_listen
    printf("listen\t%d\n", __NR_listen);
#else    
    printf("listen\t\n");
#endif


#ifdef __NR_listxattr
    printf("listxattr\t%d\n", __NR_listxattr);
#else    
    printf("listxattr\t\n");
#endif


#ifdef __NR_llistxattr
    printf("llistxattr\t%d\n", __NR_llistxattr);
#else    
    printf("llistxattr\t\n");
#endif


#ifdef __NR_lock
    printf("lock\t%d\n", __NR_lock);
#else    
    printf("lock\t\n");
#endif


#ifdef __NR_lookup_dcookie
    printf("lookup_dcookie\t%d\n", __NR_lookup_dcookie);
#else    
    printf("lookup_dcookie\t\n");
#endif


#ifdef __NR_lremovexattr
    printf("lremovexattr\t%d\n", __NR_lremovexattr);
#else    
    printf("lremovexattr\t\n");
#endif


#ifdef __NR_lseek
    printf("lseek\t%d\n", __NR_lseek);
#else    
    printf("lseek\t\n");
#endif


#ifdef __NR_lsetxattr
    printf("lsetxattr\t%d\n", __NR_lsetxattr);
#else    
    printf("lsetxattr\t\n");
#endif


#ifdef __NR_lstat
    printf("lstat\t%d\n", __NR_lstat);
#else    
    printf("lstat\t\n");
#endif


#ifdef __NR_lstat64
    printf("lstat64\t%d\n", __NR_lstat64);
#else    
    printf("lstat64\t\n");
#endif


#ifdef __NR_madvise
    printf("madvise\t%d\n", __NR_madvise);
#else    
    printf("madvise\t\n");
#endif


#ifdef __NR_mbind
    printf("mbind\t%d\n", __NR_mbind);
#else    
    printf("mbind\t\n");
#endif


#ifdef __NR_memfd_create
    printf("memfd_create\t%d\n", __NR_memfd_create);
#else    
    printf("memfd_create\t\n");
#endif


#ifdef __NR_migrate_pages
    printf("migrate_pages\t%d\n", __NR_migrate_pages);
#else    
    printf("migrate_pages\t\n");
#endif


#ifdef __NR_mincore
    printf("mincore\t%d\n", __NR_mincore);
#else    
    printf("mincore\t\n");
#endif


#ifdef __NR_mkdir
    printf("mkdir\t%d\n", __NR_mkdir);
#else    
    printf("mkdir\t\n");
#endif


#ifdef __NR_mkdirat
    printf("mkdirat\t%d\n", __NR_mkdirat);
#else    
    printf("mkdirat\t\n");
#endif


#ifdef __NR_mknod
    printf("mknod\t%d\n", __NR_mknod);
#else    
    printf("mknod\t\n");
#endif


#ifdef __NR_mknodat
    printf("mknodat\t%d\n", __NR_mknodat);
#else    
    printf("mknodat\t\n");
#endif


#ifdef __NR_mlock
    printf("mlock\t%d\n", __NR_mlock);
#else    
    printf("mlock\t\n");
#endif


#ifdef __NR_mlockall
    printf("mlockall\t%d\n", __NR_mlockall);
#else    
    printf("mlockall\t\n");
#endif


#ifdef __NR_mmap
    printf("mmap\t%d\n", __NR_mmap);
#else    
    printf("mmap\t\n");
#endif


#ifdef __NR_mmap2
    printf("mmap2\t%d\n", __NR_mmap2);
#else    
    printf("mmap2\t\n");
#endif


#ifdef __NR_modify_ldt
    printf("modify_ldt\t%d\n", __NR_modify_ldt);
#else    
    printf("modify_ldt\t\n");
#endif


#ifdef __NR_mount
    printf("mount\t%d\n", __NR_mount);
#else    
    printf("mount\t\n");
#endif


#ifdef __NR_move_pages
    printf("move_pages\t%d\n", __NR_move_pages);
#else    
    printf("move_pages\t\n");
#endif


#ifdef __NR_mprotect
    printf("mprotect\t%d\n", __NR_mprotect);
#else    
    printf("mprotect\t\n");
#endif


#ifdef __NR_mpx
    printf("mpx\t%d\n", __NR_mpx);
#else    
    printf("mpx\t\n");
#endif


#ifdef __NR_mq_getsetattr
    printf("mq_getsetattr\t%d\n", __NR_mq_getsetattr);
#else    
    printf("mq_getsetattr\t\n");
#endif


#ifdef __NR_mq_notify
    printf("mq_notify\t%d\n", __NR_mq_notify);
#else    
    printf("mq_notify\t\n");
#endif


#ifdef __NR_mq_open
    printf("mq_open\t%d\n", __NR_mq_open);
#else    
    printf("mq_open\t\n");
#endif


#ifdef __NR_mq_timedreceive
    printf("mq_timedreceive\t%d\n", __NR_mq_timedreceive);
#else    
    printf("mq_timedreceive\t\n");
#endif


#ifdef __NR_mq_timedsend
    printf("mq_timedsend\t%d\n", __NR_mq_timedsend);
#else    
    printf("mq_timedsend\t\n");
#endif


#ifdef __NR_mq_unlink
    printf("mq_unlink\t%d\n", __NR_mq_unlink);
#else    
    printf("mq_unlink\t\n");
#endif


#ifdef __NR_mremap
    printf("mremap\t%d\n", __NR_mremap);
#else    
    printf("mremap\t\n");
#endif


#ifdef __NR_msgctl
    printf("msgctl\t%d\n", __NR_msgctl);
#else    
    printf("msgctl\t\n");
#endif


#ifdef __NR_msgget
    printf("msgget\t%d\n", __NR_msgget);
#else    
    printf("msgget\t\n");
#endif


#ifdef __NR_msgrcv
    printf("msgrcv\t%d\n", __NR_msgrcv);
#else    
    printf("msgrcv\t\n");
#endif


#ifdef __NR_msgsnd
    printf("msgsnd\t%d\n", __NR_msgsnd);
#else    
    printf("msgsnd\t\n");
#endif


#ifdef __NR_msync
    printf("msync\t%d\n", __NR_msync);
#else    
    printf("msync\t\n");
#endif


#ifdef __NR_munlock
    printf("munlock\t%d\n", __NR_munlock);
#else    
    printf("munlock\t\n");
#endif


#ifdef __NR_munlockall
    printf("munlockall\t%d\n", __NR_munlockall);
#else    
    printf("munlockall\t\n");
#endif


#ifdef __NR_munmap
    printf("munmap\t%d\n", __NR_munmap);
#else    
    printf("munmap\t\n");
#endif


#ifdef __NR_name_to_handle_at
    printf("name_to_handle_at\t%d\n", __NR_name_to_handle_at);
#else    
    printf("name_to_handle_at\t\n");
#endif


#ifdef __NR_nanosleep
    printf("nanosleep\t%d\n", __NR_nanosleep);
#else    
    printf("nanosleep\t\n");
#endif


#ifdef __NR_newfstatat
    printf("newfstatat\t%d\n", __NR_newfstatat);
#else    
    printf("newfstatat\t\n");
#endif


#ifdef __NR_nfsservctl
    printf("nfsservctl\t%d\n", __NR_nfsservctl);
#else    
    printf("nfsservctl\t\n");
#endif


#ifdef __NR_nice
    printf("nice\t%d\n", __NR_nice);
#else    
    printf("nice\t\n");
#endif


#ifdef __NR_oldfstat
    printf("oldfstat\t%d\n", __NR_oldfstat);
#else    
    printf("oldfstat\t\n");
#endif


#ifdef __NR_oldlstat
    printf("oldlstat\t%d\n", __NR_oldlstat);
#else    
    printf("oldlstat\t\n");
#endif


#ifdef __NR_oldolduname
    printf("oldolduname\t%d\n", __NR_oldolduname);
#else    
    printf("oldolduname\t\n");
#endif


#ifdef __NR_oldstat
    printf("oldstat\t%d\n", __NR_oldstat);
#else    
    printf("oldstat\t\n");
#endif


#ifdef __NR_olduname
    printf("olduname\t%d\n", __NR_olduname);
#else    
    printf("olduname\t\n");
#endif


#ifdef __NR_oldwait4
    printf("oldwait4\t%d\n", __NR_oldwait4);
#else    
    printf("oldwait4\t\n");
#endif


#ifdef __NR_open
    printf("open\t%d\n", __NR_open);
#else    
    printf("open\t\n");
#endif


#ifdef __NR_open_by_handle_at
    printf("open_by_handle_at\t%d\n", __NR_open_by_handle_at);
#else    
    printf("open_by_handle_at\t\n");
#endif


#ifdef __NR_openat
    printf("openat\t%d\n", __NR_openat);
#else    
    printf("openat\t\n");
#endif


#ifdef __NR_pause
    printf("pause\t%d\n", __NR_pause);
#else    
    printf("pause\t\n");
#endif


#ifdef __NR_pciconfig_iobase
    printf("pciconfig_iobase\t%d\n", __NR_pciconfig_iobase);
#else    
    printf("pciconfig_iobase\t\n");
#endif


#ifdef __NR_pciconfig_read
    printf("pciconfig_read\t%d\n", __NR_pciconfig_read);
#else    
    printf("pciconfig_read\t\n");
#endif


#ifdef __NR_pciconfig_write
    printf("pciconfig_write\t%d\n", __NR_pciconfig_write);
#else    
    printf("pciconfig_write\t\n");
#endif


#ifdef __NR_perf_event_open
    printf("perf_event_open\t%d\n", __NR_perf_event_open);
#else    
    printf("perf_event_open\t\n");
#endif


#ifdef __NR_personality
    printf("personality\t%d\n", __NR_personality);
#else    
    printf("personality\t\n");
#endif


#ifdef __NR_pipe
    printf("pipe\t%d\n", __NR_pipe);
#else    
    printf("pipe\t\n");
#endif


#ifdef __NR_pipe2
    printf("pipe2\t%d\n", __NR_pipe2);
#else    
    printf("pipe2\t\n");
#endif


#ifdef __NR_pivot_root
    printf("pivot_root\t%d\n", __NR_pivot_root);
#else    
    printf("pivot_root\t\n");
#endif


#ifdef __NR_poll
    printf("poll\t%d\n", __NR_poll);
#else    
    printf("poll\t\n");
#endif


#ifdef __NR_ppoll
    printf("ppoll\t%d\n", __NR_ppoll);
#else    
    printf("ppoll\t\n");
#endif


#ifdef __NR_prctl
    printf("prctl\t%d\n", __NR_prctl);
#else    
    printf("prctl\t\n");
#endif


#ifdef __NR_pread64
    printf("pread64\t%d\n", __NR_pread64);
#else    
    printf("pread64\t\n");
#endif


#ifdef __NR_preadv
    printf("preadv\t%d\n", __NR_preadv);
#else    
    printf("preadv\t\n");
#endif


#ifdef __NR_prlimit64
    printf("prlimit64\t%d\n", __NR_prlimit64);
#else    
    printf("prlimit64\t\n");
#endif


#ifdef __NR_process_vm_readv
    printf("process_vm_readv\t%d\n", __NR_process_vm_readv);
#else    
    printf("process_vm_readv\t\n");
#endif


#ifdef __NR_process_vm_writev
    printf("process_vm_writev\t%d\n", __NR_process_vm_writev);
#else    
    printf("process_vm_writev\t\n");
#endif


#ifdef __NR_prof
    printf("prof\t%d\n", __NR_prof);
#else    
    printf("prof\t\n");
#endif


#ifdef __NR_profil
    printf("profil\t%d\n", __NR_profil);
#else    
    printf("profil\t\n");
#endif


#ifdef __NR_pselect6
    printf("pselect6\t%d\n", __NR_pselect6);
#else    
    printf("pselect6\t\n");
#endif


#ifdef __NR_ptrace
    printf("ptrace\t%d\n", __NR_ptrace);
#else    
    printf("ptrace\t\n");
#endif


#ifdef __NR_putpmsg
    printf("putpmsg\t%d\n", __NR_putpmsg);
#else    
    printf("putpmsg\t\n");
#endif


#ifdef __NR_pwrite64
    printf("pwrite64\t%d\n", __NR_pwrite64);
#else    
    printf("pwrite64\t\n");
#endif


#ifdef __NR_pwritev
    printf("pwritev\t%d\n", __NR_pwritev);
#else    
    printf("pwritev\t\n");
#endif


#ifdef __NR_query_module
    printf("query_module\t%d\n", __NR_query_module);
#else    
    printf("query_module\t\n");
#endif


#ifdef __NR_quotactl
    printf("quotactl\t%d\n", __NR_quotactl);
#else    
    printf("quotactl\t\n");
#endif


#ifdef __NR_read
    printf("read\t%d\n", __NR_read);
#else    
    printf("read\t\n");
#endif


#ifdef __NR_readahead
    printf("readahead\t%d\n", __NR_readahead);
#else    
    printf("readahead\t\n");
#endif


#ifdef __NR_readdir
    printf("readdir\t%d\n", __NR_readdir);
#else    
    printf("readdir\t\n");
#endif


#ifdef __NR_readlink
    printf("readlink\t%d\n", __NR_readlink);
#else    
    printf("readlink\t\n");
#endif


#ifdef __NR_readlinkat
    printf("readlinkat\t%d\n", __NR_readlinkat);
#else    
    printf("readlinkat\t\n");
#endif


#ifdef __NR_readv
    printf("readv\t%d\n", __NR_readv);
#else    
    printf("readv\t\n");
#endif


#ifdef __NR_reboot
    printf("reboot\t%d\n", __NR_reboot);
#else    
    printf("reboot\t\n");
#endif


#ifdef __NR_recv
    printf("recv\t%d\n", __NR_recv);
#else    
    printf("recv\t\n");
#endif


#ifdef __NR_recvfrom
    printf("recvfrom\t%d\n", __NR_recvfrom);
#else    
    printf("recvfrom\t\n");
#endif


#ifdef __NR_recvmmsg
    printf("recvmmsg\t%d\n", __NR_recvmmsg);
#else    
    printf("recvmmsg\t\n");
#endif


#ifdef __NR_recvmsg
    printf("recvmsg\t%d\n", __NR_recvmsg);
#else    
    printf("recvmsg\t\n");
#endif


#ifdef __NR_remap_file_pages
    printf("remap_file_pages\t%d\n", __NR_remap_file_pages);
#else    
    printf("remap_file_pages\t\n");
#endif


#ifdef __NR_removexattr
    printf("removexattr\t%d\n", __NR_removexattr);
#else    
    printf("removexattr\t\n");
#endif


#ifdef __NR_rename
    printf("rename\t%d\n", __NR_rename);
#else    
    printf("rename\t\n");
#endif


#ifdef __NR_renameat
    printf("renameat\t%d\n", __NR_renameat);
#else    
    printf("renameat\t\n");
#endif


#ifdef __NR_renameat2
    printf("renameat2\t%d\n", __NR_renameat2);
#else    
    printf("renameat2\t\n");
#endif


#ifdef __NR_request_key
    printf("request_key\t%d\n", __NR_request_key);
#else    
    printf("request_key\t\n");
#endif


#ifdef __NR_restart_syscall
    printf("restart_syscall\t%d\n", __NR_restart_syscall);
#else    
    printf("restart_syscall\t\n");
#endif


#ifdef __NR_rmdir
    printf("rmdir\t%d\n", __NR_rmdir);
#else    
    printf("rmdir\t\n");
#endif


#ifdef __NR_rt_sigaction
    printf("rt_sigaction\t%d\n", __NR_rt_sigaction);
#else    
    printf("rt_sigaction\t\n");
#endif


#ifdef __NR_rt_sigpending
    printf("rt_sigpending\t%d\n", __NR_rt_sigpending);
#else    
    printf("rt_sigpending\t\n");
#endif


#ifdef __NR_rt_sigprocmask
    printf("rt_sigprocmask\t%d\n", __NR_rt_sigprocmask);
#else    
    printf("rt_sigprocmask\t\n");
#endif


#ifdef __NR_rt_sigqueueinfo
    printf("rt_sigqueueinfo\t%d\n", __NR_rt_sigqueueinfo);
#else    
    printf("rt_sigqueueinfo\t\n");
#endif


#ifdef __NR_rt_sigreturn
    printf("rt_sigreturn\t%d\n", __NR_rt_sigreturn);
#else    
    printf("rt_sigreturn\t\n");
#endif


#ifdef __NR_rt_sigsuspend
    printf("rt_sigsuspend\t%d\n", __NR_rt_sigsuspend);
#else    
    printf("rt_sigsuspend\t\n");
#endif


#ifdef __NR_rt_sigtimedwait
    printf("rt_sigtimedwait\t%d\n", __NR_rt_sigtimedwait);
#else    
    printf("rt_sigtimedwait\t\n");
#endif


#ifdef __NR_rt_tgsigqueueinfo
    printf("rt_tgsigqueueinfo\t%d\n", __NR_rt_tgsigqueueinfo);
#else    
    printf("rt_tgsigqueueinfo\t\n");
#endif


#ifdef __NR_sched_get_priority_max
    printf("sched_get_priority_max\t%d\n", __NR_sched_get_priority_max);
#else    
    printf("sched_get_priority_max\t\n");
#endif


#ifdef __NR_sched_get_priority_min
    printf("sched_get_priority_min\t%d\n", __NR_sched_get_priority_min);
#else    
    printf("sched_get_priority_min\t\n");
#endif


#ifdef __NR_sched_getaffinity
    printf("sched_getaffinity\t%d\n", __NR_sched_getaffinity);
#else    
    printf("sched_getaffinity\t\n");
#endif


#ifdef __NR_sched_getattr
    printf("sched_getattr\t%d\n", __NR_sched_getattr);
#else    
    printf("sched_getattr\t\n");
#endif


#ifdef __NR_sched_getparam
    printf("sched_getparam\t%d\n", __NR_sched_getparam);
#else    
    printf("sched_getparam\t\n");
#endif


#ifdef __NR_sched_getscheduler
    printf("sched_getscheduler\t%d\n", __NR_sched_getscheduler);
#else    
    printf("sched_getscheduler\t\n");
#endif


#ifdef __NR_sched_rr_get_interval
    printf("sched_rr_get_interval\t%d\n", __NR_sched_rr_get_interval);
#else    
    printf("sched_rr_get_interval\t\n");
#endif


#ifdef __NR_sched_setaffinity
    printf("sched_setaffinity\t%d\n", __NR_sched_setaffinity);
#else    
    printf("sched_setaffinity\t\n");
#endif


#ifdef __NR_sched_setattr
    printf("sched_setattr\t%d\n", __NR_sched_setattr);
#else    
    printf("sched_setattr\t\n");
#endif


#ifdef __NR_sched_setparam
    printf("sched_setparam\t%d\n", __NR_sched_setparam);
#else    
    printf("sched_setparam\t\n");
#endif


#ifdef __NR_sched_setscheduler
    printf("sched_setscheduler\t%d\n", __NR_sched_setscheduler);
#else    
    printf("sched_setscheduler\t\n");
#endif


#ifdef __NR_sched_yield
    printf("sched_yield\t%d\n", __NR_sched_yield);
#else    
    printf("sched_yield\t\n");
#endif


#ifdef __NR_seccomp
    printf("seccomp\t%d\n", __NR_seccomp);
#else    
    printf("seccomp\t\n");
#endif


#ifdef __NR_security
    printf("security\t%d\n", __NR_security);
#else    
    printf("security\t\n");
#endif


#ifdef __NR_select
    printf("select\t%d\n", __NR_select);
#else    
    printf("select\t\n");
#endif


#ifdef __NR_semctl
    printf("semctl\t%d\n", __NR_semctl);
#else    
    printf("semctl\t\n");
#endif


#ifdef __NR_semget
    printf("semget\t%d\n", __NR_semget);
#else    
    printf("semget\t\n");
#endif


#ifdef __NR_semop
    printf("semop\t%d\n", __NR_semop);
#else    
    printf("semop\t\n");
#endif


#ifdef __NR_semtimedop
    printf("semtimedop\t%d\n", __NR_semtimedop);
#else    
    printf("semtimedop\t\n");
#endif


#ifdef __NR_send
    printf("send\t%d\n", __NR_send);
#else    
    printf("send\t\n");
#endif


#ifdef __NR_sendfile
    printf("sendfile\t%d\n", __NR_sendfile);
#else    
    printf("sendfile\t\n");
#endif


#ifdef __NR_sendfile64
    printf("sendfile64\t%d\n", __NR_sendfile64);
#else    
    printf("sendfile64\t\n");
#endif


#ifdef __NR_sendmmsg
    printf("sendmmsg\t%d\n", __NR_sendmmsg);
#else    
    printf("sendmmsg\t\n");
#endif


#ifdef __NR_sendmsg
    printf("sendmsg\t%d\n", __NR_sendmsg);
#else    
    printf("sendmsg\t\n");
#endif


#ifdef __NR_sendto
    printf("sendto\t%d\n", __NR_sendto);
#else    
    printf("sendto\t\n");
#endif


#ifdef __NR_set_mempolicy
    printf("set_mempolicy\t%d\n", __NR_set_mempolicy);
#else    
    printf("set_mempolicy\t\n");
#endif


#ifdef __NR_set_robust_list
    printf("set_robust_list\t%d\n", __NR_set_robust_list);
#else    
    printf("set_robust_list\t\n");
#endif


#ifdef __NR_set_thread_area
    printf("set_thread_area\t%d\n", __NR_set_thread_area);
#else    
    printf("set_thread_area\t\n");
#endif


#ifdef __NR_set_tid_address
    printf("set_tid_address\t%d\n", __NR_set_tid_address);
#else    
    printf("set_tid_address\t\n");
#endif


#ifdef __NR_setdomainname
    printf("setdomainname\t%d\n", __NR_setdomainname);
#else    
    printf("setdomainname\t\n");
#endif


#ifdef __NR_setfsgid
    printf("setfsgid\t%d\n", __NR_setfsgid);
#else    
    printf("setfsgid\t\n");
#endif


#ifdef __NR_setfsgid32
    printf("setfsgid32\t%d\n", __NR_setfsgid32);
#else    
    printf("setfsgid32\t\n");
#endif


#ifdef __NR_setfsuid
    printf("setfsuid\t%d\n", __NR_setfsuid);
#else    
    printf("setfsuid\t\n");
#endif


#ifdef __NR_setfsuid32
    printf("setfsuid32\t%d\n", __NR_setfsuid32);
#else    
    printf("setfsuid32\t\n");
#endif


#ifdef __NR_setgid
    printf("setgid\t%d\n", __NR_setgid);
#else    
    printf("setgid\t\n");
#endif


#ifdef __NR_setgid32
    printf("setgid32\t%d\n", __NR_setgid32);
#else    
    printf("setgid32\t\n");
#endif


#ifdef __NR_setgroups
    printf("setgroups\t%d\n", __NR_setgroups);
#else    
    printf("setgroups\t\n");
#endif


#ifdef __NR_setgroups32
    printf("setgroups32\t%d\n", __NR_setgroups32);
#else    
    printf("setgroups32\t\n");
#endif


#ifdef __NR_sethostname
    printf("sethostname\t%d\n", __NR_sethostname);
#else    
    printf("sethostname\t\n");
#endif


#ifdef __NR_setitimer
    printf("setitimer\t%d\n", __NR_setitimer);
#else    
    printf("setitimer\t\n");
#endif


#ifdef __NR_setns
    printf("setns\t%d\n", __NR_setns);
#else    
    printf("setns\t\n");
#endif


#ifdef __NR_setpgid
    printf("setpgid\t%d\n", __NR_setpgid);
#else    
    printf("setpgid\t\n");
#endif


#ifdef __NR_setpriority
    printf("setpriority\t%d\n", __NR_setpriority);
#else    
    printf("setpriority\t\n");
#endif


#ifdef __NR_setregid
    printf("setregid\t%d\n", __NR_setregid);
#else    
    printf("setregid\t\n");
#endif


#ifdef __NR_setregid32
    printf("setregid32\t%d\n", __NR_setregid32);
#else    
    printf("setregid32\t\n");
#endif


#ifdef __NR_setresgid
    printf("setresgid\t%d\n", __NR_setresgid);
#else    
    printf("setresgid\t\n");
#endif


#ifdef __NR_setresgid32
    printf("setresgid32\t%d\n", __NR_setresgid32);
#else    
    printf("setresgid32\t\n");
#endif


#ifdef __NR_setresuid
    printf("setresuid\t%d\n", __NR_setresuid);
#else    
    printf("setresuid\t\n");
#endif


#ifdef __NR_setresuid32
    printf("setresuid32\t%d\n", __NR_setresuid32);
#else    
    printf("setresuid32\t\n");
#endif


#ifdef __NR_setreuid
    printf("setreuid\t%d\n", __NR_setreuid);
#else    
    printf("setreuid\t\n");
#endif


#ifdef __NR_setreuid32
    printf("setreuid32\t%d\n", __NR_setreuid32);
#else    
    printf("setreuid32\t\n");
#endif


#ifdef __NR_setrlimit
    printf("setrlimit\t%d\n", __NR_setrlimit);
#else    
    printf("setrlimit\t\n");
#endif


#ifdef __NR_setsid
    printf("setsid\t%d\n", __NR_setsid);
#else    
    printf("setsid\t\n");
#endif


#ifdef __NR_setsockopt
    printf("setsockopt\t%d\n", __NR_setsockopt);
#else    
    printf("setsockopt\t\n");
#endif


#ifdef __NR_settimeofday
    printf("settimeofday\t%d\n", __NR_settimeofday);
#else    
    printf("settimeofday\t\n");
#endif


#ifdef __NR_setuid
    printf("setuid\t%d\n", __NR_setuid);
#else    
    printf("setuid\t\n");
#endif


#ifdef __NR_setuid32
    printf("setuid32\t%d\n", __NR_setuid32);
#else    
    printf("setuid32\t\n");
#endif


#ifdef __NR_setxattr
    printf("setxattr\t%d\n", __NR_setxattr);
#else    
    printf("setxattr\t\n");
#endif


#ifdef __NR_sgetmask
    printf("sgetmask\t%d\n", __NR_sgetmask);
#else    
    printf("sgetmask\t\n");
#endif


#ifdef __NR_shmat
    printf("shmat\t%d\n", __NR_shmat);
#else    
    printf("shmat\t\n");
#endif


#ifdef __NR_shmctl
    printf("shmctl\t%d\n", __NR_shmctl);
#else    
    printf("shmctl\t\n");
#endif


#ifdef __NR_shmdt
    printf("shmdt\t%d\n", __NR_shmdt);
#else    
    printf("shmdt\t\n");
#endif


#ifdef __NR_shmget
    printf("shmget\t%d\n", __NR_shmget);
#else    
    printf("shmget\t\n");
#endif


#ifdef __NR_shutdown
    printf("shutdown\t%d\n", __NR_shutdown);
#else    
    printf("shutdown\t\n");
#endif


#ifdef __NR_sigaction
    printf("sigaction\t%d\n", __NR_sigaction);
#else    
    printf("sigaction\t\n");
#endif


#ifdef __NR_sigaltstack
    printf("sigaltstack\t%d\n", __NR_sigaltstack);
#else    
    printf("sigaltstack\t\n");
#endif


#ifdef __NR_signal
    printf("signal\t%d\n", __NR_signal);
#else    
    printf("signal\t\n");
#endif


#ifdef __NR_signalfd
    printf("signalfd\t%d\n", __NR_signalfd);
#else    
    printf("signalfd\t\n");
#endif


#ifdef __NR_signalfd4
    printf("signalfd4\t%d\n", __NR_signalfd4);
#else    
    printf("signalfd4\t\n");
#endif


#ifdef __NR_sigpending
    printf("sigpending\t%d\n", __NR_sigpending);
#else    
    printf("sigpending\t\n");
#endif


#ifdef __NR_sigprocmask
    printf("sigprocmask\t%d\n", __NR_sigprocmask);
#else    
    printf("sigprocmask\t\n");
#endif


#ifdef __NR_sigreturn
    printf("sigreturn\t%d\n", __NR_sigreturn);
#else    
    printf("sigreturn\t\n");
#endif


#ifdef __NR_sigsuspend
    printf("sigsuspend\t%d\n", __NR_sigsuspend);
#else    
    printf("sigsuspend\t\n");
#endif


#ifdef __NR_socket
    printf("socket\t%d\n", __NR_socket);
#else    
    printf("socket\t\n");
#endif


#ifdef __NR_socketcall
    printf("socketcall\t%d\n", __NR_socketcall);
#else    
    printf("socketcall\t\n");
#endif


#ifdef __NR_socketpair
    printf("socketpair\t%d\n", __NR_socketpair);
#else    
    printf("socketpair\t\n");
#endif


#ifdef __NR_splice
    printf("splice\t%d\n", __NR_splice);
#else    
    printf("splice\t\n");
#endif


#ifdef __NR_ssetmask
    printf("ssetmask\t%d\n", __NR_ssetmask);
#else    
    printf("ssetmask\t\n");
#endif


#ifdef __NR_stat
    printf("stat\t%d\n", __NR_stat);
#else    
    printf("stat\t\n");
#endif


#ifdef __NR_stat64
    printf("stat64\t%d\n", __NR_stat64);
#else    
    printf("stat64\t\n");
#endif


#ifdef __NR_statfs
    printf("statfs\t%d\n", __NR_statfs);
#else    
    printf("statfs\t\n");
#endif


#ifdef __NR_statfs64
    printf("statfs64\t%d\n", __NR_statfs64);
#else    
    printf("statfs64\t\n");
#endif


#ifdef __NR_stime
    printf("stime\t%d\n", __NR_stime);
#else    
    printf("stime\t\n");
#endif


#ifdef __NR_stty
    printf("stty\t%d\n", __NR_stty);
#else    
    printf("stty\t\n");
#endif


#ifdef __NR_swapoff
    printf("swapoff\t%d\n", __NR_swapoff);
#else    
    printf("swapoff\t\n");
#endif


#ifdef __NR_swapon
    printf("swapon\t%d\n", __NR_swapon);
#else    
    printf("swapon\t\n");
#endif


#ifdef __NR_symlink
    printf("symlink\t%d\n", __NR_symlink);
#else    
    printf("symlink\t\n");
#endif


#ifdef __NR_symlinkat
    printf("symlinkat\t%d\n", __NR_symlinkat);
#else    
    printf("symlinkat\t\n");
#endif


#ifdef __NR_sync
    printf("sync\t%d\n", __NR_sync);
#else    
    printf("sync\t\n");
#endif


#ifdef __NR_sync_file_range
    printf("sync_file_range\t%d\n", __NR_sync_file_range);
#else    
    printf("sync_file_range\t\n");
#endif


#ifdef __NR_sync_file_range2
    printf("sync_file_range2\t%d\n", __NR_sync_file_range2);
#else    
    printf("sync_file_range2\t\n");
#endif


#ifdef __NR_syncfs
    printf("syncfs\t%d\n", __NR_syncfs);
#else    
    printf("syncfs\t\n");
#endif


#ifdef __NR_syscall
    printf("syscall\t%d\n", __NR_syscall);
#else    
    printf("syscall\t\n");
#endif


#ifdef __NR_sysfs
    printf("sysfs\t%d\n", __NR_sysfs);
#else    
    printf("sysfs\t\n");
#endif


#ifdef __NR_sysinfo
    printf("sysinfo\t%d\n", __NR_sysinfo);
#else    
    printf("sysinfo\t\n");
#endif


#ifdef __NR_syslog
    printf("syslog\t%d\n", __NR_syslog);
#else    
    printf("syslog\t\n");
#endif


#ifdef __NR_sysmips
    printf("sysmips\t%d\n", __NR_sysmips);
#else    
    printf("sysmips\t\n");
#endif


#ifdef __NR_tee
    printf("tee\t%d\n", __NR_tee);
#else    
    printf("tee\t\n");
#endif


#ifdef __NR_tgkill
    printf("tgkill\t%d\n", __NR_tgkill);
#else    
    printf("tgkill\t\n");
#endif


#ifdef __NR_time
    printf("time\t%d\n", __NR_time);
#else    
    printf("time\t\n");
#endif


#ifdef __NR_timer_create
    printf("timer_create\t%d\n", __NR_timer_create);
#else    
    printf("timer_create\t\n");
#endif


#ifdef __NR_timer_delete
    printf("timer_delete\t%d\n", __NR_timer_delete);
#else    
    printf("timer_delete\t\n");
#endif


#ifdef __NR_timer_getoverrun
    printf("timer_getoverrun\t%d\n", __NR_timer_getoverrun);
#else    
    printf("timer_getoverrun\t\n");
#endif


#ifdef __NR_timer_gettime
    printf("timer_gettime\t%d\n", __NR_timer_gettime);
#else    
    printf("timer_gettime\t\n");
#endif


#ifdef __NR_timer_settime
    printf("timer_settime\t%d\n", __NR_timer_settime);
#else    
    printf("timer_settime\t\n");
#endif


#ifdef __NR_timerfd
    printf("timerfd\t%d\n", __NR_timerfd);
#else    
    printf("timerfd\t\n");
#endif


#ifdef __NR_timerfd_create
    printf("timerfd_create\t%d\n", __NR_timerfd_create);
#else    
    printf("timerfd_create\t\n");
#endif


#ifdef __NR_timerfd_gettime
    printf("timerfd_gettime\t%d\n", __NR_timerfd_gettime);
#else    
    printf("timerfd_gettime\t\n");
#endif


#ifdef __NR_timerfd_settime
    printf("timerfd_settime\t%d\n", __NR_timerfd_settime);
#else    
    printf("timerfd_settime\t\n");
#endif


#ifdef __NR_times
    printf("times\t%d\n", __NR_times);
#else    
    printf("times\t\n");
#endif


#ifdef __NR_tkill
    printf("tkill\t%d\n", __NR_tkill);
#else    
    printf("tkill\t\n");
#endif


#ifdef __NR_truncate
    printf("truncate\t%d\n", __NR_truncate);
#else    
    printf("truncate\t\n");
#endif


#ifdef __NR_truncate64
    printf("truncate64\t%d\n", __NR_truncate64);
#else    
    printf("truncate64\t\n");
#endif


#ifdef __NR_tuxcall
    printf("tuxcall\t%d\n", __NR_tuxcall);
#else    
    printf("tuxcall\t\n");
#endif


#ifdef __NR_ugetrlimit
    printf("ugetrlimit\t%d\n", __NR_ugetrlimit);
#else    
    printf("ugetrlimit\t\n");
#endif


#ifdef __NR_ulimit
    printf("ulimit\t%d\n", __NR_ulimit);
#else    
    printf("ulimit\t\n");
#endif


#ifdef __NR_umask
    printf("umask\t%d\n", __NR_umask);
#else    
    printf("umask\t\n");
#endif


#ifdef __NR_umount
    printf("umount\t%d\n", __NR_umount);
#else    
    printf("umount\t\n");
#endif


#ifdef __NR_umount2
    printf("umount2\t%d\n", __NR_umount2);
#else    
    printf("umount2\t\n");
#endif


#ifdef __NR_uname
    printf("uname\t%d\n", __NR_uname);
#else    
    printf("uname\t\n");
#endif


#ifdef __NR_unlink
    printf("unlink\t%d\n", __NR_unlink);
#else    
    printf("unlink\t\n");
#endif


#ifdef __NR_unlinkat
    printf("unlinkat\t%d\n", __NR_unlinkat);
#else    
    printf("unlinkat\t\n");
#endif


#ifdef __NR_unshare
    printf("unshare\t%d\n", __NR_unshare);
#else    
    printf("unshare\t\n");
#endif


#ifdef __NR_uselib
    printf("uselib\t%d\n", __NR_uselib);
#else    
    printf("uselib\t\n");
#endif


#ifdef __NR_ustat
    printf("ustat\t%d\n", __NR_ustat);
#else    
    printf("ustat\t\n");
#endif


#ifdef __NR_utime
    printf("utime\t%d\n", __NR_utime);
#else    
    printf("utime\t\n");
#endif


#ifdef __NR_utimensat
    printf("utimensat\t%d\n", __NR_utimensat);
#else    
    printf("utimensat\t\n");
#endif


#ifdef __NR_utimes
    printf("utimes\t%d\n", __NR_utimes);
#else    
    printf("utimes\t\n");
#endif


#ifdef __NR_vfork
    printf("vfork\t%d\n", __NR_vfork);
#else    
    printf("vfork\t\n");
#endif


#ifdef __NR_vhangup
    printf("vhangup\t%d\n", __NR_vhangup);
#else    
    printf("vhangup\t\n");
#endif


#ifdef __NR_vm86
    printf("vm86\t%d\n", __NR_vm86);
#else    
    printf("vm86\t\n");
#endif


#ifdef __NR_vm86old
    printf("vm86old\t%d\n", __NR_vm86old);
#else    
    printf("vm86old\t\n");
#endif


#ifdef __NR_vmsplice
    printf("vmsplice\t%d\n", __NR_vmsplice);
#else    
    printf("vmsplice\t\n");
#endif


#ifdef __NR_vserver
    printf("vserver\t%d\n", __NR_vserver);
#else    
    printf("vserver\t\n");
#endif


#ifdef __NR_wait4
    printf("wait4\t%d\n", __NR_wait4);
#else    
    printf("wait4\t\n");
#endif


#ifdef __NR_waitid
    printf("waitid\t%d\n", __NR_waitid);
#else    
    printf("waitid\t\n");
#endif


#ifdef __NR_waitpid
    printf("waitpid\t%d\n", __NR_waitpid);
#else    
    printf("waitpid\t\n");
#endif


#ifdef __NR_write
    printf("write\t%d\n", __NR_write);
#else    
    printf("write\t\n");
#endif


#ifdef __NR_writev
    printf("writev\t%d\n", __NR_writev);
#else    
    printf("writev\t\n");
#endif




    return 0;
}
