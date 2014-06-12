# 1 "gist_btree.cc"
#pragma GCC set_debug_pwd "/Users/jmh/devel/libgist/src/libbtree"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "gist_btree.cc"





#pragma implementation "gist_btree.h"


# 1 "/usr/include/string.h" 1 3 4
# 59 "/usr/include/string.h" 3 4
# 1 "/usr/include/machine/ansi.h" 1 3 4
# 33 "/usr/include/machine/ansi.h" 3 4
# 1 "/usr/include/ppc/ansi.h" 1 3 4
# 92 "/usr/include/ppc/ansi.h" 3 4
typedef union {
        char __mbstate8[128];
        long long _mbstateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" 2 3 4
# 60 "/usr/include/string.h" 2 3 4



typedef long unsigned int size_t;






# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 71 "/usr/include/string.h" 2 3 4

extern "C" {
void *memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void *memcpy (void *, const void *, size_t);
void *memmove (void *, const void *, size_t);
void *memset (void *, int, size_t);
char *strcat (char *, const char *);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *, const char *);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *, const char *, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *, const char *, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);
char *strtok (char *, const char *);
size_t strxfrm (char *, const char *, size_t);



int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
int ffs (int);
char *index (const char *, int);
void *memccpy (void *, const void *, int, size_t);
char *rindex (const char *, int);
int strcasecmp (const char *, const char *);
char *strdup (const char *);
size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);
void strmode (int, char *);
int strncasecmp (const char *, const char *, size_t);
char *strsep (char **, const char *);
char *strtok_r (char *, const char *, char **);
void swab (const void *, void *, size_t);

}
# 10 "gist_btree.cc" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 61 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 30 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/ppc/types.h" 1 3 4
# 69 "/usr/include/ppc/types.h" 3 4
typedef signed char int8_t;
typedef unsigned char u_int8_t;
typedef short int16_t;
typedef unsigned short u_int16_t;
typedef int int32_t;
typedef unsigned int u_int32_t;
typedef long long int64_t;
typedef unsigned long long u_int64_t;

typedef int32_t register_t;

typedef long int intptr_t;
typedef unsigned long int uintptr_t;
# 31 "/usr/include/machine/types.h" 2 3 4
# 62 "/usr/include/stdlib.h" 2 3 4
# 71 "/usr/include/stdlib.h" 3 4
typedef int rune_t;





typedef int wchar_t;


typedef struct {
        int quot;
        int rem;
} div_t;

typedef struct {
        long quot;
        long rem;
} ldiv_t;
# 99 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;




extern "C" {
 void
         abort (void);
 int
         abs (int);
int atexit (void (*)(void));
double atof (const char *);
int atoi (const char *);
long atol (const char *);
void *bsearch (const void *, const void *, size_t, size_t, int (*)(const void *, const void *));

void *calloc (size_t, size_t);
 div_t
         div (int, int);
 void
         exit (int);
void free (void *);
char *getenv (const char *);
 long
         labs (long);
 ldiv_t
         ldiv (long, long);
void *malloc (size_t);
void qsort (void *, size_t, size_t, int (*)(const void *, const void *));

int rand (void);
void *realloc (void *, size_t);
void srand (unsigned);
double strtod (const char *, char **);
long strtol (const char *, char **, int);
unsigned long
         strtoul (const char *, char **, int);
int system (const char *);


int mblen (const char *, size_t);
size_t mbstowcs (wchar_t *, const char *, size_t);
int wctomb (char *, wchar_t);
int mbtowc (wchar_t *, const char *, size_t);
size_t wcstombs (char *, const wchar_t *, size_t);


int putenv (const char *);
int setenv (const char *, const char *, int);



double drand48 (void);
double erand48 (unsigned short[3]);
long jrand48 (unsigned short[3]);
void lcong48 (unsigned short[7]);
long lrand48 (void);
long mrand48 (void);
long nrand48 (unsigned short[3]);
unsigned short
        *seed48 (unsigned short[3]);
void srand48 (long);

void *alloca (size_t);

u_int32_t
         arc4random (void);
void arc4random_addrandom (unsigned char *dat, int datlen);
void arc4random_stir (void);
char *getbsize (int *, long *);
char *cgetcap (char *, char *, int);
int cgetclose (void);
int cgetent (char **, char **, char *);
int cgetfirst (char **, char **);
int cgetmatch (char *, char *);
int cgetnext (char **, char **);
int cgetnum (char *, char *, long *);
int cgetset (char *);
int cgetstr (char *, char *, char **);
int cgetustr (char *, char *, char **);

int daemon (int, int);
char *devname (int, int);
int getloadavg (double [], int);

long a64l (const char *);
char *l64a (long);

char *group_from_gid (unsigned long, int);
int heapsort (void *, size_t, size_t, int (*)(const void *, const void *));

char *initstate (unsigned long, char *, long);
int mergesort (void *, size_t, size_t, int (*)(const void *, const void *));

int radixsort (const unsigned char **, int, const unsigned char *, unsigned);

int sradixsort (const unsigned char **, int, const unsigned char *, unsigned);

int rand_r (unsigned *);
long random (void);
void *reallocf (void *, size_t);
char *realpath (const char *, char resolved_path[]);
char *setstate (char *);
void srandom (unsigned long);
char *user_from_uid (unsigned long, int);

long long
         strtoll(const char *, char **, int);
unsigned long long
         strtoull(const char *, char **, int);
long long
         strtoq (const char *, char **, int);
unsigned long long
         strtouq (const char *, char **, int);

void unsetenv (const char *);

}
# 11 "gist_btree.cc" 2
# 22 "gist_btree.cc"
# 1 "/Users/jmh/devel/libgist/include/gist_compat.h" 1
# 81 "/Users/jmh/devel/libgist/include/gist_compat.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 71 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
# 66 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4
# 75 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 30 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/ppc/endian.h" 1 3 4
# 81 "/usr/include/ppc/endian.h" 3 4
extern "C" {
unsigned long htonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntohl (unsigned long);
unsigned short ntohs (unsigned short);
}
# 31 "/usr/include/machine/endian.h" 2 3 4
# 76 "/usr/include/sys/types.h" 2 3 4


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;
typedef int32_t dev_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t off_t;
typedef int32_t pid_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef u_int32_t uid_t;
# 117 "/usr/include/sys/types.h" 3 4
typedef unsigned long clock_t;
# 127 "/usr/include/sys/types.h" 3 4
typedef int ssize_t;




typedef long time_t;
# 146 "/usr/include/sys/types.h" 3 4
typedef int32_t fd_mask;






typedef struct fd_set {
        fd_mask fds_bits[(((1024) + (((sizeof(fd_mask) * 8)) - 1)) / ((sizeof(fd_mask) * 8)))];
} fd_set;
# 182 "/usr/include/sys/types.h" 3 4
struct _pthread_handler_rec
{
        void (*routine)(void *);
        void *arg;
        struct _pthread_handler_rec *next;
};
# 202 "/usr/include/sys/types.h" 3 4
typedef struct _opaque_pthread_t { long sig; struct _pthread_handler_rec *cleanup_stack; char opaque[596];} *pthread_t;

typedef struct _opaque_pthread_attr_t { long sig; char opaque[36]; } pthread_attr_t;

typedef struct _opaque_pthread_mutexattr_t { long sig; char opaque[8]; } pthread_mutexattr_t;

typedef struct _opaque_pthread_mutex_t { long sig; char opaque[40]; } pthread_mutex_t;

typedef struct _opaque_pthread_condattr_t { long sig; char opaque[4]; } pthread_condattr_t;

typedef struct _opaque_pthread_cond_t { long sig; char opaque[24]; } pthread_cond_t;

typedef struct _opaque_pthread_rwlockattr_t { long sig; char opaque[12]; } pthread_rwlockattr_t;

typedef struct _opaque_pthread_rwlock_t { long sig; char opaque[124]; } pthread_rwlock_t;

typedef struct { long sig; char opaque[4]; } pthread_once_t;



typedef unsigned long pthread_key_t;
# 72 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 73 "/usr/include/unistd.h" 2 3 4
# 91 "/usr/include/unistd.h" 3 4
extern "C" {
 void
         _exit (int);
int access (const char *, int);
unsigned int alarm (unsigned int);
int chdir (const char *);
int chown (const char *, uid_t, gid_t);
int close (int);
size_t confstr (int, char *, size_t);
int dup (int);
int dup2 (int, int);
int execl (const char *, const char *, ...);
int execle (const char *, const char *, ...);
int execlp (const char *, const char *, ...);
int execv (const char *, char * const *);
int execve (const char *, char * const *, char * const *);
int execvp (const char *, char * const *);
pid_t fork (void);
long fpathconf (int, int);
char *getcwd (char *, size_t);
gid_t getegid (void);
uid_t geteuid (void);
gid_t getgid (void);
int getgroups (int, gid_t []);
char *getlogin (void);
pid_t getpgrp (void);
pid_t getpid (void);
pid_t getppid (void);
uid_t getuid (void);
int isatty (int);
int link (const char *, const char *);
off_t lseek (int, off_t, int);
long pathconf (const char *, int);
int pause (void);
int pipe (int *);
ssize_t read (int, void *, size_t);
int rmdir (const char *);
int setgid (gid_t);
int setpgid (pid_t, pid_t);
pid_t setsid (void);
int setuid (uid_t);
unsigned int sleep (unsigned int);
long sysconf (int);
pid_t tcgetpgrp (int);
int tcsetpgrp (int, pid_t);
char *ttyname (int);
int unlink (const char *);
ssize_t write (int, const void *, size_t);

extern char *optarg;
extern int optind, opterr, optopt, optreset;
int getopt (int, char * const [], const char *);



struct timeval;

int acct (const char *);
int async_daemon (void);
char *brk (const char *);
int chroot (const char *);
char *crypt (const char *, const char *);
int des_cipher (const char *, char *, long, int);
int des_setkey (const char *key);
int encrypt (char *, int);
void endusershell (void);
int exect (const char *, char * const *, char * const *);
int fchdir (int);
int fchown (int, int, int);
char *fflagstostr (u_long);
int fsync (int);
int ftruncate (int, off_t);
int getdtablesize (void);
int getgrouplist (const char *, int, int *, int *);
long gethostid (void);
int gethostname (char *, int);
mode_t getmode (const void *, mode_t);
 int
         getpagesize (void);
char *getpass (const char *);
int getpgid (pid_t _pid);
int getsid (pid_t _pid);
char *getusershell (void);
char *getwd (char *);
int initgroups (const char *, int);
int iruserok (unsigned long, int, const char *, const char *);
int issetugid (void);
char *mkdtemp (char *);
int mknod (const char *, mode_t, dev_t);
int mkstemp (char *);
int mkstemps (char *, int);
char *mktemp (char *);
int nfssvc (int, void *);
int nice (int);
ssize_t pread (int, void *, size_t, off_t);




# 1 "/usr/include/signal.h" 1 3 4
# 62 "/usr/include/signal.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 72 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/signal.h" 1 3 4
# 27 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/ppc/signal.h" 1 3 4
# 32 "/usr/include/ppc/signal.h" 3 4
typedef int sig_atomic_t;
# 50 "/usr/include/ppc/signal.h" 3 4
typedef enum {
        REGS_SAVED_NONE,
        REGS_SAVED_CALLER,


        REGS_SAVED_ALL
} regs_saved_t;
# 66 "/usr/include/ppc/signal.h" 3 4
struct sigcontext {
    int sc_onstack;
    int sc_mask;
        int sc_ir;
    int sc_psw;
    int sc_sp;
        void *sc_regs;
};
# 28 "/usr/include/machine/signal.h" 2 3 4
# 73 "/usr/include/sys/signal.h" 2 3 4
# 134 "/usr/include/sys/signal.h" 3 4
typedef unsigned int sigset_t;

union sigval {

        int sigval_int;
        void *sigval_ptr;
};







typedef struct __siginfo {
        int si_signo;
        int si_errno;
        int si_code;
        int si_pid;
        unsigned int si_uid;
        int si_status;
        void *si_addr;
        union sigval si_value;
        long si_band;
        int pad[7];
} siginfo_t;
# 208 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
        void (*__sa_handler)(int);
        void (*__sa_sigaction)(int, struct __siginfo *,
                       void *);
};


struct __sigaction {
        union __sigaction_u __sigaction_u;
        void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
        sigset_t sa_mask;
        int sa_flags;
};




struct sigaction {
        union __sigaction_u __sigaction_u;
        sigset_t sa_mask;
        int sa_flags;
};
# 263 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t) (int);




struct sigaltstack {
        char *ss_sp;
        int ss_size;
        int ss_flags;
};

typedef struct sigaltstack stack_t;
# 285 "/usr/include/sys/signal.h" 3 4
struct sigvec {
        void (*sv_handler)(int);
        int sv_mask;
        int sv_flags;
};
# 303 "/usr/include/sys/signal.h" 3 4
struct sigstack {
        char *ss_sp;
        int ss_onstack;
};
# 336 "/usr/include/sys/signal.h" 3 4
extern "C" {
void (*signal (int, void (*) (int))) (int);
}
# 63 "/usr/include/signal.h" 2 3 4


extern const char *const sys_signame[32];
extern const char *const sys_siglist[32];


extern "C" {
int raise (int);

int kill (pid_t, int);
int sigaction (int, const struct sigaction *, struct sigaction *);
int sigaddset (sigset_t *, int);
int sigdelset (sigset_t *, int);
int sigemptyset (sigset_t *);
int sigfillset (sigset_t *);
int sigismember (const sigset_t *, int);
int sigpending (sigset_t *);
int sigprocmask (int, const sigset_t *, sigset_t *);
int sigsuspend (const sigset_t *);

int killpg (pid_t, int);
int sigblock (int);
int siginterrupt (int, int);
int sighold (int);
int sigrelse (int);
int sigpause (int);
int sigreturn (struct sigcontext *);
int sigsetmask (int);
int sigvec (int, struct sigvec *, struct sigvec *);
void psignal (unsigned int, const char *);


}
# 191 "/usr/include/unistd.h" 2 3 4

int profil (char *, int, int, int);
ssize_t pwrite (int, const void *, size_t, off_t);
int rcmd (char **, int, const char *, const char *, const char *, int *);

char *re_comp (const char *);
int re_exec (const char *);
int readlink (const char *, char *, int);
int reboot (int);
int revoke (const char *);
int rresvport (int *);
int ruserok (const char *, int, const char *, const char *);
char *sbrk (int);
int select (int, fd_set *, fd_set *, fd_set *, struct timeval *);
int setegid (gid_t);
int seteuid (uid_t);
int setgroups (int, const gid_t *);
void sethostid (long);
int sethostname (const char *, int);
int setkey (const char *);
int setlogin (const char *);
void *setmode (const char *);
int setpgrp (pid_t pid, pid_t pgrp);
int setregid (gid_t, gid_t);
int setreuid (uid_t, uid_t);
int setrgid (gid_t);
int setruid (uid_t);
void setusershell (void);
int strtofflags (char **, u_long *, u_long *);
int swapon (const char *);
int symlink (const char *, const char *);
void sync (void);
int syscall (int, ...);
int truncate (const char *, off_t);
int ttyslot (void);
unsigned int ualarm (unsigned int, unsigned int);
int unwhiteout (const char *);
int usleep (unsigned int);
void *valloc (size_t);
pid_t vfork (void);

extern char *suboptarg;
int getsubopt (char **, char * const *, char **);


int getattrlist (const char*,void*,void*,size_t,unsigned long);
int setattrlist (const char*,void*,void*,size_t,unsigned long);
int exchangedata (const char*,const char*,unsigned long);
int checkuseraccess (const char*,uid_t,gid_t*,int,int,unsigned long);
int getdirentriesattr (int,void*,void*,size_t,unsigned long*,unsigned long*,unsigned long*,unsigned long);
int searchfs (const char*,void*,void*,unsigned long,unsigned long,void*);

int fsctl (const char *,unsigned long,void*,unsigned long);



}
# 82 "/Users/jmh/devel/libgist/include/gist_compat.h" 2
# 23 "gist_btree.cc" 2
# 1 "/Users/jmh/devel/libgist/include/gist_btree.h" 1
# 9 "/Users/jmh/devel/libgist/include/gist_btree.h"
#pragma interface "gist_btree.h"


# 1 "/Users/jmh/devel/libgist/include/gist_p.h" 1
# 10 "/Users/jmh/devel/libgist/include/gist_p.h"
#pragma interface "gist_p.h"


# 1 "/Users/jmh/devel/libgist/include/gist_defs.h" 1
# 10 "/Users/jmh/devel/libgist/include/gist_defs.h"
# 1 "/usr/include/gcc/darwin/3.3/assert.h" 1 3 4
# 40 "/usr/include/gcc/darwin/3.3/assert.h" 3 4
extern "C" {
extern void __eprintf (const char *, const char *, unsigned, const char *)
    __attribute__ ((noreturn));
}
# 11 "/Users/jmh/devel/libgist/include/gist_defs.h" 2
# 1 "/usr/include/gcc/darwin/3.3/c++/vector" 1 3
# 65 "/usr/include/gcc/darwin/3.3/c++/vector" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 1 3
# 34 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception_defines.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 2 3

namespace std
{

  void
  __throw_bad_exception(void);


  void
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_error(const char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throw_overflow_error(const char* __s);

  void
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}
# 67 "/usr/include/gcc/darwin/3.3/c++/vector" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 1 3
# 64 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_defines.h" 1 3
# 72 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_defines.h" 3
extern "C" {
# 83 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_defines.h" 3
typedef enum node_kinds {
        NODE_THREAD_SPECIFIC_DATA=1,
        NODE_PROCESSWIDE_PTR=2,
        NODE_LAST_KIND
        } TnodeKind ;





typedef enum node_mode {
        NM_ALLOW_RECURSION=1,
        NM_RECURSION_ILLEGAL=2,
        NM_ENHANCED_LOCKING=3,
        NM_LOCKED=4
        } TnodeMode ;



extern void * _keymgr_get_per_thread_data(unsigned int key) ;
extern void _keymgr_set_per_thread_data(unsigned int key, void *keydata) ;
extern void *_keymgr_get_and_lock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_and_unlock_processwide_ptr(unsigned int key, void *ptr) ;
extern void _keymgr_unlock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_lockmode_processwide_ptr(unsigned int key, unsigned int mode) ;
extern unsigned int _keymgr_get_lockmode_processwide_ptr(unsigned int key) ;
extern int _keymgr_get_lock_count_processwide_ptr(unsigned int key) ;
# 155 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_defines.h" 3
}
# 36 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 2 3
# 65 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cstring" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cstring" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/cstddef" 1 3
# 47 "/usr/include/gcc/darwin/3.3/c++/cstddef" 3

# 1 "/usr/include/stddef.h" 1 3 4
# 66 "/usr/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 49 "/usr/include/gcc/darwin/3.3/c++/cstddef" 2 3

namespace std
{
  using ::ptrdiff_t;
  using ::size_t;
}
# 50 "/usr/include/gcc/darwin/3.3/c++/cstring" 2 3
# 77 "/usr/include/gcc/darwin/3.3/c++/cstring" 3
namespace std
{
  using ::memcpy;
  using ::memmove;
  using ::strcpy;
  using ::strncpy;
  using ::strcat;
  using ::strncat;
  using ::memcmp;
  using ::strcmp;
  using ::strcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::strspn;
  using ::strtok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr;

  inline void*
  memchr(void* __p, int __c, size_t __n)
  { return memchr(const_cast<const void*>(__p), __c, __n); }

  using ::strchr;

  inline char*
  strchr(char* __s1, int __n)
  { return __builtin_strchr(const_cast<const char*>(__s1), __n); }

  using ::strpbrk;

  inline char*
  strpbrk(char* __s1, const char* __s2)
  { return __builtin_strpbrk(const_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  strrchr(char* __s1, int __n)
  { return __builtin_strrchr(const_cast<const char*>(__s1), __n); }

  using ::strstr;

  inline char*
  strstr(char* __s1, const char* __s2)
  { return __builtin_strstr(const_cast<const char*>(__s1), __s2); }
}
# 66 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/climits" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/climits" 3

# 1 "/usr/include/limits.h" 1 3 4
# 62 "/usr/include/limits.h" 3 4
# 1 "/usr/include/gcc/darwin/3.3/machine/limits.h" 1 3 4
# 24 "/usr/include/gcc/darwin/3.3/machine/limits.h" 3 4
# 1 "/usr/include/ppc/limits.h" 1 3 4
# 25 "/usr/include/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 64 "/usr/include/limits.h" 2 3 4
# 50 "/usr/include/gcc/darwin/3.3/c++/climits" 2 3
# 67 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
# 84 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
namespace std
{
  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;
  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;
  using ::qsort;
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;
  using ::wcstombs;
  using ::wctomb;

  inline long
  abs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }
}
# 68 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/usr/include/gcc/darwin/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/usr/include/gcc/darwin/3.3/c++/exception" 3
extern "C++" {

namespace std
{
# 52 "/usr/include/gcc/darwin/3.3/c++/exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();


    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }


    virtual ~bad_exception() throw();
  };


  typedef void (*terminate_handler) ();

  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();


  void terminate() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();


  void unexpected() __attribute__ ((__noreturn__));
# 100 "/usr/include/gcc/darwin/3.3/c++/exception" 3
  bool uncaught_exception() throw();
}

namespace __gnu_cxx
{
# 113 "/usr/include/gcc/darwin/3.3/c++/exception" 3
  void __verbose_terminate_handler ();
}

}
# 43 "/usr/include/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc() throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


  typedef void (*new_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/usr/include/gcc/darwin/3.3/c++/new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { };
inline void operator delete[](void*, void*) throw() { };

}
# 70 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 1 3
# 44 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3


# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 1 3
# 40 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/clocale" 3

# 1 "/usr/include/locale.h" 1 3 4
# 39 "/usr/include/locale.h" 3 4
struct lconv {
        char *decimal_point;
        char *thousands_sep;
        char *grouping;
        char *int_curr_symbol;
        char *currency_symbol;
        char *mon_decimal_point;
        char *mon_thousands_sep;
        char *mon_grouping;
        char *positive_sign;
        char *negative_sign;
        char int_frac_digits;
        char frac_digits;
        char p_cs_precedes;
        char p_sep_by_space;
        char n_cs_precedes;
        char n_sep_by_space;
        char p_sign_posn;
        char n_sign_posn;
};
# 76 "/usr/include/locale.h" 3 4
extern "C" {
struct lconv *localeconv (void);
char *setlocale (int, const char *);
}
# 50 "/usr/include/gcc/darwin/3.3/c++/clocale" 2 3





namespace std
{
  using ::lconv;
  using ::setlocale;
  using ::localeconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 2 3



namespace std
{
  typedef int* __c_locale;





  template<typename _Tv>
    int
    __convert_from_v(char* __out, const int __size, const char* __fmt,
                     _Tv __v, const __c_locale&, int __prec = -1)
    {
      char* __old = setlocale(0, 0);
      char* __sav = static_cast<char*>(malloc(strlen(__old) + 1));
      if (__sav)
        strcpy(__sav, __old);
      setlocale(0, "C");

      int __ret;






      if (__prec >= 0)
        __ret = sprintf(__out, __fmt, __prec, __v);
      else
        __ret = sprintf(__out, __fmt, __v);

      setlocale(0, __sav);
      free(__sav);
      return __ret;
    }
}
# 47 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cctype" 1 3
# 47 "/usr/include/gcc/darwin/3.3/c++/cctype" 3


# 1 "/usr/include/ctype.h" 1 3 4
# 68 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 66 "/usr/include/runetype.h" 3 4
typedef struct {
        rune_t min;
        rune_t max;
        rune_t map;
        unsigned long *types;
} _RuneEntry;

typedef struct {
        int nranges;
        _RuneEntry *ranges;
} _RuneRange;

typedef struct {
        char magic[8];
        char encoding[32];

        rune_t (*sgetrune)
            (const char *, size_t, char const **);
        int (*sputrune)
            (rune_t, char *, size_t, char **);
        rune_t invalid_rune;

        unsigned long runetype[(1 <<8 )];
        rune_t maplower[(1 <<8 )];
        rune_t mapupper[(1 <<8 )];






        _RuneRange runetype_ext;
        _RuneRange maplower_ext;
        _RuneRange mapupper_ext;

        void *variable;
        int variable_len;
} _RuneLocale;



extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;
# 69 "/usr/include/ctype.h" 2 3 4
# 100 "/usr/include/ctype.h" 3 4
extern "C" {
int isalnum (int);
int isalpha (int);
int iscntrl (int);
int isdigit (int);
int isgraph (int);
int islower (int);
int isprint (int);
int ispunct (int);
int isspace (int);
int isupper (int);
int isxdigit (int);
int tolower (int);
int toupper (int);


int digittoint (int);
int isascii (int);
int isblank (int);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram (int);
int isrune (int);
int isspecial (int);
int toascii (int);

}
# 158 "/usr/include/ctype.h" 3 4
extern "C" {
unsigned long ___runetype (int);
int ___tolower (int);
int ___toupper (int);
}
# 180 "/usr/include/ctype.h" 3 4
static inline int
__maskrune(int _c, unsigned long _f)
{
        return ((_c < 0 || _c >= (1 <<8 )) ? ___runetype(_c) :
                _CurrentRuneLocale->runetype[_c]) & _f;
}

static inline int
__istype(int c, unsigned long f)
{
        return !!(__maskrune(c, f));
}

static inline int
__isctype(int _c, unsigned long _f)
{
        return (_c < 0 || _c >= (1 <<8 )) ? 0 :
                !!(_DefaultRuneLocale.runetype[_c] & _f);
}

static inline int
__toupper(int _c)
{
        return (_c < 0 || _c >= (1 <<8 )) ? ___toupper(_c) :
                _CurrentRuneLocale->mapupper[_c];
}

static inline int
__tolower(int _c)
{
        return (_c < 0 || _c >= (1 <<8 )) ? ___tolower(_c) :
                _CurrentRuneLocale->maplower[_c];
}
# 50 "/usr/include/gcc/darwin/3.3/c++/cctype" 2 3
# 71 "/usr/include/gcc/darwin/3.3/c++/cctype" 3
extern "C" {
extern int isalnum(int c);
extern int isalpha(int c);
extern int iscntrl(int c);
extern int isdigit(int c);
extern int isgraph(int c);
extern int islower(int c);
extern int isprint(int c);
extern int ispunct(int c);
extern int isspace(int c);
extern int isupper(int c);
extern int isxdigit(int c);
}



namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}
# 48 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stringfwd.h" 1 3
# 43 "/usr/include/gcc/darwin/3.3/c++/bits/stringfwd.h" 3



namespace std
{
  template<typename _Alloc>
    class allocator;

  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;






}
# 49 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++io.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++io.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cstdio" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cstdio" 3




# 1 "/usr/include/stdio.h" 1 3 4
# 91 "/usr/include/stdio.h" 3 4
typedef off_t fpos_t;
# 107 "/usr/include/stdio.h" 3 4
struct __sbuf {
        unsigned char *_base;
        int _size;
};
# 138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
        unsigned char *_p;
        int _r;
        int _w;
        short _flags;
        short _file;
        struct __sbuf _bf;
        int _lbfsize;


        void *_cookie;
        int (*_close) (void *);
        int (*_read) (void *, char *, int);
        fpos_t (*_seek) (void *, fpos_t, int);
        int (*_write) (void *, const char *, int);


        struct __sbuf _ub;
        unsigned char *_up;
        int _ur;


        unsigned char _ubuf[3];
        unsigned char _nbuf[1];


        struct __sbuf _lb;


        int _blksize;
        fpos_t _offset;
} FILE;

extern "C" {
extern FILE __sF[];
}
# 241 "/usr/include/stdio.h" 3 4
extern "C" {
void clearerr (FILE *);
int fclose (FILE *);
int feof (FILE *);
int ferror (FILE *);
int fflush (FILE *);
int fgetc (FILE *);
int fgetpos (FILE *, fpos_t *);
char *fgets (char *, int, FILE *);
FILE *fopen (const char *, const char *);
int fprintf (FILE *, const char *, ...);
int fputc (int, FILE *);
int fputs (const char *, FILE *);
size_t fread (void *, size_t, size_t, FILE *);
FILE *freopen (const char *, const char *, FILE *);
int fscanf (FILE *, const char *, ...);
int fseek (FILE *, long, int);
int fsetpos (FILE *, const fpos_t *);
long ftell (FILE *);
size_t fwrite (const void *, size_t, size_t, FILE *);
int getc (FILE *);
int getchar (void);
char *gets (char *);

extern const int sys_nerr;
extern const char *const sys_errlist[];

void perror (const char *);
int printf (const char *, ...);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int remove (const char *);
int rename (const char *, const char *);
void rewind (FILE *);
int scanf (const char *, ...);
void setbuf (FILE *, char *);
int setvbuf (FILE *, char *, int, size_t);
int sprintf (char *, const char *, ...);
int sscanf (const char *, const char *, ...);
FILE *tmpfile (void);
char *tmpnam (char *);
int ungetc (int, FILE *);
int vfprintf (FILE *, const char *, __builtin_va_list);
int vprintf (const char *, __builtin_va_list);
int vsprintf (char *, const char *, __builtin_va_list);
int asprintf (char **, const char *, ...);
int vasprintf (char **, const char *, __builtin_va_list);
}
# 298 "/usr/include/stdio.h" 3 4
extern "C" {
char *ctermid (char *);
FILE *fdopen (int, const char *);
int fileno (FILE *);
}






extern "C" {
char *fgetln (FILE *, size_t *);
int fpurge (FILE *);
int fseeko (FILE *, fpos_t, int);
fpos_t ftello (FILE *);
int getw (FILE *);
int pclose (FILE *);
FILE *popen (const char *, const char *);
int putw (int, FILE *);
void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);
char *tempnam (const char *, const char *);
int snprintf (char *, size_t, const char *, ...);
int vsnprintf (char *, size_t, const char *, __builtin_va_list);
int vscanf (const char *, __builtin_va_list);
int vsscanf (const char *, const char *, __builtin_va_list);
FILE *zopen (const char *, const char *, int);
}
# 338 "/usr/include/stdio.h" 3 4
extern "C" {
FILE *funopen (const void *, int (*)(void *, char *, int), int (*)(void *, const char *, int), fpos_t (*)(void *, fpos_t, int), int (*)(void *));




}







extern "C" {
int __srget (FILE *);
int __svfscanf (FILE *, const char *, __builtin_va_list);
int __swbuf (int, FILE *);
}







static inline int __sputc(int _c, FILE *_p) {
        if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
                return (*_p->_p++ = _c);
        else
                return (__swbuf(_c, _p));
}
# 53 "/usr/include/gcc/darwin/3.3/c++/cstdio" 2 3
# 97 "/usr/include/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
}
# 36 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++io.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr.h" 1 3
# 98 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 1 3
# 37 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 3
# 1 "/usr/include/pthread.h" 1 3 4
# 34 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/pthread_impl.h" 1 3 4
# 35 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errno.h" 3 4
extern "C" {
extern int * __error (void);

}
# 23 "/usr/include/errno.h" 2 3 4
# 37 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 10 "/usr/include/sched.h" 3 4
struct sched_param { int sched_priority; char opaque[4]; };


extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 88 "/usr/include/time.h" 3 4
struct timespec {
        time_t tv_sec;
        long tv_nsec;
};


struct tm {
        int tm_sec;
        int tm_min;
        int tm_hour;
        int tm_mday;
        int tm_mon;
        int tm_year;
        int tm_wday;
        int tm_yday;
        int tm_isdst;
        long tm_gmtoff;
        char *tm_zone;
};
# 115 "/usr/include/time.h" 3 4
extern char *tzname[];


extern "C" {
char *asctime (const struct tm *);
clock_t clock (void);
char *ctime (const time_t *);
double difftime (time_t, time_t);
struct tm *gmtime (const time_t *);
struct tm *localtime (const time_t *);
time_t mktime (struct tm *);
size_t strftime (char *, size_t, const char *, const struct tm *);
time_t time (time_t *);


void tzset (void);



char *asctime_r (const struct tm *, char *);
char *ctime_r (const time_t *, char *);
struct tm *gmtime_r (const time_t *, struct tm *);
struct tm *localtime_r (const time_t *, struct tm *);
char *strptime (const char *, const char *, struct tm *);
char *timezone (int, int);
void tzsetwall (void);
time_t timelocal (struct tm * const);
time_t timegm (struct tm * const);



int nanosleep (const struct timespec *, struct timespec *);

}
# 39 "/usr/include/pthread.h" 2 3 4





# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 64 "/usr/include/mach/mach_types.h" 3 4
# 1 "/usr/include/gcc/darwin/3.3/stdint.h" 1 3 4
# 34 "/usr/include/gcc/darwin/3.3/stdint.h" 3 4
typedef u_int8_t uint8_t;
typedef u_int16_t uint16_t;
typedef u_int32_t uint32_t;
typedef u_int64_t uint64_t;



typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 68 "/usr/include/gcc/darwin/3.3/stdint.h" 3 4
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 65 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/host_info.h" 1 3 4
# 62 "/usr/include/mach/host_info.h" 3 4
# 1 "/usr/include/mach/vm_statistics.h" 1 3 4
# 63 "/usr/include/mach/vm_statistics.h" 3 4
# 1 "/usr/include/mach/machine/vm_types.h" 1 3 4
# 27 "/usr/include/mach/machine/vm_types.h" 3 4
# 1 "/usr/include/mach/ppc/vm_types.h" 1 3 4
# 77 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef unsigned int natural_t;
# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int space_t;
# 28 "/usr/include/mach/machine/vm_types.h" 2 3 4
# 64 "/usr/include/mach/vm_statistics.h" 2 3 4

struct vm_statistics {
        integer_t free_count;
        integer_t active_count;
        integer_t inactive_count;
        integer_t wire_count;
        integer_t zero_fill_count;
        integer_t reactivations;
        integer_t pageins;
        integer_t pageouts;
        integer_t faults;
        integer_t cow_faults;
        integer_t lookups;
        integer_t hits;
};

typedef struct vm_statistics *vm_statistics_t;
typedef struct vm_statistics vm_statistics_data_t;
# 99 "/usr/include/mach/vm_statistics.h" 3 4
struct pmap_statistics {
        integer_t resident_count;
        integer_t wired_count;
};

typedef struct pmap_statistics *pmap_statistics_t;
# 63 "/usr/include/mach/host_info.h" 2 3 4
# 1 "/usr/include/mach/machine.h" 1 3 4
# 60 "/usr/include/mach/machine.h" 3 4
# 1 "/usr/include/mach/boolean.h" 1 3 4
# 127 "/usr/include/mach/boolean.h" 3 4
# 1 "/usr/include/mach/machine/boolean.h" 1 3 4
# 27 "/usr/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/mach/ppc/boolean.h" 1 3 4
# 129 "/usr/include/mach/ppc/boolean.h" 3 4
typedef int boolean_t;
# 28 "/usr/include/mach/machine/boolean.h" 2 3 4
# 128 "/usr/include/mach/boolean.h" 2 3 4
# 61 "/usr/include/mach/machine.h" 2 3 4
# 71 "/usr/include/mach/machine.h" 3 4
struct machine_info {
        integer_t major_version;
        integer_t minor_version;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size_t memory_size;
};

typedef struct machine_info *machine_info_t;
typedef struct machine_info machine_info_data_t;

typedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
# 64 "/usr/include/mach/host_info.h" 2 3 4

# 1 "/usr/include/mach/time_value.h" 1 3 4
# 62 "/usr/include/mach/time_value.h" 3 4
struct time_value {
        integer_t seconds;
        integer_t microseconds;
};
typedef struct time_value time_value_t;
# 106 "/usr/include/mach/time_value.h" 3 4
typedef struct mapped_time_value {
        integer_t seconds;
        integer_t microseconds;
        integer_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_info.h" 2 3 4




typedef integer_t *host_info_t;


typedef integer_t host_info_data_t[(1024)];


typedef char kernel_version_t[(512)];


typedef char kernel_boot_info_t[(4096)];







typedef integer_t host_flavor_t;







struct host_basic_info {
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size_t memory_size;
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;
};

typedef struct host_basic_info host_basic_info_data_t;
typedef struct host_basic_info *host_basic_info_t;



struct host_sched_info {
        integer_t min_timeout;
        integer_t min_quantum;
};

typedef struct host_sched_info host_sched_info_data_t;
typedef struct host_sched_info *host_sched_info_t;



struct kernel_resource_sizes {
        vm_size_t task;
        vm_size_t thread;
        vm_size_t port;
        vm_size_t memory_region;
        vm_size_t memory_object;
};

typedef struct kernel_resource_sizes kernel_resource_sizes_data_t;
typedef struct kernel_resource_sizes *kernel_resource_sizes_t;



struct host_priority_info {
        integer_t kernel_priority;
        integer_t system_priority;
        integer_t server_priority;
        integer_t user_priority;
        integer_t depress_priority;
        integer_t idle_priority;
        integer_t minimum_priority;
        integer_t maximum_priority;
};

typedef struct host_priority_info host_priority_info_data_t;
typedef struct host_priority_info *host_priority_info_t;
# 152 "/usr/include/mach/host_info.h" 3 4
struct host_load_info {
        integer_t avenrun[3];
        integer_t mach_factor[3];
};

typedef struct host_load_info host_load_info_data_t;
typedef struct host_load_info *host_load_info_t;







struct host_cpu_load_info {
        unsigned long cpu_ticks[4];
};
typedef struct host_cpu_load_info host_cpu_load_info_data_t;
typedef struct host_cpu_load_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 67 "/usr/include/mach/memory_object_types.h" 3 4
# 1 "/usr/include/mach/port.h" 1 3 4
# 91 "/usr/include/mach/port.h" 3 4
typedef natural_t port_name_t;
typedef port_name_t *port_name_array_t;


typedef port_name_t port_t;
# 117 "/usr/include/mach/port.h" 3 4
typedef port_t mach_port_t;
typedef port_t *mach_port_array_t;
typedef port_name_t mach_port_name_t;
typedef mach_port_name_t *mach_port_name_array_t;
# 165 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_right_t;
# 174 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_type_t;
typedef mach_port_type_t *mach_port_type_array_t;
# 206 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_urefs_t;
typedef integer_t mach_port_delta_t;



typedef natural_t mach_port_seqno_t;
typedef natural_t mach_port_mscount_t;
typedef natural_t mach_port_msgcount_t;
typedef natural_t mach_port_rights_t;






typedef unsigned int mach_port_srights_t;

typedef struct mach_port_status {
        mach_port_name_t mps_pset;
        mach_port_seqno_t mps_seqno;
        mach_port_mscount_t mps_mscount;
        mach_port_msgcount_t mps_qlimit;
        mach_port_msgcount_t mps_msgcount;
        mach_port_rights_t mps_sorights;
        boolean_t mps_srights;
        boolean_t mps_pdrequest;
        boolean_t mps_nsrequest;
        unsigned int mps_flags;
} mach_port_status_t;




typedef struct mach_port_limits {
        mach_port_msgcount_t mpl_qlimit;
} mach_port_limits_t;

typedef integer_t *mach_port_info_t;


typedef int mach_port_flavor_t;
# 262 "/usr/include/mach/port.h" 3 4
typedef struct mach_port_qos {
        boolean_t name:1;
        boolean_t prealloc:1;
        boolean_t pad1:30;
        natural_t len;
} mach_port_qos_t;
# 68 "/usr/include/mach/memory_object_types.h" 2 3 4
# 1 "/usr/include/mach/vm_types.h" 1 3 4
# 35 "/usr/include/mach/vm_types.h" 3 4
typedef vm_offset_t pointer_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t vm_object_offset_t;


typedef mach_port_t vm_map_t;
# 49 "/usr/include/mach/vm_types.h" 3 4
typedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_object_types.h" 2 3 4






typedef unsigned long long memory_object_offset_t;
typedef unsigned long long memory_object_size_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memory_object_t *memory_object_array_t;




typedef mach_port_t memory_object_name_t;



typedef mach_port_t memory_object_default_t;
# 106 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memory_object_copy_strategy_t;
# 142 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memory_object_return_t;
# 169 "/usr/include/mach/memory_object_types.h" 3 4
typedef int *memory_object_info_t;
typedef int memory_object_flavor_t;
typedef int memory_object_info_data_t[(1024)];
# 182 "/usr/include/mach/memory_object_types.h" 3 4
struct old_memory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t invalidate;
};

struct old_memory_object_attr_info {
        boolean_t object_ready;
        boolean_t may_cache;
        memory_object_copy_strategy_t copy_strategy;
};

typedef struct old_memory_object_behave_info *old_memory_object_behave_info_t;
typedef struct old_memory_object_behave_info old_memory_object_behave_info_data_t;
typedef struct old_memory_object_attr_info *old_memory_object_attr_info_t;
typedef struct old_memory_object_attr_info old_memory_object_attr_info_data_t;







struct memory_object_perf_info {
        vm_size_t cluster_size;
        boolean_t may_cache;
};

struct memory_object_attr_info {
        memory_object_copy_strategy_t copy_strategy;
        vm_offset_t cluster_size;
        boolean_t may_cache_object;
        boolean_t temporary;
};

struct memory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t invalidate;
        boolean_t silent_overwrite;
        boolean_t advisory_pageout;
};


typedef struct memory_object_behave_info *memory_object_behave_info_t;
typedef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_perf_info *memory_object_perf_info_t;
typedef struct memory_object_perf_info memory_object_perf_info_data_t;

typedef struct memory_object_attr_info *memory_object_attr_info_t;
typedef struct memory_object_attr_info memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memory_object_types.h" 3 4
struct upl_page_info {
        vm_offset_t phys_addr;
        unsigned int
                        pageout:1,
                        absent:1,
                        dirty:1,
                        precious:1,
                        device:1,
                        :0;
};

typedef struct upl_page_info upl_page_info_t;
typedef upl_page_info_t *upl_page_info_array_t;
typedef upl_page_info_array_t upl_page_list_ptr_t;
# 70 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exception_types.h" 1 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exception.h" 1 3 4
# 27 "/usr/include/mach/machine/exception.h" 3 4
# 1 "/usr/include/mach/ppc/exception.h" 1 3 4
# 28 "/usr/include/mach/machine/exception.h" 2 3 4
# 57 "/usr/include/mach/exception_types.h" 2 3 4
# 147 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/thread_status.h" 1 3 4
# 70 "/usr/include/mach/thread_status.h" 3 4
# 1 "/usr/include/mach/machine/thread_status.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_thread_state {
        unsigned int srr0;
        unsigned int srr1;
        unsigned int r0;
        unsigned int r1;
        unsigned int r2;
        unsigned int r3;
        unsigned int r4;
        unsigned int r5;
        unsigned int r6;
        unsigned int r7;
        unsigned int r8;
        unsigned int r9;
        unsigned int r10;
        unsigned int r11;
        unsigned int r12;
        unsigned int r13;
        unsigned int r14;
        unsigned int r15;
        unsigned int r16;
        unsigned int r17;
        unsigned int r18;
        unsigned int r19;
        unsigned int r20;
        unsigned int r21;
        unsigned int r22;
        unsigned int r23;
        unsigned int r24;
        unsigned int r25;
        unsigned int r26;
        unsigned int r27;
        unsigned int r28;
        unsigned int r29;
        unsigned int r30;
        unsigned int r31;

        unsigned int cr;
        unsigned int xer;
        unsigned int lr;
        unsigned int ctr;
        unsigned int mq;

        unsigned int vrsave;
} ppc_thread_state_t;



typedef struct ppc_float_state {
        double fpregs[32];

        unsigned int fpscr_pad;
        unsigned int fpscr;
} ppc_float_state_t;

typedef struct ppc_vector_state {
        unsigned long save_vr[32][4];
        unsigned long save_vscr[4];
        unsigned int save_pad5[4];
        unsigned int save_vrvalid;
        unsigned int save_pad6[7];
} ppc_vector_state_t;
# 132 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_thread_state ppc_saved_state_t;
# 148 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_exception_state {
        unsigned long dar;
        unsigned long dsisr;
        unsigned long exception;
        unsigned long pad0;

        unsigned long pad1[4];
} ppc_exception_state_t;
# 28 "/usr/include/mach/machine/thread_status.h" 2 3 4
# 71 "/usr/include/mach/thread_status.h" 2 3 4
# 1 "/usr/include/mach/machine/thread_state.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_state.h" 3 4
# 1 "/usr/include/mach/ppc/thread_state.h" 1 3 4
# 28 "/usr/include/mach/machine/thread_state.h" 2 3 4
# 72 "/usr/include/mach/thread_status.h" 2 3 4





typedef natural_t *thread_state_t;


typedef int thread_state_data_t[(144)];



typedef int thread_state_flavor_t;
typedef thread_state_flavor_t *thread_state_flavor_array_t;
# 148 "/usr/include/mach/exception_types.h" 2 3 4





typedef int exception_type_t;
typedef integer_t exception_data_type_t;
typedef int exception_behavior_t;
typedef integer_t *exception_data_t;
typedef unsigned int exception_mask_t;
typedef exception_mask_t *exception_mask_array_t;
typedef exception_behavior_t *exception_behavior_array_t;
typedef thread_state_flavor_t *exception_flavor_array_t;
typedef mach_port_t *exception_port_array_t;
# 71 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/processor_info.h" 1 3 4
# 65 "/usr/include/mach/processor_info.h" 3 4
# 1 "/usr/include/mach/machine/processor_info.h" 1 3 4
# 27 "/usr/include/mach/machine/processor_info.h" 3 4
# 1 "/usr/include/mach/ppc/processor_info.h" 1 3 4
# 43 "/usr/include/mach/ppc/processor_info.h" 3 4
typedef union {
        unsigned int word;
        struct {
                unsigned int dis : 1;
                unsigned int dp : 1;
                unsigned int du : 1;
                unsigned int dms : 1;
                unsigned int dmr : 1;
                unsigned int reserved3 : 1;
                unsigned int reserved4 : 1;
                unsigned int reserved5 : 2;
                unsigned int reserved6 : 1;
                unsigned int threshold : 6;
                unsigned int reserved7 : 1;
                unsigned int reserved8 : 1;
                unsigned int reserved9 : 1;
                unsigned int pmc1select : 7;
                unsigned int pmc2select : 6;
        }bits;
}mmcr0_t;

typedef union {
        unsigned int word;
        struct {
                unsigned int pmc3select : 5;
                unsigned int pmc4select : 5;
                unsigned int reserved : 22;
        }bits;
}mmcr1_t;

typedef union {
        unsigned int word;
        struct {
                unsigned int threshmult : 1;
                unsigned int reserved : 31;
        }bits;
}mmcr2_t;

typedef union {
        unsigned int word;
        struct {
                unsigned int ov : 1;
                unsigned int cv : 31;
        }bits;
}pmcn_t;





struct processor_pm_regs {
      union {
        mmcr0_t mmcr0;
        mmcr1_t mmcr1;
        mmcr2_t mmcr2;
      }u;
      pmcn_t pmc[2];
};

typedef struct processor_pm_regs processor_pm_regs_data_t;
typedef struct processor_pm_regs *processor_pm_regs_t;
# 119 "/usr/include/mach/ppc/processor_info.h" 3 4
typedef unsigned int processor_temperature_data_t;
typedef unsigned int *processor_temperature_t;



union processor_control_data {
        processor_pm_regs_data_t cmd_pm_regs[3];
};

struct processor_control_cmd {
    integer_t cmd_op;
    cpu_type_t cmd_cpu_type;
    cpu_subtype_t cmd_cpu_subtype;
    union processor_control_data u;
};

typedef struct processor_control_cmd processor_control_cmd_data_t;
typedef struct processor_control_cmd *processor_control_cmd_t;
# 28 "/usr/include/mach/machine/processor_info.h" 2 3 4
# 66 "/usr/include/mach/processor_info.h" 2 3 4




typedef integer_t *processor_info_t;
typedef integer_t *processor_info_array_t;


typedef integer_t processor_info_data_t[(1024)];


typedef integer_t *processor_set_info_t;


typedef integer_t processor_set_info_data_t[(1024)];




typedef int processor_flavor_t;





struct processor_basic_info {
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;
        boolean_t running;
        int slot_num;
        boolean_t is_master;
};

typedef struct processor_basic_info processor_basic_info_data_t;
typedef struct processor_basic_info *processor_basic_info_t;



struct processor_cpu_load_info {
        unsigned long cpu_ticks[4];
};

typedef struct processor_cpu_load_info processor_cpu_load_info_data_t;
typedef struct processor_cpu_load_info *processor_cpu_load_info_t;
# 118 "/usr/include/mach/processor_info.h" 3 4
typedef int processor_set_flavor_t;


struct processor_set_basic_info {
        int processor_count;
        int default_policy;
};

typedef struct processor_set_basic_info processor_set_basic_info_data_t;
typedef struct processor_set_basic_info *processor_set_basic_info_t;





struct processor_set_load_info {
        int task_count;
        int thread_count;
        integer_t load_average;
        integer_t mach_factor;
};

typedef struct processor_set_load_info processor_set_load_info_data_t;
typedef struct processor_set_load_info *processor_set_load_info_t;
# 73 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_info.h" 1 3 4
# 66 "/usr/include/mach/task_info.h" 3 4
# 1 "/usr/include/mach/policy.h" 1 3 4
# 72 "/usr/include/mach/policy.h" 3 4
typedef int policy_t;
typedef integer_t *policy_info_t;
typedef integer_t *policy_base_t;
typedef integer_t *policy_limit_t;
# 108 "/usr/include/mach/policy.h" 3 4
struct policy_timeshare_base {
        integer_t base_priority;
};
struct policy_timeshare_limit {
        integer_t max_priority;
};
struct policy_timeshare_info {
        integer_t max_priority;
        integer_t base_priority;
        integer_t cur_priority;
        boolean_t depressed;
        integer_t depress_priority;
};

typedef struct policy_timeshare_base *policy_timeshare_base_t;
typedef struct policy_timeshare_limit *policy_timeshare_limit_t;
typedef struct policy_timeshare_info *policy_timeshare_info_t;

typedef struct policy_timeshare_base policy_timeshare_base_data_t;
typedef struct policy_timeshare_limit policy_timeshare_limit_data_t;
typedef struct policy_timeshare_info policy_timeshare_info_data_t;
# 142 "/usr/include/mach/policy.h" 3 4
struct policy_rr_base {
        integer_t base_priority;
        integer_t quantum;
};
struct policy_rr_limit {
        integer_t max_priority;
};
struct policy_rr_info {
        integer_t max_priority;
        integer_t base_priority;
        integer_t quantum;
        boolean_t depressed;
        integer_t depress_priority;
};

typedef struct policy_rr_base *policy_rr_base_t;
typedef struct policy_rr_limit *policy_rr_limit_t;
typedef struct policy_rr_info *policy_rr_info_t;

typedef struct policy_rr_base policy_rr_base_data_t;
typedef struct policy_rr_limit policy_rr_limit_data_t;
typedef struct policy_rr_info policy_rr_info_data_t;
# 176 "/usr/include/mach/policy.h" 3 4
struct policy_fifo_base {
        integer_t base_priority;
};
struct policy_fifo_limit {
        integer_t max_priority;
};
struct policy_fifo_info {
        integer_t max_priority;
        integer_t base_priority;
        boolean_t depressed;
        integer_t depress_priority;
};

typedef struct policy_fifo_base *policy_fifo_base_t;
typedef struct policy_fifo_limit *policy_fifo_limit_t;
typedef struct policy_fifo_info *policy_fifo_info_t;

typedef struct policy_fifo_base policy_fifo_base_data_t;
typedef struct policy_fifo_limit policy_fifo_limit_data_t;
typedef struct policy_fifo_info policy_fifo_info_data_t;
# 208 "/usr/include/mach/policy.h" 3 4
struct policy_bases {
        policy_timeshare_base_data_t ts;
        policy_rr_base_data_t rr;
        policy_fifo_base_data_t fifo;
};

struct policy_limits {
        policy_timeshare_limit_data_t ts;
        policy_rr_limit_data_t rr;
        policy_fifo_limit_data_t fifo;
};

struct policy_infos {
        policy_timeshare_info_data_t ts;
        policy_rr_info_data_t rr;
        policy_fifo_info_data_t fifo;
};

typedef struct policy_bases policy_base_data_t;
typedef struct policy_limits policy_limit_data_t;
typedef struct policy_infos policy_info_data_t;
# 67 "/usr/include/mach/task_info.h" 2 3 4






typedef natural_t task_flavor_t;
typedef integer_t *task_info_t;


typedef integer_t task_info_data_t[(1024)];







struct task_basic_info {
        integer_t suspend_count;
        vm_size_t virtual_size;
        vm_size_t resident_size;
        time_value_t user_time;

        time_value_t system_time;

        policy_t policy;
};

typedef struct task_basic_info task_basic_info_data_t;
typedef struct task_basic_info *task_basic_info_t;






struct task_events_info {
        integer_t faults;
        integer_t pageins;
        integer_t cow_faults;
        integer_t messages_sent;
        integer_t messages_received;
        integer_t syscalls_mach;
        integer_t syscalls_unix;
        integer_t csw;
};
typedef struct task_events_info task_events_info_data_t;
typedef struct task_events_info *task_events_info_t;






struct task_thread_times_info {
        time_value_t user_time;

        time_value_t system_time;

};

typedef struct task_thread_times_info task_thread_times_info_data_t;
typedef struct task_thread_times_info *task_thread_times_info_t;
# 74 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_policy.h" 1 3 4
# 37 "/usr/include/mach/task_policy.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "/usr/include/mach/task_policy.h" 2 3 4
# 56 "/usr/include/mach/task_policy.h" 3 4
typedef natural_t task_policy_flavor_t;
typedef integer_t *task_policy_t;
# 111 "/usr/include/mach/task_policy.h" 3 4
enum task_role {
        TASK_RENICED = -1,
        TASK_UNSPECIFIED = 0,
        TASK_FOREGROUND_APPLICATION,
        TASK_BACKGROUND_APPLICATION,
        TASK_CONTROL_APPLICATION,
        TASK_GRAPHICS_SERVER
};

typedef enum task_role task_role_t;

struct task_category_policy {
        task_role_t role;
};

typedef struct task_category_policy task_category_policy_data_t;
typedef struct task_category_policy *task_category_policy_t;
# 75 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_special_ports.h" 1 3 4
# 66 "/usr/include/mach/task_special_ports.h" 3 4
typedef int task_special_port_t;
# 76 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_info.h" 1 3 4
# 76 "/usr/include/mach/thread_info.h" 3 4
typedef natural_t thread_flavor_t;
typedef integer_t *thread_info_t;


typedef integer_t thread_info_data_t[(1024)];






struct thread_basic_info {
        time_value_t user_time;
        time_value_t system_time;
        integer_t cpu_usage;
        policy_t policy;
        integer_t run_state;
        integer_t flags;
        integer_t suspend_count;
        integer_t sleep_time;

};

typedef struct thread_basic_info thread_basic_info_data_t;
typedef struct thread_basic_info *thread_basic_info_t;
# 77 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_policy.h" 1 3 4
# 56 "/usr/include/mach/thread_policy.h" 3 4
typedef natural_t thread_policy_flavor_t;
typedef integer_t *thread_policy_t;
# 91 "/usr/include/mach/thread_policy.h" 3 4
struct thread_standard_policy {
        natural_t no_data;
};

typedef struct thread_standard_policy thread_standard_policy_data_t;
typedef struct thread_standard_policy *thread_standard_policy_t;
# 114 "/usr/include/mach/thread_policy.h" 3 4
struct thread_extended_policy {
        boolean_t timeshare;
};

typedef struct thread_extended_policy thread_extended_policy_data_t;
typedef struct thread_extended_policy *thread_extended_policy_t;
# 153 "/usr/include/mach/thread_policy.h" 3 4
struct thread_time_constraint_policy {
        uint32_t period;
        uint32_t computation;
        uint32_t constraint;
        boolean_t preemptible;
};

typedef struct thread_time_constraint_policy thread_time_constraint_policy_data_t;

typedef struct thread_time_constraint_policy *thread_time_constraint_policy_t;
# 181 "/usr/include/mach/thread_policy.h" 3 4
struct thread_precedence_policy {
        integer_t importance;
};

typedef struct thread_precedence_policy thread_precedence_policy_data_t;
typedef struct thread_precedence_policy *thread_precedence_policy_t;
# 78 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_special_ports.h" 1 3 4
# 79 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/mach/clock_types.h" 1 3 4
# 46 "/usr/include/mach/clock_types.h" 3 4
typedef int alarm_type_t;
typedef int sleep_type_t;
typedef int clock_id_t;
typedef int clock_flavor_t;
typedef int *clock_attr_t;
typedef int clock_res_t;




struct mach_timespec {
        unsigned int tv_sec;
        clock_res_t tv_nsec;
};
typedef struct mach_timespec mach_timespec_t;
# 82 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_attributes.h" 1 3 4
# 70 "/usr/include/mach/vm_attributes.h" 3 4
typedef unsigned int vm_machine_attribute_t;
# 79 "/usr/include/mach/vm_attributes.h" 3 4
typedef int vm_machine_attribute_val_t;
# 83 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_inherit.h" 1 3 4
# 69 "/usr/include/mach/vm_inherit.h" 3 4
typedef unsigned int vm_inherit_t;
# 84 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_behavior.h" 1 3 4
# 41 "/usr/include/mach/vm_behavior.h" 3 4
typedef int vm_behavior_t;
# 85 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_prot.h" 1 3 4
# 69 "/usr/include/mach/vm_prot.h" 3 4
typedef int vm_prot_t;
# 86 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/vm_sync.h" 1 3 4
# 60 "/usr/include/mach/vm_sync.h" 3 4
typedef unsigned vm_sync_t;
# 88 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/vm_region.h" 1 3 4
# 47 "/usr/include/mach/vm_region.h" 3 4
typedef int *vm_region_info_t;
typedef int *vm_region_info_64_t;
typedef int *vm_region_recurse_info_t;
typedef int *vm_region_recurse_info_64_t;
typedef int vm_region_flavor_t;
typedef int vm_region_info_data_t[(1024)];



struct vm_region_basic_info_64 {
        vm_prot_t protection;
        vm_prot_t max_protection;
        vm_inherit_t inheritance;
        boolean_t shared;
        boolean_t reserved;
        vm_object_offset_t offset;
        vm_behavior_t behavior;
        unsigned short user_wired_count;
};

typedef struct vm_region_basic_info_64 *vm_region_basic_info_64_t;
typedef struct vm_region_basic_info_64 vm_region_basic_info_data_64_t;





struct vm_region_basic_info {
        vm_prot_t protection;
        vm_prot_t max_protection;
        vm_inherit_t inheritance;
        boolean_t shared;
        boolean_t reserved;



        vm_offset_t offset;

        vm_behavior_t behavior;
        unsigned short user_wired_count;
};

typedef struct vm_region_basic_info *vm_region_basic_info_t;
typedef struct vm_region_basic_info vm_region_basic_info_data_t;
# 116 "/usr/include/mach/vm_region.h" 3 4
struct vm_region_extended_info {
        vm_prot_t protection;
        unsigned int user_tag;
        unsigned int pages_resident;
        unsigned int pages_shared_now_private;
        unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned char external_pager;
        unsigned char share_mode;
};

typedef struct vm_region_extended_info *vm_region_extended_info_t;
typedef struct vm_region_extended_info vm_region_extended_info_data_t;







struct vm_region_top_info {
        unsigned int obj_id;
        unsigned int ref_count;
        unsigned int private_pages_resident;
        unsigned int shared_pages_resident;
        unsigned char share_mode;
};

typedef struct vm_region_top_info *vm_region_top_info_t;
typedef struct vm_region_top_info vm_region_top_info_data_t;
# 173 "/usr/include/mach/vm_region.h" 3 4
struct vm_region_submap_info {
        vm_prot_t protection;
        vm_prot_t max_protection;
        vm_inherit_t inheritance;



        vm_offset_t offset;

        unsigned int user_tag;
        unsigned int pages_resident;
        unsigned int pages_shared_now_private;
        unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned char external_pager;
        unsigned char share_mode;
        boolean_t is_submap;
        vm_behavior_t behavior;
        vm_offset_t object_id;
        unsigned short user_wired_count;
};

typedef struct vm_region_submap_info *vm_region_submap_info_t;
typedef struct vm_region_submap_info vm_region_submap_info_data_t;






struct vm_region_submap_info_64 {
        vm_prot_t protection;
        vm_prot_t max_protection;
        vm_inherit_t inheritance;
        vm_object_offset_t offset;
        unsigned int user_tag;
        unsigned int pages_resident;
        unsigned int pages_shared_now_private;
        unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned char external_pager;
        unsigned char share_mode;
        boolean_t is_submap;
        vm_behavior_t behavior;
        vm_offset_t object_id;
        unsigned short user_wired_count;
};

typedef struct vm_region_submap_info_64 *vm_region_submap_info_64_t;
typedef struct vm_region_submap_info_64 vm_region_submap_info_data_64_t;





struct vm_read_entry {
        vm_address_t address;
        vm_size_t size;
};



typedef struct vm_read_entry vm_read_entry_t[(256)];
# 90 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/kmod.h" 1 3 4
# 34 "/usr/include/mach/kmod.h" 3 4
# 1 "/usr/include/mach/kern_return.h" 1 3 4
# 64 "/usr/include/mach/kern_return.h" 3 4
# 1 "/usr/include/mach/machine/kern_return.h" 1 3 4
# 27 "/usr/include/mach/machine/kern_return.h" 3 4
# 1 "/usr/include/mach/ppc/kern_return.h" 1 3 4
# 135 "/usr/include/mach/ppc/kern_return.h" 3 4
typedef int kern_return_t;
# 28 "/usr/include/mach/machine/kern_return.h" 2 3 4
# 65 "/usr/include/mach/kern_return.h" 2 3 4
# 35 "/usr/include/mach/kmod.h" 2 3 4
# 54 "/usr/include/mach/kmod.h" 3 4
typedef int kmod_t;
typedef int kmod_control_flavor_t;
typedef void* kmod_args_t;



typedef struct kmod_reference {
        struct kmod_reference *next;
        struct kmod_info *info;
} kmod_reference_t;
# 73 "/usr/include/mach/kmod.h" 3 4
typedef kern_return_t kmod_start_func_t(struct kmod_info *ki, void *data);
typedef kern_return_t kmod_stop_func_t(struct kmod_info *ki, void *data);

typedef struct kmod_info {
        struct kmod_info *next;
        int info_version;
        int id;
        char name[64];
        char version[64];
        int reference_count;
        kmod_reference_t *reference_list;
        vm_address_t address;
        vm_size_t size;
        vm_size_t hdr_size;
        kmod_start_func_t *start;
        kmod_stop_func_t *stop;
} kmod_info_t;



typedef kmod_info_t *kmod_info_array_t;
# 134 "/usr/include/mach/kmod.h" 3 4
typedef struct kmod_load_extension_cmd {
        int type;
        char name[64];
} kmod_load_extension_cmd_t;

typedef struct kmod_load_with_dependencies_cmd {
        int type;
        char name[64];
        char dependencies[1][64];
} kmod_load_with_dependencies_cmd_t;

typedef struct kmod_generic_cmd {
        int type;
        char data[1];
} kmod_generic_cmd_t;
# 91 "/usr/include/mach/mach_types.h" 2 3 4






typedef mach_port_t task_t;
typedef mach_port_t thread_t;
typedef mach_port_t thread_act_t;
typedef mach_port_t ipc_space_t;
typedef mach_port_t host_t;
typedef mach_port_t host_priv_t;
typedef mach_port_t host_security_t;
typedef mach_port_t processor_t;
typedef mach_port_t processor_set_t;
typedef mach_port_t processor_set_control_t;
typedef mach_port_t semaphore_t;
typedef mach_port_t lock_set_t;
typedef mach_port_t ledger_t;
typedef mach_port_t alarm_t;
typedef mach_port_t clock_serv_t;
typedef mach_port_t clock_ctrl_t;







typedef processor_set_t processor_set_name_t;




typedef mach_port_t clock_reply_t;
typedef mach_port_t bootstrap_t;
typedef mach_port_t mem_entry_name_port_t;
typedef mach_port_t exception_handler_t;
typedef exception_handler_t *exception_handler_array_t;
typedef mach_port_t vm_task_entry_t;
typedef mach_port_t io_master_t;
typedef mach_port_t UNDServerRef;
# 141 "/usr/include/mach/mach_types.h" 3 4
typedef task_t *task_array_t;
typedef thread_t *thread_array_t;
typedef processor_set_t *processor_set_array_t;
typedef processor_set_t *processor_set_name_array_t;
typedef processor_t *processor_array_t;
typedef thread_act_t *thread_act_array_t;
typedef ledger_t *ledger_array_t;
# 156 "/usr/include/mach/mach_types.h" 3 4
typedef task_t task_port_t;
typedef task_array_t task_port_array_t;
typedef thread_t thread_port_t;
typedef thread_array_t thread_port_array_t;
typedef ipc_space_t ipc_space_port_t;
typedef host_t host_name_t;
typedef host_t host_name_port_t;
typedef processor_set_t processor_set_port_t;
typedef processor_set_t processor_set_name_port_t;
typedef processor_set_array_t processor_set_name_port_array_t;
typedef processor_set_t processor_set_control_port_t;
typedef processor_t processor_port_t;
typedef processor_array_t processor_port_array_t;
typedef thread_act_t thread_act_port_t;
typedef thread_act_array_t thread_act_port_array_t;
typedef semaphore_t semaphore_port_t;
typedef lock_set_t lock_set_port_t;
typedef ledger_t ledger_port_t;
typedef ledger_array_t ledger_port_array_t;
typedef alarm_t alarm_port_t;
typedef clock_serv_t clock_serv_port_t;
typedef clock_ctrl_t clock_ctrl_port_t;
typedef exception_handler_t exception_port_t;
typedef exception_handler_array_t exception_port_arrary_t;
# 198 "/usr/include/mach/mach_types.h" 3 4
typedef integer_t ledger_item_t;
typedef vm_offset_t *emulation_vector_t;
typedef char *user_subsystem_t;





# 1 "/usr/include/mach/std_types.h" 1 3 4
# 207 "/usr/include/mach/mach_types.h" 2 3 4
# 45 "/usr/include/pthread.h" 2 3 4
# 74 "/usr/include/pthread.h" 3 4
extern "C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h" 1 3 4
# 68 "/usr/include/sys/time.h" 3 4
struct timeval {
        int32_t tv_sec;
        int32_t tv_usec;
};
# 93 "/usr/include/sys/time.h" 3 4
struct timezone {
        int tz_minuteswest;
        int tz_dsttime;
};
# 141 "/usr/include/sys/time.h" 3 4
struct itimerval {
        struct timeval it_interval;
        struct timeval it_value;
};




struct clockinfo {
        int hz;
        int tick;
        int tickadj;
        int stathz;
        int profhz;
};
# 179 "/usr/include/sys/time.h" 3 4
extern "C" {
int adjtime (const struct timeval *, struct timeval *);
int futimes (int, const struct timeval *);
int getitimer (int, struct itimerval *);
int gettimeofday (struct timeval *, struct timezone *);
int setitimer (int, const struct itimerval *, struct itimerval *);
int settimeofday (const struct timeval *, const struct timezone *);
int utimes (const char *, const struct timeval *);
}
# 169 "/usr/include/pthread.h" 2 3 4




int pthread_attr_destroy (pthread_attr_t *attr);
int pthread_attr_getdetachstate (const pthread_attr_t *attr, int *detachstate);

int pthread_attr_getinheritsched (const pthread_attr_t *attr, int *inheritsched);

int pthread_attr_getschedparam (const pthread_attr_t *attr, struct sched_param *param);

int pthread_attr_getschedpolicy (const pthread_attr_t *attr, int *policy);

int pthread_attr_getstackaddr (const pthread_attr_t *attr, void **stackaddr);

int pthread_attr_getstacksize (const pthread_attr_t *attr, size_t *stacksize);

int pthread_attr_getstack (const pthread_attr_t *attr, void **stackaddr, size_t *stacksize);

int pthread_attr_init (pthread_attr_t *attr);
int pthread_attr_setdetachstate (pthread_attr_t *attr, int detachstate);

int pthread_attr_setinheritsched (pthread_attr_t *attr, int inheritsched);

int pthread_attr_setschedparam (pthread_attr_t *attr, const struct sched_param *param);

int pthread_attr_setschedpolicy (pthread_attr_t *attr, int policy);

int pthread_attr_setstackaddr (pthread_attr_t *attr, void *stackaddr);

int pthread_attr_setstacksize (pthread_attr_t *attr, size_t stacksize);

int pthread_attr_setstack (pthread_attr_t *attr, void *stackaddr, size_t stacksize);

int pthread_cancel (pthread_t thread);
int pthread_setcancelstate (int state, int *oldstate);
int pthread_setcanceltype (int type, int *oldtype);
void pthread_testcancel (void);
int pthread_cond_broadcast (pthread_cond_t *cond);
int pthread_cond_destroy (pthread_cond_t *cond);
int pthread_cond_init (pthread_cond_t *cond, const pthread_condattr_t *attr);

int pthread_cond_signal (pthread_cond_t *cond);
int pthread_cond_wait (pthread_cond_t *cond, pthread_mutex_t *mutex);

int pthread_cond_timedwait (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *abstime);


int pthread_condattr_init (pthread_condattr_t *attr);
int pthread_condattr_destroy (pthread_condattr_t *attr);
int pthread_condattr_getpshared (const pthread_condattr_t *attr, int *pshared);

int pthread_condattr_setpshared (pthread_condattr_t *attr, int pshared);

int pthread_create (pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);



int pthread_detach (pthread_t thread);
int pthread_equal (pthread_t t1, pthread_t t2);

void pthread_exit (void *value_ptr);
int pthread_kill (pthread_t, int);
int pthread_sigmask (int, const sigset_t *, sigset_t *);
int sigwait (const sigset_t *, int *);
int pthread_getschedparam (pthread_t thread, int *policy, struct sched_param *param);


int pthread_join (pthread_t thread, void **value_ptr);

int pthread_mutex_destroy (pthread_mutex_t *mutex);
int pthread_mutex_getprioceiling (const pthread_mutex_t *mutex, int *prioceiling);

int pthread_mutex_init (pthread_mutex_t *mutex, const pthread_mutexattr_t *attr);

int pthread_mutex_lock (pthread_mutex_t *mutex);
int pthread_mutex_setprioceiling (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);


int pthread_mutex_trylock (pthread_mutex_t *mutex);
int pthread_mutex_unlock (pthread_mutex_t *mutex);
int pthread_mutexattr_destroy (pthread_mutexattr_t *attr);
int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *attr, int *prioceiling);

int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *attr, int *protocol);

int pthread_mutexattr_getpshared (const pthread_mutexattr_t *attr, int *pshared);

int pthread_mutexattr_gettype (const pthread_mutexattr_t *attr, int *type);

int pthread_mutexattr_init (pthread_mutexattr_t *attr);
int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *attr, int prioceiling);

int pthread_mutexattr_setprotocol (pthread_mutexattr_t *attr, int protocol);

int pthread_mutexattr_settype (pthread_mutexattr_t *attr, int type);

int pthread_mutexattr_setpshared (pthread_mutexattr_t *attr, int pshared);

int pthread_once (pthread_once_t *once_control, void (*init_routine)(void));

pthread_t pthread_self (void);
int pthread_setschedparam (pthread_t thread, int policy, const struct sched_param *param);


int pthread_key_create (pthread_key_t *key, void (*destructor)(void *));

int pthread_key_delete (pthread_key_t key);
int pthread_setspecific (pthread_key_t key, const void *value);

void *pthread_getspecific (pthread_key_t key);
int pthread_attr_getscope (pthread_attr_t *, int *);
int pthread_attr_setscope (pthread_attr_t *, int);
int pthread_getconcurrency (void);
int pthread_setconcurrency (int);
int pthread_rwlock_destroy (pthread_rwlock_t * rwlock);
int pthread_rwlock_init (pthread_rwlock_t * rwlock, const pthread_rwlockattr_t *attr);

int pthread_rwlock_rdlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_tryrdlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_wrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_trywrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_unlock (pthread_rwlock_t *rwlock);
int pthread_rwlockattr_init (pthread_rwlockattr_t *attr);
int pthread_rwlockattr_destroy (pthread_rwlockattr_t *attr);
int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *attr, int *pshared);

int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *attr, int pshared);




int pthread_is_threaded_np (void);


int pthread_main_np (void);


mach_port_t pthread_mach_thread_np (pthread_t);
size_t pthread_get_stacksize_np (pthread_t);
void * pthread_get_stackaddr_np (pthread_t);


int pthread_cond_signal_thread_np (pthread_cond_t *, pthread_t);


int pthread_cond_timedwait_relative_np (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *reltime);




int pthread_create_suspended_np (pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);



void pthread_yield_np (void);

}
# 38 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 2 3


typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mutex_t;
# 96 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{
  return 1;
}
# 449 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 3
static inline int
__gthread_once (__gthread_once_t *once, void (*func) (void))
{
  if (__gthread_active_p ())
    return pthread_once (once, func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *key, void (*dtor) (void *))
{
  return pthread_key_create (key, dtor);
}

static inline int
__gthread_key_dtor (__gthread_key_t key, void *ptr)
{

  if (ptr)
    return pthread_setspecific (key, 0);
  else
    return 0;
}

static inline int
__gthread_key_delete (__gthread_key_t key)
{
  return pthread_key_delete (key);
}

static inline void *
__gthread_getspecific (__gthread_key_t key)
{
  return pthread_getspecific (key);
}

static inline int
__gthread_setspecific (__gthread_key_t key, const void *ptr)
{
  return pthread_setspecific (key, ptr);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    return pthread_mutex_lock (mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    return pthread_mutex_trylock (mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    return pthread_mutex_unlock (mutex);
  else
    return 0;
}
# 99 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr.h" 2 3
# 38 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++io.h" 2 3

namespace std
{

  typedef long streamoff;
  typedef ptrdiff_t streamsize;



  typedef fpos_t __c_streampos;

  typedef __gthread_mutex_t __c_lock;


  typedef FILE __c_file;


  struct __ios_flags
  {
    typedef short __int_type;

    static const __int_type _S_boolalpha = 0x0001;
    static const __int_type _S_dec = 0x0002;
    static const __int_type _S_fixed = 0x0004;
    static const __int_type _S_hex = 0x0008;
    static const __int_type _S_internal = 0x0010;
    static const __int_type _S_left = 0x0020;
    static const __int_type _S_oct = 0x0040;
    static const __int_type _S_right = 0x0080;
    static const __int_type _S_scientific = 0x0100;
    static const __int_type _S_showbase = 0x0200;
    static const __int_type _S_showpoint = 0x0400;
    static const __int_type _S_showpos = 0x0800;
    static const __int_type _S_skipws = 0x1000;
    static const __int_type _S_unitbuf = 0x2000;
    static const __int_type _S_uppercase = 0x4000;
    static const __int_type _S_adjustfield = 0x0020 | 0x0080 | 0x0010;
    static const __int_type _S_basefield = 0x0002 | 0x0040 | 0x0008;
    static const __int_type _S_floatfield = 0x0100 | 0x0004;


    static const __int_type _S_badbit = 0x01;
    static const __int_type _S_eofbit = 0x02;
    static const __int_type _S_failbit = 0x04;


    static const __int_type _S_app = 0x01;
    static const __int_type _S_ate = 0x02;
    static const __int_type _S_bin = 0x04;
    static const __int_type _S_in = 0x08;
    static const __int_type _S_out = 0x10;
    static const __int_type _S_trunc = 0x20;
  };
}
# 45 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cwchar" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cwchar" 3



# 1 "/usr/include/gcc/darwin/3.3/c++/ctime" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/ctime" 3
# 64 "/usr/include/gcc/darwin/3.3/c++/ctime" 3
namespace std
{
  using ::clock_t;
  using ::time_t;
  using ::tm;

  using ::clock;
  using ::difftime;
  using ::mktime;
  using ::time;
  using ::asctime;
  using ::ctime;
  using ::gmtime;
  using ::localtime;
  using ::strftime;
}
# 52 "/usr/include/gcc/darwin/3.3/c++/cwchar" 2 3
# 60 "/usr/include/gcc/darwin/3.3/c++/cwchar" 3
extern "C"
{
  typedef struct
  {
    int __fill[6];
  } mbstate_t;
}


namespace std
{
  using ::mbstate_t;
}
# 46 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 2 3

namespace std
{






  template<typename _StateT>
    class fpos
    {
    public:

      typedef _StateT __state_type;

    private:
      streamoff _M_off;
      __state_type _M_st;

    public:
      __state_type
      state() const { return _M_st; }

      void
      state(__state_type __st) { _M_st = __st; }



      fpos(): _M_off(streamoff()), _M_st(__state_type()) { }

      fpos(streamoff __off, __state_type __st = __state_type())
      : _M_off(__off), _M_st(__st) { }

      operator streamoff() const { return _M_off; }

      fpos&
      operator+=(streamoff __off) { _M_off += __off; return *this; }

      fpos&
      operator-=(streamoff __off) { _M_off -= __off; return *this; }

      fpos
      operator+(streamoff __off)
      {
        fpos __t(*this);
        __t += __off;
        return __t;
      }

      fpos
      operator-(streamoff __off)
      {
        fpos __t(*this);
        __t -= __off;
        return __t;
      }

      bool
      operator==(const fpos& __pos) const
      { return _M_off == __pos._M_off; }

      bool
      operator!=(const fpos& __pos) const
      { return _M_off != __pos._M_off; }

      streamoff
      _M_position() const { return _M_off; }

      void
      _M_position(streamoff __off) { _M_off = __off; }
    };


  typedef fpos<mbstate_t> streampos;




}
# 50 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 1 3
# 34 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception_defines.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 2 3

namespace std
{

  void
  __throw_bad_exception(void);


  void
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_error(const char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throw_overflow_error(const char* __s);

  void
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}
# 51 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3

namespace std
{
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
            typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;



  class ios_base;
# 136 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3
  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;
# 166 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3
}
# 71 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stl_pair.h" 1 3
# 64 "/usr/include/gcc/darwin/3.3/c++/bits/stl_pair.h" 3
namespace std
{


template <class _T1, class _T2>
struct pair {
  typedef _T1 first_type;
  typedef _T2 second_type;

  _T1 first;
  _T2 second;




  pair() : first(), second() {}




  pair(const _T1& __a, const _T2& __b) : first(__a), second(__b) {}


  template <class _U1, class _U2>
  pair(const pair<_U1, _U2>& __p) : first(__p.first), second(__p.second) {}
};


template <class _T1, class _T2>
inline bool operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{
  return __x.first == __y.first && __x.second == __y.second;
}


template <class _T1, class _T2>
inline bool operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{
  return __x.first < __y.first ||
         (!(__y.first < __x.first) && __x.second < __y.second);
}


template <class _T1, class _T2>
inline bool operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y) {
  return !(__x == __y);
}


template <class _T1, class _T2>
inline bool operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y) {
  return __y < __x;
}


template <class _T1, class _T2>
inline bool operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y) {
  return !(__y < __x);
}


template <class _T1, class _T2>
inline bool operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y) {
  return !(__x < __y);
}
# 140 "/usr/include/gcc/darwin/3.3/c++/bits/stl_pair.h" 3
template <class _T1, class _T2>


inline pair<_T1, _T2> make_pair(_T1 __x, _T2 __y)



{
  return pair<_T1, _T2>(__x, __y);
}

}
# 72 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 1 3
# 53 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 3
# 90 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 3
struct __true_type {};
struct __false_type {};

template <class _Tp>
struct __type_traits {
   typedef __true_type this_dummy_member_must_be_first;
# 113 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 3
   typedef __false_type has_trivial_default_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typedef __false_type has_trivial_assignment_operator;
   typedef __false_type has_trivial_destructor;
   typedef __false_type is_POD_type;
};




template<> struct __type_traits<bool> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<char> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<signed char> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned char> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<wchar_t> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<short> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned short> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<int> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned int> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<long> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned long> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<long long> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned long long> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<float> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<double> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<long double> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template <class _Tp>
struct __type_traits<_Tp*> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};





template <class _Tp> struct _Is_integer {
  typedef __false_type _Integral;
};

template<> struct _Is_integer<bool> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<char> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<signed char> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<unsigned char> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<wchar_t> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<short> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<unsigned short> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<int> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<unsigned int> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<long> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<unsigned long> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<long long> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<unsigned long long> {
  typedef __true_type _Integral;
};

template<typename _Tp> struct _Is_normal_iterator {
   typedef __false_type _Normal;
};


namespace __gnu_cxx
{
  template<typename _Iterator, typename _Container> class __normal_iterator;
}

template<typename _Iterator, typename _Container>
struct _Is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator, _Container> > {
   typedef __true_type _Normal;
};
# 73 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h" 1 3
# 68 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h" 3

namespace std
{
# 80 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag {};

  struct output_iterator_tag {};

  struct forward_iterator_tag : public input_iterator_tag {};

  struct bidirectional_iterator_tag : public forward_iterator_tag {};

  struct random_access_iterator_tag : public bidirectional_iterator_tag {};
# 102 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };







  template<typename _Iterator>
    struct iterator_traits {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };

  template<typename _Tp>
    struct iterator_traits<_Tp*> {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };

  template<typename _Tp>
    struct iterator_traits<const _Tp*> {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };







  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }

}
# 74 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 1 3
# 68 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/concept_check.h" 1 3
# 39 "/usr/include/gcc/darwin/3.3/c++/bits/concept_check.h" 3
# 69 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 2 3

namespace std
{
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {

     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last) {
        ++__first; ++__n;
      }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {

     
      return __last - __first;
    }
# 109 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return __distance(__first, __last, __iterator_category(__first));
    }

  template<typename _InputIter, typename _Distance>
    inline void
    __advance(_InputIter& __i, _Distance __n, input_iterator_tag)
    {

     
      while (__n--) ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
              bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--) ++__i;
      else
        while (__n++) --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {

     
      __i += __n;
    }
# 162 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      __advance(__i, __n, __iterator_category(__i));
    }
}
# 75 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator.h" 1 3
# 68 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator.h" 3
namespace std
{
# 89 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
             # 1 "gisttypename iterator_traits<_I#pragma>::value_btre,
# 1 "gist_ist/src/libbbtree.cc"
#pragma GCC set_debug_pwd "differencrs/jmh/devel/libgist/src/libbtree"
# 1 "<built-in>"
# 1 "<command lpointer/devel/libgist/src/libbtree"
# 1 "<built-in>"
# 1 "<command lre>"
# 1 >devel{develprotected:devel/l_debug_pw current;
ine/anublic3 4
# 33btredef3 "/usr/inc
#pragma Gype;3 4
# 1 "/usr/iree"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "gistdevel/libgist/src/libbt long long _mbstateL;
} __mbstate_t;
# 34ine>"
# 1 "gist4
# 92 "/usr/include/ppc/ansi.h" 3 4
typedef union {
usr/inclu usr/inclu4
# 92 "/usr/include/ppc/ansi.h" 3 4
typedef union {
/usr/in /usr/inchine/ansi.h" 3
hine/a  reverse_
#pragma() { }/strdevel/lexplicitring.h" 2 3 4

extern "C/ansi.h" 1 3  __x) :clude/ma(t voi{
void *memchr 2 3 4

extern "Cconstvoid *memcpy (voi&st vodevel/ld *, const vo.lude/maid *, size3 4
# 1 emplate<btree.cc"_debude/mac);
void *memcpy (void *, const void *, sizet_debu>_t);
void *mememmove (void *,base()id *, size_t);
v/ansi.h" 1 3 devel/lnt str  *, co{ returnclude/macd *, size_t);
voi>"
# 1 devel/loppragma*rcoll (cdevel/lhine/a# 33 "/usr/inc__tmp =clude/mach long lot char *--, con;
char *char *);
char /usr/inchar *, const c->rcoll (const char &( const char)t char *);
char *st void *, size_char *, const c++(void *metrcspn (co--char *);
char *strerror (thisize_t strlen (const chchar *, const chr *, size_t);
charint *strncpy (char *,char *, const ch*, const ar *strpbrk (*, const char *, size_t);
cht);
size_t strlen (const chchar *, const char *, size_t);
c--r *strncpy (char *,++onst char *, size_t);
char *strpbrk (const char *, const char *);
c);
size_t stt char *, int);
size_t strspn (const char *, const char *);
cst char *, size_t);



int const char *);
char *strtok (char *, constr *, size_t);
ch(ine>"
# 1 "gist __nr *);
size_t sttrerror oid *memcpy (void ude/ma -ar *r strncmp (const char *, const char *, size_t);
ch=int, size_t);
char *r*strncpy (char *,mp (const=ar *ar *, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (c-int, size_t);
char *rindex (const char *, int);
int strcasecmp (cons+ char *, const char *);
char *strdup (const char *);
-ize_t strlcat (char *, const char *, size_t);
s+ze_t strlcpy (char *, const char *, size_t);
void strcpy (char *, const c[]int, size_t);
char *rindex  char *, i*(ar *s, const chat str;
# 269 "/usr/include/gcc/darwin/3.3/c++/bits/stl
extern ".h" 3
;
void *memset (void *, ig_pwd" 1 3inline bool" 1 3 const c==(char *, const char *);
char g_pwd_t);
/devel/libgist/srned char int8_t;
typedef unsigned chay, conschar *, i);
int str =ze_tyint strt chatypes.h" 1 3 4
# 69 "/usr/include/ppc/types.h" 3 4
typedef <gned char int8_t;
typedef unsigned char u_int8_t;
typedf short int16_t;
typedef unsigned short u_int16_t;
typet;
typed <ypedef int ef unsigned int u_int32_t;
typedef long long int64_t;
typedef un!igned char int8_t;
typedef unsigned char u_int8_t;
typedef short int16_t;
typedef unsigned short u_int16_t;
ty!t voint32_tr/include/machine/types.h" 2 3 4
# 62 "/usr/include/stdlib.h" 2 3>igned long long u_int64_t;

typedef int32_t register_t;

typedef long int intptr_t;
typedef unsigned long int ut;
# 3ef unsigned int u_int32_t;
typedef long long int64_t;
typedef unsigned char int8_t;
typedef unsigned char u_int8_t;
typede



typedef int wchar_t;


typedef struct {
        int qu abort     int rem;
} div_t;

typedef struct {
        long quot;
       4
# 71 "/usr/include/stdlib.h" 3 4
typedef int rune_t;





typedef int wchar_t;


typedef struct {
        int quot;
#      int rem;
} div_t;

typedef struct {
        btree.cc"ar int8_t;
typedef unsigned{
        char __mbsta
int strncgned long long u_int64_t;

typedef int32_t register_t;

typedef long int intptr_t;
typedef unsigned long int uintptr_tt ch31 "/usr/include/machine/types.h" 2 3 4
# 62 "/usr/inclar int8_t;
typedef unsigned (void *, siz+( ldiv (long, long);
void *malloc (size_t);
void qsortar *32_t register_t;

typedef long int intptr_t;
typedef 
void *char *, int);
int strcaset_debug_pwdt);
int strst char *, # 32 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/ppc/types.h" 1 3 4
# 69 "Contain int, siclass back_inserty (void *, con:ansi.h" *, const<outpunt putenv _tag, voidconst char *, int)de/machine/ansi.h" 1 3 4
# 33 , const w*;

tonst w "/usr/include/s 4
# 1 "/usr/in, const wsigned sho 1 3 4
 *memchr (const void *,ze_t);


int putenv ( short[3])_t);
vemmogned sho(& void *, # 355"/usr/include/machine/types.h" 3 4
# 1 "/usr/include/ppc/tylong lrand48 (void);
lonar *, size_t);
c=        st short[3]):: *, c_ 4



type__/User, const char *, sizgned sho->push_ze_t(id);
voiar *, size_t);
char *strpbrk (cons;
void srand48 (long);

void *alloca (sizehar sr/includer *stir (void);
char *getbsize (int *, long *);
charhar getcap (char *, char *, int);
int cgetclose (vohar *strrchr (const chgetcap (char *, cha 1 3 4
# 386char_t);
int mbtowc (wchar_t *, const char *, size_t);
size_t wcstombs (char *, const wchar_tpc/typese_t);


int putenv <*, const wchar_tr *, char *eng mrand48 (void);_t mbstowcs (wr *, char *, char **);
int cgetut voichar *401char_t);
int mbtowc (wchar_t *, const char *, size_t);
size_t wcstombs (char *, const wchar_t *, sifront);


int putenv (const char *);
int setenv (const char *, const char *, int);



double drand48 (void);
double erand48 (unsigned short[3]);
long jrand48 (unsigned short[3]);
void lcong48 (unsigned short[7]ong, int);
int heapsorg mrand48 (void);
long nrand48 (unsigned s42next (char **, char **);
int cgetnum (char *, char *, long * conng, int);
int heapsorid *alloca (size_t);

u_int32_t
         arc4random (void);
void arc4random_addrandom (unsigned ng, i *dat, int datlen);
void arc4random_stir (void);
t unsigned char *, unsigned);

int ra *cgetcap (char *, char *, intt unsigned char *, unsigned);

int ra (char **, char **, char *);
inng, int);
int heapsort (vor **);
int cgetmatch (char *, char *);
int cg457ext (char **, char **);
int cgetnum (char *, char *, long *);
int cgetset (char *);
int cgetstr (chang, int);
int heapsor);
int cgetustr (ng, int);
inr *, char **);

int daemon (int,  char *, char **, int);

void unsint getloada7next (char **, char **);
int cgetnum (char *, char *, long *);
int cgetset (char *);
int cgets *, si;


int putenv (const char *);
int setenv (const char *, const char *, int);



double drand48 (void);
double erand48 (unsigned short/libbtree"
# 1 32_t
       size_t);

#prrt[3]);
long jrand48 (unsigned short[3]);
void lcong48 (unsnst char *dixsort (const unsigned char *,e/sys/appleapiopts.h" 1 3 4
# 6__ivoid *memmog nrand48 (uns,67 "/(hine {ed s518, unsigned);

int sradixsort (const unsigned char **, int, consgned char *, unsigned);

int rand *, co);

u_int32_t
         arc4random (void);
void arc4random_addr
#prst cndom (unsi 1 "/unt me,oid);
voi size_t);
in7 "/usdatlen);
void arc4random_stir (void);
(char *);
void srandom (unsigned long);
char *user_from_uid (ed long, int);

long long
         strtoll(const char *, char ed long, int);

long long
        etmatch (char *, char *);
int cg550char_t);
int mbtowc (wchar_t *, const char *, size_t);
size_t wcstombs (char *, const w.h" 1 3 4
# /usr/include/ppc/type*, char **, int);

void unsetenvt char *);

}
# 11 "gist,onst char *, ne/enditrcspn (t char st_btree.cc"
# 1 "/Users/jmh/de/devel/libgist/src/libbtl/libgist/src/libbtree"
# 1 eapiopts.h" 1 3 4
# de/pp short)}
}

e.ccspa(voidgnu_cxx
{har *);
  using std" 1 3 4
#  GCC se/usrf u_int16_t nlink_t/usrpes.h" 1 3 4
# 69 "/usr/inc.h" 1 3 4
# 30 "/usr/usr/include/__normausr/includoid *memmchar *);
int setbtree.cc"
#pragma GCC set_debug_pwd "
#pragma category_t in_addr_t;
typedef u_inbtree.cc"
#pragma GCC set_debug_pwd "/Users/jmh/devel/libgist/src/libbtbtree"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "gist_btree.cc"





#pragma a implementation "gist_btree.h"


# 1 "/usr/include/string.h" 1 3 4
# # 59 "/usr/include/string.h" 3 4
# 1 "/usr/include/machine/ansi.h" 1 3 4
# 33 "/usr/inc_M_lude/machine/ansi.h" 3 4
# 1 "/usr/ilude/ppc/ansi.h" 3 4
typedef union {
        char __mbstate8[128];
        long long _mbstateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" 2 3 4
# 60 "/usr/include/string.h" 2 3 4



typedef long unsigned int size_t;






# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 71 "/usr/ ;
typedef int32_t (;
los.h" 3 4
s(r_t;

typtrcmp (comemchr (const void *,thread_attr_t { lo *, cor_t;

typ_t);ing sig; char opa/ppc/ir (void);
void *memset (void *, int, sizepc/typeruct _opaque_pthread_mutetypedef int32_t t_debu, *, const wc{ long (const chag; char opaqueint strcmp (con
char *strcpy (char *, const char *);
sgetcap (chas.h" 3 4
sthread_attrar *);
char *strncat (char *, const char *

typedef struct _opaig; char opaque[4id);
int cgetent (char ++

typedef stcap (char *, char_cond_t;

typedef strucng long
         strtoull(const thread_attr_t { los.h" 3 4
s++r *, co_cond_t;

typedef struct _opaque_pthrea str { --ttr_t { long sig; char opaque[12]; } pthread_rwlockattr_t;

typedefpy (con _opaque_pthread_rwlock_t { long sig; --ar opaque[124dlib.h" 1 3 4
# 61 "/usr/in *, coine>"
# 1 "gist_t);*rindex (const char *, is.h" 3 4
s[__n]hread_cond_t;

typedef struct _opaque_pthread;
unsign "/usr/include/unistd(const chs.h" 3 4
s_t);

}
g sig; char opaque[12]; } pthread_rwlockattr_t;

typedef  4
# 73 "/usr/include/unistd.h" 2 3 4
# 91 "/usr/inhread_rwlock_t { long sig; , const charue[124]; } pthread_rwlock_t;

typedef st;
int access (const char *, int);
unsigned int alize_t sar opaque[4]; } pthread_once_t;



typedef unsigned long har *, uid_t, gid_t);
int close (int);
size_t confstr (int, char *, size_t);
int char *, cng atol (conexattr_t { *);
int strcoll (const char 

typedef stru 1 3 4
# 65g (double [], int);

long a64l (const char *);
char *l64a (long);

char *group_debug_pwLad_t * qaddr_t;

typR rlim_t;
typedef int32_t pc/types.h" 3 typedef signed chig; char opaque[40]; } 
uid_t hread_mutex_t;
lhs/devel/libgist/har *getlogin (void);
pid_t getpgRp (void);
pid_t grhsint)_opaque_pthlhsef int int32_rst char *ef unsigned int u_int32_t;
typedef_t getgid (void);
int getgroups (int, gid_t []);
char *getlogin (void);
pid_t getpgp (void);
pid_t getpid (void);
pid_t getppid (void);
uid_t getuid (vid);
int isatty (int);
int link (const char *, const char *);
off_t lseek (int, off_t, int);
lo_t geteuid (void);
gid_t getgid (void);
int getgroups (int, gid_t []) 4
# 71 "etlogin (void);
pid_t getpgrp (void);
pid_t getpid (void);
pid_t getppid (void);
uid_t getuid (void);
int isatty (int);
int link (const char *,!const char *);
off_t lseek (int, off_t, int);
long pathconf (const char *, int);
int pause (voit, pid_t);
char *ttyname (int);
int int, void *, size_t);
int rmdir (const char *);
int setgid (gid_t);
int setpgid (pid_t, pid_t);
pid_t setsid (voidptopt, optreset;
intt);
unsigned int sleep (unsigned int);
long sysconf (int);
pid_t tcgetpgrp (int);
int tcsetpgrp (insigned letlogin (void);
pid_t getpgrp (void);
pid_t getpid (void);
pidt getppid (void);
uid_t getuid (void);
int isatty (int);
int link (const char *,;
# t char *);
off_t lseek (int, off_t, int);
long pathconf (const char *, int);
int pause (voi);
int exect (const char *, char * int, void *, size_t);
int rmdir (const char *);
int setgid (gid_t);
int setpgid (pid_t, pid_t);
pid_t setsid (void;
int ftruncate (int, off_t);
int getdtablesize _t geteuid (void);
gid_t getgid (void);
int getgroups (int, gid_t [])  long rxect (const char *, char * const *, char * const *);
int fchdir (int);
int fchown (int, int, int);
char *fflagstostr (u_long);
int fsync (int)>
int ftruncate (int, off_t);
int getdtablesize (void);
int getgrouplist (const char *, int, in*);
int initgroups (const char *, ionst *, char * const *);
int fchdir (int);
int fchown (int, int, innt issetugid (void);
char *mkdtemp (char *);
int mknod (const char *, mode_t, dev_t);
int mkst(const char *key);
int encrypt (char *, int);
void endusershell (void), pid_t);
char *ttyname (int);
int unlink (const char *);
ssize_t write (int, const void *, size_t);

extern char *optarg;
extern int optind, opterr, o<const char *);
off_t lseek (int, off_t, int);
long pathconf (const char *, int);
int pause (voide/machine/signal.h" 1 3 4
# 27 "/us
int gethostname (char *, int);
mode_t getmode (const void *, mode_t);
 int
         getpagesize (void);
char *getp;
int setuid (uid_t);
unsigned int sleep (unsigned int);
long sysconf (int);
pid_t tcgetpgrp (int);
int tcsetpgrp (in(size_t, etlogin (void);
pid_t getpgrp (void);
pid_t getpid (void);
pid_t getppid (void);
uid_t getuid (void);
int isatty (int);
int link (const char *,>const char *);
off_t lseek (int, off_t, int);
long pathconf (const char *, int);
int pause (voil.h" 2 3 4
# 73 "/usr/include/sys/siint, void *, size_t);
int rmdir (const char *);
int setgid (gid_t);
int setpgid (pid_t, pid_t);
pid_t setsid (voidal_int;
        voidtypede" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 72 "/usr/include/sys/signal.h" 3 4
typedef u_tlogin (void);
pid_t getpgrp (void);
pid{
        char __mbst char *, ...);
_sigaction_u {
        void (*__sa_handle_t getpid (void);
pid_t getppid (void);
uid_t getuid (void);
int isatty (int);
int link (const char *,t cht char *);
off_t lseek (int, off_t, int);
long pathconf (const char *, int);si_errno;
        int si_code;
        ivoid (*__sa         stsi_errno;
        int si_code;
        i*, int);
int system (const char *);  int si_errno;
        int si_code;
        int s
type_opaque_pthread_rwlock_t { int si_code;
        i_pthread_co, const chaed sist/include/gist_compat.h" 1
# 81 "/Users/jmhalgont se/pp2 3

typedef u_istd
{
# 9g (double [], int);

long a64l (const char *ct sigaltstac/types.h" 1 3 4
# 69 "Forwarddebu1.h" 1 3 4
#    int sv_m2lude/ppc/typenst dr_t;
ter_swap(    int sv_ma __a,  int sv_flags __b_t fixpt_t;
tyr_rec
{
        void (*routine)(vo   int sv_mad "/Users/jmh _VUserType14
# 92 "/usr/include/ppc/ansi.h" 3 4
typedint sv_flags;sys/signal.h" 3 4
exter2(unsigned2 3 4


extern cons);
int d3 4
externchar *, co__a/usr/inctern
exterb const charb ze_t;
size_t ed s1n.h" 1 3 4
# 81 "/usr/include/ppc/endian.h" 3     void (*sv_handler)(int);
     Tp;
};
# 303 "/usr/inclus/signTp_t);t sint sig  char *sst char *const Tp*, const ern const car *cost sys_siglst[32];


extern "C" {4size;
        int ss_flags;
};

typedef struct sigaltstaint, const struct sigaction *, struct igactioTp execvminead_mutent sigadd const sigsetgset_t *, int);
int sigif (st[3;
# a)opaque_pthbonst charern const"C" {6fillset (sigset_t *);
int sigismember (const sigset_t *, int);
int sigpending (sigset_t *);
int sigprocmask (iax, const sigset_t *, sigset_t *);
int sigsuspend (const sigsat_t *b;

int killpg (pid_t, int);
int sigtnext (char **, char **);
int cgetnum (char * sigset_t *, int);
int sigpending (si.h" 1 3 4
# 30mparude/mac *);
int sigprocmask (int, const sigset_t *, sigset_t *)p (voar *, __compset_t *, int);st sigsd (cigse(unsa);

int killpg (pid_t, int);
int si204 psignal (unsigned int, const char *);


}
# 191 "/usr/include/unistd.h" 2 3 4

int profil (char *, int, int, int);
ssize_t pwriurn (struct sigcontext *);
int sif_t);
int rcmd (char **, int, const char *, ct si_bhar *, const char *, int *);

char *2nclude/sys/signal.h" 3 4
struct sigvec {
        void (*sv_handler)(int);
     Input; } pt union __sOnv (c*, int, siask;
   t setgroup_t focharpy(nt seteuid __firsttype (long);
inlast/devel/libgis gid_t *);
*sa_esular *, int);
ini setonst char *, _t fixpt_t;
tyfor ( ;
int set (cons cha;ckatst char pgrp t settypedef st*p (pid_t
extert set/usr/inc(pid_t, it chart);
int  long si_band;
       RandomAccesseuid (uid_t);
int setgroups (int, const gid_t *);
void sethostit);
int setruid 
int sethos, u_long *, u_long  char *, int);
int setkey (const char *);
int setlr);
in_a setr(const char *);
void *setmor_rec
{
        void (*routine)(vot);
int setruid ize_t);
void qsort (voipn (conDistang unsignedde (cgned int,_sigint s cha (*sa_t, giwhite> 0;{ lostd.trcspn (cot setregid (gid_t, gid_t);
i;
in (size_t);
pid_t vforid (uid_t, uint _t);
int setreuid (uid_t, uid_t);
int setrgid (gid_tion *, struct _Tp*void sethos_trivial, const si*
int sethod*,size_t,uns charze_t,unst char_t fixpt_t;
tymemmove(p (pid_t pint sethosizeof
int) *sigs(const char *)long key
int setreuid (ui + (const char*,constd_t, uid_t);
int setrgid (gid_t seteuid (uid_t);
int setgroups (int, const gid_t *);
void sethos_aux2tid (long);
int sethostname (const char *, int);
in);
int setkey (const char longalsrs/jmht u_int16_t;
typethostint sethostattrlisonst char*,s.h" 3 4
typedef ned longnt strn*,uid_t,gid_t*,int,int,unsigned long);
int getdirentriesattr (int,void*,void*,size_t,unsigned long*,unsigned long*,unsigned long*,unsigned long);
int searchfs (const char*,trers/jmh*,unsigned long,unsigned long,void*);

int fsctl (const char *,unsigned long,void*,unsigned long);



}

int getattrlist (const char*,vigned _t,unsigned lint setattrldevel/libgist/srcst (const chah/devel/libgist/include/gist_btreevoid*,voied long,void*);

int fsctevel/libgist/include/gist_p.h" 1
# 10 "/Users/jmh/devel/libgistd*,size_t,unsigned long);
int setattrl interface "gist_p.h"


# 1 "/Users/jmh/devel/libgist/include/gist_defs.h" 1
# 10 "/Users/jmh/devel/libgist/include/gist_defst,unsigned long);
int getdirentriesattr (int,void*,void*,size_t,unsnied long*,unsigned long*,unsigned long*,unsigned long);
i.h" 1
# 9 "/Users/jmh/devel/libgist/incl_handler_rec
{
        void (*routine)(voi seteuid 63 "/usr/incdevel/libgi sys_signa4
# 92 "/usr/include/ppc/_ 1 3  GCC set_3 4
exter>::hasvoid*,vo_assignment_ const ct.h" 1 3
# 3Tid*,vochar*,unsigned lt setgroup char/libgist/d long,void*);
t in_addr_t;
typedef u_int16_t in_portint fsctint strctexcept.h" 2 3

namespace std
{

  voiddefines()long key_tnst char *)
    __attribute__ ((noreturn));
}
# 11 "/Users/jmh/devel/libgist/include/gist_defs.h" 2
# 1 "/usr/include/gcc/darwin/3.3/c++/vector" 1 3
# 65 "/usr/include/gccvoid*,void*,unsigvector" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 1 3
# 34 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception_defines.h" 1 3
# 35 "/ucc/darwin/3.3/c++/bits/functexcept.h" 2 3

namespace nst char *);
int setld
  __throw_bad_alloc(voi);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_1fs.h" 2
# 1 "/usr/include/gcc/darwin/3.3/c++/vector" 1 3
# 65 "/usr/include/gcc/darwin/3.3/c++/vector" 3

# 1 "/usr/inc_Isnt);




struct sit setgroups::_Npedef _1 "/usr __throw_range_error(c_defshar *)row_bad_void*);s/c++config# 1 "/User "/usrrflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}
# 67 "/usr/include/gcc/darwin/3.3/c++/vector" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algob
  __throw_invalid_argument(const char* _/3.3/c++/bits/stl_algobase.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bit,void*);

int fsctl (ce/gcc/darwin/3.3/# 33 "/usr/include/machine/types.h" 3 4
# 1 "/ustimeval *);
int setegid (gid_t);
int seteuid (uid_t);
int setgroups (int, const gid_t *);
void thostid (long);
int sethostname (const char 3
# 65 "/usr/includeset_t *, int);
t char usr/incl/usr/include/gcc/darwin/3.3/c++/ppc-da.3/c++/bits/1 "/usr/include/gcc/darwwin/3.3/c++/ppc-d1      NODE_THREAD_SPECIFIC_DATA=1,
        NODE    long si_band;
       Bidirectionalsv_mask;
        ck_processwide_pts;
};
# 303 "/nt key) ;
extern vo*,size_t,unsr *,int (ock_processwide_ptr
int sethos key, void *ptr) ;
exng*,unsigned long);
inue_ptt key) ;
extern voror(const char* __s);

  void
 bk_processwid(const char *);
void *setmowhilesigschar *);
int se pgrp);
intp (uetregid (gp (ut setd_t);
int setreuid (uid_t, uid_t);
int setrgid (gid_t);
int setruid (uid_t);
voick_processwide_ptid _keymgr_set_and_unlock_proceswide_ptr(unsigned int, u_long *, u_long *);
int swapon (const char *);
int symlink (ned int key) ;
extern void ror(const char* __s);

  void
  sync (void);
int syscall (int, ...);
int trconst char *, off_t);
int ttyslot (void);
unsigned int ue_t strlcpy d int)iteout (const char *);
int usleep (unskeymgr_get_lockmode_processwide_ptr(unsigned int key) ;
extern i      long si_band;
       ck_processwide_ptr(unsigned int key) ;
extern voctexcept.h" 2r/include/sool 3
# ction tructiontr(unsigned i_dispatcht fixpt_t;
tystaticet_and_unlock_processwideSION_ILL key, void *ptr) ;
extern void _keymgr_unlock_processwide_ptr(unsigey) ;
extern void _keymgr_sehar *, int);
size_t ange_error(csigned int3/c++/bits/functexcept.h" 2 3

namespace std
{
or(const char* __s);

  void
  __thrcpy;
  onst char *,unsigned long,voboptarg;
int }chinegist/include/gist_p.h" 1
# clude/gcc/darwin/3.3/c++/cstdde</inct_p.h"h/devel/libgide/machine/aespace std (const SION_ILd*,size_t,unsigned long);
int setattrlist (const char*,voi4random_addrandst ptrine>_t _Numeout (const char *);usr/inclu,size_t,unsigned (*sNum long);
int exchangedata memcnt datlen);
void a  { return memcmp;
  using ::strcmp;
  using ::strcoll;
  using ::strncmp;
  using ::strxfrm;
d*,size_t,ing ::strcspn;
  using ::strspn;
  using ::strtok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr;
namespace std
{
  usin:strxfrm;
  using ::strcspn;
  using ::onst ch:nsigned long,void*);

int fsctcmp;
  using ::strcmp;
  using ::strcollBIr(unsigned intIoid _keymgr_set_Isswide_ptr(unsigned iibgi(chr(
extern void  inlING=3,
BIc/darwin/3.3/c++{
# 83 "/usr/include/gcc/dbits/functexcbtree.cc"
#pragma GCC set_onst "/Users/jmh::strrchr;

nclude/gcc/darwin/1 "/usr/include/gcc/darwin/3.3/c+
  void
  __throw_range_error(cst<const char*>(__shr(cos1),t_p.id*,vo 66 "/usr/include/gc  inline char*
  strrchr(char* __s1, in void
  __thr iltin_strrchr(const_cast<const char*>(__s1), __n); }

  using ::strenv (coread_rwlock_t { l
  inline char*
  strstr(mbstate8[128];
        long long _mbstateL;
har* __s1, coh/devel/libgist/include/gist_BIarwi
  using ::strstr;
d long,void*);

int fsctint strc;
off_t lseek (isr/include/limits.h" 3 4
# 1 "/usr/include/gcc/darwin/3.3/machine/limits.h" 1 3 4
# 24 "/usr/include/gcc/darwin/3.3/machine/limits.h" 3 4
# 1 "/usr/include/ppc/limits.h" 1 3 4
# void*,void*,unsigned long,unsighine/limits.h" 2 3 4
# 63 "/usr/includeh" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 64 "/usr/include/limits.h" 2 3 4ogin ( 1 3 4
# 24 "/usr/include/gcc/darwin/3.3/machine/limits.h" 3 4
# 1 "/usr/include/ppc/imits.h" 1 3 4
# 25 "/usr/include
# 83 "/usr/include/gcc/darwin/3.3/c++/ppc-da1), __1 "/usr/include/gcc/darwin/3.3/c++/ppcachine/limits.h" 1 3 4
# 24 "/usrin/bits/c++config.h" 1 3
# 35mbstate8[128];
        long long _mbstateL;
} __mbsta"/usr/include/gcc/darwin/3.3/c++/ppc-dar.3/c++/cstdlib" 3
# 84 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
namespace std
{
  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  usingh" 3
extern "C" {
# 83 "/usr/include/gcc/darwin/3.3/c++/ppc-da using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
 ,void*);

int fsctl::ldiv;
  using ::malloc;
  using ::mblen;
  using ::mbA=1,
        NODE_P47);
long long
         strtoq (const char *,  sigset_t *, int);
int ssr/include/limits.h" 3 4
# 1 "/usr/include/gcc/darwitr(unsigned int   inline char*
  strstr(char* __s1, const char

extern const char rand48 (unsignedlabs(__i); }

  inline ldiv_t
  e/sy ::calloc;
  using ::div;
  using ::exit;
  usiamespace std
{
  using /darwin/3.3/c++/bits/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c+/new" 1 3
# 42 "/usr/50CESSWIDE_PTR=2,
        NODE_LAST_KIND
        } TnodeKind ;





typedef enum    int sv_m (uid_t);
intion *, usr/inclufillgnal.h" 3 4
s
int sethosdef void (*uneING=3, const sigset);
void arc*, int);
int sigde (const char *);
int setpgrp pid_t pgrp);
int schar *nt s/User
  public:
3nclude/sys/signal.h" 3 4
struct sigvec {
        void (*sv_handler)(int);
     t setgroup (uid_t);
inSizeid (*terminate_handl gid_t *);
void   ty_n(t setkey (const sethosnoreem (crminate_handler set_terminate(terminate_handler) tht usleep (un pid, pid_t pgrp);
int s__ ((__noreturn__));
strpbrk(con_t, gid_t);cstdd
# 303 "/usr/inc  typungcc/ed char,unsigned l/include/gcc/darw
  terminate/include/gcc/_t);cid (*deMod/include/gcc/set (sigsetc __c, memsepaqu long,voitmpnfig.h" eraccess (const void();
}

}
# 43 "/usrnclude/gcc/darwin/3.3/+/new" 2 3

extern "C++" {
amespace std
{





  clasbad_alloc : public exception
  {
  public:
  pace s_cast</include/gcc/chartmponfig.h"  throw() { }


    virtual ~bad_alloc()gcc/darwin/3.3/2 3

extern "C++" {
e std
{





  clasdef void (*new_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/usr/includvoid *memset (void norelude/ppc/type/include/gcc/dcc/darwin/3./include/gcc/darwin/3.3/bool uncaught_exc
namespace std
{





oid *setmod typeblic:
    char * consnfigc char*,unsigned lotd::nothrows.h" 1 3 4
# 62 "/uoid operator delete[](void*)hrow();
void* operator nize_t, const std::nothrow_t&) thw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void opdelete[](void*, const std::nothrow_t&) throw();

id* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, # 60d psignal (unsigned int, const char *);


}
# 191 "/usr/include/unistd.h" 2 3 4.3/c++/biask;
        .3/c++/bis;
};
#paita(unsigned 8 "/4 "/usr/include/mismtddetid (long); inline cc++/iosfwd" 3  strstr1_algobase.h" 2 /iosfwd" 3
perator 2
        } TnodeMode t char *consc++/excep) ;
extern uns1*);
int se1 &&3/c++/exc1int3/c++/exc2signed int);vfork (von "C" {
v8 "/usr/inc2mp;
  using ::strpbrk(cgcc/darwin/3.3/c++/iosfwd" 3

3

# 1 "/ long);
i2     NODE_P64edef unsigned int uint;


typedef u_int64_t  2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 1 3
# 44 "/usr/in_ptr(unsigned naryPreditypeclude/gcc/darwin/3.3/c++/iosfwd" 3


# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 1 3
# 40 "/usr/include/++locale.h" 1 3
;
        char nst 
    _pred
        } TnodeMode ;++locale.h" 3

# 1 "/usr/include/gccative_sign;
 (/darwin/3,c++/clocalee" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/clocale" 3

# 1 "/usr/include/locale.h" 1 3 4
# 39 "/usr/include/locale.h" 3 4
st6int raise (int);

int kill (pid_t, int);
int sigaction (int, const struct sigac.3/c++/iosfwd" 1 3
# 44 "/usr/include/pc/types.h" 3 4
equs.h"ude/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 
# 40 "/usr/include/gcc/darwin/3.3/c++/ppc-darwiminate_handler) throw()/usr/include terminate(1 pid, pid_t/gcc/da, const !s_precedes.3/c++/clocalein/3.3/c++strpbrk(cvoid*ptr(unsigned invel/e.h" 3 4
st9CESSWIDE_PTR=2,
        NODE_LAST_KIND
        } TnodeKind ;





typedef enum node_modeping;
        char *int_curr_symbol;
        char *curre);
}
# 50 "/usr/include/gcc/darwin/3.3/c++/clocale" 2 3





namespace std
{
  using ::lconv;
 mespace std
{       char *negative_sign;
        char int_frac_digits;conv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++l     char p_cs_precedes;
        cha std
{
  typedef int* __c_locale;





  template<ty732ude/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 1 3
# 44 "/usr/include/s.h" 3 4
lexicographicalhar *arede/gcc/darwin/3.3/c++/clocale" 2 3





namespace std
eption : public excatic_cast<char*>(malcc/darwin/3.3/c cha/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locaconv;
}
# 42 "/usr/include/
     /ppc-d*);
int seiff_t;
 r/inclgcc/darwin/3.3/c++/ppc-dal (unsigned f ocale.h" 2 <c++/clocale std
{
  typedef i
  templatt {
        rune2t min;
    1out, __fmt, __prec, __v);
      ;
int getsubopt (rwin/3.3/c/include/runetype.h" 1 3 4
# 6  __ret = s6clude/gcc/darwin/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++;
        char *grouping;
        char *int_curr_symbolchar *, int, de/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cctype" 1 3
# 47 "/usr/include/gcc/darwin/3.3/c++/cctype" 3


# 1 "/usr/in_algobase.h" 2 3

# 1 "/usr/int);
int rcmd (char **, int, cpc-darwin/bittype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 66 "/usr/include/runetype.h" 3 4
typedef struct {
    char *,   __ret = sprintf(__out, __fmt, __prec,    rune_t map;
  per_ext;

     2;
        1_out, __fmt, __prec, __v);
      ruct {
        int nranges;
        _RuneEntry *ranges;
} _RuneRagetgroups (int, grwin/3.3/c++/iosfwd" 2 3t&) throw();
void* ,unsigned1w_t&) throw();
void* 
extern c++locale.h" 1 3 (void);
pid_t getp/include/gcc/darwin/3.2isalpha (int);
int iscntrl (i    rstd::ba();


ized*
 _len1eout (con1st char *)n "C" {;
int isspace (int2eout (con2st char *)} _Rune;
int ince (etregid (memc *, cn/3.3/c++wer (int)int, (int)nfig.en2mcmp;
  n); }

  using :!= 0 ?nt digitto< 0truc(int);;
# int)}


    virtual sr/include/ctype.h" 3 4
extern "C" {
um (int);
int isalpha t iscntrl (int);
int isdigit (int);
int isgraphnt islower (int);
int int);
int ispunct (nt ishexnumbrwin/3.3/c++/iosfwd" 2 3 "C" {
nclude/gcc/d)nt);
int it in_addr_t;
typedef u_int16_t in_pooupper (int);
}
# 180 "l (int);
int isdigit (int);
int inline int
__maskrune(int _c, unschar *positive_sign;
 3 4
static inline int
__maskrune(int _c, unsigneale.      lo}
nt ss;
};
# 76 "/usr/include/locale.h" 3 vectortack s# nclude/sys/signal.h" 3 4
struct sigvec {
     loce/pp1 retu8int raise (int);

int kill (pid_t, int);
int s__isctyreturn !!(__maskrune(c, f));
}

static inlinfunctexceptsctype(int3e_comp (const char *);
int re_exec (consltRuneLocale.rureturn !!(__maskrune(c, f));
}

static eLocalion_definese.runetype[rt[3]);
unsigned short
        *seed48 (ltRuneLocale.ruck stck_t;
# 285 "/us
dler) ();__throw_bad_? ___toup(nst }

stc)
{
        return ( 0 || _c >= (1 <<8 )) ? ___tolower(__new _c >= (1c)
{
        return (1 3 id _c >= (1 <<8 )) ? ___tolowlogic_errhread_mutgcc/darwsower[_c];
}
# 50 "/usdomain 71 "/usr/include/gcc/darwin/3.3/c++/cctypeinvalid_argudarwusr/include/gcc/darwin/3.3/c++/cctypelength 71 "/usr/include/gcc/darwin/3.3/c++/cctypeout_of_rang;
int isspecial /darwin/3.3/c++/cctyperuntime 71 "/usr/include/gcc/darwin/3.3/c++/cctype int  isdigit(int c);
extern int isgraph(int c);
verflow 71 "/usr/include/gcc/darwin/3.3/c++/cctypeundxdigit(int c);
}



namespace stlnum(int c);
externos_failu);
int isspecial /darsr/i8CESSWIDE_PTR=2,
        NODE_LAST_KIND
       __iscty  return !!(__maskrune(c, f));
}

static inline inthread :
        5e_comp (const char *);
int re_exec (const chigit;
  usi3nt
__tolower(int _::iscclude/gcRefcount_Baspt.h (int); "/usr/iisspace RC_achihandlerlat;
exgfwd. conref_cludeh" 1 3
#__gigit;
_mutexclude/gcc/darwi_lockchine/ar/include/gcc/(/includstd.ruct gcc/darwi/csthar **, int, co+/bits/stringfwd.h" const {0x32AAABA7, {}}gemptyset 3



namespace 32];


extes.h" 3 4 *, chausr/inclu_M_incrr *strng ::atoi+/bits/stringfwdace (&<typename _CharT,cmp;
  uskattrgcc/darwin/ typename _Alloc = allunocator<_CharT> >
    class bas *, chagfwd.s<_CharTde
           typename _Alloc = allocator<_CharT> >
    class basic 43 "/usr/includ const  longng;

  template<> struct char_traits<char>;

  typedef basic_striar *index (const cha;
in 4
# 1    bad_exception() throw() { }


    virtualde/gcc/darwinthrow();
vo

int dummyusr/include/gcSwaplocat_clude/_t mbstpace std/bits/stringfwd.h"Sys/sipace s:strcmp;
  using3.3/c++/ppc-darwic/darwin/3.3/c++/3.3/c+++io.h" 3
# 1 "/<c++/ppc-::stdio" 1 3
#ct char_traits;

  tedler ();
}

/include/long    Atomicys/sig fpos_t;
# 10id*>_p3/c++/new" 3 4
s__qunct (int)ame _Alloc = allocator<usr/include/stdio0 4
# 91 "/usr/icmp;
  _sbuf {
        etregid (gidsize_t  {
 __norqmplate struct char_traits<char>_size;
};
# 138 "/usr/include/stdio.h" 3nt setreuid (uid_t,nline i1ort[3]);
unsigned short
        *seed48 (unside/gcc/darwin/3.3/c++/iosfwd"win/bits/c+TLc = allocatdarwing ::loca+/bits/stringfwd.h" 3ace std
{
 raits<_CharT>,itialize         # 19rintf(__out, __fmt, __v);

      setlocale(0/usr/include/gc = char_traits<_CharTacquirelocato_terminattemplate<class _CharT>
 ocator<_C basic_string<charraits<_CharTreleas       unsigned char *_up;
        int _its<char>;
 basic_string 3 4
# 32.h" 1 3 4
# 81 "/usr/include/ppc/endian.h" 3/usr/include/gcclose) (voidauto        in 1 "/uoid *);
     &, int);
       F[];
}
# 241 "(ude/stdio.h" 3 4
elb;


>
    rr (FIlb;


_t mbst;
int f.uf _ub;
        ustruct _o~oid clearerr (Fad_knt ferror (       unsignestruct private3 4
# nst ned long);
unsignF[];
}
# 241 "&cmp;
  oid clearerr (Fint, FILE *);
FILE *fopen 4
tysr/i9uct lconv {
        char *decimal_point;
     nct;
  usineturn !!(__maskrune(c, f));
}

static ppc-ne/type
# 1 asr/initye.runetype[ "/usr/include/machine/types.h" 3 4d *, size_t, size_t, FILE *);3
 "/usr/i

intusr/incword;

pace stymgr_set ...);
int 
__attribute__ ((__unused__))
_(_c h(int and_add ( 43 "/usr/ ...);
int trucmem,


int val)t (*_ze_t fwrite    bad_allredef q__asm__*, s43 "/usILE usr/inclu"/* Ic/type*);
long & l (F*/\n"d);
char *0:\tint sys_nerlwarx
   %0,0,%2 \n
extern constadd%I3*con1,%0,%3_errlist[];

voistwcx. " "r (co sys_errlist[];

voibne-h" 3
0b_errlist[];

voi/* Endr *);

extern consint sys_ne: "=&b",unsig),emovr (coer)  *);
int remr"Runemem chaI*);
isize_*);
int remcr0", "memory"cmp;
n); }

  usi
  ueek (FILE *, lousr/i fsetpos (FILE *, const fpos_t e_t, Fll (FILE *);
size_t fwrite   unst void *, size_t, size_t, FILE *);
in(FILE *);
int getchar (void);
char *gets (chare_t, Frn const int sys_nerr;
extern const char *const sy1_errlist[];

void per2*constLE *s_errlist[];

voitf (const cha(int, FILE *);
int vfpnt, FILE *);
int putchar (int);
in*tmpfile (voir *);
int remove (cont rename (const char *, const char *);
void rewind (FILE *);
int sc *, crintf(__out, __fmt, __v);

      setlocale(0, t fputs (conck_t;
# 285 "/usr/103c, unsigned long _f)
{
        return (_c < 0 || _c >=segsz_t;
tyew;
}
# nct (innsi.h" 3 4
#pace stnst d* ope
}
# ate(isspace (tor;

  nf (cons::h" 2 3
# newocatostruct _o
}






ex
voiddeC" {
char

extruct _isspacLE *);
i*);
int fpudelett,unpes.h" 1/darwi *, unsigned);

int sradixsort (const unsigne*fdopen (int,r/include/gcc/dinst2_t segsz_t;
tm
}
# ar *);_void *mee/machine/ans *);
char *);
}






extcstdoom(FILE *r *fgetcmp;
  uschar *tempnam (constrfpos_tnt);
ft ftello  char *);
int snpri ((consILE *, char onsthandler)(ower[_/ansi.h" 3 4
# 1
}






extern " "C" {
char *fgetln (FILE *cpy (char *,t);
fposdigittoint, size(FILEle_len;
} _Runebuiltextexpeclocaetregid = 0, 0_out, __fmt, onst char * (const char * char *, __buint setreuid (uid_t, uring<charnt fseeko (FILE *,*, fpos_t, int);
fpos_t ftello int);
unsifreE *);
int a_list);
int vscanf (const *, siz(void *, char *, int), *, int), char szva_list);
int vsscanf (const char * *, sizeuct _




}


r *, __builtin_va_list);
FILE *zopen (const char *, const char *, int);
}
# 33E *);
int __svfscanf (FILE *, co.h" 3 4
extern "C" {
FILE *funopen (const vintf (set(char *,onst chnt);
      )ts.hr *strncpy (char *, || (_p->_old)t inf (char *, size_t, const chr *, __bui (char *, size_t, const ch_p++ f), __c, __n); }

  oldmp;
  using ::strcputw (int, FILE *);
void setsnprintf (char *, size_void *mem*);
voi:: (char *, size_t, const char  = 0 "/usr/include/gcc/d/include/gcc/dconst chFILE *, char *, int);espace std/includconst char *, consln (FILE *,/usr/inclprintf (cy= _p->_lbfsize ar *,t vsscanf (const cha_opaque_pde (c;;;
void rewtrcspn (co    ros;
  using ::fg_p++ = _c);
        else
              uiltin_va_list);
FILE *zo ::fputs;
  using :st char *, const ch? ___tolower(_c) :
 (FILE *, co      pos;
  using ::fgets;
  usint char *, int);, const char *, __buiconst chrwin/3.3/c++/cint _c, FILE *_p) {
        iusing ::st;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using  *, size_t, cchar *, int),ing ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perE *);
int __svfsng ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using :putw"/usr/inchar *);
iconst _sr/infag unblks4
extern "C" {
char *ctermid (char *);
FILE *fdopen (int,ude/unistd.h" 2 3 4

int profil (A}
# 2_t segsz_t;
tsimple *);
int achine/anltin_va_list);
int v ::strtok;
 char *, __builtin_va_list);
int vsscst (const(__n0r *, __builtin_vwin/3.3/c++char *(__nler set_new_ ::s>(r/incl::d *, fpos
# 1*t exchangedamcmp;
  us_c, FILE *_p) "C" {
FILE *funopen (con
# 35 "/usr/include/int);
unsinamespat/inc)sr/incls/errno.h"  exchalude/.h" 2 3 4unopen (const void *, int (*)(voi/includ
  using ::sprintf; *,     0 (consnrrno.h" 2 nclude/sched __svfs 4
# 68 "include/pthread.h" 2 3 4
# 1 "/usr/include/sched.h" 1 3int);
unsigruct sched_param { int priority; char op 1 3 4
# 30rn !!(__maskrune(c, f));
}

static inline int
__isctyc/types.h" 1 3 4
# 69 "/include/pthread.h"debug 1 "/usr/include/pbuf (FILead_attr_num {_S_extr *co8strcmpe/pthread_impl.h" 1 3 4scanf (const char *, __builtin_va_list);
int vsscgcc/darwetregid (const )ude/sys/errno.h" 1 3 + 
typed   time_(FILE *, co*r *fget*)ar *, int);
t strlcpy (char *, long);
int c
        int ize_t strleead.h" 2 3 4
# 1 "/usr/include/schesetvbuf;
  using ::sprintf;       int tm_min;
   alnsignt tm_hou_p -tm_yday;
        int tm{
         int tm_ye 4
exh" 3 4
devel/libgiabortsing ::getc; sched_get_priority_mt strut scheay;
        int tm_mon;
 t char *, int), fpos_t (*)(void *, fpos_t, int), int (*)(gcc/d_szvoid *));




}







extern "C" {/time.h" 3 4
extern char *tzname[];


extern "C" {
char *asctime (const struct tm (const);
clock_t clock (void);
charm_min;
        int tm_hor *ctime oid *, fpos_t *);
do::ldiv;
  using ::malloc;
  using ::mblen;
  using ::mb(const difftime (time_tr *ctime_r (const time_t *, char *);
struct tm *gmtime_r


}

day;
        int tm_mon;
        int tm_year;
      

}

  int tm_wday;
        int tm_yday;
        int tm_i);
int cgeprintf(__out, __fmt, __v);

      setlocale(0, " 2 3 4
# 1 "/usr/ins.h"     rt;
 void *, ;
void setbuffer (default, char *, int);
int setlinebuf (FILE *);

      ALIGNt tv_sethread.h" 2 3MAX_BYTES = 12# 1 "/usr/includeNFREELISTch_te/mach/mach/ 3 4


_sec;
   3 4io"/usbj115 "/usr/include/usr/inclu*ILE oid _list_linket (void);



 consliarwidata[1]mp;
  usi3 4
# 1 "pace std.h" 1 43 "/usr/S 4
# 34 "/[ "/usr/incl](unsigned pace stgcc/darS_start 4
#  char *);
int s_t;
typedendint64_t uint64_t;


isspace S_heap_isspef u_int8_t uint8de/stdio.h" 3 int1nod# 1 "/uagma ace std
{
 st8_t;
typedef plate<> S_round_upr *fgetln bytet);
i23 "/usr/inclu *, ypedef dif, constypes.h"-1) & ~(def uint32_t ui - 1de/pthread.h" 2 3 4
;
typedef uint8_oid 4 "/uindexeast8_t;
typedef uint16_t uint_least16_t;
typedef uintedef uint64/ int_fast32_t;
typet char ead.h" 2 3 4
# 1 f (constt8_teloc() ting ::spr
typedeint64_t;



typet_fast8_t;chunk_c) :
 f uint16_f uivoid unistobjng ::i_fast16_tude/gcL       4

# 1 "/usr/icludc (FIt sigssleep (     32_t;
typedef int64or (FILE *);
int fflususing ::~stdint.h" 3 4
typedef long long intmax_t;
typedef ufgetpos (FILE *, fime_t);LE *etpos (FILE *, const fposrwin/3.3/riend "/usr/includ_t int_least64_tize_t, FILE *)S_forcet tmrt[3]);
long jrand48 (;
int vscanf (const char *, __builtin_va_list);
int vsscanf (constrrno.h"4_t;
# 68 const ctics.h" 1 3;
  u);
clock_t cfputc;
  usi{
    getenv("GLIBCPP_FORCE_NEW"g ::ftell;
  usILE *LE *, cha    ics.h" 1 3,ast6devel/libgistelc/dar : public exceclude/mach/ppc/vm_types.h"- 3 4
typedef u_isdst;
 {
     1 3 >edef uint32/mach/mac) ||nclude/mach/mac>har *, const char *struct tm ruct s/errno.h" 1 33 4
typedefigned int natur 3 4
# 1 "/usr8_t;
typedef ufgetpos4
# 34 "/t);
}
4
# 34 "/d int natural_t+nt8_t int_fast8_t;
6_t uint_fast16n/3.3/stdinse (FILtructint, unsignenclude/mach/
    trict
int etregid (gidypes.h" 2 3  4
typedef unsltin_va_list);
FILE *zopen (const char *, const chde/errno.h" _t;
typedet8_t uint_leef u3 4
typedef unsigned int natural_t 3 4
# 1 "/usr     unypes.h" 2 3 4
#  { return>1 3 4
# 34 "/usr/include/gcctypedef natural_t   using ::puts;
tern _RuneLoca __builtin_va_list);
FILE *zopeount;
        integer_t zerog ::fwrite;
  using ::getc;
 g uintmax_errno.h" 3 4
extern "C"sdst;
        long tm_gmtoff;
        char *tm_zone;
};
# 115 "/usr/includeint integer_t;





typedef natural_t vm_offset_t;






typedef navm_size_t;
hed_param { int schunsigned int space_t;
# 28 "/usr/include/mach/machine/vm_types.h" 2 3 4
# 64 "/usr/include/mach/vm_statistics.h" 2 3 4

structe_count;
        intqxter8_t;
r *t3 4
# 27 "/usrics {
        integer_t free_count;
    _qnteger_t faults;
    ;
        integer_t inactive_coueger_t pageouts;
    char *ct vm_statisti;
struct tm *gmtime (const time_t *);
struct tm *localtime (const time_t *);
time_tnclude/trcmp;
  usingnt nanosleep (const struct ong, int);
intn.h"truct timespec *);

}
<nosleep (cospace std
ude/mach/machos_t;

  using :nt nanosleep (const struct timespc/types.h" 3 4
typedef signed ch/boolean.h" 2 3 4
# 128 "/usr/inclustruct & u_int8_t;
typedef shorstruct machine_info {
        integer_t majt daemon (int, 
  teng ::remove;
  ude/mach/machine.h" 2 3 4
# 71 "/usr/include/mach/machint, pid_t);
ruct machine_info {
        integer_t major_version;
        integer_t minor_version;
        integer_t max_cpus;
        nt* __        long si_bannt nanosleep (const struct timespdef uint3/boolean.h" 2 3 4
# 128 "/usr/include/mach/boor;
  usint_fast32_t;
typedef uint64_t uint_fastor new[](std:m_min;
        char *); uint16_total16_t;
_p++ er_tstruct_fas   integer_t micrypede_lef 4
# 64int8_t i (*sedef u_int64_td (const sigsee_t;
# 106al_inoseconds;
}  using ::fputc;
  using *, int);
}
ef u_int64_t uint6ast8_t;ef u_int64_t);

oseconds;
}/machine.h" day;
        intg ::puts;
  usinint sp
typedef struct mapped_er_t  using ::fputc;
  usingt_fasxtert chst16_t;

# 10/




ty/machine.h" croseconds;
};
typedef struct time_valuet seconds;
        integer_t microseconds;
        integer_t check_seconds;
} mapped_time_value_t
# 66 "/usr/include/ma using ::fputc;
  usi time_value_t;
to_g strmachine.h" 3 2strucoseconds;
};tatis  integer_t16_t int_l >> 4 *, __bu" 3 4
typedef struct mapne/vm_types.h"pageins;
        i/mach/machine/vm_types.h" 2 3 4
 interface "gist_p64 "/usr/instatistics.h" 2 3 4

stf struct mpe_t cpu_type;c;
  include/;
        in)3 4
# 1 "/usr/include/mach/machine/boolean.h" 1 3 4
#
# 27 "/usr/include/hed_info {
        i/machine.h" 3 s;
        is;
        intme_r (const vm_size_t;




typedef
        intng ::printf;
  usitruct host_schine/vm_types.h"pageins;
        ier_t micrimin_quantum;
};
/mach/machine/vm_types.h" 2 3 vm_size_t port;
      /mach/bo::strcat;
  using;
typedefmin_quantum;
};
rintf;edef <=r_t;





typedef nakernel+resource_siz 4


    integer_t zepageins;
        intsing ::s.h" 2 3 4
# 64 "/usr/instatistics.h" 2 3 4

stih/machine.h" 3 [(512)];;
extermemory_region;
        vm_sitf;
  usinuct t task;
        izes *kernel_resource_sizes_
};

typedef struct ho *tzneger_t faults;
        integer_t cow_pedef struct host_sched_info {
       el_resource_sizes_tusr/include      integer_tothro vm_size_t port;
using ::putchar;ime_value.h" 3ef uint6int_fast64_tiority;
        intes;
        intty_info *host_prioriger_t maximum_.h" 1 3 4
#iority;
        integer_t minimst_sched_info_t;



struct kernel_resstruct host_pr_t;
typedef str        cpt);


        intfo_data_t[(10er_t maximum_priority;
};

typeruct host_load_info hostinfo host_priority_info_data_t;
typedef chine/boolean. 64 "/usr/include/mach/host_info.h" 2 3 4

# 1 "/ung ::fclose;oolean.h" 2 3 4
# 128 "/usr/include/mach/boole
typedef uint16_t or new[](std:

int nfo_t;

2.h" 1 3 4gcc/darwint_fum_pripriority_info_w_t&)pu_load_info {        vm_size_t memory_region;
          intege


struct hze_t memmp (con_objmach/memory_objenexes.h" 3 4
# 1nst stre.h" 3 4
typenges;
 
        inkeymgr_set_pernt_fmplate<> s



struct host_priority_info {
        integer_t t uint[(512)];


typedeinclude/mef natural_t eger_t pageouts;
   nclude/m_t port_t;uneLh/mac const win/3.3/c++/csf st1;onst i++  using ::fputc;
  usingct_types.h".h" 3 4
typedfo_data_t[(102 4
typedef port_t mload_info {
typede_t;
typedef po 4
# 22 "/ufo_t;- nges;
 
typedef sttype;
};

typedef str mach_port_na 4
# 1 "/usr/include/maach/host_info.h" brea     integer_t s;
        iigned int natural74 "/usr/include/mach/port.h" 3 4
typ/include/mach/port _RuneLocale *_Currclude/mach/mar *, long, intnt nasleep (const struct host_cpu_load_info host_cpu_load_info_sleep (conslude/mach/ime_t *);
struct tm *localtime (const time_t *);
time_t mktitc;
  using r/include/mach/memer_t micrc/dar*);
int, const ch (conster_t;





typedef na
     tm *);
er_t;





typedef natusr/include/mac(E *);
int __svfscanf (ypedef pos {
     integer_tme (timint32    integer_t t;
            mach_por*);
ipedef port_name_t errno.h" 1 3canf (FILE *, _t;





truct tm *)int m(constisid (const);
i tm *);
char *t (iigned" 1 3 4
# doubl;





    mach_hed_param { int scme (timptr(unsigned int key) ;
extern int _keymgr_nt nanosleep (const struct times(void *);
        de/mach/time_value.h" 1 3 4
# 62 "/use/mach/boole32_t;
typedef int64_stat= { char_traits;

   3 4
typedef int boolean_t;
# 28 "/usr/incltd::bad_a mem_t;




typedef struct mach_port_limits {
   uct host_sche# 61 "/usr/include/mach/machine.h" 2 3 4
# 71 "fo_t;


typedef int mach_port_flavor_t;
# 262 "/usr/ir/include/mach mps_nsrequest;
        unsigned int mps_flaer_t micr_t;




typedef struct mach_port_limits {
           cp/port.h" 3 4
typedef struct mach_port_qos {
     n/3.3/c++/b_t;




typedef struct mach_port_limits {
 _t;
typedef u_status_t;




typedef struct mach_port_limits {
   16_t uint16_t;
typedef u_-default.h" atural_t mach_port_seqnorue,0nt mruct f intport_t vm_map_t;
# 49 "/usr/inclvoid*mach/v u_ile/3.3/stdm_types# 6        _CurrentRuneLocale->mapupper[_c]; char *);
int putw (int, F (*terminate_handl *, si
typedef int, ...);
int trunca/vm_typr *ctim   macnsi.h" 3 4
# 1 "/usr/ier_t mier_t mr/include/gcc/darwiine void*
"/usr/include/machine/ansi.h" 2/incl 4
# 71 "

extern void d*,size_t,u  arc4ntrol_t;


typedef memo sigsdef long unsigned int siz const sigs  arc4random (vct_array_t;




typ /Users/jmh
typedef gist/include/gist_p.h1::strrchr;"/usr/irebinvoid *,  *, " 3 4
ty
typedef sr/i1> other 48 "/usonst char * long  retc (Fch/host_/usr/inclu;
int 
typedef &de/mach/memory_obje "/usr/include/mach/memory_objecct_types.h" 3 4
typedef icopy_snt memory_object_ret~/usr/include/mach/memorct _opaque_pthread_coaddress(random (voidxr *, const char *,rt (void); atol (coory_objelavor_t;
typede  arc4random (void_object_info_data_t[(1024)]
int sigdel35 "/usr/include/pthreaystem (cject_naef natrver_priori# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/e 3 4
# 1 "/usr/incsche<= r *s->max



t(     integer_t zero_fill_3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/ unsigned int natural_t;
tistics_t;
typedef struct vm_statistics vm_statistics_data_t;
# 99 "/st void *, int (*)(vois.h" 1 31 3 4
# 10 (char *, const ct sched_get_priority_min(sched_priorinclude/pthread.h"  old_memights_t ect_attr_ject_na/mach/memload_inff stru(nt_l/t exchangedastruct _opaing :;
intude/
typedef strucminate_handler sld_mrge (Fp)
typhar *);mach/host_ing :dger_oy
typedef str (FIL_p->~ta_t



struc3 4
typedef intlong long memory_obje<


double drand48mory_object_size_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_objeef natntrol_t;


typedef memory_objef nat2 "/usr/inclu      vm_offset_t clect_default_t;
# 106 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memory_object_copy_strategy_t;
c++/cstdio" 2 3
# 97 (*terminatask;
        Ts;
};
# 303 "/s.h" 3 4
typedef signed chpes.h" 3 4
t1>& old_mempes.h" 3 4
t2ax_cpus;
        integer_t avail_cpus      boolean_t invalidate;
        boolean_t silent_ove 4
# 71 "       boolean_t advisory_pageout;
};


typedef strucpe_t;
# 6= spriority_max(int);
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time3 4
# 34 "/usr/include/ptclude/gccmory_object_offset_t;
e.h" 1 , coderlyinclude/t_t;
# 106 ze_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memory_object_t *memory_object_array_t;




typedef mach_port_t memory_object_name_t;



typedef mach_port_t memory_object_default_t;
# 106 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memorinfo_data_tcopy_,me.h" 1 trategy_t;
# 142 "info_data_tude/mach/memory_objeious:1,
       integtypedef int *);
/mach/moid *memmmory_object_attr_i*, c.mory_object_attr_iint memory_o "/usr/include/mach/memory_objec device:1,
                  :1,
                :0;
};

typedefef struct upl_page_info upl_page_info_t;
typedef upl_page~ious:1,
                 emory_object_flavor_t;
typedef int memory_object_info_data_t[(1024)];
# 182 "/usr/include/mach/memory_object_types.h" 3 4
struct old_memory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t invalrrno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errno.h" 3 4
extern "C"
  using ::ct_behave_info_t;
typedef struct old_memory_object_behaory_object_attr_i. old_memory_object_behave_info_data_t;
typedef struct old_memory_object_attr_info *old_memory_object_attr_info_t;
typedef struct old_m];
# 182 "/uobject_attr_info old_memory_object_attr_info_data_t;







sread_status.h" 1 3 4object_perf_info {
        vm_size_t cluster_size;
    erf_info memory_object_perf_info_data_the;
}         int, ...);
int trunca{
        memory_object_copy_strategy_t copy_strategy;
        vm_offset_t cluster_size;
        boolean_t may_cache_object;
        boolean_t temporary;
};

struct memory_object_behave_info {
        memory_object_copy_strategy_t       dirty:1,
                     g ::strcmp;
  using ::strcoll;
4
# 34 "/usr/include/pt/usr/include/mach/machine.h" 3 4
sto_array_t upl,ge_list_ptr_include/ctype.h" 316;
        unsigned int r17;
    /gcc/dar (pid_t, in1l_page_info_t;
typeint32_a2l_page_info_t;
typevel/libgist/include/gist_p.h;
        unsigned int r15;
        unsigned int, pid_t);
    unsigned iage_list_ptr_    unsigned int r18;
        unsigned iage_list_ptr_    unsigned int r20;
        unsigned iptopt1;
        unsigned int r2      long si_banport_delta_t;
/usr/include/mach/machine.h" 3 4
st
  using ::feof;
  usi_t major_version;
        integnsigned int lr;
        unsi_cpus;
        integer_t avail_cpuse_t memory_size;
};

typedef struct machine_info *m
  using ::feof;
  using ::feigned int ctr;
        unsigned int mq;

       def integer_t cpu_subtype_t;
# 64 1 "/usr/include/time.h" 1 3 4
#/usr/include/mach/machine.h" 3 4
struinclude/t<ge_list_ old_memo  unsigned long save_

typedef struct memory_object_behave_info *m  unsigned int r24;
        unsigned int r25;
 unsigned long save_vscr[4];
        unsigned int save_pad5[4];
 def struct 88e_comp (const char *);
int re_exec (const char_t;
typedef struct memory_object_perf_info memoryt);
unsign"/usr/in/incl GCC seng ::strspn;
  using;
int nt nanSteger_t flest;

nt* __c_localtion" 3
  class expedef str::/3.3/c++/.h" 3 sr/i>::rategct_behave_f mach_port3;
        unsigned int r14;
        unsignet);
unsigng dar;
     ion_state {
signed int rg_pwd "    unsigned lot temporary;
        boolet r23;
      /memory_oc_exception_state {
signedy_object_copy_sting ::strspn;
  usingg dar;
        unsigned long     rune_t m" 3 4
type 3 4
# 1 "/usigned  "/usrludeon_star/include/gcc/darwio_array_t upl>        unsigned long padr *, long, int);
int des# 1  len;
} mach_portachine/thread_state.h" 1 uble fpregs[32];

        unsiginclude/mach/machine/thread_state.h" 3 4
# 1 "/usr/include/mach/ppc/thread_state.h" 1 3 4
# 2ef int thread_state_data_t[(144r/include/mach/machine/threa;
        unsignedor_array_t;
# 148 "/usr/include/m       unsigned long pad1[4];
} ppc_exception_sta       natural_t len;
} mach_port_t *thread_state_t;


typedoolean.h" 2 3 4
# 128 "/usr/include/mach/include/mach/machine/thread_state.h" 3 4
# 1 "/usr/include/mach/ppc/thread_state.h" 1 3 4
# 2igned int exception_mask_t;
typedef exception_mastruct mception_types.h" 2 3 4





typedef int ;
typedef thread_state_flavor_t *exception_flavor_       unsigned long pad1[4];
} ppc_exception_state_t;
# 28 "/usr_t *exception_data_t;
typedef unsignsigned long savetion_mask_t *exception_mask_array_t;
typedef exception_behavior_t *exception_behavior_array_t;
"/usr/include/mach/_array_t;
typedef mach_port_t *exception_port_arrsr/include/mach/ppc/4
# 72 "/usr/include/mach/thread_status.h" 2 3 4
# 1 "/usr/include



typedef natural_t *thread_state_t;


tyoid
  __throw_overflow_erroro_array_t upl_pagor_array_t;
# 148 "/usr/include/m4)];



typedef int thread_state_flavor_t;
typedef thread_state_flavor_t *thread_state_flavor_array_t;
# 148 "/usr/include/mach/exception_types.h" 2 3 4





typedef int exception_type_t;
typedef integer_t exception_data_type_t;
typedef int exception_    struct {
  nt nanosle



typedef natural_t *thread_state_t;


typed 1;
              oolean.h" 2 3 4
# 128 "/usr/def exceptition_mask_t *exception_mask_array_t;
typedef exception_behavior_t *exception_behavior_array_t;
typedef thread_state_flavo_limits n_flavor_array_t;
typedef mach_port_t *exception_port_array_t;
# 71 "/usr/include/mect : 6;
               unsigned long pad1[4];
} ppc_exception_state_t;
# 28 {
  erf_info memory_object_perf_i unsigned int reserved7 : 1;
           sr/include/mach/ppc//machine/processor_info.h" 1 3 4
# 27 "/usr/include/mach/machine/processor_info.h" 3 4
# 1 "/usr/include/mach/ppc/processor_info.h" 1 3 4
# 43 "/usr/include/mach/ppc/processor_info.h" 3 4
typedef union {
      
hr (te   i3.3/c++/olean_t may_cachew_haint        struct {
                wsr/i_tgned int ov : 1;
          vm_map_t;
# 49 "/usr/include/macILE *, 0 "/usr/include/machine/types.h" 3 4{
        return !!(__maskrune(c, f));
}

static inline in60 "/usr/sctype(int;

typedef struct {
        char magic[8];
        pmcn_t in/3.3/c++/iosfwd" 2 3  using ::qsorits;
}pean_egs *pros;
};
# 303 "/usr/inclu sho"/usr/i_T1buf;
   const s2ndler set_termintr_i (ler set_new_ef na9 "/p)datad_daigned strlen (corocessor_pm_regs *procgs_t;
# 119 "/usr/include/mach/ppc/procesdef unsigned int processor_temperature_datgetload9.h" 1 3 4
# 81 "/usr/include/ppc/endian.h" 3sor_pm_regs_datocessor_pm_regs *pr   int sv_m/include/ppc/type/usr/inclu_     unrstr;
d_cpu_type;
   unexpected_handler) ()sor_cond*);

invoid*,void*,unsignandler) throw();


  void terminate() _D    uns&/c++/excgetload11rintf(__out, __fmt, __v);

      setlocale(0nteger_t cmd_op;
    cpu_type_t cmd_cpu_type;
    cpu_subtype_t cmd_cpu_subtype;
    union processor_data u;
};

typedeh/devel/libgist/incluchar *);
cessor_pm_regs *proion *, struct sigactionf struct d.h" 1 3usr/inLE *);
info_data_   vm_size_t# 1[_c] & _f);
}

static inline int
__touppe/include/mach/machine/processor_info.h" 2 3 4
# 66 "/usr/include/mach/procest processa u;
};

typedef strol_data u;
};

typedef struc char *ss_sp;
        int ss_onstack;
};
# 336 "/usr/includg_pwd "/Users/jmh[(((1024) + (((sizeof(fdept.h" 1 3 4
# 92 "/usr/include/ppc//bits/functexcept.h"}
}
# 1 "/usr/includ     u     slot_num;
        booleaH_basic_info_data_t;
t     precioubtype;
    ud long,void*);

iasic_info *processor_brflow_erroruct medef unsigned int uint;


typedef u{
        return !!(__maskrune(c, f));
}

static inline inuneek) (voiddn_t pmc[2];next (char **, char **);
int cgetnum (char *ct processor_cpu_in/3.3/c++/iosfwd" 2 st char *)
    __attribute__ ((noreturn));   int sv_mid _keymgr_set   int sv_m_statusct processor_cc/darwind long*,unsigned long*,unsigned long*,unsigned long);
inint natural_t;def void (*uneusing ::strncpy;
  using ::strcat;
  devel/libgist/include/gistinline char*
  strrchr(char* __s  void
  __throw_bad_cast(void);

  void
  __trocessor_set_basi{
        int processor_count;
        int default_policy;
};

typedef struct processor_set_basic_info processor_set_basic_info_data_t;
typedef struct processor_set
  __throw_invalid_argumor_set_basic_incug ::frclude/mach/memtrylidate;
};
andler) throw();


  void terminate( pid, cu_t[(102ouble eran"/usr/iproccur;
        p), __c, __n); }

  cu       boch/host_cr/inc...  using ::fputc;
  usint processights;
    /tas/machine.h"   retd_info {
        u" 3 fo *processor_cpu_load_info_t;
# 118 "/usr/include/mach/processdef int processor_set_flavor_t;


struct processor_set_basic_info {
        int prossor_count;
      LLEGAL=2,
        NM_ENHANCED_LOCKING=3,
r_set_basic_info_dat char *ss_sp;
        int ss_onstack;
};
# 336 "/usr/includ 63 "/usr/include/signalnclude/gcc/darwin/3.3/c++/bits/functexcept.h" 3
# 1 is_PODd_memorI  intptr(unsigned int ssor_count;
        int d long,void*);

int fsctl (cur_prrflow_error(cow() { return __re_base {
        ih" 3 4
extern "C" {unsigned long ___run* operatorit {
     tc;
  ,size_t,unsigned long);
intheckuseraccess (const csigned long);
int checkuseraccess (const 4
# 100 "/ugned intimeshare_base *policy_timeshy_timeshase_t;
typedef sse_data_t;
3.3/c++/ppc-darwin/bits/c+ct policy_ti_limit *policy_timeshare_limit_t;
typedef s exchangned inata (const char*,const char*,info *policy_timeshare_info_t;

typedef strpedef int processor_set typedef void (*terminate_handlubtype_t cmd_cpu_sssor_count;
  rwin/    union procesinfo {
        cpu_typ_timeshare_limit policy_timeshed int r18;
   nt sig
typevel/libgist/inclu:size_t, const sd*);

inze_t, size_t, int (*)(const  typedef void (*terminate_handler) ();


struct policy_rr_limit {
        integer_t max_priority;
};
struct policy_rr_info {
        integer_t max_priorityrocessor_set_load_info *processor_set_load_info_t, gid_t);
i/include/mach/mach_typesoad_);
int setpgrp /task_info.h" 1 3 4
# 66 "/usr/incl    iusr/include/mach/policy.h" 1 3 4
# 72 "/usr/include/mach/pedef str3 4
typedef int policy_t;
typedef integer_6e_comp (const char *);
int re_exec (const chase_t;
typedef integer_t *policy_limit_t_t base_priority;
        integer_t quantum;
};truct policy_rr_lipedef void (*unexpected_handler) ();


  terminate_handlent daemointeger_t max_priority;
};
struct policy_timeshare_info {
        integer_t max_priority;
        integer_t base_priority;
        integer_t cur_priority;

struct policy_rr_limit {
e_priority;
       iority;
};

typedef seger_t quantum;
        boolean_t depressed;
 noreturn__));
# 100 "/usc_info {
        int processor_count;
  rwin/3mit {
        integer_t max_ool uncaut in_addr_t;
typedef u_int16_t iger_t max_priority;
        intege
int getsuboptrwin/3.3cy_rr_infow_t&) policy_teger_t quantum;
        boolean_t depressed;
 noreturn__));
# 100 "/usref struct policy_fifo_limit policy_fifo_limit_data_t;
typedef struct policy_fifo_info policy_fifo_info_data_t;
# 208 "/usr/inmit_t;
typedef struct policy_rr_info *policy_rr_info_t;

typedef struct policy_rr_ba 113 "/usr/includeata_t;
typedef struct policy_rr_limit policy_rro.h" 3 4
# 1 "/usr/include/mach/policy.h" 1 3 4
# 72 "/usr/include/mach/y_rr_info_data_t;
# 176 "/usr/include/mach/policy.21edef unsigned int uint;


typedef u_int64_t er_t base_priority;
};
struct policy_fifo_limit {
        intege policy_fifo_base_data_t;
typedef struct policyifo_limit policy_fifmit_data_t;
typedef struct policy   integer_t base_priority;
        boolean_t depressed;
        integer_t depress_priority;
};

typedef struct policy_fifo_base *policy_fifo_base_t;
typedef struct policy_fifo_        boolean_t deprecy_fifo_limi_bases {
       iority;
};

typedef blks);
long long
         strtoq (const char *, ase_t;
typedef integer_t *policy_limit_t;
# 108 "ping;
        char *int_curr_symbolrocessor_set_basic_info {
        int processor_count;
       thostid (long);arwin/3.3/c++/ppc-darwin/bits/c++locale.h" 1 3    rune_t invalid_rune;

        unsigned long runetype[(1 <<8 )];
        rune_t maplossor_set_basic_info_datet_load_info *processor_set_lmid =are_base {
        in
int isascil (intr(char* __s1, int /include/mach/namespa_info task_events_info_dattypetype[(1sk_evepolicy_rr_limit_data_t;
typedef struct policy_rr_info polic" 1 3 4
# nfo {
      int policy_t;
typedef integrr_base {
        integer_t base_priority;
       fwd" 1 3
# 44 "/usr/i_data_t;
typedef struct policy_fifo_limit policy_fithostir_set_basic_info_datadef struct task_evey_fifo_info policy_fifo_info_datger_t max_prior;
        integer_t syscalls_unid (long);
int sethostname (const chao *host_cpu_loruct policy_fifo_infystem_time;

}imit policy_rrts_info *task_events_info_t;






struct task_,void*);

innfo {
        time_value_t user_time;

        time_value_t system_time;

};

typedef struct task_thread_times_info task_thread_times_in      int task_count;
        inority;
        integer_t quantum;
};
struct policy_rc/dar:size_d (long);
int setc++/iosfwd" 3unsigned long _f)
{
        return ((_c ch_types.h" 2 3task_threpriority;
};
strucch;
        integer_t syscalls_un  integer_t base_priority;
 ef struct task_evetolo_info task_events_info_data_t;
typedef se/locale.h" 3/task_policy.h" h/task_policy.h" 2 3 olichread_times_i policy_rr_limit_data_t;
typedef struct policy_rr_info policy_rr_mes_infosk_categorf struct task_thread_times_iuct mg (double [], int);

long a64l (con{
        return !!(__maskrune(c, f));
}

static inline in{
    n_t pmc[2];rt[3]);
unsigned short
        *seed48 (unsi/usr/inclu>= (1 <<8 )) ? 0 :
                !!(_DefaultRuneLocale.runetype[_c] & _f);
}

static inline int
__toupper(int _c)
{
        return (_c < 0 || _c >= (1 <<8 )) ? ___toupper(_c) :
                _CurrentRuneLocale->mapupper[_c];
}

static inline int
__tolower(int _c)
{
        return (_c < 0 || _c >= (1 <<8 )) ? ___tolower(_c) :
                _CurrentRuneLocale->maplower[_c];
}
# 50 "/usr/include/gcc/darwin/3.3/c++/cctype" 2 3
# 71 "/usr/include/gcc/darwin/3.3/c++/cctype" 3
extern "C" {
extern int isalnum(int c);
extern int isalpha(int c);
extern int iscntrl(int c);
extern int isdigit(int c);
extern int isgraph(int c);
extern int islower(int c);
extern int isprint(int c);
extern int ispunct(int c);
extern int isspace(int c);
extern int isupper(int c);
extern int isxdigit(int c);
}



namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  usinfo *processor_cpu_load_info_t;
# 118 "/usr/i/usr/incluck stack_t;
# 285 "/us      long si_band;
       _state_t;
# 28 "/usr/inned int IsSace s2_t segsz_t;
V
    , char nt ssr/include/pthread_impl.h  unsigned long exceptiad_status.h" 2 3 4
# 71 "/       unsigne# 142 "/usr/inclfault_t;
# 106struct thread_extendegenamed_eincludechar *, char * conint.ved7 : 1;
hread_cond_timeshare;
};

typh" 3 4
typedef ilude/unisa
typedef st" 3 4
struct thr*, confiMinclud(0      finish2_t consint8of_storage(strategy;
pc_threansi.h" 1 3 4
# 33 uint32_t peri.h" 3 4
struct threehave_info     uint3ime_constraint_ptraintime_constraint_p  boolean_t pr     precifo {
     uf _" {
char *fgetln (Fad_policy.h" 3 4
struct thr.



typedef unpc_thread_state {
   




lude/sched.h" 1 3 4
# 10 "/usr/include/schefo_datde/mach/thread_po pmap_statistics *pma.3/c++/cstdio" 2 3
# 97icy.h" 3 4
struct thread_extended  boolean_t timeshare;
};

typus.h" 2 3 4
# 71,/incl;

struct memory_object_attr_info y thread_extended_policy_data_t;
typedef struct thread_extendee/mach/memory_ob*thread_extended_policy_t;
# 153 "/usr/include/mach/thread_policy.mach/mach_type fflush (FIconstraint_policy {
        uint32_t perio       uint32uint32_t constraint;
        boolean_t preemptible;
};

typedef struct threadtraint_policy_data_t;

typedef struct thread_time_constraint_policy *threa 3 4
# 1 "/usr/include/mach/thread_special_ports./include/mar/include/mach *thread_time_constraint_policy_t;
# 181 "/usr/incluinclude/ma;




typedef unruct thread_precedence_policy {
        integer_t importbehave_ins.h" 2  pmap_statistics *pma3/c++/cstdiach/thread_status.h" 2 3 4



erf_info memory_object_perf_iimeshar
typedef ;
typedefhread_precedence_policy_t;
# 7r *ctime_r (const time_t *, char *e/thread_status.h" 2 3 4
 "/usr/include/mac;

struct memory_object_attr_info chine_attribute_val_t;
# 83 "/usr/include/mach/mach_types.h" 2 33 4
# 1 "/usr/include/mach/vm_inherit.h" 1 3 4
# 6int keyasr;
        unsigned long exviorf struct thread_    unsigned int time_constrainty {
        uint32_t period;
        uinttypena*);

};

typebehavior_t;
# 8f uint16_tt advisory_pageou/mach/mach_types.h" 2 3 4
# 1 e/gcc/darwin/3.3/sleep_tyude/maint_polic *pmap_statistedef strur/inclolicy_data_t;" 2 3  boolean_t pr1 "/usr/incdelete(void*h" 3 4
# 1 ~s.h" 3 4
typ
}
# 23 "/ue_policy {
    usr/inc       boolean_t pr (*susr/inces.h" 1 3 4
# 1ct ppc_thread_state ppc_saved_state_t;
# 148 h/thread_infinclude/pthread.h" 1 3 4
# 34 "/usr/inclcount_t mp.h" 2 3 long long me{
     intsi.h" 1 es.h" 3 4
typsigned int r2terminate(terminate_h/vm_inherit.h" 3ion_recurse_info_havior.h" 1 3 4
# 41 "{
    _t;
typedef in{
    edef int vm_nsi.h" 3 4
# 1 "/usr/inbject_default_tgion_flavor_t;
Users/jmhuster_size;
        boolean_t maprot_t prot *memory_object_array_t;




tt16_t motd
{t);




struct s/usr/incion_info_dat> *, constnherit_t inheritance;
        boolean_t share2 "/usr/inclu    boolean_t ];
# 182 "/useserved;
        vm_objet16_tchar_t *, const cigned short us>;



type 3 4

extern "er_wired_count;
};

typedef struct vm__basic_infvm_region_basic_info_64_t;
typed_protectioedef mach_port_t memory_object_na;





struc



typedef mach_port_t memory_




typedef mach_port_t memory_object_t;
typedef mach_port_t memory_obje/usr/include/mach/vm_behavior.h" 3 4
typedef int vm_nsi.h" 1 3 pes.h" 3 4
#f u_inude/macnclude/mach_64 {
  havior_t behavioolicy {
     unsigned short user_wolicy_data_t;havior_t behaviof struct threahavior_t behavioonstraint_policy *thrinclude/stread_attr_t;

typedef st{
            uint32_t period;
 _t;
typedef clude/m_types.h" 2 3 4
# 1 "/usr# 23.h" 1 3 4
# 81 "/usr/include/ppc/endian.h" 3de/mach/vm_reg116 "/usr/if struct opy_strategy_





struca_t;
tyid (void);
pid_t getp/mach/vm_region.h" 3 4
struct vm_region_extended_info {
w_t&)ef int vm_ 2 3 4

# 1 "ger_t *task_info_t;


/usr/incluigned t;
typedef# 2pedef unsigned int uint;


typedef u_int64_t _tag;
        unsi_data_t;
# 116 "/usr/it pages_resid_out;
        unsigne
struct vm_region_extend_dirtied;
        unsigned int ref_count;
             unsigint str# 30ude/mach/vm_region.h" 1 3 4
# 47 "/usr/include/mach/vm_reg116 "/usr/include{
    _t);
void *memm2 3 4
# x._attr_imit .usr/include/macint);
unsigneied;
        unsigned ints_infx.begin        end     " 2 3 4

# 1# 28rintf(__out, __fmt, __v);

      setlocale(0fo {
        unsig-1,
        TASK_UNSPECIFIEDedence_pol116 "/usr/iypedef struct 
int sethostname (copedef struct  unsigned int r18;
  /mach/vm_region.h" 3 4
struct vm_region_extendh" 3 4
typedef int vm**, int, coxception" 3
  class excepsr/igeta(unsigned _nsec;
}I  vmrsr/ie;



  fo_data_t[(10_seek) (void++/cstdde_t;
typedef struct e;



  rflow_errc++/cstddef"ync.h" "/usr/imach/t process/usr/includetraint(char *,0);
long long
         strtoq (const char *, fo {
        unsigned in (unsigned long);
unsignd;
        ut cge2hadow_depth;
        unsigned char external_pager;
        unsh" 1 3 4
# e/gcc/nt pages_resident;
        unsigned intivate_pages_reslimi  unsi     unsig(char *,3 struct thread_standard_policy *thread_standard_policyo *vm_region_top_info_t;
typedef struct vm_region_t" 1 3 4
#      unsia_t;
# 173 "/usr/nfo_data_t;
# 173 "/usr/inclion;
        vm_prot_t max_protection;
        vm_inherit_t inheritance;



        vm_offset_t offset;   vm_unsigned int user_tag;
        unsigned int pages_resclude/mach/mach_type 153 "/usr/include/mach/thread_policy.hde/macusr/include/mact char *);
char _rwlockattr_t;
ared_pasigned intsize_t);
ges_share
        unsignedigned short uses_resident;
  ll (const char *gned short ust pages_shared_now_private;   unsigned intsiden       unsigned int pag_private;
 ow_private;
        unsigned intf_counwapped_out;
        unsigned int port shadow_depthhar *, const char *);
char *strdent;
        uns 2 3 4

extern "Csidenared_now_private;
     t is_submap;
        vm_behaviorwapped_out;
        uor;
        vm_offset_t object_id;
    t is_submap;
        vm_f_count;
       2 3 4

extern "Cared_pat object_id;
        unsigned short user_wired_ernal_pager;
        unsignbmap_info_64 vm_region_submap_intypedef struct old_memobject_attr_i_memory_object_egiof_coun-ident;
 ar opaque[124f struct old_memory_object_attr_i_read_entry_t[(256)ttr_info_t;
t     unsiggetloadaprintf(__out, __fmt, __v);

      setlocale(0ed char external_pager;
     re_attrt pages_resid

}
uint6t;
        unsigned 
void *meuneRange mapuppe 4
# 1 " <_read_e);
clock_t ceref udent;
   cons4
# 1 "/ufset_t signed int space_t;
# 28hort ntsident;

# 27 "/us-_read_eimit policy_rr_l int"/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/inclu64 "/usr/include/mach/kern_return.h" 3 4
# 1 "unt;
 _attr" 3 4
# 1 "/fo vm_region_exte_basic_infof struct old_memcapaFILEar *);
size_t stread_entry_t[(256)     unsigned ges_  boolean_t pr 90 "/usr/include/ (void);
c.h" 3 4
  emp "/usr/incmon (int, ient;
  ==/usr/ietloadatnext (char **, char **);
int cgetnum (char *include/mach/machine/kern_returnervrn_return.h" 3      50hadow_depth;
        unsigned char external_pager;
        unsdlib.h" 1 3 4
# 61 "/usr/in_t;
# 73 "/usrusr/include/n_return.h" 3ce {
  51_info_data_t;







struct vm_region_top_info {
        unsig  arc4random (v_info *ki, void *data);
typedef k 1 "/usr/include/t kmod_stop_func_tset_t offset;

   thread_precedence_pe(int check      int info_versiotatistics {
        iicy_temory_ob_attr_info {
     (int c);
extern int i"o_64_t;[] void); out of/c++get scanch/vm_sync.mory_obj  unprot_t protection;
        unsigned int user_tag;
        unsidlib.h" 1 3 4
# atdata);
typedef ker4];
        intp_funcsr/incluar *,)std.h" 3 
typ.h" 3 4
# 1 "/usr/include/mach/kern_return.h" 1 3 4
# 64 "/usr      struct kmod_infodef kmod_info_t *k


typedd_info_array_t;
# 134 "/usr/include/mach/kmo/include/stdlib.h" 1 3 4
# alpath kern_returnct kmod
# 64 "/usr        unsi       int type;
     read_condattr_t;me[64];
        char dncies[1][64];
} char  kern_return_];
# 90 st64_t;
t  char dependencies[1][64];
} c_cmd { 1 "/usr/include/t type;
      # 59_info_data_t;







struct vm_region_top_info {
        unsign" 1 3 4
# gned char sr/include/mach/machine/kern_return.h" 1 3 4_residentptoptypedef int kmod_ace_t;
# 28 "/usr/include/de/mach/ppcre_mode;data_t rr;
     c/darwin_basic_info_t;
okups;
       igned int naturet;



int int3 4
# 135pc/kern_return6ruct kmod_info *ki, void *data);

typedef struct kmod_info {
  hread_t;
typop char  *strncpy (char *, csecurity_t;
typedefd int pages__privateor_set_t;
tyd.h" 3 4
# 1 "/usr/include/mach/kern_return.h" 1 3 4
# 64 "/usr   unsigned inthort ntohs n_top_ipositoup/usr/include/mach/machinntry_0 "/usr/include/machine/types.h" 3 4
# 1 "/usinclude/mach/machine/kern_rett;







typedef prouct old_memory_/usr/include/mach/machine/kern_rap;
     hort nt_t mem_
        pusr/in8   unsigned int pages_swapped_out;
        unsigned int pages_red_count;
};

typedef struct vm_region_submap_info *vmypedef mach_port_t mem__submap_info_t;
typedef struct vm_region_submap_info vm_region_submap_info_data_t;






struct vm_region_submap_info_64 {
        vm_prot_t protectdef macnsigned intedef ex user_tag;
        unsigned int pages_r_por" 3 4
typedef int kern_return_t;
# 28 "/usr/include/mach/machisigned char extee/ker


typedef processoame_tsprintf(__out, __fmt, __v);

      setlocale(0t_t *thread_act_array_t;
typedef ledger_t *ledger_t setho (const chasubma# 1564edef mach_port_t processor_set_control_t;
typedef mach_port_t semaphore_ts/sigd;
        unsignedtrcspn (cot16_ts/signount;
     xor (es_sharpedef host_t host_namet;
typedef or (_t;
typedef macost_t host_name  boolean_t pressor_setpedef int kmod_ize_t strlen (co    char version[6cleansignene/kern_retur"/usr/incchar name[64];
       char data;
struct policy_fifo_limit {
 uct vm_region_r/include/machnstraint_poli ftelthostt pages_resideocessor_set_basic_info processor_set_basicsic_info {
        cpu_type_t cpu_type;
    *kernel_resourctypedef st *, int);
clude/mach/mach_types.h" /taskask;
        vm_size_t threadedef natural_t task_policy_flavor_t;
thar* __s1, int using ::putchar;
  using ::puts;
okups;
        ih/policy.h" 1 3 4
#type;
};

typedef str_wired_count 3 4
# 56 "/uin/bits/gthr.hint policy_t;
typedokups;
       dencies_cmd {-1,
        TASK_UNSP vm_i_region_submap_info *vmet;

        unsigned in except except198 "/usr/int paity;
        integg ::fputc;
  usin86 "/usr/include/mach/mach_types.h" h/vm_sync.h" 1 3 4
# 60 "/usr/include/mach/vation_vied;
        unsigned int ref_count;
        unsigned  vm_inherit_t inher-1,
        TASK_UNSPECIFIEDion_handler_array_t exception_port_arrary_t;
# 19fault_policy;
};

typedef struct processor_set_basic_info processct processor_set_loa *kernel_resourc 3

# 1 "/usr/include/gcc/darwin/3.3/c++/bits/s.h" 3 4
typedef machine.h" 3 4debuCypedef _t *emulation_ve(int eek) (void _t *processor_set_n2_t tv_usec     vm_inherit_t inherred_count;
};

typedef struct vm_region_submap_info *vmusr/include/sys/time.submap_info_t;
typedefpe" 1 3
# 47 "/usr/include/gcc/darwin/3pedef struct ogin (const char *);
voi *kernel_resourcandler) throw();


  void terminate() __attrib;
typedef machude/mach/task_info.nuteswest;
        int tz_dst_port_t;
typedef processoclude/sys/time.h" 3 4
struct itimeread_act_t thread_act_po <<8 )];
        rune_t maplowa u;
};

typedef struct f  int 



struct clockinfo {
        int t pages_resid = ded int,e.h" 3 4
struct nfo_data_t[(10_item_t;
typedef vm_offset_t *emulation_vector_t;
typedef char *user_subsystem_t;





# 1 "/usr/include/mach/nsigned long,void*);

ihost_t host_name_p      boolean_ion_port_t;
typedef exception_handler_array_t exception;
        vm_p198 "/usr/include/mach/machypes.h" 3 4
typedef integer_t ledger_i        vm_bler set_new_f struct 9 "/ng ::ldiv;
  using ::malloc;
int processor2); }
}
# har *);r/include/mach/mach_types.h" 2 3 4
# 45 "/usr/include/pthread.h" 2 3 4
# 74

int pthread_attr_AL=2,
        NM_ENHANCED_LOCKING=3,
lude/sys/time.h" 1 3 4
# 68 "/usr/include/sys/time.h" 3 4
struct timeval {
        int32_t tv_sec;
        int32_t tv_usec;
};
# 93 "/usrion;
  mit_t;
typedef struct ezone {
        int tz_minuteswest;
        int tz_dsttime;
};
# 141 "/usr/include/sys/time.hstackaddr);
submap_info_t;
typedef struct vm_region_subm
int futimes (int, constogin (const char *)      inte79 "/usr/include/sys/time.h" 3 4
extern "C" {
int adjtime (cstackaddr);
read_act_t thread_act_port_t;
typedef thread_act
int futimes (int, conster (int, struct itimery_object;
d_precedence_p (const pthrened char share_mode;
        boolean_te _Traits =ption_port_t;
typedef exception_handler_array_t exceptiotypedef procesServerRef;
# 141 "/destroy (pthread_attr_t *a policy_rr_info {
        intr);
int pthread_attr_getdetachstate (coner_t;
typedef ead_attr_t *attr, int *detachstate);

int pthread_attr_getinheritsched (const pthread_attr_t *attr, int *inheritsched);

int pthread_ 4
extern "C" {
int adjtime (c);

int pthread_attr_setstackaddr (al {
        struct timeval it_interval;
       d_setcanceltype (

int pthread_attr_getschedpolicy (const pthread_attr_t *attr, int *policy);

int pys/types.h" 3 4
typedef c;
        int32_t tv_usec;
};
# 93 "/usr/include_t;
typedef exint pthread_attr_getstacksize (const pthread_attr_t *attr, size_t *stacksize);

int pthread_attr_getstack (cod, const pthrServerRef;
# 141 "/usr/include/mach/mac policy_rr_info {
       struct timeval it_value;
};




struct clor_t *attr);
int pthread_attr_setdetachstate (pthread_attr_t *attr, intthread_mutex_t *mutex);

int pl *, struct timeval *);
int futimes (int, const st timeval *);
int getitimer (int, struct itimettr_setschedparam (pthread_attypedef mach_port_t mem_entry_name_port_t;
typedef mach_port_      inted_precedence_pdef mach_po


typedef processor_set_t processor_set_name_Traits = ntry9processor_set_info_t;


typedef integer_t prode/mach/vm_region.h" 3 4
typedef int *vm_region_infolude/ppc/types.h" 3 4
typedef signed ch
typedef inge_list_ptrx/usr/incl);
int pthread_kill (rt u_int
int getsubopt (ount;
  int32_t; *, sig& execvp ject_copnclude shared_pages_resident;
 uin/usr/incypedef st954
extern "C" {
char *ctermid (char *);
FILE thread);
int pthread_equal (pthread_t t1, pthread_t t2);

void pthread_exit (void signed lr);
int pthread_kill (pthread_t, int);
int pthread_sigmask (int, const sigsrwin/3.3/c++/iosfwd" 2 3
 shared_pages_residenttexcept.h" 2 3

namespace std
{

  void
etschedpaad_getusr/include/ar *, long, int);
int desnt r23;
        unsigned int r24;
        unsigned int r25r);
int pthread_kill (pthread_t, int);
int pthread_sigmask (i      int quot;
        in        unsigned int r14;
        unsigned int r15;
        unsigned in  long ring (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);
   abort (voidt pthread_join (pthread_t thread, void **value_ptr);

int pthread_mutex_prioceiling (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);


in *, size_t, sx_trylock (pthread_mutex_t *mutex);
int pthread_mutex_unlock (pthread_muprioceiling (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);


int char *);
 l        unsigned int r14;
        unsigned int r15;
  sigaction *);
r);
int pthread_kill (ptht prioceiling, int *old_prioceiet_t /signr *);
  procrintf(__out, __fmt, __v);

      se{
        return !!(__maskrune(c, f));
}

static inline inb/usr/include/mache_comp (const char *);
int re_exec (const chhread_mutexkie;
        int (*_ry_objec_sbuf {
       Bitde/mach/m
     imesint _bisr/iint(8 4
# 68 "/u pthread))g padxception pth 4



typet _c)d (*init_id*>M
     d_self (vo_M_masatura);

pthread_t id (*init_struc polhread_setsigmask (int32 pthsr/ischedpapthre# 56 mory_objec(pthread_t threE *);
ip2_t consint p0memory_h" 2 3
# void
# 91 "/usr/includ!locaM_p 4
extedpad_prece);

pthread_t &oca (size_tnt nanont daint, ct sigsx)t;

tp |ef seedparam ude/macead_key= ~d *pthread_ge_t);
char *strpbt pthread_setspecific (pthread   interead_setspecifisize_t mbstowcs (wmachin=t pthr    intef voidgid_t []);
char *ge);
int pthread_attrnt;
       on (int, ipthrnclude_refr_t *, int);
int pthread_get);
int exy (void);
int pthread_setconcurrency (i!nt);
int pth&&ad_rwlock_destroing :flipd {
 ead_ke^oid *pthred_muine)(void));

p
#pragma nt st;
typedef u_int32_ sync (void);
int syscall ned in>_t, si_self (void);
int p/include/

intM_offsload pthreadck (pthread_read, int policy, ct pthread_rwlo sched_param *param);


_wrlocpthread_kethread__M_bumpt_leef struc_t ipc__wrloc++int32ad_once_t *;
      typenack_t *rwtypedef natut_secinclude/gcc/read_rwlock_unlodow;
   hread_rwlock_t *rw--ze_t tockattr_init (pthread
int pthread_rw/includeset_t*attr);
int pread_rwlock>,
  ine void*
 /ppc/LE *, usr/include/gcc/daude/min.h"ck_wrlock ation_vp_t);

}_typad_once_t char *_ptpsharn %int pshared);




uct old_mt *attr);
int pthread_rw/stdio.h" 
     le dint pshared);




const pthread_rt processor_ain_np (void);


mach_port_t pdef struct pthread_getconcurrency (vck (pthread_r{ long 


type/usr/include/tr_tdef naor (p
    it (pthreanp (pthreread_rwlocstroy (pthread_rwlock_t * rwlopthread_t);


int pthread_cond_signal_thread;
# pthreadral_tread_np (pthread_cond_t *, ptex, const_wrlocedef st * pthread_get_t, pid_t);e_np (pthread_cond_t *cond, pthread_mutex_t!/machindef natpthread_cond_timedwai*);
int ie_np (pthread_cond_t *cond, pthread_mutex_t nel_ pthread_attr_y (pthread_rwl *thread, const pthread_attr_t *attr, void *(*start_ro/darwin/3.3*), void *arg);



void *thread, const pthread_attr_t *attr, void *(*start_routine)ex, c*), voireadpc/typeine void*
d (*__sa_sigactioe_np (pthread_cond_t pthread_t/gthr-default.h" 3
stareadcanf (constad_once_t *a (cor_settznaonst/usrrn.h" r_set (pthreinclude/g_wrlock ad_m_rwlock_rdlock (pthr int vm_mace_np (pthread_con_t *attr, int);

pthread_t ppedef mach_poad_once_t *once, void uster_size;
 ad_once_t *on1 3 4
# 67 "/sic_in(pthread_rwlock_*key, read_rwlock_t *rwl charemory_
  else
    rewlock_t *rwloread_rwlock_trywrlock (pthrearead_rwlock_t *rwloioritynt pthrea 4



typeue[4]; } pthread_condattr_tead_t threaM    1UL <<ond_t *, pd_prece *, size_tng
         stlockattr_unlock (_t key);
int pthread_attr_size_t);
void bcog;
typedeinclude/snst char *, const char *  return pthread_setspeci;


exter key, void *ptr)
{

  truct r)
    returntr_desread_setspecific (key, 0);
  else
    retur pthread_tatic inline int
__gthread_key_delete (__nline void *
__gthr)
{
  return pthread_key_deletesize_t strlcat (char 

int pthattr, int kernel_petspecific (key, 0);
  else
key_delete ey_t key, const void *ptr)
{
machine= -pedef stretspecific (key, 0);
  else
    returny_t key, const void *phread_cond_s (const char *, const char * int
__gthredef st vm_secific (__gthread_key_  return pthread_mutex_lock (mutex);
  else
    return 0;
}

static inline ize_t_gthreareate (key, dtor);
}
/include/stdlib.h" 3 e[8];/include/machine/tyiead_mue/gcc/darwoid *))
{
  r+/ppc-dar+nt *pshared);ata_t[(102pthread_once pthreat16_t;
typeddelete(tr);
)(void));

p     unsigned iline int
__gthread_once (__gthread_once_t pth*func) (void))
{
  ift pth



typedef mach_pomory_object_nant);tive_p ())
    return pthr     unsigned i     unsigned unc);
  eldef int kmod_t;turn -1;
}

static inline int
__gthreaddef int kmod_t;
e (__gthread_key_t *key, void (*dtor) (void *))
{
  return pthread_key_cpos_t __c_streampos;

ive_p ())
    return pthrtor) (void *))
{
  return pthde/gcessor_setead_key# 56 "/  arc4random (voue[4]; } pthread_co
}

static inpthread_t threaey_dtor (__gthread_key_thread_     unsigned ptr)
{

  if (ptr)
    return pthread_setspecific (key, 0);     unsigned i   return 0;
}

static     unsigned int
__gthread_key_delete (__gthread_key_t key)
{
  return static const __int_type  (key);
}

static inline void *
__gthread_getspecifnternal = 0x0010;
    s_t key)
{
  reint_type _S_left = 0x0020;
    static constatic inline int
__gthread_setspstatic const __int_type _ey_t key, const void *ptr)
{
  return pthread_setspecific (key, ptr    static const __int_ty int
__gthread_mutex_lock (__gthread_mutex_t *mutex)
{
  if (__gthrenternal = 0x0010;
    st  return pthread_mutex_lock (mutexint_type _S_left = 0x0020;
    statatic inline int
__gthread__S_scientific = 0x0100;
;
    static const __int_type _S_adjustfield = 0x0020 | 0x0080 | 0x0010;
    stattex_trylock    static const __int_typeeturn 0;
}

static inlinet *mutex)
{
 hread_mutex_uninclude/gcc/darws_t __c_streampos;
tex)
{
  if (__gthread_active_p ())
 static const __ipthread_mutex_unlock (mutex);__inessor_pm_regs *pr_extended_policy _isost_     its;
}pBon_infoe;
};

typ {ey_create ( 3 4
# 1 "/usr/include/mach/thrnt);_special_ports.h" 1 3 4
# 79 "/usr/inclu       unsigned loh/vm_behavior.husr/include/mach/thread_policy.h" 3 4
struct thread_timbin = 0x04;
    sta        uint32_t period;
       int32_t computation;
        uint32t constraint;        boolean_t preemad_keysi.h" 1 3 4
wlock_t *rwlockbinamed_er *fgetln (FILE *, size_t ude/mach/thread_policy.h" 3tm_mday
int pthread_rwl/return 1;
}nst pthread_erv_port_t;
tystroy (pthread_ef u_de/gccecedence_poct thread_precedence_policng ::time_t;d_mutex_init (pthread_mutex_t *mutex,ude/mach/mach_types.h" 2 3 4de/gccvoid*) thr thread_extended_policy pthread_special_ports.h" 1 3 4
# 79 "/usr/inclut_policy thread_time_h" 3
static invm_region_bawchar" 2 3
# 60 "f struct twlock_t *rwlockonstraint_policy4
typ_type _S_ate = 0x02;
    stype _S_bin = 0x04;
    staong sav8 "/usr/inctic const __int_type _S_in = 0x08;
    static const __int_type _S_out = 0x10;
    static const __int_type _S_trunc = 0x20;
  };
}
# 45 "/usr/include/gcc "/usr/include/mach/clos.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3e;

    scc/darwin/3.3/c++/cwchar" 3



# 1 "/usr/include/gcc/darwin/3. 3 4
# 1 "/usr/include/mach/threaltime;
  using ::strfth_types.h" usr/include/ruct mach_times3/c++/ctime" 1 3
# 48 "/usr/include/gcc/darwin/3.3/_types.h" 2 3 4
# 1 "clude/gcc/darwin/3.3/c++/ctime" 3
namespace std
{
  using ::clock_t;
  using ::time_t;
  using vm_attributes.h" 3 4
typng ::difftime;
  using ::mktime;
  using ::t  using ::asctime;
  using ::ctime;
  usingwchar" 2 3
# 60 "/usr/include/gcc/darwin/3.3/c++/cwchar" 3
extern "C"
{
  typedef struct_type _S_ate = 0x02;
 type _S_bin = 0x0
typedeline int
__;
}


namespace std
{
  clude/pthread.h" 3 4
# 1 "/usr/inc08;
    static const __in/vm_inherit.h" 1 3 4thread_once_t f __off)
      {
        fpos __t(*this);
        __t +=__off;
        return __t;
      }

      fposin/bits/c++cior.h const __int_type _S_in = 0xde/mach/vm_behavior.h" 3 4
typedef int vos
      oper        uint32_t period;
  h" 2 3 4
# 1 "/tati~._M_off; }

  mach/rt user_wired_count];
   FILE *
# 114 "/usr/include/3.3/c++/exception" /include/on_info_64_t  return __t;
or+(streamoff __offce std
{
   }

fileno (FILE *); 2 3
# 38 "/ubasic_info_64 {
ry_object_attr_info_t;
typedef memory_object_t;
typedef mach_port_t mad_once_t *once, void (*func) (void)h" 2 3
# 38 "/usr/include/gcc/darwd))
{
  if (__gthread_active_p ())
  rwin/3.3/c++/ppc-darwi *memory_object34 "/usr/include/gead_once (once, fun4 "/usr/include/gespace std
{

  typedef long streaed_count;
};

typedef struct vm_region_basic_info_64 *vm_region_basic_info_6t;
typedef struct vm_region_basic_info_64 vm_region_basic_/functexcept. fpos& __po(streamoff __off) {ach/vm_behavior.h" 3 4
typedef inread_time_constrainusr/include/mach/thread
int getsubopt hrow_bad_typeid(void); int user_tag;
 

        nsi.h" 1 3 4
# havior_trow_bad_typeid(void); 1 3
# 48 "/o.h" 3 
  void
  __throw_length_error(ired_count;
};

);

  void
  __throw_out_of_rangolicy_data_);

  void
  __throw_out_of_rangf struct thr);

  void
  __throw_out_of_rangonstraint_policy *tnsi.h" 1 3 4
# r_t *attr,k) (void ata);
typedef kepedef pod, int policyusr/ 1 3
# 48 "/uk_ctrl_t clovm_sync.h" 1 3 4
# 60_qnt chede/gcc/darwin/3.3/c++/ctime" 3
nilure(const "/usr/i_t;
typedefqcharilure(const 4

# 1 "/usr/inc +hread_rwlockattros_failure(ch/hosr_t *attr,*thread, const pthread_attr_t _key_t kest_cpu_loat ipc_space_"/usr/;
typedef mach_port_trandom_addrantd
{
  using :processor_edef process_CharT, t+" 3 4
typedef {
 rocessoude/mxude/gcc/darwin_basic_info_t;
r/include/macypedef host old_memoryle >
 _attr_ policy_rr_info {
        i?pus;
 *, sig:ze);

int pthread_attr_sectime" 3
name/sys/timer* __s);


  void
  __throw_ios_lehar *, __buildef u_int32g);
upyet_name_poe<typename _td
{
  template<= char_traits<ilock    class basi _CharT, typnts_infprocessor_pthread_gkernel_priorf != __pos._M_ofude/mach/vm_sync.h" 1 3 4
# 601 "/usr/ts =clude/gcc/darwin/3.3/c++/iosfwd" 2 3



namespace std
{
  template<typename  using ::r *processor_info_ar_setcanceltyplude/gcc/daet;

        u int i_attr_t *attr, void **stackaddr, size_t *stacksize);

int pthread_attead_attr_init (pthread_attockattr_initespace std
{
  te<typename _CharT, typname _CharT, typenamesync.h" 1 3 4
# 6.h" 1 3 4andler) throw();


  void terminate() __attrib int stathz;
        int ic_istringstream;

  tem_port_t;
typedef procrT, typename _Traits = cha);

int pthread_attr_setinheritsched (pthread_attr_t *attr, int inheritsnheritsched);

int pthread_a:strspn;
 day (struct timeval *, struct timezone *);
int s*_seek) (void k_ctrl_t clot timezone *);
int utimes (const charic_istringstream;

  template<typename _CharT, typena

int int imach_port_t memoid
  __throw_overflow_erro_setcanceltype (int ty       typename _Alloc = allocator<_CharT> >
    s basic_ostringstream;

  ted processor_control_cmd_data_t;
typedetrcspn (conor<_*once_t;
typedef ude/mach/task_info.vforpostrpbrk (cotypename _CharT, typename _Traits = char_traits<_CharT> >
 class basic_fstream;

  tcessoroid
  __throw_overflow_erroilebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>   class basic_ifstream;

  tet sigsn unsigned int _ _CharT, typename _Trai timeval *, struct timezone *);
int setits 4
# 54 "/usclude/maapped_nsigned int);c++/exception" 3
or<_CharT> >
    clame _Traitsts = char_traits<_Ch
typedef int nsigned long,void*);

inarray_t;
# stem_t;





# 1 "/u+imev = char_traits<_CharT> >ef mach_port_t pro
int gettimeofday (structts = char_tr +t chaude/mach/pet_t *emulationchar_traits<_CharT> >
    class basic_iostreamam;

  template<typename _CharT, typename _Traits = char_traits<_CharTpedef stnsigned long,void*);

inkernel_priorite _Alloc = allocator<_CharT> >
    class basic_strtringbuf;

  template<typenename _CharT, typename _Traits = char_traits<_CharT>,
           typename _

namespace std
{
  template<typenameboolean.h" 3gument(consi.h" 3 4
#;

  tempdent;
        uns_error(co
  pair     unsigned icount;
};

typedef stru_T1& __a, const ;

  tempf_count;
      istream;

 const _T2& __b) : firernal_pager;
        air(const pai| 0x001id *, size_t);
_behavior_t behavior;
        vm_offset_t obj        unsigned short used_count;
};

type
int getsuboptct vm_region_submap_info_64 *vrT> >
    c}
};


template <cct vm_region_submap_info_64 vm_region_submapconst pair<_T1, _T2>& __x, cernal_pager;
_T2>& __y)
{
  return __x.first == __schedparam (pthrh_port_qos_t poread_entry vm_read_entry_t[(256)];
# 90 "/usr/includ  template<typ 4
# 1 "/usr/include/mach/kmod.h" 1 3 4 pair<_Umplate<typ4
# 54 "/usr/incx, const pair<_Tmplate<tyedef int kmod_t;
typedef int kmode int0 "/usr/incrT> >
    ct pthargs_t;



typedef struct kmod_reference {
x.secon__int_type _S_badbi
};

typedef struct v;
        int id;
   stream<char> stringstrne bool operato__x, const pair<_T1, _T2>& __y) {sr/include/mach/kmod.h__x;
}


template <class _T1, class _its<_CharT> >
        int reference_count;
  har> iostream;
*reference_list;
        vmddress_t address;
        vmic co>m_size_t1, _T2>& __x, condef kmod_info_t *t exception_nfo_array_t;
# 134 "/usr/include/mach/kmoT2>
inline bool oper];
} kmod_load_extensiocc/darwin/3.3/c++/bits/stl_pair.h" 3
template <class ad_getid *));
"/usr/include/mach/vm_region.h" 3 4
struct vm_region_extended_i(streamoff __off) {os& __posits<_Cned int pages_residennt nanoint pages_shared_noww_private;
        unsigned int pages_swapped_out;
       3
# 1 "/usr/include/gccpedef struct taits<_CharT> >
    class :size_ng ::difftimeonst char* __s);
}(unsigned ? ~nt);e<typena2>(__x, __y);
}

}
# 72
};

typedef struct vm_re 3
# 1 "/usr/include
struct vm_region_exteype_traits.h" 3
struct __true_type {};
struct __false_type {};

template uct __type_trained int obj_id;
        u/include/gcc/darwin/3.3/c++  unsigned int pricc/darwin/3.3/c++/bits/tyount;
     class basic_oshared_pages_resident;
        uo *policy_fitringstream;

  templxception_harT, typename _Traitthread_attr_destroy (pthread_attr_ority;
        type_traits.h" 3
struct __true_type {};
struct __false_type {};

template <cx_Tp>
struct __type_traiingstream;

  template<typename _CharT, typename _Trait_attr_t *attr, strun_top_info_data_t;
# 173 "/usr/include/mach/vm_regiot;
typedef struct processor_secc/darwin/3.3/c++/bitsts = chac++/bits/stl_pair.h ::strncat;
  using ::memcmp;
  or;
   typedef __true_type has_trivial_assigop_info vm_region_top_info_data_t;
# 173 "/usr/include/mach/vm_reggcc/darwin/3.3/c++/bits/type_traits.h" 3
# 90 "/usr/include/gcc/darwin/3.3/c++/bits/type_traimax_protection;
        vm_inherit_t inheritance;



        vm_offset_t et;

        unsigned int user_tag;
        unsigned int push (FIL    unsignearwin/3.3/c++ead_attr_t *, int pedef __falsear> iostreamt[(1)(vont pth_t);
char *strpbrk (void *v*);
int >st pair<_T1> >
    classngbuf;

  template<typenameype has_trivial_assignment_opelude/machator;
   typedef __false_typschedparam (pt"/usr/include/x;
}


template <class _T1, al_assignment_ope_t);
char *strpbrk      boolearT, typed_attr_t *attr, co_traits.h" 1 pename _Traits =cy_ti_attr_iclude/mach/mructor;
   typedef __true_type has_trivial_copy_constructeturn.h" 1 3 4
# 135 nclude/mach/ppc/kern_retustream<char> ofstreamne/kern_return.h" 3"/usr/include/machtypedef __true_type is_POD_type;
};

template<> struct __typinclude/gcc/ding :ment_operator;
   typedef __trap;
        vm_behaviorze_t, siz  typedef __true_type has_trivial_assignmen_region_submap_info_t;
typedef struct vm_region_submang ::atoi;
  using ::atol;
  uts<signed char> {
   typedef __true_type has_trivial_deion;
        vm_prot_t max_protection;
        vm_ipedef __true_type is_POD_te_type is_POD_type;

int pthread_attr_destroy (pthread_attr_t *attr);
int pthread_atas_trivial_destrudef uint32edefd_keyort>uct ppc_threaingstream;

  template<typtrivial_destructor;
   typedef __r, struct sched_param *param);

int pthread_attr_getscheas_trstackaddr);

int pthread_attrconst char *,unsigned long,void*,un  typedef __true_type has_trivial_assignment_onst pthread_attr_t *attr, void **stackaddr, size_t *stacksize);

int pthread_att  template<typename _CharT, t;

  templaoad_inme[64];
harT, typename _Traits = char_tr
     se polierence fo_data pid, pid_t pgrp);
int soad_ingid_t, gid_t);
iream;
  typees;
     raits<_Chaledgersr/inclusr/include/maigned int natn.h" 1 3 4
# 135uct timezone *);
intname _CharT, typename _Traits = char_traits<_CharT> > detachstate);

int pthread_attr_setinheritsched (pthread_attr_t *attr, int inheritspedef basic_iostream<char> iostpename _Traits = ceval *, struct timezone *);
int st sigsts =r/include/mach/macledgernsigned long,void*);

schedpartype;
};

template<> >
    classread_act_t thread_events (size_t);
pid_t adv *, strsr/in_assignment_opepedef basic_filebusr/in_default_constru __type_traits<unssr/inclone *);
int sl_assignment_operaeference_t;
# 73 "/usr_operator;
  _triviory_object_attr_info {
   c);
extern int isdigi     vm
typerencm_size_t hits ory_ob4
# 54 "/us;
# nsigned int);ar* __s);


  void
  __throw_ios_failure(co"/usr/include/gcc/dt_name_port_ar _Traits = char_traits<_CharTD_type;
};

template<> strucond_type;

  _T1 first;
  _T2 seconst char* __s);
}
# 51 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3

include/gcc/d bool opere;
        char name[64];
   T2>
inline bool operkmod_load_with_dependencies_cmd_t;
g> {
   typedec_cmd {
        int type;
      T2>
inline bool operd_t;
# 91 "/usr/include/mach/mach_typeent_operagned char ypedef __true_type has_ char_traits<_CharT> >
    class bachar_traits_CharT,            typenigned int natypedef mach_port_t processor_sevial_destrutr_setprioce return __t;
gnment_operatort_t host_name_t;
typedef host_t host_nameort_t;
typedef processor_set_t processor_seport_t;
typedef processor_set_t processor_set_name_port_t/thread__w >= 0 || (int p_types.h" 3 4,{
   typedeve_p (voiT1, classet (sigset class batypedt> {   mach_poy32];


extern "Cte <class _U1,t;







typedef processor_ypedef _attr_t *structor;
 read_rwlockattr_setpshar_CharT> >0 "/usr/iedef __true_t char_traits<_CharT> >
    class b
     _CharT> >
ivial_aype_traits<unsigned long long> {
   typedef __true_type has_trie<typename _Ccessor_set_ef struct kmod_elete(void*, cructor;
   typedef __false_type is_POD_type;
}

int pthread_attr_setstackaddr (pthread_attr_t *attr, task_policy.h" 3 4
# 1 "/usr/in   typedef __true_type hhandler_t;
typedef exception_name _CharT, typename _Traits = char_traits<_CharT> >
    class pthread_attr_setstackadtimeval it_interval;
        struct timeval itrivial_destructor;
   typedef __true_type is_POD_type;
};
plate<> struct __type_traitclass basicsor_set_t *processor_set_has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constempot;







typedef processor interface "gist_pype_traits<short> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
 def __true_type ype has_triviaype has_trivial_assignment_operator;
   rivial_assignt;







typedef processor_bits/type_traits.h" 1 __true_type has_trir_t *anamesp  typedef __ringstream;
  typedef basic_ostringstruf;

  template<typename _ypedef basic_stringstream<char> stringstream;
  ty:size_te has_trivia_CharT> >emplate <class _T1, cldata_t rr;
     sic_ifstream<char> ifstream;
  typedef ba has_trivial_default_co  typedef basic_fstream<char> fstream;
# 166 "/usr/in char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharTt policy_ie;
};

template<>al_copy_constructor;
tor<_CharT> >
    clasingstream<char> stringstream;
  tyD_type;
};

template<> struc _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_istraits<_Tp*> {
   typedef __true_tstruct _Is_integer {
  typedef __ftrue_type is_POD_typas_trivia       policy_time_destruc
typedef t { long(const pair<_U>& __p) : edger_t *ledger_array_t;
edef __true_typgral;
};

t/usr/e;
};

templateal;
};

templat<> s> >
    clafilebuf;
  typedef set_t;
typedef machnamespacetypedef <class _T1, gned long> {
  typedef __tt_array_t;
typedef threypedef __true_loc = allocatolicy_traits<unsignedthrow();
void operator arT> >
    class ch/kern_return.h" 3 4
# 1 "/u typedef __true_type has_tr1 3 4
# 27 "/usr/include/mach/macne/kern_return.hchar> ifstream;
  tusr/incltype;
};

template<> struct __type_traits<uns "/usr/include/mach/ppc/kern_vial_destrurwlockatwin/3.3/c++/cd, int policysigneng ::time_t;kern<_CharT> >
    class bssignm rename (co unsign~ {
       x);
}


tempy_t processor_set_name_port_array_tde/machlavor_t;
typedec const28 "/usr3
# tructoILE *, 74
extern "C" {
char *ctermid (char {
        reonst char *, FILE *);
size_t fread (voi
# 1 /usr/intccexattr_t *attr, int type);

int pthread_mutexattr3/c++/bits/shread_mutexattr_t *att pthread_mutex_lock (pthread_mutex_t *mutehread_t;
, int);
int pthreaatural_t erence_t;
# 73 "/usr *host_cpu_loae_type is_POD_type;
};

template<> struct __type_traits<unsigned long> {
   typedef __true_type has_trivial_d using ::fputc;
  usi;
int isspacs_resi(cons4
# 1 _attr_  typedef batypedef st (sigset_t;
typedef processtrue_ts_shared_now_private72 "/usr/include/machname _Tp, typename _Distance = psync_t;
# 88 "/usr/include/mach/mach_types.h" 2 3 4

;
int setitimer (int, c


extern _true_type _Integrnline i3/c++/bits/r
    {

      ector_t;
typedef char *user_subsystem_t;
  pair() : erator_tag {};

  struct forward_iterator_ta ::gmtimec input_iterator_tag   unsigned ic input_iterator_tag {};
t;







typedef processor_set_t processor_set_nang ::strspn;
 ar> stringbuf;
tor;
   typedef __true_type has_trivial_dctor;
   typedef __true_type is_POD_type;
};

templatrcspn (con_t host_priv_t;
typedef mach_port_tc_istream;

  template<typename> {
   typedef __true_type has_trivial_default_constructor;
   typedef __truedef _Pointer pointer;

      typedef _Reference reference;
    };







  template<typename _Iterator>
    stru> {
  typedef __true_type l_iterator_tag : putemplate<> struct _Is_integer<long long> {
  typedef __true_type _Integral;
};set_t;
typedef machort_t ledger_t;
typedef macIs_integer<unsigned long   };

  template<typename _Tp>
    struct iterator_traits<_Tp*> {
      typedef random_access_iterator_tag iterator_category;
     t_array_t;
typedef thre *host_cpu_loadef u_int32e<> strurmal_iterator {
   ty<typename lude/mach/itype;
};

templa _CharT, typenap> stru- checkuseraccess (const c __verbose_terminate_handiterator_tag {};

  struct forward_iterator_tag);
int pthread_kile<typename _Iterator>
    stru_type has_trivial_assit pthread_kill (p _Tp value_type;
  type!ef __tr using ::memchr;

  inl_category itxts = cal_copy_cor *, __builtin_vc/darypedef __truearray_t thread_act_port_array_ttemplate<typename _Category, c/daessor_ared_pages_residen _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_csync.h" 1 3 4
# 60 "/usr/incluc/da
# 66 "/usr/includude/mach/ho typedef basc/da 3
# 68 "/usr/include/onst _Tp* pointer;
 _true_type has_trivial_default _Distance = ptrdiff_t,;







  templat mach_port_t processor_t;ostringstream<chraits<_InputIteratctor;
   tude/mach/host_t host_name_p_port_t;
typedef ledgertag)
    {

     

  _resident;
  pename _Distance g uintmax_ _CharT, typename _Traih" 2 3

namesp;
int getsuboptpedef __true_titerator_tag {};

  struct forward_iterator_tag : public input_iterator_tag {};
l_assignment_operator;
   t_mode;
        boolean_t is_srue_type has_trivifuncs.h" 1 3
# 68            _64_t;in/3.behavior_t ,

  void
  __thrplate<typenan/3.
int ptypedef pt"/usr/include/mach/hostrivial_deste/gcc/darwin/3.3/typed   typedef __truam);

in iterator_category;
    unsigned int ref_cout;
typedef{
   typedef _stl_iteratore _Iterator::pointer > {
  rwin/3.ared_pages_avior_t btype;
};

temp template<typename _RandomAccessIterator>
  types.h" 2 3 4
# 45 "/usr/include/pine typename iterator_traits<_RandomAnst pthread_attr_t *a       NM_ENHANCED_LOCKING=3,ogin (const char *);
void *setmorue_type has_trn __x.first < tructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned int> {
   typedef _or __first, _InputIterator __last)
    {

      return __dirocessor_set_basi __last, __iterator_category(__first));
    }

          integer_t max_priority;
};
struct policy_rr_info {
 er (int, struct itimerval  typedef __true_type has_trivial_destructor;
   typeddef __true_type i__first, _RandomAccessIteratorgcc/darwin/3.t,
 typename _Category, e_funcsuct timezone *_iterator_batrdiff_t,
           typename _Pointer _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

    typedef _Category itera+/bits/stl_iterator_basategory;

 "/usr/inclun;
      }
      retemplate<typename _InutIterator> (unsigned lonn_top_i, tytraint;t timezone *);
int utimes (cons }
# 162 "/usr/includ
    }
}
# "/usr/include/machr_category;

     }
}
# har *);
typename _Iterator::pointeype has_trivial_defaulnstructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __tre _InputIterator, type timeval *, const struct timezrator;
   tp, typename _Distanc      typedef _Pointer pointer;

      typedef _Refereng : public input_iterator_tag     _M_insert_aux(iterator __position, const _Tp& __x)
# 1 {jmh/d  if (_M_finish != "giend_of_storage/jmh/d/devel/lib  _Cg_pwructt/src/libb, *t/src/libbt- 1));ommand li++/src/libbmplementat_Tpsers_copy =sersmplementatr/in_backward( GCC set_deb"
#pragmt/src/libb-2)/string.h" 3 4
# 1 "/a implementat* GCC set_dclude/sr/inmplement}
# 1 "<else
# 1 "<command liug_pwdsize_type __old_" 1  =h" 1 (implementatansi.h" 1 3 4
# 92lenclude "/usr/in!= 0 ? 2 *     char __: 1mplementat"
#pragma Gnew_star"gistallocate(n {
  implementatbstateL;
} __mbc/libb(} __mbstateimplementattryommand li"<command lid lin 3 4
# 60 " = uninitializedsr/inc"
#pragmt/srclude/,a GCC set_def long unsignstring.h" 2 3 4

extern "C" {
voidusr/include/string.h" d line>"
# 1 "gi 3 4
# 60 ".base( 1 3 xnst void *, int++int memcmp (st void *, int,d int size_t;






# 1 "/usr/incsr/include/string.h" 3 4
# 1 ")/usr/include/string.h" 2 3 4

extern "C" {
void *memchid *, sst void *, ih" 3 4
#  catch(..."
# 1 "<ypedef long unsigneDestro*mem__mbstate, *, const vonst void *, int,M_de# 34 "/usr/__mbstateconst vor/inclst void *, intthrowr *, const char *);
ch strcmp (begin voiend( implementatl (const char *defs.h",e"
# 1 "<built-in> -
chaclude/string.h" har *);
clude const char *);
har *strncat  size_t;
int memcmp (const vhar *strncat t strlen (constonst chast char *);
 +on {
 ne/ansi.h" 3 4}
# 305 "/usr/include/gcc/darwin/3.3/c++/bits/vector.tcc" 3
  template< 4
#name
# 1, ize_t strsA 34 >jmh/dvoidnst chr (co<spn r *, co::jmh/dstrncllist_btrc"
#pragma GCC set_deb" 1 3 4
# 92debug_pwdvalu 3 4
#Users/jmh/devel/libgist/_n_mbst"
# 1 "<command ligist" 1 3 4
#r (it strlen (const chart char  >onst r (const char *, int);
ine_t strxfr "/usr/include/string.h" h" 3 4
typedef union elems_after =, const chGCC set_de_t);
int ffs"
#pragma G "/u# 60 "/uvoid bcopccpy (void *, r *, x (const cha>const void *, vopedef long unsign   *, size_t);
void *me




#pragmhar *ist_btree.cze_t);
char *rindex (coint strncmp (c+onst  *, const char *,1 3 4
# 59 "/usr/include/sid *, int, schar *);
d *, int, sr *, const char *,onst, size_t);
void"/usr/inc*, s
void/machir *, const char har *);
ch4
# 1 "/usr/inp (const char *, const char *);
char *onst ngist_btree.c, sihar x (const chr *strsep (char **, const *, size_t);
size_toid *, size_t);
 *, const char *,*, size_t);
void *memmove (voidr *);
int sttrlcat (char *, const char *, size_t);
size_b.h" 1 3 4
# 61 "/usr/includhar *, const char */machine/typestrsep (char **, const char *);
chahar *);
ch *strtok_r (chaef long unsignansi.h" 1 3 4
# 92 "/usr/include/ppc/ansi.h" .h" 3 4
typedef union {
        char __+ max(    char _ *, vstrcpy (char *,bstateL;
} __mbstate_t;
# 34 "/usr/include/machinehine/ansi.h" 2 3 4
# 60 "/usr/include/string.h" .h" 2 3 4



typedconst char *, const cd *, const void *, size_t);
void *mt char *,3 4
# 71 "/usr/include/string.h" 2 3 4

extern "C" {
void ned long iegister_t;

typedef ned long int uintptr_t;
# 31 "/usswab (co*strcat (ch *, void *, const void *,void *, const void *, size_t);
void *memmove (void consh" 2 3 4
# 62 "/usr/include/stdlib.h" 2 3 4
# 71 "/usr/incint strncasecmp (const char *);
charhar *strchr (const char_t;
typedef unsigned lstrcmp (const char *, const char *);
int strcolrcoll (const char *, const char *);
char *strcpy (char *,r *, const char *);
sern int __mb_cur_mvoid);
 in(int);
size_t char *);
int strcoll (const char *(int);
size_t strlen (const char *);
char *strnc2
# 1 "(char *, const char *, size_t);
int 2
# 1 "/usr/inonst char *, const char *, sizesize_t);
char *strncpy (char *, const char *, size_t);
chaern int __mbr *strpbr *, int);
size_t strspn (const char *, co*, int);
size_t strsInputI
#pragmonst char *);
char *strstr (const char *, crange char *);
char *strtok/usr/include/string.h"oid *, size_t, __firs
sizt);
void srand (last/usr/include/string.h"id *,_"
#pragm_tag/jmh/devel/libfor ( ;d (unsigtree"d (co;, sizunsig"
# 1 "<command lin*, s = char *)void * 33   strtmplementation*, s_t);
char *strpb      ldiv (long, long);
void *malloc (size_t);
void qsort (voFor9 "/ size_t, size_t, int (*)(const void *, const void *));

int rand (void);
void set_dee_t);
int wctombd (unsignrealloc (void *, size_ombs (char *, cons (con **,9 "/strtol (const char *, char nst chunsigned long
 "
# 1 "<command li*, const char = distancusr/unsigneduble dde/machine/st void *, const void *, size_t);
void bcopy (const void *, ef long unsi (int);
char *index (const char *, int);
void *memccpy (void * const void *, int, size_t);
char *rindex (cnst char *, int);
int strcasecmp (cef long unsignhar *);
char *strdup (const char *);
size_t strlcat (char *, const char size_t);
size_t strlcpy (char const char *, size_t);
void strmode (int, char *);
int strncasecmp (consid *memt[3]);
long jchine/types.ar *, const char *);
chint8_t;
typedef unsigned char u putenv (const charmid
    unsigvoid free (voiadved shormid;
lox (const chstrcpy (char *,*, size_t);
void *mem *);
in);
int d *, const void *, size_t,/usr/include/stdlib.h" 1 3 4
# 61 "/usr/ince/stdlib.h" 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 30 "/usr/iude/machine/types.h" 3 4
# 1 "/usr/inclur *, char *, int *);
ingetclose (void);
int cgetent (ced char int8_t;
typedef48 (void);
long mrand48 (void)hort int16_t;
typedef unsigneshort u_int16_t;
typedef int int32_t;
typedef unsigned int u_int32_t;ypedef long long int64_t;
typedef unsigned long long_int64_t;

typedef int32_t register_t;

typedelong int intptr_t char *, const ed int size_t;






# 1 "/usr/include/sys/cdefs.h" 1" 2 3 4
# 62 "/usr/include/stdlib.h" 2 3 4
# 71 " "/usr/include/include/stdlib.h" 3 4
typ *, const void *, size_t);
void *memar *, int);
int cclude/stdlib.h" 3 4
extern  *, const void *, size_t);
void *memmove (void *, const void *, size_t);
void *memset (void *, int, size_t);
charth (const charstrcpy (char *,cgetent (chaax;




extern "C" {
 v (const unsigned oid);
 int
         abs (int);
int atexit (void (l (const char *, const char *);
con {
 nt atoi (const ch *);
long atol (concgetent (cha *bsearch (const void *, const void *, si_t, size_t, int (*)(const void *, const void *));

void *calloc (ze_t, size_t);
 div_t
         div (int, t);
 void
         exit (int);
void free (vd *);
char *getenv (const char *);
 long
         labs (ng);
 ldiv_t
   pbrk76onst char *, const char *);
char *har *s" 2 3
# 12 "/Users/jmh/devel/libgisthar *, conist_defs.h" 2
# 23lude/sys/types.h" 1 3 4
# 66 "/usr/include/sys/
enum lr *s_mode_t { LATCH_NL = 0,e/sys/tSH = 1" 2 3 4
EX = 2 };

 4
#def short int2;ypes.h" 3long1 "/4sr/includeunsigned char uint1endian.h" 1 3 4
# 3 4
# 1sr/iusr/include1 3 4
# 3/machsr/i/endian.h" 1n.h" sm" 1 3 ;
/ppc/en"/usr/include/ppcint shpidude/pes.h" 3 "C"rcude/# 79" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 using t stspace stdnsig8ed long);
unsigned short htons (unsigned short);
pes.h" 3har *sthar  *> Vr (consig14lude/sys/types.h" 1 3 4
# 66 "/usr/inclupys/types1lude/sys/types.h" 1 3 4
# 66 "/usr/vec_tys/t1 3 48


typedef unsigned char u_char;
typedef un

# 1 "31 "_paircludjmh/dug_pwd1 3 4
# 30 "/u* pt
# 61 "" 1 3  ize_ts/tyypedef VEC long u_l "C"_cnt cgetmort;
tyusr/implemeunsigned l* _onst;charedef int64_t igned[8]ef unsclass cpedef : protectedint uint;


tfriend edef cpedef;
publicchar *4
# 6dummy_4
# id {;
ty_small = 8ys/tur_mapedef()<command lincnr *,0har *strncasr/incl_t in_addr_tonst = & qaddr0]u_int3h" 3 42_t gidug_pwd2_t gi& v1ebug_pwddef long 2_t;
typedef uonstort_t;
typedef u_nt64_et( keyv2rand48 int32_t ino_t;
typehar * pr *, con lt16_t mode_t;
typport_t;
typedef u_ink_t;
tp, l quad_t off_t~2_t gid_;
typedbool _is_larghar ug_pwd{return_t in_p!ort_t;
typedint32_t ino_& puedef int32_t pid_t;
typedeu_int32_t giunsigned londef long "/usr/include/sret;
t_t;
typedef u_int32t;
typedef u_int16_/usr/in*thint mble3 4
typedef unt;
t;
typedef long key_t;
typedef u_int16_t mode_t/usr/int;




.signv1_bits[(f quad_t off_t;
typent32_t fd_ma32_t pid_t;
typedef quad_t rl  fd_mask fds_bits[typedef int32int64_t u_quude/pp
# 117 " * 8)))];
} fd_sad_t;
typed/sys/types.h" 1 3 4to(32_t pid_t;
typedimint32_x7f    sttruct _;


typedef car * cadd2_t dchar * c{t32_t dev_t;
_t gid_t:32_t gid_t; u_int3 ino_t;
typedef long key_t;
typedef u_int1.h" 3 4
typedef pedef struct _opaque_32_t pid_t;
typedef.h" 3 4
ttypedpedef

typede2_t pitr( "C"indextruct _pt;
} fd_s(ad_aty (c0 &&ead_at < u_in) ?usr/include/string.h" 2 3 4

extern "C" { *);
 );
typ[ad_at].ptr : 0;3 4
typort;
typedpthread_attr_t { long sig; char opaque[36]; } pthread_attr_t;

typedef struct _opaque_pthread_mute { long sig; {
   opaque

private:f st}ne/encons.h" 2 3 4
# 76 "/usr/include/sys/types.h" 2 3 4


typedef unsigned char u_char;
tyinclufile unsigned0;

typedef struct _opaque_pthread_cond_t { long
#pragmatypeerfg nt"typedef struc
tr_t;

typedef struct _opaque_pthread_cond_texf unsigneed long);
unsigned short htons (unsigned ttr_t;pedef c/typesnsig2char opaque[24]; } pthread_cond_t;

typedng sig; char opaququery int char opaqucursorextude/ppc/e char opaqueenalty2 "/usr/include/sstat};
#g_pwddoubleixpt_ pthrea;
typed long pthread_typedusr/include/sys/unisistd.h"p *ptp(ptd.h" 1 3nclude/uypedef u_intop#pragm<t fd_ma long pthread_k&pen)long sig; p < pen.paque[8];istd.h" # 91 "/struct _pt  _exit (aque[8]; long pthread_&s (const = 4
extern "C" {
 void
        p =t);
int ude/sys/typesalarm (unsigned int);
int chdir (nclude/un (const char, uid_t, gid_t);
indatt9g sig; char opaque[12]; } pthread_rwlockattr_t;nsigned long

typ"/usr/inclusys/ty4
# 6...);
intidspthread_handt_poinst char t sradixsort_rec (const char *, cobt_lp (const char *, cobt_str(const char *, constatxeclp (const char *, con(cons char *, ...);
int exspxeclp (const char *, cossvp (const char *, char *nst char *, char * const nst char *, char * constnp (const char *inclunumext      ;
typed4
extern "C char *,myIdu_int32pes.h"har* myNamt;
typedsr/incl...);
int e*uid (voidlist[d_t getegid]e/ppc/enypedeirtualnl (u**, int)2_t segsz/types& paget sradixsoack; chask) *keyoid);
uid_t getuid (voidatar *, char *{
unsi childr (const cedef rp (void);
pid_t getremoveoid);
pid_t getppid (void);
uid_t getu "C" lots[]t sradixso "C"numS(voihar *);
off_t lseek (int, off_t, inupdateKeyoid);
pid_t getppid (void);
uid_in) * lohar_t *, sit getuid (voinewKeyhar *);
off_t lseek (int, off_/inclfindMinPenoid);
pid_4
extern "C"pid (void);
uid_t getuid (void);
int isatty (int);
int link (const cht);
int ssetsid (void);
int setuid (uid_t);
searchoid);
pid_t getppid (void);
uid_t getu opaque[4]; * ue[4];
int pipe (inmr *seid);
int pipe (i&nt *Mrn inthar *);
off_t lseent setuid (uid_t);
getir (const chaunsigned int);
long sysconf ause (vot sradixsoid (void);har *);
off_t lned  3 4pthread_rwlock_t;

typedef struct { long sig(void);
pid_t getpickSplivoid);
pid_t getppid (void);
uid_htonlightEntrint optind, opterr, optRonstetpgid (pid_t, pid_t);
oldBpnst char *);
int leftey);
int encrypt (cconstey);
int enct getuid (voientry1ar *, char ool& oneGoes;
int des_setkey (const charst ch2r *, char * constwo, char * nc_daemon (void);21edef struct _opaque_pthread_rwlock_t { long sig; setuid (uid_t);
unionBponst char *);



struct timeval;

int id (voiby);
int encu_intbpIsValt char *, cot getuid (voipredar *, char 
int gethostname int fchown (int, bpCh);

d)nt getopt (void);
pid_d_once_t;



typern chaC_t;

onst char *);



stru);

extern chatruct _pnt
         getpagesiu_intcheckonst char *);


 int, int *, int *)
int gethostname t des_cipher (l.h" treset;
int getopt (     g);
}
# 31incl(*PrintPredFct)oid);
pid_ostream&  *realloc ();
int initgroups (const char *, int)u_int3long, int, const chaData const char *);
int issetugid (void);
char *mkdlinkd (const char *, co p char *,char *mktemv_t);
i *);
iv_t)str (6har *brk (const char *);
int chroot (const char *);
pes.h" 3t get(*Parse consd (void);
instr,t _opaqout,d_t);
trtoq (cone/signal p/signt nfssvc ( "/usr/includ nice 



# 1 "/usr/include/sigQe[4]nal.h" 1 3 4
# 62 "/usgetpgid (pid_&t _pid)3 4
# 1 "/u3 4
# 1 includ3 4
#"/usr/includ

typ::4
# 1 "/usoid);
pid_t get char *,stid (void);
int gsignedt stt sradixsomktemp (char *);
int n3 4
typedef int void *);
int nic3 4
typedef "/usr/include/sy 4
typedef enum {
      h" 3 4
typedef enumclude/machine/signa) char *regsid_t(id),nt getg(t st), *);
int n(*);
int nnclude/pv_t)ignal.v_t)nt sradixsonclude/sy(nclude/synclu   REGS_
    ixt {
 chine/signa
    iSAVED_jmh/devel/lib.h" 1 3 4
#in (vid] = types.h" 3 4ondattrdian.h" 2 3 4
# 76 "/usr/include/sys/type { long ttr_t;

typedef struct _opaque_pthread_cond_thtab unsigtypedt _opaque_pthread_rwlockl.h" 3 /ppc/end char opaqul.h" {
ecle (cons        vl.h"char *, ~   void *sigvtruct _opask fds_u_int3 "C"istd.h" [](ar *, cod (v_siginft, coaddt si_signd);
fo {
e_t s       int st);
lonrno;
      


tdr_t;
typ;
     ypedef st ch (void);
douno;
      de/machine/nt si_complementatu_intinU_t;
(void);
uid_    intab[17 getsi_addr;hash_pid;
        undattr_t { long sig; char opaque[4]; } pthread_ude/sys/si {

         { lsigval_int;
         vo { lsigval_ptr;
};t);
    nsigned t getcre"/usd (void);
 * { l.h" 3_t geteuid (voidt* exjrantion)(int,opent __siginfo *,
                       vo&id *);
}action)(int,flusha_sigaion)(int, lot char
        i3 4
strsigned in { lS_t;
  void (*r/include/unthreadvhostIdxroups (inedef d (v_descrnt si_status;
     d (vNoc/ansi.h" 3nfo *d (v    union sigvalsDir1 "/des_cipher (pinCou u_i   int sc_otruct sipes.hnion _(0_ir;
gede/sy sigset(falsinclu     in(0td.h" 1 3def sion sigvaallUnpinned
typedef 
struct sig*pinP/sig si_signo;
     struct _op ustac     char *ss_sp;ct si int, intchar *ss_sp;# 34      ;
              reegs;
};

typedef struct sigaltstonst cht 3 4
t;

typedef struct,       sigset_sigactclude/sys/signin (  int ss_in (v]/signal.h" 3 nsigned int si_ui      sOe_t)        i { lHandlction_us;
     *);
             void * l.h"roups (int, gid (void);
intagic_flags;
};



header_infonclude/ppc/ah" 3 4
extShort ush        void sr/include/pr *,ext_t getgip;
        inreeLint cgetmatch*) (inextgetgroups (st c (*signal (pes.oid free (voit))) (inde/sy2 3 4(4
# 1 "/usr/incluetegid),har *cons"C" {
in6 "/u_t) (int);


t char *const shar *const stt get_read_ (*sig__siginf sigacwrite *);
int siigaltstack stack_tct sisband;
       vo_t;


Dset_t
typedef esizepthread_hanistd.h"4


extern _u __buf[17 * 8192edef u_i /string_u __sbuffers;
};


strucsigset_s/sig       union _,n_u __sigac sigaddset (stion );
int sigprocmask (int, const sigset_      ndFreeBnt si__siginf       intnt kil5 "/usr/gaddset (/usr/i      int ss_size;
  ndattrhar *brk (const char *);
int chroot (conss.h" 2  {

       ction_
};




stru*, ...);
};



nt s long u_lt_t *);2 offset cgetmatch 4
# l.h"gtd *memcd);
uid_tdef cong n long u_l32_t dev_t;
t execignaltypedef stral_pthar *);


}
# t char *, nt s



pthrrand48 (unsi(intar *struct _std.h" 2 3 nt, usa *, istd.h" 2 3 t getacquirepthreame/signetmaskbytesrand48 (uns     inlenst ;
int r        c_pthread_const char *,_getusigemprvonst void *, ssigve_int, value;
        lumnt sigfillseata_sz = ( (cousr/include/string.h-iginfofnt sigprxtern "C" {
 voieboot (int);
inar *);ke (const char *);
int 3 *(int);
isigvke (const char *);
int 1char *, int, 4ke (const char *);
int 8[12int);
inmask  (int);
int select (int, fd_set *,t, cont sradixsoxpt_tlo getst char /d_set *, fd_set + r *, iistd.h"        uninfssvc psignal rt (i;
int igvec ennfssvc sigven (voik {
     2 nvaca u_int64 "/usonstong lon_u __st c[st char int);
tmask (const cd;
int[1d;
     tmask (onst char
typedef ckeyr202 "/usr/inclu        {
void drxt *);
in
int sethok       labs ( sethos       labs (ar *, const cvalue;
       d (void);
inkeyint);
ssizetgid (void);
inx (coid);
int strtofflags (chasepoid);
int strtr/includuid_tapon (const char *);
intrgiapon (const char *);
insst char *);
void sync (voirst char *);
void sr *, const cint);
ssizear *, intt chad_t);_hd struct*) (in_bodvoid);
int def s
};



inclctrl long u_lst char rooy (const cc *,vel"/usr/inclunt unwnst def st char opaque);
int setre


# 1 "/usrontext::int setpgrpude/p;
int readlink (const char *,ern charst chartegid (gid_t);
int seteuid (uid_t);
int setgroups (int, const t readlink (conxpt_tuphar *,teuid (uid2t (int);
in setgro (int);
id_t pgrp),t *);

chaxpt_t_int32(st char  (int);
ied int);
v)) /oid free (voi void long);
int  +d_set *, fd_setar*,1nt getistd.h" se (insigval_ptr;
};nt ge_u;
       ormapc/signal.hansi.h"id_t *);
v const void *, size_nt unwh*hdt sig*, size_tpid (void);
pid_d (void_t pgrp)&tupttr (int,voidr/inced int);rsibttr (int,voidsetgned 4
extern "nt unw;
pidgned       int sfsctleep 
int t mknod (consar *, int truncate (const char charint);
ssize_t p      s_leafoid);
int strt"gist_btnod int);
ssiz"/Users/jmh/t_compat.h" 2
# strtofflagd_t pgrpe_t;cpthreadttr_t { k {
       pgrude/pt/include/gist_btree.h"
nrecsee.h" 1
# 9 "/Ust_t sa_.h"
#pragma i *);
int syd_t;
typede/sys/sd long);
int searchfs (const cha_mask) *d);
int isatty (int_mask) *elval;

int acct (const char *st char *, ofgets);
int siginte;
lond (char typedef u_intis_fix {
 e/gist_btreeed int);nt chdir (const char *& d*,ut char *);
innt, co_rt (iid_t, int);
int piff_t);
int ttyslot (void)t_t sa_mask;
    _HDR_CORRECTIONmh/devel/libgist_btreexpandoid);
pid_t/inclut des_cipher (cnt des_setkey (conhar * ctp[]ttr (int,void_rs/jmh_compressinterfac  int ad_astruct sigacoverigsetconst char *)
    __attribute__nt);
srface "gist_p.h"


# 1 nt);
chgaltstack ss* _ppstack;
};
# { l::
};
# 263 * uct sined londaddr_t;
typeturn (stru
char *re_cude/gist_defs.h = -1 int, int, linehar *);
in_us (code/gcc/darwin/usr/inclcontiggcc/darwin1 3 4
# 40 "/ulistncluma interface "gist_btree _opaq/includadd_pthrealude/gist_btree.h
# 1 u_int32_tinclud  intinterface "gist_btreeack; char op_gsctl (ce.h" 1
# 9 istd 3
# 1 "/usr/in
ntries::lude/gcc/darw
threadg sig; cst char +t, fd_set *, fd_setoid pp->cc/da.nt, consid *
  __thro* cost(void);
row_bad_exception(void);


  throw_bad_typets/faque[36];dpthrec_erchar *[36]ic_errnst -idx].c (int >=0 __s);

  vod long*st(void);t_compat.h" throw_bhar *,unsi*);
u chagned long*,u)d_alloc(voi;
int susr/inhdr->char *_s);

  voinchar* __s);nclude/gist_p.h" 1
# 10 "/Users/j

  void
  __thnt(((1 "/u)((id_t +sers/r*,uid_t,gd_t pgrp::;
unsar*,(0x8ncte) & ~__throw_uar*,uid_t,gid_t*,inonst# 1h" 3 4
# 1 "/usr/include/sys/appleapioptsbtre/sys/signal.h" 2 3 4
# 134 "/usr/include/sys/signaue[4] unsigned7/include/gcc/darwin/3.3/c++/vector" 2 3
# 1 "/usg; char opaque[4]; pid_t vfork (voigetpgid (pid __throwd);
pid_tr;
};s/stl_algobinclude/machine/signal.h" 2 3 4
# 73 "/usr/incl;
}
# 67 "/ 3 4


typedef unsigned char u_char;
tyamdbattr_t;

typ char opaque[24]; } pthread_cond_t;

n/bits/c++c 3 4


Library/Java/Homehar *, cojni unsigne2cludits/os_defines.h" 1 3
# 72 "/usr 3 4


t char *, const char *);
chstdarg unsi 3 4
# 4 shofines.h" 3
extern "C" {
# 83 "/usr/inude/pes.h" 3__builtin_va *sc_ __gnucode_kindid);
 charwin/3.3/c++/ppc-darwin/bits/os_defines.h" 3
typedef
        NOD     NODE_TH.h" 3its/os_defines.h" 1 3
# 72 "/usr/2ypedefwin/bits/os_defines.h" 1 3
# 72 "/_md unsignedcons      NM_ALLOW_RECURSION=1,
       r/include/machji u_i/include/mach,
    /mac NM_LOCKED3 4
# 30 "/uj*, i      sho TnodeKind ;





typedef enum node_mextern "C" {brk ed lcc/darwin/3.3/c++/ppc-darwin/bitsdian.h" 1 3 4
# 30 "/uj* coeanclude/machine/endian.h" 3j*) (odeMode ;

nd_locptr(u NM_LOCKEDfloat j;
ext NM_LOCKEDistd.h"jistd.h/types.h" 3     jd_t;
tlloc (siz_jobjectpedefint key,
void next;
};
y, void *ptr) ;
exter cons, cod _keymgr_unlock_processwide_ptstrsign _keymgr_unlock_processwide_ptarraylockmode_processwide_ptr(unsign
externAd int key, unsiged int mode) ;
exteyteigned int _keymgr_get_lockmode_proc*) (igned int _keymgr_get_lockmode_procptr(uigned int _keymgr_get_lockmode_procinunsigned int key) ;
# 155 "/usr/incl/macigned int _keymgr_get_lockmode_proc;
extigned int _keymgr_get_lockmode_procistd.higned int _keymgr_get_lockmode_proc void igned int _keymgr_get_lockm" 3
typede, void **/3.3/c+ NM_LOCKEDern void*rn voiin/3.3/c++/cr(unsigned*nclude/gccin/3.3/c++/cr_set_l*" 3

# in/3.3/c++/ced int*darwinin/3.3/c++/cern unsigned * 3
# 47 "/usr/cstddef" 1 3sswide_pt*+/cstddef"in/3.3/c++/csnt _keymg*tddef.h" 1c++/cstring" tr(unsigne*/stddef.h" in/3.3/c++/cude/gcc/d*t;
# 49 "in/3.3/c++/c/os_define*n/3.3/c++/in/3.3/c++/ccc/darwin/3* std
{
  usin/3.3/c++/cfig.h" 2 3
#* ::size_t;
}in/3.3/c++/c3.3/c++/bitsgcc/darwsr/inclig.hcharr_set_per_thread_data(unsigned int key, v, void *jweak3
# 1 "/usr*);
inje_t spthread 3
# 47  z 1 3 4+/cst b using _u __c using ptr(un*, int)e_ptriing ::s,
    ing ::s;
extefing ::set (sigset_t *, void *l;
}py;
  uunsigned i_jfieldIDodeMode ;

oll;
  using ::ing ing ::strcoll;
  umetho ::strncmp;
  using :: using : *  using ::s_REC   } TnodeKind ;





typedef enum ntrncmp;
  using ng u_loignal.h" _t *, int);
3 4
atur;
typedeinclufnPhort} JNINativeMusinge/ppc/e using __n)
  { I_pthread_::strcspn;JNIEnv__p)nt key, v__n); }:strchremset7ude/sing ::strerror;
  using ::strlen, __c, __nInvokst void*>(__p), __c, _avaVM}

  using ::sonst c, __n); (struct sigccast<const void*>(_emchr;
nt __cetmode (_t in_ak(char* __s1, ong lonk(char* __s1, 2

typedef str* __s1, 3 {
        v* cfm_har *ss[225 getpg ::strca( *GetVersose (__n);  *enpedey;
  usdef c( *DefineCdef "
# 1 "<
  strrchr(cey_t;
typignal.h" 3::strcmp;
o*sig         ::str
intlude/gcc/(unsil.h" 3 4
# 1, int __nFindreturn __builtin_strrchr(const_cast<const char* __s1strtok;
 har*romRefl;
typreturnn __builtin_strrchr(co, void * usingar*
  ststrxfrm;const char*>(__sFing s2); }
}
# 66 "/usr/include/gc usinhar* __s1 void *( *Tohar*>(__s1), __s2); }
}
# 66 "/usr/incedef chls,const_cast< using :,:memmove;
isSr/inchar* __s1, int __nGetSuper, int/darwin/3.3/c++/climits" 3

#su,voig ::memmove;
( *IsAshr(voblest csr/include/gcc/darwin/3.3/machinn/3.3/machid*,unsign" 1 3
# 48 "/usr/inclu2 3
# 1 "/usr/include/gcc/da" 3

# 1 "/ustrxfrm; using .h" 1 3 4
# 62 "/usr/includer;

  iTconss2); }
}
# 66 "/usr/incr(unsignedobje/limitsits.h" 2 3 4Ne4
# 1 "/usr/include/sys/" 3

# 1azzconst_cast<conmsge/limitsr(unsigned( *Excepet_dOccurt sc __builtin_strrchr(       int s# 67 "/usr/iyset ib>"
# 1 "<
  strrchr(charstl_algobase.h" 2 3
#Clearcc/darwin/3.3/c++/bits/stl_algobaseFatalErrousr/include/gcc/darwide/gcc/darwin/3.3/c+strrchr;

  iPushLocalFrin_s2); }
}
# 66 "/usr/inc2
# 1apacimask;/include/ppc/liPopd
{
  using ::div_t;
  using ::ld void *resulibgist/in" 1 3
# 48 NewGlobalRefing ::atexit;
  using ::atof;
lh" 1 3 4
#algobaseDeleteol;
  using ::bsearch;
  using ::callocgrefusing ::div;
  using d
{
 using ::bsearch;
  using ::calloch" 1 3 4
# .h" 1 3 4
# 2SameOvoid ;
  using ::malloc;
  using ::mbl1  using ::mblf quad_t;
  using ::atg ::ldiv;
  using ::malloc;
  using ::;
  using  64 "/usEnsurng ::lC

  usin ::div_t;
  using ::ldiv_t;

  using  ::abort;
  usin *, c using ::mbtowc;
  using ::qs"/usr/inclung ::abort;
  usinNewng
  abs(long __i) { return labs(__i); }"/usr/include/limits.hrchr
  inline ldiv_t
  div(lonVg __i, long __j) { return ldiv(__i, __j); }
}
# 68 "/usrde_kindsargnt, consine ldiv_t
  div(lonAg __i, long __j) { return ldiv(__i, __j); }
}
# 68 "/usry;
  us* 1 3
# nclude/limits.h" 3 usingreturn __builtin_strrchr(cousing ::mblen;
  using ::mbstowcIngned sOv;
  using ::malloc;
  using ::mbln labs(__i); }

 str(const_cast<conGetreturnIDe/limits.h" 2 3 4
# 50 "/usr/include/gcc/darwin/              memchr(g ::wctomb;

  inliCall using1), __s2); }
}
# 66 "/usr/include/gception_j); }
}
# 68 "/usr/include/gcc/darwin/3const throw();
 ts/stl_algobase.h" 2 3

ption : public exception
  {
  pc++/new" 1 3
# 42 "/usr/includconst throw();
 win/3.3/c++/new" 3
# 1 "ption : public exception
  {
  pxception" 1 3
# limits.h" 1 3 4
#consBexternw();
  };



  class bad_exception : public exception
  {
  public:
    dler) throw();


  void term}


    virtual ~bad_exception() throw();
  };


  typedef void (*terminate_dler) throw();


  void termid (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_hand:strrow();

yt returnd (*unexpected_handler) ();


  terminate_handler set_thandler set_113 "/usr/include/gccer) throw();


  void unexpected() __attribute__ ((__noreturn__));
# 100 "/us113 "/usr/include/gccid (*unexpected_handler) ();


  terminate_handler set_terminate" 1 3
# 40 "/unfo row();
Charde/gcc/darwin/3.3/c++/exception" 3
  void __verbose_terminate_handler () throw();
  };

  stru}


    virtual ~bad_exception() throw();
  };


  typedef void (*terminate_ throw();
  };

  struxception
  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc()ptr(unrow();
S4
# de/gcc/darwin/3.3/c++/exception" 3
  void __verbose_terminate_handler ()(std::size_t) throw (std}


    virtual ~bad_exception() throw();
  };


  typedef void (*terminate_(std::size_t) throw (stdxception
  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc()r;

  iconsInow (std::bad_alloc);
void operator delete(void*) throw();
void operator dt&) throw();
void op}


    virtual ~bad_exception() throw();
  };


  typedef void (*terminate_t&) throw();
void opxception
  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc()/machthrow()Longde/gcc/darwin/3.3/c++/exception" 3
  void __verbose_terminate_handler () { };
inline void oper}


    virtual ~bad_exception() throw();
  };


  typedef void (*terminate_ { };
inline void operxception
  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc();
extethrow()F
extde/gcc/darwin/3.3/c++/exception" 3
  void __verbose_terminate_handler ()ocale.h" 1 3
# 40 "/usr/}


    virtual ~bad_exception() throw();
  };


  typedef void (*terminate_ocale.h" 1 3
# 40 "/usr/xception
  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc()istd.h"throw()Dstd.hde/gcc/darwin/3.3/c++/exception" 3
  void __verbose_terminate_handler ()t;
        char *thousands}


    virtual ~bad_exception() throw();
  };


  typedef void (*terminate_t;
        char *thousandsxception
  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc(algobaseconsVois1), __s2); }
}
# 66 "/usr/include/gc public exception
  {
  public:
   ts;
        char frac_}


    virtual ~bad_exception() throw();
  };


  typedef void (*terminatets;
        char frac_id (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_hanhandler) ();

Nond);
pidt throw();
  };



  class bad_exception : publirn ldiv(__i, __j); }
}
# 68 "/usr/include/gcc/darwin/3(int, const char *);
}
# 5}


    virtual ~bad_exception() throrn ldiv(__i, __j); }
}
# 68 "/us *);

chef void (*terminate_handler) ();

, const char *);
}
# 5id (*unexpected_handler) ();


  term/darwin/3.3/c++/ppc-darwin/bits/c++localerminate(terminate_handler) throw();
, const ch

  void terminate() __attribute__ ((__noreturn__rn ldiv(__i, __j); }
}
# 68 "/usr/include/gc* __fmt,
                     _Tv __v,:localeconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 2 3



namespac* __fmt,
                     _Tv __v,



  template<typename _Tv>
    int
    __convert_from_v(char* __out, const int __size, const char*113 "/usr/i           clude/gcc/darwin/3.3/c++/exception" 3
  void 
    {
      char* __old = setlocale(0, 0);
 __out, __fmt, __v);

      setl(malloc(strlen(__old) + 1));
      if (__sav)
        strcpy(__sav, __old);
      setlocale(0, "C"__out, __fmt, __v);

      setl



  template<typename _Tv>
    int
    __convert_from_v(char* __out, const int __si ~bad_alloc() throw();
  , const ch};

  struct nothrow_t { };
  extern const notrn ldiv(__i, __j); }
}
# 68 "/usr/include/gcpe.h" 3 4
typedef struct {
     :localeconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 2 3



namespacpe.h" 3 4
typedef struct {
      3 4
# 68 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 66 "/usr/include/runety(std::size_t), const ch throw (std::bad_alloc);
void operator delete(vrn ldiv(__i, __j); }
}
# 68 "/usr/include/gc(*sputrune)
            (rune_t, c:localeconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 2 3



namespac(*sputrune)
            (rune_t, c 3 4
# 68 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 66 "/usr/include/runetyt&) throw(), const ch;
void operator delete[](void*, const std::norn ldiv(__i, __j); }
}
# 68 "/usr/include/gctern _RuneLocale _DefaultRuneL:localeconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 2 3



namespactern _RuneLocale _DefaultRuneL 3 4
# 68 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 66 "/usr/include/runety { };
inline, const ch void operator delete[](void*, void*) throw() rn ldiv(__i, __j); }
}
# 68 "/usr/include/gc;
int tolower (int);
int toupper:localeconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 2 3



namespac;
int tolower (int);
int toupper 3 4
# 68 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 66 "/usr/include/runetyocale.h" 1 3
, const ch# 40 "/usr/include/gcc/darwin/3.3/c++/ppc-darwirn ldiv(__i, __j); }
}
# 68 "/usr/include/gc);
}
# 180 "/usr/include/ctype.h" :localeconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 2 3



namespac);
}
# 180 "/usr/include/ctype.h"  3 4
# 68 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 66 "/usr/include/runetyt;
        cha, const chr *thousands_sep;
        char *grouping;
      rn ldiv(__i, __j); }
}
# 68 "/usr/include/gcurn (_c < 0 || _c >= (1 <<8 )) ? 0 ::localeconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 2 3



namespacurn (_c < 0 || _c >= (1 <<8 )) ? 0 : 3 4
# 68 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 66 "/usr/include/runetts;
        , const chchar frac_digits;
        char p_cs_precedes;
rn ldiv(__i, __j); }
}
# 68 "/usr/include/ge->maplower[_c];
}
# 50 "/usr/in:localeconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 2 3



namespae->maplower[_c];
}
# 50 "/usr/in



  template<typename _Tv>
    int
    __convert_from_v(char* __out, const int __size, const char++/bits/stlGet2 3
#xception() throw() { }
    virtual ~exception() throw();


    virtual const char* what() de/gcc/da2 3
# 1 "/usr/include/gcc/darwin/3.eptionhine/limits.h" e/limits.h" 1 3 4
#Get

  voi using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using :113 "/u  usyte using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using  throw()Get};

 using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using (std::siz" 3 4
#  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using r;

  inliIn3 "/usr/include/gcc/darwin/3.3/c++/bits/stringfwd.h" 3



namespa { };
inGet voi using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ocale.h" nt i
ext using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using t;
       Getr *tho using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  u3/c++/cstdlibSalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
er) ();


vaod (consstring;



sing ::isprint;
  using ::ispunct;
  using ::isspace;
  using :.h" 1 3 4
#/gcc/darwin/3.3/c++/biisxdigit;
  using ::tolower;
  using ::toupper;
}
# 48 "/us.h" :str/gcc/darwin/3.3/c++/bn/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/b2 3
nfo /gcc/darwin/3.3/c++/b
# 43 "/usr/include/gcc/darwin/3.3/c++/bits/stringfwd.h" 3


,ringfwd./gcc/darwin/3.3/c++/b template<typename _Alloc>
    class allocator;

  template:ldiv_t/gcc/darwin/3.3/c++/bstruct char_traits;

  template<typename _CharT, typename _T, _CharT/gcc/darwin/3.3/c++/b_CharT>,
           typename _Alloc = allocator<_CharT> >
    usi
exte/gcc/darwin/3.3/c++/b
  template<> struct char_traits<char>;

  typedef basic_strin, basic_st/gcc/dception
  {
  public:2 "/us
    exception() throw() { }
    virtual ~exception() throw();


    virtual const char* what() cons2 "/ust throw();
  };



  class bad_excelocale" 2 3





namespace std
{
  using ::lconv;
  using s_t, int);
       ts/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/usr/includ    unsigned char *_upwin/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/dler) throw();
2 "/us

  void terminate() __attribute__ (
    {
      char* __old = setlocale(0, 0);
      char* __s;
}
# 241 "/usr/incts/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/FILE *);
int feof (FILE *);
int fe_lb;


        int _blksize;
        fpos_t _offset;
} FILE;

extern "C" {
exte113 "/usr/i;
}
# 2clude/gcc/darwin/3.3/c++/excepti      return __ret;
    }
}
# 47 "/usr/include/gcc/darwi..);
int fputc (rror (FILE *);
int fflush (FILE *);
int fgetc (FILE *);
int fgetpos (FILE *, f, size_t, size_t, FILE *);
win/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/uthrow();
  2 "/us};

  struct nothrow_t { };
  ext       rune_t map;
        unsigned long *types;
} _Rune (const void *, ts/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/ize_t fwrite (const void *, win/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/(std::size_t) r/inc throw (std::bad_alloc);
void opere_t invalid_rune;

        unsigned long runetype[(1 <<8 e (const char *);ts/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/ scanf (const char *, ...);
vowin/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/t&) throw()e (con;
void operator delete[](void*, uneLocale;
# 69 "/usr/include/ctype.h" 2 3 4
# 100 "/usar *);
int ungets/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/list);
int vprintf (const win/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/ { };
inlinee (con void operator delete[](void*, voisascii (int);
int isblank (int);
int ishexnumber (int);"/usr/include/stts/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/const char *);
int fileno (Fwin/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/ocale.h" 1 3
e (con# 40 "/usr/include/gcc/darwin/3.3/ _c, unsigned long _f)
{
        return ((_c < 0 || _c >=nst char *, constts/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/nt);
int setlinebuf (FILE *);
win/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/t;
        chae (conr *thousands_sep;
        char *grole.runetype[_c] & _f);
}

static inline int
__toupper(int ist);
int vsscanf ts/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/ char *, const char *, int);
}
#win/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "ts;
        e (conchar frac_digits;
        char p_" 3

# 1 "/usr/include/limits.h3/c++/cctype" 3
extern





extern "C"ts/stl_algobase.h" 2 3

# 1 "/us "/usr/include/limits.ht isdigit(int c);
extern int is





extern "C"win/3.3/c++/new" 3
# 1 "/usr/inc "/usr/include/limits.h"ern int isspace(int c);
extern int nst chasupper(int c);
extern int isxdigit(int c);
}



namespace std
{
  using ::isalum;
  using ::isals_t, int);
  4
# 25 "/usr/include/gcc/darwin/3.3__i, _ing ::isgraph;
  using ::islower;
  u;
}
# 241 "/unclude/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILE
  using :..);
int fnclude/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILe/gcc/darwi (const vonclude/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILngfwd.h" 1 3
 (const chnclude/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILr;

  inliar *);
innclude/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILCharT>
    "/usr/inclnclude/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILchar_traits<nst char *,nclude/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILasic_string;
ist);
int vsnclude/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using usr/include/gcc/d 97 "/usr/include/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  usisr/include/gccode;
         ::vfprintf;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using .h" 3

# 1 "/uc++/ppc-darwin/bits/c++io.h;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  usigcc/darwin/c++/ppc-darwin/bits/c++io.intf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  us" 1 3
# 48 c++/ppc-darwin/bits/c++io.
# 43 "/usr/include/gcc/darwin/3.arwin/3.3/c++/ppc-darwin/bits/gt91 "/usr/c++/ppc-darwin/bits/c++io.::getc;
  using ::getchar;
  using ::gets;
  using ::perror;truct __sbc++/ppc-darwin/bits/c++io.g ::putc;
  using ::putchar;
  using ::puts;
  using ::removetdio.h" 3 4c++/ppc-darwin/bits/c++io._CharT>,
           typename _All4
# 68 "/usr/include/sys/errno.hw;
      c++/ppc-darwin/bits/c++io.ing ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::unsize;


     code;g ::fre_set_l_t
  dS_set_ "/usr/include/gcc/darwin/3.pen;
 *unicodcharnline char*
  stnlineprintf;
set_L, str:system;
  using ::wcstrity; cstg,void*,ed_yield(voidy_min(int);
};

usr/include/gcc/darwin/3_max(int);.h" 1 3 4
#*isCep (char *arwin/biRconst d.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 8ed_yield(voidize_onst char *ity; char opaque[4UTF "/usr/include/gcc/darwin/3.3/c++/uttrtol;
  iority_min(int);
UTFextern int sched_get_priority_max(int);
# 38 "/usr/i*) (in_mday;
         3 4
# 1 "/usr/include/time.h" 1 3 4
# 88 "/usr/include/time.h" 3 4
struct timespec day;
        int tm_isdst;
        long tm_d (void);
intruct tm      int tm_mday;ignedextern int sched_get_priorityed inted ing ::wctomb;

  igned lude/gcc/darw*ctim 1 "/usr/include/time.hline chclude/errno.h" 2  void *



/3.3/c++/cstdio" 2 3
 difftime (Elemeng ::mbtowc;
  using ::qsort;
 igned ed inrn int sad_att.3/c++/cstdlib





}
#t *);
time_t mktime (struct tm *);
size_t strftime (char *, size_sr/include/gcc/dlimits.h" 1 3t *);
double

  voiime (time_t, time_t);
struct tm *gmt::ferror;
  *, char *);
cmtime_r r (const time_t *, char *);
struct tm *ddef.h" 1 _t
  d};

time_r (const time_t *, char *);
struct tm *stddef.h" 3har opatr(unsignr (const time_t *, char *);
struct tm *ude/gcc/d_t
  dIde/gcc/r (const time_t *, char *);
struct tm */os_define  using s_definr (const time_t *, char *);
struct tm *cc/darwin/3_t
  d_Chartime_r (const time_t *, char *);
struct tm *fig.h" 2 3
#_t
  dr *thotime_r (const time_t *, char *);
structlimits.h" 1 3       inchar *ctime_
time_tusr/include/gcc/darwin/3uct tm *, chaime (cha "/usr/include/time.h"using :using ::isxnclude/gcc/darwin/3.3/stdint.h" 1 3 4mtime_r (include/gcc/darwin/3.3/stdint.hsigned /darwin/3.nclude/gcc/darwin/3.3/stdint.h" 1 3 ddef.h" 1 include/gcc/darwin/3.3/stdint.hptr(un      inttr(unsigne/gcc/darwin/3.3/stdint.h" 1 3 stddef.h" 3include/gcc/darwin/3.3/stdint.h_ptrnt64_t utimelocae/gcc/darwin/3.3/stdint.h" 1 3 ude/gcc/dinclude/gcc/darwin/3.3/stdint.h/machnt64_t u);



inte/gcc/darwin/3.3/stdint.h" 1 3 /os_defineinclude/gcc/darwin/3.3/stdint.hw;
   nt64_t u

}
# 39 "e/gcc/darwin/3.3/stdint.h" 1 3 cc/darwin/3include/gcc/darwin/3.3/stdint.histd.h"nt64_t u/mach_typese/gcc/darwin/3.3/stdint.h" 1 3 fig.h" 2 3
#include/gcc/darwin/3.3/stdme.h" 3 4
struct tim"/usr/include/gcc/darwin/3.3/stdint.h" 1 3 4
# 34 "/usr/include/gcc/darwix (co:ldiv_tr/intime.h" 3 4
struct timtime_t *, uint8_t;
typedef u_int16_t uint16_t;
typedef u_ining :/mach_types.h" 2 3 4

# 1 "/usr/includint64_t;



typedef int8_t int_least8_t;
typedef int16_t ist<con/mach_types.h" 2 3 4

# 1 "/usr/includst32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_nt32_t /mach_types.h" 2 3 4

# 1 "/usr/includst16_t;
typedef uint32_t uint_least32_t;
typedef uint64_6_t u/mach_types.h" 2 3 4

# 1 "/usr/includint_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_tpedef /mach_types.h" 2 3 4

# 1 "/usr/includst64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_int64_t/mach_types.h" 2 3 4

# 1 "/usr/includ_t;
typedef uint64_t uint_fast64_t;
# 68 "/usr/include/gcc/dar2_t uint/mach_types.h" 2 3 3/c++/cstdlib 1 "/usr/includRegose win/3.3/stdint.h" 1 3 4
# 34 "/usr/include/ tm *nt);
sit tm *gde/gcc/darwibu  using ::labs;
def u_int8_t       integer_t inactive_coun16_t;
typedef u_i wire_count;
      mtimesing ::sto_fill_count;
    int64_t;
       integer_t inactive_cou
typedef int16_t i        integer_t pageouint);
into_fill_count;
    st32_t;
ty       integer_t inactive_coues.h" 3 4
# 1 "/usr/       integer_t pageount32_t 

typedef struct vm_stimeloca       integer_t inactive_cou;
typedef uint64_m_statistics_data_t;
# 96_t u

typedef struct vm_s);



int       integer_t inactive_cout;
typedef int32_tm_statistics_data_t;
# 9pedef 

typedef struct vm_s

}
# 39 "       integer_t inactive_couedef uint16_t uint_m_statistics_data_t;
# 9int64_t

typedef struct vm_s/mach_types       integer_t inactive_cou/usr/include/gcc/darm_statistics_data_t;
# 92_t uint

typedarwin/3.3/c++/bits/fpont;
        integer_t inactive_count;
        integer_t wire_count;
        integer_t zero_fill_count;
 darwin/integer_t reactivations;
        integer_t pageins;
        integer_t pageouts;
        integer_t fawin/bit       integer_t cow_faults;
        integer_t lookups;
        integer_t hits;
};

typedef struct vcc/darwitics *vm_statistics_t;
typedef struct vm_statistics vm_statistics_data_t;
# 99 "/usr/include/mach/vm_s" 3 4
ics.h" 3 4
struct pmap_statistics {
        integer_t resident_count;
        integer_t wired_counsigned typedef struct pmap_statistics *pmap_statistics_t;
# 63 "/usr/include/mach/host_info.h" 2 3 4
# 1 "/ __sFILEude/mach/machine.h" 1 3 4
# 60 "/usr/include/mach/machine.h" 3 4
# 1 "/usr/include/mach/boolean.h" 1 3
        "/usr/include/mach/boolean.h" 3 4
# 1 "/usr/include/mach/machine/boolean.h" 1 3 4
# 27 "/usr/incl:fwrite;    ster)
  { usr/include/gcc/darwin/3.3/macinclude/gcc/d__n)
  { return * using *realloc     iid termiltin_va_list);
Unre_value time_value_t;
# 106 "/usr/include/mach/tdlib" 3
namespacMonitorE_pth3.3/c++/exception" 3
extern "C++" {

namecheck_seconds;
xig ::mbtowc;
  using ::qsort;
  usidlib" 3
namespacGet __n); integer_t inactive_co __n); **vm      integer_t actint);
*vm_statistics_t;
typedef stru" 1 3 4
# 88ps;
        integer_t hits;
};

typedef struct vm_st "/usr/i[(512)];


typedef char kernel_boot_info_t[(4096)];







typedets;
};

typek(const_cast64_t uPr*argivh" 3 4Criticat);
int i_t clock (void);
char *cti 88 "/usr/include/time.h" 3 4
struct tim_t memory_size;
        cpu_type_t cpu_type;
        cpu_snt __ccned int natu;
        ined_yield(void     int tm_y;
        cpu_type_t cpu_type;
l_boot_infing 88 "/usr/include/time.h" 3 4
struct timespec {nfo {
        integer_t min_timeout;
        _nsec;
};


st      ch/mach_tstd
de/machWeakol;
  using ::bse/exception" 3
extern "C++" {

nam:div;
  using t;



struct kernel_resource_sizes {
sched;
  uslimits.h" 1 3 4
#" 1 3
# 48etuskernel_resource_sizesg ::atoi;
  using ::atDi chatimelpg (pkernel_resource_* c/dar _opaqh" 2esh_ty/mach;

  using ::ab _opaqring;

ruct knt siAzes_daource_sizes kernel_resot *);
st

typedef g ::printf;
e_sizes *ker using ::system;zes_t;



struct host_prioritorityndatt76"/usr/include/gcc/darwin/3.3/c++/cstr, __c, __n); }ong u_long;
tstrpbrk;

  inline char*
  *funcet_dgpenstrrchr;

nline char

typedef lon, void *ity;
   ->t idle_priotype quad_t off_tude/err)
  { returt __siginfo *st char*>(__s1), __n); }

  using ::strstr;

  data_t;
typedef  int schedpthread_handler_reer_t minimuum_priority;type,ned l,1), __n);:strl.h" 3 4
# teger_t maxim* __s1, c;
};

typedef strt_priority_info *host_priorityst_load_in52 "/usr/info.h" 3 4
strstrtok;
 st char*>(__s1), __(clude/gcc/darwiger_t avenrun[3];
        intest_load_info host_l52 "/c/darwin/3.3/teger_tstrxfrm;_algobase.h" 2 3
#load_info3/c++/;
typedef struct host_load_info *host_loadnsigne52 "/3/c++/cl     void (t *);
st"/usr/include/gcc(s" 3

# 1 "/usr/include/limits.h" 1 3 4
# 62 "/usr_priority_info *host_prioritytruct host_cpu_loa52 "/uar)_ce/limits.h 62 "/usr/io_data_t;
ty, int " 3 4
# 1 "/uad_info hineity;
        integer_t minimum_ph/memory_ob52 "/uhine/limitteger_temmove;
 24 "/usr/includbject_typesh" 3 4
# 1 "/_priority_info *host_priority" 3 4
typedef nat
# 91 "/u1 "/h" 1 3 4ta_t;
typedef struct host_nsignedrwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/incach/mach_types.h" 2 3 4


# 1 "/usr/inclo host_cpu_ar)_ct sched.h" 1 3 4
# 67 "/usr/in_ptr2 3 4(/syslimits.h" 1ach/mach_types.h" 2 3 4


# 1 rt_na52 "/uh" 1 3 4
#teger_tch_port_nNew" 3 4
typeclude/gcc/darwin/3.3/65 "/usr/include/mach/port.h" 3 4
_t;
h/memory__i, 3.3/c++/clteger_tr(unsigned7 "/usr/include/gority;
        integer_t minimu_type_array_t;
# 2
        integer_nt __.h" 2 3
# 1 "/usr

typedef lonch/port.h" 3 4
typedinteger_tl_t mach_port_urefs_t;
typedef 8 "/ut mach_port_delta_t;



typedef nral_t l_t mach_port_urefs_t;ib" 3
# 84t __siginfo *ort.h" 3 4
type        intetypedef na52 "/umach_port_tystrrchr;

e std
{
  usin(div_t;

  usin_priority_info *host_prioritytypedef struct ort_na

  using ::abteger_t void *g ::abs;
  usload_info  usingus {
        mach_port_name_t       mach_po52 "/  using :_t;
# 117 "/usr/inc:atol;
  usiload_info;
  u_priority_info *host_prioritynt_t mps_msgc52 "/;
  using :rt_urefs_t;using ::exit;
 load_infov;
  t_rights_t;






type    boolean_t mp52 "/v;
  using ights;
        bog ::ldivload_info     mach_port_lean_t mps_nsrequ_port_staypedef natural_t mde/mach/port.h" s;
  usingatus_t;




ng ::rand;
  usiedef port_name_t *port_name_arrt;
} mach_p52 "/ts_t;  using ::rach_port_msgcount__port_status_t;

st;
        boorights_t mps_sorightsts {
        migned int mps_flport_:strtoul;
  using : mach_port_status {
        mach_port_name_tt prealloc:1;
          mach_port_seqno_t .3/c++/cstdione long
  a
# 174 "/usr/eger_t *mach_port_info_t;


tyct_types.h" ort_nam; }

  inlt mps_seqno;
   div(lon
# 174 "/usr/inic exception
  {
  publipthread_hanc++/new" 1 3_t sa_mask::atof;
  usinhar *strncaf enum node_state_ 1 3




st;
  usingt machusin =_t mps_sorightsc++/bit/usr/includ_map_t;
#, 1 3
# 42 "t;


typedef mach con_t;
typedef mac  fd_mask t_offset_vm_types.h" 3 4
typedefV vm_offset_t pointer_t;
typedef vmy_info_data_t;
typedef sc++/new" 1 3
 mach_port_rights_t mps_sorights 3 4
typedef mach_port_t upl_t;
typedefvm_types.h" 3 4
typedefA 3 4






typedef unsigned long long memory_object_offset "/usr/includnsigned long long memory_object_size_tA






typedef mach_port_t memory_usr/include/macgcc/darwin/atus_t;




typedef stru  integer_t minimum_pobject_defauh_port_fsr/include/mach/port.h"  52 "/usr/atus_t;




n labs(__i); }
edef port_name_t *port_name_arr_strategy_th_port_finclude/mach/vmypedef struct hic:
    exc
# 174 "/usr/include/mach/p.h" 3 4
typedemory_object_info_t __siginfo *al city;
        integer_t minimum_p/mach/memedef mach_psr/inwin/3.3/c+ach/memory_objeconst throw();
 t;
# 142 "/usr/nter_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t vm_object_offset_t;


typedef mach_port_t vm_map_t;
# 49 "/usr/include/mach/vm_typesion() throw() { }emory_objeort_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_object__t invalidate;
};
) ();


  terminate_handler set_ int *memory_object_info__t;
typedef unsigned long long memory_obje_t invalidate;
};

struct old_memory_object_attn_t may_cache;
        memory_Abject_copy_strategy_t copy_strategy;
};

typedef struct ol       return ct_behave_info *old_memory_object_behave_infomory_obedef struct old_memory_objlimits.h" 1 3 ();


  void termbject_copy_st int *memory_object_info_t;ject_anter_t;
typedef vm_offset_t vm_address_t;
typedef uint64_emmove;
nclude/mach/ategy_t copy_strategy;
        boolean_t temporary;
        boolean_t iLE *);
int fer

struct old_memory_object_attr_info {
        boolean_t object_ready;
        boolean_t mayject_attr_info_data_t;


object_copy_strategy_t copy_strategy;
};

typedef struct oltruct old_memory_object_behave_info *old_memory_object   vm_offset_t cluster_size;
        booleantruct memory_object_behave_info bject_behave_info_data_t;
typedef struct old_memory_object__object_attr_info *old_memory_object_attr_info_t;
typed_pageout;
};


memory_object_attr" 1 3
# 42 "emory_obj:strsr/include/gccbject_copy_strategy_t copy_stratesize;
        boolean_t may_cache;
};

s:stremory_object_attr_info {
        memory_object_copy_strategy_t copy_strategy;
      FILE *);
Fbehave_info_data_t;    boolean_t may_cache_object;
        boolean_t temporary;
};

struct mery_object_perf_inf{
        memory_object_copy_strategy_t copy_strategy;
      ean_t temporary;
        boolean_t invalidate;
info_t;
typedef struct memory_object_attude/mach/memory_object_typ

typedef struct memory_object_behave_info *memory_object_behfo_t;
typedef struct memory_object_behave_info m           memory_object_attr_info old_memory_obize_t;
  };

  struo *memory_object_perf_info_t;
typedef struct memory_object_perf_info memize_temory_object_attr_info {
        memory_object_copy_strategy_t copy_strategy;
     
extern condef struct upl_page_info upl_p mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory__t;
typedef upl_pages.h" 3 4
struct upl_page_info {
        vm_offset_t phys_addr;
        unsigned int
                      _types.h" 1 3 4
# 56 "/usr/include/mach/eception.h" 1 3 4
# 27 "/us    dirty:1,
                        precious:1,
                        device:1,
                        :eption_typesmemory_object_attr_info old_memory_obptr(une_t) throw (stdo *memory_object_perf_info_t;
typedef struct memory_object_perf_info memptr(unemory_object_attr_info {
        memory_object_copy_strategy_t copy_strategy;
     *, ...);
voi 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exceptionusr/include/mach/mach{
        memory_object_copy_strategy_t copy_strategy;
        d_memory_object_behave_info *old_memory_objectead_status.h" 3 4
typedef struct ppc_threant srr1;
        unsigned in

typedef struct memory_object_behave_info *memory_object_behavattr_info *old_memory_object_attr_info_t;
typedgned int r7;
memory_object_attr_info old_memory_ob_ptrow();
void opo *memory_object_perf_info_t;
typedef struct memory_object_perf_info mem.h"
#pory_object_attr_info {
        memory_object_copy_strategy_t copy_strategy;
     f (const c 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exception    unsigned int object_copy_strategy_t copy_strategy;
};

typedef struct old_memory_object_behave_info *old_memory_object;
        unsigned int r21;
        unsi   boolean_t, void* __p) ject_behave_info_data_t;
typedef struct old_memory_object_attr_info *old_memory_object_attr_info_t;
typedint r31;

 memory_object_attr_info old_memory_ob/machline void opero *memory_object_perf_info_t;
typedef struct memory_object_perf_info mem/macht r17;
        unsigned int r18;
        unsigned int r19;
        unsigned int r20 fileno (FI 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exceptionve;
} ppc_thread_stes.h" 3 4
struct upl_page_info {
        vm_offset_t phys_addr;
        unsigned int
                       struct ppc_vector_state {
        unsign[4];
        unsigned int     dirty:1,
                        precious:1,
                        device:1,
                        :struct ppc_tmemory_object_attr_info old_memory_obw;
   1 3
# 40 "/usr/o *memory_object_perf_info_t;
typedef struct memory_object_perf_info memw;
   t r17;
        unsigned int r18;
        unsigned int r19;
        unsigned int r20 (FILE *);
c 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exceptionsigned long dsisr;
  t r0;
        unsigned int r1;
        unsigned int r2;
        unsigned int r3;
        unsigned int r4;
   .h" 2 3 4
# 71 "/usr/include/mach/thread_sate.h" 1 3 4
# 27 "/usr/incl;
        unsigned int r8;
        unsigned int r9;
        unsigned int r10;
        unsigned int r11;
      ad_status.h" memory_object_attr_info old_memory_obistd.h" char *thousandso *memory_object_perf_info_t;
typedef struct memory_object_perf_info memistd.h"t r17;
        unsigned int r18;
        unsigned int r19;
        unsigned int r20*, int);
}
#  3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exceptionhread_state_flavor_arraobject_copy_strategy_t copy_strategy;
};

typedef struct old_memory_object_behave_info *old_memory_objectt;
typedef integer_t *exception_data_t;
typask_t *exception_mask_array_t;
        unsigned int cr;
        unsigned int xer;
        unsigned int lr;
        unsigned int ctr;
   "/usr/include/memory_object_attr_info old_memory_ont __    char frac_o *memory_object_perf_info_t;
typedef struct memory_object_perf_info me
typedef mach_port_t vm_map_t;
# 49 "/usr/id_memory_object
int __swbu 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/rt_urefs_t;mach/ppc/processtypedef struct memory_object_behave_info *memory_object_be_t;
typedef unsigned lonsr/include/mach/ppc/processor_info.h" 3 4
typedef union      struct {
           

typedef struct memory_object_behave_info *memory_object_beattr_info *old_memory_objsr/include/mach/ppc/procevor_t;
typedef thread_state_flavor_t *t_cache;
   , const char *);
}
# 5    unsigned inlude/mach/tiave_info *memory_object_behave_in        vm_size_t cluster_size;
        boolean_t may_cache;
};

ory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t i::setlocale;
  using ::emory_object_reh" 2 3 4
# 62 "/usr/include/stdlib.h" 2 3 4
# 71 "/u regs_sd_memory_object_attr_info {
        boolean_t object_ready;
        boolean_t may_cache;
   select : 7;
            : 1;
                unsigned int threshold : 6;
                uinline int __sputc(int _c, FILE *_ct_behave_info *old_memory_objectselect : 7;
                unsigned int pmc2select : 6;
        }bits;
}mmcr0_t;

typedef uni struct old_memory_object_behave_info def int* __c_locale;


 int pmc4select : 5;
                unsigned int reserved : 22;
        }bits;
}mmcr1_tattr_info *old_memory_object_attr_info_t;
typedtypedef union {
                 unsigned int threshmult : 1;
                unsigned int reserved : 31;
        }bory_object_attr_in               _Tv __v, int pmc4select : 5;
                unsigned int reserved : 22;
     vm_size_t cluster_size;
        boolean_t may_cache;
};

struct memory_object_attr_info {
        memory_object_copy_strategy_t copy_strategy;
     av = static_cast<char*>(pm_regs {
      union {
        mmcr0_t mmcr0;
        mmcr1_t mmcr1;
 reserved : 31;
        _t may_cache_object;
        boolean_t temporary;
};

struct memory_objectunsigned int *processor_t struct processor_pm_regs processor_pm_regs_data_t;
typedef struct p      }bits;
}mmcr1_t;

typedef union {
        unsigned int word;
        stnt *processor_temperature_t;



union processor_control_data {
        processor_pm_ret_overwrite;
        boolean_t advisory__ret;






      if (_subtype_t cmd_cpu_subtype;
    union processor_control_data u;
};

typedef struct processo  unsigned int cv : 31;
        }bits;
}pmcn_t;





strumemory_object_behave_inf *processor_control_cmd_t;
# 28 "/usr/include/mach/machine/processor_in

typedef struct memory_object, __v);

      setlsubtype_t cmd_cpu_subtype;
    union processor_control_data u;
ct_perf_info_t;
typedef struct memory_object_perf_info memory_object_perf_info_data_t;

typedef struct memory_object_attr_info *memory_object_attrn/3.3/c++/iosfwd" 2 3pm_regs {
      union {
        mmcr0_t mmcr0;
        mmcr1_t mmcr1;
        mmcr2_t mmcr2r_info memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memory_r_basic_info_data_t;
t: 1;
                unsigned int threshold : 6;
              edef struct processor_control_cmd processor_control_cmd_data_t;
typedef struco_data_t;
typedef struct processor_basic_info *processor_basic_info_t;



struc                absent:1,
          r/include/ctype.h" 1 or_cpu_load_info_data_t;
typedef struct processor_cpu_load_info *processor_cpu_load_

typedef integer_t processor_info_data_t[(1024)];


typed;
};

typedef structset_flavor_t;


struct processor_set_basic_info {
        int processor_count;
  eption.h" 1 3 4pedef struct {
     essor_basic_info {
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;
        boolean_t running;
        intlist_ptr_t;
# 70 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exceptionEntry;

typedef structypedef struct processor_basic_info *processor_basic_info_t;



struct processor_cpu_load_info {
        unsigned long cpu_ticks[4];
};

typedef struct pverage;
        integer_t macsor_cpu_load_info_data_t;
typedef struct processor_cpu_load_info *processor_cpu_load_info_t;
# 118 "/usr/include/mach/processor_info.h" 3 4
ttask_info.h" 1 3 4
# 66 "/usr/include/mach/task_info.h" 3 4
# 1 "/usr/include/mah" 2 3 4
# 57 "/usr/include/mach/exc        char encodingef struct processor_set_basic_info processor_set_basic_info_data_t;
typedef struct processor_set_basic_info *processor_set_basic_info_t;




70 "/usr/include/mach_load_info {
        int task_count;
        int thread_count;
        integer_t load_ausr/includ           (rune_t, csubtype_t cmd_cpu_subtype;
    union processor_control_data u;
};tus.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/thr)];
        rune_t mapontrol_cmd *processor_control_cmd_t;
# 28 "/usr/include/mach/machine/processor_info.h" 2 3 4d_state {
        unsigned int srr0;
        unsigned int srr1;
        edef struct policy_time: 1;
                unsigned int threshold : 6;
                     }bits;
}mmcr1_t;

typedef union {
        unsigned int word;
        stt policy_timeshare_info policy_timeshare_info_data_t;
# 142 "/usr/include/mach/pol        unsigned int r6;
        unsi maplower_ext;
       imit {
        integer_t max_priority;
};
struct policy_rr_info {
        integer_t ma  unsigned int cv : 31;
        }bits;
}pmcn_t;





stru  unsigned int r12;
    boolean_t depressed;
        integer_t depress_priority;
};

typedef struct poli     unsigned ocale _DefaultRuneLimit {
        integer_t max_priority;
};
struct policy_rr_innsigned int r15;
        unsigned int r16;
        unsigned int r17;
        unsigned int r18;
        unsigned int r19;
        unsigned int r20r/include/ctype.h" 3um;
        boolean_t depressed;
        integer_t depress_priority;
};

typedef struct pogned int r22;
        unsigned int r23;
        unsigned int r24;
    teger_t base_priority: 1;
                unsigned int threshold : 6;
                 }bits;
}mmcr1_t;

typedef union {
        unsigned int word;
        stse_priority;
        boolean_t depressed;
        integer_t depress_priority;
unsigned int r30;
        unsigned t);
int islower (inttypedef struct policy_fifo_info *policy_fifo_info_t;

typedef struct policy_fifo_b  unsigned int cv : 31;
        }bits;
}pmcn_t;





stru     unsigned int mqmit_data_t;
typedef struct policy_fifo_info policy_fifo_info_data_t;
# 208 "/usr4];
        unsr (int);
int toupperessor_basic_info {
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;
        boolean_t running;
        int       unsigned int fpscr_pad;
        unsigned int fpscr;
} ppc_float_state_t;

typedef
int isideogram (int)typedef struct processor_basic_info *processor_basic_info_t;



struct processor_cpu_load_info {
        unsigned long cpu_ticks[4];
};

typedef struct picy_fifo_limit_data_t fifo;
}sor_cpu_load_info_data_t;
typedef struct processor_cpu_load_info *processor_cpu_load_info_t;
# 118 "/usr/include/mach/processor_info.h" 3 4
tpolicy_limit_data_t;
typedef struct policy_infos policy_info_data_t;
# 67 "/usr/ch/ppc/thread_status.h" 3 4
typedef 158 "/usr/include/ctyef struct processor_set_basic_info processor_set_basic_info_data_t;
typedef struct processor_set_basic_info *processor_set_basic_info_t;




ion_state {
        u_load_info {
        int task_count;
        int thread_count;
        integer_t load_asigned lonusr/include/ctype.h" limit_t;
typedef struct policy_timeshare_info *policy_timeshare_info_t;

typedef struct policy_timeshare_base policy_timeshgned long pad1[4];
} ppc_exception_state_t;
# 28 "/usr/include/mach/machine/thread_status (1 <<8 )) ? ___runetyeshare_info policy_timeshare_info_data_t;
# 142 "/usr/include/mach/policy.h" 3 4
struct policy_rr_base {
        integer_t base_priority;
        integer_teger_t messages_received;
    limit {
        integer_t max_priority;
};
struct policy_rr_info {
        integer_t mned int threshold : 6;
                ;

typedef union {
        unsigned int word;
        st_times_info {
        time_value_t user_time;

        time_value_t system_time;

h" 2 3 4
# 72 "/usr/include/mach/thred long f)
{
        re_thread_times_info_t;
# 74 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_policy.h" 1 3 4
# 37 "/usr/inc  unsigned int cv : 31;
        }bits;
}pmcn_t;





strud_state_flavor_t;
typeicy_rr_limit policy_rr_limit_data_t;
typedef struct policy_rr_info policy_rr_info_data_thread_state _c >= (1 <<8 )) ? 0 :subtype_t cmd_cpu_subtype;
    union processor_control_data u;
};

sr/include/mach/exception_types.h" 2 3 4





typedef int exception_type_t;
typedef integer_t exception_data_type_t;
typedef int exception_behavior__c)
{
        return (_temperature_t;



union processor_control_data {
        processor_pm_regxception_data_t;
typedef unsigned int exception_mask_t;
typedef exception_mask_t *exception_mach/mach_types.h" 2 3 4
int pmc4select : 5;
                unsigned int reserved : 22;
        }bits;
}mmcr1_          unsigned int reserved : 22;
   ;

typedef union {
        unsigned int word;
        stypes.h" 2 3 4
# 1 "/usr/include/mach/task_special_ports.h" 1 3 4
# 66 "/usr/include/_port_t *exception_port_array_t;
# 71  int
__tolower(int _c)
include/mach/thread_info.h" 1 3 4
# 76 "/usr/include/mach/thread_info.h" 3 4
typedef natural_t thread_flavor_t;
typedef integer_  unsigned int cv : 31;
        }bits;
}pmcn_t;





struor_info.h" 3 4
# 1 "/us      union {
        mmcr0_t mmcr0;
        mmcr1_t mmcr1;
        mmcr2_t mmcr2;
     truct {
 _c];
}
# 50 "/usr/intypedef struct policy_fifo_info *policy_fifo_info_t;

typedef struct policy_fifo_brocessor_info.h" 3 4
# 1 "/usr/include/mach/ppc/processor_info.h" 1 3 4
# 43 "/usr/include/mach "C" {
extern int isapm_regs {
      " 3 4
typedef union {
        unsigned int word;
        struct {
 cy.h" 3 4
struct threassor_basic_info {
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;ned int threshold : 6;
              1;
                unsigned int du : 1cy.h" 3 4
struct thread_standard_policy {
        naturalhread_standard_policy thread_standa  policy_t policy;
        integer_t run_state;
        integer_standard_policy_t;
# 114 "/usr/include/mach/thread_poli            unsigned int reserved4 : 1;
y thread_extended_poliimeshare;
};

typedef struct thread_et_cpu_load_infnt isuppermory_object_types.h" 3 4
typedef int *memory_object_info_
typedef int memory_object_flavor_t;
typedef intconstraibject_info_data_t[(1024)];
# 182 "/usr/insalpha;
  usind_policy_data_ting ::isgraph;
 "/usr/include/mach/memory_object_typeso host_cpu_objegraph;
  usingtruct memory_ob  using ::ispri *thread_time_constraint_policy_t;
# 181 "/usr/include/mach/thr       intege" 3 4
struct thread_precedence_:strg ::isxdigiter_t importance;
};

typedef struct thread_precedence_policy thr_preceden" 3 4
struct thread_precedenceize_trwin/3.3/c++ *thread_time_constraint_policy_t;
# 181 "/usr/include/mach/thrad_special" 3 4
struct thread_precedenceptr(un1 3
# 43 "/us *thread_time_constraint_policy_t;
# 181 "/usr/include/mach/thr"/usr/inclu" 3 4
struct thread_precedenceger_t i::getc;
 *thread_time_constraint_policy_t;
# 181 "/usr/include/mach/thr int cloc" 3 4
struct thread_precedence/mach   struct ch *thread_time_constraint_policy_t;
# 181 "/usr/include/mach/thrnt tv_sec;" 3 4
struct thread_precedencew;
   ts<_CharT>,
  *thread_time_constraint_policy_t;
# 181 "/usr/include/mach/thres.h" 2 3 4" 3 4
struct thread_precedenceistd.h"g;

  template *thread_time_constraint_policy_t;
# 181 "/usr/include/mach/thrvm_machine_a" 3 4
struct thread_prece3/c++/cstd





}
# 49 " *thread_time_constraint_policsr/include/gccsigned int reserved4 :nclude/mach/mac" 3 4
struct thr,/gcc/darwirt_urefs_t;+/bits/fpos.h" ch_types.h" 2 3 4
# 1 "/usr/inced int reserved3 : 1;
      3

# 1 "/usinherit.h" 1 3 4
# 69 "/uread_precedence_policy_data_t" 3 4
typedef unsigned int_precedence_policy *thread_precedence_ch_types.h" 2 3 4
# 1 "/c/darwin/3/vm_behavior.h" 1 3 4
# 41mach_types.h" 2 3 4
# 1 "" 3 4
typedef unsigned inad_special_ports.h" 1 3 4
# 79 "/usr/inch_types.h" 2 3 4
# 1 "/u 3
# 48 "inherit.h" 1 3 4
# 69 "/u# 1 "/usr/include/mach/clo" 3 4
typedef unsigned in"/usr/include/mach/clock_types.h" 3 4
tyty_info_data_t;
typedef str1 "/usr/iinherit.h" 1 3 4
# 69 "/unt sleep_type_t;
typedef in" 3 4
typedef unsigned in int clock_flavor_t;
typedef int *clocch_types.h" 2 3 4
# 1 "uct __sbuinherit.h" 1 3 4
# 69 "/u;




struct mach_timespe" 3 4
typedef unsigned innt tv_sec;
        clock_res_t tv_nsec;ch_types.h" 2 3 4
# 1 "/uo.h" 3 4
inherit.h" 1 3 4
# 69 "/umach_timespec_t;
# 82 "/us" 3 4
typedef unsigned ines.h" 2 3 4
# 1 "/usr/include/mach/vm_at

typedef memory_object_t w;
       inherit.h" 1 3 4
# 69 "/uude/mach/vm_attributes.h" 3" 3 4
typedef unsigned invm_machine_attribute_t;
# 79 "/usr/includ struct old_memory_object_ae;


      inherit.h" 1 3 4
# 69 "/uef int vm_machine_attribute_" 3 4
typedef 169 "/usr/include  int (*_closemory_object_types.h" 3 4
typedef int *memory_object_info_t;nfo_t;
typedef int memory_object_flavor_t;
typedef into_64 vm_region_bject_info_data_t[(1024)];
# 182 "/usr/includrintf;
  usicpu_load_info *h
typedef unsigned long long memory_object_offset  vm_bemory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t iunsigned char *_up;pedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_object_
typedef struct vm_regio
    __convert_from_v(char* __out, const nsigned int r2;
        unsigned int r3;
        unsigned int r4;
    def struct vm_region_basic_info vm_region_basic_inruct vm_region_extended_info {
     h_port_t memory_object_control_t;


typedef memory_object_tbject_t *memory_object_array_t;




typedef mach_t;
        unsigned int ry_object_name_t;



typedef mach_port_ject_attr_in;
}
# 241 "/usr/inc  vm_prot_t prsigned int user_tag;
        un        vm_size_t cluster_size;
        boolean_t may_cache;
};

struct memory_object_attr_info {
        memory_object_copy_strategy_t copy_strategy;
     of (FILE *);
int ferpedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_truct vm_region_extended_info *   vm_prot_t prnded_info_t;
typedef struct vm_region_ struct policy_fifo_base policy_fifo_base_data_t;
typedef struct po unsigned int private_pages_resident;
        unsignre_mode;
};

typedef struct vm_region_h_port_t memorylicy_rr_limit_t;
typedef struct policy_rr_info *policy_rr_info_t;

fo_data_t;
# 173 "/usr/include/mach/vm_region.h" 3 4
stru  unsigned char share_mode;
};

typedef stry_objec..);
int fputc (_t max_protection;
        vm_inherit_t inherict_perf_info_t;
typedef struct memory_object_perf_info memory_object_perf_info_data_t;

typedef struct memory_object_attr_info *memory_object_attrize_t, FILE *);
Fe_pages_resident;
        unsigned int shared_pages_resident;
        unsigned char share_mode;shared_now_private;
    top_info *vm_region_top_info_t;
typedef struct von_top_info vm_region_top_info_data_t;
# 173 "/usr/include/mach/vm_regionr share_mode;
        boolean_t is_submap;ject_id;
        unsigned short t_t max_protection;
        vm_inherit_t inheritgcc/darwin/3.3/c++/exception" 1 3depth;
        unsigned char external_p
struct processorject_name_t;



typedef mach_port_tt;
typed (const void *,     unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned int ref_count;
list_ptr_t;
# 70 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exceptionr *);

extern conpedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_signed int pages_residentuser_wired_count;
};

typedef struct vm_region_submap_info *vm_region_submap_info_t;
typedef struct vm_region_submap_inf    unsigned char external_pager;
        u       vm_behavior_t behavior;
      vm_prot_t protection;
        vm_prot_t max_protection;
        vm_inherit_t inheritance;
        vm_object_offset_70 "/usr/include/      uint32_t computation;
      usr/include (const char *);_t max_protection;
        vm_inherit_t inheritatus.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/threchar *, ...);
voipedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_sr/include/mach/mach_types.top_info *vm_region_top_info_t;
typedef struct vm_on_top_info vm_region_top_info_data_t;
# 173 "/usr/include/mach/vm_regioern_return.h" 1 3 4
# 27 "/usr/include/mach/ern_return.h" 1 3 4
# 135 "/usr/int_t max_protection;
        vm_inherit_t inheritan_protection;
        vm_inherit_t inheritance;
        vm_object_offset_  unsigned int r12      uint32_t computation;
      nsigned ar *);
int unge_t max_protection;
        vm_inherit_t inhensigned int r15;
        unsigned int r16;
        unsigned int r17;
        unsigned int r18;
        unsigned int r19;
        unsigned int r20vprintf (const cpedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_rence *next;
        sttop_info *vm_region_top_info_t;
typedef structon_top_info vm_region_top_info_data_t;
# 173 "/usr/include/mach/vm_regiouct kmod_info *ki, void *data);

typedef s      unsigned asprintf (char *t id;
        char name[64];
        char version[64];
        in_t offset;

        unsigned int user_tag;
        u     unsigned in      uint32_t computation;
      ve;
} ppc"/usr/include/st    unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned int ref_count;
       unsigned int fpscr_pad;
        unsigned int fpscr;
} ppc_float_state_t;

typedef);
int fileno (FIpedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_kmod.h" 3 4
typedef strucuser_wired_count;
};

typedef struct vm_region_submap_info *vm_region_submap_info_t;
typedef struct vm_region_submap_infhar dependencies[1][64];
} kmod_load_with_d       int type;
        char dam_size_t hdr_size;
        kmod_start_func_t *d_t;
typedef int kmod_control_flavor_t;
typedef void* kmod_args_t;



typeion_state {
           uint32_t computation;
       igned lonnst char *, consth" 2 3 4
# 1 "/usr/include/mach/kmod.h" 1 3 4
# 34 "/usr/include/mach/kmod.h" 3 4
# 1 "/usr/include/mach/kgned long pad1[4];
} ppc_exception_state_t;
# 28 "/usr/include/mach/machine/thread_statusinebuf (FILE *);
cpedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_et_t;
typedef mach_port_t pclude/mach/ppc/kern_return.h" 3 4
typedef int kern_return_t;
# 28 "/usr/include/mach/machine/kern_return.h" 2 3 4
# 65 "/u clock_ctrl_t;







typedef processor_set_eply_t;
typedef mach_port_t bootstspace_t;
typedef mach_port_t host_t;
typedef macd_t;
typedef int kmod_control_flavor_t;
typedef void* kmod_args_t;



typed_state_flavor_t;
      uint32_t computation;
      hread_stateist);
int vsscanf _t max_protection;
        vm_inherit_t inheritancsr/include/mach/exception_types.h" 2 3 4





typedef int exception_type_t;
typedef integer_t exception_data_type_t;
typedef int exception_behavior_ char *, int);
}
# pedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_r_set_t *processor_set_array_top_info *vm_region_top_info_t;
typedef struct vm_reon_top_info vm_region_top_info_data_t;
# 173 "/usr/include/mach/vm_regiopes.h" 3 4
typedef task_t task_port_t;
typedead_port_t;
typedef thread_array_t tht_t io_master_t;
typedef mach_port_t UNDServerRef;d_t;
typedef int kmod_control_flavor_t;
typedef void* kmod_args_t;



typeor_info.h" 3 4
# 1       uint32_t computation;
     truct {
 





extern "C"ad_info *host_cpu_load_info_t;
# rocessor_info.h" 3 4
# 1 "/usr/include/mach/ppc/processor_info.h" 1 3 4
# 43 "/usr/include/machlist);
int __swbuport_name_" 3 4
typedef union {
        unsigned int word;
        struct {
 maphore_port_t;
ty);
int __svfscanf (FILE *, consf mach_port_t host_t;
typedef ma 1;
                unsigned int du : 1maphore_port_t;
typedef lock_set_t lock_set_port_t;
typedef ledger_array_t ledm_size_t hdray_t;
typedef alarm_t alarm_port_t;
typedef clock_ser            unsigned int reserved4 : 1;
port_t;
typedef exrt_t;
typedef exception_handler        uint32_t     else
      vm_prot_t proa_64_t;





struct vm_region_basic_info {
      vm_prot_t protection;
        vm_prot_t max_protectiont_policy_data_t;

typedef struct thead_time_constrrintf;
  using ::  vm_prot_t prottypes.h" 3 4
typedef int alarm_type_t;
typedef ind.h" 3 4
extern "cessor_t pruct thread_precedence_policy {
 c++io.h" 2 3

# 1 "C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h"read_precedence_po/include/sys/time.h" 3 4
strt threa:fflush;
  usint tv_sec;
        int32_t tv_usec;
};
# 93 "/usr/include/sys/time.h" 3 mach_types.h" /include/sys/time.h" 3 4
stach/threefault.h" 1 3
#"C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h"# 1 "/usr/inclu/include/sys/time.h" 3 4
st3 4
# 46 "lude/pthread.h""C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h"nt sleep_type_t;/include/sys/time.h" 3 4
stger_t i5 "/usr/includ"C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h";




struct m/include/sys/time.h" 3 4
stsigned i 4
# 1 "/usr/in"C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h"mach_timespec_t/include/sys/time.h" 3 4
st/mach_typt * __error (voi"C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h"ude/mach/vm_attr/include/sys/time.h" 3 4
stigned int sr/include/sched."C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h"ef int vm_machine/include/sys/time.h" 3pedef unsignedd.h" 3 4
extern "C" {
# 168 "/usr/include/pthre struct old_memory_object_aarwin/3.3/c++ *, char *on.h" 1 3 4
# me.h" 1 3 4
# 68 "/usr/include/sys/" 3 code;
   ypedef unsigned {
        int32_t tv_sec;
        int32_t tv_us struct old_memory_object_a" 1 3
# 98 "/um);

int pthread_attr_getsche 4
struct timezone {
        in*attr, int *policy);

int pthread_ tz_dsttime;
};
# 141 "/usr/include/systtr, void **stackaddr);

int/c++/ppc-d_getstacksize (const pthread_astruct timeval it_interval;*attr, int *policy);

int pthreadalue;
};




struct clockinfo {
         struct old_memory_object_ahr-default.m);

int pthread_attr_getscheickadj;
        int stathz;
*attr, int *policy);

int pthread"/usr/include/sys/time.h" 3 4
extern "C"  struct old_memory_object_aude/pthread_m);

int pthread_attr_getschestruct timeval *);
int futime*attr, int *policy);

int pthreadl *);
int getitimer (int, struct itimer struct old_memory_object_a22 "/usr/im);

int pthread_attr_getschel *, struct timezone *);
in*attr, int *policy);

int pthreadct itimerval *, struct itimerval *);
int struct old_memory_object_a" 3 4
exterm);

int pthread_attr_getscheconst struct timezone *);
in*attr, int *policy);

int pthread struct timeval *);
}
# 169 "/usr/include struct old_memory_object_alude/pthreadm);

int pthread_attr_getschedestroy (pthread_attr_t *attr*attr, int *policy);

int pthreadtate (const pthread_attr_t *attr, int *detser_wired_count;
};

typedef struct v_t *cond);
int pthread_cond_initsched (const pthread_attr_t *a*attr, int *pol {
        in opaque[4t __sigld(void);
extern int sched mach_port_rights_t mps_sorights_mutex_52 "/);
extert_info.h" 3 4
strm_stain(int);
extern(y_max(int);
ction;
        vm_prot_t max_protecondattr_de52 "/t);
# 38 "int32_t *mutex, conread.h" 2 3 4
estroy (pthrde/gcc/darwin/3.3/sad_condattr_t *attr);
int pthread_condnt *pstpshared,clude/time.h"rt_urefs_t;uct timespec {
   shared);

int _nsec;
};


struct signed int reserved4 :ead_t *thread, conshared);

truct tm)];
# 90 "/us, pthread_mutexUTFt __siginfo *;
  *abstime);


int pthread_condattr_initead_(pthre
        tr);
int pthread_cond   int tmestroy (pthread_condattr_t *attr);
int pthread_condhread_t, itpshared (const pthread_con*) (in int tm_yday;
   shared);

int pthread_condattr_setpshared (pthread_condattr_t *attr, nt pthreahared);

int pthread_create (pthread_t *threadnt pthread_getschedpar;


extern "C" {
cstart_routine)(void *), void *arg);param);


int pthr_detach (pthread_t th pthreastruct tm *();
char *ctimity;
        integer_t minimum_putex, int *p52 "/ *ctime 4)];
# 182 "/usr/iigned ble difftime ((t tm *gmtime (const timef mach_port_t host_t;
typedef mach *);
struct ct_array_t;




typedef mach_port_t memread_booleaenread_atruct tm *lousr/include/pthreonst struct tm *);d_policy strftime (char *, size_t"/usr/include/mach/memory_object_types(pthread_mutetex, const,size_t, consef unsigned inylock (pthread_mutex_t *mutex);
int pthread_mutex_memory_object_perf_info {
        de/mach/vm_inherit.h" 1 3 4
# 69 "/usr/inchread_mutexattr_destroy (pthredef struct vm_regiuct tm *, cha);
char *ctime__mutex_loc (pthread_mutex_t *mutex, int pri_mutexattr_get *old_p

struct vm_regiont pthread_tr_gettyetpshared (const pthread_mutexattr_t *attr, onst pthr);

int pthread_mutexaddef.h" 1 *, struct tmetpshared (const pthread_mutexattr_t *attr,tr);
int p);

int pthread_mutexastddef.h" 3ct tm *);
chaetpshared (const pthread_mutexattr_t *attr,ad_mutexatt);

int pthread_mutexaude/gcc/d_t timelocaetpshared (const pthread_mutexattr_t *attr, (pthread);

int pthread_mutexa/os_definenst);



intetpshared (const pthread_mutexattr_t *attr,*attr, int);

int pthread_mutexacc/darwin/3*);

}
# 39 "etpshared (const pthread_mutexattr_t *attr,

pthread_t);

int pthread_mutexafig.h" 2 3
#ach/mach_typesetpshared (const pthread_mutexattr_t *attr,t sched_para);

int pthread_mmach_types.h" 3  1 "/usr/include/gcc/da( 4
# 34 "/usr/include/gcc/darwin/3.3/sruct thread_precedence_policy thread_prd_key_delete (tr_destroy (nt pthread_create h" 3 4
tdef u_int8_t uint8_t(nt16_t;
typedef u_int32_t uint32_t;olicy_t;
# 78 "/usr/include/mach/macalue);

void *pthread_getspecific (pthread_ke
structults;
      ad_attr_ge
typedef int16_t int_least16_t;
tylude/mach/mach_types.h" 2 3 4


# 1 alue);

void *pthread_getspecific (pthread_kent32_t ileast32_t;
typedef in(ypedef uint8_t uint_least8_t;
typedeedef int alarm_type_t;
typedef int slalue);

void *pthread_getspecific (pthread_ke6_t uileast16_t;
typedef  mach;

int pthread_rwlock_rdlock (pthread_rwlock_t *rwlock);
int pread_rwlock_wrlocpthread_getspecific (pthread_kepedef i_t int_fast8_t;
type(_t;
typedef int32_t int_fast32_t;
t};
typedef struct mach_timespec machwlock_t *rwlock);
int pthread_rwlock_unlock (int64_t _fast64_t;
typedef ui(pedef uint16_t uint_fast16_t;
typedeributes.h" 1 3 4
# 70 "/usr/include/mwlock_t *rwlock);
int pthread_rwlock_unlock (2_t uint_t32_t;
typedef uint64_("/usr/include/gcc/darwin/3.3/stdint.h/mach/vm_attributes.h" 3 4
typedef intwlock_t *rwlock);
int pthread_rwlock_unleate (pthread_t * pthread_key_delete (pthread_key_t key);
nded_info_t;
typedef struct vm_region_elude/mach/mach_nded_info_t;
typedef struct vm_region_e *host_bastart_routine)(void *), void void *value);

void *pthread_get/mach_h" 2 3 4

#reate (pthread_t *int pthread_attr_getscope (pthread_;
typedef mach_port_t UNDServerRef;
o.h" 3 4
# 1;
typedef mach_port_t UNDServerRef;
pthread_cond_timedwait_relative_np (pthd_attr_t *, int);
int pthreax_t *mutex, const struct timespec *int pthread_rwlockncy (int);
int pt;
typedef mach_port_t UNDServerRef;
1 "/usr/inclr_t *attr, void *(*start_routine)(void *), void *arg);



void pthread_yieint pthread_rwlock_init (pthrx_t *mutex, const struct timespec *hread_rwlockattr_t *attr);

int pthrecessor_set_t *processor_set_name_arra/include/machcessor_set_t *processor_set_name_arrapthread_cond_timedwait_relative_np (pthread_rwlockattr_t darwin/3.3/c++/ppc-darwin/bits/gthr-default.h"read_rwlock_wrlock (pthread_rwloc/usr/include/mach/kmod.h" 1 3 4
# 3natural_t;
read_once (once, func);
  else
    retuead_cond_timedwait_relative_np (ptd_rwlock_t *rwlock);
int pthx_t *mutex, const struct timespec *lock_t *rwlock);
int pthread_rwlock;
typedef mach_port_t UNDServerRef;
vm_offset_t;r_t *attr, void *(*start_routine)(void *), void *arg);



void pthread_yielock_t *rwlock);
i  return pthread_key_create (key, dtor);
}

stad_rwlockattr_getpshared (const pthrecessor_set_t *processor_set_name_arrah/machine/vm_darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 3
static inline int
__gthrea_rwlockattr_setpshared (pthreax_t *mutex, const struct timespec *d);




int pthread_is_threaded_np (voief processor_set_array_t processor_setinteger_t freeef processor_set_array_t processor_setcreate (__gthread_key_t *key, void (*dhread_mach_thread_np (pthread_tx_t *mutex, const s3/c++/cstdactive_count;
        * pthread_get_stackaddr_np (pthread_t);


int pthrea
        integer_t pageoutteger_t zerosigned int reserved4 :ylock (__gthread_mutextr_destroy nt);
sd_pr

typedef rt_urefs_t;       integer_t r pthread_create_suspended_np (pthread_t *thread
        integer_t pageouts;
      
    return 0;
}

static iif (__gthread_ad_mutex_unlock (__gthread_mutex_t *mutex)
{
 4
# 61 "/usr/inlt.h" 2 3


typedef pthread_key_t __gthread_keyt[(4096)];







typedef integer_t
    return 0;
}

static rwin/3.3/c++/ppcd_mutex_unlock (__gthread_mutex_t *mutex)
{
 tatistics *vm_stnt
__gthread_active_p (void)
{
  return 1;
}
# 44vm_statistics_data_t;
# 99 "/usr/inc
    return 0;
}

static _c_lock;


  typed_mutex_unlock (__gthread_mutex_t *mutex)
{
 vail_cpus;
   ))
    return pthread_once (once, func);
  elr_t resident_count;
        intege
    return 0;
}

static ;
    static cod_mutex_unlock (__gthread_mutex_t *mutex)
{
 };

typedef str_gthread_key_dtor (__gthread_key_t key, void *p# 63 "/usr/include/mach/host_info.h
    return 0;
}

static t = 0x0020;
    d_mutex_unlock (__gthread_mutex_t *mutex)
{
 usr/include/machkey);
}

static inline void *
__gthread_getspecifchine.h" 3 4
# 1 "/usr/include/mach/
    return 0;
}

static  _S_showbase = 0xd_mutex_unlock (__gthread_mutex_t *mutex)
{
 alue.h" 3 4
strucy, ptr);
}

static inline int
__gthread_mutex_lock ach/machine/boolean.h" 1 3 4
# 27 "/u
    return 0;
}

static __int_type _S_unitd_mutex_unlock (__gthread_mutex_tf unsigned int vm_inthread_mutex_t *mutex)
{
  if (_rcase = 0x4000;
    stat_gthread_active_p ())
    return utex);
  else
    return 0;
}

stateld = 0x0002 | 0x0040 d_mutex_unlock (__gthread_mutex_t *mutex)
pedef int boolean_getscope (pthread_atonst __int_type _S_floatfield = 0x0100 | 0x0004;


 0;
}
# 99 "/usr/include/gcc/darwconst __int_type _St __int_type _S_eofbit = 0x02;
    static conrwin/3.3/c++/ppc-darwin/bits/c++i

    static const __int_type _S_app = 0x01;
    stati typedef ptrdiff_t streamsize;

 __int_type _S_in =t __int_type _S_eofbit = 0x02;
    static con_c_lock;


  typedef FILE __c_file;

    static const __int_type _S_app = 0x01;
    statype;

    static const __int_type _sr/include/gcc/darwit __int_type _S_eofbit = 0x02;
    static con;
    static const __int_type _

    static const __int_type _S_app = 0x01;
    sta = 0x0008;
    static const __in# 64 "/usr/includet __int_type _S_eofbit = 0x02;
    static cont = 0x0020;
    static const __in

    static const __int_type _S_app = 0x01;
    stati_right = 0x0080;
    static cons::time;
  using ::at __int_type _S_eofbit = 0x02;
    static con _S_showbase = 0x0200;
    static c1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cwchar" 3



 __int_type _S_showpos = 0x0800;
n/3.3/c++/cwchar" 3
t __int_type _S_eofbit = 0x02;
    static con__int_type _S_unitbuf = 0x2000;
    s1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cwchar" 3


ic const __int_type _S_adjustfield =amespace std
{






0010;
    static const __int_type _S_b    rme_value time_ver_subsystem_t;





e.h" 3 4
typedef struct mapped_ting ::clock_t;
  using :lue {
   _priority_info *host_priorityc:
      __statecessor_t processos,lue {
        irwlock);
in seconds;
        2 3 4
# 1 "/usr/include/mach/vm_types.h" 1 fpos(streamoff __ pthread_ae _M_st;

    publieconds;
} mad_policy_datt) { _M_st = __st; }



      erator stream4
typedef int memory_o  operator sxi_port_limits_ { return _M_off; }

      fpos&
     = __4
typedef int mem  integer_t i __n);(4)];


typedity;
        integer_t minimum_pff; ret52 "/pedefgthread_mutex_trylosion_t[(512)shared);

int pypedef long streamoff;
  typedef ptrdiff_t streamsize;



 _t(*this);
  hared);

os;

  typedef __gthread_mutex_t __




struct ho       __t += __off;
        return __;
      }

      fpos
      operator-(str_t -= __of__off)
      {
        fpos __ts;
        vize_t memory_size;
      prioceiling);id);


int pthread_main_np (void);


mach_port_t ptool
      operator!=(copthread_getspecific (pthread_k(pthread_t *ool
      operator!=(const fpos& __pohost_basic_info *host_bastart_routine)(void *), void 

      streamoff
      _M_positioasic_in int
__gthread_muto_t;



structst_sched_info {
 estroy (pthr     integer_t min_quasetpshared (pthread_condattr_t *attr, iff
      _M_pdarwin/n() const { return _M_off; }

 
# 1 "/usr/include/gcc/darwin/3struct host_sched_infstart_routine)(void *), void *arg);
rwin/3.3/c++/bits/fuched_info f struct memschedfo_t;



struct _off; return *this; }

      fpos&
      o__throw_bad_excep4
typedef int memory_
        bohrow_bad_exceptport;
   ypedef struct mach_port_limid);


  void
  __thigned int mplimits.h" 1 3 ry_region;
   206 "/usr/include/mach/port.h" 3 4
typedor(con
        intem_types.h" 3 4
ttruct kernel_res *);
  izes_data_t;
typedef str


int pthread_key_create (pthrea
  __throw_lengt52 "/uizes_dataach_port_seqno_t mps_ _opaqurce_sizes *kernel_resd_policy__int_type _S_adtributes.h" 3 4
typede
  void
  __throw_r52 "/uread_mutex_t *muint, cons integer_t kernel_prrange_error(const char* __s);

  void
  __throw_overflow_t_qos_t;
# 68 har* __s);

 void
 rncmp;
  using  __n);Ousr/iemchr;

  inlousr/i     _.3/c++/cstd*extraInfoe_t _iosfwd" 2 3gcc/darwin/3.3/c++/iosfwInitArg*, ...);ead_ate charlib" 3
namesnd" 2 3edef ui/iosfwd" 2 3
std
{
 sing ::s 1 3 4
# gnore seccogn "/utypename _
    clagcc/darwin/3.3/c++/iosfwAttach class basic_ios;

  template<
  inline void*
s_pdrequesouptypename _ypename _Tiorit/darwin/3.3/c++/DK1_1
    class basic_ios;

  template<st<con*pristdtiesing ::strcagetusSourng);
inttypena
  { Stacks_onstack;e_ptr(avaaits = char_traits<_minHeap    class basic_axstream;

  templateverifyMod void*
  memc, intpatrucstrrchr;

  ivf*);
if)(FILE *fpt;





# 1 "/*,voidint _c, FILE *_p) {
        ie2 3  mach_p" 2 3 4

# 1 "/usrabort) *);
dlib" 3
namesesr/inreturGCar_traits<_raits<VerboseT>,
         dit, coAsyncT>,
         vame _A/limits.h" 1 3 debuggmplate<tyllocattempPned i}Traits = char_tgcc/darwin/3.3/c++/aits ypename _Traits =      v__paddmplatname _Tre<typename _Chachr(const_casbuiltin_strchr(c strpbrk(char* __s1, const char* __s2)
  { return __builtin_strpbrk*>(__s1), __s2); }

  u4g ::strrchr;

  istrcmp eger_t turn *thipedef charch/host_ypenamCude/ntThtionc_stringstreff __off*p_resourcee (void);
char *tmpnamDepename _CharT, typename _Traifo_t;


typedef intEnvpename _Traits = char_traitc_ios;

  team;

  template<typename _CharT, tyAsDaemar*
 ame _Traits = char_traits<_CharT> >
  ude/gcct_cast<const c_priority;
        inteeam;

  template<ority;
        integer_   class basiority;
        integer_t minimuts<_CharT> >
 
        integer_t_ptrtypename _CharT, ty *);
har_traits<_CharT> >sr/include/mach/vm_types.h" 1 ts = char_traits<_C52 "/u_traitddress;
        vm_sizc_filebuf;

  templ    class basic_fstream;

  templname _CharT, typename e _M_st;

    publie _TraCharT> >
    c
    class baity;
        integer_t minimum_pfwd"ame _Traits class basi, typename _Traits = char_traits<_ _CharT,CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typetypedef bame _Traits = char_traits *vallo     _Tr
JNI_throefaulreamoff
    claCharT> terminateedef basiCstrucff; return *thispaits = char_traits<_CharT> >
   edef basic_isic_osdypenamsturn *this= __off= __off;*or" 3
edef basiOnLoadtypename _Traits = etmode (     har *filebuUn), _ typedef basic_ifstream<char> i >
   _THREnclude/gcc/darwin/3.3/c++/ppc-darwin/bits/c++coypes3clude/sys/types.h" 1 3 4
# 66 "/usr/3/c++/ppc-da; char opaque[4]; } pthread_oncdispame e_t;

ude/p, int n/bits/c/gcc/val_int;
        vor/include/signal.h" 
void setr/incllude/gcc/d*c/darwin/3in (void);(int);

int kill (ar *);
vde/gcc/darwin/3.3/;
exn_prio         void *)int sc_sp;
    g sig; cc++/bits/stl_pext->id_t/jmh/includensigned long, int, constpthrea const char *)         void * const void *, size_tct timeval;

int acct (const char *ack; char opd);
int isatt_ptr" 1
#t(__a), second(__b) {pgrp (int, pid_t)sers/ _U1, clasunsigned int);
ih" 1 3 4

  pair()Trai# 1 "/u (void);

extt, consDisplair() : first(),onst _T1& __a, const _T2& __s kernel_res   unsigned i* highlonst*mutex)
{
 typenaumH_T2>& __y)
{
  retur_pdrequesaphicsCont




  pair(c __x.secn,voilColornd;
}


template < _T2>& ___T1, class _T2>
U1, width const pair<_T he);
che;

  class _T2>atorss _

template <clas/includclass _r *,s const char *) _T2>& __x, const pair<_T1, _T2>& __x, const pair<_Ty.first && __x.second == __y.second;
}


template <cT1, id);
int pipe_algobase.h" 2 3
# 1 & pe_t;

1, _T2>& __y)
    (!(_ return     (

template <clasu_int(*e>"
valuntr() : first(), second() {}




  pair(const _T1& _);

extern char *optarg;d);
char *mkdtemp (char *);
int mknod (cons _T2>
inline 
  re>
inlirT>,
  lude/gcc/dc/signal.h" 1 3 4
#r.h" 1 3
# 64 "/us3 4
typedef_p.second)  const pai& __y)
{
  r !(__y < __x);
}
(__x == __n !(__y < _, class _T2>
inline bool sighold (int);
int sigrelse (int);
int sigpause (i;
}
# 67 "/us2in/3.3/c++/ppc-darwin/bits/c++config.h" 1 3
# 35 ; char opaque[1;
typedef intpthread_once_t;



typede, int binclude/gcnext;
};
sr/include/gcc/darwin/3.3/c+t reabt_istdpthread_hanbt_noistdar *, char * eqar *, char * le <class _Tcc/d 3 4
typedebt_garwin/3.3/c++/(void);
uid_bt_betwsr/include/gcnumistdalue;
   /inclust pair<_:: 3
# 53 "/( pair<_Ty);
}_Alloc valpede++/bits/t _p      void
  istd(istd)int l1(arwic/darw2n/3.r_recregid (g~r/include/gtypedef uc/darwin/3.ate<typenamearwi __false_type {2gcc/dar6ude/gcc/darwin/3.3/c++/bits/stl_algobase.c++/bits/stl_pa"/uscc/da make_pair(_T1gcc/darwcle (const chaed long hton(*Cmpnal.h" 1 3 ringstr *);
sizearT> ne/limit++/bit{}

Cmclude/g_type hst ctrivinsigned long, in/3.3/c    bits/type_traits.3];
};

_type h{}

    ,_conss_onstigned long, int, const cha cons;
int issetsecond(__b) *ame 
char *mktemd *);
  REG pr72 "/usemplate <class _T1, NegInfair() :ypedef_t, consPOD_type;
} nOD_typeK    pe_trait72 "/usr/in_member_ pair<_T1, _T2>& __x, const pair<_T1, _T2>& __yd (void);
in.h" 3 4
typedef int sig_atomic_t;
# 50 "/usr/include/ppc/signal.h" 3 4
typedef enum {
        REGS_SAVED_NONE,
        REGS_SAVED_CALLER,


        REGS_SAVED
inline bootype has_triOD_type;
};

tempconstru const paiuctor;
   typeder> {
   typedef _ __falseype has_tr struct __type_traits<bostructor;
   typedef __true_txt {
ned long);
int searchfs (cont getppid (void);
uid_t getuid (void);
int isatty (int);
int link (const char *, const chned long);
it);
long pathconf (const char *, int);
int pause (void);
int pipe (int *);
ssined long);
int rmdir (const char *);
int setgid (gid_t);
int setpgid (pid_t, pid_t);
pid_t spus;
       unsigned int sleep (unsigned int);
long sysconf (int);
pid_t tcgetpgrp (int);
int tcsetpgrp (int, pid_t);
char pus;
       char *);
ssize_t write (int, const void *, size_t);

extern char *optarg;
extern int optind, opterr, optopt, optpus;
        [], const char *);



struct timeval;

int acct (const char *);
int asynned long);
iconst char *, const char *);
int des_cipher (const char *, char *, long, int);
int des_setkey (const char *key);
int encrypt (char *, int);
void endusershell (void);
int exect (const char *, char * const *, char * const *);
int fchdir (int);
int fchown (int, int, int);
chpus;
       esize (void);
int getgrouplist (const char *, int, int *, int *);
long gethostid (void);
int gethostname (char *, int);
mode_t getmode (const void *, mode_t);
 ned long);
ioid);
char *getpass (const char *);
int getpgid (pid_t _pid);
int 2
# 23 "gistgetusershell (void);
char *getwd (char *);
int initgroups (const char *, int)t ttyslot (vregid (gprintbinShar *);
ssize_tunsigned int);
long sysconf (int);
_b) {}


  templats _U2>
  pair(const pair<_u_intkeyOnlask;
 d (gid_t, gPosrT, nclude/ppc/ansi.hd_t pgrpnge(c_t sa_mask;
  ;

 value;
       r *re_), _rivial_oid);
pid_t getppid (void);
uid_t getuid (voist char *, char int fchdir (int);
int fchown r* __s);

  voi&me_ear *, char ructor;
   typedef _int fchown rivial_dst cr *,  sighol ;
exter_member_mecv (const;
   typedef __true_tconst *yped;
exterlude/gcc/dan/bite_type has_trivial_f __true_type has_ttructor;
 __y);true_type tt chttr_t;

typedef struct _opaque_pthread_cond_te_t;



t_t;

typedef struct _opaque_pthread_rwlock_t { loivial_destruef unsigned int sigset_t;template<> ste_mode {
  typedef __true_type is_POD_type;
};

templaong sig; char opaque[24]; } pthread_cond_t;

typedctor;
   truct __type_traits<unsigned inion sigval/os_defines.h" 3
extern "C" {
# 8ar *sits incluTp>
const char *, const char *);
char *rivial_3  typedef __t char *, const char *);
char *strrcstl_dequlong sestruc/darwin/3.3/c++/ppc-darwin/bits {
   typedef __true_t3
ed long ntohl
id _8cludvial_default_constructor;
   typedef __true_type hah" 3
# 1 "ad_casude/ __tr_buflude/gist_p.h_de/gc typsigned inal_des < 512 ?;
   ty(true/ial_dest :type is_1)    # 9ed ltor;
   typedef __true_type has_trivial_assignment_op, int);
 size_t strspn (const charRef (const charPt, size_ using :D__tru"
#pragmruct (void);

extcopy_constructotrstrd "/Ul_ass*>t, size_t (const char *rue_type has_trivial_ug_pwd "/Ual_destruct*>l_destonstructo


template <s_triviaSue_tferde/gcc_t *, void ef __true_type has_trof(_Tp) stru.first < __y.fandom_accessstrtol (constt, size_t_ "/ugonal.  typedef __tTp);
void bzepe has_trivial_Ptr eclp ct __falpedef __tR_y.feferenng);
inteMode ;


s.h" 3 4
structor;
   typedeptrdiff/Usei str_opestructor;
   typedefTp** _Macvp (coype has_trivial_aopy_constructo _SelfrT>,
  _typ"/Uscus_POD_tg> {
   ;
int cgetmg> {
   ng
  har *, ;

templat"/Usdeveong longopy_constructof __ = ax, lotor;
   type_t nanosle:
   typ(d *,, long rst(*edef has_triviefault_nment);
cte<> struct __tivial_develedefd.h" 1 3pe has_trivial_c

teype hase/syal_assign;
};

ttyped;
};

tdevel_t) (int);pe has_trivial_cmask;
 
#pragmUsers/jmh/due_type has_tr.   typ
};

templator;
     strtoperator;
   typedor;
   ble dal_destructo;
   devepe_tra firsttypedefde/gcc/da* int);
unsigned in*   type) { }

;
   typistd.h" -> int);
unsigned ine has_trivt> {
 ed lude/gcc/da++

typedef lion "typedef _ibgist/srcur =ee"
#ble d<command linM_fsctstructhas_trt,inhar *, size_t)ef __;

templane/ansi.h" 3 4
#ude/sys/types.h" 3 4
typ
tempate<> structfil pthread_he_type__tmst c/types.h" 3traiypedef __true_traits<ltrivial_dpe;
};

template<> str--

typedef l  typedef __true_  strthas_trivial_default_constructorgma  typedef __true_type hult_construsr/includ--ts<double> {
 ructor;
   typedef __true_type has_tri--al_assignment_operator;
   typedef __true--ype has_trivial_destructor;
   typedef __true_type is+=(   typedef __trconst voidthread_hctor;
   typedef _ __throlude/s+typedef _);
void (const charnst ch __throw_ue[36]  typedef<POD_type;
};

te(ue_type has_trivir (const c_true_tsize_t strlcpy 1 "nt sigfillsetor;
   typedef __/incate <clah" 1
# 81 "/ typedef statement_oper/rivial_default_constructor;
   typ      void
      state: -ivial_default_co(-ment_opergma _type_type has_trivilatehar *strncat (ault_constructor;
ue_type has_tef __true_type has_trivunsign+      void
   typedefhar *type has_tr*rivial_default_constructor;
   typeivial_copy_constructor;
   typedef ___true_type has_trivuctor;
   typedef __toid
  _const char *operator;
   typedef __trueal_destructo has_trivial_typedef __true_type is_ructor;
   typedef __t __true_typtype has-e_t  _Integral;
};

templa-e<> struct _Is_integer<signhar> {
  typedef __true_type _Integral;
};

templ-te<> struct _Is_ingnment_operator;
 []eger<wchar_t> {
  typedef __t __true_t(tegral;ed int _T1 firsnst char *);
c_default_consttor;
   typeded ls_tried char> {
  ttructoronst chaf __trnt, int);
 sign= 33   typedef __true_ty (cotype has_trw_ervial_default_constructor;
   typedef basicbuf;
  as_trivial_default_constructor;
   typedef __true_type has;

  void
  ss (const = (const rue_type has_trivial_aypedetype Usersoatfield = 0xate<> struct _Is_integer<unsigned long> {
t nanhrow_bad_typeor;
   typ__tru_y
   typf __ char *, size_default_constructor;
   typeLdef __true_typeLoatfield = 0x0100 | 0x0004;
ctor;
   typeRdef __true_typeRrue_type _Integral;
};

template<> struct _Is_integer<unsignLed lonLg> {
  typedef __true_type _Integral;
};

templateRed lonRuct _Is_integer<long long> {
  typedef __true_type _Integral;
};

template<> struct _Is_integ{
  typedef __true_type _Integral;
};

te!plate<> struct _Is_integer<unsigned long> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<long lo!_typpedef __type_Integral;
};

template<> struct _Is_integer<unsigned long long> {
  typedef __true_type _Integral;
};

template<typename _Tp> struct _Is_normanu_cxx::__normal_iterator<_Iteratope _Normal;
};


namespace __gnu_cxx
{
  template<typename _Iterator, typename _Container.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwi{
  typedef __true_type _Integral;
};

te3 4
extestruct _Is_integer<unsigned long> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<long lo_type has_trpedef __trus_trivtr_t;

t_type ha typ<ef __true_t

teg : public bi/usr/incls_tritl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h" 1 3
# 68 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iteratortor_tag {};

  struct bidirectionpe _Normal;
};


namespace __gnu_cxx
{
  template<typename _Iterator, typename _Containerg : public bidirectional_iterator_tag {};
# 102 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h" 3
  template<typename _Ca{
  typedef __true_type _Integral;
};

te>late<> struct _Is_integer<unsigned long> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<long longyc++/b/stri_Integral;
};

template<> struct _Is_integer<unsigned long long> {
  typedef __true_type _Integral;
};

template<typename _Tp> struct _Is_normas {
      typedef typename _Iterape _Normal;
};


namespace __gnu_cxx
{
  template<typename _Iterator, typename _Container> value_type;
      typedef typename _Iterator::differeforward_iterator_tag : public input_iteratu_cxx::__normal_iterator<_Iterator, _Container> > {
   typedef __true_type _Normal;
};
# 73 "/usr/include/gcc/darwin/3.3/cvalue_tterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Rbase_types.h" 3

namespace std
{
# 80 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h" 3
  struct input_iterattraits<const _Tp*> {
      typedef random_access_iteraname _Iterator>
    struct iterator_traitsu_cxx::__normal_iterator<_Iterator, _Container> > {
   typedef __true_type _Normal;
};
# 73 "/usr/include/gcc/darwin/3.3/c++/usr/terator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _ypename iterator_traits<_Iter>::it# 80 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h" 3
  struct input_iterator"/usr/includel;
};

template<> struct _Is_integer<long> er<unsigned long long> {
  typedef __true_type _Integral;
};

template<typename _Tp> size_t strsdarwin/3.3/c++/bits/concept_check::unsigned int> {ral;
};

te-ude/gcc/darwin/3.3/c++/bits/concept_check.h" 1 3
# 39 "/us__gnu_cxx
{
  template<typename _Iterator, typename _Container>tIterator>::difference_type
    __distance(_InputIter_tag {tIterator>::difference_type
    __dass _Tp> struct _I*tor_tag {};
# 1   type/bits/stl_ilate <p>
sg> {
  typtypepe has_trivger<bool>ame 
   type<typename ude/r_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)t) {
        ++__first; +ed longral;
};

te+(structor;
har *);
sizstruct _Is_integer<unsigned long> {
 s_integer<long long>unsignype;
 # 3c/darwin/3.3/c++/ppc-darwin/bits   typedef __true_type has_trivial_default_constructor;
   t *, c     in_domaplate onst cint keyopy_co# 34 ;
typ_intege32_t dev_t;
pes.h" 3tIterator>
    _traitstrstr (const c# 34 "/# 1 edeferator __last)f __trerator __last)
alloerator __edef __true_type is_Pe_typerator __emplate<> <_InputIterator>ue_typeerator __last)e_tyadefault_const_first));
    (ance};

tmapd
    __advance(def __true_tmap__type_tutIte/gcct);



ial_assigned int pe
    distance(_InputIterator __first*,ar *, coIterator __last)oid free (void tIter& __i,     ret_trivial_f __true# 34 "/u/devel/ed char> {
  category(__first));
    .# 34 "/usr/ong long> {
   typedef __tr      {
        fpf __trueconst charlt_conspy_conpstruct _Is_integer<in
          const char *,al_actional_iterator_tag)
    {

     

      _typedvance(_Bidirectiut_is_trivial  integerue_type is_PutIter& __i,      bidirecned sho    if (__n > 0)
        whut_i_type;
;
     inline void
    _e(_RandomAccessIt__n++) --__i;
    , _Distanceerator __last)
y(__first));
    }onstructor/gcc/darwin/3.3/c+utIter& __i, s_trivial_{
   maclude/gs_triviaor_tag)
  ype;
ypedef template<typename _InputIterator>
    erator_traits<_InputIterator>ivial_a
    intrue    ifference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return __distance(__first, __last, __iterator_categorerator __last)( _Distancelate<typename _InputIter, typename _Disdefault_constut_iterator_tag)
    {

     
      while (__n--) ++__i;
    }

  template<typenamr (const ctIteratoedef N       whstructor;
   typede
    }

  template<typename pename _Iterator>
    ance>
   ine void
    __advance(_Bllocate_node()
    {e.cc"  return _Node_a# 1 _type::g_pwdate(__deque_buf_size(rc/lof(_Tp)));e.cc"}
e.cc"voide.cc"_M_des/jmh/dest_btr_Tp* __pee.cc"
#pragmat_debug_pwd "/User line>"
# (__p, el/libgist/src/libbtree"
# 1 "<built-in>"
#t_bt*<commandine>"
# 1mapibbtr_t __nee.cc"  {a GCC setMapug_pwd "/Users/jmh/develn);t-in>"
# 1 "<command line>"
# 1 4
#sr/inree.,  1 "/usr/include/macsi.h" 1 3 4
# 33 "gist_btree.h"


#de/machine/de/ppc/Mincl<built 1 "/usr __mbsrc/l<bui};
# 442 "/usr/include/gcc/darwin/3.3/c++/bits/stll/libg.h" 3
  template <"/Usname    ,  "/usr/incA# 1 >e.cc"class _Dlibgisasee.cc": publicf long ug_pwd nsig<clud" 2 3 ,clude/m.h" 1 3 4
# 71 "/usr/inclu" 2 3 _traits/inclh" 2 3 4::_S_instanceless4



#pr size_:e.cc""/Usdeft;






# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 71 "/usr/inclue/string.h" 2 3 4

extern "C" {
void *memchr (c
void *memcBasng lont, size_t "/usr/inc coners/jmh/dor "/Us et (void *, inst void *, siz long uiteroid /incluTp&
cha*> nst charr *strcat (char *, const char *);
const    &char *, co*> har *onst char;
      long unsig(har *,et (void *, in& __asi.h" 1 3 4
um_elementsnclude/m:id *me(__a),
   start(char *finishree.cc"/usr/i_initial1 "/nclud char *);
size/mac char *, const char *);
char *strcpy (chae_t strcspn (const char *, const char *);
cha { *);
c~r *, const c)nst cprotected*, int 1 "ror (int);
size_t s 1 "/u"<builtchar *, cre
# 1 "gisude/ppc/avoidrt,    char_n *);
ck (const char *destroyt char *);
char *strrchr (const char *, int);enumusr/ {
vnt);
      lon = 8ong *);
cnst charar *, con<builtk (char *, c *);
cg long *str2 3 4
# 60 "/usr/include/string.h" 2 3 4


r *, const /include/sy>::_t);
char *str (const  if (      cc"





#pragmt strspn (const c *, con._Mst_bt char *);
c);
int f + 1"<built 3 4
# 1 "/usr/includ __mbhar *     lon"<built-ilt-i# 493ateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" 2 3 4
# 60 "/usr/include/string.h" 2 3 4


 1 "<cod *, const void *, size_t*, size_t);
char *strpbrst char *);
size_t 
#prag*, const char char =nst char char *);
siz /

# 1 "/usr/include/string.h" ex (nst charoid *, con = max(*strpbrkhar *, const char *)f unit char *,+ 2"<built *, co =e/string.h" 3 4
#void *, const **);
       charr *strrk_r (crtok+ *, voidnst ch-const char *) / 2
char * (const char *k_r onst voi+const char * *strtotryr *strerror , const char *r *strrchrt char *, r *);
ccatch(...ar *strermmove (vor *, int);
void *memccpy (void *, const voidhar *strtok_r0c/types.h" 1 3 4nst char69 "/usr/inthrowc/types.{
       size_t);
iset1 "gistr *strr;
char *stnt);
char f unsigned c/includ- (const ct8_t;
typedecurk_r (cize_t);
ifirs char *;
typedef sho6_t;
typent);
char nt32_ +mmove (void *ove (void *,
void strmode %

# 1 "/usr/include/string.h" g lon, const char *, size_t);



int bcmp (const voichar *har *);
size_t strlcat (cha, const char *);
char *strrchr (const char *,rlcpy (ch# 1 "/uscut char *lude/stdlimmove (vofor (b.h" de/stdlib.h;ib.h"  </machine/t; ++b.h" ar *stret;

*.h" 3 4
tstring.h" 3t_btre signed chh" 1 3 4
# 30 "/usr/include/machine/rspn (const c/include/maint .h" 3 4
typedef signed chregister_t;

typedef long int intptr_t;
typedef unsignst char *);
size_t strlcat (chastrspn (const char *, const char *);
char *strrlcpy (chtdlib.wab (con 4
typedef int ne_t;





typedef include/mand line>"
# 1 "gis*union*, int,636ateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" 2 3 4
# 60 "/usr/include/string.h" 2 3  =);
char *s/inc> 4



typedef/libgint char *, ed long int uintph" 2 3 4


{
voidusr/inc size_t);
int div (int, int);
 *, constnst void *, int, size_t)Tp value;
char *strcat (cha        la* pointet char *, int);har *,iv_t
       nt str  ldiv (long, long);
e_t);
void *memsk (char *r (const char *, int);e_t);
void *memsnt strcoll (coint strcoll (cons void *, sizstd::reversconst char nt strcoll (co
int strd (unsigned);
do size_t);
void srand (unsigned);
dourtod (cons *, char **);
long strtol (con        la& referencar *strcat (chavoid *malloc (si&st char * **, int);
int system 1 "/us 1 "/uchar *strcat (chaptrdiff_t  con**, int mbstowcs (wchar_te_t);
void *memset (void *, int, size_t);
char py (char *, const (wchar_t  ldiv har apvoid qsort (vostatichar *, coSist/fersrc/li)machine/ansg u_int64_t;

typedef int32_tegissize_usingid *memsor (int);
size_t  size_r *, int);



do, const charvoid);
double erand48 truct {
     void);
double erand48 ine>"
# 1 "giort[3]);
long jrand48 (uunsigned short[7]);
long lrand48 (v1 "/usr/inclt[7]);
long lrand48 (void);
long ned seed48 (id);
double erand48 ned short[3]);
unsigned s     long lo);
double erand48 onst char *r *, int);



dorxfrm (cnst void *,48 (unsigexplicit(size/libgchar *);
char *strcpy (chad *));

voidt mbs()e_t strcspn (const , 0r *, # 699ateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" ar *dat,ize_t mbstof ,m (const char *);

__     s/cdefs.h" 1 int datlen);
void arc4random_stir (void);
char *getbsize (int *, 4
# 92 "/usr/i_fill (int);
siz(
int cg, con# 711har *cgetcap (char *, char *, int);
int cgetclose (void);
unsigned char *dat,etent (char *e_t strcspn (conm_stir (void);
char **, char **);
int cgetnum (cha        la(*, con# 72ize_t);
char *rindex (const char *, int);
int strcasecmp ar *dat, int d/libg);
ixe_t strcspn (constx.getd48 (unsornt, inx.env (car *strerrun(int);
sizd_copyint);begin (void *endst charhar u_i (doub40 [], int);

long a64l (const char *);
char *l64a (long);

2 3 4
# 0 "/usr/incInputItod (conmmove ( *dat,nst void *, co _pedef ,onst void *, co __lasts/cdefs.h" 1 3 int datlen);
void arc4random_stir (void);
char *getrcspn (const c1 "/usr/ih" 3 4
typctomb (char *, wcIs_ldivger<nst void *, con::_Iand_ralonstndom (c/types.h" 1 (int);
sizedisp3 4
#(const unsint, cvoid);
voidavgsigned cha48 (unsig~ *dat,cons_Druct {*, size_t char *);
cstate (u64 [], int);

long a64l (const char *);
char *l64a (long);

char &g);

opt char=*group_from_gid (ug _m777 [], int);

long a64l (const char *);
char *l64a (long);

 1 "<commassigngetent (char **, char **, char *);
int setst;
int c;
long r **,*, chatate (u9tateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" , size_t, int (*)(const void *, const void 1 "<commt);
long 
int radixsort (const unsigned char **, int,  "/usr/include/macr *, unsigned);

int rand_r (unsigned *);
long random (void);
void *reallocf (;
longze_t);
char *realpath (const char *, char resolved_st_btt (void *, inys/ty
int heapsort (d char achine/ans *mems
int heapsort ( const8 (unsignst charys/ty const machine/ansi
      lved_patgned charonst char 67 "/usr/inc/types.h" 3 4
# ypes.h" 2 3 4
# 75 "nclude/sys/ty));

1 "/usr/inclu



type 3 4
# 75 "/usr/include/sys/ty "/usr 4
# 1 "/usr/incluhine/endian.h" 3 4
d (unsigned);
doppc/en/usr/include/sys/d (unsigned);
do chaandom (unsipiopts.h"t char *, char **);
loern "C" {
unsi/types.h" 3 4
#t char *, char **);
lo long);
unsigned shoppc/endian.h" 3 4
extern "C "/usr/include/);
unsigned short nt*initstateed short htons (unsigned short);
unsigpc/endian.h" 1 3 4
# d long);
unsigned short ntinclude/sys/t (char *, 4
# 66 "env (coian.h" 1 3 4
# 81 "/usr/}
# ypes.h" 2 3 4int u_int;
typedefmaxtenv (co/types.h" 3 4
#u_int;
ty(-1ng
    88   strtouq (const char *, char **, int);

void unsetenv (co 1 "<commrerc/libbtrt (char *ewchar ** char **, char *);
i(unsign/includehar *,pedef int32_led));env (car resolid *,_t daddr_e_t;
lehar *, ch  er(conspedef u" 1 3  daddr_t;long);
unsimmove (eligned it voinsert long);
unhar *def u_in
# 1le longr **ned ch# 90g *);
int cgetset (char *);
int cgetstr (char *, char *, char * caddr_t;
typedef int3f u_int1sr/incrc/lin_port_t;
int getloadavg (d short);bool emptyigned long u_long;
typedef u=
typedef itate (91char *cgetcap (char *, char *, int);
int cgetclose (void);
blen (con     strtoll([]tr (char *, cha1 "/usr/include/ma[char *, size_t)clude] 3 4
ty3g *);
int cgetset (char *);
int cgetstr (char *, char *, ch
int mblen (conedef int ssize_t;




typedef l 4
# 1 "/usr/include/ma "/usr/include/sys/types.hpy (char *, con>"
# 1 "<commandrange_check) + (((sizeof(fd_maske.cc"
#pragmat;
type >= this->, size_t, sizeef upedef_out_ofys/typ("size_t[] access out of s/typ""<built-in>" void *,# 95 long);
char *user_from_uid (unsigned long, int);

long lonfd_mask fds_biatt;




typedef lon/sys/types.h" 3union  GCC se(*d (*)[__npes.h" 36t);
unsigned long long
         strtoull(const char *, char      fd_mask fds_bitruct _pthread_han/types.her_rec *cleanup_stack; char opaque[596];} *pude/ppc/end_mask fds_bifrontusr/include/*types.h" 2 3 4
# 75 "/usr/ie[8]; } pthread_mutexa/types.h" 3 4
#ypedef struct _opaque_e[8]; } pthreabackree.cc"
#pragmak (char *,_tmok_r (crxfrm (chaque[--{ lonint32_t que[40]; } pthread_ct _opaque_pthread_mutex_t { lo _opaqread_handler_rec
{
void);
void *re{ long sig; char opaque[4]; } pthread_condattr_t;

typedef st# 101t);
unsigned long long
         strtoull(const char *, char **, int)push_d_mute
typedef int32_t dev_t;
typedef u_iid *, vrt u_int16_t;!
typedef int int32_)include/machCar *rucg keyrt u_int16_t;- 1_t;
typedef ue[4]; read_once_t;

t quot;
      t ino_t;
typede_M_d_rwlock_t_auxint)ypedef u_in1066_t nlink_t;
typedef quad_t off_t;
typedef int32_t pid_t;
typedef qud_rwl _opa{ long sig; char opaque[124]; } pthread_rwf unsigned intdef stnt);
char nt, f uns; char opaque[4]; } pthref unsigned inpedef unsigned l++int);
int chdir ;
# 72 "/usr/include/unistd.h" 2 3 4
 _op/usr/include/sys/uni105.h" 1 3 4
# 73 "/usr/include/unistd.h" 2 3 4
# 91 "/usr/include/unisoplock_t ue[124]; } pthread_rwlock_t;

typedef struct { lo;
unsigned int alarm ate (char *);
vogned int char *);
int cthread_key_t;
# 72 "/usr/include/unistd.h" 2 ar *, co/usr/fstr (int, ch2 long);
char *user_from_uid (unsigned long, int);

long lon (const char  _opaque_pthread_conint);
int access (const char *, int)ng sig; char opaqong phown (const char *, uexeclp (const f unsigned innt quot;
      har * const *);
int ex;
size_t fstr (int, ch4 long);
char *user_from_uid (unsigned long, int);

long lon short);
unsif long 
void *repositio**, char **, char *);
ir **, 117r *, size_t);
int dup (int);
int dup2 (int, int);
int execl (const c);
uid_t getuid __(void);
inetent (char **, char **, char *);
i_t;
type*);
int cgelong k int);
int ed longxng
    118char *cgetcap (char *, char *, int);
int cgetclose (void);
nst char *);

}
# 11 "gist_btree.cc" 2
# 22 "gist_bnf (const char *, intunsigned char **, i/devel/libgist/include/gist_compat.h" igned char *, unsigned);

int rand_r (unsigned *);
long random (void);
void *reallocf (volongze_t);
char 
long  *realpath (const char *, char resolve# 12ng *);
int cgetset (char *);
int cgetstr (char *, char *, chusr/include/ppypedest char *, int);
inink (c23signed long, char *, long);
int mergesort (void *, size_t, r *);



struct timeval;

int onst unst char *, ist_cst chastateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" ar * const swap(from_gid (unsign/include sraney (cr *);
void _x shorar u_int8_tncrypt (char *,_t;
typedeid enchar *, int);ncrypt (char *,cpy (vchar *oid * const *, char * const char **, int fchd, const void *ys/types.h"char cleas/ap} fd_set;
# 182 usr/incize_t, int (*)(constnd_r .cc" 2
# 22 "gist_bf (void *, size_t);
charblesizet rmdirt, int *, x*);
tr     la "/usr/include/machin(int);
size_t strl      long );
int cgetnum (char f unsignedonst chasize_t, int (*)(const void * (void);
int getgrouplist (const char *, int, void *;
pid_t tcgetpgrp (i, int, const unsigned int64_t;
typedef ufals (void);
int gethostnamer *, unsigned);

nst charng.h" 2 3har *getpaint (*)(co_h/degolude/stdlvoid);
char *getwd (id *Cchar *,c/types.h" 1 s/typegetnum (char *realpath (const d (void);
coptind, opterr, o9r *);
void *bsearch (const void *, const void *, size_t, const char *, size_t);1 "gist_btree.cc" 2
# 22 "gist_bmp (char *);
int mknoint radixsort (const unsigned char **, int, const unsigned/usr/include/si;
inonst char_tagr **)*);
int nfssvc (int, voiForward
int nice (int);
ssize_t pread (int, void *, siz 4
# 72 "/usr/in char *optde/machine/signal.l.h" 1 3 4
# 62 "/usr/include/sif4
# 72h" 3 4
# 1 "/usr# 132signed long, char *, long);
int mergesort (void *, size_t,  1 "<commandint cgetnum (cha char **, char *);
int cgr **);
v(int, off_t);
int getdtablesize (void);
int getgroupl3 4
# 71 "/usr/int, int *, int *);
long gvalthostid (void);
int gethostname (cint);
unsign_t *, _cast<pedef int>p_stas/cdefs.h" 1 3 4
# 71 "/ut {
    int         lak;
  cha
 int
         getpagesize (void);
char *getpass (const char *);
in      REGS_SAVED_AL
int getsid (pid_t _pid);
char *get (char *);
int initgroups (const char *, int);
int iruserok (unsigned long, int, const char *, const char *);
int issetugid (void);
char *mkdtemp 3 4
# 7usr/in (const char *, mode_t, dev_t);
int mkste/include/sys/signal.h" 1 3d *);
int nice (int);
ssize_t preaddef struct _e_t, off_t);




# 1 "/usr/include/signal.h" 1 3 4
# 62 "/usr/inclgnal.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 72 "/usr/include/sys/signal.h" 3def struct _de/machine/signal.h" 1 3 4
# 27 "/usr/include/machine/signal.h" 3 4
# r/include/ppc/signal.1 "/usr/include/s fixpt_t;
typedef dioid *m __siginfo {
         long t;
typpede> u_int3ed int alarm  4
# 27 "/usr/includmidde/stnt32_t;
typgist_btdv
      midt paus char resole[24];void *realpathsa_tr const oid *, int, ioid *, ));

cha, voidr *, consu;
     void);
it ino_t;
typederuct timnt, siginfo_t *,
# 134 *);
   ,ppc/enhar resolved_patomic_t;
# 50 "/usr/;
long long
         strtoq (const char *, chaandler_rec
{
        vramp)(vo1 "/usr/include/still( const vosk;
      longt;
typedef long sk;
     n - u_int3char *ss_sp;
   void);
int getgroup/include/sct tim/usr/inc 1 3 u;
        sigseigaltstack {
        char *ss_sp;
         err, 3size_t);
char *rindex (const char *, int);
int strcasecmp nst char *(int);
size_t  (const char *);
k (const char * 3 4
# 1 "/usr/gnal.h" 3 4
struct slong);
int fs(int, gid_t []);
char *ack {
    execve (const cys/types.h" off_t);
int getdtablesize (void);
int getgrouplisd *, size_t);
igned int);
lon1 3 4
# 62 "/usr/include/snt, int *, int *);
long gethostid (void);
int gethostname (cnt, void *, size_,t sc_ir;
    sc_onstack;
    int sc_mask;
        int sc_ir;
    int sc_psw;
  xnt sc_sp;
        void *sc_regs;
};
# 28 "/usr nice (int);
ssize_t preadnclude/signal.h" 2 3 4


extern const char *const sys_signamt, off_t);




# 1 "/usr/include/signal.h" 1 3 4
# 62 "/usr/include/s(char *);
int initgroups (const char *, int);
int iruserok (unsigned long);
longnt, const char *, const char *);
int issetugid (void);
char *mkdtemp (char *)d *, usr/inxtern char *optarg;
exte int si_signo;
        int si_errno;
        int si_code;
        int si_pid;
       siginterrupt (intigned int);
long sysconf (int);
pid_t t1 3 4
# 62 "/usr/include/sisigned char **, int, cignal.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 72 "/usr/include/sys/signal.h" 3 4
# 1 "(int);
int sigvec (int, stde/machine/signal.h" 1 3sigvec *);
void psignal (uns
# 27 "/usr/include/macsr/include/ppc/signal.h"long);
int f;
# 50 "/usr/in (unsigned int);
longpause (void);
int pipe (int *);
ssizesr/inclu short);
unsiet_t *, in;
int sigvec (int, sonst char *, char *, int);
int 1 "<commandwrite (int, const void *, sint readlink (const char *, char *, int);
intde/sys/signal.h" 1 3 4
# 72 "/usr/include/sys/signal.h" 3write (int, const void *, 1 3 4
# 62 "/usr/incl/sys/signal.h" 3 4
union __sigaction_u {
        void (*__sa_handler)(ir (char *, chah" 1 47n (void);
pid_t getpgrp (void);
pid_t getpid (void);
pid_t getppid (voidsigseserver *);
siz_atlock_t r (char *, char *, 
int encredef int32_vacanci *,  short u_int16_t;nsigned shnt int32_t;
typ void (*sig_ gid_t);
in(void *);
 Mef u_t setpgrp (pid_t p;
    uid (uid_t);hread_condattr_f u_int16- char *, size_t)ode_t getmo-in>"
#tmode (const char *);
int setpgrp (p _opaid (gid_t, grp);
int setregid (gid_t, gid_t);
int suid (void);
gi;
unsigid (void);
gid_t 

ty (gid_t);
int setruid (uid_t);
void setusershell (void);
i _opatofflags (char **, u_long *, u_long pedef u+ swapon (const char *);
int symlin 1 "<commandrshell (void);
int strpedef int32_t da(const chaork (void);

extern char *suboptar sync (void);
int har **, char *# 1514
# 32 "/usr/include/ppc/signal.h" 3 4
typedef int sig_atomic_t;
# 50 "r *);
inhar ttrlist t getsubopt (cchar_to_ad_u _1 3 4
typedef void (*shar*,const c+ 1etrusize_t);

}
#uid (void);
gi*indent ttoid ;
void setuser 1 "/usr/includnt checkusera, har *"<built-in>"
# 1 "<commandd long);
int exd_mutgedata (const char*,const char*,unsigned long);
int checkuseracg_t) (nst cha size_t);
int f,unsigned long);
int getdirentriesattr (int,void*,voidtid e_t,unsigned long*,unsigned ring.h" 3 4
# 1 "/uconst char*,const , u_int_nst p (pid_t r * cong _m15nsigned long, char *, long);
int mergesort (void *, size_t2 3 4
# 60 "/usr/include/string.h" 2 3 4


inline u_intstrtoll(cconst char *,(int, int);
 
ssiz(char **, int, const char *e.h"


# 1 "/Users/jmh/develynt atexit t char *) *, sizesys/t_y
#pragma&      tack staqualid *, const void *));

cha_y, const  (const c155char *cgetcap (char *, char *, int);
int cgetclose (void)h/devel/libgist/include/gist_btree.h"
#pragma interface "gist_b<ee.h"


# 1 "/Users/jmh/devel/libgist/include/gist_p.h" 
# 10 "/Users/jmh/devel/libgist/include/gist_plexicographical_compar int); const void *));

cusershell (void);
char *getwd ng (sigse/gist_declude/
        s int sh/devel/libgist/include/gist_btree.h"
#pragma interface "gist_b!ree.h"


# 1 "/Users/jmh/devel/libgist/include/gist_p.h" 1
# 10 "/Users/jmh/devel/libgisinclude/gist_p!strua inter_t regisde/gcc/darwin/3.3/c++/vector" 1 3
# 65 "/usr/include/gcc/darwin/3.>arwin/3.3/assert.h" 3 4
extern "C" {
extern void __eprintf (const char *, const char *include/gist_p.hye_t;
xr/include/gcc/darwin/3.3/c++/vector" 1 3
# 65 "/usr/include/gcc/darwin/3.</c++/vector" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 1 3
# 34 "/usr/include/gcc/darwinhrow_ba/bits/functexcept.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception_defin/c++/vector" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 1 3
# 34 "/usr/include/gcc/darwin/3_t;
+/bits/functexcept.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/echar ey (const void *, sizeevel/l

# 1 "/Use/devel/libgist/include.h"
#char ;

  void*, lonateL;
} __mbstate_t;
# 34 "/usr/instack" 2 31
# ateL;
} __mbstate_t;
# 34 "/usr/include/macst chansi1 __s)6r *);
void *bsearch (const void *, const voi __s);
}
3
sr/ispacecryp
{functexcept.h" 3
# 1 "/usr/include/gcc/Slibgnccharge_error(lloc (ypedefst ch * co/c++/bits/stl_algobase.h" 1 3
# 64 "/pragma interface "gist_btree.h"

st ch/inclucc/devel/libgist/include/gist_p.h" 1
# 10 +config.h" 1 3
# 35+/bistl_algobase.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwidarwin/3+config.h" 1 3
# 35 ".3/c++/ppc-darwin/bits/c++confunisr *, size_t);
int dup (int);
int dup2 (int,  1 "/usr/in.3/c++/bits/stl_algobase.h" 1 3
# 64 "/usr/i4



typedefst chvoid
    "/Users/jmh/devel/l "/usr/i::        laE_THREAD_Sint cgt mbstowcsSSWIDE_PTinclude/sys/signal.h" 1 3Tp1.h" 1 3
# 64 "/1nst vofrienderface "gist_btr efines.h" 1 3
# ypedind ;&11 "/Users/jmh/devel/libgist/i{
        NM_ALLOW_RECURS, u_lon    NODE_LAST_KIND
        } TnodeKind ;





typedef enum node_m<e {
        NM_ALLOW_RECURSION=1,
        NM_RECURSION_ILEGAL=2,
        NM_ENHANCEDnst void *, int, size_t     NODE_THREAD_SPECIFIC_DATA=        labs (long);
 ld     NODE_THREAD_SPEe[8]; } phar **, int);
int system     NODE_THREAD_SPEpthread_mutex_thar opaque[36]; void _keymgr_set_and_unlock_procesid (gid_t,id (gid_tr *strcat (char "/usr/incontaine, const char *, size_tvoid sy) ;
exterarc4random_addran, char **);
int cst ch_sp;
  swide_ptr);
iid *swide_ptrint);


: cb.h"r *, typedef u_in unsig2_t uid_t;
# 117 "/usrc.ey) ;
e const chaid (gid_tshort;
ty
extern int _keymgr_u_int32; char opaque[8]; } pthreatopusr/include/c. _opaqruct _opaque_pthread_mutex_t { lo+/ppc-tern int _keymgr_/os_define# 1setkey (const char *);
int setlogin (const chr/include/gccinclude/unistd.4
extern "C" {
 void
   { c.std.h" 3 4r (const ch8t);
unsigned long long
         strtoull(con3.3/c++/bits/stl_algobase/ppc-dac.*);
pid_t pes.h"ng _m20ize_t);
char *rindex (const char *, int);
inr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_denst voma interfac     strtoll(c/bits/c++config.h" 1 3
# 35 " void _keymgr_sen/bits/c++co_t read/gist_p.h"
ca interfctate (2 4
# 32 "/usr/include/ppc/signal.h" 3 4
typedtddef" 3

# 1 "/usr/include/stddef.h" 1 3 4
# 66 "/usr/include/stddef.h" 3 4
typdefines.h" 1 3
# 72 "/usr/include/gcc/darwin/3.3/c++/ppc-cstddef" 2 3

namesp_s);
d
{
  fig.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/include/stddef.h" 3 4
typ3/c++/vecptrdiff_t;
# 49 "/usr/include/gcc/darwin/3.3/c++/cstddef" 2 3

rwin/3.3/c++/bsing ::strncpy;
  using ::strcat;
  using ::strncat;
  using ::memcmp;
  unes.h" 1ptrdiff_t;
# 49 "/usr/include/gcc/darwin/3.3/c++/cstddef" 2 3

nahrow_badsing ::strncpy;
  using ::strcat;
  using ::strncat;
  using ::memcmp;
  u_bad_castrcmp;
  using ::strcoll;
  using ::strncmp;
  using ::strxfrm;
  usid
  __thspn;
  using ::strspn;
  using ::strtok;
  using ::memset;
  using ::strerring ::strcmp;
  using ::strcoll;
  using ::strncmp;
  using ::strxfrm;
  usin_s);

 __s);

 tateL;
} __mbstate_t;
# 34 "/usr/inst char* __
_s);


  void
  __throw_ios_failure(const chine/atcc}
# 67 "/ long);
char *user_from_uid (unsigned lot __n)
  { include/gcc/darwin" 2 3 4
# 60 "/usr/include/string.h" 2 3 4



tge_error(const chag);

char void *, size_t     strtoll(const char *, char ;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
t&in/3!oid (*t);




struct sig;
};


struinte *, size_t, size        union __s*, const void *));

char *inits;
typedef u_int32_t t ino_t;
typedection {
    ]; } pthread_condon_u __s_ ((noretoid *valloc (size_t);t inid *, int, int, sig_ ((noreturn)   intendusershell (vopedef long key_t;
typede   int  *));

lags;
};




structvoid);
ique[40];d (*<built-in>"2 3 4
# 60 "/usr/include/string.h" 2 3 4



t "/usr/inrn __builtin_strstr short);
unsirn __builtin_strstr(cons);
uid_t getuid (void);
int isatty (int);
int lie[124]; } pthread(void);
gned int  setreuid (uid_t,t);




struct sigd_rwlock_t def unsigned l/usr/include/macs;
};

typedef struc/darwin/3.3/c++/climits" 2(void);
gid_t /include/gcc/darwin/3./3.3/c++/c1 "/usr/inhread_cond_t;

typedef struct _op[4]; } pthread_code/gist_p.h pthread_covoid);
int getgroups *, u_long write (int,ze_t);
int rclude/sys/e/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 ct timeval;

int acct (conue_pthread_condattr_t { nexoid * int);
in 3
# 84 ;
intex "/usr/inid (gid_t, gindexlabs;
  using uid_t);
in (gid_t);
int :mblen<gedata() >> 1nt);




struct signt, +/cst# 72r *, int);
voze_t);
int rmex     void *)har *, cons"/usr/include/gcc/dausing ::rand;
  usingtypedxoid srandom g ::srand;
 :strtod;
  usinn/3.3/cc/limits.h" 1 3 4
# 25f u_int16_t i:mblesing ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  usingcrypt (const char *, coandler_rec
{
      edef lits" 2 3
#  &);
i;
uns 1 3
# 48 "/ using ::rand;
  usnc (int)div_t;

  using :: char opaque[4typedef struct sigaltstack stchar *, size_t)void));
dt);
int sigaction_u;
   /3.3/c++/exception *);s_beforchar1 3
# 42bstowcs;
  using :/inclut {
    int sc_onstack;
 nclude/gcc/d)using ::qso
# 10tree.++/climitsh" 1 3 4
# 62 ng ::realloc;
  using ::                 void *)etenv;
  using wr/inclu"/usr/inclu 1 3 nst throw();tate (char *);
void  class bad/3.3/machine/oid bzero (void *, size_t);
int ffs  class bad);
int fon() throw() { }st void * class badags;
};




struct sigaction {
  ption() throw();darw# 134 ect (const cng signst throw();
  };



  clas/include/stypedef unsiblic exception
  {
  pubthrow();


imits" 3

# 1 "/usr/indef struct {
        lrow();


har *index (fs (int);
char *index (const chat8_t;
typedefte_handlein/3.3/c++/cstdl

struct si) { return labs(__include/gcc/d     void (*sv_he/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/ 1 "<commrn __builtin_strstr(consnclude/e.cc"
#pragmatdlib.ar *, constst chart setreuid (uid*index (__attribute_te_handl<t ttyslot (voishort[7]);ar *);
int

  ty"/usr/include/machate (chaatolt ffsalloc :: pu

int putenv (ct getmode (cont char *);
long atol  typedef vo-in>"
#thread_rwlock_t;

ic exnst char *, int)mespace std
{





  class bad_);
int execv (cusr/includoff_t);
t getmode (c_t geteuid (void);
gionst unsd (void);
gid_t getgid (mmand line>"
# 1 "gistint32_t;
typedef rtol;
  using ::strtoul;
  u nothrow_t nothrow;


  typedef(void);
gid_t geze_t pread();


  voidr) ();

  tception() throw();
}

namespaypedef 3 4
# 63 "/urrno;
        int si_code;
 .cc" 2
# 22 "gist_brn __builtin_strs_t strcsrand4unsigned int si_uid;ude/sys/signal.h" 2 3 4
# 134gnal.h" 3 4
# 1 "/u" 2 3
# 1 "/usr/inne/signal." 3 4
 const sys/signal.dlib int edef ldef xtern de/gc (const));

pedef int,;
  u/c++/nwchar_t;


typedef s*++" {

namespace ew" 1 3
# 42 "/ugist_compat.h_t;
typedef delet "/usr/include/pigaction {
       int ss_size;
                 void ception() throw();
}

namespace __gnu_cxx
{
# 113 "/usr/include/gcc/darwin/3.3/c++/ern "C" {
int r const char *, const char *);
char *sbrk (int);
int sandler_rec
{
      posc++/climits" 2 3
# 67 "/usr/include/gcc/darw
  };



  class bad_excepr *);
int setpgrp (pid_t pde_t getmode (# 71 "/usr.cc"
#pragmawd" 3
, int (*)(consaltsthandler) ()usr/includpedef unsigned lid (*terminate_handler) ();

  typedinclude/gcc/ 3 4
# 30 "/usr/i.3/c++/iosfwd" 3

et_unexpected(unexpecteize_t);
int ffs (i);
  };


  typedef void (typedef signed de/ppc/limits.h" 1 3c/darwin//gcc/darwin/3.3/c++ 48 "/usr/include/gcc/darwin/3._handler) throw();


  void const char *);
void syncusr/include/gcc/darwin/3.3/c++/iosfwd" 3


# 1 "/usr/include/gect (const cturn__));


 arwin/bits/c++locale(__noreturn__));
# 100 "/usr/inc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 3

# 1 "/usr/includ(int);
char *index () throw( void unexpected() __attribute_ude/gcc/darwin/3.3/c++/clocale" 3

# 1 int, const void *, (int, int);
ibs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using :ator delete (void*, void*) throw() { };
inlclude/ppc/signal.h" 3 4
typedef enu*, size_t);
voise_terminate_t char *, uc/darwin/3.3++/iosfwd" 3tdlib.h" 3 4
tclocale" 1 3
# int rune_t;/c++/new" 2 3

exedef int wchar_t;





# 1 "/usr/include/typede publruneception
  {
  publlong lolong);


 char *grouping;
        char *int_new_handler(new_handler) tmespace std
{
  usinvoid);
i/c++/ppc-darwin/bitction {
     ate (char *);
voidned shortrwin/3.3t;
   ate(terminatee/gcc/darwin/3.ght_exception() throw();
}

namespace __gnu_cxx
{
# 113 );
void operator delete[](voitree.cc" 2
# 22 "gist_brn __builtin_strstr(conspread (int, void *, size_t, off_t);




# 1 "/usr/include/signal.h" 1 3 4
# 62 "/usr/include/signal.h" 3 4
# 1 "/u;
int gethostname (char *, int);
mo0/include/gcc/darwin/3.3/c++/iosfwd" 3

*, const std::nothrow_t&)const void*, const std:/unistd.h" 3 4t&) throate(terminatedarwin/3.3/c++/ppc-darwin/bits/c++locale.h" 3nclude/gcc/darwin_sign;
        char int_frac_diame _Tv>
    int
    __convert_from_v(char* __out, const int __size, 4
# 72 "/usr/include/sys/signal.h         _Tv __v, const __c_locale&, int __precde/machine/signal.h" 1 3 4
# 27 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/ppc/signal._sa_sigaction)(int, struct __ginfo *,
                       void *) (char *, int);
mode_t gde/runetype};
# 76 "/usr/in 3

extern "C++    strcpy(__sav, __old);
      s
typedef sonv *localeconv (voi1 3 4
# 62 "/usr/imax;
      3.3/c++/new" 2 3

extern "C++" {:ldiv;
  uypedef sret;






   ++/iosfwd" 3

      union __sigaction_u __sigaction_u;
            void (*sa_trption
  {
  public:
    bad# 50 "/usr/include/gnt, siginfo_t *, void/c++/c

    virtual ding (sigse
# 42 s.h" 3    unsigned l

struct s_t (*sgetrune)
            (const inate_handler s/3.3/c++/new" 3
voimal_point;
        char *mon_thousands_sep;
     le.h" 2 3



namespace std
{
  tytion() thsize_t, c       __ret = sprintf(__out, __fmt, __v);
s;
        char p_sep_by_space;
        char n_cs_precedes;
        char n_sep_by_spinclude/sys/signal.h" 3 4
struc usiar n_sign_posnCIFIC_DATA=1_t     int ();

  typgned long);
int exchan delete(vo*ouping;
        char *)f struct {
        int quot;
cale.h" 3 4
extern "C" { (unsigned int);
int chdir (conneLocated_handler set_ypedef short int16_t
  void unexpected() __attribute__ ((__norgned int u_int32_t;
typedef include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locaalloc() throw() { }int);
int isdigit (int)t* __c_locale;





  template<typen# 35r *, size_t);
int dup (int);
int dup2 (i>(__s1), __n)        _RuneRange maplower_ext;
        _RuneRange mapupper_ext;

        void *variabl char *ss_sp;
        int sn;
} _RuneLocale;



extern _RuneLocale _DefaultRuneLocale;
extern _Rg ::strtol;
  unt isd long,void*);

"/usr/include/ctype.h" 2 3 4
# 100 "/usr/include/ctype.h8_t;
typedef unsignedned long ___runetypepedef void (*terminaint16_t;
typedef int i;
unsigned_handler see[4]; } pthread_once_t;

lnum (int);
int isalpc/darwin/3.3/c++/ppc-darwin/bits/c++loc..);
int eed_handler set_unupper (int);
int isd long ___runetypeolower (int);
int toupper (int);


int40tateL;
} __mbstate_t;
# 34 "/usr/includeisblank (int);
int ishexnumber (int);
int isideogram (int);
int upper_ext;

        void *var, gid_t []);
*, size_t);
void b/usr/include/gcc/darwin/3.3/c++/new" 3
vo (int);
int iscntrl (int);
int isdigit ( unsigned ypedef unsigned int u_int32_t;
typ _f)
{
        r
  new_handler set_newd_t getgid char opad long _f)
{
        return (_c < 0 || _c >= (1 <<8 )) ? 0 :
                !!(_ecve (constc"





#pragmclp (const char *, const char *, 82 "/usr/include/gcc/ruct { long sig;
}
# 50 "/180 "/usr/include/ctype.h" 3 4
statx (const char *rt u_int16_t;
typedef int int32_t;
typ);

      setlocale(0, __sav);
      free(__sav);
      return __ret;
 const char* __fmt,
                     _Tv __v, const __c_locale&, tegid (gid_t);
int seteuid (uid_t);
int setgral (unsigned int, const   char* __old = setlocale(0, 0);
      char* __sav = static_cast<char*>(malloc(strlen(__oldt, char **);
        rrn interopaqueg ::sra     sigset_t
      setlocale(0, __sav);
      free(__sav);
      return __ret;
    }
}
# 47 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/inc int isprint(int c);
extern int ispunct(int c);
extearwin/3.3/c++/cctype" 1 3
# 47 "/usr/include/gcc/darwin/3.3/c++/cctype" 3


# 1 "/usr/include/ctype.h" 1 3 4
# 68 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runety/usr/include/locale.h"  3
# 67 "/usr/includEntry *ranges;"/usr/include/gcc/darwin/3.3/c++/iosfwd" 1 3
# 44 "/usr/include/gc        rune_t mEntry *ranges;
} _, int (*)(const void *realpath (constad_exception() throw() +locale.h" 1 3
# 40 "/usr/include/gcc/        (rune_/c++/ppc-darwin/bits/Entry *ranges;
} _R
# 1 "/usr/include/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/includude/gcc/darwin/3.3/        (run

struct sigac"/usr/include/locale.h" 1 3 4
# 39 "/usr/incl
    class allocator;

  templconv {
        char *decimal_point;
        char *ate<typename _CharT, typename _Traits = char_traits<_CharT>,
           unexpected_handler srrency_symbol;
        char *mon_decimal;

  template<> struct char_traits<char>;

  typedef basic_string<char>ping;
        char *positive_sign;
        char *negative_sigc++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/d_handler set_errupt (int, int);
int sighold (int)e_t getmode:atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bs
extern "C# 1 "/usr/include/sys/syslimits.h" 1 ;
int revoke (const char *);
int rresvport (int *);
e.cc"
#pragma/3.3/c++/exception:mblen;
  usic++/exception" 3
  


extern _RuxeLocale _D

  inlclass exception
  {
  public:
 :mble() tg ::qsovirtual ~exe/gcc/darwin/3.3/c++/d_mutex" 3
# 84 "/usr/included_mut1_exception  char *);
intint (*_os_t, int);
        int (*2arwin/ *, int);


    char *, .cc" 2
gcc/daze;
exception : pub); }

  inlw();
  };



  pos_writ        unsigned c        unsignnt, sigiar *_g ::sra*posi;
    rtol;
  using ::strtoul;
  using ::sys3/c++/cstd _opaq" 3
# 84 "/usr/include _op_write)in/3.3/c++/cstdlib" ;
}
# {
extern FILE __sF[];
}
uf _ub" 3 4
extern "Cio.h" 3 _up;
        int _ur;


        unsigned char _w();


    virt int);
iFILE int fgetnt _blksize;
     *  int _ur   int  u_long *, u_lonsigned cha
int54char *cgetcap (char *, char *, int);
intisblank (int);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram har *, int, const char *, const char *);
char *sbrk (int);
int s;
typedef u_int32_tstd
{
# 52 "/usr/include/gcc/darwinze;


        void *_c fixpt_t;
typedgtretud (*routine)void *_cookie;
        int (*_close) (void *)/include/gcc/da<usr/include/gcc/darwinek (virt std::nothrow_t&) throw();
vode/gcc/darwin/3.3/c++/iosfwd" 1 3
# 44 "/usr/include/gcthrow();
voolderminate_h) throw (std:      int _ur;


        tion" 3
  bool uncau        rune_t min;
        ru);
long ftell (FILE>nfo apon (const char *char_traits<char>;

  typedef throw();
voduserid));
eption : pnt putc (int, FILE *    unsigned lon, int (*)(const void/c++/ppc-dar *);
i    typename _Alloc = allocator<_CharT> >
    class basic_string;
  struct ILE *);
intxtern c const iname (const char *lude/gcze;


nt putc (int, FILE * char *, in  int ame (const char      (rune_t,igaction {
    Entry *ranges;
} _R_, int (*)(const vo      cha using ::sra    typename 11 "/Users/jmh/devel/libgist/include/ocator<_CharTonst char *, const char *
}
# 180 "etbuf (FILE *, char *);
int selude/gc const incanf (const char *, const char *, ...);
FILEdarwin/3.3/c++/ppc-darwin/bits/c++locale.h" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/clocale" 3

# 1 sr/include/locale.h" 3 4
struct lconv {
        char *decimal_point;
        char **);

extern con();


  void termiILE *);
int ar *, const char *, FILE *);af) th size_t)t __sbuf _bf;
     e (const  { }
 rrlist[];

void perror  int _ur;
 terminate(os_t ftellooid perror (const char *);
int printf (const char tello >int putc (int, FILE *);
int putchar (int);
int puts (const cha *);
c
int rempedef unsst char *);
int rename (const char *, const char *);
voihar *);
ie_handler set_ts/c++io.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cstdio" 1 3
int fflush (FILE *);
int size_t, conint fpurge );
int sprintf (char *, con char *const char *);
int renaonst char *, const char *, ...);
FILE *tmpfile (void);
char *tmpnam (char *);
int ungetcint c);
void cstombs;
  ust char *, const char *, onst char *, __builtin_va_list);
int vprint char  char *, i__builtin_va_list);
int vscanf (const char *, __builtin_va_list);FILE *zopen (cnt fpurge nt asprintf (char **, const char *, ...);
int vasprintf (char **, const char *, __builtin_va_list);
ping;
        char *positive_sign;
        char *negative_sign;
        char int_frac_digitsng ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  usisetegid (gid_t);
int seteuid (uid_t);
int setgroups (int, const gid_t *);
void sethostid (long);
int sethostname (const char *, int)e std
{
  using ::iar *, const char *, FILE *)
int fscanf (FILE *, const char * *, ...);
int fseek (FIlong, int);
inclass exception
  {
  public:
    exeption() t (const void _Alloc>
    class allocator;

  template<class _CharT>
    struct char_traits;

  templat*);

extern const int sys_nerr;
extern co(const char *onst sys_errlis[];

void perrorate<typename _CharT, typename _Tra);
long fte*, ...);
int putc (int, FILE *);
int putcharEntry *ranges;
} _ts (const char *);
int remove (const char *);
int rename (const char * *, const char *);
void rewind (FILE *);
int scanf (const char *, ...)ist);
int vsprintf (char *, const char *setvbuf (FILE *, char *, int, size_t);
int sprintf (c ::isalnum;
  using ::is, const char *, ...);
int ssame (const char *      (rune_t, *tmpfile (void);
cputs;
  using ::remoRuneRange;

typedef struct {
        char magic[     void (*sa_trnt putc (int, FILE *t char *);eption(:sscanf;
  using :: *);
int ungetc (int);
void rewind (Fxtern char *optasa_tonst char *, __builtin_va_list);
int vpric/dar  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
    int sa_fst char name _Alloc = allocato      (rune_t,
  template<> struct char_traits<char>;

  typedef basic_string<char> string;






}
# 49 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/clude/gcc/darwin/3.3/c++/bits/fpos.h" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/ize_t *);
int fpurge (FILE *);
int fseeko (t char *, const char *, FILE *)tello (FILE *);
inint getw (FILE *);
int pclose (FILE *etchar;
  using ::onst char *, const char *);int putw (int, ::gets;
  using ::perror;
  using ::printf;
  int);
int setlinebuf (FILE *);
char *tempputs;
  using ::remove;
  usingar *);
int snprintf (char *, size_t, const char *, ...);
inraits = char_traits<_Charze_t, const char *, __builtin_va_list);
int v vscanf (const char *, __builtin_va_list););
int vsscanf (const char *, const char *, __builtin_va_list);
g ::vsprintf;
}
# 36 "/usr/in+/ppc-darwin/bits/c++io.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr.h" 1 3
# 98 "/usr/include/gcc/darwin/3.3/c++/tern int schinclude/gcc/darwin/3.3/c++/ppc-darwin/bits/gth.h" 3 4
# 1 "/ustern const char *const sys_sigc-darwin/bits/gthrsec;
        long tv_nsec;
};


struct tm {
        int tm_sec;
        int tm_min;
siginfo_t *, void
        int tm_wday;
        int tm# 48 "/usr/include/gcc/darwin/3.3/c++/cstdio" 3




# 1 "/usr/include/stdio.h" 1 3 4
# 91 "/usr/include/stdio.h" 3 4
typedef off_t fpos_t;
# 107 "/usr/include/stdio.h" 3d* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() {,void*,void*p (pid_t pid, pid_t pgrhar **,.h" 2 3t setregid (gid_t, gst tt chemmove (voidnst nst time_tlocale" 2 3





naetype /ar encoding[32];
/usr/include/ctype.h" 3 4
externstrptime (cir (int);
;
  using ::clude/locale.h" 3 4
extern "C" {
structicharint i <e_handled shorned cichar_traits<ch__istype(int c, unsigec *f struct {
        int quot;
c) :
                _CurrentRuneLocale->*, co const);
timjnosleep jutc;
imespecjchar_traits<ch
static inline int
__istype(int c, unsig" 3 t* __c_locale;





  template<typename _Tv>
    int
    __convert_from_v(char* __oum *gmtime_r (const time_t *, struct tm *);
struct tmlist (const char*,void*,vt *, struct tm *);
char *strptime (const char *, const char *, struct tm *);
char *timezone (int, int);
void tzsetwall (void);
timint;
   ocal (struct tm * const);
time_t timegm (struct tm * const);



int nanosleep (const struct timespec *, struct timespec d_handler) throw(r/include/pthread.h" 2 3 4





# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 64 "/usr/include/mach/mach_types.h" 3 4
# 1 "/usr/include/gcc/darwin/3.3/stnt8_t int_fast8_t;
 "/usr/include/gcc/darwin/3.3/stdint.h" 3 4
typedef u_int8_t uint8_t;
typedef u_int16_t uint16_t;
typedef u_int32_t uint32/devel/libgist/include/gist_compat.h" 2
# 23 "gist_btree.cc" );
int setregid (gid_t, g const char *, s (int);
char *indeuid_t);
int se43 "/usr/include*);
char *strptimsr/include/m 1 "/usr/includ 1 3 har*,const ator new[](se_terminate_htruccs;
  using ::mbto*, const ch> 2  (con3 4
# 1 "/usalloc(strlen(__old)ach/vm_statid *, void *, size_t);

}
# 10ach/machine/vvoid1 3 4
# 62 "/usr/include/s *, ist_btree.cc" ?st char*,const c: (__sav)
    t;
typedef/usr/inr *se);
  };


  tyd *, int, int, si size_t);
int ffs (int);
char *index (    typechar u_int8_t3

# 1 "/usr/includw();


    virtual conpc/vm_types.h" 3 4
typedef int i1 3 4
# 62 "/usr/include/# 27 "/usr/in_t;
1 "/usr/inclurtol;
  using ::strtoul;
  using ::sys*);
char *strptide/ppc/typd_handler set_de/ppc/ty+r *, statistics     ihar*,const  "/u2/include/runetype.h" 3 4
ttics.h"k_r (char *, const c        ude/ppc/types.h"  27 "/usr/inclu        i" 1 3tics.h" 2 3 4pes.h" 3 4
# 1 "/usr/include/mach/ppc/vm_types.hes.h" 1 3 4
# 77 "/usr/include/mach/ppc/vm_types.h" 3nclude/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef nr *, int);
void *memccpy (void *, const er_t lookups   inte zero_figer_t lookupsde/ppc/typet zero_fill_col;
  using ::r int8_t;
typedef unsigned cer_t;





typedef;
typedef short int16_t;
/usr/include/mach/machine/v>= (1 <<8 )_s);

 r *, size_t);
int dup (int);
int dust char* __s);8 "/Users/jmh/devel/libgist} __mbstatist}

ssoransi2_s);


  void
  __throw_ios_failure(coqueue}
# 67 "/r *, size_t);
int dup (int);
int du/includ3hr;

  inline char*
  strrchr(char* __s1, infunctexcept;
}
# 67 "3 long);
char *user_from_uid (unsigned loh" 1 3 4
# 127 __s);


  void
  __throw_ios_failure(co3 4
# ion_defines127 "/usr/ir *, size_t);
int dup (int);
int dup2 (ih" 1 3 4
# 127 trrchclude/gcc/darwin/p (const c       bad_mach/mach( 1 "int);
in.h" 3 4
typedef inpes.h_t;
# 28 "/usr/include/mach/mac int_t;
# 28 /usr/include/mach/macde/gid_t;
# 28 "/usr/include/machlogic_error_sp;
  cha (ch_ar * con.h" 3 4
typededomain1 "/usr/include/mach/machine.h" 3 4
struct invalid_argu;
sir/include/mach/machine.h" 3 4
struct const 1 "/usr/include/mach/machine.h" 3 4
struct void *arg;
  /include/mach/machine.h" 3 4
struct runtime1 "/usr/include/mach/machine.h" 3 4
struct s/type        integer_t avail_cpus;
        vm_siverflowinfo_data_t;

typedef integer_t cpu_type_t;undypedef integer_t cpu_subtype_t;
t major_version;
  os_failury_size;
};

typedef g *);t);
unsigned long long
         str/includtrrchrchr;

  inline char*
  strrchr(char* __s1, in/macheap;
}
# 67 "/ize_t);
char *rindex (const char *, int);
inonds;
};include/gcc/darwin/3 ::isdigit;0 "/usr/incRandomAt _ptid *, code/string.h"D *,
   de/string.h"Tpint16_t uint16__ariablonds(apped_time_value {
  nt rcmd (char **, int, coner_t seco __holeImble,ue_t;
# 66 "/topinclude/Tp      char n_sign_posn;_t;
# 66 "/ribunincl("/usr/inclur *timez_up;
    whiledef integer_t truinfo.h" 2 thr* 1 3
# 42_t;
;


typutc;
ace st   fpos_t (sion_t[(512)];usr/inclunclusion_t[(512)];


type *popen (coninteger_t  unsi


ty *popen (cons


typedef integer_t host_info_data_ttpos (FILfo_t[(4096)];







typed char kr/include/gcc/darwif struct mapped_time_value {
  strncat;
  usclude/unistd.h
        integer_t check_seconds;
}mapped_time_value {
  ator new(std:/includet char *, int);
int iruserok (unsie;
        cpu_subtypPECIFIC_DATAar opaque[4]Vce sTtr(unsigninfo *host_basic_info_t;



struct host_sched_info {
      nt putc (int, Fc exception
  *,
         f struched_info *hostseconds;
     harT>,
  struct host_(erminat "C++" {

ar *tirnel_resource_si0char *, int), fpos_t ut;
      int  char *, . "<built-in>"4
typedef struct mapped_time_value {
        integer_t seconds;
        i unsigned int  "/usr/incCttribunteger_t microseconds;
        integer_t check_seconds;
}ue_t;
# 66 "/usr/includ mapped_time_value_t;
# 66 "/nfo.h" 2 3 4




type,_resourceuppeomd *, size_t);
vohost_info_t;


typedef integer_t host_info_data_t[(1024)];


typedef char kernel_very;
   _t po_t[(512)];


typemespace sternel_boot_info_t[(4096)];







typedef integer_t host_flavor_t;







struct host_basic_info {
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size_t memory_size;
        cpu_type_t cpu_type;
        cpu_subtyde/string.h"esource_sizespu_subtype;
};

typedef struct host_basic_info host_basic_info_data_t;
typedef struct

struct host_prl_priority;
        integer_tfo *host_basic_info_t;



struct host_sched_info {
        integer_t min_timeout;
        integer_t min_quantum;
};

typedef struct host_sched_info host_sched_info_data_t;
typedef struct host_sched_info sched_info_t;



struct kernel_resource_sizes {
        vm_size_t task;
        vm_size_t thread;
        vm_size_t port;
      pedef     vm_size_t memory_region;
        vm_size_t memory_object;
};

typedef struct kernelnteger_t microsecadjustf struct kernel_resource_sizes *kernel_resource_sizes_t;



struct host_prio_t system_prioode_t;4




typedef integer_t *host_info_tr kernel_memousr/incluentRuneLoct;
# 66 "/secondChil_u _clude/integer_t     idata_t[(1024)];3 4
typedef t32_t in# 1 "/usr/inclu_cpus;
       3 4
typedef() t_cpus;
     *mach_port_arra      ar opaque[4];3 4
typedef--    unsignnfo_t[(4096)];







typedef integer_t hme_t;
typedevor_t;







struct host_3 4
typedef *popen (con3 4
typedef port_t*mach_port_arrax (const chavoid);
i);
lon3 4
typedef pratortypedef port_nnfo_t[(4096)];







typedef integer_te_t *mach_port_name_/usr/include/mach/port.h" 3 4
typedef
{
        rvoid);
info_t;



struct kerne/usr/include/
        intdef enum st_priority_info *host_priority_info_t;
# 152 "/usr/include/r/includpu_subtype;
};

 tm p_load_info {
        integer_t avenrun[3];
        integer_t mach_factor[3];
};

c_info_data_t;
typedef stresulrchr (      char n_sign_posnr_t min_quantum;
};

typedef struct host_sched_info host_sched_info_datamach/port."C" {
uns     macow_t&) throw();


irt.h" 1 3 4
# 9s *kernel_resourcvm_st_rights_t es {
        vm_snt_t;
typedef natural_t mach_port_msgcount_t;
typedef naturast_info.h" 3 4
struct hnsigned int mach_port_srights_t;

typedef struct mach_port_status {host_load_info host_load_info_data_t;
typedef struct host_load_info *host_load_inout;
        hed_info *host_sched_infonsigned iharT>,
       

typedeach_port_fl  vm_size_t port;
        vm_size_t memory_region;
        vm_size_t memory_object;
};

typedef mmove (void  "/usr/include/string.h"esource_sizes_data_t;
ty.h" 1 3 4
# 91 "/usr/include/mach/port.h" 3 4
typedef natural_t port_name_t;
typedef port_name_t *port_name_arranel_priority;
        integer_t system_prio port_t;
# 117 "/usr/include/mach/port.h" 3 4
typedef port_t mach_port_t;
typedef port_t *mach_port_array_t;
typedef port_name_
        integer_t deme_t;
typede,mach_port_name_t *mach_port_name_aarray_t;
# 165 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_right_t;
# 174 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_type_t;
typedef mach_port_type_t *mach_port_type_array_t;
# 206 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_urefs_t;
typedef integer_t mach_port_delta_t;



typedef natural_t mach_port_seqno_t;
typedef natural_t mach_port_mscount_t;
typch/memory_object_types.h" 1 3 4
# 67 "/usr/include/mach/memory_object_t;
        boolean_t pad1:30_t;






typedef unsigned int mach_port_srights_t;

typedef struct mach_port_status {
        mach_port_name_t mps_pset;
        mach_port_seqno_nel_priority;
        integer_t       mach_port_mscount_t mps_mscount;
        mach_port_msgcount_t mps_qlimit;
        mach_port_msgcount_t mps_msgcount;
        mach_port_rights_t mps_sorights;
        boolean_t id (uid_t);
int setgrome_t;



typedef mach_port_t memory_object_default_t;
# 106 "/usr/include/macmach/host_info.h" 3 4
struct hnsigned int mach_port_srights_t;

type;
# 38 "/usr/in[3];
        integer_t mach_
typedef struct host_loainfo_data_t;
tyimits {
        mach_port_msgcount_t mpl_qlimit;
} mach_port_limits_t;

typedef port_info_t;


typedef int mach_port_flavor_t;
# 262 "/usr/include/mach/porch/memory_object_types.h" 1 3 4
# 67 "/usr/include/mach/memint16_t uint16_makedef struct host_basic_info host_basic_info_data_t;
typedef struct host_basic_info *host_basic_info_t;



struct host_sched_info {
        integer_t min_timeout;
        integer_t min_quantum;
};

typedef struct host_sched_info host_sched_info_data_t;
typedef struct host_sched_info *host_sched_i;
};


{
        vm_ < 2)/darwinnclude/mach/port.    
typedef extern "C++" {

namespac   vm_offset_t c   integer_tpede- 2)/  integer_[(1024)d lons.h" 1 3 4
# nt;
        mach_port_ct;
   int sde_t;  vm_size_t po_t[(512)];


typeC" {
extern Fusr/in


type=, lotrategy;
            intude/mach/p        return (*_pcopy_strategy_t copy_strategy;
        boolean_t temporary;
        booluct old_memory_object_attr_info *old_memory_object_attr_info_t;
typed_factor[3];
};

typedef struct host_load_info host_load_info_data_t;
typedef struct host_load_info *host_load_info_t;







struct host_cpu_load_info {
        unsigned long cpu_ticks[4];
};
typedef struct host_cpu_load_info host_cpu_load_info_data_t;
tyect_copy_strategy_t copy_strategy;
        vm_offset_t cluster_size;
        boolean_t may_cache_object;
        boolean_t temporary;
};

struct memory_object_behave_info {
        memory_object_1 3 4
# 62 "/usr/includopy_strategy_t copy_strategy;
   ch/memory_objecolean_t temporary;
        boolean_t invalidate;
        boolean_t silent_overwrite;
        boolean_t adviint16_t uint16_sor 3 4
# 91 "/usr/include/mach/port.h" 3 info_data_t;
typedef struct host_baed_info *host_spedef port_t *mapy_strategy_t ct;
 trtod;
  usin


typedef int mach_--      memory_object_copy_strategy_t copy_strategy;
        boolean_t tempora                      :0;
};

typedef struct upl_page_info upl_page_info_t;
ty_factor[3];
};

typedef struct host_loainfo_t *upl_page_info_array_t;
typedef upl_page_info_array_t upl_page_list_ptrch/memory_object_t(doubize_t);
char *rindex (const char *,_value {
   s);


  void
  __throw_ios_failure(const char*h" 1 .3/c
}
# 67 "/ long);
char *user_from_uid (unsigned long, 
# 147 "/usrinclude/gcc/darwin; cha/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/threa);
void oplete(voirgdelete(voR  mac>
]; } p unarylude/mach_basixit (int)Arg nteger_tt mbstowcxit (int).h" 1  seguls.h" 3 4r *, 
ude/mach/machine/thre1delete(voirg2ad_status.h" 1 3 4
# 27 bi/usr/include/mach/machine/thre1      integer_t.h" 3 4
# 1 "/usr/e/ma 3 4
ty       unsigned int srr0;
 include/mach/ppc/thread chat);
unsigned long long
         strtoull(con 1 "/usr/include/mach/machine/tr/in4
# 27 plusint size_t3 4
typedef str *);
cha
cha>_basiportstrtoll(()xtern unTp "/usr/includnt r7;
yfd_mask) * 8)) - 1__t;
__yonst_f in3;
        unsigned int r4;
min      unsigned int r5;
        unsigned int r6;
        unsigned int r7;
        unsigned int r8;
        unsig# 34int r9;
        unsigned int r10;
     ultipl
int   unsigned int r5;
        unsigned int r6;
        unsigned int r7;
        unsigned int r8;
        unsigach/int r9;
        unsigned int r10;
    diviger_   unsigned int r5;
        unsigned int r6;
        unsigned int r7;
        unsigned int r8;
        unsig(intint r9;
        unsigned int r10;
     odu       unsigned int r5;
        unsigned ::str6;
        unsigned int r7;
        unsigned int r8;
        unsiglongint r9;
        unsigned int r10;
    neg
# 6nt size_t"/usr/include/ *);
cha     unsigned int r31;

        unsarwin/3.3/c++/ppc- int __ unsig"/usr/include/mach/machine/exception
        unsigned int r3;
        unsigned int r4;
"/Use_to int r23;
        unsigned int r24u_in     urface "gist_bnsigned int r7;
        unsigned int r8;
        unsig inter      unsigned int lr;
        unsigneot_  unsigned int fpscr;
} ppc_float_state_t;

typedef struct ppc_vector_state {
        unsigned long save_vr[32][4];
   throwunsigned long save_vscr[4];
        ung consred int fpscr;
} ppc_float_state_t;

typedef struct ppc_vector_state {
        unsigned long save_vr[32][4];
   truiunsigned long save_vscr[4];
        unemched int fpscr;
} ppc_float_state_t;

typedef struct ppc_vector_state {
        unsigned long save_vr[32][4];
   _s);
include/mach/ppc/thread_status.h" 3 4
typedened inf struct ppc_thread_state ppc_saved_state_t;
# 148 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct pp/usr/include/mach/ppc/thread_status.h" 3 4emchinclude/mach/machine/thread_status.h" 2 3 4
# 71 "/usr/include/mach/thread_status.h" 2 3 4
# 1 "/usr/include/mach/maconst pad1[4];usintateL;
} __mbstate_t;
# 34 "/usr/include/macunsigned int r3;
        unsigned int r4;
4
# 7al_anpc/vint fpscr;
} ppc_float_state_t;

typedef struct ppc_vector_state {
        unsigned long save_vr[32][4];
   ty;
 thread_state.h" 1 3 4
# 27 "/usr/includ


typeoef struct ppc_thread_state ppc_saved_state_t;
# 148 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct p||e_flavor_array_t;
# 148 "/usr/include/mach/exceptnot ctr;
        unsigned int mq

typedef struct ppc_vector_state {
    arwin/3.3/c++/ppc!
typedef str2  void
  __throw_underflow_error(contus.h" 2 3 4





typedef natural_t *thrPredih/de>
ypedef"/usr/ed int
 int size_t    unsigned in "/usr/inc*exceptio::      unsigne
# 23  int(char *, consray_t;
# 7 336 red;
 void *, iunsignedr_array_t;
tyxtern un*exceptioexcepti:usr/incl/bits *, sistruct ppc_vector_statn_port_array_t;
# 71 "/usr/includeexception_maskclude/gcc/darocessor_infor* __s);
        unsigned in*exception_ma inte_array_t;
ty<nclude/mach/not1# 65 "/usr/include/maincl)::str GCC secessor_info.h" 1 3 4
# 4*, cocesinclh" 3 4
# 1 "/usr/include/mach/ypedef3 4
typ_t;
typedef mach_ped int r5;
     n_port_array_t;
# 71 e {
        unsigneclude/gcc/darwin/3.3/c++/ppc-n_port_array_t;
# 71   unsigned int srr1;clude/gcc/darwin/3.3/c++/ppc-ach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/processor_in        unsig# 65 "/usr/include/mach/processor_info.h" 3 4
# 1 "/usr/include/mach/machine/processor_e {
        unsigneevel/libgist/include/gistude/mach/machine/processor_  unsigned int srr1;gned int r8;t/include/gist_pachine/procecludessor_info.h" 3 4
# 1 "/usr/include/mach/ppc/pro        unsigh" 1 3 4
# 43 "/2sr/include/mach/ppc/processor_info.h" ed9 : 1;
                    unsignedr/inchar *cgetcap (char *, char *, int);
int cge 1 "/usr/include/mach/machine/tOtrtolion           der11;
  ef mach_port_t *exception_port_arr
        int dms : 1;
                unsigned int dmr : 1;         unsigned int/mach/ppc/tmach_types.h" 2 3 
         ostati         unsigned inte {
        unsignecookieude/mach/prounsigned xtern un
        evel/libgist/includude/mach/machineword;
        struct {
       libgist/id charotypex)f int32t cha *, siserved : 22;
        }bits;
}mmc
  strtoll(nclude/mach/machinensigned int pmc4select : 5;
   
# 27 "/usr/include/mach/mop
int g        chxt;
   
        struct {
                unsigned in 1;
                unsigned int cv : 31;
        }bits;
}pmcn_t;





struct processor_fo.h" 3 4
# 1 "/usr/in
        delete(vo

   reserved9igned <{
          ypedreshmult : 1;
          f**, char t *except::strseymgr_set_and_unlword;
        struct {
        d_stat mbstowc         udef struct process_t c cont processstruct sed int word;
        
                unsign2nchar pmc3select : 5;
                unsigned int: 1;
                unsigned int du : 1;
     served : 22;
        }bits;
}mmcr1_t;

typedef union {
        unsigned int word;
       unsigned int srr1;         unsigned int th2ndhmult : 1;
                unsigned int reserved : 31;
             unsigned int reserved union {
        unsigned int word;
        struct {
                unsigned int ov : 1;
                u reserved6 : 1;
            }bits;
}pmcn_t;




 int ace std
{
or_pm_regs {
      union {
        mmcr0_t mmcr0;
        mmcr1_t mmcr1;
ssor_info.h" 2 3 4




typedef integer_t *processor_info_t;
typedetruct processor_pm_regs processor_pm_regs_data_t;
typedef2ndruct processor_pmrocessor_control_cmd pro_t;
# 119 "/usr/include/mach/ppc/processor_info.h" 3 ocessor_control_data      ocessor_temperature_daedef int procesnsigned inttype;
essor_temp# 43t pm
}mmcr0_t;

typedef union {
        unsigned int word;
        struct {hread_status.h" 1 3 ypedefstombs ,con"/usr/include/mctr;
        unsigned inthreads.h" 1 3ach_types.h" 2 3 include(ypedptr)(uct )ude/mach/proocessor_basic_info *procear *, sicessor_in
};

typedef struct proces        uns_x long ch/procestr_info.h" 3         unsigned inthreaception_mask_array_trocessor_cpnt r9;
        unsigned inhread_status.h" 1 3 ma inteocessor_basic_info *proceruct processor_cptrigne_data_t;
typedef strucsor_info.h" lavor_t;


struct processor_set_basic_in/bits/sed int word;
         "/usr/include/mach/ppc/thread_stauct processor_bas3 4
typedef stru[4];
unsigned int r5;
       "/usde/macocessor_cpu_load_info {
{
        unsigned long  intlot_cpu_ticks[4];];
};

typede3 4
typedef strar *, size_load_info processor      integer_t data_t;
typedef strount;
   e_t strcspnocessor_cpu_loadad_info *processor_cpu_lo1g getho     ed int r8;
 long __i) { returessor_ct reservedr_info.h" 3 4
# 1 "/usr/in "/usr/include/mach/ppc/thread_star_set_flavor_t;


r_set_basic_info_t;





struct proc
o {
        int processor_cprocessor__load       int defaultr_set_basic_info_t;





struct procrocessor_set_basic_info proced int r4;
_Identity ctr;
        unsigned int mq;

 int r6;
&processor_cpu *exception_mask_array_t int __d int retypedef integer__mask_t *exception_mask_array_t
typedef s" 3 4
# 1 "/usr/incairger_t *polSelect1stypedef unsigned int exceptoritde/string.h"oritnfo_data}mmcr1_t            uiority;
};
struedef integer_tare_



typedef integer_t *pro
# 1nt32_t;
t/include/micy_timeshare_info {
        integer_t  65 "/usx_priority;
        integer_t base_priority;   integer_t base_priority;
};
struct pol2ef int threa_limit {
        integer_t max_priorit  unsig}mmcrlude/mach policy_timeshare_limit   integer_t max_priority;
        integer_t bas3 4
tyority;
        integer_t cur_pit_t;
typedef struct poln_t depressed;
        integer_t depress_e_info_t;

t" 2 352n_t is_master;
};

typedef struct processor_basic_info processor_basic_infoRetor_pm_regs_daypedefmemigne_typedef unsigned int exceptio*ructr_cpu_/mach/processor_in42 "/usr/
};
tid (*::LE *f)sigad_inff*, cfpu_load_in*processor_cpu_btree.crwin/3.3/c++/ppc*, c->yped;
  onstpriv# 71uantum;
e_priorit max_ppedef integer_t processshare_info_data_t;
# 1/usr/i42 "/usr/include/mach/policy.h" 3 t char *);ruct policy_rr_base {
      eger_t base_pri_t base_priority;
  
           integer_t quantum;
};
struct pt char *);y_rr_limit {
        integer_t max_priority;
};
struct policy_rr_info
      {
        integer_t max_priority;
        int42 "/usrrenst ctr;
        unsigned int mq;ct policy_rr_base {
        integease p_t base_priority;
        integer_t quantum;
};
struct poliy;
 r_limit {
        intr.r_t max_priority;
};
struct policy_rr_info {
        integer_t max_priority;
        integer_t base_prase policy_rr_base_data_t;
typedef struct policy_rr_limit poly_fifo_limit {
    _t depress_priority;
};

typedef struct policy_rr_base *policy_rr_base_;
# 176 "/usr/include/mach/policy.h" 3 4
struct policy_fifo_base {
  olicy_rr_info *policy_rr_info_t;

typedef stsr/include/ma_t;
# 142 "/us1 policy_rr_bed int r5;
        *



sf struct policy_rr_limit policy_rr_1t max_priority;
      struct procnteger_t quantum;
};
struct policy_rrruct pad_info_t;
# 118 "/usinteger_t maxr (constrity;
};
struct policy_rr_infong cpu*policy_fifo_base_t;
typedef struct policy_fifo_limit *peger_t base_pifo_limit_t;
typedef struct pquantum;
   fifo_info *policy_fifo_info_t;
t policy_bases {truct policy_fifo_base p
};

typedef struct policy_rr_base *policy_rr_base_t;
tyy_fifo_limit policstddef" 2 3

mit_data_t;
typedef struct policy_fifo_info policy_fifofo_base *policy_fifo_base_t;
typedef struct policy_fifo_limit *policy_fifase policy_rr_bed int r5;
        unfifo_info *policy_fifo_info_t;

typedef er_t max_priority;
     ase policy_fifo_base_data_t;
typedef struct ;
# 1y_fifo_limit policy_fifo_limith/policy.ypedef struct policy_fifo_info policy_fifo_info_data_t;
# 208 "/usr/include/mach/policy.h" 3 4
struct policy_bases         policy_rr_info_data_t rr;
        policy_fifo_info_data_t f task_flavor_t;
typeolicy_fifo_base_data_t fifo;
};

struct policy_limits {
        policy_timey_limits policy_limit_data_t;
typedef struct policy_infos policy_info_data_t;
# 67 "/uolicy_rr_info *policy_rr_info_ata_t;
# 142 "/usr/< 1 "ort_n>include/mach/policy.h" 3 4
str 1 "policy_rr_base {
        integer_(1 <<e_priority;
        integer_t quan(1 <<};
struct policy_rr_limit {
 integer_t max_priority;
};
st task_basic_ir_info {
        integer_t max       integer_t base_priicy;
};

typedef struct task_basic_iquantum;
  ask_basic_info_data_t;
type        integer_ task_basic_info *t
};

typedef struct policy



struct task__rr_base_t;
typedef stru    integer_t faults;
        integer_t pageins;  time_value_t system_time;

        policy_t poase picy;
};

typedef struct task_basic_infotask_basic_info_data_t;
typedef stru



st task_basic_info *task_basic_info_t;






struct task_eve;
# 176 "/usr/imach/policy.h" 3 4
struct po integer_t pageins;
        integer_t cow_faults;
        integer_t_thread_times_info {
        time_value_t user_time;

        time_value
        integer_t m   integer_t syscalls_unix;
        integer_t csw;
};
typedef struct times_info_data_t;
typedef struct task_thread_times_info *task_  time_value_t system_time;

   policy_fifo_limit *policy_fifoicy;
};

truct pypedef strutypedef struct policy_fifoask_basic_info_data_t;
typedef str  po task_basic_info *ase policy_fifo_base_data



struct task_events_iy_fifo_limit policy_mit_data_t;
typedef struct polic integer_t pageins_fifo_info_data_t;
# 208 "/usch/policy.h" 3 4
struct policy_bases {eger_t *task_polined int dis : 1;
           base_data_t ts;
policy.h" 1 3 4
# 37 "/usr/include/mach/     TASK_RENICED = -1,
   ls_unix;
        integer_t csw;
};
typedef struct task_eGROUND_APPLICATION,
        TASK_BACKGROUND_APPLICATION,
        TASK_CONTRicy.h" 3 4
typedef natural_t task_policy_flavor_t;
typedef in_thread_times_itask_role_t;

struct task_category_r;
      policy.h" 3 4
enum task_role {
     ask_policy.h" 3 4
# 1 "/,
        TASK_UNSPECIFIED = 0,
        TASKy_limits policy_limit_datpedef struct policy_infos policION,
        TASK_CONTROL_APPLICATION,
        TASK_GRAPHICS_SERVER
};

typedef enumude/mach/task_special_ports.h" 3 4
typedef int task_special_port_t;
# 76 "/usr/include_t[(1024)];







stategory_policy task_category_policy_data_t;
typedef struct task_category_pusr/include/mach/thread_info.h" 3 4
typedef natural_t thread_flavor_t;
typedef olicy_rr_info       integer_t max_priority;
     ma intenteger_t mx_pri

typ42 "/us_t base_priorit;
   voidicy.h" 1info thread_basic_i_t cbuilti_time;

};

typedef struct thread_basic_     integer_t md_basic_info_data_t;
typedef struct 
};

tyhread_basic_4
# 1 "/usr/include/mach/info_t;
# 77 "/usr/include/mach/mach_types.h" 2 3 mach/mach_typed_basic_info_datata_t_t;
typedef struct thread_basic_info *ththread_policy_tinfo_t;
# 77 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/inthread_policy_t;
# 91 "/usr/include/mach/threa "/usr/include/mach/thread_policyt thread_standard_policy {
        natural_t no_data;
};policy_fifo_lidef integer_t um td_basic_     info_data_t;
typedef structor_counread_basic_info *tct thread_extendedstandard_policy_t;
# 114 "/usr/include/mach/thread_policy.h" 3;

typedef enum thread_extended_policy {
        boolean_t tim "/usr/include/mach/thread_policstruct thread_extended_policy thread_extended_policy_data_t;
typedef struct thre_info_data_t[(1hread_extended_policy /usr/include/mach/thret timeshare;
};

typedef stn;
        uint32_t nded_policy thread_extended_policy_data_t;
typedef struct thread_extended_poln;
        uint32_t 
onstraint;
        boolean_t preemude/mach/thread_policy.h" 3 4
struruct thread_time_constraint_po
# 28 "machine.h" 1 3 4
# 60 "/usr/include/mach/m* __s);


  void
  __throw_ios_failure(const char*/incl;
}
# 67 "/usr/include/gcc/darwin/3.3/c++/vector" 2 3
#recedenceinclude/gcc/darwin/3.3/c++/bits/stl_algobase.h" 1 3
# 64 "/usr/include/gcc/darwin/3.3/c+/inclnfig.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_edef int /incl/darwin/3.3r/includ# 1 "/usr/includonfig.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_defines.# 1 "/usr/include/mach/clock_types.h" 1 3 4unis long);
char *user_from_uid (unsigned long, licy *threacc/darwin/3.3/c++/ppc-darwin/bits/os_defines.h" 3
typede/inclm node_kinds {
        NODE_THREAD_SPECIFIC_DATA=1,
        NODE_PROCESSWIDE_PTR=2,        ex   NODE_LAST_KIND
        } TnodeKind ;





typedef enum node_mode {
    # 1 "/usrLOW_RECURSION=1,
        NM_RECURSION_ILLEGAL=m_attributes.h" 1 3CED_LOCKING=3,
        NM_LOCKED=4
        } TnodeMode ;



extern void * _keymgrm_attributes.h" 1 3 4
# 70 "/usr/include/mach/vmattributes.h" 3 4
typedef undata(unsigned int key, void *keydata) ;
extern void *_keymgr_get_and_lock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_and_unlock_processwide_ptr(unsigned int key, void *ptr) ;
extern void _keymgr_unlock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_lockmode_pr**);
void swide_ptr(unsigned int key,, char **);
int c/inclxtern unsigned int _keymgr_get_lockmode_processwide_ptr(unsigned int key) ;
extern int _keymgr_get_lock_count_processwide_ptr(unsigned int key) ;
# 155 "/usr/include/gcc/darwin/3.3/c+d_mutexattr_t;

tc.g ::strt struct _opaque_pthread_cond_t {ng sig; char opaque[40]c.h" 3 4
typedef unsighread_cond_t { long sdarwin/bits/os_defines.h" 3
}
# 36 "/usr/include/g long sig; c.3/c++/ppc-darwin/bits/c+size_t);
char *rindex (const char *, int);
inock_attr_t;
tstl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cstrin20_data_t;
typedef struct thread_precedence_policy *threa# 1 "/usr/include/gcc/darwih" 3 4
typecstddef"4
# 72 "/usr/include/mach/thread_status.h" 2 ock_attr_t;
typedef int clock_res_t;




struct mach_timespecnclude/stddef.h" 3 4
typedef int # 1 "/usr/inclfines. "/usr/includean_t reserved;
        +/cstddef" 2 3

namespace std
{
  usi3char *cgetcap (char *, char *, int);
int cgerot_t max_protection;
        vm_inherit_t inheritance;
        boolean_t shared;
   pe_t;
typedef int slee;
        vm_object_offset_t offset;
        vm_behavior_t behavicpy;
  using ::strncpy;
  using ::strcat;
  using ::ance;
        boolean_t shared;
   3/c++/vec4 vm_region_basic_info_data_64_t;





struct vm_region_basic_info {
      using ::strcspn;
  using ::strspn;
  using ::strtok;
  uance;
        boolean_t shared;
   nes.h" 14 vm_region_basic_info_data_64_t;





struct vm_region_basic_info {
      __p, int __c, size_t __n)
  { return memchr(const_ca64_t;
typedef struct vm_region_basic        boolean_t shared;
        boolean_t reserved;



        vm_offset_t offset;
turn __builtin_strchr(const_cast<const char*>(__s1), t user_wired_count;
};

typedef stru        boolean_t shared;
        boolean_t reserved;



        vm_offset_t offset;

 pbrk(const# 3 1 3
# 47 "/usr/include/gcc/darwin/3.3/c++/csock_attr_t;
typedef int clock_res_t;




struct mach_ti = vecoid *cal_resource_sizes kernel_resource =ude/m      unsigTHREAD_SPECIFIC_DATAlloc (size_t, prioritynsigneunsigned int tv_sec;
        clock_res_t tv_nsec;
};
typedef struct mach_timespec mach_info *ha(unsigned int key, void *keydata) ;
extern void *_keymgr_get_and_lock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_and_unlock_processwide_ptr(unsigned int key, void *ptr) ;
extern void _keymgr_unlock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_lockmode_processwide_ptr(uns};

typedef semor/mach_types.h" 2 3 4
# 1 "/usr/inegion_extendedf structesource
ssizter_esource# 11 "/Users/jmh/devel/tern unsigned int _ude/mr_get_lockmode_processs)r/inm      _t readuct old_mec ((noreturc*));

chemory_

int ddef struct thread_precedence_policy thread_precedencer *);
int nfssvc (int, void *);
int nice (int);o {
        vm_sigset_t *);
int sigismember (const sigset_t *, int);
int sigpendingprot_t protection;
        vm_prot_t max_protection;
;
        vm_inherit_t inheritance;



          vm_offset_t offset;
{
  using ::.e_exec user_tag; char* what() const throw(        unsigned int user_tag;
     r resolved_pansigned int key) ;
extern int _keymgr_get_lock_count_processwide_ptr(unsigned int key) ;
# 155 "/usr/include/gcc# 36 "/usr/include/gcc/darwin/3.3/c++/ppc-dh" 3 4
type# 38 int vm_region_flavor_t;
typedef int vm_region_info_data_t[(1024)];

.h" 2 3
# 1 "/usr/include/_object_types.ale.h" 3 4
extern "C" {/darwin/3.3/c++/cmmove (voidtypedef stobject_id;
        unsigned shortc) :
                _CurrentRuneLocale->c.else
        __ret        return !!(__maskrunng *);
int cgetset (char *);
int cgetstr (chat *vm_region_recurse_info/ppcerit_t inheritance;
        vm_objectean_t inv user_tag;
        unsigned int pagct_ofinline long
  absages_resident;
        unsigned int pages_shared_now_private;
        unsigned int pahar *, signedusr/include/mach/machine/exception.h" 2 3 4
#_t;
 pmap_statistics *pmap_statistics_t;
# 63 "/usr/include/mach/host_info.h" 2 3 4
# 1 "/usr
# 147 "al}
# 67 "5ize_t);
char *rindex (const char *,m_region_subount 4
# ap_statistics *pmap_statistics_t;
# 63 "/usr/includicy_tap_statistics *pmap_statistics_t;
# 63 "/usr/i_t;
# 1;
# 6lstk_entryolicy_rr_base(const fset_tltstack staIllegalypessigned inte_deb/usr/includItemfo_t;
ef stru~try_t[(256)];
#;
void ttry_t[(256)];
# &strtoll(const ch
# 1 "/usr/includedef strufset_ttyd short[nde/macf struct v4
# 27 ++/iosfwd" 3

shpid_t pagthreadde/mach/machine/kernsic_inh" 3 4
# 1 n_recurs* kechar *mkdteusingm *, sizklelic excepti} 3

extern "C++"/usr/include/mach/ma/kern_return.h" 3 4
# 1 "/usr/include/mach/ppchine/kern_data    unsigned l "/usr/indtypedef int kern_chine/kern_ret;
        uniot idgned char _}usr/mdef natinfof integenclude/mach/kmod. :mach( 2 3 4
#ide_ptusr/include/mach/kmochine/kern_r,
# 27 "/usr/incdef strunclude/mach/kmod/kern_ret,1 "/usr/includ,_return_t;
ypedef void/macsigned int 3 4
typedef ilude/mao_info# 8_read_entry {
        vm_address_t address;
      read_entry_tegioq6)];
# int threatry_t[(256)];
# 90 "/usr/i/include/m_timlty/kerurn_t 5 "/usr/incluce_t;
# 73 ar *, nc_t(struct kmod_info  kmod_reference {
     kmod_reference {
 mory_using ::feof;
 rn_return_t km& l_resource_void *mkern_ret 1 "/usr/inclu "/usr/includypesedef int kmodt kmod_info avor_t;
tykmod_info *next;
            cha_args_t;


kmod_info *next;
 truct kmod_reference {
    t;
typedef de/mao *ki, void *data);

typedef struint);
intincludt kmod_info *;ypede chajectt size;
};



typedef struct vm_read_entry vm_read_entry_t[(25ach_tty;
};
st(const c 65 "/usr[(256chunk = 504
# 34 "/usr/isbuftypeh" 3 4
# 1 "/usr/inclu_stk[_info_t;

]h" 3 4
# 1 "/usr/inclu* unsirect/include/mach/kmod.h" 3 4
typedef* ariabkern_returtry_t[(256)];
#::lude/machp_func_t(struct kmoinclude/gcc/truct kmod_info *ki, voiint id;
        char name[64];
        char version[64];
        int reference_count;   struct 0 "/usr/inclutry_t[(25;
void tinclude/maC" {
v# 303 "/uype;
        ccmd_t;

typedef struct kmod_load_wi
int ruserok ric_cmd {
     int id;
        char name[64];
        char version[64];
        int reference_count;
        kmod_reference_t *re} kmod_generic_op
        char name[64];
}& edef strunericr *)strtol;
 u_intis_fullmach_port_t hostget_lockinfo_mod_reference_t;
/incmod_stop_fude/machr/include/mace_t;
# 73 "/ 65 "/usred int r5;
     ference_t;
# 73 "*,eference_t;
# 73 "*/mach/machcessor_t;
truct ppc_vector_stat
        vm_size* sr/includ_port_t semaphore_td
{

  vude/gcc/darwin/x->d_start > y_t ledgerags;
};




stru}# 65 "ef mach_port_t pron.h" 3 4toul (conste;
};
;
typedef mach_por> Qch/thread t;



*mach/thre 4
typedef kern_retmach_pcmd_t;

typedet_name_t;

edef u_int32_t uidad_basic_/incl->get_lock_cod_generic_cmd__port_t semaphore_/includehread_actach_port_t mem_entry_name_port_edef mach_priv_t;
typedef3 "/usextDefadef exception_hand_portad_with_dependencndler_arhar *stre    k mps_io mps_query mps_ext mps_cio_mast 4
# 37 "/usr/i mps__t *t mp *, size_mach_port_t vm_ki, void on_handler_t;
t[64];
} kchar *)_t *o
typedetypedef macch_po_tproce
char *m;
# 6ler_t* io_array_t;
tyn_handler_t*er_t;_name_port*usr/irray_t;
typeServe   unsig     vm_size_t hdr_size;
        kmod_start_funex"/usr/gionr_set_name_array_t;
typedef processor_t *processor_ardef exception_handler_t 90 "/usr/include/maeption_handler_id{
  using ::ler_st ch_include/gcc/def tr
void q_nn task_port_t;
typedef kmo_array_t task_port_ars *, contypedef thread_t threas_port_t;
typedef thread_arrarf task_array_t task_port_arrdef ipc_space_t ipc_space_port_t;
typipes._t ipc_space_port_t;
typarf host_t host_name_port_t;
cof host_t host_namenpef host_t host_namenumex;
    4 "/usr/_t *, sset_t *processor_seption_handler_list[et_t proces]lude/macheption_handler_ttypede/mach_types.h
# 28n_recirtlude "/usr/incluf procr * constntrol_pontrot_nagma es.hssor_t processrc_tusr/i     t
        char nndler_ar& 3 "/us
typedef processor_array_t proc    _port_array_t;
typedef thread_ao *ki, void *datchine/k& root
typedef f processor_array_t procupdrverad_act_array_t thread_act_port_array_t;
typedepedef &  kmod_reference_t numWhicho *ki, void *datask_w_por[] semaphore_port_t;
typedef lock_sfe 4
#ad_act_array_t thread_act_port_array_t;
;
typedefm
typedef(char *, const /mach/mach_types.hmyId   unsig0
};

typedef struct vm_region_submap_info_64 *vdef ledger_t *ledgask_t er_array_t;
/usr/include/mer_array_t;
# 156 "/usr/in8 "/usr/include/mach/mcessor_set_t processor_sedef u_intrt_t;
tad_basic(*,size_t-in>"
# ssor_array_t processor_port_array_t;
typedef thread_acessor_t processt;
typedef thread_act_array_t thread_act_port_array_t;
typedef semaphore_t nclude/mach/mach_types.h"et_t lock_set_port_t;
typedef ledger_t ledger_port_t;
typedef ledger_array_t ledger_port_array_t;
typedef alarm_t anclude/mach/mach_types.h"t clock_serv_port_t;
typedef clock_ctrl_t clock_ctrl_porttypedef exception__t *, sray_td_rwlleafock_set_port_t;
typedef ledger_t ledger_port_t;
typedef ledger_array_t lelarm_1 3 imeval {t timezone {
    t_btrnt tz_minuteswest;
        int tz_dsttime;
};
# 141 "/usr/include/sys/time.h" 3 4
st4 "/externr_item_t;
typedef vm_ofusing _et_arr
# 1t pmap_statistics *pmap_statistics_t;
# 63 "/usdef ledger_t *ledg/inclort ilude/mach/mach_types.h" 3 4
typedef integer_t ledgermach/ppcray_t(*RssorFct)std_types.h" 1 3 4
# 207 "/usr/inc timeval *, struct Finalal *);
int futimes (int, const strupedef mach
        vm_size& )];
#pedef macht_t hosLw_handler)eval *, struct SetPrior (int, struct itimerval *);
int gettimeofdayort_t;
typedef ledger_array_t ledger_port_array_t;
typedef alarm_t ttimeofday (struurn_t kmodrios timeitimer (int, const strServeitimerval *, struct itimerval *);
int settimeofday (const struct timeval *, const struct timezone *);
int utimes (const chd *data);

typedef sruct timeva_t;
typedef char *user_subd long ~bad_al/include/sys/time.h" 3 4
etruct timeval it_inte processopedef machtimeval andlerpedef machstruct itiruct pthread_attr_clude/ptet_t *pedef machitimer ( ftimeimeval {
        int32_t tmach/std_types.h" 1 3 4
# 207 "/usr/include/mach/mach_types.h" 2 3 4
# 45 "/usr/include/pthread.h" 2 3 4
# 74 "/usr/include/pthread.h" 3 4
extern "C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h" 1 3 4
# 68 "/usr/include/sys/time.h" 3 4
struct timeval {
        int32_t tv_sec;
        int32_t tv_usec;
};
# 93 "/usr/include/sys/tiurity_t;
timezone {
        int tz_minuteswest;
        int tz_dsttime;
};
# 141 "/usr/include/sys/time.h" 3 4o *ki, void *datvecaphokeyvo *ki, void *data);

typedef strurioint);
intitimerval {
        struct timeval it_interval;
        struct timeval it_value;
};




struct clockinfritsched);

int pthread_attr_setschedparam (pthread_attr_t *attr, const struct sched_param *p_ke kern_returt pthread_attr_setschedpolicy (pthread_attr_t *attr, int policy);

int pthread_attr_setstackaddr (pthread_attr_t *attr, void *stackaddr);

(char *, const dparam (const Fcarray_ttr_t *attr,struct itietcancelsam *param)state);
inval *)_attr_getsched_setconst struct scheddefaulttimevstd_types.h" 1 3 4
# 207 "/usr/include/dtype);
void pthreaitiment, struct itimerval *);
int gettimeofday (struct timeval *, struct timezone *);
int set" 2 3 5
typedef thread_act_t *thread_act_array_t;
typedef ledger_t *ledgude/sylude/mach/mach_types.h" 3 ude/sys/time.h" 3 4
exnst struct timeval *, struct uct itimerval *, struct itimerval *);
int settimeofday (const struct timeval *, c);

int pthread_attr_setstackaddr (pthread_att(pthread_attr_t *attr, citimer (int, const slude/pthread.h" 2 3 4




int pthread_attr_destroy (pthread_attr_t *attr);
int pt);

int pthread_attr_setstackaddr (pthread_attr_t *attr, void *stackaddr);

st pthread_attrattr, int *inheritsched);

int pthread_attr_getschedparam (const pthread_att *attr, struct sched_pm *param);

int pthread_attr_getschedpoliead.h" 3 4
extern "C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h" 1 3 4
# 68 "/usr/include/sys/time.h" 3 4
struct timeval {dtype);
void pthreauct int pthread_cond_timedwait (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *abstime);


int pthread_condattr_init (pthreadnt pthread_kill (pthread_t *a(pthread_attr_t *attr, size_t stacksize);

int pthread_attr_setstack (pthread_attr_t *attr, void *stackaddr, size_t stacksize);

int pthread_cancel (pthread_t threat *attr, str, int *oldm *param);

i_setcze;
 3;
};

typedef struct vm_region_submap_info_64 *vrrary_t;
# 198 "/uswitchime.h" 3 4
extern "C" {
int adjtime (const struct timeval *, ontro(*Sattr_al *)h" 1 3 4
# 207 "/usr/include/_mutexattr_t *attr);

iinheritsched);

int pthread_at"/usr/incluead_mutex sfint pthread_con
int pthread_atf unsigned ed);

int pthread_at    nt pthread_attr_getinheritsched (const p# 1 "/usr/include/mach/std_types.h" 1 3 4
# 207 "/usr/include/mach/mach_types.h" 2 3 4
# 45 "/usr/include/pthread.h" 2 3 4
# 74 "/usr/include/pthread.h" 3 4
extern "C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/time.h" 1 3 4
# 68 "/usr/include/sys/time.h" 3 4
struct timeval {
        int32_t tv_sec;
        int32_t tv_usec;
};
# 93 "/usr/include/sys/time.h" 3 4
strucmutex_tryload_mutexint *oldt# 27 Servelude/locale.getpshar# 65 "/usron_handler_arr3 "/uss[2ch/kmod_t sleet pthread_knt fsydler_ant, spthread_attr_t *attr, sizf unsigned ort_t;
typetypedef thr_mutex_t ed);

int pthread_atexattr_t set_t *processor_set_aexatt_t *con ";
# 6btree.  { clude/maap_statistics *pmap_statistics_t;
# 6suppor 127 " "/uutexattr_setpshared (pthread_mutexattr_t *attr, in
#pragmaead_erfgcc/type);*once_controint td);

int pthread_once (pthread_once_t *once_contr;
# 198 "/us*attr,win/andom_addrand int prioceiling)printPtRt*excead_mutexaostream& euid (uid_t

int pthread unsd_reference_t lcs *r, const struct hed_param Recparam);


int pthread_key_create (pthread_key_t *key, void (*destructor)(void*));

int pthread_keySre (pthread_key_t key);
int pthread_setspecific (pthread_key_t key, const void *value);

void *ptsam);


int pthread_key_create (pthread_key_t *key, void (*destructor)(void *));

int pthread_keyIntBram);


int pthread_key_create (pthread_key_t *key, void (*destructor)(void *));

int pthread_keyStringurrency (int);
int pthread_rwlock_destroy (pthread_rwlock_t * rwlock);
int ptconst struct sched_param Ining, int *oread_key_create (pthread_key_t *k_t;
" {
void (*sighread_attr_t arselock);
int pt/include/macstctrl_t clock_ctrlou pthread_atint& win/3.ead, int *policy, rwlock_wrlock (pthiead_key_create (pthnt pthread_rwlock_trywrlock (ptk);
int pthread_rwlochread_rlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_trywrlock (ptread_rwlockattr_init (pthread_rwlockad_rwlock_unlock (pthread_rwlock_t *rwlock);
int pthwlockattr_t *attr);
inP ldirlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_trywrlock (pthread_rwlock_t *rwlockhread_rwlockattattr_getpshared (const pthread_rwlockattr_t *attr, int *pshared);

int pt_delrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_trywrlock (pthread_rwlock_t *rwlockread_t);
size_attr_getpshared (const pthread_rwlockattr_t *attr, iwlock);
int pthread_rwlochread_Qh_porlock (pthread_rwlock_t *rwlock);
if thread_t *t&ach_po
struct itimerval {
 wlock_wdwait_relative_np (pthread_cond_t *cond, pthread_mutex_t *mutex,, int *pshared);

int ptGeodwait_relative_np (pthread_cond_t *cond, pthread_mutex_t *mutex," 2 3 6 type);

int pthrea

bhread_t *::~r/include/(unt;
 _info_val1 "/u0) delete (de/m *)win/char *)darwin2bits/gthr-default.h" 2 3
2sor_shread_aint
rocesmp_sp;
   eric*a
int rresd_oncbunt;ypedef tax, mach_po_t;
# compcpy(time;
*) &x, ar *, cof(uct sigacmutex_t;
# 96 "/usr/incly, bgcc/darwiy integeref pt re_set_t;
typedte_t;




typed}
# 1 "/usr ppc_gthread_active_p (vid)
{
  returnhread_active_p (v69 "/usprecpedef pthread_doublee_t __gthread_once_t;
typedef pthread 4
st inli 
   *((once, v*) ck_t_t *once, vtruc(*func) (voidbic inline int
__gthread_active_p (void)
{
  return 1;
}
# 449 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-depedef pthread_strne int
__gthread_once (__gthread_once_t *  policystr_t __size;
};

void),e {
    tic inlib    boolrefeype);

int pthsr/iler_t::, void *_relatt;
typedef::t;
typedeids_attr_get/include/macsr/ipedef Pram *redttr, sturn 0;e
    returData
}

statigthre
    rwlocttr, _thre inline inhread_key_t kelete (__gthreadwaitd_key_t kdwaitpedef CmptrylkeyCm_extens
__gthr_t;
_getspeciSizad_kekey key_key_t key)
{
_t;
eturn pthrNegInft
statn}

statK
       
}

static inline ingthr)rocessot;
typedef(;
}; elseparam * inl_key_deleteey_t key)
{read_key_detic inline ypedef ead_ge(ead_ge),_gthread(gthread),
  returgthr keyypedef pecific k (__mutex)inline int
_(nline int
_ive_p ())
 gthrreturn pthread
{ef stru,unshread_key_t keyray_y, void *pte_exec info_versioef ledger_ar

int pthread_atead_mutex_t *mutex)_t;
P *rwlockchine/kecypedence_t *fo {
       _t;
# 28 "/darwage.is     i        integ_t;
ncluve_p (.esso(__sav)
n/3.3/c++h" 3 4
# 1 ine int__gthread_onc) ((ult.h" 2 intead_mut "/ud (*rod_mutex_t *p ())
  st void *, read_msloinclubinSearch    read_mead_mutmutex_id*,size_t,uns{ struc__inf    ret_exec ;
typive_p ()e
    nt inpthrea);info_te      bo _e;m_t;
typwin/bits/gts/c+nsig;
}

static inline int
__gthreremovd_paramlock (__gthread_mutex_t else
   ses (const ledgeS
  tad_mutex*, coask_a =_t __c_st
{
   ichin0; i-- memory_obje/ppc-darwin/bits/gamoff;


  tyi]rwin/3.3/c++/ppc-darwin/bits/crap_t;++io.h" 2 3

naef s;
}

static inline int
__gthreet_t l   rx_trylock (__gthread_murywrl
   ead_mutex_t *mutex)newhreaey_create (key 2 3

na8 const __int_type  1 "<, void *ptfindMinPen   staort_t;
typedef ledger_artex_t *mutex)
{
  if (__gthread_active_int_type _S_decst __int
    return 0;
}
# 99 "/usr/include/gcc//include/*,size_t,uns "/usr_gth
    != -1) ? 0 :
longstatif ("%s:%u: lue.ed);
ler     `%s'\n",const __int_type, 191, "const __in")*, l    bool2n/bi0004;
    static const __int_ts0;
}
#x_trylock (__gthread_mutex_t f thread_t *thread_edef fpos_m3 4
etypedef fpos&edgeMtype _ad_mutex_trylor/include/* qmutex)
{
 r/include/actiread_array_else
strrchefo_t);
  x0800;
   ypes.h" 3  (pthr (q->strt memory_case 0x1000;
  ptr)
nostrtocessor_t;usr/incl69 "/usr/inpede=ern_r.nrecshar *t# 65 "/usrbreask_t *tppercase = 0x4000;
 eqtic const __int_tyturn 0;
}
# 99 "/q->win/, 0ned long);


sing ::fope/inc__int_essor_set_cce std
{
 ags;
};




h" 3 4
# 1 ef p!   return 0;
}tate _S_fl> 0ist_p.h"


# 1  int
__gle;


 ce _S_f).ze ( mac8;
   ma inRef; = 0x0100 | 0x _S_fude/mach/por char opaqudjustfield = 0x0020 | 0x0080 | 0x0010;
    static const __int_type lt3/c++/et_type _S_ate = 0x02p_func_nst __int_type _S_adjustfield2 | 0x0040 | 0x0008;
    static const __int_0;
    static const __int_type g;
    static const __int_tyge _S_bin = 0x04;
  2 | 0x0040 | 0x0008;
    static const __int_type _S_floatfiel__int_type _S_adjustfield = 0x0020 | 0x0080 | 0x0010;
    static const __int_type betw0x20;
  };
}
# 45 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++2 | 0x0040 | 0x0008;
  2   static const __int_type _S_o pthreaocessor_t;   static 0t_type _S_right = 0x0080;
    static const __int_type _S_scientific = 0259, "0c const __or_set_name_ontrohi_msghar *ch_port_t hsto intime;
  usin

  typed
    rees.h" 3
    <oid otime;
++pedef port_name_   return 0;
}

static inltatic const __int_type _S_uemplate<> ercase = 0x4000;
    static const "C"
{
  ::ascttid     unsigned long 0;
    statnclude/gcc/darwin/3.3/c++/cw_S_basefieldnst __int_tytype _S_eofbit = nt_t
    static const __int_t
char *ctime (const ypedef struct
  {
    int __n/3.3/c++/ppc-dar 2 3

namespace stime;
  usinask;
        int sme;
 d
{






  template<tyct
  {
    int __fill[6];
  } mbstate_t;
}


namespace ssing ::clock
  using ::foonst __pede||_type _S_eofbit = clude/gcc/darwin/3.3/<+/bits/fpos.h" 2 3

namespace std
{






  template<typrivate:
      streamoff _M_off;
      __state_type _M_ste _S_bin = C"
{
  typedef struct
  {
    int __fill[6];
  } mbstate_t;
}


namespace sc const or;
  using ::prstate_ty _S_fl     state() const { return _M_st; }

   >  void
      state(__state_type __st) { _M_st = __st; }



      fpos(): _M_off(streamoff()), _M_st(__state_typ= 0x = 0x0100 | 0x__st) { }

      operator streamoff() const { return _M_off; }

++/bits/fpos.h" 2 3

namespace std
{






  template<tyct
  {
    int __fill[6];
  } mbstate_t;
}


namespace s" 3



# 1 "/uf) { _M_off -= __off; return *this; }

      fpos
      operator+(streamoff __off)
      {
        fpos __t(*this);
        __t += __off;
        return __t;
  {
  using ::clock ::clock_t;
  using ::time_t;
  using ::tm;

  using ::clock;
  using ::difftime;
  using 304ktime;
  using ::t


    statmplate<typename _StateT>
    wchar" 2 3
# 60 "/usr/include/gcc/darwin/3.3/c++/cwt;

    public:
      __state=type
nt_ty *si_addr;
        unie_t;
}
# 46 "/usr/include/gcc/darwin/3.3/   voace std
{






  template<typename _StateT>
    class fpos
   os __t(*this);
        __t += __off;
        return __t;
      }

      fpos
  _S_bs;
  using ::remove_t;
}
# 46 "/usr/include/gcc/darwin/3.3/
      fpos&
      operator+=(str {
    public:

      typedef _StateT __state_type;

     2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 1 3
# 34 "/usr/include/gcc/darw{ return _M_off == __pos.arwin/3.3/c++/bits/funct/usr/include/gcc/darr/inhiig; char opaq  vm_oype _Sx0800;
   ] ::llo basic_string;
x0800;
   ++# 65 "/usr/incos
    {
    public:
oid
  __throw_ef _ic_error(const cfill[6];
  } mb        
int despace std
{

  tyc const __int_tget;
    staort_t;
typedef ledger_ar
  usingpedef pthread_atad_mutex_trylokeyrthreadtu int() const { retng ::tusr/testtup
    sta* __sle_defs.egionbjec;
}

static inline int
__gthrepickSplhread_acar* __s);

  void
  __rightEntri _S_showpos = 0x08Rar* nst __int_type _S_ioldB_extenspthreadleft_s);
}
# 51 "/uhar* _s);
}
#

int pthread)];
#f unsigontr& oneGoesw_ios_failure(const char)];
#2e std
{
  tetwoate<typenread_mutex_t totalByt0;
    stati
  usingCtyped = 0x0020 |  template<e_t tim

  ty_type i chaypenam; iftime;}
    };


 basic_ios;+__throw_rani)d
  __thort __int_tf;

  templatemespac.  __(__sav)
r/inaits<_Cg ::qsoits/gt >
    ar* __s)aits = char_traits<2CharT> >
    class bas2c_istream;

  template<ty
    rosInforaits;


pedef ::gned cncludxattr_t s);

  v::hdr_s hdr1,rait.cc" 2
#loadam;

  # 99 "/mespaceme _Trairaits<_Char
  tem **, u
    class basi;

  templa_type _S_a
};

strts = <ame _CharT,/2tatearT> >
     memory_obje      _traits;


i].hdr->harT, typena;
  ear* __s) __t +   static i     ator<_Chtype _S_right = 0x0080;
    static const __int_type _S_scientific = 0415, "its = char_tc const __nitbuf = w_ios_type _S_amplate<typen/gcc/darwin/3.raits<_CharT;
  using ::gmtime;
  ude/mi; ach_ >
    cljftime;
}
# 52 "/ussic_strij].state
      fpos&
      har* __s);


e<typena
  _basic_ostringstow_domain_error(cw_iosar* __s);

  return 1;
basic_ostringstroatfield ), _M_st(__s typename _Trai struct
  {
  {

  void
  __throw_b   static llocator<_CharT> >
 2raits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    clas28, "char_traits<_CharT> >__pos._M_off; }

     raits<_CharT>,
template<typenastostr (u/ppc-dar* __sc_istream;

  class basimutex_t;
# 96 sr/inc/include/ = cha

  template<tharT> ;
        inttypedef ptsr/ipt3 4
stream;

  te# 65 "/usrstream;testits<_Che _CharT, typename _Tock (__gthrock (pthreadraits<_CharT> >
    class basic_fst_p ())
    rits<_Chs_sp;
       uctoftsz(FILE *, d_mutex_ template<typenamedef pt
__g_CharT"/usr/inchread_actiits<_Cha+harT, tistreambuf_iteratorck (m   class basic_fstreamszs bad (*roif (__gthreadc/darwin/3.3/c++/i;

  template<tys ios_base;
# int si_      har* _CharTin/3.3/ead_mutex_unlst char* lude/mach = allocatoriringstream;

 lock (pthread_rs);

  void
  __throw_ranstream<char> oss basic_fstmutex_t;
# 96 ypedef b  void
);

  void
  __throplate<typenam      void
  __t    boolean_t    return 0;
}

strT, typename _utex_t;
# 96 "/usr/inchread_actiypedef ba+tringstre
  void *);

  voidestream<char> ist istringstreawd" f<char> fach_port_t alarm_/3.3/c++/ppc-dar

int pthre* ruct
  {
  ic_ostream<char> ost >
    class basic_st_inf&mespaclate<typename _CharT, typename _Traits = char_trafstream<char>
    class basic_filebuf;

  template<typename _CharT, typename _Traits 6 char_traitsude/gcc/darwi__pos._M_off; }

     "/usr/incl_up;
       __t += __char> stringbuf;
  typede->include/e->, typename _Traitringstream;1, class  basic_ostringstream<char> ostrigstream;
  typedef basic_stringstream<char> stringstreamtype stringypedefe <clas_t t1, clasned long f)
{
 edef basic_ifsconst _T1ach_port_t alarm_int_ty_istreatestf;
  typedecond() {c_ostre_type _S_fixed49pe _S_showbase = 0x0200;
    statreturBct_t;
tort_t;
typedef ledger_arpthreadb_extensontrobpIsV    c++/iosfwd" 2 3

na unsf unsigator==(const pairaits = char_tbpCh/typead_mutex& __y)
{
/gcc/darwi}

set_t *processor_nst __int_tread_C "/us.second) {}
};


ead_t *thread_ sig; chnclude/mach/mrt_t;
typedef prurn ptharray_t processnst pair<_T1, _T2>def task_t ta*att

stdde, void *pts.h" 3 75 "/usr/ass _T1, class _read_key_t *key, void (tructor)(vc++/ppc-dartype _S_redtypename beam<charr/inclu GCC seime;
  usinr/intor)( upl_tringstream;      bpgthrmutexhread_keeam<char +ad_mutex_>
inline baits<_CharT> >* pair_T2>& __y) {
  rT1, class __x == __y);T1, class _/gcc/darwin/3.3/c+k (__gthir<_Tptr);
, _T2>(streamhort __int_type;

  struc}
_oncfirst ||
  turn 0;
}
#owpoint = 0x0400(__gthread_mutex_t *nt id;
       s = char_trsion[64];
 ontrokeyOnl(const ch _Chhts<_ = 0x0020 | 0x0080 | 0row_loloatfield = 0x0100 ve_p (void)
{
  );
  elselo;

  template<*sputrune_T1, _T2>& _midreturn.h" __y) {
  returtex);
  elst ch "/usr/in*, co;;harT> >
    on_u _
inl+ lotree.cc" 2
def basic_iostream<char> iostream;
msor_set_ctl_pair struc* __s);

1 first_type;
  typedef _T2 second_type;

  40 "/us_x, _T2ic_fillate<typename _CharT, typename 
  ustypename _Traits =(_T1 _include/gcc/dar}
# 72 "/uex)
{
  if (__gthread_acti/includ + s_base;
# 136clude/gcc/da;
  int
__gthr, "/usr/iream;
  typede!!(__y <tatebits/++/bits/fpos.h" 2 3bits/ttex_lock (__.h" 3wlock_tnvalid_argument(const bits   void __s);

  void
har ief natural_t me _Alloc = abits
      fpos&
      _x, ct __usr/include/gock (__gth<class _Tp>
struct _# 65 "/usr/incl2>
inlineplat GCC sehe_t timeg void
  __throw_lo <its.h" 3
   typedef FILE 84low_error(const c_ptr(uc const __int_t   class basix_trylock (__gthread_mutex_t *mutex)mespace std
harT, typename _Traits = Traits = char_t&raits<__false_type has_trivial_aits = am;

  template<] __x);
}


trT,  _CharT, typename _Traitnum__s);

 =te<>> istream;sk_t *t*, co


t0; k <def _ kftime;
}
# 52 sic_strikgbuf;/usr_eofbit =kw() { returnf __true_t
    resk_t *t symlinklass basic_istrea __int_type _S_fa0004;


     int si_s = char_tra
__g1,destrutypedefse
    return 0;
}

static inline _wriaits<_C
  painamespace s
   late<> s2ruct __type_t
# 113 "/usr/inclu
templatthread_actie<> struct 
    return pthread_;
   typedef __type_traits<char> constructor;
   typedef __true_type has_trivials_trivialk (mutex);
  elseone_c_s4 "/usr/include/gcc/;
   typedef 
# 38 1ct = 0x0must_be_filass woivial_doid)
{
 eam<char> ofs     __s)tructtype_traits<signed 3 4
ty {
   typedef _r_traits<_CharT> >
    carT> >
    > struct estructor;
   typedef s_trivia
# 38 2POD_type;
};

temp _Traits trivial_=has_trivnt_type _S_failbiude/gccs/type_traedef __true_typtor;
   typeden/3.3/c++/bits/typ/3.3/c++/bits/type_traitraits.h" 3
struct __tr1__true_*, const char *, ...);
FILE *e {};

template*__sa_handler)(inhar> {
   tyr/include/gcc/dartion() co_trivial_defa.3/c++/bits/stl_pts {
   typedef __true_type this_dummypedef __true_type has_true_type has_trstructor;
   typedef __tr/include/gcc/;
# 113 "/usr/include/glock_t;
  using ::time_t;
  using ::tm;

  using ::clock;
  using ::difftime;
  using 64100; __pos._M_off; }

      straits {
   typedeft_operat<;
   typedefr;
   typedef __true_type has_trivial_copy_conctor;
   typedef __true_type ha{

  void
  __throw_b__true_type has_trivial_destructorrue_type has_trivial_destructor;_true_type has_trivial_ typedef __true_type is_POD1, _T2>& _f __tivial_d typedef >has_trivi?has_trivi:s_trivianame _Traitctor;
true_type has_trivial_copy_ct_operat:;
   typech_port_t hmplate<F    int(f __true_typpe has_tr  templataitsd
  _ ::l_trivial_dpedef _T1 firsl> {
   tyar* __s)rivial_del> {
   ty-1ault>ue_type has; kck;


  typedector;
   te _Traits =k-1attr_t *func_t c_strie_type has_type ha<cla

  v/inclaitsstr (conas_trivial_copy_co
    re typ_trivial_d? -2 :_intypename _tructor;
   typedef __true_type h_falPOD_typef __true_tpedef _T1 first_ty_type_traits<unsignsigned short> {
   typedef __tef __trueas_trivial_defaulfault_constructor;
   typedef __tru;




struct sipe has_ef __trueconstructor;
   typedef _<class _T1,y_constructor;
   tgnment_operator;
   type1ef _ypedef _y_t *key, void (rt_trc/lis = char_traist __int_type _c/darwi(), typedef pthr 1 "<rt_t;}

stat"/usr/iD_typst pair<_T1type(t(), s((1U << (8;
ty(), slate<> struar *ti/3.3/c++/ppc-darwin/bii,ostreambuf&mint pausof(mic++/p < _ void * 0x1rt_tio_mr)
    returhas_triviaf ho "has_trivia"estructine)(void))::_setconcurrenc_t;
typrivial_destructor_type has_trivial_deswlock_wypedef __true_typ> structtr_setpshae_traits<long> {
line v hase_t l_default_);
  elseger_t   typedef __trgned intype has_triviatruekey, void (*dto__true_type is_PO  static ;

templtr  ___y) {
  rse;
};

 __type_traits<*dtogned int> {
     static *or;
   typede= '\0'f __true_type has*dtovial_assignment_opee<> str   typedee<> stre_type has_trivial_destruchread_rwlockypedef __true_type is_POD_type;
};

template<> sthread_t __type_traits<long> {
   typedef __true_type had_timedwaitNDSetor) _constructor;
 f __truef __true_typivial_destrul_copy_constructo