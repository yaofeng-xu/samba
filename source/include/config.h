/* include/config.h.  Generated automatically by configure.  */
/* include/config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
/* #undef _ALL_SOURCE */
#endif

/* Define if type char is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* #undef __CHAR_UNSIGNED__ */
#endif

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef gid_t */

/* Define if you have a working `mmap' system call.  */
#define HAVE_MMAP 1

/* Define if your struct stat has st_rdev.  */
#define HAVE_ST_RDEV 1

/* Define if you have <sys/wait.h> that is POSIX.1 compatible.  */
#define HAVE_SYS_WAIT_H 1

/* Define as __inline if that's what the C compiler calls it.  */
/* #undef inline */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef mode_t */

/* Define if your C compiler doesn't accept -c and -o together.  */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to `long' if <sys/types.h> doesn't define.  */
/* #undef off_t */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* Define if you need to in order for stat and other things to work.  */
/* #undef _POSIX_SOURCE */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME 1

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef uid_t */

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
/* #undef WORDS_BIGENDIAN */

#define HAVE_VOLATILE 1
/* #undef HAVE_BROKEN_READDIR */
#define HAVE_C99_VSNPRINTF 1
#define HAVE_ERRNO_DECL 1
#define HAVE_LONGLONG 1
#undef HAVE_OFF64_T 
/* #undef HAVE_REMSH */
/* #undef HAVE_UNSIGNED_CHAR */
#define HAVE_UTIMBUF 1
#define HAVE_SIG_ATOMIC_T_TYPE 1
#define HAVE_SOCKLEN_T_TYPE 1
/* #undef ssize_t */
/* #undef ino_t */
/* #undef ssize_t */
/* #undef loff_t */
#define offset_t loff_t
/* #undef aclent_t */
/* #undef wchar_t */
#define HAVE_CONNECT 1
/* #undef HAVE_SHORT_INO_T */
/* #undef WITH_SMBWRAPPER */
/* #undef WITH_AFS */
/* #undef WITH_DFS */
/* #undef SUNOS5 */
/* #undef SUNOS4 */
#define LINUX 1
/* #undef AIX */
/* #undef BSD */
/* #undef IRIX */
/* #undef IRIX6 */
/* #undef HPUX */
/* #undef QNX */
/* #undef SCO */
/* #undef OSF1 */
/* #undef NEXT2 */
/* #undef RELIANTUNIX */
#define HAVE_MMAP 1
#define HAVE_FCNTL_LOCK 1
#define HAVE_FTRUNCATE_EXTEND 1
/* #undef FTRUNCATE_NEEDS_ROOT */
/* #undef HAVE_TRAPDOOR_UID */
/* #undef HAVE_ROOT */
#define HAVE_GETTIMEOFDAY_TZ 1
/* #undef HAVE_SOCK_SIN_LEN */
/* #undef STAT_READ_FILSYS */
/* #undef STAT_STATFS2_BSIZE */
/* #undef STAT_STATFS2_FSIZE */
/* #undef STAT_STATFS2_FS_DATA */
/* #undef STAT_STATFS3_OSF1 */
/* #undef STAT_STATFS4 */
/* #undef STAT_STATVFS */
//#define STAT_STATVFS64 1
/* #undef HAVE_IFACE_AIX */
#define HAVE_IFACE_IFCONF 1
/* #undef HAVE_IFACE_IFREQ */
//#define HAVE_CRYPT 1
/* #undef HAVE_PUTPRPWNAM */
/* #undef HAVE_SET_AUTH_PARAMETERS */
/* #undef WITH_SYSLOG */
/* #undef WITH_PROFILE */
/* #undef WITH_SSL */
/* #undef WITH_LDAP */
/* #undef WITH_NISPLUS */
/* #undef WITH_TDBPWD */
/* #undef WITH_PAM */
/* #undef WITH_PAM_SMBPASS */
/* #undef WITH_NISPLUS_HOME */
/* #undef WITH_AUTOMOUNT */
/* #undef WITH_SMBMOUNT */
/* #undef HAVE_BROKEN_GETGROUPS */
#define REPLACE_GETPASS 1
/* #undef REPLACE_INET_NTOA */
#define HAVE_FILE_MACRO 1
#define HAVE_FUNCTION_MACRO 1
#define HAVE_VA_COPY 1
#define HAVE_SETRESUID_DECL 1
#define HAVE_SETRESUID 1
/* #undef WITH_NETATALK */
/* #undef WITH_UTMP */
/* #undef WITH_MSDFS */
/* #undef WITH_VFS */
/* #undef HAVE_INO64_T */
/* #undef HAVE_DEV64_T */
#define HAVE_STRUCT_FLOCK64 1
#define SIZEOF_INO_T 8
#define SIZEOF_OFF_T 8
//#define STAT_STATVFS64 1
/* #undef HAVE_LIBREADLINE */
#define HAVE_KERNEL_SHARE_MODES 1
/* #undef HAVE_KERNEL_OPLOCKS_IRIX */
#define HAVE_KERNEL_OPLOCKS_LINUX 1
#define HAVE_KERNEL_CHANGE_NOTIFY 1
/* #undef HAVE_IRIX_SPECIFIC_CAPABILITIES */
/* #undef HAVE_INT16_FROM_RPC_RPC_H */
/* #undef HAVE_UINT16_FROM_RPC_RPC_H */
/* #undef HAVE_INT32_FROM_RPC_RPC_H */
/* #undef HAVE_UINT32_FROM_RPC_RPC_H */
/* #undef KRB4_AUTH */
/* #undef KRB5_AUTH */
#define SEEKDIR_RETURNS_VOID 1
#define HAVE_DIRENT_D_OFF 1
//#define HAVE_GETSPNAM 1
/* #undef HAVE_BIGCRYPT */
/* #undef HAVE_GETPRPWNAM */
#define HAVE_FSTAT64 1
#define HAVE_LSTAT64 1
#define HAVE_STAT64 1
#define HAVE_SETRESGID 1
#define HAVE_SETRESGID_DECL 1
//#define HAVE_SHADOW_H 1
#define HAVE_MEMSET 1
#define HAVE_STRCASECMP 1
//#define HAVE_STRUCT_DIRENT64 1
/* #undef HAVE_TRUNCATED_SALT */
#define BROKEN_NISPLUS_INCLUDE_FILES 1
/* #undef HAVE_RPC_AUTH_ERROR_CONFLICT */
//#define HAVE_EXPLICIT_LARGEFILE_SUPPORT 1
/* #undef USE_BOTH_CRYPT_CALLS */
/* #undef HAVE_BROKEN_FCNTL64_LOCKS */
#define HAVE_SECURE_MKSTEMP 1
/* #undef HAVE_FNMATCH */
/* #undef USE_SETEUID */
#define USE_SETRESUID 1
/* #undef USE_SETREUID */
/* #undef USE_SETUIDX */
#define HAVE_DLOPEN 1
#define HAVE_DLCLOSE 1
#define HAVE_DLSYM 1
#define HAVE_DLERROR 1
#define SYSCONF_SC_NGROUPS_MAX 1
#define HAVE_UT_UT_NAME 1
#define HAVE_UT_UT_USER 1
#define HAVE_UT_UT_ID 1
#define HAVE_UT_UT_HOST 1
#define HAVE_UT_UT_TIME 1
#define HAVE_UT_UT_TV 1
#define HAVE_UT_UT_TYPE 1
#define HAVE_UT_UT_PID 1
#define HAVE_UT_UT_EXIT 1
#define HAVE_UT_UT_ADDR 1
/* #undef HAVE_UX_UT_SYSLEN */
#define PUTUTLINE_RETURNS_UTMP 1
#define COMPILER_SUPPORTS_LL 1
#define HAVE_YP_GET_DEFAULT_DOMAIN 1
/* #undef USE_SPINLOCKS */
/* #undef SPARC_SPINLOCKS */
/* #undef INTEL_SPINLOCKS */
/* #undef MIPS_SPINLOCKS */
/* #undef POWERPC_SPINLOCKS */
/* #undef HAVE_POSIX_ACLS */
/* #undef HAVE_ACL_GET_PERM_NP */
/* #undef HAVE_UNIXWARE_ACLS */
/* #undef HAVE_SOLARIS_ACLS */
/* #undef HAVE_HPUX_ACLS */
/* #undef HAVE_IRIX_ACLS */
/* #undef HAVE_AIX_ACLS */
/* #undef HAVE_TRU64_ACLS */
#define HAVE_NO_ACLS 1
/* #undef HAVE_LIBPAM */
#define HAVE_ASPRINTF_DECL 1
#define HAVE_VASPRINTF_DECL 1
#define HAVE_SNPRINTF_DECL 1
#define HAVE_VSNPRINTF_DECL 1
#define HAVE_UNIXSOCKET 1
/* #undef MMAP_BLACKLIST */
/* #undef HAVE_CUPS */
/* #undef WITH_LDAP_SAM */
/* #undef WITH_NISPLUS_SAM */
#define WITH_SMBPASSWD_SAM 1
/* #undef WITH_TDB_SAM */
/* #undef LINUX_QUOTAS_1 */
/* #undef LINUX_QUOTAS_2 */
/* #undef BROKEN_REDHAT_7_SYSTEM_HEADERS */
//#define HAVE_IMMEDIATE_STRUCTURES 1
#define HAVE_STAT_ST_BLOCKS 1
#define STAT_ST_BLOCKSIZE 512
#define HAVE_DEVICE_MAJOR_FN 1
#define HAVE_DEVICE_MINOR_FN 1
/* #undef HAVE_MAKEDEV_FN */
/* #undef HAVE_GETGROUPS_TOO_MANY_EGIDS */
/* #undef HAVE_PASSWD_PW_COMMENT */
/* #undef HAVE_PASSWD_PW_AGE */
#define HAVE_STAT_ST_BLKSIZE 1
/* #undef WITH_WINBIND_AUTH_CRAP */
/* #undef WITH_HORRIBLE_LDAP_NATIVE_MODE_HACK */

/*
 * Add these definitions to allow VFS modules to
 * see the CPPFLAGS defines.
 */
#ifndef _HPUX_SOURCE
/* #undef _HPUX_SOURCE */
#endif
#ifndef _POSIX_SOURCE
/* #undef _POSIX_SOURCE */
#endif
#ifndef _LARGEFILE64_SOURCE
#define _LARGEFILE64_SOURCE 1
#endif
#ifndef _ALIGNMENT_REQUIRED
/* #undef _ALIGNMENT_REQUIRED */
#endif
#ifndef _MAX_ALIGNMENT
/* #undef _MAX_ALIGNMENT */
#endif
#ifndef _LARGE_FILES
/* #undef _LARGE_FILES */
#endif
#ifndef _FILE_OFFSET_BITS
#define _FILE_OFFSET_BITS 64
#endif
#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif
/* #undef HAVE_SENDFILE */
/* #undef HAVE_SENDFILE64 */
/* #undef LINUX_SENDFILE_API */
/* #undef LINUX_BROKEN_SENDFILE_API */
/* #undef WITH_SENDFILE */
/* #undef FREEBSD_SENDFILE_API */
/* #undef HPUX_SENDFILE_API */
/* #undef HAVE_SENDFILEV */
/* #undef HAVE_SENDFILEV64 */
/* #undef SOLARIS_SENDFILE_API */
/* #undef LDAP_SET_REBIND_PROC_ARGS */

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 4

/* The number of bytes in a short.  */
#define SIZEOF_SHORT 2

/* Define if you have the __acl function.  */
/* #undef HAVE___ACL */

/* Define if you have the __chdir function.  */
/* #undef HAVE___CHDIR */

/* Define if you have the __close function.  */
#define HAVE___CLOSE 1

/* Define if you have the __closedir function.  */
/* #undef HAVE___CLOSEDIR */

/* Define if you have the __dup function.  */
/* #undef HAVE___DUP */

/* Define if you have the __dup2 function.  */
#define HAVE___DUP2 1

/* Define if you have the __facl function.  */
/* #undef HAVE___FACL */

/* Define if you have the __fchdir function.  */
/* #undef HAVE___FCHDIR */

/* Define if you have the __fcntl function.  */
#define HAVE___FCNTL 1

/* Define if you have the __fork function.  */
#define HAVE___FORK 1

/* Define if you have the __fstat function.  */
#define HAVE___FSTAT 1

/* Define if you have the __fstat64 function.  */
/* #undef HAVE___FSTAT64 */

/* Define if you have the __fxstat function.  */
#define HAVE___FXSTAT 1

/* Define if you have the __getcwd function.  */
/* #undef HAVE___GETCWD */

/* Define if you have the __getdents function.  */
/* #undef HAVE___GETDENTS */

/* Define if you have the __llseek function.  */
/* #undef HAVE___LLSEEK */

/* Define if you have the __lseek function.  */
#define HAVE___LSEEK 1

/* Define if you have the __lstat function.  */
#define HAVE___LSTAT 1

/* Define if you have the __lstat64 function.  */
/* #undef HAVE___LSTAT64 */

/* Define if you have the __lxstat function.  */
#define HAVE___LXSTAT 1

/* Define if you have the __open function.  */
#define HAVE___OPEN 1

/* Define if you have the __open64 function.  */
#define HAVE___OPEN64 1

/* Define if you have the __opendir function.  */
/* #undef HAVE___OPENDIR */

/* Define if you have the __pread function.  */
/* #undef HAVE___PREAD */

/* Define if you have the __pread64 function.  */
#define HAVE___PREAD64 1

/* Define if you have the __pwrite function.  */
/* #undef HAVE___PWRITE */

/* Define if you have the __pwrite64 function.  */
#define HAVE___PWRITE64 1

/* Define if you have the __read function.  */
#define HAVE___READ 1

/* Define if you have the __readdir function.  */
/* #undef HAVE___READDIR */

/* Define if you have the __readdir64 function.  */
/* #undef HAVE___READDIR64 */

/* Define if you have the __seekdir function.  */
/* #undef HAVE___SEEKDIR */

/* Define if you have the __stat function.  */
#define HAVE___STAT 1

/* Define if you have the __stat64 function.  */
/* #undef HAVE___STAT64 */

/* Define if you have the __sys_llseek function.  */
/* #undef HAVE___SYS_LLSEEK */

/* Define if you have the __telldir function.  */
/* #undef HAVE___TELLDIR */

/* Define if you have the __write function.  */
#define HAVE___WRITE 1

/* Define if you have the __xstat function.  */
#define HAVE___XSTAT 1

/* Define if you have the _acl function.  */
/* #undef HAVE__ACL */

/* Define if you have the _chdir function.  */
/* #undef HAVE__CHDIR */

/* Define if you have the _close function.  */
/* #undef HAVE__CLOSE */

/* Define if you have the _closedir function.  */
/* #undef HAVE__CLOSEDIR */

/* Define if you have the _dup function.  */
/* #undef HAVE__DUP */

/* Define if you have the _dup2 function.  */
/* #undef HAVE__DUP2 */

/* Define if you have the _facl function.  */
/* #undef HAVE__FACL */

/* Define if you have the _fchdir function.  */
/* #undef HAVE__FCHDIR */

/* Define if you have the _fcntl function.  */
/* #undef HAVE__FCNTL */

/* Define if you have the _fork function.  */
/* #undef HAVE__FORK */

/* Define if you have the _fstat function.  */
/* #undef HAVE__FSTAT */

/* Define if you have the _fstat64 function.  */
/* #undef HAVE__FSTAT64 */

/* Define if you have the _getcwd function.  */
/* #undef HAVE__GETCWD */

/* Define if you have the _getdents function.  */
/* #undef HAVE__GETDENTS */

/* Define if you have the _llseek function.  */
/* #undef HAVE__LLSEEK */

/* Define if you have the _lseek function.  */
/* #undef HAVE__LSEEK */

/* Define if you have the _lstat function.  */
/* #undef HAVE__LSTAT */

/* Define if you have the _lstat64 function.  */
/* #undef HAVE__LSTAT64 */

/* Define if you have the _open function.  */
/* #undef HAVE__OPEN */

/* Define if you have the _open64 function.  */
/* #undef HAVE__OPEN64 */

/* Define if you have the _opendir function.  */
/* #undef HAVE__OPENDIR */

/* Define if you have the _pread function.  */
/* #undef HAVE__PREAD */

/* Define if you have the _pread64 function.  */
/* #undef HAVE__PREAD64 */

/* Define if you have the _pwrite function.  */
/* #undef HAVE__PWRITE */

/* Define if you have the _pwrite64 function.  */
/* #undef HAVE__PWRITE64 */

/* Define if you have the _read function.  */
/* #undef HAVE__READ */

/* Define if you have the _readdir function.  */
/* #undef HAVE__READDIR */

/* Define if you have the _readdir64 function.  */
/* #undef HAVE__READDIR64 */

/* Define if you have the _seekdir function.  */
/* #undef HAVE__SEEKDIR */

/* Define if you have the _stat function.  */
/* #undef HAVE__STAT */

/* Define if you have the _stat64 function.  */
/* #undef HAVE__STAT64 */

/* Define if you have the _telldir function.  */
/* #undef HAVE__TELLDIR */

/* Define if you have the _write function.  */
/* #undef HAVE__WRITE */

/* Define if you have the asprintf function.  */
#define HAVE_ASPRINTF 1

/* Define if you have the atexit function.  */
#define HAVE_ATEXIT 1

/* Define if you have the bigcrypt function.  */
/* #undef HAVE_BIGCRYPT */

/* Define if you have the bzero function.  */
#define HAVE_BZERO 1

/* Define if you have the chmod function.  */
#define HAVE_CHMOD 1

/* Define if you have the chown function.  */
#define HAVE_CHOWN 1

/* Define if you have the chroot function.  */
#define HAVE_CHROOT 1

/* Define if you have the connect function.  */
#define HAVE_CONNECT 1

/* Define if you have the creat64 function.  */
#define HAVE_CREAT64 1

/* Define if you have the crypt function.  */
//#define HAVE_CRYPT 1

/* Define if you have the crypt16 function.  */
/* #undef HAVE_CRYPT16 */

/* Define if you have the dlclose function.  */
#define HAVE_DLCLOSE 1

/* Define if you have the dlerror function.  */
#define HAVE_DLERROR 1

/* Define if you have the dlopen function.  */
#define HAVE_DLOPEN 1

/* Define if you have the dlsym function.  */
#define HAVE_DLSYM 1

/* Define if you have the dup2 function.  */
#define HAVE_DUP2 1

/* Define if you have the endnetgrent function.  */
#define HAVE_ENDNETGRENT 1

/* Define if you have the execl function.  */
#define HAVE_EXECL 1

/* Define if you have the fchmod function.  */
#define HAVE_FCHMOD 1

/* Define if you have the fchown function.  */
#define HAVE_FCHOWN 1

/* Define if you have the fcvt function.  */
#define HAVE_FCVT 1

/* Define if you have the fcvtl function.  */
/* #undef HAVE_FCVTL */

/* Define if you have the fopen64 function.  */
#define HAVE_FOPEN64 1

/* Define if you have the fseek64 function.  */
/* #undef HAVE_FSEEK64 */

/* Define if you have the fseeko64 function.  */
#define HAVE_FSEEKO64 1

/* Define if you have the fstat function.  */
#define HAVE_FSTAT 1

/* Define if you have the fstat64 function.  */
#define HAVE_FSTAT64 1

/* Define if you have the fsync function.  */
#define HAVE_FSYNC 1

/* Define if you have the ftell64 function.  */
/* #undef HAVE_FTELL64 */

/* Define if you have the ftello64 function.  */
#define HAVE_FTELLO64 1

/* Define if you have the ftruncate function.  */
#define HAVE_FTRUNCATE 1

/* Define if you have the ftruncate64 function.  */
#define HAVE_FTRUNCATE64 1

/* Define if you have the getauthuid function.  */
/* #undef HAVE_GETAUTHUID */

/* Define if you have the getcwd function.  */
#define HAVE_GETCWD 1

/* Define if you have the getdents function.  */
/* #undef HAVE_GETDENTS */

/* Define if you have the getgrent function.  */
#define HAVE_GETGRENT 1

/* Define if you have the getgrnam function.  */
#define HAVE_GETGRNAM 1

/* Define if you have the getnetgrent function.  */
//#define HAVE_GETNETGRENT 1

/* Define if you have the getprpwnam function.  */
/* #undef HAVE_GETPRPWNAM */

/* Define if you have the getpwanam function.  */
/* #undef HAVE_GETPWANAM */

/* Define if you have the getrlimit function.  */
#define HAVE_GETRLIMIT 1

/* Define if you have the getspnam function.  */
//#define HAVE_GETSPNAM 1

/* Define if you have the getutmpx function.  */
#define HAVE_GETUTMPX 1

/* Define if you have the glob function.  */
#define HAVE_GLOB 1

/* Define if you have the grantpt function.  */
#define HAVE_GRANTPT 1

/* Define if you have the initgroups function.  */
#define HAVE_INITGROUPS 1

/* Define if you have the innetgr function.  */
//#define HAVE_INNETGR 1

/* Define if you have the ldap_start_tls_s function.  */
/* #undef HAVE_LDAP_START_TLS_S */

/* Define if you have the link function.  */
#define HAVE_LINK 1

/* Define if you have the llseek function.  */
#define HAVE_LLSEEK 1

/* Define if you have the lseek64 function.  */
//#define HAVE_LSEEK64 1

/* Define if you have the lstat64 function.  */
//#define HAVE_LSTAT64 1

/* Define if you have the memmove function.  */
#define HAVE_MEMMOVE 1

/* Define if you have the memset function.  */
#define HAVE_MEMSET 1

/* Define if you have the mknod function.  */
#define HAVE_MKNOD 1

/* Define if you have the mknod64 function.  */
/* #undef HAVE_MKNOD64 */

/* Define if you have the mktime function.  */
#define HAVE_MKTIME 1

/* Define if you have the open64 function.  */
//#define HAVE_OPEN64 1

/* Define if you have the pathconf function.  */
#define HAVE_PATHCONF 1

/* Define if you have the pipe function.  */
#define HAVE_PIPE 1

/* Define if you have the poll function.  */
#define HAVE_POLL 1

/* Define if you have the pread function.  */
#define HAVE_PREAD 1

/* Define if you have the pread64 function.  */
//#define HAVE_PREAD64 1

/* Define if you have the putprpwnam function.  */
/* #undef HAVE_PUTPRPWNAM */

/* Define if you have the pututline function.  */
#define HAVE_PUTUTLINE 1

/* Define if you have the pututxline function.  */
#define HAVE_PUTUTXLINE 1

/* Define if you have the pwrite function.  */
#define HAVE_PWRITE 1

/* Define if you have the pwrite64 function.  */
//#define HAVE_PWRITE64 1

/* Define if you have the rand function.  */
#define HAVE_RAND 1

/* Define if you have the random function.  */
#define HAVE_RANDOM 1

/* Define if you have the rdchk function.  */
/* #undef HAVE_RDCHK */

/* Define if you have the readdir64 function.  */
//#define HAVE_READDIR64 1

/* Define if you have the readlink function.  */
#define HAVE_READLINK 1

/* Define if you have the realpath function.  */
#define HAVE_REALPATH 1

/* Define if you have the rename function.  */
#define HAVE_RENAME 1

/* Define if you have the select function.  */
#define HAVE_SELECT 1

/* Define if you have the set_auth_parameters function.  */
/* #undef HAVE_SET_AUTH_PARAMETERS */

/* Define if you have the setenv function.  */
#define HAVE_SETENV 1

/* Define if you have the setgidx function.  */
/* #undef HAVE_SETGIDX */

/* Define if you have the setgroups function.  */
#define HAVE_SETGROUPS 1

/* Define if you have the setlinebuf function.  */
#define HAVE_SETLINEBUF 1

/* Define if you have the setluid function.  */
/* #undef HAVE_SETLUID */

/* Define if you have the setnetgrent function.  */
#define HAVE_SETNETGRENT 1

/* Define if you have the setpgid function.  */
#define HAVE_SETPGID 1

/* Define if you have the setpriv function.  */
/* #undef HAVE_SETPRIV */

/* Define if you have the setsid function.  */
#define HAVE_SETSID 1

/* Define if you have the setuidx function.  */
/* #undef HAVE_SETUIDX */

/* Define if you have the sigaction function.  */
#define HAVE_SIGACTION 1

/* Define if you have the sigblock function.  */
#define HAVE_SIGBLOCK 1

/* Define if you have the sigprocmask function.  */
#define HAVE_SIGPROCMASK 1

/* Define if you have the sigset function.  */
#define HAVE_SIGSET 1

/* Define if you have the snprintf function.  */
#define HAVE_SNPRINTF 1

/* Define if you have the srand function.  */
#define HAVE_SRAND 1

/* Define if you have the srandom function.  */
#define HAVE_SRANDOM 1

/* Define if you have the stat64 function.  */
//#define HAVE_STAT64 1

/* Define if you have the strcasecmp function.  */
#define HAVE_STRCASECMP 1

/* Define if you have the strchr function.  */
#define HAVE_STRCHR 1

/* Define if you have the strdup function.  */
#define HAVE_STRDUP 1

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Define if you have the strftime function.  */
#define HAVE_STRFTIME 1

/* Define if you have the strlcat function.  */
/* #undef HAVE_STRLCAT */

/* Define if you have the strlcpy function.  */
/* #undef HAVE_STRLCPY */

/* Define if you have the strndup function.  */
#define HAVE_STRNDUP 1

/* Define if you have the strnlen function.  */
#define HAVE_STRNLEN 1

/* Define if you have the strpbrk function.  */
#define HAVE_STRPBRK 1

/* Define if you have the strtoul function.  */
#define HAVE_STRTOUL 1

/* Define if you have the symlink function.  */
#define HAVE_SYMLINK 1

/* Define if you have the syscall function.  */
#define HAVE_SYSCALL 1

/* Define if you have the sysconf function.  */
#define HAVE_SYSCONF 1

/* Define if you have the syslog function.  */
#define HAVE_SYSLOG 1

/* Define if you have the updwtmp function.  */
#define HAVE_UPDWTMP 1

/* Define if you have the updwtmpx function.  */
#define HAVE_UPDWTMPX 1

/* Define if you have the usleep function.  */
#define HAVE_USLEEP 1

/* Define if you have the utime function.  */
#define HAVE_UTIME 1

/* Define if you have the utimes function.  */
#define HAVE_UTIMES 1

/* Define if you have the vasprintf function.  */
#define HAVE_VASPRINTF 1

/* Define if you have the vsnprintf function.  */
#define HAVE_VSNPRINTF 1

/* Define if you have the vsyslog function.  */
#define HAVE_VSYSLOG 1

/* Define if you have the waitpid function.  */
#define HAVE_WAITPID 1

/* Define if you have the yp_get_default_domain function.  */
#define HAVE_YP_GET_DEFAULT_DOMAIN 1

/* Define if you have the <arpa/inet.h> header file.  */
#define HAVE_ARPA_INET_H 1

/* Define if you have the <compat.h> header file.  */
/* #undef HAVE_COMPAT_H */

/* Define if you have the <ctype.h> header file.  */
#define HAVE_CTYPE_H 1

/* Define if you have the <dirent.h> header file.  */
#define HAVE_DIRENT_H 1

/* Define if you have the <dlfcn.h> header file.  */
#define HAVE_DLFCN_H 1

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <glob.h> header file.  */
//#define HAVE_GLOB_H 1

/* Define if you have the <grp.h> header file.  */
#define HAVE_GRP_H 1

/* Define if you have the <history.h> header file.  */
/* #undef HAVE_HISTORY_H */

/* Define if you have the <lastlog.h> header file.  */
#define HAVE_LASTLOG_H 1

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H 1

/* Define if you have the <linux/xqm.h> header file.  */
/* #undef HAVE_LINUX_XQM_H */

/* Define if you have the <memory.h> header file.  */
#define HAVE_MEMORY_H 1

/* Define if you have the <ndir.h> header file.  */
/* #undef HAVE_NDIR_H */

/* Define if you have the <net/if.h> header file.  */
#define HAVE_NET_IF_H 1

/* Define if you have the <netinet/in_ip.h> header file.  */
/* #undef HAVE_NETINET_IN_IP_H */

/* Define if you have the <netinet/in_systm.h> header file.  */
#define HAVE_NETINET_IN_SYSTM_H 1

/* Define if you have the <netinet/ip.h> header file.  */
#define HAVE_NETINET_IP_H 1

/* Define if you have the <netinet/tcp.h> header file.  */
#define HAVE_NETINET_TCP_H 1

/* Define if you have the <ns_api.h> header file.  */
/* #undef HAVE_NS_API_H */

/* Define if you have the <nss.h> header file.  */
//#define HAVE_NSS_H 1

/* Define if you have the <nss_common.h> header file.  */
/* #undef HAVE_NSS_COMMON_H */

/* Define if you have the <nsswitch.h> header file.  */
/* #undef HAVE_NSSWITCH_H */

/* Define if you have the <poll.h> header file.  */
#define HAVE_POLL_H 1

/* Define if you have the <pthread.h> header file.  */
#define HAVE_PTHREAD_H 1

/* Define if you have the <readline.h> header file.  */
/* #undef HAVE_READLINE_H */

/* Define if you have the <readline/history.h> header file.  */
/* #undef HAVE_READLINE_HISTORY_H */

/* Define if you have the <readline/readline.h> header file.  */
/* #undef HAVE_READLINE_READLINE_H */

/* Define if you have the <rpc/rpc.h> header file.  */
//#define HAVE_RPC_RPC_H 1

/* Define if you have the <rpcsvc/nis.h> header file.  */
#define HAVE_RPCSVC_NIS_H 1

/* Define if you have the <rpcsvc/yp_prot.h> header file.  */
//#define HAVE_RPCSVC_YP_PROT_H 1

/* Define if you have the <rpcsvc/ypclnt.h> header file.  */
//#define HAVE_RPCSVC_YPCLNT_H 1

/* Define if you have the <security/_pam_macros.h> header file.  */
/* #undef HAVE_SECURITY__PAM_MACROS_H */

/* Define if you have the <security/pam_appl.h> header file.  */
/* #undef HAVE_SECURITY_PAM_APPL_H */

/* Define if you have the <security/pam_modules.h> header file.  */
/* #undef HAVE_SECURITY_PAM_MODULES_H */

/* Define if you have the <shadow.h> header file.  */
//#define HAVE_SHADOW_H 1

/* Define if you have the <stdarg.h> header file.  */
#define HAVE_STDARG_H 1

/* Define if you have the <stdlib.h> header file.  */
#define HAVE_STDLIB_H 1

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <strings.h> header file.  */
#define HAVE_STRINGS_H 1

/* Define if you have the <stropts.h> header file.  */
//#define HAVE_STROPTS_H 1

/* Define if you have the <synch.h> header file.  */
/* #undef HAVE_SYNCH_H */

/* Define if you have the <sys/acl.h> header file.  */
/* #undef HAVE_SYS_ACL_H */

/* Define if you have the <sys/capability.h> header file.  */
/* #undef HAVE_SYS_CAPABILITY_H */

/* Define if you have the <sys/cdefs.h> header file.  */
#define HAVE_SYS_CDEFS_H 1

/* Define if you have the <sys/dir.h> header file.  */
/* #undef HAVE_SYS_DIR_H */

/* Define if you have the <sys/dustat.h> header file.  */
/* #undef HAVE_SYS_DUSTAT_H */

/* Define if you have the <sys/fcntl.h> header file.  */
#define HAVE_SYS_FCNTL_H 1

/* Define if you have the <sys/file.h> header file.  */
#define HAVE_SYS_FILE_H 1

/* Define if you have the <sys/filio.h> header file.  */
/* #undef HAVE_SYS_FILIO_H */

/* Define if you have the <sys/filsys.h> header file.  */
/* #undef HAVE_SYS_FILSYS_H */

/* Define if you have the <sys/fs/s5param.h> header file.  */
/* #undef HAVE_SYS_FS_S5PARAM_H */

/* Define if you have the <sys/fs/vx_quota.h> header file.  */
/* #undef HAVE_SYS_FS_VX_QUOTA_H */

/* Define if you have the <sys/id.h> header file.  */
/* #undef HAVE_SYS_ID_H */

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1

/* Define if you have the <sys/ipc.h> header file.  */
#define HAVE_SYS_IPC_H 1

/* Define if you have the <sys/mman.h> header file.  */
#define HAVE_SYS_MMAN_H 1

/* Define if you have the <sys/mode.h> header file.  */
/* #undef HAVE_SYS_MODE_H */

/* Define if you have the <sys/mount.h> header file.  */
#define HAVE_SYS_MOUNT_H 1

/* Define if you have the <sys/ndir.h> header file.  */
/* #undef HAVE_SYS_NDIR_H */

/* Define if you have the <sys/param.h> header file.  */
#define HAVE_SYS_PARAM_H 1

/* Define if you have the <sys/priv.h> header file.  */
/* #undef HAVE_SYS_PRIV_H */

/* Define if you have the <sys/resource.h> header file.  */
#define HAVE_SYS_RESOURCE_H 1

/* Define if you have the <sys/security.h> header file.  */
/* #undef HAVE_SYS_SECURITY_H */

/* Define if you have the <sys/select.h> header file.  */
#define HAVE_SYS_SELECT_H 1

/* Define if you have the <sys/shm.h> header file.  */
//#define HAVE_SYS_SHM_H 1

/* Define if you have the <sys/socket.h> header file.  */
#define HAVE_SYS_SOCKET_H 1

/* Define if you have the <sys/sockio.h> header file.  */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define if you have the <sys/statfs.h> header file.  */
#define HAVE_SYS_STATFS_H 1

/* Define if you have the <sys/statvfs.h> header file.  */
//#define HAVE_SYS_STATVFS_H 1

/* Define if you have the <sys/syscall.h> header file.  */
#define HAVE_SYS_SYSCALL_H 1

/* Define if you have the <sys/syslog.h> header file.  */
#define HAVE_SYS_SYSLOG_H 1

/* Define if you have the <sys/termio.h> header file.  */
/* #undef HAVE_SYS_TERMIO_H */

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H 1

/* Define if you have the <sys/unistd.h> header file.  */
#define HAVE_SYS_UNISTD_H 1

/* Define if you have the <sys/vfs.h> header file.  */
#define HAVE_SYS_VFS_H 1

/* Define if you have the <sys/wait.h> header file.  */
#define HAVE_SYS_WAIT_H 1

/* Define if you have the <syscall.h> header file.  */
#define HAVE_SYSCALL_H 1

/* Define if you have the <syslog.h> header file.  */
#define HAVE_SYSLOG_H 1

/* Define if you have the <termio.h> header file.  */
//#define HAVE_TERMIO_H 1

/* Define if you have the <termios.h> header file.  */
#define HAVE_TERMIOS_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <utime.h> header file.  */
#define HAVE_UTIME_H 1

/* Define if you have the <utmp.h> header file.  */
#define HAVE_UTMP_H 1

/* Define if you have the <utmpx.h> header file.  */
#define HAVE_UTMPX_H 1

/* Define if you have the acl library (-lacl).  */
/* #undef HAVE_LIBACL */

/* Define if you have the gen library (-lgen).  */
/* #undef HAVE_LIBGEN */

/* Define if you have the inet library (-linet).  */
/* #undef HAVE_LIBINET */

/* Define if you have the nsl library (-lnsl).  */
/* #undef HAVE_LIBNSL */

/* Define if you have the nsl_s library (-lnsl_s).  */
/* #undef HAVE_LIBNSL_S */

/* Define if you have the resolv library (-lresolv).  */
/* #undef HAVE_LIBRESOLV */

/* Define if you have the sec library (-lsec).  */
/* #undef HAVE_LIBSEC */

/* Define if you have the security library (-lsecurity).  */
/* #undef HAVE_LIBSECURITY */

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */

/* Whether to enable POSIX support */
/* #undef _POSIX_C_SOURCE */

/* Whether to enable System V compatibility */
/* #undef _SYSV */

