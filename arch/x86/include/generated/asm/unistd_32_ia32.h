#ifndef _UAPI_ASM_UNISTD_32_IA32_H
#define _UAPI_ASM_UNISTD_32_IA32_H

#define __NR_ia32_restart_syscall 0
#define __NR_ia32_exit 1
#define __NR_ia32_fork 2
#define __NR_ia32_read 3
#define __NR_ia32_write 4
#define __NR_ia32_open 5
#define __NR_ia32_close 6
#define __NR_ia32_waitpid 7
#define __NR_ia32_creat 8
#define __NR_ia32_link 9
#define __NR_ia32_unlink 10
#define __NR_ia32_execve 11
#define __NR_ia32_chdir 12
#define __NR_ia32_time 13
#define __NR_ia32_mknod 14
#define __NR_ia32_chmod 15
#define __NR_ia32_lchown 16
#define __NR_ia32_break 17
#define __NR_ia32_oldstat 18
#define __NR_ia32_lseek 19
#define __NR_ia32_getpid 20
#define __NR_ia32_mount 21
#define __NR_ia32_umount 22
#define __NR_ia32_setuid 23
#define __NR_ia32_getuid 24
#define __NR_ia32_stime 25
#define __NR_ia32_ptrace 26
#define __NR_ia32_alarm 27
#define __NR_ia32_oldfstat 28
#define __NR_ia32_pause 29
#define __NR_ia32_utime 30
#define __NR_ia32_stty 31
#define __NR_ia32_gtty 32
#define __NR_ia32_access 33
#define __NR_ia32_nice 34
#define __NR_ia32_ftime 35
#define __NR_ia32_sync 36
#define __NR_ia32_kill 37
#define __NR_ia32_rename 38
#define __NR_ia32_mkdir 39
#define __NR_ia32_rmdir 40
#define __NR_ia32_dup 41
#define __NR_ia32_pipe 42
#define __NR_ia32_times 43
#define __NR_ia32_prof 44
#define __NR_ia32_brk 45
#define __NR_ia32_setgid 46
#define __NR_ia32_getgid 47
#define __NR_ia32_signal 48
#define __NR_ia32_geteuid 49
#define __NR_ia32_getegid 50
#define __NR_ia32_acct 51
#define __NR_ia32_umount2 52
#define __NR_ia32_lock 53
#define __NR_ia32_ioctl 54
#define __NR_ia32_fcntl 55
#define __NR_ia32_mpx 56
#define __NR_ia32_setpgid 57
#define __NR_ia32_ulimit 58
#define __NR_ia32_oldolduname 59
#define __NR_ia32_umask 60
#define __NR_ia32_chroot 61
#define __NR_ia32_ustat 62
#define __NR_ia32_dup2 63
#define __NR_ia32_getppid 64
#define __NR_ia32_getpgrp 65
#define __NR_ia32_setsid 66
#define __NR_ia32_sigaction 67
#define __NR_ia32_sgetmask 68
#define __NR_ia32_ssetmask 69
#define __NR_ia32_setreuid 70
#define __NR_ia32_setregid 71
#define __NR_ia32_sigsuspend 72
#define __NR_ia32_sigpending 73
#define __NR_ia32_sethostname 74
#define __NR_ia32_setrlimit 75
#define __NR_ia32_getrlimit 76
#define __NR_ia32_getrusage 77
#define __NR_ia32_gettimeofday 78
#define __NR_ia32_settimeofday 79
#define __NR_ia32_getgroups 80
#define __NR_ia32_setgroups 81
#define __NR_ia32_select 82
#define __NR_ia32_symlink 83
#define __NR_ia32_oldlstat 84
#define __NR_ia32_readlink 85
#define __NR_ia32_uselib 86
#define __NR_ia32_swapon 87
#define __NR_ia32_reboot 88
#define __NR_ia32_readdir 89
#define __NR_ia32_mmap 90
#define __NR_ia32_munmap 91
#define __NR_ia32_truncate 92
#define __NR_ia32_ftruncate 93
#define __NR_ia32_fchmod 94
#define __NR_ia32_fchown 95
#define __NR_ia32_getpriority 96
#define __NR_ia32_setpriority 97
#define __NR_ia32_profil 98
#define __NR_ia32_statfs 99
#define __NR_ia32_fstatfs 100
#define __NR_ia32_ioperm 101
#define __NR_ia32_socketcall 102
#define __NR_ia32_syslog 103
#define __NR_ia32_setitimer 104
#define __NR_ia32_getitimer 105
#define __NR_ia32_stat 106
#define __NR_ia32_lstat 107
#define __NR_ia32_fstat 108
#define __NR_ia32_olduname 109
#define __NR_ia32_iopl 110
#define __NR_ia32_vhangup 111
#define __NR_ia32_idle 112
#define __NR_ia32_vm86old 113
#define __NR_ia32_wait4 114
#define __NR_ia32_swapoff 115
#define __NR_ia32_sysinfo 116
#define __NR_ia32_ipc 117
#define __NR_ia32_fsync 118
#define __NR_ia32_sigreturn 119
#define __NR_ia32_clone 120
#define __NR_ia32_setdomainname 121
#define __NR_ia32_uname 122
#define __NR_ia32_modify_ldt 123
#define __NR_ia32_adjtimex 124
#define __NR_ia32_mprotect 125
#define __NR_ia32_sigprocmask 126
#define __NR_ia32_create_module 127
#define __NR_ia32_init_module 128
#define __NR_ia32_delete_module 129
#define __NR_ia32_get_kernel_syms 130
#define __NR_ia32_quotactl 131
#define __NR_ia32_getpgid 132
#define __NR_ia32_fchdir 133
#define __NR_ia32_bdflush 134
#define __NR_ia32_sysfs 135
#define __NR_ia32_personality 136
#define __NR_ia32_afs_syscall 137
#define __NR_ia32_setfsuid 138
#define __NR_ia32_setfsgid 139
#define __NR_ia32__llseek 140
#define __NR_ia32_getdents 141
#define __NR_ia32__newselect 142
#define __NR_ia32_flock 143
#define __NR_ia32_msync 144
#define __NR_ia32_readv 145
#define __NR_ia32_writev 146
#define __NR_ia32_getsid 147
#define __NR_ia32_fdatasync 148
#define __NR_ia32__sysctl 149
#define __NR_ia32_mlock 150
#define __NR_ia32_munlock 151
#define __NR_ia32_mlockall 152
#define __NR_ia32_munlockall 153
#define __NR_ia32_sched_setparam 154
#define __NR_ia32_sched_getparam 155
#define __NR_ia32_sched_setscheduler 156
#define __NR_ia32_sched_getscheduler 157
#define __NR_ia32_sched_yield 158
#define __NR_ia32_sched_get_priority_max 159
#define __NR_ia32_sched_get_priority_min 160
#define __NR_ia32_sched_rr_get_interval 161
#define __NR_ia32_nanosleep 162
#define __NR_ia32_mremap 163
#define __NR_ia32_setresuid 164
#define __NR_ia32_getresuid 165
#define __NR_ia32_vm86 166
#define __NR_ia32_query_module 167
#define __NR_ia32_poll 168
#define __NR_ia32_nfsservctl 169
#define __NR_ia32_setresgid 170
#define __NR_ia32_getresgid 171
#define __NR_ia32_prctl 172
#define __NR_ia32_rt_sigreturn 173
#define __NR_ia32_rt_sigaction 174
#define __NR_ia32_rt_sigprocmask 175
#define __NR_ia32_rt_sigpending 176
#define __NR_ia32_rt_sigtimedwait 177
#define __NR_ia32_rt_sigqueueinfo 178
#define __NR_ia32_rt_sigsuspend 179
#define __NR_ia32_pread64 180
#define __NR_ia32_pwrite64 181
#define __NR_ia32_chown 182
#define __NR_ia32_getcwd 183
#define __NR_ia32_capget 184
#define __NR_ia32_capset 185
#define __NR_ia32_sigaltstack 186
#define __NR_ia32_sendfile 187
#define __NR_ia32_getpmsg 188
#define __NR_ia32_putpmsg 189
#define __NR_ia32_vfork 190
#define __NR_ia32_ugetrlimit 191
#define __NR_ia32_mmap2 192
#define __NR_ia32_truncate64 193
#define __NR_ia32_ftruncate64 194
#define __NR_ia32_stat64 195
#define __NR_ia32_lstat64 196
#define __NR_ia32_fstat64 197
#define __NR_ia32_lchown32 198
#define __NR_ia32_getuid32 199
#define __NR_ia32_getgid32 200
#define __NR_ia32_geteuid32 201
#define __NR_ia32_getegid32 202
#define __NR_ia32_setreuid32 203
#define __NR_ia32_setregid32 204
#define __NR_ia32_getgroups32 205
#define __NR_ia32_setgroups32 206
#define __NR_ia32_fchown32 207
#define __NR_ia32_setresuid32 208
#define __NR_ia32_getresuid32 209
#define __NR_ia32_setresgid32 210
#define __NR_ia32_getresgid32 211
#define __NR_ia32_chown32 212
#define __NR_ia32_setuid32 213
#define __NR_ia32_setgid32 214
#define __NR_ia32_setfsuid32 215
#define __NR_ia32_setfsgid32 216
#define __NR_ia32_pivot_root 217
#define __NR_ia32_mincore 218
#define __NR_ia32_madvise 219
#define __NR_ia32_getdents64 220
#define __NR_ia32_fcntl64 221
#define __NR_ia32_gettid 224
#define __NR_ia32_readahead 225
#define __NR_ia32_setxattr 226
#define __NR_ia32_lsetxattr 227
#define __NR_ia32_fsetxattr 228
#define __NR_ia32_getxattr 229
#define __NR_ia32_lgetxattr 230
#define __NR_ia32_fgetxattr 231
#define __NR_ia32_listxattr 232
#define __NR_ia32_llistxattr 233
#define __NR_ia32_flistxattr 234
#define __NR_ia32_removexattr 235
#define __NR_ia32_lremovexattr 236
#define __NR_ia32_fremovexattr 237
#define __NR_ia32_tkill 238
#define __NR_ia32_sendfile64 239
#define __NR_ia32_futex 240
#define __NR_ia32_sched_setaffinity 241
#define __NR_ia32_sched_getaffinity 242
#define __NR_ia32_set_thread_area 243
#define __NR_ia32_get_thread_area 244
#define __NR_ia32_io_setup 245
#define __NR_ia32_io_destroy 246
#define __NR_ia32_io_getevents 247
#define __NR_ia32_io_submit 248
#define __NR_ia32_io_cancel 249
#define __NR_ia32_fadvise64 250
#define __NR_ia32_exit_group 252
#define __NR_ia32_lookup_dcookie 253
#define __NR_ia32_epoll_create 254
#define __NR_ia32_epoll_ctl 255
#define __NR_ia32_epoll_wait 256
#define __NR_ia32_remap_file_pages 257
#define __NR_ia32_set_tid_address 258
#define __NR_ia32_timer_create 259
#define __NR_ia32_timer_settime 260
#define __NR_ia32_timer_gettime 261
#define __NR_ia32_timer_getoverrun 262
#define __NR_ia32_timer_delete 263
#define __NR_ia32_clock_settime 264
#define __NR_ia32_clock_gettime 265
#define __NR_ia32_clock_getres 266
#define __NR_ia32_clock_nanosleep 267
#define __NR_ia32_statfs64 268
#define __NR_ia32_fstatfs64 269
#define __NR_ia32_tgkill 270
#define __NR_ia32_utimes 271
#define __NR_ia32_fadvise64_64 272
#define __NR_ia32_vserver 273
#define __NR_ia32_mbind 274
#define __NR_ia32_get_mempolicy 275
#define __NR_ia32_set_mempolicy 276
#define __NR_ia32_mq_open 277
#define __NR_ia32_mq_unlink 278
#define __NR_ia32_mq_timedsend 279
#define __NR_ia32_mq_timedreceive 280
#define __NR_ia32_mq_notify 281
#define __NR_ia32_mq_getsetattr 282
#define __NR_ia32_kexec_load 283
#define __NR_ia32_waitid 284
#define __NR_ia32_add_key 286
#define __NR_ia32_request_key 287
#define __NR_ia32_keyctl 288
#define __NR_ia32_ioprio_set 289
#define __NR_ia32_ioprio_get 290
#define __NR_ia32_inotify_init 291
#define __NR_ia32_inotify_add_watch 292
#define __NR_ia32_inotify_rm_watch 293
#define __NR_ia32_migrate_pages 294
#define __NR_ia32_openat 295
#define __NR_ia32_mkdirat 296
#define __NR_ia32_mknodat 297
#define __NR_ia32_fchownat 298
#define __NR_ia32_futimesat 299
#define __NR_ia32_fstatat64 300
#define __NR_ia32_unlinkat 301
#define __NR_ia32_renameat 302
#define __NR_ia32_linkat 303
#define __NR_ia32_symlinkat 304
#define __NR_ia32_readlinkat 305
#define __NR_ia32_fchmodat 306
#define __NR_ia32_faccessat 307
#define __NR_ia32_pselect6 308
#define __NR_ia32_ppoll 309
#define __NR_ia32_unshare 310
#define __NR_ia32_set_robust_list 311
#define __NR_ia32_get_robust_list 312
#define __NR_ia32_splice 313
#define __NR_ia32_sync_file_range 314
#define __NR_ia32_tee 315
#define __NR_ia32_vmsplice 316
#define __NR_ia32_move_pages 317
#define __NR_ia32_getcpu 318
#define __NR_ia32_epoll_pwait 319
#define __NR_ia32_utimensat 320
#define __NR_ia32_signalfd 321
#define __NR_ia32_timerfd_create 322
#define __NR_ia32_eventfd 323
#define __NR_ia32_fallocate 324
#define __NR_ia32_timerfd_settime 325
#define __NR_ia32_timerfd_gettime 326
#define __NR_ia32_signalfd4 327
#define __NR_ia32_eventfd2 328
#define __NR_ia32_epoll_create1 329
#define __NR_ia32_dup3 330
#define __NR_ia32_pipe2 331
#define __NR_ia32_inotify_init1 332
#define __NR_ia32_preadv 333
#define __NR_ia32_pwritev 334
#define __NR_ia32_rt_tgsigqueueinfo 335
#define __NR_ia32_perf_event_open 336
#define __NR_ia32_recvmmsg 337
#define __NR_ia32_fanotify_init 338
#define __NR_ia32_fanotify_mark 339
#define __NR_ia32_prlimit64 340
#define __NR_ia32_name_to_handle_at 341
#define __NR_ia32_open_by_handle_at 342
#define __NR_ia32_clock_adjtime 343
#define __NR_ia32_syncfs 344
#define __NR_ia32_sendmmsg 345
#define __NR_ia32_setns 346
#define __NR_ia32_process_vm_readv 347
#define __NR_ia32_process_vm_writev 348
#define __NR_ia32_kcmp 349
#define __NR_ia32_finit_module 350
#define __NR_ia32_sched_setattr 351
#define __NR_ia32_sched_getattr 352
#define __NR_ia32_renameat2 353
#define __NR_ia32_seccomp 354
#define __NR_ia32_getrandom 355
#define __NR_ia32_memfd_create 356
#define __NR_ia32_bpf 357
#define __NR_ia32_execveat 358
#define __NR_ia32_socket 359
#define __NR_ia32_socketpair 360
#define __NR_ia32_bind 361
#define __NR_ia32_connect 362
#define __NR_ia32_listen 363
#define __NR_ia32_accept4 364
#define __NR_ia32_getsockopt 365
#define __NR_ia32_setsockopt 366
#define __NR_ia32_getsockname 367
#define __NR_ia32_getpeername 368
#define __NR_ia32_sendto 369
#define __NR_ia32_sendmsg 370
#define __NR_ia32_recvfrom 371
#define __NR_ia32_recvmsg 372
#define __NR_ia32_shutdown 373
#define __NR_ia32_userfaultfd 374
#define __NR_ia32_membarrier 375
#define __NR_ia32_mlock2 376
#define __NR_ia32_copy_file_range 377
#define __NR_ia32_preadv2 378
#define __NR_ia32_pwritev2 379
#define __NR_ia32_pkey_mprotect 380
#define __NR_ia32_pkey_alloc 381
#define __NR_ia32_pkey_free 382
#define __NR_ia32_statx 383
#define __NR_ia32_arch_prctl 384
#define __NR_ia32_io_pgetevents 385
#define __NR_ia32_rseq 386
#define __NR_ia32_semget 393
#define __NR_ia32_semctl 394
#define __NR_ia32_shmget 395
#define __NR_ia32_shmctl 396
#define __NR_ia32_shmat 397
#define __NR_ia32_shmdt 398
#define __NR_ia32_msgget 399
#define __NR_ia32_msgsnd 400
#define __NR_ia32_msgrcv 401
#define __NR_ia32_msgctl 402
#define __NR_ia32_clock_gettime64 403
#define __NR_ia32_clock_settime64 404
#define __NR_ia32_clock_adjtime64 405
#define __NR_ia32_clock_getres_time64 406
#define __NR_ia32_clock_nanosleep_time64 407
#define __NR_ia32_timer_gettime64 408
#define __NR_ia32_timer_settime64 409
#define __NR_ia32_timerfd_gettime64 410
#define __NR_ia32_timerfd_settime64 411
#define __NR_ia32_utimensat_time64 412
#define __NR_ia32_pselect6_time64 413
#define __NR_ia32_ppoll_time64 414
#define __NR_ia32_io_pgetevents_time64 416
#define __NR_ia32_recvmmsg_time64 417
#define __NR_ia32_mq_timedsend_time64 418
#define __NR_ia32_mq_timedreceive_time64 419
#define __NR_ia32_semtimedop_time64 420
#define __NR_ia32_rt_sigtimedwait_time64 421
#define __NR_ia32_futex_time64 422
#define __NR_ia32_sched_rr_get_interval_time64 423
#define __NR_ia32_pidfd_send_signal 424
#define __NR_ia32_io_uring_setup 425
#define __NR_ia32_io_uring_enter 426
#define __NR_ia32_io_uring_register 427
#define __NR_ia32_open_tree 428
#define __NR_ia32_move_mount 429
#define __NR_ia32_fsopen 430
#define __NR_ia32_fsconfig 431
#define __NR_ia32_fsmount 432
#define __NR_ia32_fspick 433
#define __NR_ia32_pidfd_open 434
#define __NR_ia32_clone3 435
#define __NR_ia32_close_range 436
#define __NR_ia32_openat2 437
#define __NR_ia32_pidfd_getfd 438
#define __NR_ia32_faccessat2 439
#define __NR_ia32_process_madvise 440
#define __NR_ia32_epoll_pwait2 441
#define __NR_ia32_mount_setattr 442
#define __NR_ia32_quotactl_fd 443
#define __NR_ia32_landlock_create_ruleset 444
#define __NR_ia32_landlock_add_rule 445
#define __NR_ia32_landlock_restrict_self 446
#define __NR_ia32_memfd_secret 447
#define __NR_ia32_process_mrelease 448
#define __NR_ia32_futex_waitv 449
#define __NR_ia32_set_mempolicy_home_node 450
#define __NR_ia32_cachestat 451
#define __NR_ia32_fchmodat2 452
#define __NR_ia32_map_shadow_stack 453
#define __NR_ia32_futex_wake 454
#define __NR_ia32_futex_wait 455
#define __NR_ia32_futex_requeue 456
#define __NR_ia32_statmount 457
#define __NR_ia32_listmount 458
#define __NR_ia32_lsm_get_self_attr 459
#define __NR_ia32_lsm_set_self_attr 460
#define __NR_ia32_lsm_list_modules 461
#define __NR_ia32_mseal 462
#define __NR_ia32_setxattrat 463
#define __NR_ia32_getxattrat 464
#define __NR_ia32_listxattrat 465
#define __NR_ia32_removexattrat 466
#define __NR_ia32_open_tree_attr 467

#ifdef __KERNEL__
#define __NR_ia32_syscalls 468
#endif

#endif /* _UAPI_ASM_UNISTD_32_IA32_H */
