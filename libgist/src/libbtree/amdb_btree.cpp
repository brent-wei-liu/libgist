# 1 "amdb_btree.cc"
#pragma GCC set_debug_pwd "/Users/jmh/devel/libgist/src/libbtree"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
# 66 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 70 "/usr/include/sys/types.h" 2 3 4


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
# 73 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/machine/ansi.h" 1 3 4
# 33 "/usr/include/machine/ansi.h" 3 4
# 1 "/usr/include/ppc/ansi.h" 1 3 4
# 92 "/usr/include/ppc/ansi.h" 3 4
typedef union {
        char __mbstate8[128];
        long long _mbstateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" 2 3 4
# 75 "/usr/include/sys/types.h" 2 3 4
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




typedef long unsigned int size_t;




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
# 65 "/usr/include/stdio.h" 2 3 4
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
# 6 "amdb_btree.cc" 2

# 1 "/usr/include/stdlib.h" 1 3 4
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
# 8 "amdb_btree.cc" 2



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

# 1 "/usr/include/string.h" 1 3 4
# 72 "/usr/include/string.h" 3 4
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
# 52 "/usr/include/gcc/darwin/3.3/c++/cstring" 2 3
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
# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
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
# 40 "/usr/include/pthread.h" 2 3 4




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
                      typename iterator_traits<_Iterator>::value_type,
                      typename iterator_traits<_Iterator>::difference_type,
                      typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::difference_type
                                                               difference_type;
      typedef typename iterator_traits<_Iterator>::reference #pragma G;
 _pwd typedef"/Usename ibtree.c# 1 "amdb_btree.cc"
pointer built-i;
g_pwdpublic:

<comma  reverse_libgist/() { }>"
#g_pwd "explicit# 1 "amdb_btree.cc"




libgist/srype __x) : current( 4
# 1 "/usr/includdb_btree.cc"




const 1 3 4
# 66 "/usr&3 4
#g_pwd "1 "/usr/inclu."/usr/ide/sys/typg_pwd "/emplate<mh/devel/b_btr>g_pwd "" 1 3 4
# 66 "/usr/include/sys/types.h" 3db_btr> 4
# 1 "/usr/r/include/sys/apbase()de/sys/types.h" ude/stdio.h" g_pwd " 4


# includ{ return "/usr/i;.h" 1 3 pes.h" 1 ragma Gg_pwd "optree.c*# 30 "/ug_pwd "{nclude/syb_btree.c __tmp =e/machine.h" 2 3 4

clude*--ypes.edef sigtypes.h" 3 4
#built-iinclude/ppc/typ-># 30 "/usr/include&(/ppc/types.)e/types.h" 3 4
# 1sys/types.h" 3 include/ppc/typ++(1 "/usr/ "/usr/inc--3 4
typedef signed char ithistypedef unsigned char ef int int32_t;
ypedef unsigned inintt u_int32_t;
typedef int int32_t;
types.h" def unsigned edef long long int64_t;
type8_t;
typedef unsigned char ef int int32_t;
typedef unsigned--nt u_int32_t;
typed++ long long int64_t;
typedef unsigned long long u_int64_t;

typedef .h" 2 3 4

#;

typedef long int intptr_t;
typedef unsigned long int uintpachine/ansi.h" 1 3 4
# 33 achine/types.h" 2 3 4
# 73 "/usr/include/syypedef unsigned (difragma Go.h" 3 4n.h" 1 3 4
# 69 ed char 1 3 4
# 66 "/usr/i/usr/i -hine/u_int16_t;
typedef int int32_t;
typedef unsigned =/usr/include/machine/ u_int32_t;
typedpes.h" 2 =hineong int64_t;
typedef unsigned long long u_int64_t;

typedef int32_t registe-/usr/include/machine/ansi.h" 2 3 4
# 75 "/usr/include/sys/types.h" 2+3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 30 "/-sr/include/machine/endian.h" 3 4
# 1 "/usr/incl+de/ppc/endian.h" 1 3 4
# 81 "/usr/include/ppc/endia "/usr/include/ppc/typ[]/usr/include/machine/ansi.h4
# 75 "/u*(def u
unsigned ldef u;
# 269 "/usr/include/gcc/darwin/3.3/c++/bits/stle.cc"



.h" 3
67 "/usr/include/sys/typeee.ccnsigninline boolnsign/ppc/typ==lude/sys/cdefs.h" 1 3 4
# 70 ee.cc 4
# ,int uintp
# 1 "/u_t;
typedef int64_t quad_t;
typedef ydian.h
# 75 "/u 2 3 4


# =de/py3 4


#e/typt ushort;
typedef unsigned int uint;


typedef u_int64_t u_<ad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;
typedef char * caddr_t;
typedef int32_t daddr_t;
typed_t;
type <pedef int32def u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_!uad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;
typ!nclu_t dev_nlink_t;
typedef quad_t off_t;
typedef int32_t pid_t;
typedef qua> in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;f u_indef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_tuad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;
k_t;
typedef u_int32_t uid_t;
# 117 "/usr/include/sys/typemask;


typedef unsigned long clock_t;




typedef long unsigned int size_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef u_int32_t uid_t;
# 117 "/usr/include/sys/types. u_i4
typedef unsigned long clock_t;




typedef longmh/devel/ypedef int64_t quad_t;
type::usr/include/mac u_int64_t u_- in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef 3 4nt16_t nlink_t;
typedef quad_t off_t;
typedef int32_t pypedef int64_t quad_t;
type u_int64_t u_+(ck; char opaque[596];} *pthread_t;

typedef struct _ohine;
typedef u_int32_t ino_t;
typedef long key_t;
typede 1 "/us
# 75 "/usr/include/sys/tdb_btree.cc" 2 3 4


#2 3 4
# 1 "# 32u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsContainpes.h" 2class back_inserteL;
} __mbstat:and line/machine<outpur_t;

type_tag, void sig; char opaque[r opaq "/usrprotected:g_pwd " opaque[12*32_tque[12"<command line>"_pwd "/Users/j opaque[12ng sig; cho.h" ;sr/include/stdio.h" 1 3 _rwlockattr_t;

type( opaque[12 4
# 1/inc sig; ch(&clude/sys# 355_int;
typedef unsigned long u_long;
typedef unsigned short  "/usr/include/stdio.h" typedef unsigned= pthread_m opaque[12::
type_#pragma GC__valuedian.h" 3 4
# 1 "/u sig; ch->push__rwl(dio.h" 3ong int64_t;
typedef unsigned longsbuf {
        unsigned char *_base;
     es.hd short u_ef un    int _w;
        short _flags;
        short intile;
        struct __sbuf _bf;
        int _lbint32_t register_t;

tile;
        structsigned in386pthread_cond_t;

typedef struct _opaque_pthread_rwlockattr_t { long sig; char opaque[12]; } p;


typerwlockattr_t;

type< opaque[12]; } pct __sbuf _e 2 3 4
# 91 "/usr/ypedef struct ct __sbuf _ub;
        unsigned nclude[24];401pthread_cond_t;

typedef struct _opaque_pthread_rwlockattr_t { long sig; char opaque[12]; } pthreadfrontockattr_t;

typedef struct _opaque_pthread_rwlock_t { long sig; char opaque[124]; } pthread_rwlock_t;

typedef struct { long sig; char opaque[4]; } pthread_once_t;



typedef unsigned long pthread_key_t;
#extern FILE __sF[];
}
2 3 4
# 91 "/usr/include/stdio.h" 3 4
type42s_t (*_seek) (void *, fpos_t, int);
        int (*_write) (v, ..xtern FILE __sF[];
}
ar *_base;
        int _size;
};
# 138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
     xternnsigned char *_p;
        int _r;
        int _w;);
int fputc (int, FILE *);
int fputs _file;
        struct __sbuf );
int fputc (int, FILE *);
int fputs void *_cookie;
        int (*_xtern FILE __sF[];
}
# 241int (*_read) (void *, char *, int);
        f457_t (*_seek) (void *, fpos_t, int);
        int (*_write) (void *, const char *, int);


        struxtern FILE __sF[];
}
   unsigned char xtern FILE _   int _ur;


        unsigned cherror (const char *);
int printf ar _nbuf[1];7s_t (*_seek) (void *, fpos_t, int);
        int (*_write) (void *, const char *, int);


     threadckattr_t;

typedef struct _opaque_pthread_rwlock_t { long sig; char opaque[124]; } pthread_rwlock_t;

typedef struct { long sig; char_pwd "/Use _size;
};
# 138  1 "/usr/libgar opaque[4]; } pthread_once_t;



typedef unsigned long ptr/include/_t *);
char *fgets (char *, in,ack; char ar *, const char *, .__i1 "/usr/incude/stdio.h" 3,...);( vpr {type518t char *, const char *);
int fprintf (FILE *, const char *, ... fputc (int, FILE *);
int fputs (
typed int _size;
};
# 138 "/usr/include/stdio.h" 3 4
typedef structlibgh" 3__sFILE {
*);
inlude/,tdio.h" 3ypedef union..);
Fr *_p;
        int _r;
        int _w; *, const char *, ...);
int fseek (FILE *, long, int);
int fs(FILE *, const fpos_t *);
long ftell (FILE *);
size_t fwrite ((FILE *, const fpos_t *);
long fte(void *, char *, int);
        f550pthread_cond_t;

typedef struct _opaque_pthread_rwlockattr_t { long sig; char opaque[12 char *, __bigned int uint;


typ(const char *);
int printf (cons *, ...);
int putc (int,,clude/ppc/typprintf  "/usr/id char  (int);
int puts (const char *)f(fd_mask) * 8)))]t char *, __builtin_va_li(const char *, const char *, va_lihar *ct}
}

evelspa/stdignu_cxx
{ypes.h"
  using stdt char *, # 1 "amr *)const char *, __buir *)ushort;
typedef unsigned in char *, __builtin_vacanf (const __normaef unsigne "/usr/inuct _opaque_pthrmh/devel/libgist/src/libbtree"
# 1 "<libgist/scategoryr *, size_t, const char *,mh/devel/libgist/src/libbtree"
# 1 "<o.h" o.h"  char *, int), fpos_t (*)(void *, fpos_t, int), int (*)(void *)usr/include/mac char *, int), fpos_t (*)(void *, fpos_t, int), int (*)(void *)built-i char *, int), fpos_t (*)(void *, fpos_t, int), int (*)(void *) 2 3 4


} pthread_rwlock_t;

typedef sude/ppc/tyM_3 4
typedcommand line>_pwd "/Users/jmh/devel/libgist/src/libbtree"
# 1 "<pedef struct _opaque# 6 "amdb_btree.cc" 2

# 1 "/usr/include/stdlib.h" 1 3 4
# usr/include/macug_pwd "/Users/jmh/devel/libgist/src/libbtree"
# 1 "<#pragma GCC set_debug_pwd "/Users/jmh/devel/libgist/src/libbtree"
# 1 "<built-in>"
# 1 "<comma 3 4
extern "C" {
F(/inc          ('\n'))
  
# 1 "/usinclude/stdio.h" 1 3  long quot;
      
typed'\n'))
   4
#i  long rem;
} ld_list    int _w; "/usr/include/sys/types.h" 2 3;


typ
extern int __mb_cur_max;4
extern "C" {
Fdb_btr,r opaque[12]ern "Cnclude/sys/
 void
       3 4


# 1 "/usr 3 4
# 1 "/usr/include/ppc/types.h" 1 3ile;
                 usr/includu_int8_t;
typedef short int16_t;
typedef uint (*)(const void *, atof (const charfsize;


        void *++int (*)(cons;
        struct         div (int, int); size_t, FILE *);
int getc (FILE long quot;
                ++# 1 "/u        div (int, int);
 void
         

#  { --);
void free (void *);
char *getenv (const char *);
 long
         ppc/ansong);
 ldiv_t
         ldiv (long, lon--;
void *mallo 2 3 4


typedef unsigned c
typedusr/include/mac 4
#e/ansi.h" 2 3 4
# 75 "/u          [__n]v_t
         div (int, int);
 void
         e
int vas strtol (const char *" 2 3 4
#          ine/endie (void *);
char *getenv (const char *);
 long
         l);
long strtol (const char *, char **, int);
unsign_t
         ldiv (long, lon
unsigned lo*malloc (size_t);
void qsort (void *, sisystem (const char *);


int mblen (const char *,ude/ppc*)(const void *, const void *));

int rand (void);
void * wctomb (char *, wchar_t);
int mbtowc (wchar_t *, const char *, size_t);
size_t 3 4
# 1 "/ 8)))];
} fd;




extes.h" 1 3 4
# 30 "/usr/includeint (*)(const signed in65

        struct __sbuf _lb;


        int _blksize;
        fpos_t _offset;
} _btree.cLE *, char *, int);
iR
}
# 338 "/usr/include/st;


typedef u_t64_t u_quad_t;
t atof (const char *);
i(size_t atoi (const chlhsuad_t * qaddr_tunsigned char *dat, int datlen);
Roid arc4random_strhs mblng);
 ldiv_lhsf int32_t devrclose (vodef u_int32_t fixpt_t;
typedef u_i    arc4random (void);
void arc4random_addrandom (unsigned char *dat, int datlen);
oid arc4random_stir (void);
char *getbsize (int *, long *);
char *cgtcap (char *, char *, int);
int cgetclose (void);
int cgetent (char **, char **, char *);
int ce_t);

u_int32_t
         arc4random (void);
void arc4random_addrandod_t rlim_ed char *dat, int datlen);
void arc4random_stir (void);
char *getbsize (int *, long *);
char *cgetcap (char *, char *, int);
int cgetclose (voi!);
int cgetent (char **, char **, char *);
int cgetfirst (char **, char **);
int cgetmatch (cha

long a64l (const char *);
char *l6 char **);
int cgetnum (char *, char *, long *);
int cgetset (char *);
int cgetstr (char *, char *, char **);
int onst void *));

charhar *, char **);

int daemon (int, int);
char *devname (int, int);
int getloadavg (double [], int);t in_added char *dat, int datlen);
void arc4random_stir (void);
char *etbsize (int *, long *);
char *cgetcap (char *, char *, int);
int cgetclose (voi u_int cgetent (char **, char **, char *);
int cgetfirst (char **, char **);
int cgetmatch (cha *, size_t);
char *realpath (const  char **);
int cgetnum (char *, char *, long *);
int cgetset (char *);
int cgetstr (char *, char *, char **);
int  long, int);

long long
         strtoll(const ce_t);

u_int32_t
         arc4random (void);
void arc4random_addrandoe_t;



_t);
char *realpath (const char *, char resolved_path[]);
char *setstate (char *);
void srandom (unsigned long);
char *user_from_uid (unsigned>long, int);

long long
         strtoll(const char *, char **, int);
unsigned long long
      efs.h" 1
# 10 "/Users/jmh/devel/libhar *, char resolved_path[]);
char *setstate (char *);
void srandom1 3 4
# 40 "/usr/include/gcc/darwin/3.3/assert.h" 3 4
extern "C" {
extern void __eprintf (cons);

int rand_r (unsigned *);
long random (void);
void *reallocf (void 
long a64l (const char *);
char *l64a (long);

char *group_from_gid (unsigned long, int);
int heapsort (void *, size_t, size_t, int (*)(const void *, c<);
int cgetent (char **, char **, char *);
int cgetfirst (char **, char **);
int cgetmatch (chae/gcc/darwin/3.3/c++/bits/functexcepint);
long long
         strtoq (const char *, char **, int);
unsigned long long
         strtouq (const char *, chgetustr (char *, char *, char **);

int daemon (int, int);
char *devname (int, int);
int getloadavg (double [], int);;
       ed char *dat, int datlen);
void arc4random_stir (void);
char *getbsize (int *, long *);
char *cgetcap (char *, char *, int);
int cgetclose (voi>);
int cgetent (char **, char **, char *);
int cgetfirst (char **, char **);
int cgetmatch (chat char* __s);

  void
  __throw_out_ char **);
int cgetnum (char *, char *, long *);
int cgetset (char *);
int cgetstr (char *, char *, char **);
int r* __s);

  void
  _ar *, .3/c++/vector" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 1 3
# (const chad char *dat, int datlen);
void arc4rando(__swbuf(_c, _p));
}_pthread_attr_t in/3.3/c++/ppc-darwin/bits/c++config.h" 1m_stir (void);
char *getbsize (int *, long *);
char *cgetcap (char *, char *, int);
int cgetclose (voi 3 4nt cgetent (char **, char **, char *);
int cgetfirst (char **, char **);
int __s);


  void
  __throw_ios_failure(colude/gcc/da} pthread_m __s);


  void
  __throw_ios_failure(coaque_pthread_condattr_t { long sig; char* __s);


  void
  __throw_ios_failure(const ar *)ng);
 ldiv_t
         ldiv __throw_ios_failure(co char *);
v
unsigned ltypemove (const char *);
int rename (const char *algo 4

d sh2 3
ist);
int vsstd
{
# 9

        struct __sbuf _lb;


        int _OCKED=4
    ort ushort;
typedef unsForward_btr1 char *, __bet_per_thre2t uint;


typig; onst cter_swap(set_per_threa __a,igned int key, __bar *, size_t, /Users/jmh/devel/libgist/src/libbtet_per_threa *));




}

 _V.h" Type1ug_pwd "/Users/jmh/devel/libgist/src/libbtned int key, swide_ptr(unsigned int 2g pthreadtern void _keymgr_s(char *,gned int k unsigned __ar *);
FIned signedbint key, unb de/pt;
typedetype1t vsprintf (char *, const char *, __builtin_ved int key) ;
extern void _keymgr_sTp void *keydata) ;
exteid *_kTp 4
#ock_igned (unsignedset_lockmode_prTptypes.h" ed int key,unsignd int mode);
extern unsigned int 4
        NM_ENHANCED_LOCKING=3,
        NM_LOCKED=4
    extern int _keymgr_get_lock_count_procin/3.3/Tp mrandmincur_max;igned inte.h" 2 3
# 1 
# 155 "/usr/include/gcif (;
ex u_ia)g);
 ldiv_bchar *, ied int ke int 6nclude/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 2 3
# 65 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algoaxse.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cstring" 1 3a# 48 b/usr/include/gcc/darwin/3.3/c++/cstos_t (*_seek) (void *, fpos_t, int);
        +config.h" 2 3
# 65 "/usr/include/gcc char *, __buimpar= _p->_n/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gccoid a50 "/ __comp# 155 "/usr/inng" 1 33 4
1 3
n "Ca)/usr/include/gcc/darwin/3.3/c++/cs204e/gcc/darwin/3.3/c++/cstddef" 2 3

namespace std
{
  using ::ptrdiff_t;
  using ::size_t;
}
# 50 "/usr/include/gcc/darwin/3.3/c+1 "/usr/include/stddef.h" 1 3 4
#/string.h" 1 3 4
# 72 "/usr/include/string.h"ock__bxtern "C" {
void *memchr (const void2rn void * _keymgr_get_per_thread_data(unsigned int key) ;
extern void _keymgr_sInput);
int(const chaOad_rwtypes.h" 2win/3.3/r *strcpy rt[3]stripy( *, const  __firstnt s (const chalastuad_t * qaddrt char *);
/ppcesulr *strerror (ii, colock_t { longar *, size_t, for ( ;char *, igned char;int)trlen (cp (cor *, r *);
long*const chsignedr *, r *);
FIcc/darwinrlen (3.3/c++/" 1 3
# 64 "/usr/incluRandomAccessnst char *);
char *strcpy (char *, const char *);
size_t strcspt char *, const char *, conconst char *, constchar *strerror (int);
size_t strlen (const char *)r char_a*, cor *strncat (char *, const c/Users/jmh/devel/libgist/src/libbtt char *, const  (__swbuf(_c, _p));
}
# 6 "am_Distadebug_pwd "har *y (const {
  n/bitchar++/pptrncpy);
vo> 0; sizr *, "/usr/incize_t);
char *strncpy (char niont char *, int);
void char *, sizec++/(char *, const char *, size_t);
char *strpbrk (conslock_count_proc_Tp*size_t strc_trivialse.h" 2 3
*char *, cochar *strdup char *strdup rlen (ar *, size_t, memmove(const charhar *, cosizeofnsig) * 1 3zero (void *, uiltin_vr *, const char * +char *, size_t);
vo, size_t);
char *strpbrk (cons*, const char *);
char *strcpy (char *, const char *);
size_t strc_aux2spn (const char *, const char *);
char *strerror (ior (int);
size_t strlen (cstrlals


}

_t daddr_t;
typedstrcspar *, cone_t strl "/usr/incl(*)(void *, const 2 3
# 7t u_int*, const char *, size_t);
char *strsep (char **, const char *);
char *strtok_r (char *, const char *, char **);
void swab (const void *, void *, size_t);

}
# 52 "/usr/incltr



}

rwin/3.3/c++/cstring" 2 3
# 77 "/usr/include/gcc/darwin/3.3/c++/cstring" 3
namespace std
{
  using ::memrcasecmp (const char *, const cconst trdup (const );
size_t st(fd_mask) * 8)))]lcat (char *,coll;
  using ::strncmp;
  using :char *);
2 3
# 77 "/usr/include/gc:strtok;
  using ::memset;
  using ::strerror;
  using ::strlenchar *strdup (const char *);
size_t stline void*
  memchr(void* __p, int __c, size_t __n)
  { return memchr(const_cast<const void*>(__p), __c, __n); }

  using ::s_t);
char *strsep (char **, const char *);
char *strtok_r (char *, nist char *, char **);
void swab (const void *, void *, sitrcmp;
  using ::strcoll;
  using ::strn->_p++ = _c);
        else
               , const e_ptr(unsigne;
void bcopygned int ug_pwd "/Users/jmh/devel/_o.h" # 1 "amdbgned int >::haschar *);_assignment_/ppc/typ;
void bcopyTar *);d strmode (int, r *strcpy /stri::strlen; 3
# 77 "/usr/i *, size_t, const char *, __builtin_vaclude/gc3 4


# 3
# 1 "/usr/include/gcc/darwin/3.3/c++/
# 66 "()uiltin_va_ const char* __s2)
  { return __builtin_strpbrk(const_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  strrchr(char* __s1, int __n)
  { return __buiude/gcc/darwin/3.st_cast<const char*>(__s1), __n); }

  using ::strstr;

  inline char*
  strstr(char* __s1, const char* __s2)
  { return __builtin_strstr(const_cast<const char*>(__s1), __s2); }
}
# 66 "/usr/include/gccc++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/dastrlen (const char *)win/3.3/c++/climits" 3

#1 "/usr/include/limits.h" 1 3 4
# 62 "/usr/include/limits.h" 3 4
# 1 "/usr/include/gcc/darwin/3.3/m1sing ::strrchr;

  inline char*
  strrchr(char* __s1, int __n)
  { return __builtin_strrchr(const_cast<const char*>(__s_Isde {
        NM_ALr *strcpy (::_Nexter _ using  4
# 50 "/usr/include/  usiid *, " 1 3
#  "/usr/using ::bse* __p, intusing  2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
# 84 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
namespace std
{
  using ::div 1 "/usr/include/ppc/limits.h" 1 3 4
# 25  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  7 "/usr/include/gcc/da using ::div;
  u# 33u_int;
typedef unsigned long u_long;
typedeft char *);
int strcoll (const char *, const char *);
char *strcpy (char *, const char *);
size_strcspn (const char *, const char *);
char int __n)
  { return _# 155 "/usr/incet_lock *);
FILrealloc;
  using ::srand;
  using ::sting ::strstr using ::atof;
  using :::atoi;
  using :1ystem;
  using ::wcstombs;
  using ::wctomb;

 e.h" 1 3
# 64 "/usr/incluBidirectionalthread_data(unsigspace std
{
# 52 , void *keydate/gcc/darwin/3.3/c+_r (char *, ct _per_(espace std
{
# 52 "char *, coneption() throw() { }
st void *, void *, siz     /gcc/darwin/3.3/c+lude/gcc/darwin/3.3/c++/bits/stbpace std
{
#r *strncat (char *, const cwhile 1 3e_t);
int strnc char *, sit ff_t);
char t fftrncm (char *, const char *, size_t);
char *strpbrk (const char *, const char *);
chaspace std
{
# 52 +/exception" 3
  class exceptio
  {
  public:
    excconst char *, const char *);
char *strstr (const char *, const l const char* what() const lude/gcc/darwin/3.3/c++/bits/stnst char *);
size_t strxfrm (char *, const cize_t);



int bcmp (const void *, const void *, size_t)e/ppc/endianvoid *
void bzero (void *, size_t);
int ffs () { }


    virtual ~bad_exception() throw();
  };


  typedef ase.h" 1 3
# 64 "/usr/incluspace std
{
# 52 "/usr/include/gcc/darwin/3.3/c+ 3
# 1 "/usr/ void __verooln_stride_pttruc.3/cpublic:
    e_dispatchr *, size_t, static 3
  class exception
  {
/gcc/dareption() throw() { }
    virtual ~exception() throw();


    virtuahar* what() const throw();
 typedef long int intusr/include/c:
    exc_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3ude/gcc/darwin/3.3/c++/bits/stl_alg set_newrwin/3.3/c++/cstring" 3
nameid *, int, si}   re
  using ::memset;
  using rn "C++" {

namespace std
{



<;

 :memchcoll;
  using} pthread_rwad_alloc :char *, /gcc/dachar *strdup (const char *);
size_t strlcat (char *, constpedef struct __st ptrusr/_t _Numoid bzero (void *, s *);
FILE size_t);
size_t++/pNum strlcpy (char *, const cr nechar *_p;
        id* operator ne++/new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operatochar *strdw[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* opehrow_t nothrow;


  tyd* operator new[](std::size_t) throw (sude/sys:ing" 2 3
# 77 "/usr/include/gcc++/new" 3
void* operator new(std::size_BI"/usr/include/I++/exception" 3
In
  {
  public:
    estrl(*, v }
    virtu/bits 2 3

#BIow_t { };
  exteusing ::realloc;
  using :  { return __attribute__ ((__noreturn__) { *));




}

s.h" 2 3 4/include/gcc/darwin/str(const_cast<const char*>(__s1)ts.h" 2 3 4
# 50 "/usr/include/d* __p) throw() { r, voi/c++:memar *);# 1 "/usr/include/gcr delete (void*, void*) throw() { };
inr/include/lim ete[](void*, void*) throw() { };

}
# 70 "/usr/include/gcc/darwin/3ead_rwlt
         ldiv (+/bits/stl_algobase.h" 2  1 "/usr/include/gcc/darwin/3virtual const cha 1 "/usr/incoll;
  using ::strncmp;
  usBI:atoe/gcc/darwin/3.3/c+ 3
# 77 "/usr/include/gc3 4


# t (char **, charlude/gcc/darwin/3.3/c++/clocale" 3

# 1 "/usr/include/locale.h" 1 3 4
# 39 "/usr/include/locale.h" 3 4
struct lconv {
        char *decimal_point;
        char *thousands_sep;
  ude/gcc/darwin/3.3/c++/cstring"*int_curr_symbol;
        char *currenc;
        char *mon_decimal_point;
        char *mon_thousands_sep;
        char *mo;
char"/usr/include/locale.h" 3 4
struct lconv {
        char *decimal_point;
        char thousands_sep;
        char *grousing ::realloc;
  using ::srand;
  using ::stc++/io using ::atof;
  using ::atoi;
  usinge.h" 1 3 4
# 39 "/usr/include/locol;
  using ::bsearch;
  usin
        char *decimal_point;
        char *ler set_new_handle;
  using ::div;
  using ::exitn_cs_precedes;
        char n_sep_by_space;
        char p_sign_posn;
        char n_sign_posn;
};
# 76 "/usr/include/locale.h" 3 4
extern "C" {
struct lconv *localeconv (void)using ::rand;
  using ::realloc;
  using ::srand;
  using ::stcc/darwin/3.3/c++/clocale" 2 3





namespace std
{
  using ::lconv;
  using ::setl7 "/usr/include/gccconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwising ::wctomb;

  i47id);
char *gets (char *);

extern const int +config.h" 2 3
# 65 "/uslude/gcc/darwin/3.3/c++/clocale" 3

# 1 "/usr/includpublic:
    exce/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcoid _keymgr_set_lock} pthread_once_t   {
      char* __old = setlocaesswwin/3.3/c++/clocale" 2 3





namespace std
{
 ;
        char n_sign_p;
      if (__sav)
        strcpy(__sav, __old);
      setlocale(0, "C");

     int __ret;






 50ine long
  abs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i,et_per_threchar *);
chalock_coua) ;
extefill_keymgr_get_achar *, con   rune_t map; 2 3

e.h" 2 3
# 1 o.h" 3 4
ty"/usr/include/gchar *, size_t);
int strncmp (coconst char *, sizee_t);
/bito.h" 3 4
# 1 "/u3rn void * _keymgr_get_per_thread_data(unsigned int key) ;
extern void _keymgr_sr *strcpy char *);
chaSizene_t min;
        rut char *);
size_
   _n(nt);
size_t str *, con *, attr_es;
} _RuneEntry;

typedef struct {
        int nra_t);
int ffsar *, const char *, sizeneRange;

typedef strstd::size_ttrncpy (cha3/c++d *keydata) ;
ex
    unonsted chardup (const <8 )];






     *types;
} _<8 )];






 4
#cf enu++/ne<8 )];






arwin/3.3/ccow_t&)memse    3
# 77 "/tmp:bsearchcasecmp (const r/incune_t mapupper[(1 < )];






        _RuRange runetype_ext;
       RuneRange maplower_ext;
      _RuneRange mapupper_ext;

        void *v_alloc_cast<<8 )];






    tmp::bsearch    int variable_len;
} _RuneLocale;






        _Ruunetype_ext;
       ge maplower_ext;
  69 "/usr/include/ctype.h" 2 3 4
# 100 "/usr/include/ctype.h" 3 4
extern "C" {
int isalnum (int);
in "/usr/include/sys/ *, t uint;


typ<8 )];






  int (*sputr<8 )];






        _Rue_t, char *, size _RuneRange maplower_e*, const ch      void *vare_t);
unsig/c++cid strmode (int, cram (int);
 1 3
# 48 "/usr/inct (int);
int tolower (int);
t toupper (int);


int d (int);
int isascii (int);
int ilank (int);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram (int);
int isrune (int);
int isspecial (int);ascii (int);

}
# 158 "/usr/include/ctype.h" 3 4
nt);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram (int);# 60de/gcc/darwin/3.3/c++/cstddef" 2 3

namespace std
{
  using ::ptrdiff_t;
  usining ::strad_data(unsiging ::str, void paiew" 3
# 1 "/win/e(c, f));
}

stamism



spn (const bits/stl___isctype(intase.h" 21   strcpy(__savsctype(int int isph2c/darwin/3.3/c++/new"et_lockmode_
# 47 "/u    bad_except1
int strnc1 &&1 <<8 )];1_t d <<8 )];2 (int);
charoid *memckey, void| _c >= (1 2++/new" 3
voidstd::sizetic inline int
__isctype(int _ inline i strlcpy 2ctomb;

  i64);
FILE *popen (const char *, const char *);ype(int c, unsigned long f)
{
        return !!(__maskrune(c, f));
def void (*unenaryPredi*, c}

static inline int
__isctype(int _c, unsigned long _f)
{
        return (_c < 0 || _c >= (1 <<8 )) ? 0 :
                !!((1 <<8 )) ? 0 :

# 50 "/usr/incar *# 50 _predc/darwin/3.3/c++/new" );
}

static inline int
__toupper(inint iscntrl(i(t _c)
{
 ,    return  (_c < 0 || _c >= (1 <<8 )) ? ___toupper(_c) :
                _CurrentRuneLocale->mapupper[_c];
}

static inline int
__tolowe6keymgr_get_lockmode_processwide_ptr(unsigned int key) ;
extern int _keymgr_get_   return !!(__maskrune(c, f));
}

sta;


typedef u_inequconsg _f)
{
        return (_c < 0 || _c >= (1 <<8 )) ? 
                !!(_DefaultRuneLocale.runetype[ {
        int nranges;int
__touppeRuneEntry *1ar *, const(_Defauinclude/! islower(i       return ();
}

namstd::sizeude/gion() throw();
;
  nt
__tolowe9ine long
  abs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i, long __j_CurrentRuneLocale->maplower[_c];
}
# 50 "/usr/include/gh;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isuppesing ::isspac(int c);
extern int iscntrl(int c);
extern int isdigit(inower;
  using ::toupper;
}
# 48 "/usr/include/gcc/darwin/3.3/c++/i);
extern int islower(int c);
externude/gcc/darwin/3.3/c++/bits/stringfwd.h" 1 3
# 43 "/732etype[_c]) & _f;
}

static inline int
__istype(int c, unsigned long f)
{
        return !!(__maskrune(c, f));
}

staedef u_inlexicographicaltringare
  using ::isprint;
  using ::ispunct;
  using ::isspant;
        char *ttraits<_CharT>,
     1 "/usr/includchar(_DefaultRuneLocale.runetype[_c] & _f);
}

ower;
  using ::toupper;
}
nt c);/gcc/d
int strnc
  {
  p" 3
na# 48 "/usr/include/gcc/da}
# 298 "/usf osfwd" 2 3
<    return ude/gcc/darwin/3.3h" 1 3
# 4sing ::fpos_t;

2 using ::cl1ude/gcc/darwin/3.3/c++/iosfwd" 2nt, size_t);
charc)
{
     sr/include/gcc/darwin/3.3/c++/r/include/g6   if (__prec >= 0)
        __ret = sprintf(__out, __fmt, __prec, __) :
                _CurrentRuneLocale->maplower[_c];
}# 50 "/usr/in3.3/c++/ppc-darwin/bits/c++io.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++io.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cstdio   strcpy(__sav, __old);
     tring.h" 1 3 4
# 72 "/usr/incunetype[_c] &++/cstdio" 3
# 97 "/usr/include/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILE;
  using ::fstring.



}
# 49 "/usr/include/gcc/darwin/3.3/lose;
  using ::fe::tmpfile;
  us2nt c);
ext1lude/gcc/darwin/3.3/c++/iosfwd" 2tc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using 
void arc4random_pc-darwin/bits/c++io.h" 
int isblank (int);dup (cons1);
int isblank (int);ype_ext; (1 <<8 )) ? 0 :oid);
char *getbsiz<8 )];






        _2gcc/darwin/3.3/c++/ppc-darwinearer(int);
 3 4
exze::si_len1oid bzero1 (void *, key, vor/include/gcc/darw2oid bzero2 (void *, 
  usinr/inclincc/d_t);
charmemcng.h"   return+/ppc-darobas/darwi:bseaen2/c++/newthrow();
void op!= 0 ?4 "/usr/in< 0g atdarwin u_iead_iable_len;
} _Rurwin/3.3/c++/ppc-darwin/bits/gthr.h" "/usr/include/gcc/darw+/ppc-darwin/bits/gthr.h" 3
# 1 "/usr/include/g/3.3/c++/ppc-darwin/biefault.h" 1 3
# 37 l.h" 1 3 4
#pc-darwin/bits/c++io.h" thr.h"  )];






 )/include/g
        char *decimal_point;
      " 2 3 4
# 37 "/usr/inclrwin/bits/gthr.h" 3
# 1 "/usr/include/sched.h" 1 3 4
# 10 "/usr/ic);
extern int isalph# 1 "/usr/include/sched.h" 1 3 4
# 10 "/usr/inclu intase.h" 1}
GAL=2 c);
}



namespace std
{
  using ::vector      # rn void * _keymgr_get_per_thread_data(unsignedlocd sh1usr/i8keymgr_get_lockmode_processwide_ptr(unsigned i.h" 1 3sr/include/pthread.h" 2 3 4
# 1 "/usr/includfunctexcept 1 3 4
# 83*, int, size_t);
int memcmp (const void ruct tm {
     sr/include/pthread.h" 2 3 4
# 1 "/usr/itm {
 ion_defines       int f off_t fpos_t;
# 107 "/usr/include/stdiruct tm {
         }TnodeMode ;



e
rune_t ma__throw_bad_    int t(ig; ority        char *tm_zone
    5 "/usr/include/time.h" 3 4
extnclu5 "/usr/i        char *tm_zone.h" id5 "/usr/include/time.h" 3 4logic_errb_cur_max



    sime (const struct tm domainst time_t *);
double difftime (time_t, timeinvalid_argu chae_t *);
double difftime (time_t, timelengthst time_t *);
double difftime (time_t, timeout_of_rangno.h" 3 4
# 1 "/difftime (time_t, timeruntimest time_t *);
double difftime (time_t, timenst s
size_t strftime (char *, size_t, const charverflowst time_t *);
double difftime (time_t, timeundchar *);
struct tm *gmtime_r (coime_t *);
struct tmos_failurno.h" 3 4
# 1 "/diffle->8ine long
  abs(long __i) { return labs(__i); }.h" 1 3/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/tithread
        in5*, int, size_t);
int memcmp (const void *, cstruct tm *3  long tm_gmtoff;
 (conrn "C++"Refcount_Basne c (void)/Users/jude/gcc/RC_       runelat  baread. (unref_espech" 2 3 4__gstruct_mutexnclude/unistd.h_lock   retu timespec *);
(r/inclur *, atol/unistd.hon" # 72 "/usr/incl# 72 "/usr/include/pes.h" {0x32AAABA7, {}}/os_definunistd.h" 3 4
# xtern unsi(int, FILong lraa) ;
exte_M_incrnt u_inle (int,# 72 "/usr/inclu4
# (&
 void
         _c++/new" nt);
/unistd.h" d int alarm (unsigned unint);
int chdir (const char *)ong lraread.char *, det);
unsigned int alarm (unsigned int);
int chdir (const char *);

# 1 "/usr/inclupes.h" size_hown (const char *, uid_t, gid_t);
int close (int);
size_t confst __mbstate8[128];
  nt, ed in1sr/include/runetype.h" 1 3 4
# 66 "/usr/inclunanosleep (cont isxdigit# 34 "dummy

extern "C++"Swap int)_rn "C+ypedef _alloc : 72 "/usr/include/Soid * 4
# 1d* operator new(*, char * const *nst *);
pid_t for*getcwxecvp (const cha<har * co:: (void);
lon/unistd.h" 3 4
extern    rune_t m<8 )];


long  chAtomicoid *_oups (int, gi std_pRuneRange rvoid)__q
# 37 "/usalarm (unsigned int);
id_t getegid (void0t geteuid (voidc++/new getpgrp (void);_t);
char *s
typedecharge;

qst cha*, uid_t, gid_t);
int clod (void);
uid_t getuid (void);
int isatt*, const char *, sint);
ex1ef off_t fpos_t;
# 107 "/usr/include/stdio.h"nanosleep (const struct times *);
int exTLsigned int)
}
# 3sing ::t# 72 "/usr/include/un4
# 1 "/usrnst char *, initialize;
unsigne# 19c/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usrst char *, charccess (const char *, acquire int);typedef sstd.h" 2 3 4
# 91 "/usr/int);
intze_t confstr (int,nst char *, releashar *ttyname (int);
int unlink (const ch;
int closeze_t confstr gned int2 vsprintf (char *, const char *, __builtin_vst char *, chargid (gid_t);autosetpgid (p);
gidt);
int setpg& (void);
int se

int acct (co(*);
int async_daemrr, op3 4
# onst crr, opypedef char *).pid_t);
char *ttynst void ~ar *brk (const oc (const char , size_t);

exnst voiprivatep->_p+ig;  *, ...);
int vas

int acct (co&c++/newar *brk (const nt encrypt (char *, int);
oid)le->9(int _c)
{
        return (_c < 0 || _c >= (1 one (int, ir/include/pthread.h" 2 3 4
# 1 "/usr/ippc-ned lon;
typa]);
city       int u_int;
typedef unsigned long u_long (u_long);
int fsync (int);
i3
/Users/j# 34 []);
chword;

_alloc ption" 3nt, int *, 
__attribute__ ((__unused__))
_e;
}hct tmand_add (
# 1 "/usrnt, int *, ;
pimem,
# 34 "val)t set *, mode_t);variable;
rea_lis__asm__   g# 1 "/utnam *);
FILE"/* I


typ
mode_t  & de (*/\n"d (pid_t _0:\t;
char *getlwarxint %0,0,%2 \nershell (voidadd%I3r *g1,%0,%3char *);
int inistwcx. " " (conwd (char *);
int inibne- cons0bchar *);
int ini/* End getsid (pid_t _pi;
char *ge: "=&b");
siz),har r);
iternmkdtemp (char"tf;
memmknoI(consgetpakdtemp (chacr0", "memory"c++/nthrow();
voiconst *);
long getha) ;

int gethostname (char *, int);sync (ode (const void *, mode_t);onstt
         getpagesize (void);
char *g(const char *);
int getpgid (pid_t _pid);
int sync (d_t _pid);
char *getusershell (void);
char *getwd 1char *);
int initgrou2r *get/inc(char *);
int iniiruserok (unsude/sys/signal.h" 3 4
 char *, const char *);
int issetu1 "/usr/inclu*mkdtemp (char *);
it char *, mode_t, dev_t);
int mkstemp (char *);
int mkstemps (char * *, cc/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usr/it);
int fchoTnodeMode ;



ext103"/usr/include/time.h" 3 4
struct timespec {
        tidio.h" 3 4
ewVED_NO# 37 "/rn (*_p->_p+_alloc ig; int);
ED_NOate(ude/gcc/dlude/uni int);
c::+locale.hnewinclunst void text {
    char de_onstack;    i
pid_tude/gc*crypt ( int sc_ir;delett);
pef unsiecv (cnst char *, const char *);
int fprintf (FILE  66 "/usr/inconf (int, int);inste/stdio.h" 3 4mED_NO/usr/i_ "/usr/i pthread_rwloetkey (consontext {
    ik (voomd int s;
    ic++/new" val_int;
        voir      d *sc_;
};
# 28
};







typedef  (
 intint sigset_t voihandler)(ime (c
struct sigconontext {
    int scsc_onstack;
    int sc_maskt32_t;
typed *sc_reg/usr/incluginfo  int ng ::vfprintf;
built
strxpec/inc_t);
cha= 0, 0lude/gcc/darwid *si_addr    void *sigv   union sigva*, const char *, sizestr (int,;
    int sc_sp;
 
        void *sc_regs;
};
# 2  mblen (cofresignal.h" i_pid;
        unsigned insiginfo_handler)(int);
      );
      pc/sigsznt si_status;
        void *si_addrsiginfo pid_tstruct __nion sigval si_value;
        long si_band;
        int pad[7];
} siginfo_t;
#ion_u __sigaction_u;
        vois/signal.h" 3 4
union __sigaction_u {
     nt si_set_errno;
t si_cod *sc:fpos_)bol;nt u_int32_t;
typedon __sigacold)32_tsi_errno;
        int si_conion sigvai_errno;
        int si_co
};
#fthrow_t&) throw();
old++/new" 3
void* ope/sys/signal.h" 3 4
typedef    int si_errno;
       "/usr/in3 4
typ::i_errno;
        int si_code; = 0pathconf (int, int);ss_size;
     ar *, co int sigset_t;

unionf struct schar *)  void *sigval_ptrnt sc_mask;ar *, con int si_eyn_u __sigactionde;
 ;
        void *si_a{
       har *;;(char *);
 "/usr/inc 3 4
/usr/include/sys
};
# 263 "/usr/include/sys/signal.h" 3val si_value;
        lon ss_onstack;
};
# 3d;
        int pad[ime.h" 3 4
extern ch        voi :fpos"/usr/include/sys/signal.h" pad[7];
} sigin;
        union sigvaclude/st { };
  extern_flags;
};




struct sigacti" 3
void*clude/sys/signal.h" 3 4
struct sigvec {
        void (*sv_handler)(int);
        intsiginfo {
   (int);
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
extern ion_u __sigactio *const sys_siglist[32];


extern "C" {
int raise (int);

int kill (pid_te/sy_once_t;c/signal.h int
 _ilt-ifaebugt;
i,


        REGS_SAVED_ALL
} regs_saved_t;
# 66 "/usr/inc::ptrdiff_t;
  using ::size_t;
}
AD_NOe/stdio.h" 3 4simplegnal.h" 3hread_rwl int si_pid;
       
void operat si_uid;
        int si_status;
    lcat (change;0nion sigval si_vw();
}

namd[7];
nge;"/usr/includ
voi>(har *)::         

  *char *, cons/c++/new" gs;
};




st4
union __sigaction_u {
 r *, int, int, int); mblen (cohrow_t n;

 )char *) const charhar *,ar *,l;
      ction_u {
        void (*__sa_han;

  us *, int);
int sigdesk;
 ::f0igned nint);
int ort (int *);igactio int *);
nt revoke (const char *);
int rresvport (int *);
int ru mblen (con*, const char *);
char (int);
int selectsigned int nclude/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3ort ushort;
typedef unsar *);


}
# 191 "/debugclude/unistd.h" 2        ir/includenum {_S_extrsign8* oper 2 3 4

int profil (cha unsigned int si_uid;
        int si_status;
    



    _t);
char# 158 )har *, const char *, + t getw*);
void        voi*;
    i*)7];
} siginfppc/endian.h" 1 3 4 char *);
inid (gid_t);
itypedef unsonst char *);
int rresvport (int *)sigset_t *, int);
int sigderegid (gid_t, gid_t);
alt chareuid (u_p -(char **, u_long *, u_lng ::fpuid_t);
void (voidnst cha (char **, abort.h" 2 3 4


;
int setegid (gid_t)off_t)r *sbrtrgid (gid_t);
int setruion)(int, struct __siginfo *,
                       void stack_sz*);
};


struct __sigaction {
     void sync (void);
int syscall (int, ...);
int truncate (const char *, off_t);
int pid_t tyslot (void);
unsigned int u, gid_t);
int setreuid (ualarm (u
          , unsigneconv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/ppc-darwipid_t t);
int unwhiteounsigned long);
int exchangedata (const char*,const char*ruct _etrgid (gid_t);
int setruid (uid_t);
void setusersheuct _ll (void);
int strtofflags (char **, u_long *, u_lon        fpcc/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usr/ing);
int sethostnameedefchar *uct         4
typedef unsigneddefaultigset_t;

union sigval {

        int sig char *ALIGN *setmopthread.h" 2 MAX_BYTES = 12# 1 "/usr/includeNFREELISTch_te/mach/mach/  3 4

tmode (ctty iogcc/bj, const char *);
/usr/inclu*ar *_sa__list_linkigned long);
i (unslichardata[1]++/new" 33 4
# 1 "_alloc :.h" 1
# 1 "/usrS 4
# 34 "/[ "/usr/incl]g pthread__alloc 



   S_start 4
# 
};







type_t;
typedendint64_t uint64_t;


ude/gcc/S_heap_ude/ef u_int8_t uint8);
int async_dint1nodnclude/_buil4
# 1 "/usrst8_t;
typedef t char *S_round_up;
    int byte*, int char *, charme (ypedeft);
al_ptr;ypes.h"-1) & ~(def uint32_t ui - 1voke (const char *);;
typedef uint8__sa_4 "/uindexeast8_t;
typedef uint16_t uint_least16_t;
typedef uintedef uint64/ int_fast32_t;
typee/typesonst char *);
intigned int8_tee;



ent);
int id);
inint64_t;



typet_fast8_t;chunktern chf uint16_f ui     char obje_r (c_fast16_t "C++"Ltpgid e (int, const vcludt chag" 1 3 (const(gid_32_t;
typedef int64har *, const char *);
rn "C" {~stdint.h" 3 4
typedef long long intmax_t;
typedef u, long, int);
int const cnst t gethostname (char *, in/c++/exceriend "/usr/includ_t int_least64_tze (void);
chaS_forcesignar opaque[4]; } pthrea        unsigned int si_uid;
        int si_status;
        void *ize_t, 4_t;
# 68 clude/stics.h" 1 3nt)))tyslot (voidp;
        ing ::fgetenv("GLIBCPP_FORCE_NEW"nt);
}
# 63 "/uonst );
ssize_int)ics.h" 1 3,ast6
extern "C" {el;

}
/c++/ppc-darwiclude/mach/ppc/vm_types.h"- 3 4
typedef uong *);
ing ::fr *, >edef uint32/mach/mac) ||nclude/mach/mac>       int pad[7];
_t,unsigneigned const char *,3 4
typedefigned int natur 3 4
# 1 "/usr8_t;
typedef u303 "/u4
# 34 "/ginfo_4
# 34 "/d int natural_t+nt8_t int_fast8_t;
6_t uint_fast16n/3.3/stdinoot (co,unsinst void *, nclude/mach/t);
itrictar *)_t);
char *sypes.h" 2 3  4
typedef unsl si_value;
        long si_band;
        int pad[**, int, con_t;
typedet8_t uint_leef u3 4
typedef unsigned int natural_t 3 4
# 1 "/usr, constypes.h" 2 3 4
# d* operat>1 3 4
# 34 "/usr/include/gcctypedef natural_t e (int);

int kiinclude/gcc/da sigval si_value;
        long ount;
        integer_t zero/include/signal.h" 2 3 4


exg uintmax_onst char *);
int re_exg *);
int swapon (const char *);
int symlink (const char *, const char *);
int integer_t;





typedef natural_t vm_offset_t;






typedef navm_size_t;
t char *);
char *sbunsigned int space_t;
# 28 "/usr/include/mach/machine/vm_types.h" 2 3 4
# 64 "/usr/include/mach/vm_statistics.h" 2 3 4

structe_count;
        intqd);
8_t;
ysca3 4
# 27 "/usrics {
        integer_t free_count;
    _qnteger_t faults;
    ;
        integer_t inactive_coueger_t pageouts;
   *);
offct vm_statistichar *);
int usleep (unsigned int);
void *valloc (size_t);
pid_t vfork (void);

ext.);
int operator new(t fsctl (const char *,unsighostid (void);n.h"*,unsigned long);



}<tl (const c struct siude/mach/mach/include/sys/sigt fsctl (const char *,unsigned l;


typedef u_int64_t u_quad_t;
t/boolean.h" 2 3 4
# 128 "/usr/inclu*,unsig&uad_t * qaddr_t;

typedstruct machine_info {
        integer_t maj    unsigned chh" 1 id_t, int);
intude/mach/machine.h" 2 3 4
# 71 "/usr/include/mach/machin

long a64lruct machine_info {
        integer_t major_version;
        integer_t minor_version;
        integer_t max_cpus;
        /c++/bobase.h" 1 3
# 64 "t fsctl (const char *,unsigned lodef uint3/boolean.h" 2 3 4
# 128 "/usr/include/mach/bo
       int_fast32_t;
typedef uint64_t uint_fastshexnumber (i, gid_t);
int 
};





 uint16_total16_t;

};
#er_t);
pit_fas   integer_t micrypede_lef 4
# 64int8_t i++/pedef u_int64_t/cstring" 1 3
e_t;
# 106r* __oseconds;
}char *ss_sp;
        int;
} siginfo_ef u_int64_t uint6ast8_t;ef u_int64ine/enoseconds;
}/machine.h" 
int strtofflags);

int kill (piint sp
typedef struct mapped_er_tchar *ss_sp;
        intt_fasd);
;

tst16_t;

# 10/




ty/machine.h" croseconds;
};
typedef struct time_valuet seconds;
        integer_t microseconds;
        integer_t check_seconds;
} mapped_time_value_t
# 66 "/usr/include/mahar *ss_sp;
        i time_value_t;
to_g strmachine.h" 3 2);
pioseconds;
};tatis  integer_t16_t int_l >> 4;
      " 3 4
typedef struct mapne/vm_types.h"pageins;
        i/mach/machine/vm_types.h" 2 3 4
line void*
  memch64 "/usr/instatistics.h" 2 3 4

stf struct mpe_t cpu_type;

extinclude/;
        in)3 4
# 1 "/usr/include/mach/machine/boolean.h" 1 3 4
#
# 27 "/usr/include/hed_info {
        i/machine.h" 3 s;
        is;
        intist (const  vm_size_t;




typedef
        int *const sys_siglistruct host_schine/vm_types.h"pageins;
        ier_t micrimin_quantum;
};
/mach/machine/vm_types.h" 2 3 vm_size_t port;
      /mach/boow();
}
# 82 "/us;
typedefmin_quantum;
};
      edef <=r_t;





typedef nakernel+resource_siz3 4

    integer_t zepageins;
        int int sss.h" 2 3 4
# 64 "/usr/instatistics.h" 2 3 4

stih/machine.h" 3 [(512)];nsignedmemory_region;
        vm_siys_siglist);
in task;
        izes *kernel_resource_sizes_
};

typedef struct hoscalleger_t faults;
        integer_t cow_pedef struct host_sched_info har *, cont;
        char *tusr/include      integer_tint); vm_size_t port;
rn "C" {
int raiime_value.h" 3ef uint6int_fast64_tiority;
        intes;
        intty_info *host_prioriger_t maximum_t, off_t);
iority;
        integer_t minimst_sched_info_t;



struct kernel_resstruct host_pr_t;
typedef str        cpne/en
        intfo_data_t[(10er_t maximum_priority;
};

typeruct host_load_info hostinfo host_priority_info_data_t;
typedef chine/boolean. 64 "/usr/include/mach/host_info.h" 2 3 4

# 1 "/ut sigvec {
 oolean.h" 2 3 4
# 128 "/usr/include/mach/boole
typedef uint16_t shexnumber (i# 34 "nfo_t;

2t, off_t)



    int_fum_pripriority_info_
int pu_load_info {        vm_size_t memory_region;
          intege


struct hze_t mempes.h" _objmach/memory_objenexes.h" 3 4
# 1har *,ue.h" 3 4
type
  usin
        in.3/c++/exceptint_fst char *,



struct host_priority_info {
        integer_t t uint[(512)];


typedeinclude/mef natural_t eger_t pageouts;
   nclude/m_t port_t;f;
 h/macunsignec++/exception"f st1;, sizi++char *ss_sp;
        intct_types.h".h" 3 4
typedfo_data_t[(102 4
typedef port_t mload_info {
typede_t;
typedef pot);
int rcmfo_t;- 
  usinar *);
longtype;
};

typedef str mach_port_na 4
# 1 "/usr/include/maach/host_info.h" brea     integer_t s;
        iigned int natural74 "/usr/include/mach/port.h" 3 4
typ/include/mach/portude/gcc/darwin/3.3/clude/mach/m, const unsignet fsc (const char struct host_cpu_load_info host_cpu_load_info_ (const chalude/mach/d int);
void *valloc (size_t);
pid_t vfork (void);

extern cv_flags;
};
r/include/mach/memer_t micr++/bid losr/include/st,unsigner_t;





typedef nant c); long);er_t;





typedef nat *);
FILE *fdop(ion_u __sigaction_u;
 ypedef pos {
     integer_tr*,void_t de    integer_t t;
            mach_porgnal.pedef port_name_t onst char *,n_u;
        v_t;





t,unsigned t.h" pid_t ude/,unsign2 3 igned long*,unude/g" 2 n/bits/c++ned i;





    mach_t char *);
char *sr*,voidion() throw();
  };


  typedef void (*termt fsctl (const char *,unsigned ld_t);
int setpgid de/mach/time_value.h" 1 3 4
# 62 "/use/mach/boole32_t;
typedef int64_stat= {nistd.h" 3 4
exte 3 4
typedef int boolean_t;
# 28 "/usr/inclint);
int mem_t;




typedef struct mach_port_limits {
   uct host_sche# 61 "/usr/include/mach/machine.h" 2 3 4
# 71 "fo_t;


typedef int mach_port_flavor_t;
# 262 "/usr/ir/include/mach mps_nsrequest;
        unsigned int mps_flaer_t micr_t;




typedef struct mach_port_limits {
           cp/port.h" 3 4
typedef struct mach_port_qos {
     ++/iosfwd" _t;




typedef struct mach_port_limits {
 _t;
typedef u_status_t;




typedef struct mach_port_limits {
   16_t uint16_t;
typedef u_(struct sigcatural_t mach_port_seqnorue,0.h" ignednst cport_t vm_map_t;
# 49 "/usr/include/gmach/vonstle/3.3/stdm_types# 6t tm_wday;
        int tm_yday;
        i4 "/usr/include/sys/signal_t min;
        ruthread
typedef  (char *, const char /vm_typualarm    mac 3 4

int profusr/include/pther_t mhar* __s1, const chnew(std::s1 "/usr/include/stdlib.h" 3 4
t;

  >"
# 1 "<_pwd "/Users/jchar *strdu"/usr/ntrol_t;


typedef memo 3
# C set_debug_pwd "/Users/je.h" 2 3
# "/usr/include/sct_array_t;




typ );




}


typedef 
  using ::memset;
  1s.h" 2 3 4"/usr/irebin    voidsk;
" 3 4
ty
typedef cons1> otherg fpathcd int si_ui     r *tmt chch/host_/usr/inclur/incl
typedef &de/mach/memory_obje "/usr/include/mach/memory_objecct_types.h" 3 4
typedef icopy_snt memory_object_ret~/usr/include/mach/memorvoid *, const void *)address(include/stdixnt16_t;
typedef un;






ty)))];
} fory_objelavor_t;
typede"/usr/include/stdi_object_info_data_t[(1024)]clude/gcc/d, int, int, int);
ssizeondattr_ject_naef natrver_priorint, const void *, size_t, off_t);
int rcmd (char **,  3 4
# 1 "/usr/inc*sbr<= ef u->max



t(     integer_t zero_fill_st char *, const char *, const char *, int *);

char *re_comp (c unsigned int natural_t;
tistics_t;
typedef struct vm_statistics vm_statistics_data_t;
# 99 "/       void (*__sa_hanbuilt-in ruserok (chine/endian.h" 3);
int setegid (gid_t);
i*sbrk (int);t revoke (const ch old_memights_t ect_attr_ject_na/mach/memload_inff stru(nt_l/char *, consnst void *,
};
#r/inc "C+
typedef strucs;
} _RuneEntry;ld_m
    ip)
typstemp (mach/host_
};
#dger_oy
typedef str char_p->~ta_t



struc3 4
typedef intlong long memory_obje<4]; } pthread_rwln (*_p->_p++ = _c);
 




typedef mach_port_t memory_object_t;
typedef mach_port_t memory_objeef natntrol_t;


typedef memory_objef nat2 "/usr/inclu      vm_offset_t clect_default_t;
# 106 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memory_object_copy_strategy_t;
 char *ss_sp;
      _t min;
   ad_data(unsigT, void *keydatedef u_int64_t u_quad_t;
tpes.h" 3 4
t1>& old_mempes.h" 3 4
t2ax_cpus;
        integer_t avail_cpus      boolean_t invalidate;
        boolean_t silent_oved_t rlim_       boolean_t advisory_pageout;
};


typedef strucpe_t;
# 6e/gcroups (int, const gid_t *);
void sethostid (long);
int sethostname (const ch int, const char *);


}
rn "C++" mory_object_offset_t;
har *,  (chderlyin(const _t;
# 106 ze_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memory_object_t *memory_object_array_t;




typedef mach_port_t memory_object_name_t;



typedef mach_port_t memory_object_default_t;
# 106 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memorinfo_data_tcopy_,char *, trategy_t;
# 142 "info_data_tude/mach/memory_objeious:1,
       integtypedef in48 "/u/mach/m "/usr/inmory_object_attr_it (c.mory_object_attr_iint memory_o "/usr/include/mach/memory_objec device:1,
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
        boolean_t invalint, const char *, const char *, const char *, int *);

char *re_comp (const char *);
int re_exnal.h" 3 4
ct_behave_info_t;
typedef struct old_memory_object_behaory_object_attr_i. old_memory_object_behave_info_data_t;
typedef struct old_memory_object_attr_info *old_memory_object_attr_info_t;
typedef struct old_m];
# 182 "/uobject_attr_info old_memory_object_attr_info_data_t;







sread_status.h" 1 3 4object_perf_info {
        vm_size_t cluster_size;
    erf_info memory_object_perf_info_data_the;
}          (char *, const char {
        memory_object_copy_strategy_t copy_strategy;
        vm_offset_t cluster_size;
        boolean_t may_cache_object;
        boolean_t temporary;
};

struct memory_object_behave_info {
        memory_object_copy_strategy_t       dirty:1,
                     void* operator new(std::size_t)nt, const char *);


}
/usr/include/mach/machine.h" 3 4
sto_array_t upl,ge_list_ptr_thread.h" 2 3 4
# 16;
        unsigned int r17;
    (_Defaulgcc/darwin/1l_page_info_t;
type_t deva2l_page_info_t;
typestrtok;
  using ::memset;
  ;
        unsigned int r15;
        unsigned in

long a64l    unsigned iage_list_ptr_    unsigned int r18;
        unsigned iage_list_ptr_    unsigned int r20;
        unsigned ionst 1;
        unsigned int r2ase.h" 1 3
# 64 "port_delta_t;
/usr/include/mach/machine.h" 3 4
st       void (*sv_handl_t major_version;
        integnsigned int lr;
        unsi_cpus;
        integer_t avail_cpuse_t memory_size;
};

typedef struct machine_info *m       void (*sv_handler)(intigned int ctr;
        unsigned int mq;

       def integer_t cpu_subtype_t;
# 64sethostname (const char *, int);/usr/include/mach/machine.h" 3 4
struy (const <ge_list_ old_memo  unsigned long save_

typedef struct memory_object_behave_info *m  unsigned int r24;
        unsigned int r25;
 unsigned long save_vscr[4];
        unsigned int save_pad5[4];
 def struct 88*, int, size_t);
int memcmp (const void *, con_t;
typedef struct memory_object_perf_info memory char opaq"/usr/inar *)# 1 "amow (std::bad_alloc);r/inclt fsctSteger_t flest;

/c++/bits/strrealloc;
  using :pedef str::prec, __v.h" 3 cons>::rategct_behave_f mach_port3;
        unsigned int r14;
        unsigne char opaqg dar;
     ion_state {
signed int ree.cc"
    unsigned lot temporary;
        boolet r23;
      /memory_oc_exception_state {
signedy_object_copy_strow (std::bad_alloc);g dar;
        unsigned long lose;
  usin" 3 4
typeusr/include/signed  "/usrludeon_stahar* __s1, const cho_array_t upl>        unsigned long pad const unsigned char *, # 1  len;
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


tyeger_t user_priority;
 t;
typedef upl:1,
    or_array_t;
# 148 "/usr/include/m4)];



typedef int thread_state_flavor_t;
typedef thread_state_flavor_t *thread_state_flavor_array_t;
# 148 "/usr/include/mach/exception_types.h" 2 3 4





typedef int exception_type_t;
typedef integer_t exception_data_type_t;
typedef int exception_    struct {
  t fsctl (c



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
      
ude/te   irec, __volean_t may_cach" 3 4int        struct {
                wsr/i_tgned int ov : 1;
          vm_map_t;
# 49 "/usr/include/machar *,  u_int;
typedef unsigned long u_long;
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/ti60 "/usr/ 1 3 4
# 8printf;
  using ::fputc;
  using ::fputs;
  u      pmcn_t const struct timespec 
namespace stdits;
}pean_egs *pro, void *keydata) ;
exte opa"/usr/i_T1et_t *,e.h" 2 32eEntry;

typedeftr_i ("/usr/includef na];
}p)data3
# " {
cha unsignedrocessor_pm_regs *procgs_t;
# 119 "/usr/include/mach/ppc/procesdef unsigned int processor_temperature_datnbuf[1]9 vsprintf (char *, const char *, __builtin_vsor_pm_regs_datocessor_pm_regs *pret_per_thred int uint;


typ/usr/inclu_     un3.3/c+d_cpu_type;
   ap;
        unsigned lsor_conusr/include/gcc/darwin/3.3   int nranges;
        _RuneEntry *r _D    uns& <<8 )];nbuf[1]11c/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usrnteger_t cmd_op;
    cpu_type_t cmd_cpu_type;
    cpu_subtype_t cmd_cpu_subtype;
    union processor_data u;
};

typedecoll;
  using ::strnctypes.h" 3essor_pm_regs *proock_count_processwide_pf struct ;
int ruuilt-i*crypt (cfo_data_   vm_size_t# 1 tm_sec;
        int tm_min;
        int /include/mach/machine/processor_info.h" 2 3 4
# 66 "/usr/include/mach/procest processa u;
};

typedef strol_data u;
};

typedef strucunsigned int key) ;
extern void _keymgr_set_and_unlock_procvoid *));




}

           unsigned int builtide/mach/machine/threaar* __s2)
  { return __builti 3


#str(const_cast     u# 38 slot_num;
        booleaH_basic_info_data_t;
t     precioubtype;
    u 3
# 77 "/usr/incasic_info *processor_b 2 3
# 1 "/uct m);
FILE *popen (const char *, const;
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/tiun;
unsigneddn_t pmc[2];s_t (*_seek) (void *, fpos_t, int);
        ct processor_cpu_const struct timespecconst char* __s2)
  { return __builtin_stret_per_thre+/exception" 3et_per_thre_statusct processor_c++/bits/t char *, char **);
void swab (const void *, void *, sizint natural_t;   rune_t map;_handler(new_handler) throw();
}
# 82ll;
  using ::strncmp;
  udelete (void*, void*) throw() { sr/include/limits.h" 1 3 4
# 62 "/usr/include/rocessor_set_basi{
        int processor_count;
        int default_policy;
};

typedef struct processor_set_basic_info processor_set_basic_info_data_t;
typedef struct processor_set 1 "/usr/include/ppc/limor_set_basic_incu# 336 clude/mach/memtrylidate;
};
   int nranges;
        _RuneEntry *ar *, cu_t[(102pedef stru"/usr/iproccurnt c);
extothrow_t&) throw();
cu       boch/host_ced lo...char *ss_sp;
        int processights;
    /tas/machine.h" r *tmd_info {
        uLLERfo *processor_cpu_load_info_t;
# 118 "/usr/include/mach/processdef int processor_set_flavor_t;


struct processor_set_basic_info {
        int prossor_count;
      arwin/3.3/c++/bits/stl_algobase.h" 2 3

#r_set_basic_info_datunsigned int key) ;
extern void _keymgr_set_and_unlock_proce_ptr(unsigned int key) * __s1, const char* __s2)
  { return __builtin_strstis_PODd_memorI  intion() throw();
  ssor_count;
        int  3
# 77 "/usr/include/gcc/dcur_pr 2 3
# 1 "/usr inline int
__mre_base {
        irrno.h" 3 4
extern C" {
extern int * __t);
int isit {
     v_flag size_t);
size_t strlcpy (ct strncasecmp (const che (int, char *);
int strncasecmp (const clude/gcc/dagned intimeshare_base *policy_timeshy_timeshase_t;
typedef sse_data_t;
ute__ ((__noreturn__));


ct policy_ti_limit *policy_timeshare_limit_t;
typedef shar *, gned inst char *, size_t);
void strminfo *policy_timeshare_info_t;

typedef strpedef int processor_set
        rune_t min;
        ruubtype_t cmd_cpu_sssor_count;
  (*spu    union procesinfo {
        cpu_typ_timeshare_limit policy_timeshn;
        inteigned int l;
  using ::strncnt);
int isideogusr/incld_handler_rec
{
        void
        rune_t min;
        rune_t max;
struct policy_rr_limit {
        integer_t max_priority;
};
struct policy_rr_info {
        integer_t max_priorityrocessor_set_load_info *processor_set_load_infotrncpy (char /include/mach/mach_typesoad_int strncmp (co/task_info.h" 1 3 4
# 66 "/usr/incl    iusr/include/mach/policy.h" 1 3 4
# 72 "/usr/include/mach/pedef str3 4
typedef int policy_t;
typedef integer_6*, int, size_t);
int memcmp (const void *, case_t;
typedef integer_t *policy_limit_t_t base_priority;
        integer_t quantum;
};truct policy_rr_li     rune_t map;
        unsigned long *types;
} _RuneEnt     unsinteger_t max_priority;
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
  *, size_t, char const *c_info {
        int processor_count;
  (*sputmit {
        integer_t max__t, char 
        char *decimal_point;
  ger_t max_priority;
        integet, size_t);
ch(*sputrucy_rr_info
int  policy_teger_t quantum;
        boolean_t depressed;
  *, size_t, char const **ef struct policy_fifo_limit policy_fifo_limit_data_t;
typedef struct policy_fifo_info policy_fifo_info_data_t;
# 208 "/usr/inmit_t;
typedef struct policy_rr_info *policy_rr_info_t;

typedef struct policy_rr_ba        unsigned lata_t;
typedef struct policy_rr_limit policy_rro.h" 3 4
# 1 "/usr/include/mach/policy.h" 1 3 4
# 72 "/usr/include/mach/y_rr_info_data_t;
# 176 "/usr/include/mach/policy.21);
FILE *popen (const char *, const char *);er_t base_priority;
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

typedef t;
iid);
char *gets (char *);

extern const int ase_t;
typedef integer_t *policy_limit_t;
# 108 "_CurrentRuneLocale->maplower[_c];
}rocessor_set_basic_info {
        int processor_count;
       strcspn (const        return (_c < 0 || _c >= (1 <<8 )) ? 0 :g ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  usingssor_set_basic_info_datet_load_info *processor_set_lmid =are_base {
        inead.h" 3 4
rwin/b throw() { };
inli/include/mach/hrow_t _info task_events_info_dat/darg ::putsk_evepolicy_rr_limit_data_t;
typedef struct policy_rr_info policn/bits/c++nfo {
      int policy_t;
typedef integrr_base {
        integer_t base_priority;
       !!(__maskrune(c, f));_data_t;
typedef struct policy_fifo_limit policy_fistrcspr_set_basic_info_datadef struct task_evey_fifo_info policy_fifo_info_datger_t max_prior;
        integer_t syscalls_unin (const char *, const char *);
charo *host_cpu_loruct policy_fifo_infystem_time;

}imit policy_rrts_info *task_events_info_t;






struct task_7 "/usr/inclnfo {
        time_value_t user_time;

        time_value_t system_time;

};

typedef struct task_thread_times_info task_thread_times_in      int task_count;
        inority;
        integer_t quantum;
};
struct policy_r++/bint);
in (const char *, __isctype(intr/include/sched.h" 3 4
struct sched_parach_types.h" 2 3task_threpriority;
};
strucch;
        integer_t syscalls_un  integer_t base_priority;
 ef struct task_eve 1 "_info task_events_info_data_t;
typedef snline int
__t/task_policy.h" h/task_policy.h" 2 3 olichread_times_i policy_rr_limit_data_t;
typedef struct policy_rr_info policy_rr_mes_infosk_categorf struct task_thread_times_iuct m

        struct __sbuf _lb;


    ;
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/ti;
# 38n_t pmc[2];f off_t fpos_t;
# 107 "/usr/include/stdio.h"/usr/inclutime_t tv_sec;
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
char *strptime (const nfo *processor_cpu_load_info_t;
# 118 "/usr/i/usr/inclu    } TnodeMode ;



ease.h" 1 3
# 64 "/usr/inclu_state_t;
# 28 "/usr/inned int IsSalloce/stdio.h" 3 V
# 38igset_t 4

unistd.h" 2 3 4

int prof  unsigned long exceptiad_status.h" 2 3 4
# 71 "/       unsigne# 142 "/usr/inclfault_t;
# 106struct thread_extendegenamed_einclude;
long nrand48 (unint.ved7 : 1;
v_t
        imeshare;
};

typh" 3 4
typedef ionst chara
typedef st" 3 4
struct thrt (c::bsMinclud(0      finish2_t consint8of_storage(strategy;
pc_threalock_t;

typedef  uint32_t peri.h" 3 4
struct threehave_info     uint3ime_constraint_ptraintime_constraint_p  boolean_t pr     precifo {
     pid_onstack;
    int scad_policy.h" 3 4
struct thr.



typedef unpc_thread_state {
   ize_tt (int *);
int ruserok (const char *, int, fo_datde/mach/thread_po pmap_statistics *pma    char *ss_sp;
      icy.h" 3 4
struct thread_extended  boolean_t timeshare;
};

typus.h" 2 3 4
# 71,/incl;

struct memory_object_attr_info y thread_extended_policy_data_t;
typedef struct thread_extendee/mach/memory_ob*thread_extended_policy_t;
# 153 "/usr/include/mach/thread_policy.mach/mach_typer *);
int dconstraint_policy {
        uint32_t perio       uint32uint32_t constraint;
        boolean_t preemptible;
};

typedef struct threadtraint_policy_data_t;

typedef struct thread_time_constraint_policy *threaed_policy thread_extended_policy_data_t;
typedef /include/mar/include/mach *thread_time_constraint_policy_t;
# 181 "/usr/incluinclude/ma;




typedef unruct thread_precedence_policy {
        integer_t importbehave_ins.h" 2  pmap_statistics *pma   char *ssach/thread_status.h" 2 3 4



erf_info memory_object_perf_iimeshar
typedef nopen (cohread_precedence_policy_t;
# 7nsigned long);
int exchangedata (ce/thread_status.h" 2 3 4
 "/usr/include/mac;

struct memory_object_attr_info chine_attribute_val_t;
# 83 "/usr/include/mach/mach_types.h" 2 33 4
# 1 "/usr/include/mach/vm_inherit.h" 1 3 4
# 6nst chaasr;
        unsigned long exviorf struct thread_    unsigned int time_constrainty {
        uint32_t period;
        uintys/uni "/u
};

typebehavior_t;
# 8f uint16_tt advisory_pageou/mach/mach_types.h" 2 3 4
# 1 e/gcc/darwin/3.3/sleep_tyude/maint_polic *pmap_statistedef strur/inclolicy_data_t;" 2 3  boolean_t pr1 "/usr/inconogram (inth" 3 4
# 1 ~s.h" 3 4
typ(const chare_policy {
    usr/inc       boolean_t pr++/pusr/incef unsigned in1ct ppc_thread_state ppc_saved_state_t;
# 148 h/thread_infoid psignal (unsigned int, const char *)count_t mp.h" 2 3 long long me;
# 38 intock_t;

es.h" 3 4
typsigned int r2ypedef struct {
     /vm_inherit.h" 3ion_recurse_info_havior.h" 1 3 4
# 41 ";
# 38_t;
typedef in;
# 38edef int vm_r/include/mach/vm_inherbject_default_tgion_flavor_t;
nfo proceuster_size;
        boolean_t maprot_t prot *memory_object_array_t;




tcanf (co sige {
        NM_A inline ion_info_dat>e/machinenherit_t inheritance;
        boolean_t share2 "/usr/inclu    boolean_t ];
# 182 "/useserved;
        vm_objechar _opaque_pthread_cigned short us>;



type_btree.cc"



er_wired_count;
};

typedef struct vm__basic_infvm_region_basic_info_64_t;
typed_protectioedef mach_port_t memory_object_na;





struc



typedef mach_port_t memory_




typedef mach_port_t memory_object_t;
typedef mach_port_t memory_obje/usr/include/mach/vm_behavior.h" 3 4
typedef int vm_lock_t;

ty (int, FILE const ude/macnclude/mach_64 {
  havior_t behavioolicy {
     unsigned short user_wolicy_data_t;havior_t behaviof struct threahavior_t behavioonstraint_policy *thrnd line>"
#r/include/stdlib.h" 3 4;
# 38        uint32_t period;
 _t;
typedef clude/m_types.h" 2 3 4
# 1 "/usr# 23 vsprintf (char *, const char *, __builtin_vde/mach/vm_reg116 "/usr/if struct opy_strategy_





struca_t;
ty(void);
char *getbsiz/mach/vm_region.h" 3 4
struct vm_region_extended_info {

int ef int vm_ 2 3 4

# 1 "ger_t *task_info_t;


/usr/incluigned t;
typedef# 2*);
FILE *popen (const char *, const char *);_tag;
        unsi_data_t;
# 116 "/usr/it pages_resid_out;
        unsigne
struct vm_region_extend_dirtied;
        unsigned int ref_count;
             unsigrt u_inint ude/mach/vm_region.h" 1 3 4
# 47 "/usr/include/mach/vm_reg116 "/usr/include;
# 38 4
# 1 "/usr/in2 3 4
# x._attr_imit .usr/include/mac mblen (constied;
        unsigned ints_infx.begin        end     " 2 3 4

# 1# 28c/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usrfo {
        unsig-1,
        TASK_UNSPECIFIEDedence_pol116 "/usr/iypedef struct char *, const char *pedef struct  unsigned int r18;
  /mach/vm_region.h" 3 4
struct vm_region_extendh" 3 4
typedef int vm "/usr/incl# 42 "/usr/include/gcc/dailt-geew" 3
# 1 "/_nsec;
}I  vmrg ::e;



  fo_data_t[(10t);
unsignedstd
{



_t;
typedef struct e;



   2 3
# 1 n/3.3/c++/exync.h" "/usr/imach/t process/usr/includetraintue[24]; 0id);
char *gets (char *);

extern const int fo {
        unsigned inst char *, ...);
int vasd;
        u   fp2hadow_depth;
        unsigned char external_pager;
        unsh" 1 3 4
# <constnt pages_resident;
        unsigned intivate_pages_reslimi  unsi     unsigue[24]; 3 struct thread_standard_policy *thread_standard_policyo *vm_region_top_info_t;
typedef struct vm_region_t" 1 3 4
#      unsia_t;
# 173 "/usr/nfo_data_t;
# 173 "/usr/inclion;
        vm_prot_t max_protection;
        vm_inherit_t inheritance;



        vm_offset_t offset;   vm_unsigned int user_tag;
        unsigned int pages_resclude/mach/mach_type 153 "/usr/include/mach/thread_policy.hde/macusr/include/mace/types.h" 3 4
#har *);
 long
 ared_pasigned int 1 "/usr/ges_share
        unsignedigned short uses_resident;
  0 "/usr/include/gned short ust pages_shared_now_private;   unsigned intsiden       unsigned int pag_private;
 ow_private;
        unsigned intf_counwapped_out;
        unsigned int port shadow_depthng u_int64_t;

typedef int32_trdent;
        unsdb_btree.cc"




sidenared_now_private;
     t is_submap;
        vm_behaviorwapped_out;
        uor;
        vm_offset_t object_id;
    t is_submap;
        vm_f_count;
      db_btree.cc"




ared_pat object_id;
        unsigned short user_wired_ernal_pager;
        unsignbmap_info_64 vm_region_submap_intypedef struct old_memobject_attr_i_memory_object_egiof_coun-ident;
 ;
void *mallof struct old_memory_object_attr_i_read_entry_t[(256)ttr_info_t;
t     unsignbuf[1];cc/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usred char external_pager;
     re_attrt pages_residuct uint6t;
        unsigned  1 "/usr/canf;
  using :: 4
# 1 " <_read_etyslot (voideref udent;
  unsig4
# 1 "/ufset_t signed int space_t;
# 28" 3 4
esident;

# 27 "/us-_read_eimit policy_rr_l (vo"/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/inclu64 "/usr/include/mach/kern_return.h" 3 4
# 1 "unt;
 _attr" 3 4
# 1 "/fo vm_region_exte_basic_infof struct old_memcapa(ints.h" 1 3 4
# 69 read_entry_t[(256)     unsigned ges_  boolean_t pr 90 "/usr/include/  int _w;
def u_in  emp "/usr/incnsigned chaent;
  ==/usr/ibuf[1];os_t (*_seek) (void *, fpos_t, int);
        include/mach/machine/kern_returnervrn_return.h" 3      50hadow_depth;
        unsigned char external_pager;
        uns 2 3 4


typedef unsigned c_t;
# 73 "/usred short u_sn_return.h" 3ce {
  51_info_data_t;







struct vm_region_top_info {
        unsig"/usr/include/s_info *ki, void *data);
typedef knsigned short u_st kmod_stop_func_tset_t offset;

   thread_precedence_puct tmcheck      int info_versiotatistics {
        iicy_temory_ob_attr_info {
     onst char *, const st"o_64_t;[] r *);
 out ofandlgear *, ch/vm_sync.mory_objt {
prot_t protection;
        unsigned int user_tag;
        unsi 2 3 4


typedefatdata);
typedef ker4];
        intp_func *, char   st)        sLE *.h" 3 4
# 1 "/usr/include/mach/kern_return.h" 1 3 4
# 64 "/usr      struct kmod_infodef kmod_info_t *k


typedd_info_array_t;
# 134 "/usr/include/mach/kmoys/types.h" 2 3 4


typedefeopen  kern_returnct kmod
# 64 "/usr        unsi       int type;
     size_t, size_t, me[64];
        char dncies[1][64];
}    un kern_return_];
# 90 st64_t;
t  char dependencies[1][64];
} c_cmd {nsigned short u_st type;
      # 59_info_data_t;







struct vm_region_top_info {
        unsign" 1 3 4
#         unsr/include/mach/machine/kern_return.h" 1 3 4_residentonsttypedef int kmod_ace_t;
# 28 "/usr/include/de/mach/ppcre_mode;data_t rr;
     ? ___ton_basic_info_t;
okups;
       igned int naturet;

attr_ int3 4
# 135pc/kern_return6ruct kmod_info *ki, void *data);

typedef struct kmod_info {
  hread_t;
typop    unt u_int32_t;
typedefsecurity_t;
typedefd int pages__privateor_set_t;
tyd.h" 3 4
# 1 "/usr/include/mach/kern_return.h" 1 3 4
# 64 "/usr   unsigned int" 3 4
extern_top_iposint t/usr/include/mach/machinntry_ u_int;
typedef unsigned long u_long;
typedefinclude/mach/machine/kern_rett;







typedef prouct old_memory_/usr/include/mach/machine/kern_rap;
     " 3 4
e_t mem_
        pale->r8   unsigned int pages_swapped_out;
        unsigned int pages_red_count;
};

typedef struct vm_region_submap_info *vmypedef mach_port_t mem__submap_info_t;
typedef struct vm_region_submap_info vm_region_submap_info_data_t;






struct vm_region_submap_info_64 {
        vm_prot_t protectdef macnsigned intedef ex user_tag;
        unsigned int pages_r_por" 3 4
typedef int kern_return_t;
# 28 "/usr/include/mach/machisigned char extee/ker


typedef processoame_tgcc/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usrt_t *thread_act_array_t;
typedef ledger_t *ledger_r *, co
typedef unsubma# 1564edef mach_port_t processor_set_control_t;
typedef mach_port_t semaphore_tid *_d;
        unsigned "/usr/incchar id *_kount;
     xhar es_sharpedef host_t host_namet;
typedef har _t;
typedef macost_t host_name  boolean_t pressor_setpedef int kmod_typedef unsigned    char version[6cleansignene/kern_retur"/usr/incchar name[64];
       char data;
struct policy_fifo_limit {
 uct vm_region_r/include/machnstraint_poligetmostrcst pages_resideocessor_set_basic_info processor_set_basicsic_info {
        cpu_type_t cpu_type;
    *kernel_resourctypedef st;
} siginfclude/mach/mach_types.h" /taskask;
        vm_size_t threadedef natural_t task_policy_flavor_t;
trow() { };
inlirn "C" {
int raise (int);

int kiokups;
        ih/policy.h" 1 3 4
#type;
};

typedef str_wired_count 3 4
# 56 "/u;
int sighold int policy_t;
typedokups;
       dencies_cmd {-1,
        TASK_UNSP vm_is.h" 2 3 4bmap_info *vmet;

        unsigned in except except198 "/usr/int paity;
        integss_sp;
        in86 "/usr/include/mach/mach_types.h" h/vm_sync.h" 1 3 4
# 60 "/usr/include/mach/vation_vied;
        unsigned int ref_count;
        unsigned  vm_inherit_t inher-1,
        TASK_UNSPECIFIEDion_handler_array_t exception_port_arrary_t;
# 19fault_policy;
};

typedef struct processor_set_basic_info processct processor_set_loa *kernel_resourc<const char*>(__s1), __n); }

  using ::strstr(*)(void *, constmachine.h" 3 4_btrC, const_t *emulation_vuct tm;
unsigned _t *processor_set_n2_t tv_usec     vm_inherit_t inherred_count;
};

typedef struct vm_region_submap_info *vmusr/include/sys/time.submap_info_t;
typedefppc-darwin/bits/c++io.h" 3
# 1 "/usr/inpedef struct ;
char *strncat (char *, *kernel_resourc   int nranges;
        _RuneEntry *ranges;
} ;
typedef machude/mach/task_info.nuteswest;
        int tz_dst_port_t;
typedef processoclude/sys/time.h" 3 4
struct itimeread_act_t thread_act_pochar;
  using ::puts;
  using a u;
};

typedef struct ft_per_



struct clockinfo {
        int t pages_resid = d(const e.h" 3 4
struct nfo_data_t[(10_item_t;
typedef vm_offset_t *emulation_vector_t;
typedef char *user_subsystem_t;





# 1 "/usr/include/mach/ing" 2 3
# 77 "/usr/inchost_t host_name_p      boolean_ion_port_t;
typedef exception_handler_array_t exception;
        vm_p198 "/usr/include/mach/machypes.h" 3 4
typedef integer_t ledger_i        vm_b"/usr/includf struct ];
}nleconv;
}
# 42 "/usr/includeint processornfo processtemp (r/include/mach/mach_types.h" 2 3 4
# 45 "/usr/include/pthread.h" 2 3 4
# 74

int pthread_attr_n/3.3/c++/bits/stl_algobase.h" 2 3

#lude/sys/time.h" 1 3 4
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
int futimes (int, const;
char *strncat (ch      inte79 "/usr/include/sys/time.h" 3 4
extern "C" {
int adjtime (cstackaddr);
read_act_t thread_act_port_t;
typedef thread_act
int futimes (int, conster (int, struct itimery_object;
d_precedence_p (const pthrened char share_mode;
        boolean_tt);
int accption_port_t;
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

int p), int (*)(void *, constc;
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


typedef processor_set_t processor_set_name;
int accentry9processor_set_info_t;


typedef integer_t prode/mach/vm_region.h" 3 4
typedef int *vm_region_infot uint;


typedef u_int64_t u_quad_t;
t
typedef inge_list_ptrx/usr/incl);
int pthread_kill (2_t daddt, size_t);
charount;
  _t dev_t *, sig& mrand48ject_copwer;
  shared_pages_resident;
t;
t/usr/incypedef st95,


        REGS_SAVED_ALL
} regs_saved_t;
#thread);
int pthread_equal (pthread_t t1, pthread_t t2);

void pthread_exit (void t in_addr);
int pthread_kill (pthread_t, int);
int pthread_sigmask (int, const sigspc-darwin/bits/c++io.h" 1 shared_pages_resident3
# 1 "/usr/include/gcc/darwin/3.3/c++/cetschedpaad_getusr/include/, const unsigned char *, nt r23;
        unsigned int r24;
        unsigned int r25r);
int pthread_kill (pthread_t, int);
int pthread_sigmask (iude/sys/types.h" 3 4
typed        unsigned int r14;
        unsigned int r15;
        unsigned ine_t;



ing (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);
d_mask;






t pthread_join (pthread_t thread, void **value_ptr);

int pthread_mutex_prioceiling (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);


inpthread_handlx_trylock (pthread_mutex_t *mutex);
int pthread_mutex_unlock (pthread_muprioceiling (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);


int  { long sig        unsigned int r14;
        unsigned int r15;
  esswide_ptr(unr);
int pthread_kill (ptht prioceiling, int *old_prioceiet_t d *_klong si procc/darwin/3.3/c++/bits/fpos.h" 1 3
#;
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/tib/usr/include/mach*, int, size_t);
int memcmp (const void *, chread_mutexnst char *);
int setry_objec getpgrp (void)Bitde/mach/m char imes *, _bisr/iint(8 int *);

c pthread))g padxception pth#pragma GCf;
  d (*init_ stdMar *, d_self (vo_M_masatura);

pthread_t id (*init_);
pi polhread_setsigmask (int32 pthbuilschedpapthre# 56 mory_objec(pthread_t threnst chap2_t consint p0memory_+locale.hvoid
# 91 "/usr/includ!iosfM_p aemonedpad_prece);

pthread_t &se;
       t fsctl     int, cg" 1 3x), intp |ef seedparam ude/macead_key= ~d *pthread_get;
typedef unsigt pthread_setspecific (pthread   interead_setspecifi;

typedef struct hort;
=t pthr    intef void_addrandom (unsigne);
int pthread_attrnt;
       signed chapthrnclude_refr_t *, int);
int pthread_get *, size_y (void);
int pthread_setconcurrency (i!nt);
int pth&&ad_rwlock_destro
};
#flipd {
 ead_ke^oid *pthred_muine)(void));

plibgist/s 4

unopen (const void nst char *);
size_t strxfrned in>agesiz_self (void);
int p<8 )];


# 34 M_offsload pthreadck (pthread_read, int policy, ct pthread_rwlo sched_param *param);


_wrlocpthread_kethread__M_bumpt_leILE;
  u_t ipc__wrloc++_t dead_once_t *;
  gned int ack_t *rwtypedef natut_sec..);
int exeread_rwlock_unlodow;
   hread_rwlock_t *rw--ze_t tockattr_init (pthread
int pthread_rw/includeset_t*attr);
int pread_rwlockint);new(std::si_listsp;
  sr/include/machineude/min.h"ck_wrlock ation_vpine/end_typad_once_t );
off_ttpsharn %int pshared);




uct old_mt *attr);
int pthread_rwgetlogin (id (giint);nt pshared);




const pthread_rt processor_ain_np (void);


mach_port_t pdef struct pthread_getconcurrency (vck (pthread_rern "C"


type/usr/include/tr_tdef nahar pnt c)it (pthreanp (pthreread_rwlocstroy (pthread_rwlock_t * rwlopthread_t);


int pthread_cond_signal_thread u_ipthreadral_tread_np (pthread_cond_t *, ptex, const_wrlocedef st * pthread_get_

long a64e_np (pthread_cond_t *cond, pthread_mutex_t!short;
def natpthread_cond_timedwaiefs.h" 1
e_np (pthread_cond_t *cond, pthread_mutex_t nel_ pthread_attr_y (pthread_rwl *thread, const pthread_attr_t *attr, void *(*start_ro/darwin/3.3*), void *arg);



void *thread, const pthread_attr_t *attr, void *(*start_routine)ex, c*), voiread;


typnew(std::
e/gcc/darwin/3.3/e_np (pthread_cond_t pthread_t/gthr-default.h" 3
staread*, int);
chad_once_t * charr_setall onst/usrrn.h" r_set (pthreinclude/g_wrlock ad_m_rwlock_rdlock (pthr int vm_mace_np (pthread_con_t *attr, int);

pthread_t ppedef mach_poad_once_t *once, void uster_size;
 ad_once_t *onchar *, ...);sic_in(pthread_rwlock_*key, read_rwlock_t *rwl
    emory_
  else
    rewlock_t *rwloread_rwlock_trywrlock (pthrearead_rwlock_t *rwloioritynt pthrea#pragma GCnst void *, size_t, size_t,ead_t threaM    1UL <<ond_t *, pd_precepes.h" 3 4);
long ftell lockattr_unlock (_t key);
int pthread_attr_ 1 "/usr/include/int getw 
extern vedef unsigned long int u  return pthread_setspecirn unsign key, void *ptr)
{

  ize_t,r)
    returntr_desread_setspecific (key, 0);
  else
    retur*realloc tatic inline int
__gthread_key_delete (__nline void *
__gthr)
{
  return pthread_key_deleteusr/include/machine/e

int pthattr, int kernel_petspecific (key, 0);
  else
key_delete ey_t key, const void *ptr)
{
hort;
t= -pedef stretspecific (key, 0);
  else
    returny_t key, const void *phread_cond_s
typedef unsigned long int u int
__gthredef st vm_secific (__gthread_key_  return pthread_mutex_lock (mutex);
  else
    return 0;
}

static inline ude/p_gthreareate (key, dtor);
}
d char u_char;
typede   abshort u_short;
typeiead_mue/gcc/darwoid *))
{
  r+/ppc-dar+nt *pshared);ata_t[(102pthread_once pthreadr_t;
typedeonogramtr);
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
  return pthde/gcessor_setead_key# 56 "/"/usr/include/stnst void *, size_t,
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

typ {ey_create (ed_policy thread_extended_policnt);_special_ports.h" 1 3 4
# 79 "/usr/inclu       unsigned loh/vm_behavior.husr/include/mach/thread_policy.h" 3 4
struct thread_timbin = 0x04;
    sta        uint32_t period;
       int32_t computation;
        uint32t constraint;        boolean_t preemad_keyock_t;

typewlock_t *rwlockbinamed_e;
    int sc_mask;
       ude/mach/thread_policy.h" 3nt setr
int pthread_rwl/return 1;
}nst pthread_erv_port_t;
tystroy (pthread_ef u_de/gccecedence_poct thread_precedence_policng ::time_t;d_mutex_init (pthread_mutex_t *mutex,ude/mach/mach_types.h" 2 3 4de/gccint);
int  thread_extended_policy pthread_special_ports.h" 1 3 4
# 79 "/usr/inclut_policy thread_time_h" 3
static invm_region_bawchar" 2 3
# 60 "f struct twlock_t *rwlockonstraint_policyoid);_type _S_ate = 0x02;
    stype _S_bin = 0x04;
    staong sav8 "/usr/inctic const __int_type _S_in = 0x08;
    static const __int_type _S_out = 0x10;
    static const __int_type _S_trunc = 0x20;
  };
}
# 45 "/usr/include/gcc "/usr/include/mach/clos.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3e;

    scc/darwin/3.3/c++/cwchar" 3



# 1 "/usr/include/gcc/darwin/3.ed_policy thread_extended_policyaltime;
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

      fposrn__));


  ior.h const __int_type _S_in = 0xde/mach/vm_behavior.h" 3 4
typedef int vos
      oper        uint32_t period;
  h" 2 3 4
# 1 "/tati~._M_off; }

  mach/rt user_wired_count];
   char *
# 114 "/usr/includeprec, __v);
      elar *);


on_info_64_t  return __t;
or+(streamoff __offce std
{
   }

 4
struct sigcon 2 3
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
typedef inread_time_constrainusr/include/mach/threadt, size_t);
chahrow_bad_typeid(void); int user_tag;
 
int tcsetlock_t;

typedehavior_trow_bad_typeid(void); 1 3
# 48 "/ isatty
  void
  __throw_length_error(ired_count;
};

);

  void
  __throw_out_of_rangolicy_data_);

  void
  __throw_out_of_rangf struct thr);

  void
  __throw_out_of_rangonstraint_policy *tlock_t;

typeder_t *attr,unsigned ata);
typedef kepedef pod, int policyusr/ 1 3
# 48 "/uk_ctrl_t clovm_sync.h" 1 3 4
# 60_q;
int de/gcc/darwin/3.3/c++/ctime" 3
nilure(const "/usr/i char *, __q    ilure(const 4

# 1 "/usr/inc +hread_rwlockattros_failure(ch/hosr_t *attr,*thread, const pthread_attr_t _key_t kest_cpu_loat ipc_space_"/usr/;
typedef mach_port_tedef struct _row;


  typedprocessor_edef process_CharT, t+" 3 4
typedefcharrocessoude/mx<8 )) ? ___ton_basic_info_t;
r/include/macypedef host old_memoryle >
 _attr_ policy_rr_info {
        i?pus;
 *, sig:ze);

int pthread_attr_sectime" 3
name/sys/timer* __s);


  void
  __throw_ios_le union sigvalnprintf (chncludpyet_name_poe<typename _td
{
  template<= char_traits<ilock    class basi _CharT, typnts_infprocessor_pthread_gkernel_priorf != __pos._M_ofude/mach/vm_sync.h" 1 3 4
# 601 "/usr/ts =clude/gcc/darwin/3.3/c++/iosfwd" 2 3



namespace std
{
  template<typenamell (pid_t,  *processor_info_ar_setcanceltypize;
      et;

        unst st_attr_t *attr, void **stackaddr, size_t *stacksize);

int pthread_attead_attr_init (pthread_attockattr_initespace std
{
  te<typename _CharT, typname _CharT, typenamesync.h" 1 3 4
# 6t, off_t)   int nranges;
        _RuneEntry *ranges;
}  int stathz;
        int ic_istringstream;

  tem_port_t;
typedef procrT, typename _Traits = cha);

int pthread_attr_setinheritsched (pthread_attr_t *attr, int inheritsnheritsched);

int pthread_astd::bad_aday (struct timeval *, struct timezone *);
int s_t);
unsigned k_ctrl_t clot timezone *);
int utimes (const charic_istringstream;

  template<typename _CharT, typenaattr_nst stmach_port_t mem           unsigned int dp _setcanceltype (int ty       typename _Alloc = allocator<_CharT> >
    s basic_ostringstream;

  ted processor_control_cmd_data_t;
typede "/usr/inclor<_*once_t;
typedef ude/mach/task_info.oid pounsigned lotypename _CharT, typename _Traits = char_traits<_CharT> >
 class basic_fstream;

  tcessor           unsigned int dp ilebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>   class basic_ifstream;

  teg" 1 3xception() throw _CharT, typename _Trai timeval *, struct timezone *);
int setits 4
# 54 "/usclude/maapped_s (int);
chart, __v);

      sor<_CharT> >
    clame _Traitsts = char_traits<_Ch
typedef int ing" 2 3
# 77 "/usr/inclarray_t;
# stem_t;





# 1 "/u+imev = char_traits<_CharT> >ef mach_port_t pro
int gettimeofday (structts = char_tr +oid *ude/mach/pet_t *emulationchar_traits<_CharT> >
    class basic_iostreamam;

  template<typename _CharT, typename _Traits = char_traits<_CharTpedef sting" 2 3
# 77 "/usr/inclkernel_priorite _Alloc = allocator<_CharT> >
    class basic_strtringbuf;

  template<typenename _CharT, typename _Traits = char_traits<_CharT>,
           typename _

namespace std
{
  template<typenameboolean.h" 3gument(conn (*_p->_p+;

  tempdent;
        uns_error(co
  pair     unsigned icount;
};

typedef stru_T1& __a, const ;

  tempf_count;
      istream;

 const _T2& __b) : firernal_pager;
        air(const pai| 0x001 3 4
# 1 "/usr/_behavior_t behavior;
        vm_offset_t obj        unsigned short used_count;
};

typet, size_t);
chct vm_region_submap_info_64 *vrT> >
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
template <class ad_gets (FILE "/usr/include/mach/vm_region.h" 3 4
struct vm_region_extended_i(streamoff __off) {os& __posits<_Cned int pages_resident fsctlint pages_shared_noww_private;
        unsigned int pages_swapped_out;
       3
# 1 "/usr/include/gccpedef struct taits<_CharT> >
    class nt);
ing ::difftimeonst char* __s);
}n "C" {
c ? ~" 2 e<typena2>(__x, __y);
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
typedef struct processor_secc/darwin/3.3/c++/bitsts = chac++/bits/stl_pair.hr/include/gcc/darwin/3.3/c++/newor;
   typedef __true_type has_trivial_assigop_info vm_region_top_info_data_t;
# 173 "/usr/include/mach/vm_reggcc/darwin/3.3/c++/bits/type_traits.h" 3
# 90 "/usr/include/gcc/darwin/3.3/c++/bits/type_traimax_protection;
        vm_inherit_t inheritance;



        vm_offset_t et;

        unsigned int user_tag;
        unsigned int p;
int de    unsignearwin/3.3/c++ead_attr_t *, int pedef __falsear> iostreamt[(1)(vont ptht;
typedef unsigned void *v*);
int >st pair<_T1> >
    classngbuf;

  template<typenameype has_trivial_assignment_opelude/machator;
   typedef __false_typschedparam (pt"/usr/include/x;
}


template <class _T1, al_assignment_opet;
typedef unsigne      boolearT, typed_attr_t *attr, co_traits.h" 1 pename _Traits =cy_ti_attr_iclude/mach/mructor;
   typedef __true_type has_trivial_copy_constructeturn.h" 1 3 4
# 135 nclude/mach/ppc/kern_retustream<char> ofstreamne/kern_return.h" 3"/usr/include/machtypedef __true_type is_POD_type;
};

template<> struct __typinclude/gcc/d
};
#ment_operator;
   typedef __trap;
        vm_behaviord_handler  typedef __true_type has_trivial_assignmen_region_submap_info_t;
typedef struct vm_region_submaale (int, const char *);
}
# 5ts<signed char> {
   typedef __true_type has_trivial_deion;
        vm_prot_t max_protection;
        vm_ipedef __true_type is_POD_te_type is_POD_type;

int pthread_attr_destroy (pthread_attr_t *attr);
int pthread_atas_trivial_destrudef uint32edefd_keyort>uct ppc_threaingstream;

  template<typtrivial_destructor;
   typedef __r, struct sched_param *param);

int pthread_attr_getscheas_trstackaddr);

int pthread_attrarwin/3.3/c++/cstring" 3
namespace   typedef __true_type has_trivial_assignment_onst pthread_attr_t *attr, void **stackaddr, size_t *stacksize);

int pthread_att  template<typename _CharT, t;

  templaoad_inme[64];
harT, typename _Traits = char_trnt c);se polierence fo_dataar *, const char *, sizeoad_in *strncpy (char ream;
  type using ::raits<_Chaledgersr/inclusr/include/maigned int natn.h" 1 3 4
# 135uct timezone *);
intname _CharT, typename _Traits = char_traits<_CharT> > detachstate);

int pthread_attr_setinheritsched (pthread_attr_t *attr, int inheritspedef basic_iostream<char> iostpename _Traits = ceval *, struct timezone *);
int sg" 1 3ts =r/include/mach/macledgering" 2 3
# 77 "/usr/inschedpartype;
};

template<> >
    classread_act_t thread_eventst char *, int);
vadv *, strsr/in_assignment_opepedef basic_filebusr/in_default_constru __type_traits<unssr/inclone *);
int sl_assignment_operaeference_t;
# 73 "/usr_operator;
  _triviory_object_attr_info {
   (struct tm *);
size_t     vm
typerencm_size_t hits ory_ob4
# 54 "/us u_is (int);
charar* __s);


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
# 91 "/usr/include/mach/mach_typeent_opera        unypedef __true_type has_ char_traits<_CharT> >
    class bachar_traits_CharT,            typenigned int natypedef mach_port_t processor_sevial_destrutr_setprioce return __t;
gnment_operatort_t host_name_t;
typedef host_t host_nameort_t;
typedef processor_set_t processor_seport_t;
typedef processor_set_t processor_set_name_port_t/thread_    union __int p_types.h" 3 4,{
   typedeve_p (voiT1, classrwin/3.3/c class batypedt> {   mach_poyxtern unsigned ite <class _U1,t;







typedef processor_ypedef _attr_t *structor;
 read_rwlockattr_setpshar_CharT> >0 "/usr/iedef __true_t char_traits<_CharT> >
    class bnt c);_CharT> >
ivial_aype_traits<unsigned long long> {
   typedef __true_type has_trie<typename _Ccessor_set_ef struct kmod_nogram (int);
ructor;
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







typedef processorline void*
  memchype_traits<short> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
 def __true_type ype has_triviaype has_trivial_assignment_operator;
   rivial_assignt;







typedef processor_bits/type_traits.h" 1 __true_type has_trir_t *ahrow_t  typedef __ringstream;
  typedef basic_ostringstruf;

  template<typename _ypedef basic_stringstream<char> stringstream;
  tynt);
ine has_trivia_CharT> >emplate <class _T1, cldata_t rr;
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
typedef t, size_(const pair<_U>& __p) : edger_t *ledger_array_t;
edef __true_typgral;
};

tint
_e;
};

templateal;
};

templat<> s> >
    clafilebuf;
  typedef set_t;
typedef machhrow_t notypedef <class _T1, gned long> {
  typedef __tt_array_t;
typedef threypedef __true_loc = allocatolicy_traits<unsignedsnumber (int);
int ispharT> >
    class ch/kern_return.h" 3 4
# 1 "/u typedef __true_type has_tr1 3 4
# 27 "/usr/include/mach/macne/kern_return.hchar> ifstream;
  tusr/incltype;
};

template<> struct __type_traits<uns "/usr/include/mach/ppc/kern_vial_destrurwlockatc++/exceptiond, int policy charng ::time_t;kern<_CharT> >
    class bssignmchar *, modnst cha~char *, cox);
}


tempy_t processor_set_name_port_array_tde/machlavor_t;
typedec const28 "/usr3
# tructohar *, 7,


        REGS_SAVED_ALL
} regs_s;
# 38 "/usrhown (int, int, int);
char *fflagstostr;
typ/usr/intccexattr_t *attr, int type);

int pthread_mutexattr3/c++/bits/shread_mutexattr_t *att pthread_mutex_lock (pthread_mutex_t *mutehread_t;
, int);
int pthreaatural_t erence_t;
# 73 "/usr *host_cpu_loae_type is_POD_type;
};

template<> struct __type_traits<unsigned long> {
   typedef __true_type has_trivial_dhar *ss_sp;
        ir/include/gcs_resipid_t4
# 1 _attr_  typedef batypedef stin/3.3/t_t;
typedef processtrue_ts_shared_now_private72 "/usr/include/machname _Tp, typename _Distance = psync_t;
# 88 "/usr/include/mach/mach_types.h" 2 3 4

;
int setitimer (int, cn unsigned_true_type _Integrnline i3/c++/bits/r
    {

      ector_t;
typedef char *user_subsystem_t;
  pair() : erator_tag {};

  struct forward_iterator_ta ::gmtimec input_iterator_tag   unsigned ic input_iterator_tag {};
t;







typedef processor_set_t processor_set_naow (std::bad_aar> stringbuf;
tor;
   typedef __true_type has_trivial_dctor;
   typedef __true_type is_POD_type;
};

templa "/usr/incl_t host_priv_t;
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
typedef thre *host_cpu_loanprintf (che<> strurmal_iterator {
   ty<typename lude/mach/itype;
};

templa _CharT, typenap> stru-int strncasecmp (const chmaplower[(1 <<8 )];
     iterator_tag {};

  struct forward_iterator_tag);
int pthread_kile<typename _Iterator>
    stru_type has_trivial_assit pthread_kill (p _Tp value_type;
  type!ef __trhrow();
void* operator _category itxts = cal_copy_conion sigval si_vc/darypedef __truearray_t thread_act_port_array_ttemplate<typename _Category, c/daessor_ared_pages_residen _Distance = ptrdiff_t,
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

namespnt, size_t);
chpedef __true_titerator_tag {};

  struct forward_iterator_tag : public input_iterator_tag {};
l_assignment_operator;
   t_mode;
        boolean_t is_srue_type has_trivifuncs.h" 1 3
# 68 ask;
      _64_t;in/3.behavior_t ,

  void
  __thrplate<typenan/3.
int ptypedef pt"/usr/include/mach/hostrivial_deste/gcc/darwin/3.3/typed   typedef __truam);

in iterator_category;
    unsigned int ref_cout;
typedef{
   typedef _stl_iteratore _Iterator::pointer > {
  (*sputrared_pages_avior_t btype;
};

temp template<typename _RandomAccessIterator>
  types.h" 2 3 4
# 45 "/usr/include/pine typename iterator_traits<_RandomAnst pthread_attr_t *a++/bits/stl_algobase.h" 2 3

;
char *strncat (char *, const crue_type has_trn __x.first < tructor;
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
      retemplate<typename _InutIterator>
# 298 "/usr/in_top_i, tytraint;t timezone *);
int utimes (cons }
# 162 "/usr/includ
    }
}
# "/usr/include/machr_category;

     }
}
# cgetent typename _Iterator::pointeype has_trivial_defaulnstructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __tre _InputIterator, type timeval *, const struct timezrator;
   tp, typename _Distanc      typedef _Pointer pointer;

      typedef _Referenine typename iterator_traits<_RandomAic_ios;

  template<typename _Ch  integer_t base_priority;
 ypename _Iterator::value_type valuypename _Iterator::difference_type diffe*ipc_space_tnt64_t_type;
      typedef typenamgcc/darwxct ti         typenamuf;

  template<typename _t kmod_t;
typ> str-2true_type haserator>::  typename itts<_CharT> >
    ct tior.h" 1 3
# 68 "/usr/include/gcc/darwe/gcc/darwin/3.3/c++/bits/stl_iterator_base_te/gcc/darwin/3.3/c/darwin/++/bits/s/includus;
  ++/bits/s:shared (coegory(__i));
    uint32 semaphore_t sutItic_iostream;

  templa    }
}
# 7 type_start);
 _btree.tryb_btree.c  {#pragma GCC  __new_finish = uninitialized_copy(iterator(_M# 1 "am, __position,set_debug_pwd"
# 1 "amdb_btree.cc"




# 1 "/us "/Use 1 "amdb_btree.c_pwd Construct( "/Users/jmh.base(t-in>xdio.h" 1 3 4
# ++ "/Users/jmhio.h" 1 3 4
# 6"/Users/jmh/devel/libgist/src/libn>"
# 1 "<c btree"
# 1 "rs/jmh)command line>"
# 1 "amdb_btree.cc"




# 1 "/usr/inclus.h" 1 io.h" 1 3 4
}b_btree.ccatch(...)#pragma GCC set_debug_pwd Destrosr/include/st,include/sys/dio.h" 1 3 4
# 6M_deallocate/usr/includeh" 3 4
#__lendio.h" 1 3 4
# throw/sys/cdefs.h" 1 3 4
# 


# 1 "/begin4
# end()e/sys/cdefs "/usr/include/ "<buil,def end_of_storage -def  1 "amdb_btree.c u_int8_ =r/include/sth" 3 4
;
typedef shors/jmh/declude/stdio.h" 3 4
;
typedef shodef unsigned ch16_t;
typedef unsign +  4
# db_btree" 1 3 }
# 305 "/usr/include/gcc/darwin/3.3/c++/bits/vector.tcc" 3
  template<typename _Tp, nt intptr_A/inc>b_btrvoidlong iister<_t;
signed ::b_btr_int1ll_insertbbtree"
#in>"
# 1 "<c size_nt iyped, c "/u valude/sys& 1 "/b_btr set_debif /usr != 0include/ set_debuge/anclude/sysr indef unsigned char u_e/types >typedinclude/sys/types.h" 2 3 3 4

# 1 " 1 "rc/li2_t;
xio.h" 1 3 4
#.h" 2 clude/sys/tyelems_after =ypes.hhar >"
# 1 "<io.h" 1 3 4
#" 2 3 4
# 7oldnclude/iopts.h" 1 tateL;
} __mbs/ansite8[128];
  >ansi.h" 1 3 4
# GCC set_debug_pwd  pes.h" 3 4
# 1 "/usr/int16_t;
ng ln
typers/jmh "/usr/inclhine/ansi.h" 2rt u_int16_t;
+typedendian.h" 3 4
# 1c/li_backwardr/include/sys# 34 "/usr/i4
# 30 "/ 34 "/usr/i/endian.h" 3 4
# 1hineinclude/ppc/end"
# 1 "<g intc/endh" 3 4/endian.h" 3 4
#" 1 3 4
#    elsesys/types.h" 2 3 4
# 1 "/usr/include/machine/hine/nan.h" 1 3 n "Cn4
# 3te8[128];
  (unsigned short);
unsigne 1 "/usr/include/pnclude/machine/eendian.h" 3 4
# 1es.h" 3 4
# 1 "/usr/include/sys"C" {
unsignude/machine/endian.h" 3 4
# 1 "/usr/include/3 4


typedef unsigned char igned long);
unsignshort;
typedensigned short);
unsigned long ntohl" 1 3 4
# (unsigned long) set_debug_pwd      char __mbsta34 "clud = char;
typedef un quad_t * qaddr_t;

tylen2_t;
pedef cha+ max(int32_t deusr/i/endian.h" 3 4
" 2 3 4
# 7nclude/stan.hr/include/m
# 1 fixpt_t;
typedef u_int32_t gi/usr/inc_t gid_t;
1 "/usr/include/"
#pragma GCCh" 2 3 4
# 1 "/usr/in/include/sys/types.h" 3 4
# 1 "/usrde/ppc/tyn>"
# 1 "<command line>"
# 1 "amdb_btree.cc"




# 1 "/usr/usr/include/stdio.h" 1 3 4
# nt16_t mode_t;
typedef u_int16_t hort);
}"/Users/jmhusr/i# 1 "/usr/include/syusr/include/sys/types.h" 3 4
# 1 "/usr/include/syspes.hoff_t;
typedef int32_t pid_t;
typedef quad_t rlim_t;
typedunsigned long htonl (und long ntohl  70 "/usr/include/sys/key_t;
typedef u_int16_

# 1 "/usr/include/machine/types.h" 1 3 4
# 30# 30 "/usr/include/machine/types.h" 3 4
# 1 "/usr/includelude/ppc/types.h" 1 346 "/usr/include/s



typedeint8_t;
typee/types.h" 1 3 4
# 30 "/usr/include/int8_t;
typedef unsigned char u_int8_t;
typedef r/inclurt int16_t;
typedef unsigned short ur/include/sys/typedef int int32_t;
typedef unf unsigned int u_int32_t;
typedef long long int64_t;
typed46 "/usr/incef unsigpedef long int intptr_t;
typedef unsigned def long int intptr_InputItree"
# long int uintptr_t;
# 31 "/usr/include/macrange/types.h" 2 3 4
# 73 "command line>"
# 1 "amue_pthread_att __firs;
tyt { long sig; chlastcommand line>"
# 1 "ami_pth_btree"
#_taginclude/machinfor ( ; char oph" 1d_mute;ys/tyar op3 4
# 33 "/usr/incgned  = types.ht _opa *read_mutdb_btree.cs/typost;
typedef unsigp_stack; char opaque[596];} *pthread_t;

typedef struct _opaquForusr/read_attr_t { long sig; char opaque[36]; } pthread_attr_t;

typedef struct _op 1 "<cng sig; char opa char opaque_pthread_mutexattr_g sig; char opaquemutexng susr/paque_pthread_mutex_t { lon 3 4
#r opaque[40]; }3 4
# 33 "/usr/incclude/sys/typ = distancde/mar opaqu pthredb_btree.clude/machine/ansi.h" 3 4
# 1 "/usr/include/ppc/ansi.h" 1 3 4
 set_debug_p      char __mbstate8[128];
        long long _mbstateL;
} __mstate_t;
# 34 "/usr/include/machine/ansi.h"  3 4
# 75 "/usr/include/sys/types.h set_debug_pwdclude/machine/endian.h" 1 3 4
# 30 "/usr/include/machine/endian.h" 3 4
 "/usr/include/ppc/endian.h" 14
# 81 "/usr/include/ppc/endian.h" 3 4
extern "C" {
unsigned long htonl ("/usr/ir opaque[4]; edef quad_t e/sys/cdefs.h" 1 3 4
# def int64_t quad_t;
typedef quat;

typedef struct mid/usr/ar op.h" 3 4
typedeadvig; chamidque[te8[128];
 /endian.h" 3 4
es.h" 3 4
# 1 "/usr/i;
     _bf;
  h" 3 4
struct _pthread_hande/sys/types.h" 2 3 4


typedef unsigned chu_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
tdef unsigned long u_long;
typedef unsign  struct __sbuf ;
          int _lbfsize;


        vo_t;
typedef int64_t qualude/stdio.h" 2 3 4
# 91 "/usrpedef char * caddr_t;
typedefnt32_t daddr_t;
typedef int32_t dev_t;
typedef u_int32_t fixpt_t;
typef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typef u_int16_t in_port_t;
typedef u_int32_t ino_
typedef long ke 3 4
# 1 "/usr/i "/Users/jmh/devel/libgist/src/libbtree"
# 1 "<built-ff_t;
typedef int32_t pid_t;
typedef quad_t rlim_igned short u_ypedef int32_t segsz_t;
tyinclude/sys/types.h" 3 4
# 1 "/usr/it __sbuf _bf;
   et {
        fd_mask fds_biinclude/sys/types.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 n (const char /endian.h" 3 4
        voidys/types.h" 3 4
typedefchar *fgets (char


typedef struct fd_set {
        fd_mask fds_bi "/usr/include/machine/types.h" 3
typed/endian.h" 3 4
# mask) * 8)))];
} fd        voidr/include/sys/types.h" 3 4
struct _pthreahandler_rec
{
        void (*routine)(void *);
        void *arg;       struct _pthread_handler_rec *next;;
# 202 "/usr/include/sys/types.h" 3 4
typef struct _opaque_pthread_t { long sig; struct _pthread_hdler_rec *cleanuigne76ong long u_int64_t;

typedef int32tr_t;
" 2 3
# 12 "/Users/jmh/devel/libgistng u_int64ist_defs.h" 2
# 23*, char *, int, size_t);
int sprintf (char *, c
enum l0 "/_mode_t { LATCH_NL = 0,file (vSH = 1char *tmEX = 2 };

nt idef short int2;c (int, Flong);
i4t vfprintfunsigned char uint1 const char *, __buILE *)_va_nt vfprintfr *, __bu (FIL_va_, const chart vs smclude/;
r *, __ __builtin_va_lisint shpidchar (int, Fint rcchar# 79ar *, ...);
int sscanf (const char *, const charusing ntptspace stdchar8*, ...);
int vasprintf (char **, const char *, __ (int, Ftr_t;
#int  *> VistercharE *,amdb_btree.;

tnst 1*, char *, int, size_t);
int sprintonst ext, co1
# *, ...);
int vasprintf (char **, con
char *fgett fileno (FILE *);
}






extern "C" {f (ch *fgetln (FILE *, size_t *);
int fpurge (FILE * (FILE *);

class f (chp (int*, char *, int, size_t);
int sprintvec_fgetln (F18st char *);
int putw (int, FILE *);
void se
/usr/i(cha_pair*tmpb_btr.h" 2 r *, __builtin* ptdef unsclude/ 64_t;getc *);
chVECnam (consint _cnad) (voprintf ef chdb_btrar *tempna* _" 3 ;thre, size_t, co *temp[8]ar *, const c
void : protected, const char friend const 
void;
publicclude/ *, .dummy_ *, id {t;
t_small = 8ngetde/sy
void()
typedef strcnnt160;
typedef sf char r *, int);
}" 3  = &list);0] *zope" 1 3 n (cons.h" 2 n (con& v1es.h" 2  (const v2t char *, con" 3 io.h" 3 4
extern nt vset(voidv2} pthre"C" {
FILE *funopenint * pinclude/ l *, char *, int),dio.h" 3 4
extern const chp, lint), fpos_t ~n (constr *, __bool _is_larglong.h" 2 {returnude/std!io.h" 3 4
ex"C" {
FILE *& puoid *, fpos_t, int), int ( *zopen (conFILE *);
}

 (const vne int __sputc(ret cht char *, const cha}
# 338 "/usr/inclu__built*thir opaquswbuf (int, FIt chunopen (const void *, int (*)(void *, char *, __built_p->_w .LE *v1__swbuf int), fpos_t (*)(vo   return (*pos_t, int), int (*)(void *))     return (__swbu __srget (FILint vsnprint* caddchar *, .h" 1 3 4
# 71 "f (char *, 3 4
typedef in4
# 8to(pos_t, int), int imi charx7f} div_e_t;


;
t vscanf (cnst char char const ch{t char *, con (const :en (const cE *zopeILE *funopen (const void *, int (*)(void *t;
# 99 "ar *, iusr/include/stdlib.h"pos_t, int), int (*t;
# 99 " __srusr/i
 *, __bos_t, tr(int indexe_t;




4
# 71 "());
dpc/a0 &&d));
d <onst ) ?ommand line>"
# 1 "amdb_btree.cc"




# 1 int q)int),[));
d].ptr : 0;       printf (ch(void));
double atof (const char *);
int atoi (const char *);
long atol (const char *);
void *bseanst void *, cpede void *

private: ate} (int(FILE *, fpos_t, int);
fpos_t ftello (FILE *);
inst c0tw (FILE *);
int pclose (FILE *);
FILE *popen (const char queryonstconst char cursorextchar *, _const char *enalty        long rem;stat quoh" 2 doublen_va_, int (r *, __ize_t, int (*)"/usr
void *realloc (void);

intp    p(p *, size_(unsignevfscanf (FILopree"
#<turn (*ize_t, int (*)(&pen)tof (constp < pen.pid *, sir **);
lod (conne_t;




 **, int)id *, siize_t, int (*)&
        =ng strtol (const char *, char p =unsignedhar)_c != '\nr **, int);
int system (const cha(unsignet char *, sizt);
size_t mbstowcd fre9(FILE *, fpos_t, int);
fpos_t ftello (FILE *);
ze_t, size_t(void      long  4
typ *, .(char *, ids


typedef it_poin

int puchar *);
irt_rec;
int setenv (consbt_*);
int setenv (consbt_str
int setenv (const 1 "ar *);
int setenv (const(unsihar *, const char *, spar *);
int setenv (consssoid lcong48 (unsigned shsigned short[3]);
long jrsigned short[3]);
long jnp;
int setenv (f (chnumext

typer *, __g strtol (cint putemyId *zopenc, FILhar* myNamar *, __const v(char *, co*igned sholist[ned short
 ]ar *, __, __birtualonst paque_ptb_btree.cchar *& pagechar *);
i.h" 2 3tree.ckey, int datlen);
void arcdataunsigned shsprint childinclude/sy8 "/u);
void arc4random_aremoveom (unsigned char *dat, int datlen);
vint alots[]char *);
iint numSr **char *cgetcap (char *, char *, int)updateKeyom (unsigned char *dat, int datline.cclo; } pthreaden);
void arcnewKeychar *cgetcap (char *, char *,;
FILfindMinPenom (unsigng strtol (cor *dat, int datlen);
void arc4random_stir (void);
char *getbsize (intchar **); long *);
int cgetset (char *);
intsearchom (unsigned char *dat, int datlen);
vd *malloc (s* lloc char *);
int cm0 "/e*, char *);
int &cgetMgid (uchar *cgetcap (chaetset (char *);
intget*, char *);
iar *, char **);
int cgetustr, char *char *);
ioid arc4rachar *cgetcap (ffer);
vwchar_t *, const char *, size_t);
size_t wcsvoid arc4random_apickSplidom (unsigned char *dat, int datl, conightEntri(unsigned long, int);
Rcons
int cgetnum (char *, coldBpsigned long, charleftned char **, int, c consned char **,en);
void arcentry1le drand48 ool& oneGoes);

int sradixsort (const und *);2long random (voitwo
void *re long);
int merge21*, ...);
int vasprintf (char **, const ch void *, const void;
FILunionBpt void *, const void *));

char *initsoid arcbed char **, (FILbpIsValsetenv (consen);
void arcpred
long rando);
unsigned long r *realpath (consbpChttr_d)id *, sizevoid arc4ranvoid qsort (voidg);

chCsort t void *, const void 4a (long);

che_t;



 long
         strtoq (FILcheckt void *, const          strtoll(co);
unsigned long  char **, int,l, sipsort (void *, size_      termid (c
FIL(*PrintPredFct)om (unsignostream& paque_pthredb_btree.cc" 2



# 1 "/Users/jmh/dev *zopeefs.h" 1
# 10 "/UserDatah/devel/libgist/include/gist_defs.h"
# 1 "/usr/*getassert./Users/jmh/d pUsers/jm void __eprincludeonst cinclath[]6rt (void *, size_t, size_t, int (*)(const void *, co (int, Fdom_a(*Parseh/devrand48 (longstr, (void out,char *);

externgist/inc pist/har *, consin/3.3/c++/ved, con/Users/jmh/devel/libgist/Qloc include/gist_defs.h" 2long
        & strtoucc/darwin/3 3

# 1 c++/ve 3

#);
void *rea(void::cc/darwin/om (unsigned chint putechar **, int);
uns char ntptchar *);
i__eprintf (const char c++/exception_dar *, unsigned, cc++/exceptiin/3.3/c++/vector++/bits/functexcept.h" 2.3/c++/bits/functex" 1 3
# 34 "/usr/in) clude/hrow]);
(id),g);

vo(ntpt),onst char (nst char void
  _inclow_badincl char *);
i++/vector(++/vectorvoidoid
  __);


  __thr34 "/usr/in);


   voidnclude/machincept.h" 3
#     id] = = '\n'))
   id free  labs (long);
 ldiv_t
         ldiv
char *fgetlnt filenLibrary/Java/Homeng u_int6jnigetln (F2 *, hrow_length_error(const char* __t filen long u_int64_t;

typedef istdarggetln 3 4
# 4r (Fs);

  void
  __throw_runtime_error(cst c (int, F__builtin_vaor(co __gnucd
  __th free   las);

  void
  __throw_range_error(const char* __s);_overflow_er flow_error(char hrow_length_error(const char* __s2de/gi
  __throw_length_error(const char*_md setbuffelong/include/gcc/darwin/3.3/c++/vector" vfprintf (FILji);
ivfprintf (FILobase. (FI1 3
# 64 "*, __builtinjbyted
  _r (Fow_ios_failure(const char* __s);
}
# extern "C" {gned*, .d
  __throw_out_of_range(const chonst char *, __builtinjm (veanist);
int vprintf (const j (loc/darwin/3. 3
# 1/gcc/1 3
# 64 "float jc-dar1 3
# 64 ");

intj);

inetc (int, F.h"  j (charsize_t, s_jobjectusr/i3.3/c++/const   long qu+/ppc-darwin/bits/os_/ppc/a
ints.h" 3
extern "C" {
# 83 "/usrstriltis.h" 3
extern "C" {
# 83 "/usrarray_defines.h" 3
typedef enum nodepc-darwAkinds {
        _kindsREAD_SPECIFICyte1,
        NODE_PROCESSWIDE_PTR=2,
 (lo1,
        NODE_PROCESSWIDE_PTR=2,
/gcc/1,
        NODE_PROCESSWIDE_PTR=2,
in NM_ALLOW_RECURSION=1,
        NM_RE (FI1,
        NODE_PROCESSWIDE_PTR=2,
c-dar1,
        NODE_PROCESSWIDE_PTR=2,
);

in1,
        NODE_PROCESSWIDE_PTR=2,
ppc-da1,
        NODE_PROCESSWIDEchar* __s)/ppc-dar*extern 1 3
# 64 "s_define*_definid *keydata)/include/g*get_and_loid *keydata)its/os_*gned inid *keydata)_kinds* _keymid *keydata)C_DATA=1,
   *rocesswide_ptnd_unlock_pro       NO*ptr) ;
extid *keydata) nd ;




*_processwide_ptr(unsign    NM_ALL*) ;
extern id *keydata)CURSION_I*e_processid *keydata)_LOCKING=3*key, unsigid *keydata) } TnodeMod*unsigned inid *keydata)get_per_thre*rocesswide_pid *keydata)xtern void _ key, voed int 
  _  lac++config.h" 1 3
# 35 "/usr/include/gcc/d/ppc-darjweakad_data(unser_fr j3 4




typerocesswi z *zopeptr)  bnes.h" iltincnes.h" /gcc/dr opaquude/gi/3.3/c+obase./3.3/c+c-darwf/3.3/c+);

int *, con/ppc-darl;
}/ppc-da*, size_t,_jfieldIDc/darwin/3.s/stl_algobase.t _kobase.h"its/stl_almethose.h" 2 3
# 1 "/usr/ining" 1 3 *ring" 1 3
#3
# _throw_ios_failure(const char* __s);" 2 3
# 1 "/usr/ (constrwin/3.3/ *zopenchar *, _aturhar *, s
FILEfnP;
in} JNINativeMng" 1ar *, _ "/usr/ "/usr/inInterface_3.3/c++/csJNIEnvde/sude/gcc/d" 3 4
tptrdiff/cstr77rocesswide_ptr(unsigned int key) ;
#tddef.h" 3Invok/usr/include/stddef.h"avaVMtypedef int ptf_t;
 ze_t;
}ar *, h" 1 3 4
# 66 "/usr/includ" 1 3
#cstdde_p->rvedr *, in 2 3

# 1 "/us1/include/string.h" 12r *, __b2 3

# 1 "/us3ypedxit (void cfm_tr_t;
s[225 (voi.3/c++/pp( *GetVersint (" 3 4
 *en{
  6 "/usronst ( *DefineConstinclude/mp (const void *, intrwin/3.3/ce/gcc/darwoad/endrand48 3
}
#*bufchar *);
cc/daude/gcc/darnst void *Find_t);
void *memcpy (void *, const void *, siid *, con/gcc/darw(voiromRefl__buiclude/void *memcpy (void *, /ppc-daring" 1
void *mclude/gcrchr (const charFobast);
int strcmp (const char *, darwiid *, conppc-dar( *Toonst char *, int);
int strcmp (const canf (cols,);
char *sting" 1 3,its/os_defisSonst id *, const void *GetSuperst vot char *, const char *);
charsub
void *ms/os_def( *IsAsdarwibler (cnst char *, size_t);
int strncmp
int strncmp const char *);
size_t strcspn *, const char *);
char *str;
char *streclude/gcdarwin/t strlen (const char *);
cha size_tTppc/t);
int strcmp (const c/include/gobj
void *m const char Ne *);
char *strstr (const;
char *azz, const void *msg
void *m/include/g( *Excep1 "<Occurvoidoid *memcpy (void *unctexc
# 10 ;



int bcDescribet void *, const void *, size_t);
void bcopy Cleart void *, const void *, size_t);
voFatalErro_t);
int ffs (int);
crxfrm (char *, const, int, size_tPushLocalFrnst );
int strcmp (const cde/gcapacitfunctexchar *);
sizPop
char *rindex (const char *, int)ppc-darresul } pmp (const char *NewGlobalRef*);
char *strdup (const char *lonst char e_t);
voDeleteonst char *, size_t);
size_t strlcpy (cgref*, const char *, size
charhar *, size_t);
size_t strlcpy (const char *char *, constSameOpc-daar *, size_t);
char *strsep (char1*strsep (char int), fcat (char *, cconst char *, size_t);
char *strsep (cncasecmp (*);
charEnsur constC strcaseex (const char *, int);
int strcasecmnst void *, voidigned*strtok_r (char *, const char;
size_t stconst void *, void *,ng ::memcpy;
  using ::memmove;
  using trerror (int);
size_t sr/i:strcpy;
  using ::strncpyV;
  using ::strcat;
  using ::strncat;
  using ::memcmp;
  __thrargsusing ::strcmp;
  using ::sA;
  using ::strcat;
  using ::strncat;
  using ::memcmp;ppc-dar*  using);
char *strncat (*strto_t);
void *memcpy (void *, trsep (char **, const char *);
cIn sig; Ohar *, size_t);
char *strsep (charmove;
  using ::sar *);
char *strchGetclude/ID (char *, const char *);
size_t strxfrm (char *,, sizerand48 (loc/dar 3
namespace std
{
Call*strto *, int);
int strcmp (const char *,  }

  ;
  using ::memcmp;
  using ::strcmp;
   using ::strpbrktrcoll;
  using ::strncmpbrk(char* __s1, const char* __strcspn;
  using ::strspn;
  us using ::strpbrktok;
  using ::memset;
 pbrk(char* __s1, const char* __sen;

  u
  using*, const char *); usiBc-darwtrpbrk;

  inline char*
  strpbrk(char* __s1, const char* __s2)
  { retu:strstr;

  inline char*
  s_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  str:strstr;

  inline char*
  s  { return __builtin_strrchr(const_cast<const char*>(__s1), __n); }

  using ::
}
#

  inliytnclude/ { return __builtin_strrchr(const_cast<const char*>(__sn_strstr(conr/include/limits.h" 1 __s2); }
}
# 66 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# r/include/limits.h" 1  { return __builtin_strrchr(const_cast<const char*>(__s1), __n)sing ::memchr;st c

  inlChars.h" 1 3 4
# 62 "/usr/include/limits.h" 3 4
# 1 "/usr/include/gcc/darwinde/limits.h" 2 3 4
# 1_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  strde/limits.h" 2 3 4
# 1 4
# 25 "/usr/include/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/inclu/gcc/d

  inlSLE *s.h" 1 3 4
# 62 "/usr/include/limits.h" 3 4
# 1 "/usr/include/gcc/darwinwin/3.3/c++/cstdlib" 3
#_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  strwin/3.3/c++/cstdlib" 3
# 4
# 25 "/usr/include/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/inclu size_t usiInib" 3
# 84 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
namespace std
{
   using ::free;
  usi_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  str using ::free;
  usi 4
# 25 "/usr/include/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/inclu (FILng ::frLongs.h" 1 3 4
# 62 "/usr/include/limits.h" 3 4
# 1 "/usr/include/gcc/darwin
  using ::wcstombs;
 _cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  str
  using ::wcstombs;
  4
# 25 "/usr/include/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/incluc-darwng ::frF-dars.h" 1 3 4
# 62 "/usr/include/limits.h" 3 4
# 1 "/usr/include/gcc/darwininclude/gcc/darwin/3.3/c_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  strinclude/gcc/darwin/3.3/c 4
# 25 "/usr/include/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/inclu);

intng ::frD;

ins.h" 1 3 4
# 62 "/usr/include/limits.h" 3 4
# 1 "/usr/include/gcc/darwin ~exception() throw();


 _cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  str ~exception() throw();


  4
# 25 "/usr/include/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/incle_t);
vo usiVoir *, int);
int strcmp (const char *, ar* __s1, const char* __s2)
  { ret
  terminate_handler s_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  st
  terminate_handler s  { return __builtin_strrchr(const_cast<const char*>(__s1), __n); }

  using :rchr(char* __sNon arc4rang ::strpbrk;

  inline char*
  strpbrk(char* __sing ::strncat;
  using ::memcmp;
  using ::strcmp;
  l uncaught_exception() thr_cast<const char*>(__s1), __s2); }

 sing ::strncat;
  using ::memcmpb_btree.  inline char*
  strrchr(char* __scaught_exception() thr  { return __builtin_strrchr(const_cawin/3.3/c++/new" 2 3

extern "C++" {

na1), __n); }

  using ::strstr;

  inlcaught_excine char*
  strstr(char* __s1, const char* __s2)
sing ::strncat;
  using ::memcmp;
  using ::w_t { };
  extern const nothrow_t nothr ();
}

}
# 43 "/usr/include/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





 w_t { };
  extern const nothrow_t noth  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc() throw();
  };

  struct nothrowr/include/lrn const nomits.h" 1 3 4
# 62 "/usr/include/limits.h" 3 ();

  new_handler set_new_handler(new_handle:size_t, const std::nothrow_t&)darwin/3.3/c++/new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[]:size_t, const std::nothrow_t&)  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc() throw();
  };

 3 "/usr/include/limits.h"caught_exc 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 sing ::strncat;
  using ::memcmp;
  using ::urn __p; }


inline void operator ();
}

}
# 43 "/usr/include/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





 urn __p; }


inline void operatoid* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { retwin/3.3/c++/ccaught_excstdlib" 3
# 84 "/usr/include/gcc/darwin/3.3/c++sing ::strncat;
  using ::memcmp;
  using ::/include/gcc/darwin/3.3/c++/ppc-dar ();
}

}
# 43 "/usr/include/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





 /include/gcc/darwin/3.3/c++/ppc-daid* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { ret using ::frcaught_excee;
  using ::getenv;
  using ::labs;
  usingsing ::strncat;
  using ::memcmp;
  using ::_symbol;
        char *mon_decr ();
}

}
# 43 "/usr/include/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





 _symbol;
        char *mon_decid* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { ret
  using ::wcaught_exccstombs;
  using ::wctomb;

  inline long
  absing ::strncat;
  using ::memcmp;
  using ::char n_sign_posn;
};
# 76 "/usr/r ();
}

}
# 43 "/usr/include/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





 char n_sign_posn;
};
# 76 "/usr/id* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { retinclude/gcc/dcaught_excarwin/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwsing ::strncat;
  using ::memcmp;
  using ::f int* __c_locale;





  templater ();
}

}
# 43 "/usr/include/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





 f int* __c_locale;





  templateid* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { ret ~exception() caught_excthrow();


    virtual const char* what() const sing ::strncat;
  using ::memcmp;
  using ::      int __ret;






      if (__pr ();
}

}
# 43 "/usr/include/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





       int __ret;






      if (__pid* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { re
  terminatecaught_exc_handler set_terminate(terminate_handler) throsing ::strncat;
  using ::memcmp;
  using :/usr/include/ctype.h" 1 3 4
# 68r ();
}

}
# 43 "/usr/include/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





/usr/include/ctype.h" 1 3 4
# 68  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc() throw();
  };

  struct nothro
int strcolGet *, cchar* __s1, int __n)
  { return __builtin_strchr(const_cast<const char*>(__s1), __n); }

 ne void*
 *, const char *);
char *strcpy (ch }

   char *, int);
tor new[](std::sizeGetine chaint (*sputrune)
            (rune_t, char *, size_t, char **);
  r/inclu_t iyteint (*sputrune)
            (rune_t, char *, size_t, char **);
 de/limitGet 2 3int (*sputrune)
            (rune_t, char *, size_t, char **);
 win/3.3/ct (cLE *int (*sputrune)
            (rune_t, char *, size_t, char **);
  size_t);
In *variable;
        int variable_len;
} _RuneLocale;



extern _R
  usingGetcstoint (*sputrune)
            (rune_t, char *, size_t, char **);
 include/g cha-darint (*sputrune)
            (rune_t, char *, size_t, char **);
  ~exceptioGetthrow(int (*sputrune)
            (rune_t, char *, size_t, char *" {
void ptioS        int (*sputrune)
            (rune_t, char *, size_t, chastrrchr(cova/assert.
int isuppeinvalid_rune;

        unsigned long runetype[(1 <<8 )];
      t strlen (c digittoint (int);
int <<8 )];
        rune_t mapupper[(1 <<8 )];






        _t st
}
# digittoint (int);
inext;
        _RuneRange maplower_ext;
        _RuneRange map/usrst c digittoint (int);
invoid *variable;
        int variable_len;
} _RuneLocale;



e,ext;

   digittoint (int);
in_DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;nt);
in digittoint (int);
in/ctype.h" 2 3 4
# 100 "/usr/include/ctype.h" 3 4
extern "C" ,"/usr/i digittoint (int);
in
int isalpha (int);
int iscntrl (int);
int isdigit (int);
inthar -darw digittoint (int);
inslower (int);
int isprint (int);
int ispunct (int);
int isspac,ph (int); digit;

  inline char*
  sst chatrchr(char* __s1, int __n)
  { return __builtin_strchr(const_cast<const char*>(__s1), __n); }

  usist chang ::strpbrk;

  inline char*
  str "/usr/include/gcc/darwin/3.3/c++/exception" 3
  void __ve < 0 || _c >= (1 <trcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::strspn;
  us
static inline int
__ttok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr:strstr;

  inlst chaine char*
  strstr(char* __s1, const();

  new_handler set_new_handler(new_handler) throw();
}
/darwin/3.3/c++/ccttrcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::stnt c);
extern int iscntrl(int c);
ale->maplower[_c];
}
# 50 "/usr/include/gcc/darwin/3.3/c++/cctype" 2 3
# 71 "/ur/include/l/darwinmits.h" 1 3 4
# 62 "/usr/includesize_t, const std::nothrow_t&) throw();
void operator desxdigit(int c);
extern int isdigit(int c);
extern int isgraph(int c);
extern int islower(int c:iscntrl;
  using ::isdigittok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr;e/limits.h"st cha 2 3 4
# 1 "/usr/include/sys/sysl
inline void operator delete[](void*, void*) throw() { }gcc/darwin/3.3/ctrcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::stusr/include/gcc/darwin/3.3/ctok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchrwin/3.3/c++/csonst stdlib" 3
# 84 "/usr/include/gcc/dinclude/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/includaits = char_traittrcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::stss basic_string;

  template<>tok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr using ::fraits =ee;
  using ::getenv;
  using ::nds_sep;
        char *mon_grouping;
        char *posigcc/darwin/3.3/trcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::st/bits/c++io.h" 1 3
# 35 "/tok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr
  using ::waits =cstombs;
  using ::wctomb;

  inltruct lconv *localeconv (void);
char *setlocale (int, cocstdio" 3
namesptrcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::stusing ::fclose;
  using ::fetok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchrinclude/gcc/daits =arwin/3.3/c++/new" 3
# 1 "/usr/inc_from_v(char* __out, const int __size, const char* __fmt,n;
  using ::fscatrcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::stfwrite;
  using ::getc;
  usintok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr ~exception() aits =throw();


    virtual const char* out, __fmt, __prec, __v);
      else
        __ret = sprintbuf;
  using ::setrcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::sting ::tmpnam;
  using ::ungetc;
tok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memch
  terminateaits =_handler set_terminate(terminate_;
char *strerror (int);
size_t "/usr/include/runetype "/usr/include/gtrcoll;
  using ::strncmp;
  usistrerror (int);
size_t gned long *types;
} _RuneEntry; "/usr/include/gtok;
  using ::memset;
  using :strerror (int);
size_t s{
        char magic[8];
        chn;
  usr encoding[32];

        rune_t (*sgetrune)
            (const char *, size_t,char const **);
   < 0 || _c >r *, const char *);
char *strrchr (ctrncat *, size_t, char **);
        rune_t /darwin/3.3/c# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errno.maplower[(sxdigit(in# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errnoe runetype_gcc/darwin# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errnot;

        vits = char# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errno size_t);
gcc/darwi# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errnousr/includecstdio" 3
# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errnoalnum (int);n;
  using # 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errno (int);
int itbuf;
  usin# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/(int);
int ___tolrno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/snt);


int diut chm_yday;
        int t
extern int * __error (void);

}
# 23 "/usr/include/errno.h" 2 3isideogram (inde/time.h" 3 4
extern char ead.h" 2 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 10 "/usr/inc (int);
intde/time.h" 3 4
extern charsched_param { int sched_priority; char opaque[4]; };


extern ___runetypde/time.h" 3 4
extern charvoid *variable;
        int variame (struct tm *);
size_t strftim" 3 4
stade/time.h" 3 4
extern charsr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
 || _c >= de/time.h" 3 4
extern char" 3 4
struct timespec {
        time_t tv_sec;
        long t) & _f;
}

de/time.h" 3 4
extern char
int isalpha (int);
int iscntrl (onst time_t *, struct tm *);
chac, f));
}de/time.h" 3 4
extern charint tm_mon;
        int tm_year;
        int tm_wday;
        i || _c >= (1 de/tint schets/os_r *, cSts/os int);
void *memccpy (void *hed.h"*unicodize_size_t);
void *msize_ay;
    s/osLengthinclude/gcc/darwin/3.3/struct st(*_seek)/pthread.h" 2" 1 3 4
# 72 2 3onst char *, size_t);
in# 1 "/usr/t strlen (c*isCned short)
int isuRelease4
# 73 "/usr/include/unistd.h" 2 3 4
# 91 "/us/pthread.h" 2usr/me _CharT, truct timespec *);UTF int);
void *memccpy (void *, consutin/3.3/c+std.h" 1 3 4
# 72UTF "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/u (longuid_t, gid_t);
 "/usr/include/unistd.h" 2 3 4
# 91 "/usr/include/unistd.h" 3 4
extern "C" {
 void
 int dup2 (int, int);
int execl (const char rand48 (longunsigned st char *, uid_t,1,
   "/usr/include/unistd.h" 3 4
_kinds_kind 3
namespace st1,
    using ::strte (co/include/unistd.h" 2 3 ize_t);ezone (int, int);ppc-darl/li
# 22 "/usr/include/e, char * coElemenok_r (char *, const char *, ch1,
   _kind1 "/usr/));
dotime.h" 3 4
exterconf (int, int);
char *getcwd (char *, size_t);
gid_t getegid (void);
unt);


int digitr(int c);
extar * const *ine cha * const *);
int execvp (const char  4
# 37 "/uspid_t getpid int isat_t getppid (void);
uid_t getuid (void);processwidr *, c 2 3;
pid_t getppid (void);
uid_t getuid (void); ;
extern vtimespe    NM_AL_t getppid (void);
uid_t getuid (void);CURSION_Ir *, cIURSION__t getppid (void);
uid_t getuid (void);_LOCKING=3oid *, sOCKING=_t getppid (void);
uid_t getuid (void); } TnodeModr *, c
int ;
pid_t getppid (void);
uid_t getuid (void);get_per_threr *, cthrow(;
pid_t getppid (void);
uid_t getuid (vr(int c);
extent dup ( (void);
pidint);
const char *, size_t);
invoid);
pid_t  getegid/include/unistd.h" 3 4id *, clower[(1 << (int, const void *, size_t);

externint isattg;
extern int optind, opterr, o char *etype_ext; (int, const void *, size_t);

exterprocesswidg;
extern int optind, opterr, o/gcc/dnt dup (i    NM_AL, const void *, size_t);

exter ;
extern vg;
extern int optind, opterr, ode/gst char nst char, const void *, size_t);

exterCURSION_Ig;
extern int optind, opterr, o (FILst char d_t setsi, const void *, size_t);

exter_LOCKING=3g;
extern int optind, opterr, oc, f))st char ed int);
l, const void *, size_t);

exter } TnodeModg;
extern int optind, opterr, o);

intst char int, pid_t), const void *, size_t);

exterget_per_threg;
extern int optind, opte" 3 4
extern "C" {
 t write (int, const void *, size_t);

extern char *optarg;
extern int optte8[1nt);
inILE .h" 3 4
extern "C" {
 );
int lietopt (int, char * const [], const char *);



str *, c*getpass (const char *);
int getpgid (*);
int async_daemon (void);
char *brk (const char *);
intvoid **getpass (const char *);
int getpgid (const char *, const char *);
int des_cipher (const char *, c
char **getpass (const char *);
int getpgid (const char *key);
int encrypt (char *, int);
void endusedes_s*getpass (const char *);
int getpgid ( *, char * const *, char * const *);
int fchdir (int);
intt (con*getpass (const char *);
int getpgid (tostr (u_long);
int fsync (int);
int ftruncate (int, off_t);;
char *getpass (const char *);
int getpgid (plist (const char *, int, int *, int *);
long gethostid (void)d);
int *getpass (const chaime.h" 3 4
exze_t write (intRegint oid *, size_t);

extern char *optarg;
exterst cht8_t;
tnst chatern int optbuasecmp (const chreset;
int g3 4
typedef int sig_atomic_t;
st char *);



stpc/signal.h" 3 4
tyr *, d *, cons      REGS_SAVED_N*);
int a3 4
typedef int sig_atomic_t;const char *);
int
} regs_saved_t;
# 66 "/void *clude/ppc/signal.h" 3const char3 4
typedef int sig_atomic_t;nst char *, mode_t, } regs_saved_t;
# 66 "/
char *clude/ppc/signal.h" 3nst char3 4
typedef int sig_atomic_t;int);
void endusegnal.h" 2 3 4
# 73 "/usrdes_sclude/ppc/signal.h" 3d_t setsi3 4
typedef int sig_atomic_t; fchdir (int);
intgnal.h" 2 3 4
# 73 "/usrt (conclude/ppc/signal.h" 3ed int);
l3 4
typedef int sig_atomic_t;ncate (int, off_t);gnal.h" 2 3 4
# 73 "/usr;
char clude/ppc/signal.h" 3int, pid_t)3 4
typedef int sig_atomic_t;ong gethostid (void)gnal.h" 2 3 4
# 73 "/usrd);
int clude/ttoint (int);
int isascl.h" 3 4
typedef int sig_atomic_t;
# 50 "/usr/include/ppc/signal.h" 3 4
typedef enum {
        REGS_SAVEr (int)
        REGS_SAVED_CALLER,


        REGS_SAVED_ALL
} regs_saved_t;
# 66 "/usr/include/ppc/signal.h

}
# 1truct sigcontext {
    int sc_onstack;
    int sc_mask;
        int sc_ir;
    int sc_psw;
    int s_tolower      void *sc_regs;
};
# 28 "/usr/include/machine/signal.h" 2 3 4
# 73 "/usr/include/sys/signal.h" 2 __mask134 "/usr/include/sys/signal.h" 3 4
typedef unsigned int sigset_t;

union sigval {

        int sirunetypt;
        void *sigval_ptr;
};







typedef struct __siginfo {
        int si_signo;
        int nt
__ist;
        int si_code;
        int si_pid;
        unsigned int si_uid;
        int si_status;
        int
__is_addr;
        union sigval si_value;
        long si_band;
        int pad[7];
} siginfo_t;
# 20ax(int);3 4
sterusr/inonst char *, size_t);
int strn_t strxfrm (c "/usr/include/ *ing" 1paque_pthrsigvaar*
  sinclude/gcc/darwUnr_sp;
        int ss_onstack;
};
# 336 "/usr/incloid *, int, sizeMonitorEsr/ichr(void* __p, int __c, size_t __n)
  { rt char *const sxiok_r (char *, const char *, char *oid *, int, sizeGete_t;
}pedef int sig_atomic_te_t;
} **vm32 "/usr/include/pp4
# 72 void *sc_regs;
};
# 28 "/usr/4
# 91 "/usrsk;
        int sc_ir;
    int sc_psw;
    int sc_spt char *;
int sigaddset (sigset_t *, int);
int sigdelset (sigset_t *, int   int sc_psime.h" 3 4st char Pr intiv sv_maCriticaevel/libg * const *);
int execve (cusr/include/unistd.h" 3 4
extern "C" {
 int sigprocmask (int, const sigset_t *, sigset_t *);
int sg.h" 3c(int, void *4
# 32 "/usr/pthread.h" 2t dup (int);
k (int, const sigset_t *, sigseint);
int ingusr/include/unistd.h" 3 4
extern "C" {
 void
  se (int);
int sigreturn (struct sigcontext *)har *, int);
untext nk (conste/gctpgrp (Weakonst char *, sized* __p, int __c, size_t __n)
  { t char *, size/usr/include/unistd.h" 2 3 4

int pro

}
#ncasecr(int c);
extern (void *, soid unistd.h" 2 3 4

int e_t strlcat (char *, cDihar );
iBuff_signame[3igset_t * cpy ((void addrespass (FILt strcasecmp (c(void 
int is
char comp Aonst c(const char *);
int re_*);
pid_clude/ppc/usr/include/ char *, int7 "/usr/include/int);
int revoke (const char  consd fre76processwide_ptr(unsigned int key) ;
#tddef.h" 3 4
tm (const charclude/gcc/darwin/3.3/c++/cs*func1 "<s *, ...);de/g);
int memw >= 0 || (_p__builtetegid (g->teuid (uid_= '\int), fpos_t one (in, size_t);
ude/gist_de *, size_t);
void *memmove (void *, const void *,ogin (const char"/usr/incl);
int setgroups (int, const t sethostnam= '\,in_va,id *memmoonstude/gcc/darid (long);
inid *, intme (const char *,*setmode (const char *);
int s
int setret pid, pidegid (gid_t, g/gcc/darwr (const char *, in(char *, const c);
int setrgid (gid_t);
int set strtofflags (chart pidconst char *)id (lonclude/gcl (const char *, cr **, u_lar *, u_long *);
int swapon (const char *);
int );
intt pidar *, co
typedef st*);
pid_e_t strcspn (cons();
char *strerror (int);
size_t strlen (const char);
int setgroups (int, const rm (unsigned int, t pid,# 34 );
size_t onst char *;
unsigned ist voit (char *, co unsignecmp );
int setgroups (int, const gidbopt (char t pid,cmp (constid (lons/os_defst char *, size_ **, char * char *, size);
int setgroups (int, const ned long);
int se char*,vor*,vze_t;
unsigned int ualarm (unsigne);
int rrchr (const char *, int);
size_t strspn (constusleep (unsigned int);
void *valloc (siz
int ttyslo# 34leep (coxtern char *suboptarg;
de/gchar (t char *, constusleep (unsigned int);
void *v,unsit pid,onst char id (lonlong*,unsNewheckuserac strxfrm (char *, congned long);
int searchfs (const chigneid_t vfotrnca const chaid (lon/include/g


int bcmp (cons_t);
int setgroups (int, const h" 2 3 4




# 1 "oid sethostid (log.h" id bcopy (const vw >= 0 || (_pach_types.h" 1 3 4
#
# 1 "/us/include/mach/mach_types.h" 3 4size_sr/include/gcc/darwin/3.3/stdint..3/std/include/mach/mach_typst char *,me (const cha(const char *,ud_t);
int se_t;
typedet pid,# 40 "/usr/i, int, siz_t);
char *rin();
int strcase);
int setgroups (int, const 8_t;
typedef ind*,voi strcasecmp (cid (lonppc-dar, const char r **, u_l);
sizet16_t;
typedef int32_t int_leant8_t uint_let pid);
size_t;
unsigned int uala, const charr **, u_lhar *);
int setgroups (int, const uint_least64_t pidhar *, consch/mach_typ, size_t);
voidr **, u_lrncas32_t;
typedef u_int64_t_fast32_t;
typet pidrncasecmp ( int32_t int_fastconst chr **, u_ledef int8_t int;
typedef uint8_t_t;
typedr*,void*,void*,uns*,size_t,unsignehar *strtodef uint32_t*);
void swab (cvoid*,void*,size_t,unsigned lonarwin/3.3/st pid 3 4
ab (const vpedef uint64_t uin_t;
typedef uint3_t int_fast64_t_fast8_t;
typedef int4_t uint_fast6ypedef uint16_t d lonng" 2 3
# 77 "/usr/nt16_t int_least16_t;
typedef int32_t int_lenfo.h" 3 4
# 1 "/usrf int64_t int_least64_ 22 "/usr/inc  using ::med long,void*long intmax_t;
typedef unsignee/mach/machid*,voidng ::strcp4_t;
typedef u::strncpyed long,void*);_s1, const char* __s2)
 


typedef trcspn;
  usdb_btree.ct char *);
siz;
typedef s;

  void
  d_t;
t  usnst chahar **);
clude/
siz =_t;
typedef intng ::stvm_types.h"/ppc/vm_t,  using ::s_t;
# 86 "/usr/inpes.ffset_t;






     returt natural1 "/usr/include/mach/ppVc/vm_types.h" 1 3 4
# 77 "/usr/incnt setlogin (const char trcspn;
  usi int8_t int_fast8_t;
typedef int





typedef natural_t vm_offset_t;


1 "/usr/include/mach/ppAnclude/mach/machine/vm_types.h" 2 3 4
# 64 "/usr/include/md* __p) throwtics.h" 2 3 4

struct vm_statistics {
A       integer_t free_count;
     targ;
int getsuvoid*
  memdef uint32_t uint_fast32roups (int, const gidins;
       intmax_tid*,void*,size_t,unsigneconst_castdef uint32_tmove;
  using :void*,void*,size_t,unsigned loneger_t lookintmax_tpes.h" 3 4
# 1 shell (void);
i  strchr(ched long,void*);

int fsctl 3.3/c++/except_statistics.h" 3 4ast<const char*>);
int setgroups (int, const gidvm_statispedef natur pid_3 4
# 22 " 1 "/usr/includ using ::strpbrkkups;
        i3 4
# 77 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef unsigned int natural_t;
# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integerin_strpbrk(const_tatistics_al_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int space_t;
# /usr/include/mach/rrchr(const_cast<const char*>(__/mach/vm_statistics.h" 3 ach/vm_statistics.h" 2 3 4

struct vm_stat/usr/include/mach/boolean.h" 1 3 4
# 127 "/usr/ine/boolean.h" 1 3 4
# 27 "/usA/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/macd.h" 3 4
# 1 ".h" 1 3 4
# 129 "/usr/include/mach/ppc/boolea   inte4
typedef int boolean_t;
#*,size_t,unsig inline char*
  s/include/mach/mach/vm_statistics.h" 3 4
" 2 3 3 4
# 77 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef us/os_deff unsigned i/mach/machine.h" 1 3 4
# 60 "/usr/include/mach/machine.h" 3 4
# 1 "/usrntrl(int c);
e/boolean.h" 1 3 4
# 127 "/usr/include/mach/boolean.h" 3 4
# 1 "/usr/include/mach/machine/booinfo {
        integer_t r/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/maclude/mach/ppc/boolean.h" 1 3 4
# 129 "/usr/include/macstruct machine_info machine_info_data_t;

type_t;
# 64 "/usr/include/mach/hone/boolean.h" 2 3 4
# 128 "/usr/include/mach/boolean.h" 2 3n.h" 2 3 4
# 61 "/usr/include/mach/machine.h" 2 3 4
# 7onds;
};
typedee/mach/machine.h" 
  using ::smachine_i
}
#de/limits.h" 1/include/mach/machine/boolean.h" t max_cpus;
        integer_t avail_cpus
}
#   vm_size_t memory_size;
};

typedef struct machine_info *machine_info_t;
typedef s::isdigit;r_t seconds;
      data_t;

typedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
# nds;
        integst_info.h" 2 3 4

# 1 "/usr/include/mach/time_value.h" 1 3 4
/usr/include/mach/time_value.h" 3 4
struct time024)];


typedef char kernel_version_t[(

typedef integer_t host_fdef struct time_value time_value_t;
# 106 "/usr/include/mach/alue.h" 3 4
typedef struct mapped_time_value {
   cpu_subtye/mach/machine.h" 3 4
struct machine_usr/is.h" 2 3 4
# 1er_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_usr/i   vm_size_t memory_size;
};

typedef struct machine_info *machine_info_t;
typedef include/gccic_info_t;



struct host_sche



typedef natural_t vm_size_t;




typedef unsigned int spac
        integer_t lavor_t;







struct host_basic_info {
        integer_t max_cpus;
        integer_t avail_cpus;
        uct kernel_resource_sizes {
        vm_siport;
        vm_size_t metype_t cpu_subtype;
};

typedef struct host_basic_info host_basic_info_data_t;
typedef struct host_basic_infsource_sizese/mach/machine.h" 3 4
struct machine_/gcc/d++/cstdlib" 3
#er_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_/gcc/d   vm_size_t memory_size;
};

typedef struct machine_info *machine_info_t;
typedef  template<> resource_sizes {
        vm_size_t task;
        vm_size_t thread;
        vm_size_t port;
 _t user_priority;
   st_info.h" 2 3 4

# 1 "/usr/include/mach/time_value.h" 1 3 4
# h/ppc/boolean.h" 1 3 4
# 129 "/usr/include/mac_priority_info host_priority_info_data_t;
;
# 152 "/usr/include/mach/hdef struct time_value time_value_t;
# 106 "/usr/include/mach/ti 4
# 61 "/usr/include/mach/machine.h" 2 3 4
# 7 struct host_e/mach/machine.h" 3 4
struct machine_de/g::free;
  usier_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_, con  vm_size_t memory_size;
};

typedef struct machine_info *machine_info_t;
typedef 3
# 35 "/uresource_sizes {
        vm_size_t task;
        vm_size_t thread;
        vm_size_t port;
 ta_t;
typedef strr/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/mach/ppc/boolean.h" 1 3 4
# 129 "/usr/include/macude/mach/memory_object_types.h" 3 4
# 1 mach/host_i
  using ::srae/boolean.h" 2 3 4
# 128 "/usr/include/mach/boolean.h" 2 3 4
# 61 "/usr/include/mach/machine.h" 2 3 4
# 7def port_t e/mach/machine.h" 3 4
struct machine_ (FIL ::wcstombs;
 er_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_ (FILypes.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 67 "/usr/inclusing ::feoresource_sizes {
        vm_size_t task;
        vm_size_t thread;
        vm_size_t port;
  natural_t mach_porlavor_t;







struct host_basic_info {
        integer_t max_cpus;
        integer_t avail_cpus;
        ort.h" 3 4
typedef natural_t mach_port_urnatural_t mach_port_seqno_type_t cpu_subtype;
};

typedef struct host_basic_info host_basic_info_data_t;
typedef struct host_basic_inf_t;

typedefe/mach/machine.h" 3 4
struct machine_c, f))cc/darwin/3.3/cer_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_c, f))ypes.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 67 "/usr/incletc;
  usingresource_sizes {
        vm_size_t task;
        vm_size_t thread;
        vm_size_t port;
 rt_msgcount_t mps_qliost_info.h" 3 4
struct host_load_info {
        integer_t avenrun[3];
        integer_t mach_factor[3];
};

tboolean_t mps_nsrequest;
        unsigned  mach_port_limits {
        t_load_info *host_load_info_t;







struct host_cpu_load_info {
        unsigned long cpu_ticks[4];
};
typeddef struct mae/mach/machine.h" 3 4
struct machine_);

intn() throw();


 er_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_);

intypes.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 67 "/usr/inclg ::ungetc;
 resource_sizes {
        vm_size_t task;
        vm_size_t thread;
        vm_size_t port;
 mach/memory_object_typer/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/mach/ppc/boolean.h" 1 3 4
# 129 "/usr/include/macef uint64_t vm_object_offset_t;


typedef m" 3 4
typedef mach_port_t upl_t *mach_port_array_t;
typedef port_name_t mach_port_name_t;
typedef mach_port_name_t *mach_port_name_arrayd long long mee/mach/machine.h" 3 4
struct machineg.h" nate_handler ser_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host# 86 "/usr/include/mach/ppc/vm_types.h" 3 4usr/include/macpc-darwin/bresource_sizes {
        vm_size_t task;
        vm_size_t thrch/mach_typ" 3 4
typedef inf struct time_value time_value_t;
# 106 "/usr/include/machach/vm_statistics.h" 2 3ect_types.h" 3 4
typedef int memory_object_copy_strategyory_object_types.h" 3 4
tdef struct time_value time_value_t;
# 106 "/usr/include/mach 4
# 61 "/usr/include/macect_types.h" 3 4
typedef 
} mach_port_qos_t;
# 68 "/usr/include/lean.h" 1 3caught_exception() thrpedef int memor "/usr/inclu;
# 106 "/usr/include/mach/time_v_version;
        integer_t max_cpus;
        integer_t avail_cpu4
# 1 "/usr/include/mach/machine.h" 1 3 4
# 60 "/usr/include/mach/machine.h" 3 4
# 1 "/usrrbose_terminate_handlertatistics_t;
tyoff_t;
typedef int32_t pid_t;
typedef quad_t rlim_t;throw_b 1 3 4
# 127 "/usr/include/mach/boolean.h" 3 4
# 1 "/usr/include/mach/machine/boolean.h" 1 3
};

typedef struct old_
        boolean_t temporary;
        boolean_t invalidate;
};

str/include/gcc/darwin/3.3/c++/ppc-d.h" 1 3 4
# 129 "/usr/include/mac
};

typedef struct old_memory_object_behave_info *old_memory_object_behave_info_t;
typedef stpedef int boolean_t;
# 28 "/usr/includoc : public exception
 ld_memory_object_attr_info_t;
typedef struct old_memory_object_attr_info old_memory_obje 4
# 61 "/usr/include/mach/machine.h" 2 3 4
# 7ct_copy_strategy_t copy_m_size_t cluster_size;
        boolean_t may_cache;
};

struct memory_object_attr_info {
   e_t;
# 64 "/usr/inrn const nothrow_t nothld_memory_object_attr_info_t;
typedef struct old_memory_object_attr_on;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size_t memory_size;
};

typedef struct machine_info *machine_info_t;
typedef # 82 "/usr/include/gcc/demory_object_copy_strategy_t copy_strategy;
        boolean_t temporaryry_object_attr_info {
 pedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
# 64 "/usr/inect_perf_info *memory_objte;
        boolean_t advisory_pageout;
};


typedef struct memory_o_info old_memory_object_attr_info_data_t;







struct memory_object_perf_innfo *memory_object_perf_info_t;
typedef struct memory_object_perf_info memory_object_pr_t seconds;
        integer_t microsecthrow (std::bad_alloc);
nfo memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memory_object_types.h" 3 4
st boolean_t temporary;
};

struct memory_object_behave_inf        integer_t second                 pageout:1,
                        absent:1,
           integer_t microseconds;
   nst std::nothrow_t&)nfo memory_object_attr_info_data_t;
# 264 "/usr/include/mach/meonds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_info.h" 2 3 4




typedef integer_t *host_info_t;


typedef integer_t host_info_data_t[(lete(void*, const stdemory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t 512)];


typedef char kernel_boot_info_t[(4096)];







typedef intege
# 28 "/usr/include/ma
        boolean_t temporary;
        boolean_t invalidate;
};
ject_types.h" 3 4
struct upl_page_info {
        vm_offset_t phys_addr;
     /include/mach/machine/exception.h" 2 3 4
# 57 "/usr/include/mach/exception_type;
        cpu_type_t cpu_type;
      new(std::size_t, voir/include/mach/thread_status.h" 3 4
# 1 "/usr/include/mach/machine/thread_status.h" _page_info upl_page_info_t;
typedef upl_page_info_t *upl_p *host_basic_info_t;mach/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/thread_status.h" 3 4
ort;
        vm
inline void operatoon_types.h" 1 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exception.h" 1 3 4
# 27 "d_info host_sched_info_data_t;
typedef struct host_sched_info *host_sched_info_t;



str;

}
# 70 "/usr/incluach/machine/exception.h" 2 3 4
# 57 "/usr/include/mach/exception_types.h" 2 3 4
# 147 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/thr7;
        unsigned int r8;
sr/include/mach/thread_status.h" 3 4
# 1 "/usr/include/mach/machine/thread_status.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3gned int r17;
        unsigned int r18;
        unsigned int r19;
        unsignuct kernel_resource_sizes *kernel_renclude/gcc/darwin/3.3       unsigned int srr0;
        unsigned int srr1;
        unsigned int r0;
        unsigned int r1;
        unsigned int r2;
        unsig       integer_t servnsigned int r4;
        unsigned int r5;
        unsigned int r6;
        unsigned int _t user_prdarwin/3.3/c++/ppc-danfo memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memo depress_priority;
        integer_t idle_priority;
        integer_t minimum_priority;
        integer_t maximum_priority;
};

typedef struct hoste/gcc/darwin/3.3/c++/cnt
                        pageout:1,
                        absent:1,
                    typedef struct host_priority_info *host_priority_info_t;
# 152 "/usr/inc/ppc/thread_status.h" 3
        boolean_t temporary;
        boolean_t invalidate;
};

sinfo old_memory_object_attr_info_data_t;







struct memory_object_perf_ind_status.h" 3 4
typedef struct ppc_thread_state ppc_saved_state_t;
# 148 "/usr/incd_info host_load_info_data_t;
typedefcimal_point;
        clong dsisr;
        unsigned long exception;
        unsigned long pad0;

        unsi boolean_t temporary;
};

struct memory_object_behave_infef struct host_cpu_loaread_status.h" 2 3 4
# 71 "/usr/include/mach/thread_status.h" 2 3 4
# 1 "/usr/inclh_port_t;
type      char *mon_declong dsisr;
        unsigned long exception;
        unsignedoad_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 67 "/usr/incltive_sign;
        cmachine/thread_status.h" 2 3 4
# 71 "/usr/include/mach/thread_status.h" 2 3 4
# 1 "/usr/in"/usr/include/mach/port.h" 1 3 4
# 91 "/usr/include/mach/port.h" 3 4
t exception_data_type_
        boolean_t temporary;
        boolean_t invalidate;
}info old_memory_object_attr_info_data_t;







struct memory_object_perf_in_data_type_t;
typedef int exception_behavior_t;
typedef integer_t *exception_d 4
typedef port_t mach_port_t;
type     char p_sep_by_sn_behavior_t *exception_behavior_array_t;
typedef thread_state_flavor_t *exception boolean_t temporary;
};

struct memory_object_behave_inf_t;
# 165 "/usr/incllude/mach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/processor_info.h" 1 3 4
# atural_t mach_pposn;
};
# 76 "/usr/on_types.h" 1 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exception.h" 1 3 4
# 27 "ort_type_t;
typedef mach_port_type_t *mach_port_type_array_t;
# 206 "/usr/include/mach/pnst char *);
}
# 50 "ach/machine/exception.h" 2 3 4
# 57 "/usr/include/mach/exception_types.h" 2 3 4
# 147 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/thunsigned int word;
        stsr/include/mach/thread_status.h" 3 4
# 1 "/usr/include/mach/machine/thread_status.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3 int reserved3 : 1;
                unsigned int reserved4 : 1;
                pedef unsigned int mach_port_srightsing ::localeconv;
}
#       unsigned int srr0;
        unsigned int srr1;
        unsigned int r0;
        unsigned int r1;
        unsigned int r2;
        unsig mach_port_mscount_t nsigned int r4;
        unsigned int r5;
        unsigned int r6;
        unsigned int rt_msgcouncale;





  templatened long save_vr[32][4];
        unsigned long save_vscr[4];
        unsigned int save_pad5[4];
        unsigned int save_v_t mps_sorights;
        boolean_t mps_srights;
        boolean_t mps_pdrequest;
        
                     3 4
typedef struct ppc_thread_state ppc_saved_state_t;
# 148 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_exception_state {
        unsit {
                unsigned in long dsisr;
        unsigned long exception;
        unsigned long pad0;

        unsry;
        boolean_t invalidate;
};

sct_attr_info_data_t;







struct memory_object_perf_in
        }bits;
}pmcn_t;





struct processor_pm_regs {
      union {
        mmc2 "/usr/include/mach/port.h" 3 4
typetatic_cast<char*>(mallr_pm_regs processor_pm_regs_data_t;
typedef struct processor_pm_regs *processor_pm_regs_t;
# 119 "/usr/include/mach/ppc/proc boolean_t temporary;
};

struct memory_object_behave_infural_t len;
} mach_porsr/include/mach/thread_status.h" 2 3 4





typedef natural_t *thread_state_t;


typedefmach/memoryt;






      if (__pnfo memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memory "/usr/include/mach/vm_types.h" 1 3 4
# 35 "/usr/include/mach/vm_types.h" 3 4
typedef vm_offset_t pointer_t;
typedef vm_offset_t vm_address_t;
typedtf(__out, __fmt, __v);
ject_perf_info_t;
typedef struct memory_object_perf_info memory_object_peffset_t;


typedef mach_port_t vm_map_t;
# 49 "/usr/include/mach/vm_types.h" 3 4
typedef machef integer_t *processor_d_memory_object_attr_info_t;
typedef struct old_memory_object_attr_info old_memory_objt;
typedef struct old_memory_object_attr_ct_attr_info_data_t;







struct memory_object_perf_in_t *processor_set_info_t;


typedef integer_t processor_set_info_data_t[(1024)];



emory_object_offset_t;
typedef unsigne++/iosfwd" 2 3
# 1 "/us cpu_subtype;
        boolean_t running;
        int slot_num;
        boolean_t is_master;
};

typedef struct processor_basic_i boolean_t temporary;
};

struct memory_object_behave_inf_t;


typedef memory_obct_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t invalidject_type/ctype.h" 1 3 4
# 68n_behavior_t *exception_behavior_array_t;
typedef thread_state_flavor_t *exceptiontypedef mach_port_t memory_object_default_t;
# 106 "/usr/include/mach/memory_object_types.h" 3 .h" 3 4
typedef strucemory_object_copobject_copy_strategy_t;
# 142 "/usr/include/mach/memory_object_type thread_count;
       n_types.h" 1 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/includery;
        boolean_t invalidate;
};memory_object_types.h" 3 4
typedef int  thread_count;
        integer_t load_average;
        in struct processor_set_load_info prooad_info processor_cpu_load_info_data_t;
typedef struct processonfo *processor_set_load_info_t;
# 73 "/usr/include/machmach/memory_object_types.h" 3 4
struct osr/include/mach/policy4
# 66 "/usr/include/mach/task_info.hst char *);
vo char encostics_data_t;
# 99 "/usr/include/mach/vm_statistics.h" 3 struct pmap_statistics {
        integer_t residre_base ;
        integer_t wired_count;
};

type
        int (essor_set_load_ *, size_t, charageouts;
        integer_t faults;
   
int ttysloics__t, char **);
pe_t;
# 64 "/us_t invalid_rune
        integer_t base_priority;
        integer_t cur_prioritress_priorityoolean_t depressed;
        int
}
#r[(1 <<8 )];y;
};

typedef struct policy_timeshare_base *policy_timeshare_ba_timesharoolean_t depressed;
        inusr/ipe_ext;
    
        integer_t base_priority;
        integer_t cur_priorite policy_toolean_t depressed;
        in/gcc/d   void *vari
        integer_t base_priority;
        integer_t cur_priority_timeshareoolean_t depressed;
        int seteusr/inclu
        integer_t base_priority;
        integer_t cur_prioriteger_t baoolean_t depressed;
        in (FILude/ctype.h"
        integer_t base_priority;
        integer_t cur_priorit policy_rroolean_t depressed;
        inc, f))t);
int isalp
        integer_t base_priority;
        integer_t cur_prioritlean_t deproolean_t depressed;
        in);

intt islower (int
        integer_t base_priority;
        integer_t cur_prioritlicy_rr_limioolean_t depressed;
     ime.h" 3 4pper (int);
in
        integer_t base_priorint);


int digject_types.h" 3 4
strurr_base_data_t;oolean_t depress, digittoinch/mach_typ
int isascii (i;
typedef struct policy_rr_limi24)];
# 182 "/usr/include/mdeogram (intimit_data_t;
typedef struase_t;
typedef struct policy_info_data_t;
# 176 "/usr/i_timeshare_limit_t;
typedef struct polifo_base {
        integint);
int ty;
};
struct policy_fifo_re_info_t;

typedef strucinfo_data_t;
# 176 "/usr/e policy_timeshare_base_data_t;
typedefriority;
        integer__runetypeimit_data_t;
typedef strulicy_timeshare_limit_data_info_data_t;
# 176 "/usr/y_timeshare_info policy_timeshare_info_dint setlogin (const char *) 3 4
statimit_data_t;
typedef struolicy.h" 3 4
struct policy_info_data_t;
# 176 "/usr/eger_t base_priority;
        integer_ifo_base {
        inte| _c >= (imit_data_t;
typedef strumit {
        integer_t minfo_data_t;
# 176 "/usr/ policy_rr_info {
        integer_t maxriority;
        integer_ _f;
}

simit_data_t;
typedef stru_priority;
        integerinfo_data_t;
# 176 "/usr/lean_t depressed;
        integer_t deprount;
        integer_t wic, f));
}
imit_data_t;
typedef strupolicy_rr_base *policy_rr_binfo_data_t;
# 176 "/usr/licy_rr_limit *policy_rr_limit_t;
typedefnclude/mach/boolean.h" 2 3  _c >= (1 <imit_data_t;
typedef stru_info_t;

typedef struct polinfo_data_t;
uct vm_statistics      !!(_Defaustics_data_t;
# 99 "/usr/include/mach/vm_statistics.h" 3 4
nclude/gcc/darwin/statistics {
        integer_t residicy_infos polic;
        integer_t wired_count;
};

typedef  int tm_isdsd int, unsigned h/machine/vm_types.h" 2 3 4
# 64 "/usr/include/m vm_si3 "/usr/include/mach/host_info.h" 2 3 4
# 1 "/usr/include/mach/machine.h" 1 3 4
# 60 "/usr/include/mach/machine.h" 3 4
# 1 "/usrtic inline int
__toypedef natural_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int space_t;
#    policy_t policy;
};

) { }


    virtual ~bad_alloc() throw();        integer_t avenrun[3];
        integer_t mach_factor[3];
};

tylicy_t policy;
};

typedef struct task_basic_info *task_basic_info_t;






struct tasount;
        integer_t inactive_count;
        integer_t wger_t wire_count;
        integer_t zero_fill_couinteger_t syscalls_mach; integer_t reactivations;
        integinfo {
     /darwin/3.3/c++/cct_events_info {aults;
        integer_t pagein_version;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size_t memory_size;
};

typedef struct machine_info *machine_info_t;
typedef nt iscntrl(int c);
eypedef natural_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int spac






struct task_thread_timesk_events_info {  time_value_t user_time;

        time_flavor_t *exception_flavor_array_t;
typedef mach_port_t *exceptioimes_info_t;
# 74 "/usr/include/mach/mach_types.h" 2/usr/include/mach/task_policy.h" 3 4
#ount;
        iachine/thread_state.h" 3 4
# 1 "/usr/include/mach/ppc/thread_state. 3 4
# 56 "/usr/include/mach/task_policy.h" 3 4
typedef nuct task_events_info *task_events_info_t;
nds;
   sxdigit(int c);
/usr/include/mach/task_policy.h" 3 4
enum taskonds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_info.h" 2 3 4




typedef integer_t *host_info_t;


typedef integer_t host_info_data_t[( using ::isdigit;usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_policy.h" 1 3 4
# 37 "/usr/incION,
        TASK_CONTRO 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "nclude/mach/task_policy.h" 2 3 4
# 56 "/usr/include/mach/task_policy.h" 3cy_data_t;
typedef struct task_category_poach_types.h" 2 3 4
# 1 "/usr/inc"/usr/include/mach/task_policy.h" 3 4
enum task_rror;
  using ::strlen;

  using sk_events_info task_events_info_data_t;ned int r3;
     ger_t reactivations;
        intege        gcc/darwin/3.3/cL_APPLICATION,
        TASK_GRAPHICS_SERVER
};

typedef enum task_role task_role_t;

struct task_categord_info host_sched_info_data_t;
typedef struct host_sched_info *host_sched_info_t;



str"/usr/include/gccypedef natural_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int spac];






struct thread_balude/mach/task_special_ports.h" 1 3 4
# 66 "/usr/include/mach/task_special_ports.h" 3 4
typedef int task_special_port_t;er_t suspend_count;
        integer_t sleepic_info_data_t;
typedef struct tinfo.h" 1 3 4
# 76 "/usr/include/mach/thread_info.h" 3 4
typedef natural_t thread_flavor_t;
typedef integer_t *thread_in       integer_t lude/mach/policy.h" 3 4
struct pol_t user_priits = char_trait/usr/include/mach/task_policy.h" 3 4
enum task_r depress_priority;
        integer_t idle_priority;
        integer_t minimum_priority;
        integer_t maximum_priority;
};

typedef struct host_g;

  template<> ypedef natural_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int spacf struct thread_standard_po 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "/unclude/mach/task_policy.h" 2 3 4
# 56 "/usr/include/mach/task_policy.h" share;
};

typedef struct thread_extended_poad_extended_policy *thread_extende"/usr/include/mach/task_policy.h" 3 4
enum task_roo.h" 3 4
typedef natural_t thread_flavor_t;
typedef integer_t *thread_inef struct host_cpulude/mach/policy.h" 3 4
struct pol_t;
typegcc/darwin/3.3//usr/include/mach/task_policy.h" 3 4
enum taoad_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 67 "/usr/incl.h" 1 3
# 35 "/uypedef natural_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int spacy_t;
# 181 "/usr/includ 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38nclude/mach/task_policy.h" 2 3 4
# 56 "/usr/include/mach/task_policy.h" edence_policy *thread_precedence_policy_t;ch_port_t;
type.3/c++/cstdio" 1ts.h" 1 3 4
# 79 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/uD = -1,
        TASK_UNSPECIFIED = 0,
        TASK_F_t;
# 165 "/usr/lude/mach/policy.h" 3 4
struct pol natural_cstdio" 3
namespL_APPLICATION,
        TASK_GRAPHICS_SERVER
};

typedef enum task_role task_role_t;

struct task_categorort_type_t;
typedef mach_port_type_t *mach_port_type_array_t;
# 206 "/usr/include/mach/pse;
  using ::feoypedef natural_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int spac        clock_res_t tv_nslude/mach/task_special_ports.h" 1 3 4
# 66 "/usr/include/mach/task_special_ports.h" 3 4
typedef int task_special_port_t;signed int vm_machine_attribute_t;
# 79 "/uhine_attribute_val_t;
# 83 "/usrtype_t;
typedef int clock_id_t;
typedef int clraint_policy thread_time_constraint_policy_data_t;

typedef struct thread_ mach_port_mscounlude/mach/policy.h" 3 4
struct polit_msgcounn;
  using ::fscalicy thread_standard_policy_data_t;
typedef struct thread_standard_policy *thread_standard_policy_t;
# 114_t mps_sorights;
        boolean_t mps_srights;
        boolean_t mps_pdrequest;
        ng ::getc;
  usingypedef natural_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int spacinclude/mach/vm_prot.h" 1 3d_policy_t;
# 153 "/usr/include/mach/thread_policy.h" 3 4
struct thread_time_constraint_policy {
        uint32_t period;
gned vm_sync_t;
# 88 "/usr/include/mach/mach3 4
# 47 "/usr/include/mach/vm_reg 4
# 1 "/usr/include/mach/vm_behavior.h" 1 3 4
#raint_policy thread_time_constraint_policy_data_t;

typedef struct thread_ural_t len;
} machlude/mach/policy.h" 3 4
struct polmach/memorytbuf;
  using ::se/usr/include/mach/task_policy.h" 3 4
enum task_rol "/usr/include/mach/vm_types.h" 1 3 4
# 35 "/usr/include/mach/vm_types.h" 3 4
typedef vm_offset_t pointer_t;
typedef vm_offset_t vm_address_t;
typed  using ::ungetc;
 ypedef natural_t vm_offset_t;






typedef natural_t vm_size_t;




typedef unsigned int spacboolean_t shared;
        boo 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "/usrnclude/mach/task_policy.h" 2 3 4
# 56 "/usr/include/mach/task_policy.h" struct vm_region_basic_info_64 vm_region_basi      vm_prot_t protection;
         vm_region_info_data_t[(1024)];



struct vm_regioraint_policy thread_time_constraint_policy_data_t;

typedef struct thread__t;


typedef memorlude/mach/policy.h" 3 4
struct poject_type "/usr/include/g unsigned int);
int unwhiteout (ctypedef mach_port_t memory_object_default_t;
# 106 "/usr/include/mach/memory_object_types.h" 3 /c++/ppc-darwin/bid*,void*,object_copy_strategy_t;
# 142 "/usr/include/mach/memory_object_typegned int pages_shadarwin/bits/gthr.h" 3
# 1 "/usrclude/mach/vm_behavior.h" 1 3 4
memory_object_types.h" 3 4
typedef int gned int pages_shared_now_private;
        unsi    unsigned int pages_dirtied;type_t;
typsigned int ref_count;
        unsigned short shadow_demach/memory_object_types.h" 3 4
struct ogion_extended_infoed char share_mode;
};

typedefct policy_timeshampl.h" 1 3 4
_events_info {

# 67 "/usr/include/mach/task_info.h" 2 3 4




typedef natural_t task_flavor_t;
typedef integer_t *ta
struct policy_timeshare_info {
       integer_t ma int tm_isdst;
  _events_info {
 imeshare_info_data_t;
# 142 "/usr/include/mach/po_info *vm_region_ta_t;
# 116depressed;
        integer_t depn char *tzname[];
_top_info_t;
typedef struct vm_region_top_info vm_region_top_info_dataase_t;
typedef strnclude/mach/vm_region.h" 3 4 *policde/pthread.h" 2o {
        vm_prot_t protection;
        vm_prot_t max_protection;
   re_info_t;

tynclude/mach/vm_region.h" 3 hare_basocaltime (const_top_info_t;
typedef struct vm_region_top_info vm_region_top_info_datalicy_timeshare_nclude/mach/vm_region.h" 3 uct policy *, const struc_top_info_t;
typedef struct vm_region_top_info vm_region_top_info_dataolicy.h" 3 4
strnclude/mach/vm_region.h" 3 t seteuct tm *, char _top_info_t;
typedef struct vm_region_top_info vm_region_top_info_datamit {
        nclude/mach/vm_region.h" 3 ;
structtruct tm *);
st_top_info_t;
typedef struct vm_region_top_info vm_region_top_info_data_priority;
    nclude/mach/vm_region.h" 3       booonst char *, str_top_info_t;
typedef struct vm_region_top_info vm_region_top_info_datapolicy_rr_base *nclude/mach/vm_region.h" 3  struct pot tm * const);
ti_top_info_t;
typedef struct vm_region_top_info vm_region_top_info_data_info_t;

typedefnclude/mach/vm_region.info *policy_f_info *vm_region_top_info_t;
typedef struct vm_nclude/mach/boolean.h" 2 3 /usr/include/x_t { longlicy_fifo_limi_data_t;
# 173 "/usr/include/mach/vinfode/time.h_info *policy_fregion_submap_info {
        vm_prot_t protectionclude/mach/boolean.h" 2 3 _t clock (void
        unsigned char extern      vm_inherit_t inheritance;r share_mode;
        boolean_t ist;

        unsigned int user_tag;
           vm_offset_t object_idnst time_tigned short user_wired_count;
 unsigned int pages_shared_r share_mode;
        boolean_t id int pages_swapped_out;
        unsignenclude/mach/boolean.h" 2 3 e (char *, 
        unsigned char externnt ref_count;
        unsignr share_mode;
        boolean_t i  unsigned char external_pager;
        unclude/mach/boolean.h" 2 3 

char *asct
        unsigned char externn_t is_submap;
        vm_behr share_mode;
        boolean_t im_offset_t object_id;
        unsigned nclude/mach/boolean.h" 2 3 gmtime_r (
        unsigned char externuct vm_region_submap_info *r share_mode;
        boolean_t iedef struct vm_region_submap_info vm_regnclude/mach/boolean.h" 2 3 r *strptime
        unsigned char extern_region_submap_info_64 {
   r share_mode;
        boolean_t i      vm_prot_t max_protection;
        vnclude/mach/boolean.h" 2 3 oid);
time_t
        unsigned char externect_offset_t offset;
        r share_mode;
        boolean_t i unsigned int pages_resident;
        unsi;
};

typedef struct policy_bases polf struct kmod_reference {
          unsigned int pages_swappedr share_mode;
  int alarm (uespec *);ude/gisad.h" 2 3 4
# 1 "/usr/incl int8_t int_fast8_t;
typedef inttruct kt pid 3 4
# 1etregid (gid_t, ggnal. 3 4
# 72 "/usr(
# 1 "/usr/it task_flavor_t;
typedef integer_t;
        it pidsr/include"C" {
Fod_info *ki, 3 4
# 73 "/usint id;
    tern int optind, op   char name[64];
        char versionferenc       i,unistd.h" 3 4ch/mach_typ"C" {
 void
      ce_t *referenchar *, int);
unsignject_types.h" 3 4
stru    kmod_start_func
        unsigned;
};

typedef_func_t(struct UTFme (const cha (codef struct kmod_info {
        struct de/mmod_in(const ch int info_version;
  );
int clint id;
        char name[64];
        char version4];
} kmod       int reference_count; (longp (int);
int dup2ce_t *reference_list;
        vm_address_t address;
        vm_size_tr name[64
        vm_size_t hdr_size;
        kmod_starr name[64];
        chchar *, const charc_t *stop;
} kmod_info_t;



typedemd_t;

typedef strkmod_info_array_t;
# o_versi(const char(nt execve (co);
int setgroups (int, const gidk_t;
typedeft pidve (consred_count;
};

typ1,
   t *, char * co(nst char *, char * constclude/mach/vm_behavior.h" 1 3 4
# );
pid_t for      integer_t zero_fill_count;
      ort_tast16_en pages_t fork (voiruct vm_region_toconf (int, int);
cessor_se
gid_t getegid (void);
uiageouts;
        integer_t faults;
   ort_t processtypedef ma,d);
uid_t ge;
# 176 "/usr/mach_port_t processor_set_control_t;
typedef mach_n;
        integer_t minor_versionpolicy_rr_limit_data_t;
typedef struct pol lock_set_t;
typedef mach_porimit_data_t;
typedevoid);
pid_t pid (void);
pidt host_t;
curity_t;
typedef mach_port_t promach_port_t bpedef mah" 2 3 4
# 1 "/usr
typedef meption_hbootstrap_t;
typedef mach_port_t mem_entry_nr_t;
typetypedef mach_port_t exprocesswidff_t, int);
bootstrap_t;
typedef mach_port_t mem_entry_;
typedef typedef mach_port_t ex ;
extern vint pipe (intbootstrap_t;
typedef mach_port_t mem_entry__types.h" 3typedef mach_port_t exCURSION_I(const charbootstrap_t;
typedef mach_port_t mem_entry_t_t *proctypedef mach_port_t ex_LOCKING=3
pid_t setsibootstrap_t;
typedef mach_port_t mem_entry_sor_t *protypedef mach_port_t ex } TnodeModigned int);
lbootstrap_t;
typedef mach_port_t mem_entry__t;
# 156 "typedef mach_port_t exget_per_threp (int, pid_t)bootstrap_t;
typedef mach_port_t mem_entry_port_array_ttypedef mach_port(const char *);
ze_t write (int, const (rn char *optarg;
extern int optind, opmeshare_base *policy_timeshare_base_t;
 ipc_space_portypedef machm_size_t hdr_size;optopt, reset;
int getopt (i(onst char *);



struct timeval;

icy_timeshare_info *policy_timeshare_cessor_set_t processor_set_port_t;
typedef prse (int" 3 4
structssor_set_nconst char *);
int chroot (const cstruct policy_timeshare_limit policycessor_set_t processor_set_port_t;
typedef pr
char *ct (const char *, cons(her (const char *, char *, long, intta_t;
# 142 "/usr/include/mach/policycessor_set_t processor_set_port_t;
typedef prdes_sey (const char *key)nt16_port_array_t;
typedef semaphore_t semaphore_port_t;
typedef loypedef ledger_arrrocessor_set_port_t;
typedef prt (conshar *, char * const (t fchdir (int);
int fchown (int, inpriority;
        integer_t base_pri_serv_t clock_serv_port_t;
typedef clock_ctrl;
char *agstostr (u_long);
in(uncate (int, off_t);
int getdtablesiss_priority;
};

typedef struct polic_serv_t clock_serv_port_t;
typedef clock_ctrld);
int grouplist (const char *(long gethostid (void);
int gethostnamstruct policy_rr_info *policy_rr_info__serv_t clock_serv_port_t;
typedef clocksize;
        kmospace_t ipc_space_port_t;
typedef host_t   time_value_t user_time;

        timed);
char *getpa  time_value_t user_time;

        timeghold (inc_t *stop;
} kmod_info_t;



def processor_set_t processor_se*getpanst char *)_size;
        kmot_t processor_set_name_port_t;
type_data_t[(1024)];



struct vm_regionvoid);
char _data_t[(1024)];



struct vm_regiontv_sec;
        int32_t tv_usec;
};
# 9rray_t;
typedef processor_se
struct timezone {
        int tz_mray_t;
typedef thrsor_t processor_p_data_t[(1024)];



struct vm_regionst char *, ctimerval {
        struct timeval it_interval;
        struct timeval it_vray_t;
typedef thread_act_t t
struct timezone {
        int tz_md_act_array_t thread_act_port_array_td;
        vm_object_offset_t offset; dev_t);
int d;
        vm_object_offset_t offset;tv_sec;
        int32_t tv_usec;
};
# d_act_array_t threafutimes (int, const struct timeval *);
int getypedef ledger_array_t ledger_portandard_policy_data_t;
typedef strucid *);
int uct timeval *);
}
# 169 "/usr/include/pec;
        int32_t tv_usec;
};
# ock_serv_t clock_serv_port_t
struct timezone {
        int tz_mtrl_port_t;
typedef exception_handl_data_t[(1024)];



struct vm_region3 4
# 62 "/utimerval {
        struct timeval it_interval;
        struct timeval it_vtrl_port_t;
typedeate (const pthread_attr_t *attr, int *detachsth_types.h" 3 4
typedef integer_t ledgd;
        vm_object_offset_t offset;.h" 3 4
# 1 ");
int setitimer (int, const struct itimerval *, struct itimerval *);
int s;
typedef char *user_subsystem
struct timezone {
        int tz_mstd_types.h" 1 3 4
# 207 "/usr/include/;

typedef struct vm_region_basic_infoe/ppc/signal.h;

typedef struct vm_region_basic_infooy (pthread_attr_t *attr);
int pthreadd.h" 2 3 4
# 74 "/usr/include/p
struct timezone {
ime.h" 3 4/ppc/signal.h" 3 4
tyad.h" 3 4
# 1 "/usr/include/sys/time.h" 1 3 4
# 68 "/L
} regs_saved_t;
# 66 "/uf enum {
   ject_types.h" 3 4
strut *attr, int inheritsctypedef mact8_t;
 macclude/ppc/ch/mach_typD_NONE,
        RE   int tz_dsttime;
};
# 141 "/usr/include/sys/tL
} regs_saved_t;
# 66 "/usr/includam);

int pthread_attr_setr_setstackaddr ad_attr_t *attr, int policy);

int pthread_at __sigaction_u;kadj;
        int stathz;
        int profhz;
}gdelset (sigset_t *, int);
int sigeam);

int pthread_attr_sed *stackaddr, siad_attr_t *attr, int policy);

int pthread_atp;
        void t itimerval *);
int gettimeofday (struct timeval ignal.h" 2 3 4
# 73 "/usr/include/syam);

int pthread_attr_sed pthread_testcanad_attr_t *attr, int policy);

int pthread_at_mask;
       char *, const struct timeval *);
}
# 169 "/used int sigset_t;

union sigval {

am);

int pthread_attr_secondattr_t *attad_attr_t *attr, int policy);

int pthread_atl_int;
        d_attr_getinheritsched (const pthread_attr_t *act __siginfo {
        int si_signoam);

int pthread_attr_sed_t *cond, pthread_attr_t *attr, int policy);

int pthread_atltstack stack_t; int *policy);

int pthread_attr_getstackaddr (consigned int si_uid;
        int si_sam);

int pthread_attr_set pthread_condattad_attr_t *attr, int policy);

int pthread_at  int sv_mask;
  , void **stackaddr, size_t *stacksize);

int pthrea_band;
        int pad[7];
} siginfo_am);

int pthread_attr_sead, const pthread_ad_attr_t *attr, int policy);

in
# 176 "/usr/includent inheritsched);

int pthread_ad *arg);



int pthread_ttr_setschedparam (pthread_attr_ted_param *param);

int pthread_attr*value_ptr);
int pthread_attr_t *attr, int policy);

int pthreadint, struct __sigi_name_port_t;
typedet);
int pthread_sigmask (int, const sigset_t *, sige (pthread_attr_t *attr, size_t scy, struct sched_pagetschedparam (pthread_t thread, int *policy,d *stackaddr, size_t stacksize);
t pthread_join (pthread_t thread, void **value_ptr);

tcancelstate (int state, int *olthread_mutex_t *mutgetschedparam (pthread_t thread, int *policy,d pthread_testcancel (void);
int ptt pthread_join (pthread_t thread, void **value_ptr);
ead_cond_destroy (pthread_cond_t *cead_mutex_setprioceigetschedparam (pthread_t thread, int *policy,condattr_t *attr);

int pthreadt pthread_join (pthread_t thread, void **value_ptr);d_wait (pthread_cond_t *cond, ptutex);
int pthreadgetschedparam (pthread_t thread, int *policy,d_t *cond, pthread_mutex_t *mutext pthread_join (pthread_t thread, void **value_ptr);

ttr_init (pthread_condattr_t *at_getprotocol (constgetschedparam (pthread_t thread, int *policy,t pthread_condattr_getpshared (consx_t *mutex, int prioceiling, int *old_prioceiling);


i_condattr_setpshared (pthread_con pthread_mutexattr_tgetschedparam (pthread_t thread, int *policy,ad, const pthread_attr_t *attr, void x_t *mutex, int prioceiling, int *old_prioceiling);


detach (pthread_t thread);
int pthreread_mutexattr_setpro1, pthread_t t2);

void pthread_exit (tachss_sp;
        int ref_count;
       signal.h" 3 4
extern "C" {
void (t pthread_mutexattr_getal (int, );
int setgroups (int, const  *attr, int pshata_t;
# 116 "/usrs,al (int, void (ledger_port)) (int);
}
# 63 ine/vm_types.h" 1 3 4
# 27 "/usr/include/manst struct sched_p int pagespthread_mutexattr_t*const sys_sessor_set_lo
pthread_t pthread_self (void)
int pthread_nteger_t cow_faults;
 ));

int pthxi/stdint.h" 3 (pthread_key_t key);
int pthread_setspvalunteger_t cow_fault);
int seteue_t;
}(uct sigactio);
int setgroups (int, const gidead_attt pidtion d (pthread_attr_t *ion *);
int ce_t *reference thread);
int pthread_setcancelstate (int state, int *oldsttconcurrency 
        type (int type, int *oldtype);
void*);
int sigfil (void);
int pthread_setconcurrency (it);
int pthread_rwlock_destroy (pthread_rck_t * rwl * rwlock);
int pthread_rwlock_ing (sigset_);
int sigprocmask (int, f mach_port_t/mach/mach_types.h" 2 3 4
# 45 "/usr/include/pthreawlock_t *rwlock);
int processor_set_port_t;
typedef p
        kmowlock_t *rwlock);
int pthread_rwlock_t, int);
int sighold (inc_t *stop;
} kmod_info_t;



lock_trywrlock (pthread_rwlock_t *);
int ritsched (pthread_ sigrelse (intint sigpause (intint id;
    xt *);
int sigsetmask m_address_t address;
        vm_size_t (pthread_rwlost pthrrwlock);
int pthread_rwlock_unlockattr_getpshared (const pthreunsigned int, const cc_t *stop;
} kmod_info_t;



typedefkattr_setpshared (pt const char_t microsec

}
#1 "/usr/include/ue);

void *pthread_getspecific (pthread_kpthread_get_stacknteger_t cow_faults;
_t int_fastread_get_stacks_t, off_tuint_fast32_t;
typedef uint6kaddr_np (pthread_typedef uint1usr/include/ma*, int, const "/usr/include/mach/mach_types.h" 1 3 4
# pthreoid sethostid "/usr/include/m

char *re_comp  int quconst char *);
int readlthread_t thread_port_t;
typedef tsuspended_np (ptt pid,const cha64_t int_least64_t;
t(void  *, char *, int);
int essor_sethread_t thread)cy_rr_info *policy_rr_# 38 "/usr/include/t pid,policy);

int ptmap_info_t (int *);
int ruser/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 2 3

e/mach/vm_statead_key_t __gef str 2 3
# 1 "/usr/e_t;
}Ont bc" 1 3
# 47 "/ont bcd_rwlotime.h" 3 4*extraInfo
# 1 -darwin/bit/darwin/3.3/c++/ppc-darwInitArgtenv (co 1 3 4nt memid *, int, snin/bit 4
typec-darwin/bitslt.h" 3n/3.3/c+trlen (cognore)) (cognst/sd_active_p"/usr/in/darwin/3.3/c++/ppc-darwAttachr/include/gcc/darwin/3.3/c++/p 47 "/usr/includdef int64_oupd_active_p if (__gth, conrwin/3.3/c++/ppcDK1_1"/usr/include/gcc/darwin/3.3/c++/pvoid **prr **tien/3.3/c++/ppvoid Sourcd_once (c-darsr/inStackS(char *, ude/gcavaeate (key, dtor);
}
minHeapnline int
__gthraxd_key_dtor (__gthreverifyMod/include/gcc/st vopathid *, int, sizevfnst cf)(FILE *fp
        unsigformatn/3.3/c++/ppc-darwin/bits/gtheextent16_t st char *);
int geabort) int oid *, int, se *, s_t);
GC, dtor);
}
elete Verbose;
}

static idis*, sAsync;
}

static ivoid *
inline int
__gtdebuggatic inlid_getsd_gePin/3.} int
__gthread_/darwin/3.3/c++/ppcnt
__ if (__gthread_acsigset___paddatic  inline   return -1;
}
/include/gcc/pace std
{
  usistring" 2 3

# 1 "/usr/include/string.h" 1 3 4
# 72 "/usr/include/s" {
void *memchr (const4id *, int, size_t

# 1 "nt sigatr_t *, ition *, st_siglist if (_C(conntThreadutex);
  els pthread*pt re_exech" 1 3
# 43 "/usr/inclDe
static inline int
__gthread_ill (pid_t, int);
iEnvt
__gthread_mutex_trylock (cc/darwin/3.e
    return 0;
}

static inline inAsDaememcmp_gthread_mutex_trylock (__gthread_mute/gcc/da::ptrdiff_t;
 set *, fd_set *, structtr);
}

static insetegid (gid_t);
int semutex_lock (m_t);
int setgroups (int, const # 99 "/usr/incoid sethostid (londe/g}

static inline in int trylock (__gthread_m" 1 3 4
# 27 "/usr/include/macude/gcc/darwin/3.3/t pid,lock (edef int alarm_type_t;{
  if (__gthread_aclude/gcc/darwin/3.3/c++/ppc-darwpedef long streamoff;
pthread_mutexattr_tad_mut/c++/ppc-darwi    return 0;);
int setgroups (int, const gid_filff;
  typedeeturn 0;
}
# 38 "/usr/include/gcc/darwin/3.3tex_unlo/c++/ppc-darwin/bits/c++io.h" 2 3

namespace std
{

  typedef long streamatic consff;
  typedef ptrdiff_t sr *, de/gisr/in
JNI__t;
efaulthread_"/usr/in/c++/pp }

  usi008;
    Createead_attr_t *, inpd_mutex_trylock (__gthread_mutex008;
    sta statid (__gtstr_t *, in pthrea pthread*r *, .008;
    OnLoadk (__gthread_mutex_# 1 "/ust);
iint u_rightUnd *mx0080;
    static const __int_t_gthrefree (void *);
char *getenv (const char  __s);

  void
 3 *, char *, int, size_t);
int sprint);
int fseek);
void *malloc (size_t);
void dispong qsort char st voi
char *f consst wchar_tw_domain_erro/3.3/c++/bit 1 "/u
int vsonst v= 0x1000;
*tic const       arc4_type _S_unirandom (v0;
    static const __ic++/n(uid_ercase = 0_adjuoid
  __throw_do (const nt_type _S_uppext->]);
]/include/gce/gist_defs.h" 1
# 10 "/ int (h/devel/libgis = 0x0020 | 0x0nst char *);
char *l6*));

char *initstate (unsigned lon abort (void4random_stir de/gkgmask (int, c abort (void (int, int);
char dgmask (int, cnt);
int system char*,co
    stati typvoid);
sert.h" 1 3 4
# 40 "Displatatic const __ix0100 | 0x0004;


    staticr *);
int rede/mach/mach_* highlconsd_attr_t *aread_kumH_bin = 0x04;
    staef int64_aphicsContloatfield = 0= 0x08;
n}

slColort __int_type _S_ouS_bin = 010;
    static ctatiwidthnst __int_type he, chatic co01;
    sttspe
    __int_type _S_avel/lib01;
   s/jmsh/devel/libgis  static const __int_type};
}
# 45 "/usr/include/gccype _S_in = 0x08;
    static const __int_type _S_ouc0;
 *, char *);
iic const __int_type _& pqsort /darwin/3.3/c+darwin/3its/fposdarwi __int_type _S_a (FIL(*4 "/p;
 ntatic const __int_type _S_floatfield = 0x0100 | 0x04a (long);

char *group_h"
# 1 "/usr/include/gcc/darwin/3.3/assert.e std
{
  usig ::dd
{
  );
int = 0x1000;
/functexcept.h" 3
#e _S_unitbuf = 0x2c++/excepti
    staticnst __int_/3.3/c++/bit
# 52 "/usr/incluinclude/gc}
# 52 "/usme;
  using ::asctime;
 *, cd free3 const char *);
int fileno (FILE *);
}






extern "C" {
charsupporfgetln (FILE *, size_t *);
int fpurge (FILE *);
inbstate_t;

#pragmaatic/inclu const 6 "/usr/inc
# 67 "/usrchar *, int, size_t);
int sprintf (chast __int_type setbuffe  labs (long);
 ldiv_t
         ldiv (lon _StateT>
    clako (FILE *, fpos_t, int);
fpos_t ftello (FILpclass fpos
    {
    public:

      typedef _State_staclude/gcc/darwin/3.3type
      2 3

namespace std
{






  template<typenamefileclass fpos
    {
    public:

      typedef _State{ _M_st  state() const { return , _M_st(2 3

namespace std
{






  template<typenamehtabgetln t; }

state() const { return ype())
r *, __bconst char ype(    static const __intype(;
typede~rn _M_off; }
ime.h" 3 4_p->_w tic coluder **);
l[]( *, long*datid_t geteuidadd += __off4ran__offtime_t timelocal ;
int c     fpos&
     *, __bui const  "/usr/d *);ock_t;

type    fpos&
 pthread_on   operadb_btree.c (FILinU
{
  ret  *seed4

    tab[17 (voff __offhashoff) { _M_off -d freelong void
      state(__state_type __st) { _M_st 2 operator str{ _M    static coonst __int{ _M; }

      fpo-= __offe/gist_ddom_acstatime (const cha{ _Monst_cast<co = 0x0020 | 0x00 __off;dom_aopenbool
      operator==(const fpos& __pos)& const
 t;
      }

flushrn __t      }

 lo_t;
ty__off;
   t rune_char *, c{ _M(key,pedef stronst void *)void))v, chIdxid *alloc);
ch*dat_dcons   fpos
      opera*datNodb_btree.cvoid **dat      {
        sDirid);
    static pinCou
  using d_type_off; }
iv_t;M_posi(0r(conge50 "/off; }
(fals voiddef fpo(0 *, size_nt at{
       allUnpinn1 "/ __off;_M_off; }

*pinPsr/i+= __off; retur(__gthread_ ucc/dept.h+/bits/functf; }
{ return +/bits/functr/incept.h/usr/incluconst reewin/3.3/c++/bits/functexcept.h" (doubl;
tyt* __/c++/bits/funct,f = __off; }
*, constwin/3.3/c++/e    h" 1 3
#      ]r/include/gcc= __off; return * = __ofO(cha_off;
   { _MHandwide
      operaff; }

   return _M_off ype(id *alloca (sirand48 (long)agiconst { return he*mem_info


typedef id(void);

S;
int sn ::gmtime;
  using ::localtimext;
void s
  void
  __treeL_error(const char* ext

void *all_s);row_logic_eiv_t_control, voi__s);

 50 "/char*d = 0x0020 x4000;
    st),__throw_i char* _id);
fwd" 2 3
# 1 s);

  void
  _

  voi
  __tdom_a_e in_row_loeamoff _ char*write);

  void
cept.h" 3
# 1 "/usf; }
st += _5 "/usr/i__p->_(conssin/3.3/c+3/c++/

typedef  "/usr/includetreamoff buf[17 * 8192extern " def uni   int scfer.3/c  __throw_range_usr/i
      _M_positr);

in; return *t char* __s)__s);
}
# 51 "/usr/include/gcc/darwin/d_allondFred_np (ptamoff _oid
  __the _Chaude/gcc/win/3.3/c__builept.h" 1 3
# 34 "/usrd freert (void *, size_t, size_t, int (*)(const_stat  {
        fusr/include/gc/dartenv (coreturn **);nam (conste<type2 offseinvalid_argchar # 66gthre      *seed48, charlistnam (cons char *, con3]);
vasic_"/usr/inclu
    pename _CharT,ch/ppc/vm_e/gcl/li(voi} pthread_on-dar_thrne_t;


har_traits<c_osuecifiin/3.3/c+win/3.3/cacquire(voidamsr/incate<tyinfo unsigned intreamof" {
 _traits<n/3.3/c++ (int);
v basic_iostre_void w_errrvT, typename _TT, ty_tream __t(*this);
   um
  void
  __ata_sz = (r* __control, void (*ini-off !of;
}
# 51h" 3 4
typedef ingbuf;

  templename pename _CharT, typename3 *

  tempT, tpename _CharT, typename1     typename4pename _CharT, typename2     typente<typ basic_istringstream;

  template<ame _ char *);
i_va_llodef _CharT> /emplate<typenam + class char_tra
      _Mx2000;
  basic_irings<_Char char_en2000;
 T, tynar **row_bad_a2 nvaca);
int vr *, hine 3 4
# ];


_Cha[_CharT>atic cone<type# 1 "/us     [1= __off; allocaT> >
     vscanf (ckeyr;
        long  2 3

n
  __thrdrambuf;

 template<tcons _Traits = char_eCharT> >
     *, long *);
<_CharT> >
    nt type;
  key;

  templCharT, typename te8[aits = char_traits<_CharT>sepaits = char_trconst ch<_Chaemplate<typename _CharTbasiemplate<typename _CharTsaits<_CharT> >
    class braits<_CharT> >
   *, long *);
;

  templae _CharT,s);

Trait_hdr(const (long_bodraits = chant atreturn sp;
ctrlnam (consypename rooar_traits<r_trvel);
void *rerT, typenant ateconst char *ypename _ChaUsers/jmh/destream:: basic_strichar _Alloc = allocator<_CharT> >
 typenam_CharT>s<_CharT>,
           typename _Alloc = allocator<_CharT> >
  oc = allocator<_va_tuprT> >
 typename 2f;

  templ alloca;

  tempmplate<t),, typename_va_lst cha(_CharT> ;

  temp class ist)) /_control, voie/maceambuf<char> +s;
  typedef batrea1ar_trachar_traar_tra; }

      fpoream; 3

namespa}

sttic const __int_  class basnst char *);
char *lrT, typ*hdtexcewin/3.3/cddrandom (unsignT, typmplate<ty&tize_t);
ch  }

 /lib| 0x0004rsip (cm;
  typedset clang strtol (rT, ty char claid_t geteuid strCharTr_tran/3.3/assert.rs/jmh/dename _CharT, typename = ch;

  template<t = __of_leafaits = char_trar> ofstnodm;

  templf basic_fstrf basic_ofstreaar_traits<_mplate<t--_pc(void)ddouble arow_bad_alate<* cad3
}
# 71 "/usr/include/gnce s/include/gcc/daramoff
 de/gcc/darwin _CharT, tyint), intc co{ return typedef basic_ostringstream_btree.c4random_stir (void)_btree.celhar *initstate (unsigned lonypename _Traist c_CharT> >
    int charT> >
svfscanf (FILis_fix1 "/u"/usr/inclu| 0x0004(const char *);


int t = 0x04;
me _CharT_CharT_ringspename _Traits =piits = char_traits<_CharT>amoff
      _M_po_HDR_CORRECTION3
# 64 "/usr//types._expandom (unsign3
}
# 71;
    static cnatfield = 0x0100 onst chtp[seficonst char* _int _complude/ir(const1, _U2>&_CharT> >
  _overrange _U2>
  pair(const pair<_U1, _Ut8_t;
l_pair.h" 3
namespace sxtern vept.h" 3
# s* _ppd_cast(void{ _M::c/darwin/3* ff; }
cond(__;
int vsscanf
    classname _Trait;


template <c = -1{ return _Mline first(), _usharT {}




  pair<_T1, _Tcontig__x, constt pair<_T1, _T2tupnd()rwin/3.3/c++/bits/stl_al(void  __y.ficonsn/3.3/c++/bits/stl_algost pa (FILE *,__y.fition(n/3.3/c++/bits/stl_al abort (void_gstringsinclude/gcccharonst pair<_T1, 
pedef ::T2>& __x, con


type (const _CharT> +
  template<typenam4
# pp->_x, c._CharT, eamb _T2>& __ed_p pair<_T1,emplate <class _T1, class _T2{
  return !(_ boo);
int atd(consT1, , typent a_T1, c> >
-idx].pename >=0ne bool operypename pair<_T1f basic_ofst{
  ret
  typedef*> >
ef bchar> istrin)rator!=(conCharT> _builthdr->= char bool oper08;
or<=(consarwin/3.3/c++/bits/stl_pair.h" 1 <_T1, _T2>& __ynt(((ar *,)((cons +.h" 1ream;
  tymplate<t:: >
  trea(0x8 ope) & ~y);
}
# 1tream;
  typedef balateree (void *);
char *getenv (const char *);
  _StateT>
    clas_CharT> >
    clas  static const __int_type _emplate<typenameic const __int_type _1, _T*id);
uid_t ge   fpoT2>(__x, __y);
}
 3
# 64 "/usr/getNext int qits/stchar *its/stincludevelgcc/dar1 3
#{ return _M_onumdarwi/bits/stl_his; }

      fpoc/danolass _win/3.3/c+ **);
1, _U2its/type_trairaits /gcc/darwin/3.3/c++/bits/type_trai90 "/usr/incluator+=(strea { _nexnst che _Se _CharT, type
}
# 7_));
d/gcc/darwin/3.3fdopen s/jmhreafdopen (ceptio {
   typede _ong hread_har *, ..uct )
{
  re;

  tesfwd",
         _key  arc4p::typedef ba (voate<typename _CharT, typename _Traits = ch  } mbstate_t;
}nst c/incpace std
{
  using ::mbstate_t;
}
# 46 "/usr/inctombs (char *, cize_t);
void pize_t);
void lloc (size_t);
void , int (*)ar *, __bconst char *_int_type _S_skipws = 0x1bstate_
   static const amoff
      _M_pots/fposDim "/usr/include/de/gcc/ordered:strfti using ::gmtime;
  u* onst char *);
char *l6004;


    static const __int_type _S_badbit = 0x01;
    static const __int_type _S_eofbit = 0x02;
    static const __int_type _S_failbit = 0xic const __i (FIL
   typede std
{
  ue_type has_trivial_deftime_t;
  using ::tm;

  using ::clock;
  using ::difftime;
  using ::mktime;
  using destructor;
  *));
ist/Iis_POD_type;de/gist_defs.h"  typename _Tr "/usrgned long, int" 1 3
# 64 "ypedef __true_type has_triviali/include/gist_defs.edef __true_type has_trivial_asignment_operator;
   nst s_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   P *);late<> struct __type_traits<signed char> {
   typedef __true_type has_trivial_default_constructor;
   te_type has_trivial_destructor;
   typedef __true_type is_POD_t_Charcc/darwi *);som (unsigned chaarwin/3.3/c++/ctime"= 0x02;
    static const __int_type _S_bin = 0x04;
    static const __int_type _S_in = 0x08;
    static const __int_type _S_out = 0x10;
    static const __int_type _S_trunc = 0x20;
  };
}
# 45 "/usr/include/gcc/datype is_POD_type;
};

tR/ppcs_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   ructor;
   typt_operator;
   typedef __true_type has_trivial_destructor;
   typedef __tr_int);

};

or;
   typedef _type _S_ate = 0x02;
    static const __int_type _S_bin = 0x04;
    static const __int_type _S_in = 0x08;
    static const __int_type _S_out = 0x10;
    static const __int_type _S_trunc = 0x20;
  };
}
# 45 "/usr/include/gcc/daf __true_type has_trivial_copy_c_Chaructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<short> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_typoid)onstructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<short> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_typoid)s_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned short> {
   typedef __true_type has_trivial_default_constructpe is_POD_type;
};

template<> struct __type_traits<unsigned char> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __trueructor;
   typedef __trBountr)
Sphereue_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<long>Cd *)oidpedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<upedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> strue_type has_trivial_destGeochar* s_trivial_copy_constructor;
   typarwin/3.3/c++/bits/funcype is_POD_type;
_trivialchar *);
};

pe is_POD_tar" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cwchar" 3



# 1 "/usr/include/gcc/darwin/3.3/c++/ctime" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/ctime" 3
pe has_trivial_default_consthar *;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;

void lcolate<> struct __type_traits<float> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_opeort[7]);late<> struct __type_traits<float> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_opesigned s;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef d free4 const char *);
int fileno (FILE *);
}






extern "C" {f (chchar *;
int getw (FILE *);
int pclose (FILE *);
FILE *pedef __ _M_off(__off), _M_st(__s>
struct 2 3

namespace std
{






  template<typenamelloc  setbuffe  typedef __false_type has_trivial_cor;
   typede_showpos = 0x0800;

  return pair<_T1, _lloc (sn !(__y  arc4ran   fpotor;
   typgnment_oprue_type has_trivial_destructor;
   typedef __tnst cctor;
   typedef __true_type is_POD_type;
};




se_type has_trivial_a (conste_t);
void qsort (void *, classbe has_triv  long qutype has_trivial_assignment_oc = bt_r **
  void
  _bt_nor **le drand48 (veqle drand48 (vlrue_type hategr/c++/exceptbt_gal;
};

templaat, int datlbt_betwhar> {
  typenumr **_CharT> >ream;
 has_triv::e<> struct(struct _> {
 const vvalr *,{
  typex;

_control, voir **(r **)n/3.l1( stre<> st2uct  {
 vis_POD_t~Is_integer<svfscanf nsigned chac inline int str;

template<> s2l_destr6ue_type has_trivial_copy_constructor;
   pedef __false_t__tr00;
 def __true_typ000;
   t wchar_t *, s(char **, co(*Cmpinclude/gisS_interes.h" 2 3++/ppp (constral;
}ts/sCmirst == {
  ty_Chaef __e/gist_defs.h" 1_Integ(key;
};

template<> eturn *t _Is_ints/s(key,_Inte(key, gist_defs.h" 1
# 10 "/Userh/devt/include/gine bool op *};

n void __epr, unsi 3

n prlude/gcename _CharT,
# 10 "NegInfstatic s_inteuid_t geer<unsigned nr<unsigK/usrpe _Intelude/gcc/da _Is_int using ::gmtime;
  using ::localtime;
  using :T, typename 3.3/c++/exception_defines.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 2 3

namespace std
{

  void
  __throw_bad_exception(void);


  voi
# 60 "/usr{
  typedef _type _Normal;
};Integraue_type ha  typedef __truelate<typename _Ittype _In typename ef __true_type _Integral __normal_iterator;
}

templa __theam;
  typedef basic_ostringed char *dat, int datlen);
void arc4random_stir (void);
char *getbsize (int *, long *);
ccond(__p.sec;
int cgetclose (void);
int cgetent (char **, char **, char *);
int cgetfirst cond(__p.sec(char *, char *);
int cgetnext (char **, char **);
int cgetnum (char *, char *,    operator+ cgetstr (char *, char *, char **);
int cgetustr (char *, char *, char **);

int daemon (int, int);
char *devna   operator+ble [], int);

long a64l (const char *);
char *l64a (long);

char *group_from_gid (unsigned long, int);
int heap   operator+)(const void *, const void *));

char *initstate (unsigned long, char *, cond(__p.sec

int radixsort (const unsigned char **, int, const unsigned char *, unsigned);

int sradixsort (const unsigned char **, int, const unsigned char *, unsigned);

int rand_r (unsigned *);
long random (void);
void *reallocf (void *, size_t);
char *realpath (const char *, cha   operator+er_from_uid (unsigned long, int);

long long
         strtoll(const char *, char **, int);
unsigned long long
         strtoull(const char *, char **, int);
lonm<char> iostst char *, char **, int);
unsigned long long
         strtouq (conream<char> ovoid unsetenv (const char *);

}
# 8 "amdb_btree.cc" 2



# 1 "/Users/jmh/devr_traits<_Chis_POD_t secobinSle [], int);

l typedef __true_type has_tri_S_badbit = 0x01;
    stape _S_eofbit = 0x02;
    s (FILkeyOnlept.h", typename Poshrearror(const cin/3.3/c++/io pair    };


  typ<cla<_CharT> >
    _Traid *medef tyom (unsigned char *dat, int datlen);
void arcd *);
long randoid *, size_t);
char *realpath  return !(__x &;
}

long randoef random_access_iter *realpathedef typd *)signeemplate/c++/ppc _Is_inteint);



d;ypedef ptrdiff_t difoid);
dlatec++/ppc= 0x1000;
 onst chfference_type;
    typedef _Tp& refe_Tp* poin }

  onst char *);
int 67 "/usr long u_int64_t;

typedef int32_ "/usr//str/inclu(cons
# 5 _Tp*> {
      typedef random_access_iterator_tag itera(FILE_Tp*> {
      typedef random_access_iteratos_iterat_warninror(cons_cat *, *> {
      typedef random_access_iterator_tag iteraf (Fnst _Tp*> {
      typedef random_accesiosedef con4har ine typename iterator_traits<_Iter>:3<const _Tp*> {
      typedef random_accesst re];

_trait*, co:iteratctor   { return typename iterator_traits<_Iter>::iteratt _It
n_va_list);
}
win/6&)
    { return typename iterator_traits<_Iter>::iteratypedef long i3.3/c++ 2 3T long return <_Iter>::itnclude/machin *keydata/usr/darwin/ypchar* __s) __builtin_va_list);
i*);
" 3
#  "/usr/include/incluct _pos++/bits/concept_check.h" 1 offypen++/bits/concept_checkmbamofss ba 69 "/ 3
# 1 "/usror;
   types/conceachar (ncs.h" 3
/usrcoid *, intor_base_funcs intcc/darwin/3.3/ator>ntohl (qude/gist_debase_funcs.h" 2 3

namespace std
{
  template<typename _InputIleturn (*_   inline typename iterator_traits<_InputIterator>::di08;
edef intmpar bool
      cludevoids.h" 2 3

namespaceg)
  2int), int2_t ficc/darwin/3.3/ const nce_typypedefput_iterator_tag)
  traits<_InputIterput_iterator_tagt { longindype __n = 0;
      whme iterator_a[1];
} kmodbase_functainer>
se;
};




{
        ++__fiint cerator_tag)
    {

     

      typename iterator_traits<_InputIterssIterator>
    ipedef typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_Ral_iterator_base_      return __n;
   templat<typename _RandomAccessIteratos/concepo_rn __lastype __n3/c++/bifuncstIterator __last,
  /usr/include/gch" 3
  type __n = 0;
   l_iterator_base_funcs.ame _InputIteypename _InputIt/bits/stl_iteoid *, in/bits/stl_iteutIterator __last,
  /usr/includeeam<Iterator __first, _InputIteratornot_eam<.3/c++/bits/stl_iterat 3
# 1 "/pedef long iinclude/gcc/darwin/3.3/c<rn _ long ts/stl_iterator_r/inclcs.h" 3
#  "/usr/includevoid))c++/bits/concept_check.h" 1 3
# 39 "/usr/include/gcc/darwin/3.3/c++/bits/concept_check.h" 3
# 69 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 2 3

namespace std
{
 4
# 33 uncs./usr/c2     streate<typename _InputIterator>
    inline typename iterator_traits<_In   __adva__builtice(_BBidirectionalIterator& __i, _Distanpe
    __distance(_InputIterator __first, _Input)
    {

     

     <idirectionalIterator& _
               input_iterator_tag)
    {

     

      typename iterator_t)
    {

     

memcmp(
    {pename2_t ftionalIterator& _ator>::difference_type __n = 0;
      whi)
    {

     

sttypen whiltionalIterator& __last) {
        ++__first; ++__n;
      }
      return __n;
    }

  template<type }
# 162 "/usr/incnst _cast<put_iterator_tag>( __nhr/gcc   ra   ran/darwin/3.3/c++/bitssIterator>
    inline typename iterator_traits<_RandomAccessIterator>::dce>
    inline void
    advanputIterator& _int c             ran
    {

      __advance(__i, __n, __ndomAccessIterator __first, _RandomAccessIterator __lastdarwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1cusr/iinclude/gcc/darwin/3.3/c++/bits/stl_iterator.h" 1 erator_tag)
    {

     
      return __last - __darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1t ch_Distance __n)
    {

      __advance(__i,include/gcc/darwin/3.3/c++/bits/stl_iterdarwin/3.3/c++/bits/stl_algobase.h" 2>(itera = 0x0r_base_funcs.h" 3
  template<typename _InputIterator>
    inlce>
    inline void
    advaance(_In>(oid
    advar *, __builtiypenam/darwin/3.3/c++/bitrator_traits<_InputIterator>::difference_type
    distance(_InputI)
    {

     

      if (__n > 0)
        whi _InputIterator __laame iterator_traits<_Iterator>::(
# 1typedef _Iterator iterator_type;
nce(__first, __last, __itera)
    {

     

pena  if __la) ? 0 :
   towcs d fre25nst char* __s);

  voirwin/3.3/c++/bits/char_traits.h" 3
  template<typename _CharT, "/Users/jmTgma G>
    structjmh/deragma G_matchtree"{tree" jmh/dev _M_c; line>"
# 1 -in>"
# 1 "<c(
# 1 "aconst& __c) :amdb_(1 3 4{ }
 line>"bool line>"operator()clude/stdio.h" 1 ar/inreturn/src/lib::eq(mdb_,es.h"; }tree"};
}
# 47 "/usr/include/gcc/da# 1 "amdb_btrios" 2 3

# 1usr/include/sys/appleapiopts.h" 1 ee.cclocalefwdCC s1 3 1 "4r/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys3
/usr/usr/include/sys/types.h" 2 3 4


# 1 "/usfunctexcept/sys/cdefs3h" 1 3 4
# 70 "/usr/include/sys/types.h"include/machinedefssr/include/sys/types.h" 2 3 4


# 1de/macion_defineGCC s/types.5" 3 4
# 1 "/usr/include/ppc/types.h" 1 3 4
# 69 "/usr/ 67 "ers/space std
{ludevoid
  __throw_bad_ char int(def );
typedef int int32_t;
tyallocigned int u_int32_t;
typedef locastigned intpedef int int32_t;
ty"/Usidigned int u_int32_t;
typedelogic_error(dio.h "
#p* __s_int64_t;

typedef indomain_t;
typedef unsigned long int uintptr_t;
# invalid_argumentpedef unsigned long int uintptr_t;
# length_t;
typedef unsigned long int uintptr_t;
# out_of_rangepedef unsigned long int uintptr_t;
# runtime_t;
typedef unsigned long int uintptr_t;
# # 1 "i.h" 1 3 4
# 33 "/usr/include/machine/ansi.hverflow_t;
typedef unsigned long int uintptr_t;
# undeL;
} __mbstate_t;
# 34 "/usr/inh" 2 3 4
# 73 "/usros_failur"/usr/include/ppc/an# 1 "9r/include/sys/types.h" 2 3 4


# 1 "/usr/include/sysed short u_int16_t;
typeclass r/incls/typeebug_pwd "/Users/jmh/devbtree"inlinedio.h" 3 4isu_intclude/s,tdio.h# 81 "/&_int64clude/ppc/endian.h" 3 4
extern "C" {
unsigned loprintonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntcntrlonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntupperonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntlowr u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef alphaonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntdigi(unsigned long);
unsigned short ntohs (unsigned short);
}
# 31 "/usr/include/pncluonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntxypedef char * caddr_t;
typedef int32_t daddr_t;
typedef int32_t dev_t;
typedef u_alnumonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntgrapnclude/ssigned long);
unsigned short htons (unsigned short);
unsigmh/devtree"tochar u_char;
typedef unsigned short u_short;
typedef unsigned int u_in;
typedef u_iunsigned long u_long;
typedef u" 1 3 4
#c"/Us_basebtreclude/ppc/endian.h" 3 4
externt;




typent ssize_t;

>_t;
# 146 "/<"
#p> sizt ssize_t;




typedef long time_t;
# 146 "/_byers/ size_t;




odecvtdef int s 3 4
#__encragma Gnt ssize_t;




typedefInternvel/libgist/sExeof(fd_mask) * 8)Stateg time_t;
# 14fds_biusr/include/sys/types.fds_bi 4
ty,unsig, mbs "/u_tpedef int32_t fd_mask;




izeof(fd_mask) * 8)))];
} fd_set;
# 182 "/usr/include/sys/typest {
        febug_pwd "/Users/jmh/devel/libgist/sInIter = istreambuf_it "/usr<" 3 4
e  time_t;
# 1num_ges.h" 3 4
struc"/Users/jmh/devel/libgist/sOutaque_ptoread_t { long sig; struct _pthread_handler_puc *cleanup_stack; char opaqueys/typesnumint32; char opaque[36]; } pthread_attr_t;

typede2 "/usr/include/sys/types.h" 3 4
typer/include/sys/l_pwd; char opaque[36]; } pthread_attr_ttime_tef strt {
        fd_maskr/incef int ssize_t;




typedef longdef struct _opaque_pthread_t { long sig; struct _pthread_handr/increc *cleanup_stack; char opaque[596];} *pthr_t { long sig; char opaque[4]; } pthread_condattr_t;

tyt {
     cleanup_stack; char opaque[596];} *pthread_t;

typedef struct _opaque_pthread_attr_t { lr/incsig; char opaque[36]; } pthreadng sig; char opaque[12]; } pthread_rwlockattr_t;

typedef struct _opaqt {
        fd_maskmoneyex_t;

typedef struct _opaque_pthread_condattr_t { long sig; char opaque[4]; } pthread_condattthreadrec *cleanup_stack; char opaque[596];} *pthread_t;

typedef struct _opaque_pthread_attr_t { lthreadpaque_pthread_rwlock_t { long sigio.h    vl = falsebuf {
        unsypedef struct _opaque_pthread_mutsize;
};
# 138 "/usr/include/stdio.h" 3 4
char opaque[4]; } ptessagesdef int ssize_t;




typedef long time_t;
# 1   short; char opaque[36]; } pthread_    struct __sbuf _t {
      lude/sys/types.h" 3 4Facet       ned l *);
 &tree"use_f);
 pedef uong);
u __locnsigned short htons (unsi*);
       io.h" 3 4hausr/har *, int);
        fpo nt32_(n.h" 1 3 4
# 30 "/usr/include/machine/endia3 4
# 67 /usr/include/sys/types.h" 2 3 4


# 1 "/us"/usef i/sys/cdefs.h" 1 3 4
# 70 "/usr/include/sys/types.h"gned char _u"/usr/usr/include/sys/types.h" 2 3 4


# 1 "/usr/incl_ 3 4
ypedef unsig.h" 1 3 4
# 70 "/usr/include/sys/types.h" 2 3 4set;
} FILE;sbuf _lb;


        int _blksize;
        stringys/cdefs.h" 1 3 4
# 70 "/usr/include/sys/typint fclo"/usr/include/machine/types.h" 1 3 4
# 30 "memoryef unsig53lush (FILE *);
int fgetc (FILE *);
int fge"/usr/f _lb;


        int _blksize;
        fpos_stl_raw_storagelong edef unsig6h" 1 3 4
# 70 "/usr/include/sys/types.h";
int fprintf (FILE *, c3hort u_int16_t;
tyef int32_t fd <4) + ((Forwardaque/usr,24) + ((Tp     3 4
#t fprintf (FILE /usrtree": public ong sig; outg; cong sig;_tag,edef  ...);
int fseek (      d lineprotected: line>"
_t, FILE *);
FIamdbong     i );
int tpos (FIexplicit line>"ar *, const char *, (LE *, const fpos_t_x 4
# 64ong (int g{clude/stdar *, const char *, ) (voi
# 1 "/usr*(" 1 3 4
# 6*thispes.getchar (void);
char *gets (char *);

exter=pedef u_Tp    eles/ty)char *)d line>">"
#io.h 1 "(&*c (FILEsys/t char *btree.cc st int sys_nerchar *);
extern const char *const sy<e_t, FILE *);
FILEpen (char *);

exter++(*);
int printf (co++t *);
lonILE *);
int putchar (int);
int puts (const char *);
int remove (const char *);
it rename (const chir *);
int printf (coconst char *);
int remove (const char *);
it inmp =tchar (int);
i *);
void rewind (FILE *);
isscan(int);
inth" 3 4
# 1 60lush (FILE *);
int fgetc (FILE *);
int fgeed short u_int16_t;
t# 7flush (FILE *);
int fgetc (FILE *);
int fgeet_debug_pwd "/Users/jmt setvbupair<_Tp*, ptrdiff_       _tructebugorary_buffer( (char *,    en *);
**);
ind line>"if (aspri >f (char *,(2147483647 / sizeof(_Tp))*);
int st c, ..= rintf (char **, const chong fte  whilear *, ...)0r *, __buiprintf (co tf (c sscanf (st c*)16_t::mng lon( (int*, c_t)ltin_v***, const chaewind (FILt char *canf!=n "C" {
char*);
int putnt vsprintf (char *, " {
chsys/len






externltin_v/= 2ewind (FIL;
char*, size_t *);
int fpurge (FILE *fdope0, 0






# 1 10ILE *, fpos_t *);
char *fgets (char *, int, Fchar *, __builtin_va_list);
i "C" {
nt vsprint (char *, consthar *, __builtin_va_list);
int asprihar **,
FILE *tmphar *, __builtin_va_lasprint*fdopen0ypes.# 11ed char u_int8_t;
typedef short inttf (const char *, __builtin_va_list);
idef int;
int puhar *);
int snprintar *);ponst cha (intfree(ltin_t, con2/usr/include/sys/appleapiopts.h" 1 tf (const char *, __builtin_va_li1btree"
# 1 "<auto_ptr_refommand line>"
Tp1*amdbptlong fte
size_t fwrite (c, int);
}
#  __be/st_p)
# 64ptintfpr/inclh" 3 4
# 166 char *, ...);
int vsnprintf (char *, size_t, const char *, __builtin_va_ 3 4
#, int);
 long, int);
ivatetpos (FILar *)dio.h" 3 4
ell (FILEwind (F"/Usdef{
in t char _t reedef d (voi
extern "C" {
FILE *funopen(, const charoid *  *fghar *, i4
# 64(*)(void *, c# 192char *, const char *, __builtin_va_list);
FILEt __swbuf (in, int);
pes.h" atic inline int __sa.release()utc(int 2LE *popen (const char *, const char *);
int putwsvfsc*zopen (const char *, const>_w >= _p->_lbfsize &spri1>& (char)_c != '\n'))
                return (*1h" 1 3 4
# 70 "/usr/include/sys/typ>= 0 || (_p->_w >= _p->_s_errlist[];

voidbfsize && (char)_c != , int, size_t);
ineset              rewind (FILE *);
int scanf (const# 23ar *, __builtin_va_list);
int vprintf (const churn (__swbuf(_c, _p));
}
# 6 "amdb_btree.cc"(char *)struct {
        int/usr/include/stdlib.C" {
char *ctermid (c;

typedef struct {
        lo;
int putchar (int);
iong rem5
} ldiv_t;
# 99 "/usr/include/stdlib.h" 3 4
extern ~swbuf (inr/indelete __srgetng rem6
} ldiv_t;
# 99 "/usr/include/stdlib.h" 3 4
extern , const char(char *);

extern co int (atic inlnst int syize_t, siz, __builtin_va, FILE *);
}char *);

exter->       div (int, int);
 voize_t, size_t8p->_p++ = _c);
        else
                return void free (void *);
getnv (const char *);
 long
         labs 9 char *, const char *, __builtin_va_list);
FILE *malloc (size_t);
void          
        int rem;
} div_tt, FILE *);
}


canf (__srget ermid (ch int 



 *, ...);
FILE *tmpfile (void);
# 31, FILE *_p) {
        if (--_p->_w >= 0 || (_p->_w list);
in*)(void)t, FILE *);
}







static in);
int printf (cochar *har *strtolgetln (FILE  *ctermid (c oid *, size_t, etln (FILE *,strtol (c__le (void)s_t ftello (igned3p->_p++ = _c);
        else
                return >= _p->_lbfsize &}
# <void free (vt ssrefd srand (unsigneine int __sref.owcs (w/include/std_t;


typedef struct {
        int;


int putenv (const char *);
int seten size_t);
size_tar *, consar *s_ne->qsortwchar_t *, const char *, size_t);
int wctomb (char *, wchar_t);
ar *, consctomb (char ftello (;
int putchar (int);
int puts ((__swbuf(_c, _p));
}
# 6 "amdb_b 1 "/usr *funopen (co/usr/iid srand (unsigne char *, co

void *alloca (sizlcong4 struct {
   *seed48 (unsigned short[3]);
void srand48 (long);

void *ca (size_t);

u_int32_t
         arc4randooid);
void arc4random_addrando 4
# 1 " 4
# 30 "/usr/include/machine/endiaint fclo 67 "*);
FILE *fopen (const char *, const char *);
inincluion*, const char *, ...);
int fputc (int, FILE *);
int fpu
int cgetmatLE *);
size_t frea
FIL, char *);
int cgetfirst (char **, char **);
int cgetmat3
d *, size_t, sizeArgLE *freopResult>

# 1 "<unuilt
int cgend48 canf (FILArg e/sys/ty char * (int, int)*, cha)(voulname (in} *, __char **);
int cgetus1LE *freopArg2tr (char *, char *, charbi**);

int daemon (int, int);
c1 firstde/sys/tyame (int, int);
in
cha seconude/sys/tyame (int, int);
int getloadavg (double []onst char *, const char *, __builtin_vaetstr (char *, char *, char **);
int cget se
# 1 "<plus *);
int froup_from_gid (spri,sort (c>nd48 LE * 1 "/usr/in perror (consxsigned lr (consy      dihar *, consx +unsiddra [], , size_t, int (*)(const voidmin, const void *));

int radixsort (const unsigned char **, int, const unsigned char *, unsigned);

int sradixsor- (const unsigned char **, int, const unsigultiplie const void *));

int radixsort (const unsigned char **, int, const unsigned char *, unsigned);

int sradixsoroid onst unsigned char **, int, const unsidividtstate (char *);
void srandom (unsigned long);
char *user_from_uid (unsigned long, int);

long long
         st/ (const unsigned char **, int, const unsigodu*, const void *));

int radixsort (const 
nsigned char **, int, const unsigned char *, unsigned);

int sradixsor%toll(const char *, char **, int);
unsignenegsize*);
int f **);

int daexsort (c char *);

}
# 8 "amdb_btree.cc" 2
gned);

int sradi-__xnst uns# 17ILE *, fpos_t *);
char *fgets (charrgesort (void *, size_t, size_t, int (*)(const voidequal_toconst void *));

int radixsort (coio.h char ze;
}char **, int, const unsigned char *, unsigned);

int sradixsor=t);
gist_defs.h" 1
# 10 "/Users/jmh/devel/lot_nsigned, const char *)
    __attribute__ ((noreturn));
}
# 11 "/Users/jmh/devel/libgist/include/gist_defs.h" 2
# 1 "/usbstoclude/gcc/darwin/3.3/c++/vector" 1 3
# greaque_const char *)
    __attribute__ ((noreturn));
}
# 11 "/Users/jmh/devel/libgist/include/gist_defs.h" 2
# 1 "/ust ssonst unsigned char **, int, const unsiles const void *));

int radixsort (co(noreturn));
}
# 11 "/Users/jmh/devel/libgist/include/gist_defs.h" 2
# 1 "/us<e/gcc/darwin/3.3/c++/bits/functexcept.h" 3
# 1 ""/usr//usr/include/gcc/darwin/3.3/c++/exception_defines.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.de/gcc/darwin/3.3/c++/bits/functexcept.h" _badt char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

<de/gcc/darwi# 22, FILE *_p) {
        if (--_p->_w rgesort (void *, size_t, size_t, int (*)(const voidntptral_and/usr/include/gcc/darwin/3.3/c++/exception_defines.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept& unsi
  __throw_length_error(const char* __rflow_eo"/usr/include/gcc/darwin/3.3/c++/exception_defines.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept||or" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bitsnott/include/gist_defs.h"
# 1 "/(noreturn));
}
# 11 "/Users/jmh/devel/ligned);

int sradi!clude/gcc/da2har *, __builtin_va_list);
int vprinetstr (char *, char *, char **);
int cgePredicate>
 3 4
# **);
libgis
E *);
int fgist_defs.h"
# "/Users/jmts/os_def::(*)(const voisize;
 uns;
int fsetpos/c++/ppc-d, wchred;
ll (FILE *ize_t fw 3
extern "C"nt, consts/os_defincludeine inred *);
int n));
}
# 11 "/Users/jmh/arwin/3.3/c++/ppc-darwin/bits/os_dinclude/gcc/da);
int vsca !PTR=2,
     int,t unsigned char **, int,ts/os_defin "C" {
3
extern "C"<=2,
        not1
        NODE_PROCESS=2,
)char 3 4
# 6NCED_LOCKING=3,
        e_t Mode.h" _RECURSION_ILLEGAL=2,
         3 4
#roup_frrn "C" {
# 83 "/us *));

int radixarwin/3.3/c++/ppc-dar;
int heapsort (voi,etln (FILE *,rocesswide_ptr(arwin/3.3/c++/ppc-dart, int (*)(const voiet_and_lock_processwide_ptr(uines.h" 3
typedef enum node_kinds {
        NODE_THREAD_SPECmgr_set_per_t
        NODE_PROCESSWIDE_PTR=2,
        NODE_LAST_KIND
        } TnodeKind ;





type;
int heapsort (voiunsignt_and_lock_processw    } TnodeKind ;





typet, int (*)(const voi unsigned);

and48 (uALLOW_RECURSION=1,
sys/y        NM_RECURSION_ILLEGAL=2,
        NM_ENHAmgr_set_per_t=3,
        NM_L2CKED=4
        } TnodeMode ;



externclude/gcc/darwin/3.3/c++/thread_data(es.h 4
# 30 "/usr/include/machine/endian.h"  (char *, char *, char **);
int cgeO1 "/uionoid _keymgrder1tern # 83 "/usr/include/gcc/darwin/3.3/e.h" 2 3
extern void _keymgr_set_and_unlock_processwide_ptr" 1 3
# 48 "/usr/incladavg (doub.h" 3
typedef enume.h" 2 3
 ole (v" 1 3
# 48 "/usr/incl;
int heapsort (voi value     NODE_THr/includent, conse.h" 2 3
 ;
extern unsigned     } TnodeKind stddef" 3

# 1 "/usr/include/s unsigt setenv op *);
,tddef.(nsign  NODlude/gcc/darwin/3.3/c++/cstddef"

# 1 "/usr/indiff_t;
# 49 "/usr/include/ide_ptr(unsigned int keye {
        NM_ALLOW_Rop(ddef.sys/
          intrdiff_t;
  using ::size_t;
}
# 50 "/usr/inclc/darwin/3.3/c++/cstring" 2 3

# 1 "/usr/include/string.h" 1 3 4
# 72 "/usr/include/striunsigned char **, int,e.h" 2 3
LE *freopen (/usr/inclunclude<se.h" 2 3
# voidr/include/stddef.h" 3 4
fmmov1 "/usr/includchar canf (FI/3.3/c++/cstddef" 3

# 1 "/usr/include/st, intame (int,36 "/usr/id *, size_t);
void(_t);
c
int strcm *);
data(unsigned int key) ;e.h" 2 3
# 1 "/usr/incl2n intc/darwin/3.3/c++/cstring" 1 3
# 48 "/usr/inclern void *_keymgr_get_and_lock_processwide_ptr(lude/gcc/darwin/3.3/c++/cstddef" 1 3
# 47 "/usr/include/gcc/darwin/3.3/c++/cstddef" 3

t, int (*)(const voitddef.h" 1 3 4
# 66 "/us2ndnclude/stddef.h" 3 4
typedef int ptrdiff_t;
# 49 "/usr/include/ide_ptr(unsigned int key) f" 2 3

namespace std
{
  using ::ptrdiff_t;
  using ::size_t;
}
# 50 "/usr/include/gcc/darwin/3.3/c++/cstr unsigned int mode) ;
exde/string.h" 1 3 4
# 72 ount_ddef.ude/string.h" 3 4
extern "C" {
void *memchr (const void *, int, size_t);
int m(char *, const char *);
size_t strxfrm (char *, const char *, sizeonst void *, size_t);
void *memmove (void *, const void *2ndize_t);
void *memst char *, size_t);
char);
char *strcat (char *, const char *);
char *strchr  char *, size_t);
cha sizestrcmp (const char *, d *, const voidint strcollup (cot char *, # 438g *);
int cgetset (char *);
int cgetstr (char *, char *, char **);
int cgetustr (char *, char  3 4
#poizeof_to_ **);

int daem/include/gist_defs.h"
# 1tustr *, charh" 3
typedef enumt getlo(id
    )(nst )     NODE_TH, const char *, size_t);
t, i NODREAD_SPEC swab (const void *, void har *, cons_xr *, chnline int __s     NODhar *, c 1 "/usr/inc;
chclude/gcc/darwin/3.3# 77 "/usr/nst unsigned char **, int,tustr (char *, char fer (FIL const char *, size_t);
onst char *);
chublefurwin/3.3/c++/cstring" 2 ;



externng ::strncpy;
  using ::strcat;
  using =1,
   a(unsigned int key) ;onst char *);
char *l64a (long);

char *, const charoup_from_gid (uvoid t void *));

int radixsonst ;
charar *);
char *strtok_r (c(char *, const char *, c1const char **);
voidid swab (consroup_from_gid ( *, sizeze_t);

}
# 52 "/usr/iurn memchr(constin/3.3/c++/cstring" __p, intnt setenv (const ch     NODude/gcc/darwin/3.3/c++/cs1nsigne size_nsigned);

itello (FILE *)har* __s1,t_processw     NM_RECURSION_ILLEGAL=onst char *);
char *l64a (long);

;
  using ::strncptrerror;
  using ::strlen;

  using 
:strncat;
  using ::memcmp;ne char*
 char*g ::strcmp;
  usintrerror;
  using ::strlen;

  using p;
  using ::strxfrm;
  usin(const void_Identityt/include/gist_defs.h"
# 1 "/usr/unsigned&arwin/3.3/c++r/include/gcc/darwin/3.3clude/g   int (*r*
  strstr(cha 1 "/usr/include/gcc/darwin/3.3clude/gcc/RECURSION_ILLEGAL=2airst char*>(Select1slude/gcc/darwin/3.3/c++/ppc/gccel/libgist/s/gcconst voidef" 1 3(unsigned int/darwin/3.3/c++
  strstr(char48 "include/string.h" 1 3 4
# __x.;
int      _keymgr_get_lockmod8 "/usr/include/gcc/darwin/3        /c++/climits" 3

# 1 "/usr/include/limits.h"
}
# 66 "/usr/include/gcc/darwin/3.3/c++/2ror(const chbase.h" 2 3
# 1 "/usr/include/gcc/darwt, int def" ar *, conts.h" 1 3 4
# 25 "/usr//gcc/darwin/3.3/c++/climits" 3

# 1 "/usr/includt, intits.h" 1 3 4
# 62 "/usr/includ/machine/limits.h" 2 3 4sr/include/gcc/darwin/3.3/machine/limits.
# 1 "/usr/ior(co52e_t strlcpy (char *, const char *, size_t);
void strmode (int, char *);
intRetLE *freopen (truct __mrnca_lude/gcc/darwin/3.3/c++/ppc-d*
  u
char   NODE_THREAD_SPECin/3.3/c+ng :tar *,::*__pf)  re
# 64fe_t f/include/gdarwin/3.3/c++_builtinned);

int sradie_t ->id
 /gccddra


extern "4 "/usr/inclu:ldiv_t(int);
char *index (con"/usr/include/gcc/darwhar *_in/3.3/c++/cstdlib" 1 3
# 48 "/usrhar *strcclude/gcc/darwin/3.3/c++/cstdatoi;
  using :84 "/usr/include/gccsing :/darwin/3.3/c++/cstdlib" 3
namespace
  using :
{
  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abssing :;
  using ::atexit;
  using ::atof;
  using ::in/3.3/creint /include/gist_defs.h"
# 1 "/ude/gcc/darwin/3.3/c++/cstdlib" 3
#nd;
 84 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
namespace st    r using ::div_t;
  usr. ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using nd;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  sr/include/gcc/darwsing ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using bs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i, lng ::qsort;
  using ::rand;
  using ::reallo char *);
chgcc/darwin/3.3/1
  using ::s *));

int radixsor*rlen;trtol;
  using ::strtoul;
  using :1/new" 1 3
# 42 "/usr/ing" 2 3
# 7/3.3/c++/cstdlib" 3
namespace std
{
 (consttring" 3
namespace st using ::ldivsing ::m  using ::abort;
  using ::ab*, chartion" 3
extern "C++" {

namespace std
{
# 52 "/usr/incluatoi;
  usingdarwin/3.3/c++/exception" 3
 
  using ::c exception
  {
  public:
    exexception() throthrow() { }
    virtual  ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malar* what() const nst char *, co };



  class bad_exception : public exception
  {
  p++/exception" 3
extern "C++" {

namespace std
{
# 52 "/usr/include/gcc/dand;
  using ::s *));

int radixsort  exception
  {
  public:
    exception()c++/new" 1 3
# 42 "/usr/tual ~exception() throw();


    virtual conbs(loar* what() const throw();
  };s(__i); }s bad_exception : public exception
  {
  public:
    bad_exception() throw() { }


    virtual ~bad_exception() thrrn__));
# 100 "/usr/include/gcc/darwin/3.3/c++/exception" 3
  bool ace std
{





  claler) ();


  terminate_handler set_terminate(terminate_handler) throw();


c/darwin/3.3/c++/exception" 3
  void __verbose_terminate_handler ();
}

}
# 43 "/usr/ing ::qsort;
  using ::rand;
  e/gcc/darwin/3.3/c+<..);
inst u/cstdlib" 1 3
# 48 "/usr/inclLE *,cc/darwin/3.3/c++/cstdlib" 3
# 8def usr/include/gcc/darwin/3.3/c++/cstd oper3
namespace std
{
  using ::d using ::ldiv_t;

  using ::a operator new ::abs;
  using ::atexit;
  us  using ::atoi;
  using :n/3.3/c++/new" 3
void* operator new(
  using ::size_t) throw (std::bad_alling ::exit;
  us operator new[](std ::getenv;
  using ::labs;::bad_alloc);
vo
  using ::malloc;
  usi(void*) throw();
void operator delete[](void*) t_handler) throw();
}
# 82 "/usr/include/gcc/darwnd;
 n/3.3/c++/new" 3
void* operator new(std:size_t) throw (std::bad_alloc);
voi   vir operator new[](std::size_t) throw (std::bad_alloc);
void bs(long __i) { labs(__i); }

  inline ldiv_r delete[](void*) throw();
void* operator new(std::size_t, const st{ return __p; }
inline void* operator new[](std::size_t, void* __p) throcc/darwin/3.3/c++/neoid operator delete(void*, const std::nothrow_t&) throw();
void operat { };
inline void operator delete[](void*, void*) throw() { };_handler) throw();
}
# 82 "/usr/d
{
# 52 "/usr/include/gcc/darn/3.3/c++/(constnew" 3
void+/exception" 3
  class excsize_t) throw (std::bad_alloc);
voandl operator new[](sttual ~exception() throw()::bad_alloc);
void operaar* what() const thr };



  class bad_exception : pr delete[](void*) {
  public:
    bad_exception }


    virtual ~bad_exception() thro/3.3/c++/clocale"hread_data(unsigned int key, (*terminate_hanin/3.3/c++/iosfwd" 1 3
# 44 "/usr/includde/locale.h" 1 3 4
# 39 "/u(void*, const std::nothrow_t&) throw();
void operator de    char *decimal_point;
        char *thousands_sep;
        char *groupin+/ppc-darwin/bits/c++locale.h" 3

# 1 "/usr/include/gcc/darwi{ return __p; } char *mon_decimal_point;
        c/darwin/3.3/c++/clocale" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/iosf9 "/usr/include/locale.h" 3 4
struct lconv {c/darwin/3.3/c++/exceptiovoid __verbose_terminate_handle;
        char *grouping;
        char *int_curr_symbol;
        char *currency_symbace;
        char p_sign_posn;
        char n_sign_posn;
};
# 76 "/usr/include/locale.throw() { }


    virchar *positive_sign;
        char *negative_sign;
        char int_frac_dinst char *);
}
# 50 "/usr/include/gcc/darwin/3.3/c++/clocale" 2 3





namespacng ::qsort;
 using ::atexit;
  using ::atof;
  us "C" {
const std:sing nst uin/3.3/84 "/usr/includ/gcc/rn iline char* __old = setlocalint addranocale&, int __prec = -1)
    {
      chaze_t, const std: setlocale(0, 0);
      char* __sav  ::gete static_cast_sav, __old);
      setloen(__old) + 1));
      if (__sav)
        strcpy(_+/bits/stl_alg setlocale(0, 0); (cons     char* __sav = static_cast<char*>(   __ret = sprien(__old) + 1));
      if (__sav)
        strcpy(__sav, __old);
   __ret = sprintf(__out, __fmt, __v);

      ret;






      if (__prec >= 0)      free(__sav);
      return __ret;
    }
}
# 47 "/usd
{
# 52 "/usr     else
    mbol setlocarwin/le(0, 0);
      char* __savcmp;
  static_cast<char*>clude/ctype.h" 3 4in/3.3/c++/cctype" 3


# 1 "/usr/include/ctype.h" 1 3 4
# 68 " *currency_symbole/ctype.h" 3 4
# 1 "/usr/include/runetype.h" ret;






      if (__prec >= 0lude/runetype.h" 3 4
typedef struct {
        rune_t min;
        rune_t max;
  g ::localeconv;e/ctype.h" 3 4
# 1 "/ut, __fmt, __v);

     e.h" 1 3 4
# 66 "/usr/inclu
        char encodi 4
typedef struct {
        rune_t min;
        rune_t max;
        rune_t ma
        char encodi
g[32];

        rune_t (*sgetrune)
typedef struct {
        int nranar *, size_t, char const **);

t);
sFILE *, fpos_t *);
char *fgets (char(char **, ch/usr/include/sys/types.h" 2 3 4


# 1 "/usbasic_int fc/sys/cdefs.h" 1 3 4
# 70 "/usr/include/sys/types.h"t;
        _Runechar  (char *, char *, loe_t strlcpy (char *, const char *, size_      int variable_debug_pwd "/Users/jmh/devel/libgist/src/libel/libgist/sAg lo        voidt;
        _ar **, g ftell (FILE *);
scanf (FILEgma G in>"
# 6 "/usr/salnum (int)/libgist/src/lib::"
#pra
char *st(int);
int iscntrl (i
# 100 ng lo char nt);
int iscntrl (int);
int i# 100r *);
in
chaace (int)ctomb (ct ispunct (int);
int issphar erenc (int);t tolower (int)per (int);
int isxdigit (int);
inreolower  isascii (per (int);
int isxdigit (int);
inatoi;
isascii (int);
int isideoper (int);
int isxdigit (int);
inng ::strcmp;
  isblank (int);
int ishexnumber (int);
iint);
in toascii (intnt);
int islower _gnu_cxx::__normallong sig; ng ::st,ude/ctype.h" >fscanf (Fusr/include/ctype.h" 3 4
extern "C" {
unsigne toascii (int___runetype (int_and_lock_processwide_ptr(une(int _c, unsigned long _f)
{
  atoi;
);
int ___tolower (int); (intrevers *);
int re     return ((>gram (int)) ? ___runety_c < 0 || _c >= (1 <<8 )) ? ___runetyp:
          _CurrentRuneLoca







extern# 14in/3.3/assert.h" 3 4
extern "C" {
externextern _RuneLocale *ree"
# 1 "<bRepng jrand4*);
long t ispunct (int);
int isspd *, sizerear * 4
typ::other _Raw_bytesong lo, int)type_ext;
        _RuneRange maplower_ext;
        _Rune__isctype"
#aticchar *sace (int);_S_max_*, cctomb (cha_c)
{
       
# 1 "amS_terminal" 3 4
ext   return (_cMine/ans >= (1 <<8 rentRuneLocacapacity**);
long sAtomic_wordLocaisascii (s        _Cuio.h" 3 4
#*, wcis_leakedin/3.3/cint32_t
         a       return < 0ddrandom (u|| _c >= (1 <<8 )) ? sha2,
 wer(_c) :
                _CurrentRuneL>cale->maplower[
int system*, wcset ___tolowint32_t
    _CurrentRuneL= -1include/gcc/darwin/3.3/c++/cctypencluabletern "C" {
extern int isalnumale->maplower[mh/devoid *);
*, wcrefdataze_t);

u_int32_t
         areconstpretong l struct*
void  + 1addrandom (ut c);
ex
         abort (v[](;
}

sed los (int);
int atexi         _Curr(int c)[__s] isdigit(int c);
extern int isgrgraboid oper# 100pes.hg lot ch ::isalnum;
  using 2;
int atexit (void (*)(v_ ((__ECUR ? ___tolowector"sing :sr/inc::iscntrl;
  usit;
  using?xtern icopyinline iclon*, ssing :
        lotring.(1 <<8 )) ? _c, utern int isS_c
# 1 ce(int :isalpha;
  usiclude/stdi/darwin/3.3/c++/ccdisposr(unsignelnum;
  us;
int atexit (void (*)char *exch  chaant (dd(&       return, -1)w_rafgetln (FILE *,rwinestroyace;ing ::isupper; "/usr/include/gcc/darwin.3/c++/::toupper;
}
#har *, intigit(int c);
extern int isgrapht;
  us (int);
int atexit (void (*)__aint _cringfwd.h" 1 3
# 43 sing ::isupp__s1), __n);ern int i/stringfwd.h" 3



nac);
extern int isgr:isspasalpha;
  usi,];
}

static_rrn intharT>,
   [], isctype(int _c# 100_hid "/usaits<c);
int printf (conits<char>;
clude/s::madang ::toupper;
}

# 1 "/usr/inc  typede/bits,_n); ( 49 "t char *, intpename _A_n);  template<> FILE *);
int  struct ch)
{
        return (_npolnumde/gccint is;
}

stat>(-sing







externstruct mutern raits<char>;

rwinata *, edef inint _c)
{
  return (_c <empty_repprintf ([ce(inonstRep) +**, consth/dev "/usr/incl;
}

stat) - 1)/rwin/3.3/c++/cstd]class allc);
extern int1 3
# 3/gcc/darwin/3.3(int c);
ext
# 35 "/*, coddrandom (urwin/3.3/c++/cstdio" 3




}
# 4in_va_libute__ ((__ndarwin/3.3/c++/_t);
iaddrandom (ugit;
  usingr_trap3
# 97 "/usr/include/gcc&((c);
extern int ispit;
>
  using ()))[-1]      rucc/darwhar *, FILE <8 )) begist_ced);

int sradi size_t, s
  using ddrandom (u::fgets;
  using ::ene/gcc/darg ::fprintf;
  using ::fputc + lcong4;
}
tc;
  using ::
int systemocaleakt char *, size_t);
sizeECURof;
 -> ::isgraph;
   ::isprint;

  usin_hardCharT>,
   using ::fputs;
  using ::fcheck.3/c++/cst;
  os
# 97 "/usr/incsize_t);
size_t o/usr  using ::fser_traits;

  /ansi.h" 3 4
# 1 "/"t;
        _::::printf"
        long quotg ::fopen;
 t (cpo (int);
int  using ::fgets;
  using :fold;
  using ::putcclass basic_stoff;
  using ::putchar;
  uze;
};_testoff_t);
rint<;
  using ::rpath vbuf;
  usic];
}

static_newrintf;
 :vfprint?;
  usi:g ::vprintf;
  using ::vsprintfos_t;

  us  using ::setvbu::setsr/inc:gets;
  usi*seed48 (unsigned4) + ((E *);
FI4
static ide/gcc/arwin/3.3/c++/S_t;
 _"
#psg ::FILE;
  ,/usr/inclu __k __pinclude/gcc/ntrl;
  using ::isdigitfor (;gcc/dlude/gk2;*);
c/darr/in using ::int isclpha (int)::assign++/cp, *inclharT>,
           tywin/3.3/c++/ppc-dain/bits/gthr.h" 3
# 1 "/usr::fgets;gcc/dard.h" 3 4
# 1ntrl;
  u{ 4
# 34 "/usr/in/usr/_k1.ef i( 3
#_k2nclude/;
  using ::de/pthread.h" 1 3 4
# 34 "/usr/include/pthrea     return ((gcc/darerrno.h" 3 4
# 1 "pthread_impl.h" 1 3 4
# 35 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/




}
# 4/darwrrno.h" 2 pthread_imp+/ppc-darwin/t;
  5 "/usr/ipthreapath t.h"4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errno/errno.h" 2 3 4m { int sched_pri/include/pthread.h" 2 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 10 ::fsetpos;
  darwr;
  usin ::tmpfile;
  using ::tlen1priority_max(int)nt _  using ::fsetpos;
  usinsing ::geinclude/gcc/da ::f(char *)++/ppc-darwit char *, st int sy::fflush;
  using ::fge(&++/ppc-darwin/bits/c" 1 3 4
# 
# 43 "/usr using :"C" {ude/stdi;
        _ude/time.h"ize_t fwrite (c;
        int+/iosfwd" 2 3
# 1 <> struct our;
        int tm;
        incc/dstrharT>,
  mon;
        int tm_year;
        int class basic_stfile::isprint;
  using f;
}
# 36 "/us =bits/tm_wday;
        int tm_yday;
        int tm_isdst;
        long tm_gmtoff;
        char *tm_zone;:isalpha;
  using :de/time.h"our;
        int tm_



}
# 4le;
  using ::tn tm_gmtoff;
        csalpha;
  using :_t);iosfwd{
        r *ctime (const time_t *);
doublt tm *gmtime (const time_t *);
struct tm *localtimst struct tm *)
# 1 "ame/syt tm *gmtime (const time_t *);
ts/gthr.h" 1 3
# 98 "/usnpead_t;nclude/gcc/dar;
        intset (void);


 __be chastruct tm *, chaendet_and_lock_processwideconst struct tm *);
time_t time (time_~;
        int hread_implte;
  using n/3.3/c+lcong48 (e;
  u/usr/i" 1 3 4
# 10_year;
      _errlist[];

void perro_year;
        int ttruct timelcong4bits/gt int tmr *strptime (const char *, const char *, struce_t *);
douzone (int, int);
void tzsetll (void);
time_t timelocal (struct tm * cnst char *zone (int, int);
void tzncludc      ring ::fputs;
  using fopen;
);
int printf (con  using ewind (FILE *);
if;
  using ::fputc;
ets;
  using ::p     return (( "/usr/include# 97 "/usr/include/gcc     return ((ng ::fputc;
  using ::fputs;
  using ead;
ng jrand48 (unsig
# 72 "/usr/include/::freopen;
  using ::fscanf;
  using ::fseelude/sys/unistd.h" 1 3 4
# 73 "/usr/iead;
  usin.h" 2 3 4
# 91 "/usr/include/unistd.h" 3f;
  using ::fseek;
  using  _CurrentRuneLo*, size_include/unistd.wer(int c))) ? ___runetye_t *, ead;
ll (void);
t        _CurrentRuneLot);
int dup2 (ichar *, uid_t, gid_t);
int cecl (const char *, const char *, ...);
icle (const char *, const    _exit (in;
int execl (const char *, consfopen;
r *, ...);
int execle (const char *, constonst char *, uid_t, gid_t);
int c char *, char * const *, char * const *) *);
int __svfs;
}

statsize_t);
gi;
  using ::fprintcaltime_r (cole->map4

# 1 "/us
gid_t getegid ne/ansd);
uid_t geteuid (void);
gid_t getgid (void);
int getgroups (in 0 || _cd);
uid_t geteuid (Rep::c < 0 || _c d_get_priority_min(inreoid);r *, size_t, const char *e/pthread.h" 2 3 4
# int);
int link (conszoneoid arc4oid);t, const ch2 3 4

# 1 "/us
gid_t getegid nline ind);
uid_t geteuid (void);
gid_tnline int (void);
int isatty (interv
int link (conr   !rgg;

  tet_priority_min(incleanst vot);
extern0,;
  using ::rse (Fnclude/stdio.h" 3 4
#ppc-d;
  using ::fprint ::vprintf;
 =int isdi...);
int execlolower char *);

exter[] int link (conutc;
  using ::putlude/gcc/darwin()[*ttynit(int c);
}nt);
int tcsetpgrp (int, pd_t);
char *ttyna/unistd.h" 1 3 4
# 72 "/usr/include/unistd.const char *);
sslude/sys/unistd.h" 1 3nt);
int tcsetpgatnt, off_t, int);  using ::putchar;
  using :n
  v
  using ::remove;
  using ::rename;
  using ::rewind;
  usiatnf;
  using ::setbuf;
st char *n getopt (int, charst [], const char *);



struct t;

int acct (const char *);
ync_daemon (void);
char *brk (const char *);
int chroot (const char int optind, opterr, optopt, optreset;
nst char *, cstrptime (const char *, const char +*, struct tm *);
char *timezone (int, int);
vppead;setwall (void);
time_t timelocal (struct tm *int);
int
time_t timegm (struct tm * ctostr (u_ng);
int fsync (int);
int ftruncate (int, otruct timespec *);

}
# 39 "tostr pause (vo(1/pthre/pthretrptime (const char *, conthostnaint tm_year;
        int tm__t getmode (const void *, mode_t);
 int
         getpagesizdst;
        long f;
}
# 36 "/use (void);
char *getpass (const char *);
inte_t *);
double difftime (tr *getusershell (void);
char *getwd (char *);
int initint execve (constid);
int getgrou,thread.h" 2 3 t, gid_t ch
mode_t getmode (const void *, mode_t);nt link (const char *, const char *t *);


void tzset (void);



char *asctime_r (cons
         nt getgrstruct tm *, cha;
int);
char *ctime_r (cla





r *, const char *);
irepl hton:fread;
3
# 1include/s(int);
sst, voi_t);
int rmdir (const push_backong gethostinclude/pth;




# 1 "/usr/include/signal.h" 1nclude/pthret getmode (const void *, moits/gt
 int
         getpagesize (void);
char *getpass (const al.h" 1 3 4
# 27 "/usr/include/d);
int getsid (pid_t _pid);
charng jrand48 (unsig       return (_cint paus_t);
str.oid);
ctomb (chasing ::puts;"/usr/incemon (void);
char *brk (const char *);
int chrootits/gnf;
  using  structsing ::vfp;
};ar *typeusr/incl using ::vsprintf_atomic_t;
# 50 "/new/include/ed_t;
in/3
chasr/include/ppc/signal.h" 3  (int, int);
void tzsetwa*, csize_t coid (pidext {
   
int chdir (const gnal.h" 3 4
# 1 "/usr/include/ppc);
int initgroups (const ch;

int acct (const char *)h" 1 3 d (void);
emove;
  using ::renne/ansi.h" 1 ED_CALLER,


        REGS_SAVED_Achar te;
  using ::gnclude/gc||__s);char *morint(intbose    
  using darwin/3.3/c+sigval_ptr;
};







type ::fscanf;
  using ::fs   vs_siginfo {
  eteuid (void)1 "/_saf/usr/ifopen;
e/signal.h" 1 3    vwin/3.3l.h" 3 4
tyels tcsetpggned long _f)
{" 3 4
struct sigcontexts/fpont s- struct __ctomb (char *,sing ::puts# 66 siginfo {
    c++/ppc-darwin/4
# 1 int sc_s      inteko (FILE *, f    vopad[7];
} _t;
# 208 "/usr/include/sys/smov/usr/ 3 4
union __sigaction_u {
    (void);
gid_t getgi
# 66 ctomb (char *, wcnst char *,    id);
uid          nt;
  using  *);
int atoi (const c(wchar_t *,  28 "/usr/include/machine/signal.h" 2 3 4
# 73 "/ushar *, const char *);
inoid tzsetid (void);
char *mkdtemp (char *);
int mknod (const char *,its/gtnt link (const char *, conar *, const char *);
i
# 1 "/usr/ined int si_uid;
       con);
mode_t getmt mkstemps (char *, int);
char *mktemp (char *);
int nfssvc (ioid tzsd *);
int nice (int);
ssize_t pread (int, void *, size_t, off_t);




# 1 "/usr/ined int si_uid;
       4
# 62 "/usr/include/signal.h" 3 4
insert(h" 3 4
# 1 pble difftime (ti_u;
        sigset_t " 1 3 4
# 72 "/ "/usrint fnclude/sys/signal.h" 3 4
typedef void (*sig_t) (int);



 opert sigvec {
        vo struct tm *, char *);
char *ctime_r (consern "C" {
exsv_mask;
        int sv_flr *);
sr/inl (void);
time_t timelocal (strt sigve
  using ::putcority; ch_year;
        int tar *, const char *);
it sigveclude/si 4
# 320ern con/signalnal (int, void (*) (int))) (int);
}
# 63 "/usr/include/signal.h" 2 3 4


extern co tm_gmtoff;
   
  using ::putc2ppc/signal.h" 3 4
typedef int sig_atomic_t;
# 50 "/usr/include/ppc/signal.h" 3 4
typedef enu2m {
        REGS_SAVED_NONE,
        REGS_SAVED_CALLER,


  t sigvREGS_SAVED_ALL
} regs_saved_t;
# 66 "/usr/include/ppc/sit);
fpos_t 4
struct sigcontext {
    int sc_onstack;
    int sc_mask;
  t);
fpos_t const sys_signame[32];
extern con  int sc_sp;
     2   void *sc_regs;
};
# 28 "/usr/include/machine/s;
}
# 63 "/usr/includerity; char opaque[/ppc/signal.h" 3 4
typedef int sig_atomic_t;
# 50 "/uinclud  using ::fs.h" 3 4
typedef enum {
  yset (sigset_t *);
int sigfillset (sigset_t *);
int sigismember (conschar *sk (i/include/sys/signae/ppco_t;
# 208 "/edef unsigned int sigset_t;

union s char *);


}
# 191 "/ugval_int;
        void *sigval_ptr;
};







typedef struct __siginfo {
        int si_signo;
        int si_errnusr/innt si_code;
        int si_pid;
        unsigned intp;
        r/include/gcc/darwet_and_lock_processwide_ptr(uil (char  int si_status;
        void *si_addr;
 
        union sigval si_value;
rintf;
 long si_band;
        int pt);
externint);
i char struct __siginfo_     int sc_sp;
  offctomb (char *, ::FILE;
  ct timeval *);
inng ::vsprintf# 191 "/usrin/3.3w_rangc/darwin/3.3/c+r/include/sys/signal. sv_fl __sigaction_u {
        void (* siginfsethostid (long);
int sethostname (const chin/3.3__sigaction_u {
        thostid (long);onst char *, sng);
int sethostname (const char *pe/ppc115 "/usr/id (long);
int sethostname (con +ze_t m (uid_treuid(const cha -id (uid_t);
;
        int phort[3]);
unction_u __sigaction_u;
        void t (int, int);
int sighold (int);
int sigrelse (int);
int sigpause (int)nst char *const sys_signame[32];
exst char (void);
char *mkdtemp (char *);
int mknod (const char *);
int sigrelse (int);
iid (*sv_handler)(int);
        intong _f)
{
s_signame[32]:printf;*ttynav_flags;
};
wind (FILE *);
int scanf (const char *::fgets;
  usin{
        char *ss_sp;st char *     char *,ng jrand48 (unsig
  using ::putc_t);
iong sitstack s);
pid_t vep (unsigned int);
void *vallome (char *, int);
mern int isgrap  using type" 3
exte);
pid_t vfork (vep (unf;
  using ::setvbuf;
  using 28 "/usr/include/machine/serludet (const char*,voi0int);
int unwhi
};
# 11 int rem;
} div_t;
_mask;
        int sa_);
void *valloccanf;
         vo)int);
int revoke (const char *)sa_sigaction "/usr/include/sys/unistd.);
int chown (co_t,gic {
        osi2 3
;


int getattrlist (const chai_t);
itl (convoid*,size_t,unsigned long);
ik;
        tl (contreuid long);+al.h" (const char*,void*,void*,unigned long);
int exchangedata (const char*,c int);
int rebooivoid*,unsigned long,unsigned long,void*);

int fsint);
sh" 3 4
# 1 , void *, si*,unsigned long,void*,unsign;
int;



}
# 40 "/usr/include/pthread.h" 2 3 4
# 62 "/usr/mach/mach_types.h" 1 3 4
# 64 "/usr/include/mach/mach_types.h" 3 4# 1 "/usr/include/gcc/darwin/3.3/stdint.h(char *);
int nfssvc
# 1 "/u using ::tmpfile;
  using ::t *);
cloc" 2 3 4


extern const char *const sys_sigead.h" 2 3 4
v_flags;
int);
int sigchar *const sys_siglist[32];


extern "C" {
inint_least64_t;
typedef ;
# 38 "/usr/in);
#(pid_t, int);
int sigaction (int, const  struct sigaction *, struct sigade/pthread._t;
typedef int64_t int_least64_t;
typedef uint8_t uint_leority; char opaque[(int);
int revokedef uint8_t uin(struct sigcontext *);
int sigsetmask (int);
int sigvec (int, struct sigvec *, struct sigvec *);
void psignal (unsigned int, constid;
   REGS_SAVED_ALL
} regs_saved_t;1
# 66 1"/usr/lude/ppc/signal.h" 3 4
struct sigcontexnf;
mach/houde/mactack;1
    ilude/ppc/signal.h" 3 1 "/usr/incath nfo.h" lude/unistd.h" 2 3 4

ing ::isprint;
edef unsigned int sigset_t;

union sh_types.h" 2 3 4

#*, size_t, off_t);
int rcmd (char **, int, const char *, const char *, const char *, int *);

char *re_comp (const char *);
int re_exec (const char *);
int readlink (const char *, char *nt);
int revoke (const char *);
intr/include/gcc/darwin/3.nfo.h"      int si_stade/pthread.      vd*,voi pgrp);
int setri_pid;
   usr/include/gcc/darw*, int);
int reboot (ral_t vm_offt_and_lock_processwide_ptr(et_t;






typ(int);
size_t strlen (const char *);
onst char gma Gptr;
};







::onst char_defgory *);
structt_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_lest32_t;
typedef uint sigset_t sa_mask;
        int sint_leastffset_t; (void);
char *mkdtemp (char *);
int mknod (const char *count;
        integer_t wire_count;
    def uint8_t uier)(int);
        int d*,void*,size_t,unsigned long*,unsigned long*,unsigned l, int)     );
mode_t getmode (const void *, m
# 1 "/uh" 3 4
# 1 i "/usr/includeiar *8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t ui_dat "/usr_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
t_statistics_data_t;
# 99 "/ust_and_lock_processwide_ptr(u" 2 3 4
# 73 "/usr/include/sys/signal.h" 
struct pmap_statistics {
void*,size_t,u       "/us{
     __sigacics_t;
typedef struct vm_statistics vm_statistics_data_t;
# 99 "/usr/incluteger_t zero_fill_count;
        integer_t r{
        int        integer_t pageins;
        integer_t pageouts;
        int_statistics_data_t;
# 99 "/usrt, dev_t);
int mkstemp (char *);
int mkstemps (char *, int);
char *mktemp (char *);
int nfssvc (typedef struct pmap_statistics *pmap_statistics_t;
# 6 char *ss_sp;
   /darwi# 61 "/usr/incluntrl;
  usin   int si_pid;
   olean.h" 1 3 4
include/_statistics_t;
istics {
        integer_set (void);



        integer_t activin/bits/gthredef struct vm_statistics vm_statistics_data_t;
# 99 "/usrerrno.h" 2 3 4
# 37 "/usr/include//include/mach/machine.h" 1 3 4
# 60 "/usr/include/mach/mant);
int revoke (const char *);
r/include/sched.h" 1 3 4
# 10r/include/mach/boolean.h" 1 3 4
# 127 "/usr/include/mach/boolean.h" 3 4
# iority; char opaque[4]; };


euct machine_info *machine_info_t;
typedef struct machine_info machine_info_data_t;

typedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
# 64 "/usr/include/mach/host_d.h" 3 4
# 1 "/usr/include/pthread_iuct machine_info *machine_info_t;
typedef struct machine_info machine_info_data_t;

typedef include/pthreasched.h" stringfwd.h" 3



edef struct vm_statistics vm_statistics_data_t;
# 99 "/usr/incl.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 h" 3 4
typedef struct mapped_time_value {
        integer_t seconds;
        integer_t microseconds;
        integer_t check_second


extern "C" {t mkstemps (char *, int);
char *mktemp (char *);
int nfssvc (de/mach/macger_t avail_cpus;
        vm_si
# 61 "/usr/includet_and_lock_processwimach/machine.h" 2 3, it (vconst char *,ime (time_t *);


void tzs_t, FILE *);
FIruct host_basic_info {
        integer_t m     uger_t avail_cpus;
        vm_siize_t, FILE *);
inm_size_t memory_size;
  basic_info_t;



stde/pte (time_t *);


void tzsetaquede/gcc/darwin/3.3c);
extern int isn/bi char *_aux  chaque_har *);
ch_info_donsttruct tm *gmtime_r_info machine_info_data_t;
__"/usr+/cstdC" {
char *ctermid (ccntrl (int);
int ger_t major_versionin_qu        integer_t a _Tagename _Traits = charhed_info ho({
void (*sigsys/t/c++ag {
        los/signal.h" 3 4
typedef voiin_quantum;
};

typedef struct host_sched_info host_sched_info_data_t;
typedef struct host_sched_info *host_sched_info_t;



structrraph (itrl;
  using ::isdigit;
  usit memory_regis.h" 3

# 1 "/usr/inclu{
voiong*,unsigned long);
int searchfos.h" 3

# 1 isgraph (ioritr/insys/typy_object;
};

typedef struct kernel_resource_sizes kernel_resource_sizes_data_t;
typeched_info_data_t;
typedef struct host_sched_infoesource_sizes {
        vm_size_t task;_Is_consgere_t thread;   vogra
};
# ta_t;t;
        vm_size_t memory_regst_schn;
        vm_size_ypedef semory_object;
};;

typedef struct kernel_resource_sizes kernel_resource_sizes_   integer_t minimum_priority;
        integer_t maximum_prio_info machine_info_data__type;
        cpu_sububtype_t cpu_subtype;
};
wLE *)  integer_t idle_priority;
        integer_t miad_infoo_data_t;unsigned lstruct host_sched_info *host_sched_info_t;


ft, FIL;
        cpu_subtype_t

typedef struct hostrity;
        int setgid (gqconst char *, const struct tm */gcc/darwhar *, size_t);
gid_t getegid 4
# 1 _t *);
double difftime (tist (const char*,voi0 __v, conet_priority_min(inswap(;
        in struct/c++e/ctype
# 100    in    int tm_oolean.h" 3 4ude/macht;
t *, ...);
int ex       _CurrentRuneLo getd);
int sigvec (int, st+/ppc-darwin/bits/gt


struct __sichar n {
        unnd, opterr, optopt, optresegetopt (int, char * codef struct host(int c)
uid_t geteuid (vot_t machar *, int)int isprint (;
void qsouct tm *);
ct;
typedef port_name_t 5 "/uint);
int pause (void);
infid (char *);
int initgroups (const  (pid_t _pid);
charmory_object_typ/mach/port.h" 3 4
typedef n/signal.h" 1 3 4
# 32 "/usr/include/ch/memory_oar *, const char *);
i4
typ_t;
tyef uint64_ (const *const sys_siglist[32/mach/port.h" 3 4
typedef natural_t mach_port_right_t;
e_t *mach_port_type_array_t;
# 206 "/usr/ach/port. (void);
char *mkdtemp (char *);
int/mach/port.h" 3 4
typnst char *, /usr/include/mach/memory_object_typpause (void);
inrtural_t mach_port_type_t;
typedef mach_port_type_t
# 11me (int);
int unlink (" 1 3 46 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_urefsef unsigned atural_t mach_port_right_t;
# 174 "/usr/include/mach/port.h" 3 4
typedef na mach_port_mscount_t mps_mscount;
      ruct mach_port_status {
        mach_port_nam
typedef natural_t mach_port_mscount_t;
typedef natural_t mac_port_n_msgcount_t;
typedef natural_t mach_portch/port.h" 3 4
typedef natura_t;
ty_ofl_t mach_port_type_t;
typedef mach_port_type_t *mach_port_type_array_t;
# 206 "/




typedsr/include/mach/port.h" 3 4
typedef natural_t mach_port_urefs_t;





typedef stratural_t mach_port_right_t;
# 174 "/usr/include/mach/port.h" 3 4
typedef naturaflavor_t;
# 262 "/usr/include/mach/port.h" 3port_msgcount_t mpl_qlimit;
} mach_port_limits_t;

typedef natural_t mach_port_mscount_t;
typedef natural_t mach_port_limits_t_msgcount_t;
typedef natural_t mach_port_type_array_t;
# 206 "/usr/sys/# 115ch/memory_object_types.h" 2 3 4, voypedef struct mach_port_limits {
        mach_port mach_port_status {
        mach
typedef vm_ot;

typedef integer_t *mach_port_info_t;


typedef int mach_port_fdef vm_offset_"/usr/include/mach/port.h" 3 4
typedef struct mach_port_qos {
        boolean_t 
typedef mach_port_t vm_named_entry_t;
# 6object_offset_t;


typedef mach_port_t vm_map_t;
# 4h_port_qos_t;
# 68 "/usr/include/mach/memory_object_types.h" 2 3 4_map_t;
# mps_nsrequest;
        unsigned int mps_status {
        mach_port_na" 3 4
typedef vm_offset_t pointer_t;
type;
int 65 "pedef struct mach_port_limits {
        mach_port_msgcount_t mpl_qlimit;
} mach_port_limi;



tyt;

typedef integer_t *mach_port_info_t;


typedef int mach_port_flavor_;



typedef atural_t mach_port_right_t;
#t_and_lock_processwide_pt
typedef struct mach_port_qos {
        boolean_t name:1mory_object_types.h" 3 4
typedef int memo
# 106 "/usr/include/mach/memory_object_types.h" 3 4
th_port_qos_t;
# 68 "/usr/include/mach/memory_object_types.h" 2 3 4
# 1 "s.h" 3 4_msgcount_t;
typedef natural_t mach_port_rights_t;






typedmach_port_;



typedef mach_port_t memory_object_default_t;
# ect_offset_t;


typedef mach_port_t vm_map_s.h" 3 4
typedef int memory_object_copy_strategy_t;
# 142 "/usr/include/mstrategy;
        ypes.h" 3 4
typedef int memory_object_return_t;
# 169174 "/usr/include/mach    boolean_t may_cache;
        memory_object_copy_strategy_t copy_strat_t invalidate;
};

struct old_memory_object_attr_info {
t_size_t;






typedef mach_port_t memory_object_t;
typedef mach_port_old_memory_object_behave_info {
     ned int mps_flags;
}de/ctype.h" 3 4
e  subnatud_t*,int,int,unsigned long);
int getdirentimeval;

int acct (const char:puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  usi;




nf;
  using ::setbu;
        intys_neach/port.h"atus;
    signed lonn_object_compalude/macht tm *);
char *timezo  using ::putchar;
  uint sigsetmask (int);
int sigvec (int, st *, const chask (inte/ppc/signal.h" 3 4
tyiority_max(int)fpos.int,itzset;
int r  mem class allocin c);l (cinclude/sys/sig      sa_sigaction)(include/mach/seeko (FILE *,::fwri_(wchar_t *, cean_t e/mach/vm_s  mem *, ...);
FILE *tmpocale->ruet_t cluster_size;
        t64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uinnt mps_flags;
}ect_behave_info_t;
typedef structint_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uinhave_info_data_t;

typedef structff_t);
int getdtablt mps_flfo_data_t;

typedef struct memory_object_t wire_count;
        integer_t zerohave_info_data_t;

typedef struct memory_object_int32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 68 "/usr/ct_behave_e<> str_CurrentRuneLocale;
# 69 "/usr/include/ctype.h" 2 3 4
# 100 "/usr "C" {
usr/include/mach/port.h" 1 3 4
# 91 ":tpos (ct tm *);
struct tm
# 64
# 35 "/(nclude/time.h"*, class _Cha 4
# 91   returnf int32_t fd_mask;






typ "/usr/include/ctype.h" 2 3 4
# 100 "/usr absent:1,
                        dive_inate (int, 1 3 4
# 27 "/usr/imach/port.h" 1 3 4
# 91 "/usrlhory_object_returnypedef upl_page_info_array_t upl_page_list_ptr_rhro_fill;
int us absent:1,
                        diy_objentf h115 "/usr/lent_ont getgroach/ave_info/usr/incls (unsigneckus              :0;
};

typedef struct upl_page_info upl_page_info_t;
typedef upl_page_.h" 1 3 l_page_info_array_t;
typedefobject_typt;
# 70 "/usr/include/mach/mach_types.h" 2 3 n.h" 1 3 4
# 28de/mach/    int (*_close) (void /mach/machine/exception.h" 3 4
# 1 "/usr/include/mach/ppc/exception.h" 1 3 4
# 28 "/usr/include/ory_object;
#57 "/usr/include/mach/exception_types.h" 2 3 4
# 147 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/th        absent:1,
                        diinfo_array_t;
typedef upl_page_info_array_t upl_page_list_ptr_t;
# 70 "/usr/inclmach/machine/excach/exception_types.h" 1 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exception.h" 1 3 4
# 27 "/usr/include/mach/machine/exception.h" 3 4
# 1 "/usr/incluinclude/mach/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_thar * constach/exception_typcanf (FIes.h" 1 3 4
# 56 "/usr/include/mach/exceptiingint (int);
int ispunct (int);
insigned int space (int);olean_int (int);
in r14;
       xception_types.h" 3 4
# 1 "/usr/inclme (char *, int)ude/mach/machine/exception.h" 1 3    unsigned int
                        pageout:1,
                        o.h" 3 4t[];

voi*, struct tm *);
chafo_array_t upl_page_list_ptr_t;
# 70 "/usr/incluude/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exceptchine/excelhs.       bo;
   nt);
pid_t unsigned int r20;
        unsigned int r21;
        unsigned int r22;
        unsigned int r23;
   achine/exception.h" 2 3 4
# 5igned int r26;
        unsigned int r27;
        unsigned int r28;
 r      unsignetypet r29;
        unsigned int r30;
        unsigned int r31;

        unsigned int cr;
        unsigned int xer;     unsigned int r24;
        unsigned int r25;
        unsigned i unsigned int srr0;
int r28;
        unsigned int r29;
         unsigned int r30;
        unsigned int r31;

        unsigned int cr;
        unsigned!cr_pad;
        unsigned int fpscr;
} ppc_float_state_t;

typedef struct ppsigned int ctr;
        unsigned int mq;

        unsigned int vrsave;
} ppc_thrr *f;
        unsigned int r30;
        unsigned int r31;

        unsigned int cr;
        unsignede_vrvalid
        unsigned int lr;
        unsigned int ctr;
        unsigned int mq;

        unsigned int vrsave;
} ppc_thrved_state_t;
# 148 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_exception_state {
        u        unsigned int fpscr;
} ppc_float_state_t;

typedef struct ppc_vector_state {
        unsigned long save_vr[32ved_state      unsigned int r30;
        unsigned int r31;

        unsigned int cr;
        unsigned<typedef upl_page_info_array_t upl_page_list_ptr_t;
# 70 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exceptint r28;
        unsigned intocale->maphread_state.h" 3 4
# 1 "/usr/include/mach/ppc/thread_state.h" 1 3 4
# 28 "/usr/include/mach/machine/thread_state.h" 2 3 4
# 72 "/usr/include/mach/thread_status.h" c_vector_state {
        unsigned long save_vr[32(144)];



typedef int thread_state_flavor_t;
typedef thread_state_flavor_t *thread_state_flavor_array_t;
#achine/exception.h" 2 3 4
# 57 "/usr/include/mach/excep    unsigned int mq;

        unsigned int vrsave;
} ppc_thrsr/inclu



typedef int thread_state_flavor_t;
typedef thread_state_flavor_t *thread_state_flavor_ar>h/machine/thread_state.h" 2 3 4
# 72 "/usr/include/mach/thread_status.h" 2 3 4





typedef natural_t *thread_state_t;


typedef int thread_state_data_t[sr/includeef thread_state_flavor_t *exception_flavor_array_t;
typedef mach_port_t *exception_port_array_t;
# 71 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/macc_vector_state {
        unsigned long save_vr[32r/include/mach/machine/processor_info.h" 1 3 4
# 27 "/usr/include/mach/machine/processor_info.h" 3 4
# 1 "/tion_mask_t;
typedef exception_mask_t *exception_mask_array_t;
typedef exception_behavior_t *exception_behavior_arrocale->m



typedef int thread_state_flavor_t;
typedef thread_state_flavor_t *thread_state_flavor_arrr23;
        unsigned int r24;
        unsigned int r25;
        unsigned int r26;
        unsigned int r27;
        unsigned int r28;
        unsigned intr/in4)];



typedef int thread_state_flavor_t;
typedef thread_state_flavor_t *thread_state_flavor_arr 4
# 71 "/usr/include/mach/thread_status.h" 2 3 4
# 1 "/usr/include/mach/machine/thread_state.h" 1 3 4
# 27 "/usr/include/maeserved7 : 1;
                unsigned int reserved8 : 1;
                unsigned int reserved9 : 1;
       
        unsigned int lr;
        unsigned int ctr;
        unsigned int mq;

      vior_t *exception_behavior_arrah/machine/thread_state.h" 3 4
# 1 "/usr/include/mach/ppc/thread_state.h" 1 3 4
# 28 "/usr/include/ma>r23;
        unsigned int r24;
        unsigned int r25;
        unsigned int r26;
        unsigned int r27;
        unsigned int r28;
        unsigned intion {
       unsigned int word;
        struct {
                unsigned int threshmult : 1;
                unsigned int reserved : 31;
        }bits;
}mmcr2_t;

typedef unioch/ppc/processor_info.h" 3 4
typedef union {
     served7 : 1;
                unsigned int reserved8 : 1;
                unsigned int reserved9 : 1         achine/exception.h" 2 3 4
# ned int du : 1;
                unsigned int dms : 1;
                unsigned int dmr h/machine/thread_state.h" 3 4
# 1 "/usr/include/mach/ppc/thread_state.h" 1 3 4
# 28list);
in 1 "/usr/include/mach/port.h" 1 3 4
# 91 "/usrt;
# 70 "/usr/2 3 4





typedef natural_t *thread_state_t;


type
      1 "/8;
     1 3 4
# 27 "/usr/include/mach/machine/exception.h" 3 4
# 1 "/usr/include/machread_tmach/port.h" 1 3int renor_pm_reg>/usr/in_control_cmd processor_coach/ory_object_return_usr/include/mach/port.h" 1 3 4
# 91 "/usr/ize (voi              :0;
};

typedef struct upl_page_info upl_page_info_t;
typypedef l_cmd processor_control_cmd_dat<</usr/inypedef integer_t *process strugned int lr;
        unsigned int ctr;
        unsigned int mq;
ne/processor_info.h" 2 3 4
# 66 "/usr/include/mach/processor_info.h" 2 3 4




t_control_cmd prcessor_controlgetC" {t;
typedef struct processor_control_cmd *processor_rocessor_info_data_t[(1024)];


typedef integned int r1delim" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/024)];




typedef int processor_flavor_t;





struct processor_basic_info {
        cpu_type_t cpu_type;
        cpu_subtype_t cpn.h" 1 5E *);
int feof (FILE *);
int ferror (FILE *, charclude/ppc/types.h" 3 4
typedef signedalgorithm const ched char u_int8_t;
typedef short intoad_info pr"/usr/include/machine/types.h" 1 3 4
# 30 "/usr/;
inoad_*, const char *, ...);
int fputc (int, FILE *);
int fpuusr/inclrunetype_ext;
        _RuneRange maplower_ex;
inheap*, const chin/3.3/assert.h" 3 4
extern "C" {
extern voi    int LE *);
size_t fread (essor_info.h" 2 3 4
#RandomAccessE *);
FILEh" 3 4
extDistanceel/libgist/srtin_va_list);
in__# 1 "    (et_basic_info_data_t;c/darwin/h/boolean.h" 2 3 4uct proc __holeIndeusin       int top_count;
Tp __ char ommand line>"
       int     ntLE *f task_counio" 1 /nt);
fpos_o.h" 3 4
ger_t macht sscthread_usin*32_t;
typ;
        mr :
       ef u_int8_t processor_settask_coun)f (cprocessor_set_load_ize_t,unsignuct processt);
i     _info_t;
# 7        integer_t mach_factor;
};

typftello (ruct processor_set_load_inf
      on.h" 1 3 4
# 27 "/usr/includet_basic_info_data_t;   processor_pm_regs_d_set_basic_info_t;





struct processore/mach/policy.h" 1 3 4t.h" 3 4
type  unsigned int re_t task;
        vm_size_mach/policy.h" 1 3 4
::isgraph (iory_pageout;Vdef.T (int);


int digittoint (inase_t;
typedef integer_t *policy_limit_tt tolower (int)ory_pageout;uct procpolicyject_ty {
        intsor_set_basic__t;
typedimeshare_lim( ppcant16_t_name_dio" 1uct policy_times0ong*,unsigned long);
/mach/poli(o *pe_info 1) strtoff" 3 4
# 1 "/usr/include/mach/policy.h" 1 3 4
typedef struct processor_set_basir_set_load_inf"/Users/jmh      c_info *processor_set_basic_info_t;





struct processor
        int task_count_set_load_info {
        int  thread_count;
      gned      tatiomin_va_lier_t load_average;
        integer_t mach_factor;
};

typedef struct processor_set_load_info*policrity;cessor_set_load_i  in char ;
typedef struct processor_set_load_info *processor_set_load_info_t;
# 73 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_info.h" 1 3 4
# 66 "/usr/include/mach/task_info.h" 3 4
# 1 "/usr/include/mach/policy.h" 1 3 4
typedef strlicy_timeshar"/usr/include/mach/policy.h" 3 4
typedef int policy_t;
typedef integer_t *policy_infoolicy_timeshare_are_info *policy_timeshare_integer_t *policy_base_t;
typedef integer_t *policy_limit_t;
# 108 "/usr/include/mach/policy.h" 3 4
struct policy_timeshare_base {
        integer_t base_priority;
};
struct policy_timeshare_limit {
      ger_t max_priority;
};
struct policy_timeshare_info {
        integer_t max_priority;
        integer_t base_priority;
        istatilicyteger_t cur_priority;
        boolean_t depressed;
        integer_t depress_prioritc_info *processoradjusttimeshare_base_t;
typedef struct policy_timeshare_limit *policy_timeshare_liload_average;
printf (;
        integer_t load_average;
et_load_iach/task_counbtree.cc"       int t, intChildva_ltrtolger_t mach+r;
};

typedef struse_priority;fo_d (coutchar;
  usingo *processor_sse_prioritymr :o *processor   integer_t de    inory_pageout;
se_priority--       intruct processor_set_load_info *processor_slicy_fifo_ba_info_t;
# 73 "/usr/includse_priority_info_t;
# 7se_priority;
        integer_t deexter/task_info.h" 1onst che_priority;
ach/s_priority;
};
ruct processor_set_load_info *processor_base_t;
typedef strnfo_t;

typedef struct policy_fifo_baef s_fifo_limit poliax_priority;
};
struct task_count;
def struct pcy_timeteger_t cur_priority;
        boolean_t depressed;
        intd setbuffer (FI *processor_op policy_rr_info {
        integer_t max_priority;
        integer_t base_priorityypedef integer_t *policy_adavg count;
        integer_t lo4
struct policy_timeshare_base {
        integer_t base_priority;
};
str integer_t_fifo_li*uct polif (cy_times    unsigne {
        iuct policy_timeshrity_data_t;
tyare_info {
      _base_data_t rr;
        policy_fifo_base_data_t fifo;
};

s_t max_priority;
};
strmeshare_limit_data_t ts;
        policy_rr_limit_data_t rr;
       er_t quantum;
        boolean_t depressed;
        integer_t depress_priority;
};e/mach/policy {
        integer_t max_meshare_l_t;
typedef u_ef sount;
        vbase_priority;
        integer_t cur_priority;
        boolean_t depressed;
        integer_t deon __sigactiress_priorityf struct policy_timeshare_base *pole {
        integer_t base_priority;
};
struct policy_fifo_limit {
        integer_t max_priority;
};
struct polshare_info *policy_timeshare_info_t;

typedteger_t max_priority;
        integer_t base_priority;
        boolean_t depressed;
        integer_t depress_priority;
};

typuct policy_timeshare_licy_fifo_ba, *policy_fifo_base_t;
typedef struuct policy_fifo_limit *policy_fifo_limit_t;
typedef struct policy_fifo_info *policy_fifo_info_t;

typedef struct policy_fifo_base policy_fifo_base_data_t;
typedef struct policy_fifo_limit policy_fifo_limit_data_t;
typedef struct policy_fifo_info policy_fifo_info_data_t;
# 208 "/usr/include/mach/policy.h" 3 4
struct policy_bases {
        policy_timeshare_base_data_t ts;
        policy_rr_base_datdef struct policy_rr_info policy_rr_info_data_t;
# 176 "/usr/include/ma  policy_t policy;
};

type{
        policy_timeshare_limit_data_t ts;
        policy_rr_limit_data_t rr;
        policy_fifo_limit_data_t fifo;
};

struct policy_infos {
  share_info *policy_timeshare_inimeshare_info_data_t ts;
        policy_rr_info_data_t rr;
        policy_fifo_info_data_t fifo;
};

typedef struct policy_bases policy_base_data_t;
typedef struct policy_limits polict_and_lock_processwidach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_policy.h" 1 3 4
# 37 "/usrinteger_t max_priority;
};
strmeshare_limit_data_t ts;
        policrtofflags (chaax_priority;
        integer_y;
        integer_t quanfo *policy_rr_ *task_info_t;


typedef integer_t task_info_data_t[(1024)];







struct task_     integer_t suspend_count;
        vm_size_t virtual_size;
        vm_sidef struct policy_rr_info policy_rr_info_data_t;
# 176 "/usin_va_list);
inmakeolicy.h" 3 4
typedef int policy_t;
typedef integer_t *policy_info_t;
typedef integer_t *policy_base_t;
typedef integer_t *policy_limit_t;
# 108 "/usr/include/mach/policy.h" 3 4
struct policy_timeshare_base {
        integer_t base_priority;
};
struct policy_timeshare_limit {
        integer_t mchar *,_info {
      < 2)chine/e        integer_tpoliiltin_va_sic_info {
     e_t user_time;
        t        inteegy;- 2)/2lude/stdio.h" 3 y_inriority;
};
licy_bases policy_base_du_usagete;
   virtual_size;
   cessor_set_load_iude/mach/pol;
            h/meme_value_t userpes.h" 2 3licy_fifo_ char *       TASK_CONTROL_APPLICATION,
        TASK_GRAPHICS_SERVER
};

typedef enum task_typedef int task_special_port_t;
# 76 "/usr/include/mach/mach_types.h_t base_priority;
        integer_t quantum;
        boolean_t depressed;
        integer_t depress_priority;
};

typedef struct policy_rr_base *policy_rr_base_t;
typedef struct policy_rr_limit *policy_rr_limit_t;
typedef struct policy_rr_info *policy_rr_d_basic_info {
        time_value_t user_time;
        time_value_t system_time;
        integer_t cpu_usage;
        policy_t policy;
        integer_t run_state;
        integer_t flags;
      t_and_lock_processwide_ integer_t suspend_count;
       def struct polir_t sleep_time;

};

typedef struct thread_basic_info thread_basic_info_data_t;
typedef struct thread_basicin_va_list);
insor       integer_t base_priority;
};
struedef integer_t *policy_info_t;
type{
        integde/stdio.h" 3 4
e_info {
      > 1uct policyeger_t suspend_count;
  --ATION,
        TASK_CONTROL_APPLICATION,
        TASK_GRAPHICS_SERVER
};

tyude/mach/thread_policy.h" 3 4
struct thread_time_constraint_policy {
        u_t base_priority;
        integer_t qua
        uint32_t computation;
        uint32_t constraint;
        boolean_t def struct policy_mpnamed char u_int8_t;
typedef short int16_t;essor_set_fle runetype_ext;
        _RuneRange maplower_ex;
in(__sbuf*, const char *, ...);
int fputc (int, FILE *);
int fpunce_policy um (char *, char *, 7_precedence_policy_t;
# 78 "/usr/include/mach/mach_types.d *, size_t, size_t, FILE *);
FILE *freopen (const ch_T, __builtin_va_;
typinclist);
int aM_orig        cy_t6 "/usr/inclulock_ty
int __sin_va_s/types.h"nclue_t;
tyetin_va_lriority;clude/mach/cloc *, chlock_ty int in_va_ (consicy.h", size, ...)list);
int)printf (char **, const char *, __b *clocka_list);
}
# 298 "/usr/include/sto.h" 3 4*clock_a0riority;
}ck_flavor_t;*fdopen, const    cloo (FILE *);
}






ex int *cin_va_uct policybreakcy_t;
# 7*clock int);
fpoh" 1sic_iedef intinitial15;
in_va_lhar *strca   po_info {
 ale.h" 3 4
m_attributes.h" 1 3 4
# 70 "/ust ch 1 3  kernel_reeshare_unttributes.t_nall_port_in_va_/mach     vport.h"}
/darwin/3_types.h" 3 4(void);
uid_t geteuid (volocklude/mist);
int requestedvoid);
pid_t getppid (volude/mach/clocklude/m std
fopen;
 usr/include/_type_t1 3 4
# 69 ead;
 clude/mach/vm_inhesetuinclude/machh/clock_types.h"  size_t, FILE *);
inint);
ssize_t, FILE *);
in, voir/includ     unsigned int rd_setor_versiTp>::int trivial8_t;avg (d_info hor *, consmid (chah" 3 4typedeftryes_t tv_nsect;
typdstruct pol 4
# 62 "/usr/iypes.h" 2  sleep_type_t;
typec_t;
# 82 "/uextern "C" {
charm_attributes.h" 1 3 4ypedef sarray" 3 4 *);
stru char cr/inc.../include/gcc/darwint vss/usr/inclze_t,unsignedflavor_t;
tyid endusershemespclude/mach/nt32__fifo_limit sic_i~/usr/include/mach/ypedef inD.3/c++/b/vm_attributet vm_inherit_t;.h" 1 3e/mach/vm_sync.h" 1def in/3.3/c++//usr/include/mach/har *str, __builtin_va_&ow (std::bad_alloc);id perror edef int *vm_region_i
}
#mpnam, int (*)(void *, const char *, intlicy thread_precedenc_len;
} _RuneLocale;
8h/processor_info.h" 3 4
typedef int processor_set_flavchar *, __builtin_va_list);max;
       _builocessormedia.h" 2 3 4rom_v(a
char *strcat (b
char *strcat (  sigse/include/cy thread_exaepresbuct policychar *bepres  sigset_ 1 "/usr/inclbus;
        voerit_t inherit shared;
        bool_btree.cc    void *si_addr/usr/inclalude/macved;
        vm_object_offseavior;
        unsigned shortolean_t shared;
 t offset;
          void *si_ad     boolean_t r, conse_t strlcpy (char *, const char *, size_t);
nfo_data_t[(1024)];



struct vm_nclude/mach/task_policy.h" 3 4
#c_info_64 {
        vm_prot_t protection;
        vm_prot_t max_protecpedef struct task_category_policed;
        integ_size__b integer_t an_t reservedbstatiscode;
        int silean_t reserved;
      eserved;



       vm_behavior_t be
        vm_behavior_t behavior;
        unsigned shorted short user_wired_coun_info *vm_region_basic_info_t;
typedt;

        vm_bevm_region_basic_info_64_t;
typedef struct vm_region_5 (char *);
int ungetc (int, FILE *)_region_info_data_t[(1024)];



struct vach/machipolicy_t polFint cge const ges_resih/vm_ror_eainclach/machie (int);
ssize_t preedef u_intges_resi3 4
tion;
        vm_inheault. h" 1      ude/gatiousr/in      ger_t run_sf# 86 "/us/mach/machine/excesetegid   exit gned int user_tag;
        unsigned int pad setbuffer (FIges_sharedh/vm_r_portes_shared_now_private;
        unsignon __sigachar *strcat (vm_mon __sigac_type;
        cpu_t;
typedef ino.h" 3 4
t pages_dirtiedusin!# 86 "/usa_t;
t3 4
nsigned in        u        unsigned sinfo {
   hadow_depth;
        unsigned char external_pager;ts/os_defin     unsigned char share_mode;_if
};

typedef struct vm_region_extended_info *vm_rtype node_kindsread_{
        booldef struct vm_region_extended_info vm_region_extended_info_da;
};

ef_count;
 vm_region_top_info {
        unsigned int obj_id;
        unsigned int ref_t_basic_info_daternal_pager;
        vm_region_submapare_mode;
}t_basic_info_datead_time_constraint_policy xtended_info *vm_region_extended_info_t;
typer_basi_a_infotruct vm_region_extended_in policy_timeshare_base {
        integer_t rr;
        policy_r.h"p_couer_size;
 ;
     _info {
       >>nt);      unsigned in_now_privaock_ ; -- unsigned inriority;
};

type_t;







struct    unsigned int obj_*, consned int  unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned char external_pager;
        unsigned char share_mode;
        boolean_t is_submap;
        vm_behavior_t behavior;
      # 1 "/usr/includwi/inclnsigned int pagesshare_incase 3tpos (FIfset_t object_id;
        unsigned short user_wired_count;
};

typon_su2map_info_t;
typedef struct vm_region_submap_info vm_region_submap_info_data_t;
1map_info_t;
typedef struct vm_region_submap_info vm_region_submap_info_data_t;
0tpos (FItypedefmap_info_tnt r28;
  ied;nfo thread_basicad (void *, siz3 4
struct vm_region_submap_info {
    ed int private_rot_t protection;
        signe_prot_t max_protection;
        vm_inherit_t inheritance;



har share_mode;
};

typedef struct

        unsigned int user_tag;
        unsigned int pages_resident;
        unsigned int pages_shared_now_private;
        unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned intregion_top_info v  unsigned short shadow_depth;
        unsigned c_wired_count;
};

typedef struct vm_region_submap_info_64 *vm_region_submap_info_64_t;
typedef struct vm_region_submap_info_64 vm_region_submap_info_data_64_t;





struct vm_read_entry;

typedef struct vm_region_submap_info *vm_region_submap_info_t;
ty_address_t address;
        vm_size_t size;
};



typedef sa_t;






struct vm/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/kmod.h" 1 3 4
#_prot_t max_pro/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/kmod.h" 1 3 4
#et_t offset;
        unsigned int user_tag;
        unsbs (its/c++config.h" 2 3
# 65 "/usr/include/gcc/      unsigned int user_tag;
        unsigned int pa
        unsigned char share_mode;
};

typedef struct vm_region_extended_info *vm_region_extended_ition;
        vm_inh const cha4
# 66 "/usrt;
typedef u_inted_inach/     integer_t acop_info v vm_region30.h" 3 4
# 1 "/usr/include/mach/ppc/kern_return.h" 1 3 4
# 135 "/usr/include/mach/ppc/kern_returned int private_pages_resident;
        unsigned int shared_pages_resident;
        unsigned char share_mode;
};

include/mach/kern_return.h" 2 3 4
# 35 signeusr/include/mach/k};

th" 2 3 4
# 54 "/usr/include/mach/kmod.h" 2.h" 3 4
# 1 "/usr/include/mach/ppc/kern_return.h" 1 3 4
# 135 "/usr/include_t, FILE *)dent;
  t, FILE *)pedefadjaconstode;
}mod_info {
3 4
# 1 "/usr/include/      uint32_t period;
struct thread_basi;







st, void *, sizened int user_tag;
   _info *next;
  nex;

ted short shadowo.h" (epth     s_dirtied    unsigned int ref_count;
*ce_lis     vm_behavior_t be short shadow_d64];
           _fifo_limit polined int user_tag;
 rwin/5asic_info_64 vm_region_basic_info_data_64_t;





struct vm_region_basic_inmod_info {
policy_t polBoup_fared_now_privatemod_info {
        struct kmod_info *next;
        int info_version;
   {
        integer_t od.h" 3 4
typed behoup_fr_t;
# 73 "/usr/include/mac char name[64];
        char version[64];
        int reference_count;
        kmod_reference_t *reference_list;
        vm_address_t adstruct kmod_l# 86 "/usr/   vm_siize_t size;
        vm_size_t hdr_size;
        kmod_start_func_t *start;
        kmod_stop_8nsigned long, char *, long);
int mergesort (rn.h" 1 3 4
# 135 "/usr/include/mach/ppc/kern_return.h" 3 4
e_t task;
        vm_size_t  (void)e_priority;
};
struct pprivaages_shared_now_private;
        unsigneegion_extended_i    integet id;
        char 
int iscntr_port_t ipc_space_t;
typedef mach_port_t host_t;
me_t *pclude/macnsigned int pages_dirtied;
        unsigned in int ref_count;
         inteadow_depthue_t uservior_t beue_t us);
si1ad_info *processor_cpu_load_info_t;
# 118 "/usr/inclor_t;
typedef void* kmod_args_t;



typedef struct kmod_refmach_port_t ipc_space_t;
typedef mach_port_t host_t;
typedef masigned int shared_pages_resident;
        kmod_reference_t;
# 73 "/usr/include/mach/kmod
typedef mach_port_t processor_set_t;
typedef mach_port_t processor_set_control_t;
typedef mach_port_t semaphore_t;
typregion_top_info vm_region_typedef mach_port_t ledger_t;
typedeended_info {
        vm_prot_t protection;
        unsigned int user_tag;
  mod_info {
1igned int pagt, FILE *)2ef struct kmod_loa1tree"
earincl_t;
typedef ize;
      v_t *processor_sser__size_t memoryread_t *threaize;
   ost_basic_info_e_arser_r/includef mach_port_tencies_c_cmd {
        int ower;
 essor.3/c++ray_t;t_array_t;ntrl;
  usi        vm_siz1k_basic_iessor_set_name_artervedray_t;.h" 1 3 4epthfile (void) "C" {
char_t *ledger_array_t;
# 156  35 "/usr/in   vm_siz1   inedef tasklude/mach/mach_types.h" 3p   vmpde/gcc/dar_pach/horay_t;usr/inpnclue/mach/mach_types.or_scur      i"/usr/included_info vm_region_e3
# 37 read_nteger_t run_sead_act_ypedef thread_t thread_port_t;
typede    vm_offset_ead_act_array_t;
     vm_behavior_t beread_class allocaerr;
  u {
      cesst host_name_t;
typedphore_t;
typeptht host_navalue_t t;
typedef processor_set_array_t proceo.h" 3 *essor_set_conhr-driority;
};
t_t procesarray_t task_port_array_t;
# 156 "/usr/incly_t processor_portsor_set_control_port_t;
typede*start;
       t_port_t;
t.h" 3



naepth;
    {
        policyct_t thread_act_port_ssor_st char* __s);

  void
  __throw_overflow_err_types.h" 3 4
typedef task_t *task_array_t;
typedef thread_t *threalude/mach/kmod.h" 3 4
d_array_t;
typedef processor_set_t *processor_set_array_t;
typedef processor_set_t *processor_set_name_array_t;
typedef processor_t *p_set_t *procesod.h" 3 4
mod_stas_defrocessor_array_t;
typedef thread_act_t *thread_act_array_t;
typedef ledger_t *ledger_array_t;
# 156 "/usr/include/mach/mach_types.h" 3 4
typedef task_t task_port_t;
typedef task_array_t task_ef u_int8_t_t host_name_port_t;
typedt vm_regions_deft ref_cou_port_t;
typeef mach_port_t iport_t;
typede_set_t lock_set_port_t;win/bits/gthrarray_t thread_port_array_t;
typedef ipc_space_t ipc_space_port_t;
typedef host_t host_name_t;
typedef host_t host_name_port_t;
typedef processor_t host_name_port_t;
typedef processort sleep_tnclude/pthread.h" 2 3 4
# 74 "/usr/includeh/mach_types.h"lude/pthread.h" 3 4
extert[3]);
unh/mach_types.h" 2 3 4
# 45 "/usr/include/pthread.h" 2 3 4
# 74 "/usr/include/pthread.h" 3 4
exteocessor_set_name_port_t;
typedef processor_set_array_t processor_set_name_port_array_t;
typedef processor_set_t processor_set_control_poref processor_t processor_port_t;
ct timezone {
 t host_   inpeshare_limit_essor_port_array_t;
typedef thread_act_t thread_act_port_t;
typedef thread_act_array_t thread_act_port_array_t;
typedef semaphore_t semaphore_port_t;
typedef lock_set_t lock_set_port_t;
type9m_region_recurse_info_t;
typedef int *vm_region_recukmod_info_array_t;
# 134 "/usr/include/mach/kmypedeap_info {
        vm_prmod_info {
     ssor_smach      int type;
        char name[64];
} kmod_load_exteone *);
ruct uonst 3 4
# 65 "/usr/include/mach/kern_return.h"_cmd {
       ed intr/include/gcc/        vm_size_t hdr_ved;
 processor_set_t rocessor_set_poclude/mach/kmodor_set_t prfo vm_region_extended_inct timeval *, ead_attr_dee_valued intes {
      mach/mach_types.
typedef u_int_port_t;
typeptharwin/3.3stdio.h" 3 4
ixtended_info_dhedpr *finfo *,unsach/tasct timeval *, 

int pthread_attr_ s_dir    void *);
 **, u_long t char *};

ton __sigaction_u __s vm_size_t hdr_si    void *si_addrsize;
      6 "/usri (const pthread_attr_t *atrt[3]);
unsigned e/mach/machine/kern_retu6       return !!(__maskrune(c, f));
}

st settimeofday (const struct timeval *, const struct timezone *);
int utimes (co_t system_time;

      lock_serv_port_t;
typedef clstruct timeval *);
}
# 169 "/usr/include/pthread.h" 2 3 4




int pthread_attr_destroy (pthread_attr_t *y_policy {
     y_t;
# 198 "/ruct kmod_load_with_dependencies_cmd {
       onst pthread_attr_t *attr, int *detachstate);

int pthreatr, int *inheritsched);

int pthread_at kmod_generic_cmd {
       struct vm_region       int tz_dsttime;
};
# 14 "/usr/include/sys/time.h" 3 4
strt;
        vm_address__attr_getschedparam (const pthread_attr_t *attr, struct sched_param *param);

int pthread_attr_getschedpolicy (const pthread_attr_tod_generic_cmd {
ze_t ruct olicy);

int pthread_attr_getstackaddr (const pthread_attr_t *attr, void **stackaddr);

int pthread_attr_getstacksize (_t pgrp);
int sgetschedpolicy (consad_setcanceltype *attr, void *stackaddrint pthrea pgrp);
int setre   int tz_dsttimet pthread_attr_getstack **, u_long *,ze;
        pthread_attr_rt[3]);
unead_attr_getstack (const pthread_attr_t *ast void *, const void *));

int randmach/mach_types.h" 3 4
typedef task_t *task_array_t;
typedef thread_t *thread_array_t;
typedef2egs_data_    chset_t *processor_set_array_t;
typedef processor_set_t *proceattr_t *attr, stre_array_t;rocessor_array_t;
typedef thredef thressor_set_control_t;
tort_t;
typed;
        ulude/gcttr_t *attr)d long,u_btype_thread_t thedef task_t tasnt pthread_att "/usr/in# 73ef ledger_t ledger_port_t;
typedef ledger_array_t ledger_port_array_t;
type      unsigned int paOE *, /include/mach/kmU**);e.h" 2 3
# read_d *arg);

ude/macansformned int shared_pages_resident;
        unsigned chart thread);
inruct policy_d_detach (pthr _ar *, so shared;
        boolef thread_nsigned int pages_dirtied;
        uude/gcadavg ad_cond_t  fifo;
};

tead_t, intef_count;
        unsigned adavg ed);

int p
typedef struct thread_precedence_policy thread_precet *attr, void *(*start_routine)(;
typedef thrypedef malock_serv_t cd *arg);


 (pthread_attr_t *attr, int ach (pthread_t thread);
int pthread_equal (pthread_or_set_array_ex, int *priopthread_condattr_destead_mutex_d_array_t;
tyd *value_ptr);
int pthread_exit (voimutex_getprioce, int *oldnt);
int pthread_sigmasgetpshared (const pthread_condattr_t *attr, int *pshared);

int ptgwait (const sigset_t *, int *);
inthread_mutthread.h" 2 3 4
# 74 "aram (pthread_t thread, int *policuct itimerval *, struct itimerval *);
int settimeofday (const struct timeval *, const struct timezoltin_va_list);
int  1 "/us      int type;
        char name[64];
} kmod_load_exthar *strcat (oldedef nathar *strcat (newrity_t;
typedef mach_port_t procesred (const pthread_condypedef mach_port_t semaphore_t;
typedef mach_portutexattr_ad_cond_t *c ref_count(const pthreort_t;
typ82, struct sched_param *param);


int pthread_join (pthread_t thread, void **4 "/usr/include/mach/kmts/os_def
int pthread_mutexattr_getprioceilinsigne      int type;
        char name[64];
} kmod_load_extens share_mode;
};

tetprotocol (const pthread_mutexattr_t *attr, int *protocol);

int pthread_mutexattr_getpshared (const pthreadk_entry_t;
typedef mach_port
int pthread_mutexattr_gettype (c5ct itimerval *, struct itimerval *);
int settimeofday (const struct timevalroutine)(void *), void *arg);



int pthrea    vm_prhread);
int pthid;
    4
# 1 (pthread_t t1, pthread_t t2);

void pthread_exit (vo(void *value_ptr);
int pt_and_lock_processint pthread_mutexattr_getprotocol (const pthread_mutexattr_t *attr, int *protocol);

int pthread_mutexattr_getpshared gwait (const sigset_t *, int *);
i_mutexattr_t *attr, intusr/inst pthre :typedef struct pohread_t thread, int *poli88asic_info_64 vm_region_basic_info_data_64_t;





struct vm_region_basic_inroutine)(void *), void *arg);



int pthrea;
int pthrt system_time;

        );
int pthread_setschedparam (pthrsigned int shared_pages_resident;
        unsigned charr_destroy;


int pthread_key_create (pthread_kettr_setprotocol (pthread_mutexattr_t *attr, int protocol);

int pthread_mutexattr_settype (pthread_mutexattr_t *attrgwait (const sigset_t *, int *);
intgion_top_info (pthread_key_t key);
int pthread_attr_getscope (pthread_at9basic_info_64 vm_region_basic_info_data_64_t;





struct vm_region_basic_in4 "/usr/include/mach/kmGend);



char list);
ingnt pthng (const pthread_mutexattr_t *attr, int *pr;
int pthreonst const chh_dependencies_cmd {
 nsigned int pages_dirtied;
        unsigned in
int pthread_get,unsigneead_r4ef ledger_t ledger_port_t;
typedef ledger_array_t ledger_port_array_t;
typed *arg);



int pthreaS;
intt *attr);
int pthread_rwl pthread_setscheestroy (machd *value_ptr)sched (cmach_flags;ckattr_getpshared (const pthreprotocol);

int pthlock_es_dirned);

int p_rwlockattr_setpshared (pthread_rw     unsigned int obj_id# 96.h" 3 4
# 1 "/usr/include/mach/ppc/kern_return.h" 1 3 4
# 135 "/usr/include/mach/ppc/kern_returnead_t pthread_self (void);
int pthread_setschedp (*_(pthread_t thread, int policy, const struct sched_param *parathread_rwlockattr_t *t_t host_security_t;
typedef mach_port_t procesrotocol);

int pthread_mutexattr_getpshared (const pthreadata_t;







strucimeshare_limit__t fifo;
};

typedef struct pot pthreahread, int *pedef lock_set_t lockhread, int *poli10LE *popen (const char *, const char cope (pthread_attr_t *, int);
int pthread_getconcurrency (void);
int pthread_setconcurrency ate_suspended_np (pthread_t *threk);
int pthread_rwlock_init (pthread_rwlock_t * rwlock, const oid *), void *arg);


mod_reference_t;
# 73 "/usr/include/mach/kmoinclude/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 2_wired_count;
};

y_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mut3;
typedef kern_return_t kmod_stop_func_t(struct kmod_info *ki, void *data);

typedef sint utimes (const char *, const strucead_t mutexattr_t *attr, int prioceiling);

int pthread_mutex
void pthread_yield_np (void);

}
# 38 "/usr/include/gd_attr_getinheritsched (const pthreadata_t rr;erence_count;
    sched_param *paramnt pthread_att_control_pusr/ied innt);
int revoke (const char *);
:read_t *threaint pclude/mach/k);

int pthrata_t rr;
 _mutwin/3.3/assert.h" 3 4
extern "C" {
extern voiint pthread_mutexattr_init (pthread_mutexattr_t *attr);
int ptht key, void *ptr)
{

  if (ptad_mutexattr_t *attr, int prioceiling);

int pthread_mutexattmod_reference_t;
# 73 "/usr/include/maclete (__gthread_key_tedef kern_return_t kmod_stah/vm_prot. (key);
}

static inline void *
__gthread_getspecific (__gthread_key_t key)
{
  return pthread_getspecific (key)sign
}

static inline int
__gtead_dat   unsigned utex_t *mutex, const struct timespec *reltime);




iead_t thread);
int pthead_iqu (pthread_t thread, int policy, const struct sched_param *parampthread_rwlockattr_t *attr);

int pthreadLE *, const char *,ed (const pthredef mach_port_t exception_handler_t;
t)];







s_key_t 
typedef struct po*, int *);
intxattr_gettyread_condepth;
   t;
        r-default.h" 2   typedefoid *pthree
    return -1  typedef long streamoff;
hread__gthread_ ptrdiff_t streamst ftello (FILE *)__gthread_once_t   exit (ined int user_tag;
        unsigned int pag
typedef struct kmod_info {
     tex_unlock (mutex);
  else
    return 0;
}
# 99 "/usr/include/gcc/darwin *attr, structttr_t *attr);

int pthreadpu_load_info_data_t;
/darwin/3.3/c+ fifo;
};

typedef struct poize;



  typedef fpos_t __c_streampos;

  fifo;
};

__gthread_mu __c_file;


  struct __iy);
int pthread_attr_ge_int_type;

    stcons4, struct sched_param *param);


int pthread_join (pthread_t thread, void **value_ptr__gthread_active_p ())
    r unsignehread);
int pthx_unlock (mutex);
  else
    return 0;
}
# 99 "/usr/include/gcc/darthread_rwlockattr_t ternal = 0x001func) (void))
{
  if (teger_t *policy_base_t;
typedef intive_p ())
d;
        vm_size_t aque task_bchar name[64];
        char _attr_getscope (pthrea
__gthread_x_unlock (mutusr/include/mach/kt policy_;
    stmach/mach_tcons7nded_info {
        vm_prot_t protection;
        unsigned int user_tag;
        unsigned int pad *arg);



int pthreaod.h" 3 4
typedef struturn pthread_mutex_unlock (mutex);
  else
    return 0;
}
# 99 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr.h" 2 3
# _cmd_t;

typedef struct kmod_l/bits/gthr.h" 2 3
# 38 "/usr/include/gcc/darwin/3.3/cct host_loa/ppc-darwin/bits/c++io.h" 2 3

namespace std
{

  typedef long streamoff;
  typedef ptrdiff_t streamsize;



  typedef fpos_t __c_streampos;

od_generic_cmdpedef natgthread_mutex_t __c_lock;


  typedef FILE __c_file;


  struct __ios_flags
  {
    typedef short __int_type;

    stcons9.h" 3 4
# 1 "/usr/include/mach/ppc/kern_return.h" 1 3 4
# 135 "/usr/include/mach/ppc/kern_return4 "/usr/include/mach/kmod.h" 3 4
typedef struct kmod_load_ext0;
    static cic const __int_type _S_fixed = 0x0004;
    static const __int_type _S_hex = 0x0008;
    static const __int_type _S_ate = 0x02;
    static const __inst __int_type _S_internal = 0x001r_np (pthr;
    static const __int_type _S_left = 0x0020;
    static const __inod_generic_cmd {
t policygthread_mutconst __int_type _S_right = 0x0080;
    static const __int2thread_create (pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);



int pthreaod.h" 3 4
typedef strwpoint = 0x0400;
    static const __int_type _S_showpos = 0x0800;
    static const __int_type _S_skipws = 0x10olicy_timeshare_limcmd_t;

typedef struct kmod_load_with_dependencies_cmd {
 nitbuf = 0x2000;
    static const __int_type _S_uppercase = 0x4000;
    static const __int_type _S_adjustfield = 0x0020 | 0x0080 | 0x0010;
    static const __int_type
_S_basefielate = 0x02;
 eld = 0x0002 | 0x0040 | 2sor_count;
        int default_policy;
};

tyuct kmod_info *ki, void *data);

typedef struct kmod_info {
     x_unlod_info *next;
        int info_version;
        int id;
rocessor_t;d))
{
  if (read_attr_t *a   struct kmod_sr/include/mach/vm_prot080 | 0x001
    static const __int_type _Sount;
      type()9 UNDServerRef;
# 141 "/usr/include/mach/mach_types.h" 3 4
typedef task_t *task_array_tlude/mach/kmod.h" 3 4
typedef struct kmod_load_ext   operator+=(streamoff __off) { _M_off += __offion_port_arrary_t;
# 198pedef struct kmod_load_with_dependencies_clete (__gthread_keamoff __off) { _M_off -= __o__off, __state_x_t *mutex);
int
      fpos
      operator+(streamoff; }

      bool
     static const __int_type _S_booBidiret cgeal ())
    r *processorecl (co(     _M_position()ine int
__g
      void
      _M];
} kmod_load_extension*cond, co   _M_positisr/include/gcc/darwin
int pthread_cond   in        int pad[7];getspecific (__gypedef ledoct _dir, void *, size_act_port_array_ *);
int setpgrp (pid_t pid, pid_condattr_setpshared (++lude/mach/vm_prstatic const __int_type _S_boont;
        unsigconst { return _M_off; }
wapped_out;
        unsigned int pages_dirtied;
        unsignedstd
{

  void


        unsigned int user_tag;
       d_info vm_region_express/darwin/3.3/c++/bwin/3.3/c++/bits/funce/gcc/dar __off)
   /bits/c++config.h" 2 3
# 65 "/usr/include/gcc/join (pthread_t thread, void **    _M_position() const{
        policyM_off; }

      void
      _M_position(streamoff __off) { _M_; return *this; }

ory_pageout;
}_off; }
usr/include/mach/k2 3 4
# 54 "/usr/include/mach/kmod.h"13/include/mach/thread_special_ports.h" 1 3 4
#const char* __s);

  void
  __throw_domain_error__gthread_active_p ())
    return pthread_muecl (con4
# 1 
      void
      _M_position(streamoff __off) { _M_off = __off; }
    };


  tyt_type _S_skipws = 0x1000;
    static const _ef host_t host_name_pt;
        vm_address_e/gcc/dacy_fifo_limfifo;
};

typeser_tag;
   t __gthread_once_t;
ftello (FILE *)utex_t __gthread_mu3de/gcc/darwin/3.3/c++/ctime" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/ctimeEuclideanRingE char ead_t t
  template<typenameconst chcd(T, typename _Traits =    ,rT, typename _Traits =

int profended_info vm_regead_atnteger_t run_istream;

  template<ty __iosmlude/ struct thream         void *)hedparamd_start_func_t *start;
   mhort shadow_depth;
        unsignedstatic const __in { return _Mo, fd_sinfo *next;
        4




int pthre *attr, structmiddlet_and_unlock_pr          typen];
} kmod_load_extennst __int_type _S_internal =cy thread_/c++/iosfwd" 2ame _A *sigregion_sts = char_trad_attr_t *attr,ace_port_t;
typedef hedef ledger = char_t_port_t;doef u_int8_t 1 "/rt_t;
tyfuncrt_t;
typ++or_set_t processor_set>,
          x_t __c_lock;ame _Aname_t;
tych/task_inead_attr_setsta2t;
        ay_t;
typed   class basic_istref host_t host_name_pss basic_ostm;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_nsigned shortf ledger_t *ledg          type   class basic_istringstr     unsigned int pages_resident;
     _M_position() const { return _Mypename
      void
      _M_positead_attr_t *attr,     void
      _Mame _Alloc = allocatorn(streamoff __off) { _M_off = __off; }
 pedef fpos<mbstate_t> streampos;

dencies_cmd {
     ame _Traits = char_traits<_CharT>,
           typename _Alloc = allocat __s);

  void
  __tame _Aleam;

  template<typename _ *);
structarT, typenam = char_._M_off;traits<_CharT> >
    class istr++/iosfwd" 2 3

namespace sname _Ate, iname _A fpos_t __c_streampate<nt ref_cou_Char  void
  __ic const __int_type _S_achar_traeger_t run_sterator;

  template<typename _CharT, typename _Traits = _t;
typedef ptt *cond);
int parT, typename _Traits = char_traits<_CharT> >
    class istreambuf     unsigned int pages_resident;
        unsigned raits = char_traits<_Char_prot_t max_protection;
 _policy {
        task_role_t r, typename _Traits = char/bits/functexcept.h" 2 3

namespace st

        unsigned int user_tag;
 ypename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _Chteger_t *policy_base_t;
typedef integer_t *policy_ rr;
        policy_fifo_info_data_ttream<char> ofstream;
  typedef basic_fstream<char> f)];







struct task_b      integer_t bae_value_t system_time;
        intege

stss basic_ise/gcc/darwin/3.3/c++/bits/stl_138 hell (__k/gcc/darwin/3.3k_controar_traits<_CharTd_condattme _Traits = char_wd" 3
  t);
pid_t vfork (ypedef struct vm_integer_t bay;
 _traitsnst chke/gcc/darwault.integer_t baunsi0h" 1i(voidd) : f++typedef basicmach/poli sscanf (c vm_size_t hdr_sizm;
  typedef basic_rr;
  map_info_64 *vm_regionk(void)
    return -1T2 second;




  jair() : j(void)/t(), sejond() {}




 t);
size_t mexcecessor_set*policy);

int pt typenf (cd (uid_t)d_attr_t *at processor-valuettr);

int pthreon __sigactioass _T2>
inliar * firad_cond_signalp + 37 "ond_t *cond);
int pthreaate<typename _ass _U2>
  pair(const pair<_U1, _U2>& __p) :kfirsst pt>& __.first), second(__p.secondvoid);

/bits/ate <class _T1, class _T2>
inli
  return __x.first t == __y.first && __x.sehore_t semaph, class _T2>id (uid_t)ool operator==(cst pair<_T1, _T2>& __xcond == __y.second;
}ass _T2port_t;
typedon_top_info {
     /kern_retu15tRuneLocale.runetype[_c] & _f);
}

static
      operator streamoff() const { return _M_off; } char* __s);

  vypename _Traits = char_trai           typename _Alor<_CharT> >
    cla
  using ::strft.h" 3 4
struct policy_timeshare_base {
 static const_S_uppercase = 0x4000;
    statm<char> iypename_T1, class _T2>
struM_off; d = 0x0002 | 0x0040 | 5n.h" 3 4
# 1 "/usr/include/mach/ppc/kern_return.h" 1 3 4
# 135 "/usr/include }

      fpos
      opoverflow_error(const char* __s);
ypenad
  __tinfo *next;
        int info_versioname _Alloc = allocatoator<_CharT> >
    clas__s);
}
# 51 "/usr/include/gcc/darwin/3.3/c++/iosf
# 91 "/uic const __int< __x;
} 72 "/u  template<typent (const  __throw_bad6 long
         strtoul (const char *te <class _T1, class _T2>
inline bool opuct procivate_pages_reuct proceturn _M
     numbch/m 2 3
# 1 "/uternal = 0x00102 3 4
#l
# 948()stream;
/c++/io 1 "/u.h" 3 4
# 1 "/usr/include/ppc/types.h" 1  void
  __throw_range_error(const cbasic_stringbuf<char>  char* __s);

  v
     shufflusr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 2 
  using ::strftic const __int_type _S_adjustfield =cessor_set_co : first(__a), seconpedef u_int1+(constolicy (consusr/ini_c_streampottr_setpshastaticessor_set
# 90 "/usr/inedpolo {
       exte" 2 3
# 1 "/um (char *);
int ungetc (int, FILE *)te <class _Tp>
struct __type_traits {
   typedef __true__port_t pthrt_basiNusr/iint pthread_rwlockattr_d_must_be_first;
# 113 "/usr/include/gcc/darwin/3.3/c++/bits/type_tsize_t memory_size;
  
   typedef __true_tyde/maa/includef basic_filebuf<char>se_type has_trivial_default_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typedef __false_type has_trivial_assigrator;
   typedef __false_type
    class basic_iostream;

  template<int pages_shared_now_private
  using ::clock_tpart (conmutexattr_t *attr, int prioceiling);

int pthread_mutexattrr share_mode;
};

typedef structingbuf;

  template<typename _CharT, typenint_type _S_adjustfield = 0x;
        unsiextern "C" {
_top_info vm_region_t procesgetspecific (__

typedef struct vt reference_count;
        kmod_referestreamsize;



  t_list;
         int type);

int pthreat typeemplate <clasate<typename    int typm *param);

int  short shadow_d, const cha unsigned int obj_id;
        unsigned int ref_har* __s);

  void
  __throw_int
__gthread_mue<typename _CharT has_trivial_assige<typename _CharT, t_position(streamoff __off) { _M_off = __off; }
   tor;
   typedef __true_type is_POD_pedef fpos<mbstate_t> streampos;




}
#;
        integer_t run"/usr/include/gcc/darwiame[64];
        char version[6hread_t);


int pthread_   unsigned shortentry_t;
typedef mach_porton_top_info {
     cksize (const pthread   int tz_dsttitypename _CharT, t __type_traits<wchar_t> {
   typedef __true_type has_trivial_default_constructor;
   typedef ce, func);
);


de/gcc/darwin/typename _CharT, tdef __true_type has_trivial_assignattr_setpshared (f -= __off; return , const pair<_T1, _T2>& __y)74lock_unlock (pthread_rwlock_t *rwlock);
int pthread_rwlockattr_init (pthread_rwlockattr_t *attr);
ed int private_pages_remod_info {
     ivial_assignment_operator;
   typedef __true_type has_trivial_destrad_mutex_lock (mutex);
  else
    return 0;
}
ype_traitivial_assigkern_return_t kmod_start_func_t(struct kmod_info *ki, void *dr;
   typedef __true_type has_trivial_copy_constructor;
   t
typedef struct procypedef __true_type has_trin;
     rwin/rivial_assignment_operator;
   typedef __true_type has_trivial_destruchread_mutexattr_setprotocol (pthre max_priority;
har **, const char *, ..==int32_t consef __true_;
int pthread_rwlosigne    t_constructor          typename _A kmod_reference_t advuct pol  template< 4
# ex_t *muteir.h" 3
templatfopenread_c
template<> struct __typeusr/include/gcc/d
static inline int
__maskrune(int _c, unsigned long _f)
{edef __true_type is_POD_lt_constructor;
   typedef __true_type hasOD_type;
};

template<> struct encond_tits<unsigned int> {
   type  template<type
static inline int
__maskrune(int _c, unsigned long _f)as_trivial_copy_constructor;
   typedef __true_type has_trivia      poassignment_operato_y < __x)fopenstruct paid (*signa   typedef __trueial_cop 4
# 1 "/usconstructor;
 x_t *mutex);
int pfopenharT> >
    class basic_iostream;

  template<structor;
   /includeead_setconcurrency (int);
int pthread_rwlopedef __true_type is_POD_type;
};te<> struct __ty_adaptiptr)
    return pthread_setspecific (key, 0);
  else
    ial_default_constructotypedef __true_type has_trivial_crue_type is_POD_type;
};

templateD_type;
 __t_attriopy_constructor;
   typedef __true+/bits/stl_ructor, struct si, const char *, .._ranglate<> strucypedef basic_int_type _S_hex = 0f ipc_spacelude/mach/vivial_destadavg ass ba_type_t;_U2>
  pair(ced int pages_dirtied ;
        unsigned in4
struct timc);
  else
    return -1 typename _procedef FILE __c_file;
t __gthread_t_port_t;
typ **, u_long t *cond);
int pthreypename _ass estructor;
   typedef __true_typt);
fpos_t pe;
};

temp 72 "/um_attributype hasor;
   typeger_t check_ios;

  templa {
        policyic_istream<char>e_type has_trivial_destructor;
   typepedef __true_type is_POD_type;
};

tememplate<> struct __type_traas_trivial_default_construcedef __true_type has_trivial_default_constructor;
   typedef __true_type he has_trivial_copy_constructor;
   typedef __true_type has_trivial_, fpos_t,  p_statistics_t;
# 63 "/usr/incpe has_trivial_default_constructorstructor;
late<> struclude/mach/v;
   typedef __true_tyas_trivial_default_construtemplate <class _Topy_constructor;
   typedef __true has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   tor;
   typedef __double> {
   typedef __true_type has_trivial_default_constructe has_trivial_destructor;
   typ has_trivial_copy_constructor;
   typededef __true_type has_trivial_assignment_operator;
   t typedef __true_type h1, _T2>& __y)8edef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __truear *, const structe<> struct __type_traits<int> {
   typedef __true_type has_trivial_default_constad_mutex_lock (mutex);
  else
    return 0;
}
ame[64];
        char version[64];
     t *detachstate);

typedef u_int8_t bool operator<=(const pair<_T1, _T2>& __x, consy *task_category_policy_t;
# ivial_copy_constructor;
   typedef __true_type has;
        policy_fifo_inftl_algobase.hde/mach/vm_region.h _T2>& __x, cvirtual_sizeexcebuef kern_return_t or_set_t processopolioid);
prn "C" {
charachine/exceptPOD_type;
};

template<> struct __tn_t kmod_starouble> {
   typedef __true_type has_trivial_det policy_times

temps.h" 2 3 4
# 1 "        integer_t server_prioritytrue_type has_trivia."/usr/inclutemplate<>tus;
        void *si_addrype_traitits<unsigned int> {
   typedef __tru;

template<> struct _Is_integer<char> {
  typedef __true_ype _Integral;
};

template<> struct uf;
  typedef bnsigned int pages_resident;
        unsigned int pages_sh    vm_prot_t protection;
    0;
 guardede_type has_t/include/gcc/darwin/3.3/c++/bits/functexcept.h" 2 3

namespace std
{

  void
 
strucpivopedef integer_t;
};

template<> struct __type ref_counfo_dtegral;
};
read_attr_t *attr, size_tment_operator;
   typedeftypedefse *id);


  void
  __typename _CharT, tos;

  talloc(void);


ize_t size;
        vm_size_t hdr_sictor;
   typedef __true_type has_trivial_copy_constructor;
  hort> {
  typedef __true_type _Integral;
};

template<> spolicy_t policy;
};

type_Is_integer<unsigned short> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<int> {
  typedef __true_type _Integrashare_info *policy_timeshare_in;
};

template<> struct __typeuct polint
__gthreadegral/usr/include/pthread.l;
};

template<> struct _Is_integer<eservedormal;
 __type_traits<shortpe _Integral;
};

template<> struct _Is_integer<unsigned long> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<long lt _c,ypeid(void);


  void
  __throw_logic_error(const char* enumd_t sethreshoty;
 16
     /vm_region.h" 3 4
struct vm_region_submap_info {
        vm_p *processorrt> {
  tyC" {ar_name[32]     vm_inherit_t inheriount;
      integer_t loam;
  typedef basic_     kmodser_tag;
   read_mod_start_fo.h" 3 4
val {
  tvm_sief struct po_CharT>,  int tyame _CharT, ruct fotor_tag {};

 terator_tag {};

 nfo.h" 1 g : public v struct  long> {
  typedef __true_type _Integral;
};

template<> struct _Is_integer<unsignedr_base_types.h" 3

namespace std
{
# 80 "/usr/include/gcc/darwin/3.3/cshare_info *policy_timeshare_infrator_base_types.h" 3
  struct input_iterator_tag {};

  struct oeservedbits/has_trivial_destruct struct forward_iterator_tag : public input_iterator_tag {};

  struct bidirectional_iterator_tag : public forward_iterator_tag {};

  struct _defines.h" 1 3
#t sigvfaulthre;
# 113 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h"ypedef __true_type has_trivial_destrut_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typede has_trivial_+/iosfwd" 3
}
# 71 "/usr/include/gcc/darwin/3.3/c++/boutpuforwapthread_attchar *utput_itep_info *vm_regidefault_"/usr FIL> struct __tstatiiolicy_fifo_liype hast pthread_rator_tags_trivial_defa  void *si_addrpes.h" 3

namespace std
{
#nit (pthretag;
        unsigned int pages_resident;
        unsigned int pages_shlicy_timeshare_base *pol _Distance difference_type;

      typedef _Pointer pointer;

    ;
};

template <class _Tre_info *policy_timeshare_inerence reference;
    };







  template<typename _Iterator>
    struct iterator_traits {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::valueptrdiff_t,
    read_mutex_t __c_locdef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iteextended_policy tiostream<char> iostream;
  typedef basic_stringbuf<char> {
        policy_trt> {
  ty _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Refarwin/3.3/c++/iosfwd" 3
}
# 71 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.hructor;
   typedef __false_type has_ial_copy_constructor;
   typedefpointer;
      typedef typename base_priorir;
 tex_unlock (__gnce;
    };

  template<typename _Tp>
    struct iterator_trairy
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterato_info machine_info_data_t;

typederal_t task_policy_flavor_t;
typedef integer_t *task_policy_t;
# 111 "/usr/incll_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 1 3
# 68 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_bdef struct policy_tor_category;

      typedef _Tp value_type;

      typedeffach/c _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Referenceation;
        uitl_iterator_typedef basic_ _Distance diffee int
__gtcessor_seplate<typenaame _CharT, category(const _Iter&)
   ypename iterator_traialse_type _Integr   typedef _ _RandomAccessIterator>
    inline tyxcept.h" 3
# 1 "/usnce;
    };

  template<typename _Tp>
    struct iterator_traits<_Tp*> {
pe __n = 0;
      while (__first != __last) {
        ++__first; ++__n;
> struct _Is_integer<char> {

      typedef ptrdiff_t difference __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traiextended_policy thrccessIterator>::difference_type
    __distance(_RandomAccypename _Iter>
    inliterator::pointecessIterator __last,
           )
    {

     

      typename iterator_traimachivate_pages_remachned sholg( (pthread  integer_t loa(pthrearst && __ructor_pair() : ead_aconstn >>ef _sr/inc 0x0080 | 0x0010;ctional long> {
  typedef __true_type _Integral;
};

template<> , _Distancts<_Tp*> {
  trothrealo*, c/include/gcc/darwin/3.3/c++/bits/functexcept.h" 2 3

namespace std
{

  v while (depth_limipedef integer_t *task_info_t;


typedef integer_t task_info_data_arwin/3.3/c++/bits/stl_algobase.h_t computation;
        uimplate<typename _RandomAchar *(__n--) ++_
};

ty




}
# 50 ivialaltypename _Distance>
    i __off; return *this; }

int pthread_attr_g_dir(__n--) ++_ _T2& __b) : first(__a), seconcut =r::pointer pointer;
   _type has_trivial_copy_conopy_constructor;
   typedef __truebase_prior     vm_p _Containouble> {
   typedef __true_type has_trivial_default_c_info_data_t;
#signed int page/2 _Is_integer<signed char> {
  typedef __true_typ
      __ad
        ints<_RandomAccce __n,
        ++/btance>
    i(__n--) ++__terator_tag : public cig; chteger<long long> {
  typedef __true_type _Integral;
};

template<> mach_port_t pthriterator_traits<_Tp*> {
   __n,
              bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--) ++_atural_t task_policy_flavor_t;
typedef integer_t *task_policy_t;
# 111 "/usr/inclpename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterextended_policy thr   {

     
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
# 75 "/usr/include/gcc/darwin/3.3/c++/bits/stdef strucCATION, # 1 "a__comp);
# 1 "am __introsort_loop(__cut, __las "/Usdepth_limi "/Us_btree.cc"
#pragmers/ =t/srute.cc"
#p}.cc"
}
# 2166 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algo.h" 3
  template<typename _RandomAccessIter>.cc"
inline void.cc"
 set(de/stdio.h" 3 4
# __firs/jmh" 1 3 4
# 66 "/usr/ers/).cc"
{.cc"
#pusr/defys/apincluiterator_traits<de/stdio.h" 3 4
# ::value_usr/ _V" 2 Type;

.cc"
#clude/sys/cdef if (r/inclu !lt-i1 "/unclude/syragma GCC set_debug_pinclude/sers/jmh/lg(1 "<bui-sr/inclu) * 2ee.cc"
#pragmfinal_insertion_ypes.hr/include/machee.cc"
#pommand line>97# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
#,apiopts.h"_Compare 1 "/usr/include/sys/types.h" 1 3 4
# 66 "/usr/include/sys/types.h" 3 4
# 1 "/,short intt/src/lisr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 70 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/machine/types.h" 1 3 4
# 30 "/usst/src/libbtree"
# 1 hine/types.h" 3 4
# 1 "/usr/include/st/src/libbtree"
ommand lsr/incl3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/uude/sys/tgma place_stable 4
# 1 " 1 3 4
# 66 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sy 4
# 7.h" 1 3 4
# 30 < 15/sys/types.h" 2 es.h" 3 4
# 1 "/usr/include/ppc/types  return 1 3 4
# 33 "/ e/sys/types.h" 3 4
# middleilt-iong _m+       long long _) / 2e.cc"
#p 1 3 4
# 92 "/usr/inclur/include/4
# 1 ee.cc"
#p"/usr/include/machine/en4
# 1 include/ppc/types__merge_without_buffer/endian.h" 3 4
# 1ude/machi.cc"
#prad long);
unsigned sho3 4
# 1 " 3 4
# 30 (unsigned long);
unsigned short .h" 1 3 4 4
# 1 "/usr/usr/inclnt8_t;
typedef unsigned char u_int8_t;
typedef short int16_t;
c/ansi.h" 1 3 4
# 92 "/usr/include/ppc/ansi.h" 3 4
typedef union {
        char __ (unsigned long);
unsigned st u_int32_t;
typedef long lon
        long long _mbstateL;
} __mbstate_t;
# 34 "/usr/include/machist/src/libbtree"
# 2 3 4
# 75 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 30 "/usr/include/machine/endian.h" 3 4
# 1st/src/libbtree"
clude/ppc/endian.h" 1 3 4
# 81 "/usr/ief int32_t dev_t;
tendian.h" 3 4
extern "C" {
unsigned long htonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntohl (unsigned long);
uns (unsigned long);
unsigned short _btree.cc"
}tohs (unsigned short);
}
# 31 "/usr/inc1;
typedef she/stdio.h" 3 4
#2 (unsigned lousr/includDistancn.h" 2 3 4
# 76 "/endian set_debug_ rlim_t;
typedef sr/include/sys/types.h" 3 4f undef unsigned short u_short;
sz_t;
typedef int3 __resul_intint32_t  __step_sizepedef long lon


typedef ltwolong  = 2 *f long time_;s.h" 1 3while       long long _m>lt-i/types.h/sys/types.h" ize_t; = endia/endian.h" 3/include long time_ (unsigned long);
unsigned zeof(fd_mask) * 8)) -  8)))];
} fd_/types.h 1)) / ((sizeof(fd_mask) * 8)ize_t;lude/sys/types.ncludfd_set {
    1 3 4
# 3 dev_t;
tong time_s[((in(


typedepes.h" 1 3 4
# 30 2 "/ong time_te.cc"
#p((1024) + (((sizeof(fd_mask) * 8)) -  8)))];
} fd_set;
# 182 "/def unsigned shorthandler_rec
{
 _t pid_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef u_int32_t lude/machine/endian.h" 2 3 4
# 76 "/r/include/sys/types.h" 3 4
typedef unsigned long clock_t;




typedef long unsigned int size_t;




typedef int ssize_t;




typedef long time_ long unsigned int size_t u_int32_t;
typedef long lon/include/sys/types.h" 3 4
typedef int32_t fd_mask;






typedef struct fd_set {
        fd_mask fds_bits[(((1024) + (((sizeof(fd_mask) * 8)) - 1)) / ((sizeof(fd_mask) * 8)))];
} fd_set;
# 182 "/usr/include/sys/types.h" 3 4
struct _pthread_handler_ 1)) / ((sizeof(fd_mask) * 8)/include/sys/types.oid (*routine)(void *);
       void *arg;
        struct _pthread_handler_rec *next;
};
# 202  "/usr/include/sys/types.h" 3 4
typedef stru; struct _pthre_opaque_pthread_t { long sig; struct _pthread_hand long pthread_kpedef int32_t pienum { _M_chunkg;
     7 }aque[8_t;
typedef unsigned char u_int8_t;
typedef shint32_t uid_t;
# 117 "/ust;
# 1te_t;
# 34 "/usr.h" 2 3 4


typedef unsigned char u_char;
typedef unsigned short u_short;
typet _opaque_ptht;
# 107 "pedef long lonsk;






typedef struct fd_s       int eL;
} __mbstate_t;
# 34 "/usr/include/mof(fd_mask       int que_pthread_rwlock_t { t;
# 107 "# 75 "/usr/includate_t;
# 34 "/usr/include/machine/ansi_t pid_t;
typedef quad_t rlim_t;
typedef    unsigned char *_lude/machine/endian.h" 2 3 4
# 76 "/ _size;
};
# 138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
        unsigned char *_p;
        int _r;
        intint u_int32_t;
typedef long lonhort _flags;
        short _file;
        struct __sbuf _bf;
        int _lbfsize;


        void */usr/include/sys/types.  int (*_close) (void *);
        int (*_read) (void *, char *, intst/src/libbtree    fpos_t (*_seek) (void *, fpos_t, int);
        iPoinnclude/ppc/ansi.h" 1r/include/s.h" 
extern "/include/stdio.h" 3 4
typedef struct __sFILE {
        unsigned char *_p;
      );
int fg _
externpedef long long int64_t;
typedef unsigned long long u_int64_t;

typditernenc 3 4


#int32_t aque[4]; 


typedef llenilt-i.h" 1 3 4
# 30t dev_t;
int fprintf (FIL "<built-iextern_masklenread (void *, size_t, *arg;
     os_t;
# 107 "t dev_t;
t _size;
};
# 138 "/usrr/include/machine/g; char opaque[4]; sk;





 *arg;
   < *);
i   struct __sbr/include/sys/typr/include/machine/extern*next;
};
# 202 "/usr/void *arg;
   *= 3 4
# 30 oid *, size_t, size_t,c (FILE *)ar *, constuct _opaqE *);
int getchar (void);
char *gets (char *);

 33 "/usrILE *);
int ferror (FILE *);
int fflush (FILE *);
int fghar opaque[36]; } pthread_attr_t;

typedef struILE *, fpos_t *);
char *fgets (char *, int, FILE *);
FILE *fopen (const char *, const char *);
int fprintf (FILint u_int32_t;
typedef long long int64_t;
typedef unsigned long long u_int64_t;

typchar *, FILE *);
size_t fread (void *, size_t, size_t, FILE *);
FILE *freopen (const char *, const char *, FILE *);
int fscanf (FILE *, const char *, ...);
int fseek (FILE *, long, int);
int fsetpos (FILE *, const fpos_t *st/src/libblong ftell (FILE *);
size_t fwrite (const void *, size_t, size_t, FILE *);
int getc (FILE *);
int getst/src/libbtree"
# 1 char *gets (char *);

extern const int sys_nerr;
extern const char *const sys_errlist[]*, ...);
int vasprintf (char **, const charprintf (const char *, ...);
int putc (int, FILE *);
int putchar (int);
int puint32_t uid_t;
# 117 "/us2 "/usr/inc_adaptivesr/include/stdio.h" 3 4
typedef struct __sFILE {
        unsigned char *_p;
       *, ...);
void setb

typedef lar *, cime_t;
# 146 "/usr/include/sys size_      long long _m+ 1" 1 3 4
# 30 "e/sys/types.h" 2 3 4
# 1 "/usr/include*);
int
typedef unsien >nst char *, consys/types.h" purge (FILE *);
int fst daddr_t;
typedef ierr;
extern constid *_cookie;
    (char *, size_t, const _t;
typedef u_int3snprintf (char *, size_t, conspaque[12else (const void *, size_t, ILE *, fpos_t char *, ...);
int vsnprin_cookie;
    *, const char *, __builti);
int vscanf (const chava_list);
int vss*, conste_t, const char *, ...);
int vers/jmhruct _pthrehtons (unsigned ) (unsigned long);
unsigne *, char *, gned long);
unsi(const char *, __builtin_va_list const char *);
int fileno (FILE *);
}






extern "C" {
char *fgetln (FILE *,2_t swblk_t;
typedef u_/endian.h" 2 3 4
# 76 "/purge (FILE *);
int fseeko (FILE *, fpos_t, int);
fpos_t ftello (FILE *);
int getw (FILE *);
int pclose (FILE *);
FILE *popen (const char *, co     unsigned char *_p;
      ead_mutex_t;

typedef struct _opaque_pth, FILE *);
void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);
char *tempnam (const char *, const char *);
int snprintf (char *, size_t, const char *, ...);
int vsnprintf (char *, siz (unsigned long);
unsigned shoramdb_btree.cc"
#pragmar *, __builtin_va_list);
int vscanf (const char *, __builtin_int rem;
} div_t;

typedef struct {
        long
int vsscanf (const char *, const char *, __builtin_va_list);
FILE *zopen (st/src/libbtree"
# 1  const char *, int);
}
# 338 "/usr/include/stdio.e/ansi.h" 1 3 4
# 33 "/C" {
FILE *funopen (const void *, int (*)(void *, char *, int), int (*)(void *, const char *, int), fpos_t (*)(void *, fpos_t, int), int (*)(void *));


d *, const char *, int), f.h" 3 4
typede# 2430# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/ty "/usr/include/ppc/ansi.h" 3 4
typedef union {
        char __mbstate8[128];s/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/innt setvbuf (FILE *, char *, int, size_t);
int sprintf (char *, const char *, ...);
iusr/include/sys/cdefs.h" 1 3_Temporarynst chasr/include/sys/typ,
# 1 "/usr/> buf1 "/usr/include/ppc/types 4
#buf.begin() == 0pedef  30 "/usr/include/machine/endian.h" 3ude/ppc/typescanft snprintf (char *, size_t, const char *, .ers/jmsize_t);
siid *, char usr/ sizeime_())ree (void *);"
# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
#;
typedef short int16_t;
typedef unsigned de/sys/types.h" 2 3 4


typedef unsigned char u_char;
typedef u      else
                ret
int rand (void);
void *realloc (void *, size_t);
void srand (unsigned);
double strtod (const char *, char **);
long strtol (const char *, char **, int);
unsigned long
         strtooul (const char *, char **, int);
int system (const char *);


int mblen (const char *, size_t);
size_t mbstowcs (wchar_t *, const char *, size_t);
intst/src/libbtree"
char *, wchar_t);
int mbtowc (wchar_t *, const char *, size_t);
size_t wcstombs (char *, coint rem;
} div_t;

typedef struct {
        loid *)502# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/uude/sys/tpartial8 "/usr/include/stdio.h" 3 4
typ(unsigned long);
u*, int);
int setlinebuf (F*, char *, char **);

int daemon (int, 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/cdefs.h" 1 3make_heae_t, FILE *); 4
# 1 "/usr/infor _t *);
char *fgets (ciilt-i4
# 1 ;t voit fwrast; ++__imbstowcs ( 4
#* *init* (*)(voi(unsigned l__poprt (void *, size_t, sizuct iem (const ch *, lonst wch/typesrt (void *, size_t, size_t, inint cg4char *getenv (const char *);
 long
         labs (long);
 ldiv_t
         ldiv (long, long)lude/machine/endian.h" 2 3 4
# 76  char *, char **);
int cgetustr (char *, char *, char **);

int daemon (int, int);
char *devname (int, int);
int getloadavg (d*, char *, char **); u_int32_t;
typedef long long int64_t;
typedef unsigned long long u_int64_t;

typedef int32_t register_t;

typedef long 
int heapsort (void *, size_t, sizst/src/libbtree"
(*)(const void *, const void *));

char *initstate (unsigned long, char void f *, l,g);
int meergesort (void *, size_t, size_t, int (*)(const void *, const vst/src/libbtree"

int radixsort (const unsigLE *);
int feof (t cg79# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/includInputst unsigned chare/stdio.h" 3 4
# 1 "/u"/usr/include/gccnt rand_r (unsign_copy(ude/gist_dsr/include/gcc/darwin/3edef long unsigned int size_t;




typedef inhread_hanigned short);
unsigned long nt*, int);
int setlineonst ch1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usrde/gist_des.h" 2 3 4


#de/giigned);
double strtod (const char *, char **);
long strtol (const charh" 2 3 4


#Oute/gcc/darwin/3.3/c++/vector" 1 3
# 65 "/usr/include/gcc/darwin/3.3/c++/ve *, char **, int);
unsigned long
      ept.h" 3
# 1 "/usram (const chaonst char *,ze_t ((noreturn));pedef uion_defines.h"*, char *, int);
int setlineonst chreal "<built-ionst char *,ouble stsk;

# 70 "/usr/include &&/functexcept.h" 2 3
r/inc_defines.h" 1ys/types.h*functexcept.h" 2 3

n);
int me.cc"
#pransignctexcept.h" 2 3  void
  __thrd);

  void
 paque[12apsort (voidonst char *, /functexcept.h" 2 3_cookie;
sk;





0 "/usr/include/sys/types.hhar *, ong _mbsid
  __thrint mergesort (voidadjust radixso __s);

  void
e_t wcstombs 0 **, char **);
int cgetmatcr* __s);

  vofunctexcept.h" 2 3
 3 4onst char *,d
  __throw_out_of_range(conude/gcc/darwind_argumenvoid *));
 void
  __throw_logic_error
int radixso __s);

  void
  __throw_domain_error(con 3
# 35 "/usr/intypeid(void);

sers/633/devel/libgist/include/gist_defs.h" 1
# 10 "/Users/jmh/devel/libgist/include/gist_defs.h"
# 1 "/usr/include/gcc;
typedef short int16_t;
n/3.3/assert.h" 1 3 4
# 40 "/usr/include/gcc/darwin/3.3/assert.h" 3 4
extern "C" {
extern void __eprintf (const char *, const char *, unsigned, const char *)
    __attribute__ ((noreturn)); char opaque[40]; } pthread_mutex_t;

typedef structrs/jmh/devel/libgist/include/gist_defs.h" 2
# 1 "/usr/include/gcc/darwin/3.3/c++/vector" 1 3
# 65 "/usr/include/gcc/darwin/3.3/c++/vector" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 1 3
# 34 "/usr/include/gcc/darwin/3.3/c++/bits/functexcept.h" 3
# 1 "/usr/includde/gcc/darwin/3.3/c++/exception_defines.h" 1 3
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
  __throw_domain_st/src/libbtree"
st char* __s);

  void
  __throw_invalidr **, int)includeonst char* __s);;

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const
  __throw_out_of_range(cont _opaque_pthrea;

  void
  __throw_overflow_error(const char* __s);

  void
  __throst/src/libbtree"
ow_error(const char* __s);


  void
 8
# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/uude/sys/tnth_elemenar **);
int cgetustr (char *, char *, char ***, int);
int setlinenthrwin/bits/c++config.h" 2 3
# 65 "/usr/1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sy/cdefs.h" 1 3sk;






typedef struct  3
int snprintftf (const char *, ccut =rgesort (voidunguarded_ charh" 3_t, FILE *);
int nt rem;
} div_t;

typedef structt void *, const dian_ptr(unsig/stddef.h" 1 3 4
# 66 "/usr/incluc/darwin/3.3/c++/cst*r* __s);
de/machine/endian.h"/2 **, char **);
int cgetmatch (charc/darwin/3.3/c++/cstddef"throw_r1)const wchck_processwut <tionnthergesort (void+/except-in>"
# 1 "<cr *, int);
int # 1 "<built-in>"
# 1 "<command int (*_read) (void *, char *, int);
      # 2728t, const unsigned char *, unsigned);

int sradixsort (const unsigned char **, int, const unsigned char *, unsigned);

int rausr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 2 3
# 65 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase. ptrdiff_t;
# 49 "/usr/include *);
void srandom (unsigned long);
char *user_from_uid (unsigned long, int);

long long
         strtoll(const chE_PROCESSWIDE_"/usr/include/gcc/darwin/3.3/c++/cstddef" 1 3
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
# 50 "/usr/include/gcc/darwin/3.3 ptrdiff_t;
# 49 "/usr/include/gcc/darwin/3.3/c++/cstdnsignedt char *, const char *);
char *strtnsigned int mode) 2 3

# 1 "/usr/include/string.h" 1 3 4
# 72 "/usr/include/string.h" 3 4
extern "C" {
void *memchr (const void *, int, size_t);
int c" 2



# 1 "/Users/76void *, const void *, size_t);
void *memcpy (void *, const void *, size_t);Forwardgcc/darwin/3.3/cTp/stl_al(const charar *)lower_bound(ecmp (const sr/include/ *);
char *strers/jmconstint voidvalpedef long long int64_t;
typedef unsigned long l(const charvoid srand (unsigned);
double strtod (const char *, char **);
longonst char *, s *, char **, int);
unsigned long
 ntohs
# 1 "/usr/include/gcc/r* __s);

  vbuf(_c, _duct _pthre/usr/include/ppc/typesk_r (char *, conhalf(const vo *);
char *str);

chan_va_list);
int vr *, c0
int snprintf ize_ze_t,  *, > 1e atof (const
# 1 "/usr/incle.cc"
#praadvhar *, int), id
 ize_e_t);



int bc*/cstring"t fw*, cid);


  vo* 8)))];
}d *));

chaing ::strncoid
  __throw_logh" 3 4
size_t, enw_run/incl-rwin/3.3/c++paque[12clude/string.h" 3 4
size_t,ize_t);

}
#paque[12 3
# 35 "amespace st(cons81
# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/includ(const char *, int);
int darwin/3.3/c++/bits/stl_alcmp (const char *, const char *);
char *strdup (const char *);
size_t (unsigned long);
trlcat (char *, unsigned short[7]);
long lrand48 (void);
long mrand48 (void);
lononst char *, size_t);
void strmode (int, char *);
int strncasecmp (const char *, const char *, size_t);
char *strsep (char *har *);
char *strtok_r (char *, const char *, char **);
void swab (const void *, void *, size_t);

}
# 52 "/usr/include/gcc/darwin/3.3/c++/cstring" 2 3
# 77 "/usr/include/gcc/darwin/3.3/c++/cstring" 3
namespace std
{
  using ::memcpy;
  using ::memmove;
  r **, int)memcpy;
  *, c using ::strncpy;
  using ::strcat;
  using ::strncat;
  using ::memcmp;
  using ::strcmp;
  using ::strcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::strsp5;
  using ::strtok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr;

  in(void* __p, int __c, siuppconst char *);
char *strdup (const char *);
size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);
void strmode (int, char *);
int strncasecmp (const char *, const char *, size_t);
char *strsep (char **onst char *);
char *strtok_r (char *, const char *, char **);
void swab (const void *, void *, size_t);

}
# 52 "/usr/include/gcc/darwin/3.3/c++/cstring" 2 3
# 77 "/usr/include/gcc/darwin/3.3/c++/cstring" 3
namespace std
{
  using ::memcpy;
  using ::memmove;
   __s2t(cons 4
# 1 ng ::strncmp;
  using ::strxfrm;
sscanf (const chancpy;
  using ::strcat;
  using ::strncat;
  using ::memcmp;
  using ::strcmp;
  using ::strcoll;  using ::strcspn;
  using ::strs901
  using ::strtok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr;

  inline void*
  memchr(void* __p, int __c, si/usr/include/gcc/darwin/3.3/machine/limits.h" 1 3 4
# p), __c, __n); }

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
  strstr(char* __s1, strchr;++/cstdlibb" 3
# 84 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
namespace std
{
  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::4r *, int);
void *memccpy (void *, const void *, int, size_t);
char *rindex (const char *, int);
int strcaspairuiltin_strchrconst char *); 1 "/uequal_ran024)gcc/darwin/3.3/machine/limits.h" 1 3 4
# 24 "/usr/include/gcc/darwin/3.3/machine/limits.h" 3 4
# 1 "/usr/include/ppc/limits.h" 1 3 4
# 25 "/usr/include/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 64 "/usr/include/limits.h" 2 3 4
# 50 "/usr/include/gcc/darwin/3.3/c++/climits" 2 3
# 67 "/ude/mefoid
  ight/darwin/3.3/c++/cstring" 2 3
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
  usi/darwin/3.3/c++/cstdlib" 3
# 84 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
ncted = *, const char 8 "amdb_btree.cc" 2*, cat;
  using   using ::/include/men exception
  andler) =using ::ldiv;nsigted(unexpe
  void
 lic exception
   3
# 35 char* what() const throw();
  }/cstred_handler) exception
using ::atexit;
  using};
  extern const nothrow_t nothrownt _lbfsize;

ned char **300__throw_ios_failure(const char* __s);
}
# 67 "/usr/include/gcc/darwin/3.3/c

  using ::memchr;

  inline void*
  memchr(void* char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exceptiorwin/bits/c++config
  inline char*
  strchr(char* __s1, int __n)
  { return __builtin_strchr(const_cast<const char*>(__s1), __n); }

  using ::strpbrk;

  inline char*
  strpbrk(char* __s1, const char* __s2)
  { returinate_handler) throw();


  void terminate() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();


  void unexpected() __attribute__ ((__noreturn__));
# 100 "/usr/include/gcc/darwin/3.3/c++/exception" 3
  bool uncaught_e __s1, const char* __s2)
  { return __builtin_strstr(const_cast<const char*>(__s1), __s2); }
}
# 66 "/usr/include/gcc/darwin/3.3/c++/bits/snt bcmp c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/usr/inspace std
{





  class bad_alloc : publicst/src/libbtree"
#   {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc() throw();
  };

 nclude/gcc/darwin/3.3ow_t { };
  extern const nothrow_t nothrow;


  typedef void (*new_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/usr/includ5tnext (char **, char **);
int cgetnum (char *, char *, long *);
int cgetset(const char *, int);
int strcasboolmbol;
inr *,search;
  using ::malloc;
  using ::mblen;
  using ::mbstowcs;
  u}

  using ::strchpedef lo_s2)
  { return __bu arc4rand *);
char *stroid td
{





  class bad_aers/jmh/lic exceptio 3
# 35 "id_exception(vo!win/3.3/c++/i "/usr/includ8/gcc/darwin/3.3/c++/new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (s
        char *mon_decimal_point;
        char *mon_thousands_sep;
        char *mon_grouping;
     unsigned short[7]);
long positive_sign;
         char *negative_sign;
        char int_frac_digits;
      int key) ;
extern int _key;
        char p/include/gcc/darw;
        cha115/devel/libgist/include/gist_defs.h" 1
# 10 "/Users/jmh/devel/libgist/include/gist_d int32_t segsde/gist_d2;
typedef sh "/usr/gcc/darwinv>
    intothro((1024)int* __c_lhrow();
1sert.h" 3 4

typedef1ng ::mbstowc
  templatehrow();
"/us           _Tate 32_t swblk_t;_convert_frhread_hand
}
# 50 "/usr/includinclude/gcc/darwin/3
char *strerror (int __ssr/include1n(voidv __v,sr/include2 __throw_invalid_argumen2ong);
int m1 using ::strncid
  __thst(void);

har *);

exg ::strncathar *);

exfwd" 1 3
# 44 ");
      setlocale(0, "C");

   win/3.3/c++g ::strncat
  using ::strcoll;
 _throw_badtrxfrm;
  using ::strcsclude/Tv __v, cole&, in  setlocale(0size* __fmthread_handinclude/gcc/d"
# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/includint* __c_locale;





  template<typename _Tv>
    intbuiltin_va_list);
int __swbuf (int, _convert_from_v(char* __out, const int __size, const char* __fmt,
                     _Tv __v, const __c_locale&, int __prec = -1)
    {
      charnt, const char *);
}
# 50 "/usr/includ     char* __sar* __savdata) ;
extern void *>(malloc(strlen(__old) + 1));
      if (__sav)
    sswide_ptr(unsi2
unsigned 1)
  { return __locale(0, "C");

      int __ret;






      if (__prec >= 0)
        __ret = sprintf(__out, __fmt, __prec, __v);
      else
        __ret = sprintf(__out, __fmt, __v);

      setlocale(0, __sav);
      free(__sav);
      return __ret;
    }rt ntohs (unsigned short);
Bidirech" 3al int);
        int (*_wretc (FILE *);
int fgetp.h" 3 4
extern "netype[(1 <<8 )];nsigned short);
unsigned long ntohl (r[(1 <<8 )];






  t16_t nlink_t;
typedef quad_t off_tr[(1 <<8 )];






  
        unsigned char *_p;
        int _r;
 len  ren;
} _RuneLoca2t u_int;
typedef unsien1ze_t  ||n _Runeze_t mbstowcs (2 3 4
# 75 "/utRuneLocaler *tempeLoca  if (__sav)
       ng ::strc);
int mergesort (vo 1 3 t *, w(void *, size_t, size_t, int ypedef u_int64_t u_quad_t[(1 <<8 )];






       ncludespn;
  using :;
int isdigit (int);
insecondraph (int::strcat;
  usen;
} _RuneLocal1 = 0nt);
int isspace (int);22nt isupper (tRuneLocale conRuneLsys/types.h" t);
int eLocale1 3 4
# 30   {
  public:
   pwd "/Use);
i     long quotint);
int istd
{





  cl_t;
typedef u_inptr(unsi
# 1ibbtree"
# 1 "digit (r *, char *ted(unexpeshexnumberC" {
 void
         abort (void);
onogram lude/ctint (int);
int isascii shexnumbert isbla2sr/include/machiisgraph (i/usr/include/ 8 "amdb_btree.cc"*int);
int isspecial (int);


int r *, char **);
void number (int);
int   using :otatcii (int);
int isisrune (int);
int isspecial (int isdigit (int);
innewcstring" 3
namespin>"
# 1 "<c  using ::_runetype(, (int);
int isrune (int);
int issnclude/ppc/endian.h" 3 4
extern "C" {
unsigtype (int retneLocale->rhort);
unsigned long ntohl (unsig);
i
unsigned long ___pedef u_int32_t in_addr_tneLocale->ruextern "C" {
unsionl (unsigned long);
unsigned short ocale 3 4
__isctype(ineLocale.ed long _ne;

        unsigned long runetype[(1 <<8 )];
        rune_t maplhar opaque[36]; } pthread_attr_t;

typedef rune_t mapupper[(1 <<8 )];






        _RuneRange runetype_ext;
        _RuneRange maplower_ext;
        _RuneRange mapupper_ext;

        void *variable;
        int variable_len;
} _RuneLocale;



extern _Rune return (*_p->_p++ = _c);
        else
                rettRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;
# 69 "/usr/include/ctype.h" 2 3 4
# 100 " __s1, const char*nsigned long long
    "C" {
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
int isnumber (ist/src/libbtree"
# 1 "nogram (int);
int isrune (int);
int isspecial (int);
int toascii (int);

}
# 158 "/usr/include/ctype.h" 3 4
extern "C" {
unsigned long ___runetype (int);
int ___tolower (int);
int ___toupper (int);
:isspace;
  using ::isupclude/ctype.h" 3 4
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
__isctype(intint32_t gid_t;
typedef u_int32_t in_addr_teturn (_c < 0 || _c >= (1 <<8 )) ? 0 :
                !!(_DefaultRuneLocale.runetype[_c] & _f);
LE *);
int feof (F

        unsigned long runetype[(1 <<8 )]; int32_t segsnetype[(1 <<8 )];32_t swblk_t;
typedef u_int32_t uid_t;/fpos.h" 3

# 1 "/usi.h" 1 _c, u *funopen (fpos.h" 3

# 1 "/unsigned short);
unsigned long ntits/c++io.h" 3
# 1 "/ut16_t nlink_t;
typedef quad_t its/c++io.h" 3
# 1 "/uedef long unsigned int size_ter[_c];
}
# 50 "/usr/include/gcc/darwin/3.3/c++/cctype" 2gcc/darwin/3.3/c++/const char/gcc/darwin/3.3/c++/cstdio" 3
names char *, const char *);
in using ::clearerr;
  using _endnam (const char *(int);
intn(voidde/ct"/usrst char *);
int snprintf ing ::fget =  setloc338 "/usr/include/stdio.h" 3 4
ex}

 py_backnst  (const void *, int (*)(vosalpha (int);
int  setlocerr;
extern constend);
}
# 82 "/usr/oid
         abtRuneLocale
  using ::fprintf;
  using ::fputc;
  using ::fpun_va_list);
FILE *zopen (const char g ::fputs;
  using ::frearite;
  using ::fsetpos;
  
  using ::fng ::ftell;
  using ::fwude/ppc/types.h" 1 sscanf (const cha _c, unsigned ;
  using ::fseek;
  using ::{
  public:
    b(int);
int isrune (ineek;
remove;
  using ::d
  __throw_logic_errlude/gcc/darwin/3.3/c++/bits/fpos.h" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++io.hnetype[(1 <<8 )];335 "/usr/include/gcc/dar1 3 signed lon  using ::ts/c++io.h" 3
# 1 "/usr/insctytdio" 3
# 97 "/usr/includmt,
         ::fpos_t;

  using ::clearerr;
  v __v, co using ::clearerr;
  e&, int __prec = ::fpos_t;

  using ::clearerr3     char* __old h" 1 3 4
# 70 "/ule;
e;
     e *_CurrentRuneLopen;
  using ::fscanf, __sav);
  handler_rec
{
    4
# 70 "/ueLoca;
      move;
  using ::rename;
  using e(__sav);
      return __rat;
  us--;
     rrno.h" 1 3 4
# 3 4
# 30 sk;



tru;
int snprint;
  usiude/eude/ctnclude    __ret = sp1 3 ale(0, "C");4
# 22 "/usr/fault.h" 3
# 1 "/usr/include/pthread.ead.h" 1 3 4
# 34 "/usr/include/pthnsigad.h" 3 4
# 1 "/usr/incl.h" 1 3 4
# 22 "/usr/_prec >= 0)
        __ret = spys/errno.h" 3 4
exte   int __ret;ude/pthread_impl.h" 1 3 4
# 35 "/5 "/usr/include/pthread.h" 2 3 4

#/usr/incsr/include/errno.h" usr/include/errno.h" ew_handler)();

:vprintf;
  using ::vsprintf;
}
# 36 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++io.h" 2 3

# 1 "/usr/include/darwin/3.3/c++/bits/stl_alwin/3.3/c++/ppc-darwin/bits/gthr.h" 1 3
# 98 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 1 3
# 37 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bi::fclose;
  using ::feo71 "/usr/include/gcc/darwin/3.3/c++
# 1 "/usr/include/pthread.h" 1 3 4
# 34 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/pthread_impl.h" 1 3 4
# 35 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errno.h" 3 4
# 1 "/usr/include/sys/er **, int)av);
   4
# 68 ""/usr/include/sys/errno.h" 3 4
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
# 38 "/usr/include/pthrern (_c < 0 || _c >= (1 <<8 )) ? 
int fgetc (FILE *);
int fgetp-darwin/bits/c++io.h" 3
# 1nsigned short);
unsigned long n     _RuneRange maplower_ext;
        _RuneRange mr_ext;

        void *variable;
        int varidio" 3
namespace std
{
  using ::FILE;
  using ::fpos_t;
se (FILE *);
FILE *popen (const char *, const char *);
ifaultRuneLocale"/usr using ::fopehar;
  using ::gets;
  using :eopen (const char *, c  using ::printf;
  using ::putc;
  using ::putchusr/include/ng ::ftell;
  using ::fwsing ::puts;
  using ::remove;
  u_prec >= 0)
;
  using ::getcn;
  using ::fprintf;
  using 4
extern "C" {
 void
         _exitts;
  using ::fread;
  using ::freowin/bits/gthr.h" 1 3
#
int atexit (void (*)(void));
  using ::scanf;
  using :: chown (const char *,t);
size_t confnt isdigit (int);
int isgraph (int);
int isloweislower (int);
int isprint (int);
int ispunct (int);
int);
int isspace (int);
int isupper (pper (int);
int isxdigit (int);
int);
int tolower (int);
int toupper (inc inline int
__isnt digittoint (int);
indarwin/3.3/c++/ppc-darwin;
int isblank (int);
int() throw() {shexnumber (int);
int isideogram (int);
int isnumber (int);
int is  !!(_DefaultRugram (int);
int isrune (int);
int isspecial (ar *, ...);
int ex/3.3/c++/cstdlib" 3ii (int);

}
# 158 "/usr/include/ctypedarwin/3.3/c++/ppc-dtern "C" {
unsigned long ___ruude/string.h" 1 3(int);
int ___tolower (int);
int ___toupper (int);
}
# 180 "/uchar *getcwd (char */ctype.h" 3 4
static inline int
__mask (void);
int isatty  _c >= (1 <<8 )) ? ___runetype(_csize_t);
int rmdir (cc++/ppc-darwin/biigned long _f)
{
        return (( ptrdiff_t;
# 49 "/usr/include/gcc/darultRuneLocale.runetype[_" 3 4using ::fclose;
  using ::feof(int, pid_t);
chchar *, size_t, const earch (const void *, const void        return !!(__maskrocale.run? 0 :
                !!(_DefaultRut unlink (cont void *, size_t);

extern char *optarg;
extern eturn (_c < 0 || _c >= (1 <<8 )) 
char *ttyname (ingetopt (int, char * const [], const pos.h" 1 3
# 4snprintf (char *, size_t, const 
# 33 "/usr/inclchar *, const char *, struct tm *);
char *timezone (int, int);
void tzsetwallbuiltin_va_list);
int __swbuf (int, FILE *);
}
imelocal (struct tm * const);
time_t timegm (struct tm * const);



int nanosleep (const struct timespec *, struct timespec *);

}
# 39 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unist  int tm_isdst;
        long tm_gmtoff;
        char3 "/usr/include/unistd.h" 2 3 4
# 91 "/usr/include/unistd.h" 3 4
extern "C" {
 void
         _exit (int);
int access (const char *, int);
unsigned int alarm (unsigned int);
int chdir (const chanclude/gcc/darwin/3.3wn (const char *, uid_t, gid_t);
int close (int);
size_t confstr (int, char *, size_t);
int dup (int);
int dup2 (int, int);
int execl (const char *, const char *, ...);
int execle (const char *, c ptrdiff_t;
# 49 "/usr/include/gcc/darwin/3.3/cnst char *, int);
int iruserok (unsi(const char *, const char *, ...);
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
pid_t nclude/gcc/darwin/3.3);
pid_t getpid (void);
pid_t getppid (void);
uid_t getuid (void);
int isatty (int);
int link (const char *, const char *);
off_t lseek (int, off_t, int);
long pathconf (const char *, int);
int pause (void);
int pipe (int *);
ssize_t read (int, void */signal.h" 3 4
typedef enum {
    t char *);
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



struct timeval/signal.h" 3 4
typedef r *, char * const sync_daemon (void);
char *brk (const char *);
int chroot (const char *);
char *crypt (const char *, const char *);
int des_const char *, int);
int iruinclu50void *, const void *, size_t);
void *memcpy (void *, const void *, size_t);netype[(1 <<8 )];.h" 3
}
# 36 "/ 3 4
# 9((1024) tm * const);
time_t timegm (struct tm * cons     _RuneRange maplower_ext;
        _RuneRangr_ext;

        void *varpedef long long int64_t;
typedef unsigned long l  union __sigactiovector" 3

#/cstdlib" 3
igned);
double strtod (const char *, char **);
longion_u;
        sigsechar *, FILE *)/cstdlib" 3
;
unsigned long
         strtoul (co 4
# 70 "/usmpl.hstring"ern _string" pl.h" 1  4
# 35 "/usr/inread (void *, size *, const  char *);
int setgid (gi 4
# 1 "/usr/incack_t;
# 285 "/usrram (int);
int isrune (ineek;
  oul (const char *, char **netype[(1 <<8 )];
  (const charconst;


int mblen (const char *, conste_t);
size_t mbstowcs (wcendian.h" 3 4
extern "C" {
unsigned long htonl neLocale;
;
int *, char *, int);
int cg
FILE *funopen (const void *, int (*)(void 3 4
extern "C 1)) / ((sizeof(fd_mask) * 8), size_t);
size_t wcstombs onst sr *, const wchar_t355h/devel/libgist/include/gist_defs.h" 1
# 10 "/Users/jmh/devel/libgist/inclunetype[(1 <<8 )];
        run/endian.h" 2 3 4
# 76 n_u;
        void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
        sigset_t sa_mask;
        int sa_flags;
};




struct sa_mask;
        int  u_int32_t;
typedef long long int64_t;
typedef unsigned long lion_u;
        sigset_t sa_mask;
        int sa_flags;
};
# 263 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t) (int);




struct sigaltstack {
        char *ss_sp;;
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
extern "Cap (char *, char *, int);
int cgvoid (*) (int))) (int);
}
# 63 "/usr/include/signal.h" 2 3 4


extern const char *const sys_signame[32];
extern const char *crwlockattr_t;

typedef struct _opaque_ptlude/gcc/darwin/3.3/c++/bits/int* __c_locale;





  templateposn;
};
# 76 "db_btres __out, const int __size, const char* __fmt,
                        _Tv __v, const __c_locale&, i* __old = setlocale(0, 0);
 ar* __sav = static_cast<char*>(malloc(strlen(__old) + 1));
       (__sav)
        strcpy(__sav, __ol/usr/include/gcc/dfalscat;
  usin  using_ptr(unsi1ude/ctype.h; char opaque;
      else
       ude/string.h" 3;
      eld(void


      using ::strcspn;
  u_impl.h" 1 3
}







extern "C" {
int __sint* __c_locale;





  template<typename _Tn_sign_posn;
};
# 76 "nt select (int, fd_set *, fd_set *, fd_set *, struct timeval *);
int setegid (gid_t);
int seteuid (uid_t);t min;
        rune_t max;
        rune_t map;
      ;
void sethostid (long);
int sethostname (const char *, int);
int setke     _RuneEntry *ranges;
} _Rsetlogin (const char *);
void *setmode (csswide_ptr(unsi1
extern in2leep (unsignepid, pid_t pgrp);
int setregid (gid_t, gid_t);
int setreuid (uid_t, uid_t);
int setrgid (gid_t);
int setruid (uid_t);
void setusershell (void);
int strtofflags (char v>
    int
    __convert_from_v(set_un3

# , const char**, fd_set *, fd_set *, struct timeval *);
             _Tv __v, const __c_locale&, int __prec = c = -1)
    {
      char* __old = setlocale(0, 0);
      char* __sav = static_cast<char*>(malloc(strlen(__old) + 1));
      if (__sav)
        strcr *);
int setp    __ret = sprintf(__out, __fmt, __prec, __v);
      else
        __ret = s  using :    strcpy(__sav, __old);
      setlocale(0, "C");

      int __ret;






      if (__prec >= 0)
        __ret = sprintf(__out, __fmt, __prec, __v);
      else
       t;






      if (__prec >= 0)

        int (*sputrune)
            (rune_t, char *, size_t, char **);
        rune_t invalid_rune;usr/include/gcc/darwin/3.3/c++/cctype" 1 3
# 47 "/usr/include/gcc/darwin/3.3/c++/cctype" 3


# 1 "/usr/include/ctype.h" 1 3 4
#data (const char*,const char*,unsigned long);
int checkuseraccess (const char*,uid_t,gid_t*,int,int,unsigned long);
int getdirentriesattr (int,vt min;
        rune_t max;
        rune_t map;
        unsigned long *types;
} _RuneEntry;

typedef struct {
        int nranges;
        _RuneEntryoid);

extern ed long,void*);

int fsctl (const char *,unsigned long,void*,unsigned long);



}
# 4     _RuneEntry *ranges;
} _RuneRange;

typedef struct {
        char magic[8];
        char encoding[32];

        rune_t (*sgetrune)
            (const char *, size_t, char  4
# 34 "/usr/include/gcc/darwin/3.3/stdint.h" 3 4
typedef u_int8_t uint8_t;
typedef u_int16_t uint16_t;
typedef u_int32_t uint32_t;
typedef u_int64_t uint64_t;



typedef int8_t int_least8_t;
typedef int16__t int_least32_t;
typedef nt fgse[(1 <st char*,const char*,unsigned long);
int checkuseraccess (ccess (const char*,uid_t,gid_t*,int,int,unsigned long);
int getdnt getdirentriesattr (int,void*,void*,size_t,unsigned long*,unsigned long*,unsigned long*,unsigned long);
int searchfs (const cr*,void*,void*,unsigned long,unsigngrp (pid_t pid, pid_t pgrp);
int sesetkey (const char *);
int setlogin (cint setreuid isatty (int);
int link (x_t;
# 65 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/hoin/3.3/stdint.h" 3 4::atexit;
  using :tf(__out, ___t;
typedef u_int64_t uint64_t;



typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef clude/mach/machine/vm_types.h" 3 4
# 1 "/usr/include/mach/ppc/vm_types.h" 1 3 4
# 77 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef unsigned int natural_t;
# 86 t min;
        rune_t max;
        rune_t map;
        unsigned long *types;
} _RuneEntry;

typedef struct {
        it);



int bcmp d_t vfork (void);

extern char *suboptarg;
int getsubopt (chanwhiteout (const char *);
int usleep (unsigneh" 2 3 4
# 64 "/usr/include/mach/vm_statistics.h" 2 3 4

struct vm_statistics {
        integer_t free_count;
        integer_t active_count;
        integer_t inactive_count;
        integer_t wire_count;
        integer_t zero_fill_count;
_t int_least32_t;
typedef char *, FIachine/vm_types.h" 3 4
# 1 "/usr/include/mach/ppc/vm_types.h" 1onst __c_localinclude/mach/ppc/vm_types.h" 3 4
typedef unsigneint natural_t;
# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_offset_t;






typedef natural_t vm_size_t;


g long uintmax_t;
# 65 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usrinteger_t active_count;
);



}
# 40 "/usr/include/pthrea 3 4

# 1 "/usr/include/mach/ho.3/c++/cstdlib" 3_types.h" 2 3 4

# 1 "/usr/include/mach/host_info.

      setlocale(0

# 1 "/usr/include/errno.h_t;
typedef u_int64_t uint64_t;



typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef ean.h" 1 3 4
# 27 "/usr/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/mach/ppc/boolean.h" 1 3 4
# 129 "/usr/include/mach/ppc/boolean.h" 3 4
typedefstatistics *vm_statistics_t;
typedef struct vm_statistics vm_statistics_data_t;
# 99 "/usr/include/mach/vm_statistics.h" 3 4
struct pmap_statistics {
        inine.h" 2 3 4
# 71 "/usr/include/mach/machine.h" 3 4
struct machine_info {
        integer_t major_version;
t wired_count;
};

typedef struct pmap_statistics *pmap_statistics_t;
# 63 "/nteger_t avail_cpus;
        vm_size_t memory_size;
};

typedef struct machine_info *machine_info_t;
typedef struct machine_info machine_info_data_t;

typedef integer_t cpu_t_t int_least32_t;
typedef symmetricude/mach/host_info.h" 2 3 4

# 1 "/usr/include/mach/time_value.h" 1 3 4
# pes.h" 1 3 4
# 77 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef unsigned h/ppc/boolean.h" 3 4
typedef int boolean_t;
# 28 "/usr/include/mach/machine/boolean.h" 2 3 4
# 128 "/usr/include/mach/boolean.h" 2 3 4
# 61 "/usr/include/mach/machine.h" 2 3 4
# 71 "/usr/include/mach/machine.h" 3 4
struct machine_info {
        integer_t major_version;
        integer_t minod);
      setlocale(0, "C");

      int __ret;






      if (__p_info {
        integer_t major_versiger_t *host_info_t;


typedef integer_t host_info_data_t[(1024)];


typedef char typedef u_int16_t uint16_t;
typedef u_int32_t uint32_t;
typedef u_int64_t uint64_t;



typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef c_info {
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size_t memory_size;
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;
};

typedef struct hosthroot (const char *);
char *cryp;
        integer_t microseconds;
};
typedef struct time_value time_value_t;
# 106 "/usr/include/mach/time_value.h" 3 4
typedef struct mapped_time_value {
        integer_t seconds;
        integer_t microseconds;
        integer_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/machfo *host_sched_info_t;



struct kernel_resource_sizes {
        vm_size_t task;
        vm_size_t thread;
        vm_size_t port;
        vm_size_t memory_region;
        vm_size_t memory_object;
};

typedef struct kernel_resource_sizes kar *, long, int);
int dethrow();
  };



 __p, int __c, simax/include/g *);
char *strdup (const char *);
size_t* __old = setlocale(0t sigrelse (int);
int sigs.h" 1 3
# 35 "
FILE *freopen *);
char *strale(0, "C# 67 "/usr/inclsk;



int setresr/include/include/sys/errnale(0, ng);
int mergesort (void_object_types.h" 3 4
# 1 3
# 35 "/usr/ine_info_t;
typedef struct mach(const char *, int);
in memchr(void* __p, int __c, si_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2ew(std::size_t, const std::nothrow_t&) th 1 "/usr/includde/mach/memory_object_types.h" 1 3 4
# 67 "/usr/include/mach/memory_object_types.h" 3 4
# 1 "/usr/include/mach/port.h" 1 3 4
# 91 " pmap_statize_t;

ror(const ypedef natural_t port_name_t;
typedef port_name_t *port_name_array_t;


typedef porcpu_load_info *host_cpu_inad_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 67 "/usr/include/mach/memory_object_types.h" 3 4
# 1 "/usr/include/mach/port.h" 1 3 4
# 91 "/usgument(const charrt.h" 3 4
typedef natural_t port_name_t;
typedef port_name_t *port_name_array_t;


typedef port_name_t port_t;
# 117 "/usr/include/mach/plude/mach/port.h" 3 4
typedef natural_t mach_port_urt *mach_port_array_t;
typedef port_name_t mach_port_name_t;
typedef mach_port_name_t *mach_port_name_array_t;
# 165 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_right_t;
# 174 "/usr/i(unsigned int ke/include/gcc/dadef natural_t port_name_t;
typedef port_name_t *ar *, long, int);
int des_setkey (const cposn;
};
# 76 "next_permutach/mac tm * const);
time_t timegt sa_flags;
};




struct sigactio 1 "/usr/include/mach/memory_object_types.hmove;
  using ::ar *);
void *        mach_port_msgoid *)amespace std
nsignnam (const chais;
};

typedef struct siga_port_flavor_t;e/mach/d(void);


 1 3 iid (uid_tfor(;; toupper (int
# 262 "/usr/include/oid *)ef structlloc:1;
  long, char *, long);
ii using ::strncp tm * const);
time_tj boolean_t preall
# 1 "/usr/! *, long)1 3 jt isdigit(int c{wn (const ch {
int isalnnst _j "/usr/include/vde/mm_offfset*, const char *, olean_t "/unclude/sched.h" 1 3  mach_port_qoian.h" nst void *, typedef vminclude/machine/ansi.h" (const char *);
void *sern int sched_get__t, int);
int sigaction (int, const struct sigaction *, struct struct mach_port_limits {
        mach_port_msgcount_t mpl_qlimit;
} mach_port_  int tm_isdst;
        long tm_gmtoff;
       mach_port_name_t;
typedef mach_port_name_t ypedef int mach_port_flavor_t;
# 262 "/usr/include/mach/port.h" 3 4
typedef struct mach_port_qos {
        boolean_t name:1;
        boolean_t prealloc:1;
        boolean_t pad1:30;
        natural_t len;
} mach_port_qos_t;
# 68 "/usr/incl pmap_stat;
unsiii)
  { return __bs.h" 2 3 4
# 1 "/usr/include/mach/vm_types.h" 1 3 s.h" 3 4
typedusr/include/mach/vm_types.h" 3 4
typedef vm_offset_t pointer_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t vm_object_offset_t;


typedef mach_port_t vm_map_t;
# 49 "/usr/include/mach/vm_types.h" 3 4
typedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
#ach/memory_objeprevort_limits {
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
# 68 "/usr/include//mach/meory_object_types.h" 2 3 4
# 1 "/usr/include/mach/vm_types.h" 1 3 4
usr/iecedes;
clude/mach/vm_types.h" 3 4
typedef vm_offset_t pointer_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t vm_object_offset_t;


typedef mach_port_t vm_map_t;
# 49 "/usr/include/mach/vm_types.h" 3 4
typedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_obje_behave_info {
        memory_object_copy_strategy_t copy_strategy;
  t_t;
typedef unsigned long long memory_object_size_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memory_object_t *memory_object_array_t;




typedef mach_port_t memory_object_name_t;



typedef mach_port_t memory_object_default_t;
# 106 "/usr/include/mach/memory_object_types.h" 3 4
tyypedef nt memory_object_copy_strategy_t;
# 142 "/usr/include/mach/memory_object_tusr/imory_objlude/mach/vm_types.h" 3 4
typedef vm_offset_t pointer_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t vm_object_offset_t;


typedef mach_port_t vm_map_t;
# 49 "/usr/include/mach/vm_types.h" 3 4
typedef mach_port_t upl_t;
tt;
typedef u_int64_t uint64_t;

;
typedef sh_port_type_array_tde/gist_d68 "/findnd, optofe/gcc/darwin/3.3/assize, const cbits/gthr.h" 3
# 1 "/usr/inc;
# 67 "/usr/includet, .st char *);
size_t;
int setgroups (int, const gitoull(const  ar *} _RuneEntry;

ty(unsig_t minor_version(*)(co*negative_sign;upl__types.h"2ar *iupl_1));
     (unsigntILE *, cvoid*,void*,unsigned=t(voi           devicg ::strcspn;
  u22 "/usr/ 3
# 35 "4
# 22 "/us_t;
typedef u_int64_t uint64_t;

y_object_attr_info_datasr/include/gccar *Predicat 35 "/us64 "/usr/include/mach/memory_object_types.h" 3 4
struct upl_page_info {
        vm_offset_t phys_addr;
        unsigned int
      sa_mask;
        int sao_array_t uplt truncate (const char *, off_t);
int ttyslot (void                 absent:1,
                        dirty:1,
                        precious:1,
                        device:1, pmap_statistics {
            :0;
};

typedef struct upl_page_info upl_page_info_t;
# 42atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exi int32_t segs(const charr *sbrkch/thread_starwin/bide/maechar *);
char *st int __size 3 4
# 27 "/usrs/gthr.h" 3
# 1 "/usr/# 1 "/usr/incdr;
        unsigned int.h" 1 3
# 37 "/usr/includfconst ach/e 4
# 6ag,lude/mach/ppc/thread_;
        char *tm_zone;
_impl.h" 1 3 4
# 35 "/usr/inc4
extern "C" {
canf (const char 3 4
# 27 "/usr_object_typusr/include/schsk;



info *host_sche    unsigned int_runize_t;);

extern ch= on_decim 2 3 4

# 1 "/usr/in_t memory_objec exception
   4
# 7nsigned ins;
};

typ);

}
# 23 "/usr/incluo {
        integey (int);
int link (cont r0;
      nsigned int);

extern char
# 1 "/ugned int r10;
        unsig_types.h" 2 3 4

# 1 "r_t major_h_port_t upl_t;
typedef mach_port_t vmh/thread_status.h" 3 4
# 1 "/usr/incwin/bits/c++io.h" 2 3

# o_array_t upl_page_lch/machine/thread_status.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef status.h" 3 4
# 1  1 "/usr/include/mach/machine/pc_thread_state {
        unsigned int srr0;
        unsigned int srr1;
        unsigned int r0;
        unsigned int r1;
        unsigned int r2;
        unsigned int r3;
        unsigned int r4;
        unsigned int r5;
  nclude/gcc/darwin/3.3d int r6;
        unsigned int r7;
        unsigned int r8;
        unsigned int r9;
        unsigned int r10;
        unsigned int r11;
        unsigned int r12;
        unsigned int r13;
        unsigned int c/darwin/3.3/c++/bits/fpos.h" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/35 "/usr/include/gcc/darwin/3.3/tatus.h" 1 98 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr.h" 3
# 1 "/usr/e/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 1 3
# 37 "/usr/includbetype[(1 <<8h/ppc/thread_sttypedef struct ppc_thread_ 3 4


# 1 "/usr/incluc/darwin/3.3/ctypedefh/ppc/thrsk (int, const sigs1> _Revxceptouble strtod (cotus.h" 3 4
typedef struct ppc_excep2ion_state uid (uid_tn_state {    gned d int r4; _c, unsig;
      ception;2locale(0,nsigned long pad0xceptale(0, "Con_decim_state {c/darwi1unsettion;
 ptrdiff_t;
# 49 "/usr/include/gcc/daong pad0;c/darwi2ude/mach/md lode/gcc/darwin/        unsition;
igned int srr0;
        unsigned int srr1;
     ts/c++io.h" 3
# 1 "/u_object_typ/usr/in.base(:sscanf;
  using ::tmize_t;

-r *, char **);
vint r5;
   ::ungetc;
  using ::tf(__out, __fmt, __v;
typedef mach_port_t vm_named_entry_t;
#lude/gcc/darwin/3.3/c++/ppc-darwin/bits/c++io.h" 2 3

# o_array_t upl_page_l[4];
        unsigned int save_pad5[4];
        unsigned int save_vrvalid;
        unsigned int save_pad6[7];
} ppc_vector_state_t;
# 132 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_thread_state ppc_saved_state_t;
# 1   unsigned int r26;
        unsigned int r27;
 s2)
  { return __buiread_status.h" 3 4
typedef struct ppc_exception_state {
        unsigned long dar;
        unsigned long dsisr;
        unsigned long exception;
        unsigned long pad0;

        unsigned long pad1[4];
} ppc_exception_state_t;
# 28 "/usr/include/mach/machine/thread_status.h" 2 3 4
# 71 "/usr/include/mach/thread_statuchine/thread_status.h" 2 3 4
# 71 "/us_builtin_va_lis
# 1 "/usr/include/mach/machine/thread_state.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_state.h" 3 4
# 1 "/usr/include/mach/ppc/thread_state.h" 1 3 4
# 28 "/usr/include/mach/machine/thread_state.h" 2 3 4
# 72 "/ust r14;
        unsigned int r15;
        unsigned int r16;
 1 "/usr/inclnt r18;
        untatus.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3 4
# "/usr/include/mach/ppc/thread_status.h" 1 3                   pageout:1,
        1 3 4
# 67tus.h" 1nsigned int ctr;
        unsigned ine_ptr(unsigned int key, uns 1 3 4
#  uplgordef structide_ptr(unsigned int key, uns reserved4 : 1;
         /mach/macnt r14;
        unsigned int r15;
        unsigned int r16;
        unsigned int r17;
        unsigned i             unsigned int dis : 1;
                unsigned int dp : 1;
                unsigned int du : 1;
                unsigned int d         unsigne 1 "/usr/include/mach/machine/exception.h" 1 3 4
# ned int dmr : 1;
                unsigned int reserved3 : 1;
                unsigned int reserved4 : 1;
                unsigned int reserved5 : 2;
                unsignde_ptr(unsigned int key, unsigned int m}

_typ7char *getenv (const char *);
 long
tdiorithm" 2 3
# 59 "/usr/include/ppc/types.h" 3 4
tystring      sttoi;
  using ::atol;
  using ::bsearch;
basic_thresh.tcc" 1   st4rwin/3.3/c++/ppc-darwin/bits/c++locale.h: 31;
        }bit3

inclspace std

   4
# 64 "/usr/includCharT *, int);
int7 "/u;
typedef shAlloc 1 "/utrlcatusr/inclu: 31;
      <v : 1;
       uns cv : 3::ime_;




strumcn_t;





struct processor_pm_regs {
stl_algep::_S__loa;
     (((npos - ime_ory_Rep))/ }u;
    : 1;))n/3.3 / 4nclude/stdio.h" 3 4
stru : 1;
                unsigned int cv : 31;
        s procon {
        mmcr0_t mmcr0;
        mmcr1_t mmcr1;
       termine/r11; : 1;nclu       unsigned int ov : 1;
                unsigned int cv : 31;
        }bits;
}pmcn_t;





struct processor_pm_regs {
      union {
        mmcr0_t mmcr0;
        mmcr1_t ;
  # 1 "/ut processor_pm_regs processor_pm_regs_data_t;
typedef struct proc}bits;
}pmcn_t;





struct processor_pm_regs {
      union {
        mmcr0_t mmcr0;
        mmcr1_t _S_empty_rg titorage[/ppc/( }u;
      p +  }u;
   2];
};l_cmd_data      uni

typecn_t pmct processo]ar **, uct processor_control_cmd {
    integer_t cmd_op;
    cpu_type_t cmdruid (uid_t);
void s 4
# 1 "/u_t m: 1;*/ppc/th        mmcr0_t mmcr0;
        mmcr1_t mmcr1  _S_trlcaructst c upl_pabeg cons upl_pang ::trlcat cv : voida                unsigie/gi : 2;
    # 148 "/uconst void *
      egs;
};
  us(voidas;
};cv : (leep (unsigned int); processor_c()._M_refcludes.h" 2 3 4_info.h"const [100] 68 "/usr/      uni     bopid_t fork sk;





infor/inc
typedef init }u;
   nst edefn_t pmc[2];
};
8;
        ned int r9;
    ;


__i++]st(voibegsigned int r12;
          booleanr_t major_    
typ     
       cre, unsiffseta exception
67 "/u3 4

:: setlocr->

typedata;
siz   i)(con_cookie;
    proceslength
} mach_port_qostry  boolean_t rypedef uninclude/mac;; isdigit(int c);;
int link (const nfo.h" oid " 3 4
rocessor_basicinclufo_t;



str" 3 4
typedef enumcessor_cpu 2 3

namenfo processor_cpu_load_incapacity" 3 4
typedef enumlong cpu_ticks[4];
};

 (const void *,      unsigned ininfo_t;


ty/processor_info.h" 3h" 3 4
typedef int processsic_info_t;



struct ppw_runtrocessor_basic" 3 4
typedef enum {h/vm_stat_loadpc/processor_inf;
};

typedef struct proce 3
# 35 "/default_policy;
};

typedef struct pro);
int isatty ork (void);
lops;
};

typedef strucstatus.h" 3 4
treak;
};

typedef struct pssor++_num;
        boolean_toolean_t is_master;
};

typd (pid_t, essor_set_load_inessor_basic_
  using   int default_policy;
};

typedef strut procesanoth      asic_info process
  u+ sctypsic_info_datinfo_data_t;
typedef struct o_data_rocessor_basic_::ptrdiff_t;
  using ::size_t;
}
# t processor_basic_inf_alloc() throw()nt processor_cdestro;
# 7info processor_set_lssor_b 73 "/us4
# 66 "/usr/include/mach/


struct pempnam (cond (pid_t, pid_t);
pir_t major_catch(...   boolean_t running;
      /mach/task_info.h" 3 4
# 1 "/usrthrowter;
};

typedef strucolean_tisupper (;
typedef mach_port_t vmnclude/mach/machine/processor_info.h" 2 3 4
# 66 "/usr <classmach/processor_info.h" 2 3 4




typedef integer_t *processor_info_t;
typedef integer_t *processor_info_array_t;


typedef integer_t processor_info_data_t[(1atus.h" 3 4
typedef struct_t *processor_set_info_t;


typedef integer_t processor_set_info_data_t[(1024)];




typedef int py_object_types.builtludexpet *pt_flavor_rray_t;
si0/include/gcc/dainteg_logic_error("at66 "t to o proc thresh .h"  null pint fg"nt processoressor_basic_dnewon_smitsc_cast<      uni>(stdsig_ct _pthreinfo_at;


struct policyt processor_basic_info process *por_basic_info_data_load_info {
 ef intpy_charsct processor_basic_infocy_timesha;_t;
typedef integer_t *policy_info_t;
typedef integer_t *policy_base_t;
typedef integer_t *policy_limit_t;
info_t;



struct p *pot processor_ef struct proces[er_t bt_nut_basic_info processor_set_t;
typedef struct processor_set_ude/mach/policy.h" 3 4
struct policy_timeshare_base {
        integer_nfo.h" 2 3 4        mmcr0_t mmcr0;
        mmcr1_t mmcr1; integer_t *essor_basic_nunsilavor_tcpedef integer_t proe/gcc/darwin/3.3/c++ne;
extedef integer_t processor_set_t depress_priority;
};

typedef struct polit processor_basic_info process    .h" 3 4
# 1eshare_limitnst void *, mode_tno_data_t;

typa_t;
typedef assig
# 1processor_basic_inf_rr_ic void (*new_handler integer_t *policy_+/cstdlib" 3
n/mach/task_info.h" 3 4
# 1 "/uinteger_t *polipaque[124]r/include/mach/popnam (cony;
        integer_tnntum;
};
struct policy_rr_limt;
typedef struct processor_seude/mach/policy.h" 3 4
struct policy_timeshare_base {
        integer_        mmcr0_t mmcr0;
        mmcr1_t mmcr1: 31;
      (trlcat: 31;
      voidstLE *, c: ..._basplue_listr


typp()rocesgrab(er_t proonst fr.get_av :  4
#(const char *);
int rrt policy_fifo_base *posr/inc       integer_t max_priority;
};
struct policy_fifo_info {
        integer_t max_priority;
        integer_t base_priority;
        bress_priority;
};   integer_t de   boolean_t depressetruct 3 4
tyrr_infrr_infifo_limit *policy_fifo_limit_t;
typedef struct policy_fifo_info *policy_fifo_info_t;

typedef struct policy_fifo_base policy_fifo_base_data_oolean_t depressed;,imeshare_infoposrr_base_data_tolicy_r policy_fifo_limit policy_fepress_prcheck



os **, char **);
int cgetmatch (char *ress_prfol     rr;
licy_pm_regs(conger_t processory_fifo_info policy_fifo_info_data_t;
# 208 "/usr/include/mach/policy.h" 3 4
struct policy_bases {
        policy_timeshare_base_data_t ts;
        policy_rr_base_data_t rr;essor_set_load_inf depressed;
   _data_t;
typedef struct policy_fifo_limit policy_fct policy_limits {
        policy_timeshare_limit_data_t ts;
        policy_rr_limf struct policy_fifo_info policy_fifo_info_data_t;
# 208 "/usr/include/mach/policy.h" 3 4
struct policy_bases {
        policy_timeshare_base_data_t cessor_cpur;
        policicy_base_data_t;
typedef struct policy_limits policy_li< 0 |inclu_rr_infh/task_info.h" 2 3 4






typedef natural_t task_flavor_t;
typedef integer_t *task_info_t;


typedef integer_t task_info_data_t[(1024)];







struct task_ba    integer_t suspend_count;
        vm_size_t virtual_size?_size;
a_t;
typedef 


stry_li) ;
typedelicy_timeshare_limit_data_t  + ;
  de/mach/task_info.h" 2 3 4






typedef natural_t task_flavor_t;
typedef integer_t *task_info_t;


typedef integer_t task_info_data_t[(1024)];


 depressed;
        integer_t depress_priority;
};struct policy_limits policy_lcy_rr_de/mach/task_info.h" 2 3 4






typedef natural_t task_flavor_t;
typedef integer_t *tasktruid (uid_t);
void setusers   integer_t max_priority;
        integer_t base_priority;
   rt.h" 3 4
extinfo_arruct upl_pa
typedef integer_t pro  integer_t csw;
};
typedef struct  struct pode/mach/task_info.h" 2 3 4






typedef natural_t task_flavor_t;
typedef integer_t *task_info_t;


typedef integer_t task_inf&  integer_t max_priority;
        integer_t _data_t     boolean_t depressed;
     
        unsiprioritpu_typress_priorit;
typedef st/darwin/3.3/fo_base r_basic_a = this->cy_fifo_base *poc() throw() essor_cputm_load_ress_priority;
};

type_auct policy_fifo_base *pooc() throw() priority;
};dispoef vmh" 3 4
# 1 "/u intege(_t ta void (*new_handlerolean_t*e/mat {
        integer_t max_priority;
};
struct policy_fifo_info {
        intude/sys/tssor_control_data u;
};

typedef struct 
    rwin/bh/task_inf_data_t;
typedef s;
# 17 (pedef long lonessor_basic_;
     essor_control_ch" 1_info_t;er (FI*_subtype;
     *, char *, w_bytesfifo_blicy..de3 4
# 5e(rent fgpretshare_shar*>(e/maruct p




}







extern "C" {
int __s   TASK_FOREGROUND_APPLICATION,
        TASK_BACKGROUND_APPLICATION,
        TASK_CONTROL_APPLIcludak_hng :/mach/mach_types.h" 1 3 4
rocesis_sharedde/mach/task_M_limite(0, 4
tyrole;
};

priority;
};data_spetask;
int ruserok UNSPECIFIED = 0,
        TASK_FOREGROUND_APPLICATION,
        TASK_BACKGROUND_APPLICATION,
        TASK_CONTROL_APPLN,
     s.h" 3 _base_data_t rr;
        poliocale;pedef integer_teLocale _Defaulessor_basic_olde_t;

ste/machr *, c 68 "/ustrlcat        policewchar *, .info_data_nclude/ctLocale.r


struct thretruct task_rc*, ...essor_cpu_l
   r *temp      time_valuessor_basic_how_mucruct pnfo_data_ 3 4
     pu_usage 1 3 4
# 66 "/usr/include/mach/task int so {
     > _info_t;de/mach/task_policy.h" 2 3 4
# 56 "/usr/includ/task_policy.h" 3policy.h" 2     policy_t policpage;
     4096at;
  using     policy_t policm3 4
#rt (d *, sizread    task_ (ude/*nt processorfo_data_t;
typedef struc_policy {
LE *)truct thrlong)# 77 "/usr/includ::ptrdiff_t;
  using ::size_t;
}
# 50 "/usr/in   }u;
      pcy_flavor_t
        boolean_tcy_t;
# 91 "/usr/include/mach/threau_subtype;
     h" 3 4
enum t process       unsigned int vrunt;
        inteicy_rrd_count;
  thread_policy.h)eger_t mach_fat;
typedef struct policy_atural_t n2*o_data;
};
?mach_types.h" 2 3 4
# 1 "/usr/includetypedef s:ruct thread_srr_info *policl;
  using ::strncmd_standard_policy_data_t;
typedef mach/thread_policyeshare_limit p

typedef struct p;





osthread_policy_t;
#a_t;
typedef struct processor_basic_in        de/molic4
# 66 "/usr/inc 4
# 7y;
     cy thread_extended_policy_data_t;
typedef struct threinteger_t cpu_ussor_info.h" 1 3 4
# 65 "/usr/include/em_ti;
  u_t;
# 154
# 66 "/usr/iwn (const ch integer_t *policy_in

typedef struct py_rr_infoask_pol*task_policy_t;
# 111 "/usr/def integer_t *policy
        uint3include/mach/task_policy.h" 3 4
enum task_role sr/include/mach
  using ::getc;
  using ::gy;
       2 3 4
# 9r/incl


typedetask_policy.h" 2 a_t;
typedef mot fs        integer_t cpu_usint m       uint32_t computatiopaque[124k_special_port_tach/"/us




struct thread_precy.h" 3 4
stratural_thread_prece {
      atural_ntum;
};
struct policy_  TASK_UNSPECIFIED = 0,
        TASK_FOREGROUND_APPLICATION,
        TASK_BACKGROUND_APPLICATION,
        TASK_CONTROL_APPLreservthread_flavor_reicy thr
        unsigres >[(1024)o_data;
};
ern "/usr/include/mach/task_special_pnst void *, mode_tclude/mach/c mmcr2_trocessor_set_iuct policy_

strshare_li: 31;
      clude/macuct policy_ti 3 4
typedef<[(1024)];




typedef int slecludt[(1024)];






struc};

typedef struct thread_basic_info threa 4
typedef natural_t task_ppriority;
};clonolicy 3 4
#  -def int *clock# 111 "/usr/include/mach/task_policy.h" 3 4
enum task_role {
        TASK_RENICuct task_category_policy *task_category_policy_t;
# 75 "/usr/include/mach/pmcn_t;





struct processor_pm_regs {
  isaoolean_t depresseorts.h" 1 3 4
# 66 "/usr/include/m;
# 76 "_special_porthread_precedence_policy thread_p 4
# 7ss_priority;
}; int vm_machine_attrib_types.h" 2 3 4
 83 "/usr/include/mach/mace/mach/task_policy.h"s;
};
sf struct policy_fifo_l     boolean_t p     clock_res_t tvpolicy;
};

typedetask_role typesolicy *thread_t/mach/vm_ink_role {
        TASK_R, char *, int);
int nst void *, : 31;
      l_t ta1ecedize_t);
sizM_i.h" ruct p *task_policy_t;
# 111 "/usr/vm_behavior_t;
# 8de/mtypessr/include/4
# 69 h/machhread_policy_t;
# 91 "/usr/incle/mach/task_policy.h"ch_timespec_t     r11;
" 1 oc() throw() {h" 2 3 4
include/sched.h" ude/mach/policy.h" 3 4
struct policy_timeshare_base {
        integer_tbits;
}pmcn_t;





struct processor_pm_regs {
_stanROUND_APPLICATION,
        TASK_CONTROL_APPLICATION,
   nfo proce      _rr_info_t;basic_info_data_t;
v : pedef long long int64_mcn_t;





struct processor_pm_regs _policing3 4

ead_basic_3 4
# 5olicy {
>/vm_ mmcr2_t)       unsigleep_type_t;
typedef int clock_id_t;vm_regionuct pad_basic_h" 3 4
tyr2_t mmcregion_recu        task_role_t rl_cmd_data_   p;types;
                unsigned int reserved : 31;
        }bitarwin/thread_basic_if struct thread_basic_infoe;
        boolsubtruct threa128       boolean_t reserv
# 77 "/usr/include/mach/mach_types.h" 2 id *, mode3 4
alue_t uinclude/mach/threa)ct threadime_t;
# 1     boolean_t p     boolextrad_t);
unsigned  3 4
# 56 "/usort user_wired_count;
};

typedef%f struct thck_attr_t;
typeasic_info_daoc() throw() {egion_basi_typeasic__policy.h" 3 4
struct thread_struct vm_region_basic_info_64 {
        vm_prot_t protectd (pid_t, pid_t) integer_t struct thed;
       egion_basic_info_64 *vm_region_basic_info_64_t;
typedeed;
        vm_region_basic_info_64 vm_region_basict reserved;
a_64_t;





struced;
       ion_basic_info {
        vm_prot_t protection;
        vm_prot_t max_protection;
        vm_inherit_t inheritance;
        boolean_ad_basic_es.h"poli4
# tum;
ypedef struct task;
typ.egory_pol;
typedef strad_staessor_se*pol 3 44
# )d_stauct policyp_load_info_t; 4
# 7info_t;
# 118 "nt pagesedence_policy thread_prt pages


structisupper ( 3
# 35 "nsignedy;
};
struct policy_rr_info {
        integer_t max_priority;
        integer_t base_priority;
        integer_t quantum;ICATION,
     typede*vm_region_info_t;
ty*thread_info_th" 2 3 4




struct thread_basic_infrequested    *, ...


strupu_loe;

sc_info_data_t;
typedef struct thread_basic_inforead_basic_info_t;
# 77 "/usr/include/mach/mach_types.h" 2 3 4
# 1sr/include/mach/thread_policy.h"    boolea 3 4
# 56 "/usr/include/mach/threacy_flavor_t;
typedef integer_t *thread_pol_policy.h" 3 4
struct th_standard_policy  4
typedfo *vm_regio> ...)resident(void);_mode;
};

typehread_standard_policy thressor_basic_info processgion_top_info *v2*ry_policy {
andard_policy *thread_standard_pp_info vm_region"/usry_policy {de/ma;
typ*, char *, int);
int cg struct vm_region_top_info vm_regiobmap_info {
ach_types.h" 1e_t;
t/mach/clock_types.h" 3;
};

typedef strd_policy_data_t;
typedef struct thread_exruct thread_ex_t inheicy_timeshart32_t constraint;
        boolean_t preemptible;
}ask_info.hinfo {
      onstraint_policy thread_time_constraiclude/mach/policy.h" 3 4
sinfo_data_t;
typ
struct policy_fifo_limit {
        integer_t max_priority;
};
struct policy_fifo_info {
        intch/thread_special_ports.h" 1 3 4
# 79 "/usr/includepe_t depressed;
        integty;
};

typedef struct>/portype_t;
typedef ileep_type_t;
typedef int clock_id_t;
tyiznfo_dask_role task_role_t;

st(1024)];






struc       boolt fwolicy_rr_bae/machapp      ing :: void (*_ {
        vmef structt fwvm_region_basie/macherr/inegioce_policy_trol_cmd_t;
# 28 "/usr/include/mach/machine/processor_info.h" 2 3 4
# 66 "/usr/include/mach    int
    _es.h" 2 3 4
# 1 "/usr/include/mach/task_polic




typedef integer_t *processor_info_t;
typedefute_v4
# ( 1 3 4
#    1," 1 3 4
#    , const __c_l __kachine/thread_statusigned int page2,1024)];


typedef integer_t *   booleavm_behavior_t;
e_liksctypk       unsig 3
# 35 nt pages__saff vm_sctyp unsi4
# 69 "/usr/include/mach/vm_x_priority;
trol_cmd_t;
# 28 "/usr/include/mach/machine/processor_info.h" 2 3 4
# 66 "/usr/include/ma_port_type_array_offset;
        unsigned int user_tag;
        unsigned int pages_resident;
        unsigned int pages_nsignehared_now_private;
        unsi *);
char *stres_swapped_out;
     _offset_t phys_addr;ks.h" 3 4
nst void *meshare_info *policy_timeshare_info_t;

typedef struct polsigned sh     booleameshare_info olusin ext/usr/iwin/3.3/c++meshare_info maxn_submap_     unsigt processor 4
# 7_type"/usr *poypedef struct policy_n_flavor_t;
typedef int vm_rnt pages_gion_submager_t thread_infclude/ineLoc69 "/usr/ie.cc"
#pragural_t th 64 "jmh/doltruct 4
# truct policy_times 4
# 34 "/usr/inccy_timeshare_l        integusr/incsigned shorrt shadow_depth;        TAS        integer_t max_priority;
};
struct policy_fifo_info {
        integer_t max_priority;
        integer__policy.h" 1 3 4
# 37 "/usr/include/mach/taskn_sub pages_s_base_data_t rr *thread_info_tale;ata_t ts;
        policy_rtypedef int s_base_data_t rr2" 2 3 4
# 35 "/eLocale _Defaul    policy_t policstr        tpoliinfo_t;
typedef stru/kmolean_ttrol_fned short user_wir3 4
ofss bad_int clock_id_t;
tmach/kern_returata_t tool useest*sv_hedefregiontrol_flun_stat
# 1 "/us    policy_t polic    od_infot kmod__infn2eger;
} kmod_reference_t;
# 7
typedef/mach pages_sturn.h"  "/us;
        _RuneRange mapupperolicy_flct thread_timeint mch/kmoit {
        integer_t max_priority;
};
struct policy_fifo_info {
        integer_t max_priority;
        integer_de/mach/machine/kern_return.h" 2 3 4
# 65 "/usr/inm_regio.h" 3 4
# 1 "/usr/include/mach/mata_t[(1024)];

k_role_t;

stor_t;
typedef void* ;
};

typedef structuser_wiubmap_info_t;
typedef strur *, cmach/clock_typesbmap_info_64 {
 ude/mach" 1 3 4
# 66 "_depth;
        unsignedmach/mach_tmach/mach_typess_prsr/includ(unsigned long);
unsigned short mod_infoed char shar*data);

typedef struct kmod_info {
        struct kmod_info *next;
        int info_version;
        int id;
        char name[64];
        char version[64];
        int reference_count;
 rr_base_data_t rr;
        policy_fifo kmod_reference_t *refe
  usipedef   str_t;
typede_referency_rr_m_size_t size;
        vm_size_t hdr_size;
        kmod_start_func_t *start;
        kmod_stop_func_t *stop;
} kmod_info_t;



typedef kmod_inf_limits {
        policy_timeshare_limit_da_t ts;
        policy_rr_, void *data);

typedef struct kmod_info {
        struct kmod_info *next;
        int info_version;
        int id;
        char name[64];
        char version[64];
        inttruct task_basic_info {
  typedef integer_t thread_i
  usingssorize_t size;
        vm_size_t hdr_size;
        kmod_start_func_t *start;
        kmod_stop_func_t *stop;
} kmod_info_t;



typedef kml_size;
   , void *data);

typedef struct kmod_info {
        struct kmod_info *next;
        int info_version;
        int id;
        char name[64];
        char version[64];
     or_t behavior;
        vm_offset_t objef mach_port_t processor_set_control_t;
typedef mach_port_t semaphore_t;
typedef mach_port_t lock_set_t;
typede_t(struct kmod_info *kiod_info_t;



typedef kcy_rr_limit p      integer_t max_priority;
};
struct policy_fifo_info {
        integer_t max_priority;
        integer_n_suboppc/thr+_t;
typedef mach_lh

typedef struct ata_t ts;
        fo_version;
        int idprothach/vm_attributregion_info_64_t;
typedef int *vm_region_recurse_info_t;
typec/darwin/3.3/c++/ppc-dase_info_t;
ty{
      uni      vor_t *processct_array_t;rt_t proce     uct task_evelhy *thread_se_info_t;
tych/maclude/mach/mac.t *start;
   info_ths char *c
typedef task_m_region_d_t read_tt cpu_usarray_t task_port_array_t;
t_count;
        u3 4
typedrt_t io_master_t;
typedef mach_port_t UNDServerRef;
# 141 "/usr/include/mach/mach_types.h" 3 4
typedef task_t *task_array_     intet;
ty;
typedef processor_set_t *processor_set_array_t;
typedef processor_set_t *processor_set_name_array_t;
typedef processor_t *processor_array_t;
typedef thread_act_t *thread_act_array_t;
typedef leach_types.h" 3 4
typedef tadger_t *ledger_arrpedef task_
typedef task_t task_port_t;
tunsigned losk_port_array_ifo_limit_lude/m/include/mach/mact;
typedef thread_array_t thread_port_array_t;
typedef ipc_space_t ipc_space_port_t;
typedef host_t host_name_t;
typedef host_t host_name_port_t;
tde/mach/machine/kern_return.h" 2 3 4
# 65 "/usr/include/mahared_now_private;
        unsh" 3 4
typedefata_t;
tef mach_port_t mem_entry_name_r/inc6)];
# 90 "/usr/inch" 1 3 4
# 64 "edef exnclude/mach/kern_return 4
#     unsig    (1024)];



_refen1) "/usr/s.h" 3 4
stleep_type_t;
typedef int clock_id_t;
tmach/kern_retur" 3 4
# 1ef_cportd *data/usr/i.h" 2 3 4
# 1 "r/include/maolicy_rr_base_data_t;/machine/kern_reemulatiy_rr_limit pol = -1,
        TASK_UNSPECIFIED = 0,
        TASK_FOREGROUND_APPLICATION,
        TASK_B}bits;
}pmcn_t;





struct processor_pm_regs {
      union {
        mmcr0_t mmcr0;
        mmcr1_t mmcr1clude/ruct task_basic_info {
    _base_data_t rr)ssor_s 3 4


# 1 "/usr/in
   hdr_size unsigned short user_wirrence {
        struct kmod__timuct policy_ct_id;
   _port_arrary_t;
#olicy thread_ruct one {
        int tz_ 1 "/usr/a_t;
typedef struct 
typfunc_t(struct kmcy_rr_id (uid_t, uid_t);pnam (cinclude/mach/mach_types.h" 2 3 4
# 45 "/usr/include/pthread.h" 2 3 4
# 74 "/usr/include/pthread.h" 3 4
extern "C" {
# 168 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sys/tim
   _t;
typedef mach_port_t processo rr;
        policyuct timeval {
     p_info *vm_region_submap_info_t;
typede     boolx
   ruct e;
}   time_value_t system_bas/mach_types.h" 2 3 4long cconst st;
   h" 1 3nfo *2;
  st s" 1 3 4
# 91 "a_t;
typedef stt intn.h"int,r *tst s alarm_t;nize_t mbstowcs (;
        ust sypes.h" 1 3 4
#;
};

meval it_interval;
        struct timeval it_value;
};




struct clockinfo {
        int hz;
        int tick;
        int tickadj;
        int stathz;
        int profhz;
};
# 179 "/u     integer/time.h" 3 4
struct timeval {
     eval *, struct timeval *);
int futimes (int, ended_inh (ionst structended_poliregion_submap_info_nst void *, ;
int getitimer (int, struct itimerval *_ctrl_port_t;
typ        vmsttime;
}t *inheritsched);

int pthion_a_t;
typedef ttr);
nt, const  itimervy_rr_limit polictended_pok_attr_t;
typedef h (int   intt, c      TASK_RENICED = -1,
ead_asigned intuct processor_control_cmd {
    integer_t cmd_op;
    cpu_type_t cmd_cpu_type;
    cpu_subtype_t cmd_cpu_subtype;
    union processor_control_data u;
};

typedef structsr/inc9 "/usr/include/sys/time.h" 3 4
extern "C" {
int adjtime (const struct timeval *, struct timeval *);
int futimes uct vm_restruct t;
typedef struct policy_t struendencies_cmattr, stad_aticy *thread_extesched);

int pthread_attr_getschedparam (condo;

typedef struct thread_extendede *);
int setitimer (int, const truct itimerval *, struct itimepages_swapped_out settimeoar *, ...);
int exsk;





pos--ng" 2      TASK_RENICED = -1,
onst struct timeval *, const struct timezone *);
int utimes (const char *, const struct timeval *);
}
# 169 "/usr/include/pthread.h" 2 3 4




int pthread_attr_destroy (pthread_attr_t *atacksi
int pthread_attr_getdetachstate (const pthread_attr_t *attr, int *detachstate);

int        booegion_basic_info_64 *vm_region_st structd_attr_rn "C" {
extern intst st*vm_rlicy thread_exteonst struct time sched_para(*)(ceval *, t gettimread_a; o_data_t;

typhed_param *param)eq


# 1 "/u[ad_con]y_rr_lhread_attr_t *atrval *);
int settimeotr, void *stackaddr);

int pthread_attr_setstacksize (pthread_attr_t *attr, size_t stacksize);

int pthread_attr_setstack (pthread_attr_t *attr, void *stackaddr, size_t stacksize);

int pthread_cancel (pde/mach/memorysr/include/sys/time.h" 3 4
extern "C" {
int adjtime (const struct tim);
int gen vm_repthrea(1024)];




2;
  adcast (pthreint *inheritsched);

int pthpthread_attr_getschedpolpthread_ahread_preceond,r_t *attr, int *policy);

int pthr, int policy);

int ptd_cond_signal (pthread_cond_t *cond);
int pthread_cond_wait (pthread_cond_t *cond, pthread_mutex_t *mutex);

int pthread_cond_timedwait (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *8 ))me);


int pthread_condattr_init (pthread_condattr_t *attr);
int pthread_p_info *vm_region_submap_info_t;
typedef struct vm
typed/mach/clock_types.h" 3 4
t1 3 struct thrdcast (pthread_conrence_lisicy);

int pthrd_attr_t *attr, const struct sched_param *param)tr_t *attr, int *pshared);
e_polt pthread_condattray_t threadfo *vm_region_bead_attr_setstackaddr (int --inclattr_t *attr, void *stackaddr);

int pthread_attr_setstacksize (pthread_attr_t *attr, size_t stacksize);

int pthread_attr_setstack (pthread_attr_t *attr, void *stackaddr, size_t stacksize);

int pthread_cancel (pde/mach/memnot t2);

void pthread_exit (void *value_ptr);
int pthread_kill (pthread_t, int);
const struct timeval *));
int gettimehread_condattr_t *at *, struct timezon!param *param);


int pthread_join (pthrecond,ocessor_set_info_data
int settimeofday (const struct timeval *, const struct timezone *);
int utimes (const char *, const struct timeval *);
}
# 169 "/usr/include/pthread.h" 2 3 4




int pthread_attr_destroy (pthread_attr_t *attr);
int pthread_
int pthread_attr_getdetachstate (const pthread_attr_oceiling);


int pthread_mutex_trylock (pthread_mutex_t *mutex);
int pthread_mutex_unlockthread_cond_t *cond, const pthread_conttr_destroy (pthread_mutexattr_t *attr);
int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *attr, int *prioceiling);

int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *attr, int *protocol);

inad_t thread_mutex_setprioceiling (pthread_mutex_t *mutex, int prioceiling, int *old_priad_act_arre);
int pthread_setcanceltype (int type, int *oldtype);nst sigset_t *, int *);
int pthread_getschedparam (pthread_t thread, int *policy, struct sched_d_mutex_unlock (pthread_mutex_t *mutex);
ad_t thread, void **value_ptr);

int pthread_mutex_destroy (pthread_mutex_t *m;
int pthread_mutex_getprioceiling (const pthread_mutex_t *mutex, int *prioceiling);

int pthread_mutex_init (pthread_mutex_t *mutex, const pthread_mutexattr_t *attr);

int pthread_mutex_lock (pthread_mutex_t *mutex);ad_mutexattr_t thread);
int pthread_setcancelstate (int state, int *oldstate);
int pthread_setcanceltype (int type, int *oldtype);trol, void (*init_routine)(void));

pthread_t pthread_self (void);
int pthread_setschedparam (pthread_t threathread_cond_t *e_pol const pthread_condatt

int pthread_key_create (pthread_key_t *key, void (*destructor)(void *));

int pthread_key_delete (pthread_key_t key);
int pthread_setspecific (pthread_key_t keyinimevalude/pthread.h" 3 4
# 1 "/usr/include/sys/time.imer (.h" 3 4
extern "C" {
int adjtisr/include/mach/kmod.h" 2 3state (const pthread_attr_t *attr, int *detachstate);

int pthread_attrorence_list;
        vm_addr   int32_t tion_submap_info_ tv_usec;
};
# 93 "/usr/include/sys/tit intuct policy_on_extended_iint sched (pthread_attr_t  itimerval 4];
} kmod_load_with_dependencies_c;

inmular_des unsigned nint     e *);
int setitimer (ih" 3 4
struct itimer_t tk_info.h" 1 3 4
# 66 "m (pt__        devlude/mac kmod_refer_des_count;
        un_rwlock_t *rwlock);
int pthread_rwlock_wrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_trywrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_uh" 2 3 4
# 35 "/usr/include/mach/kmod.h" 2 3 4
# 54 "/usr/include/mach/kmod.h" 3 4
typedef ad_rwlockattr_init (pthread_rwlockattr_t *attr);
int pthread_rwlockattr_destroy (pthread_rwlockattr_t *attr(int);d_attern _rgs_t;




int read_rwlockattr_getpshared (const pthread_rwlockattr_t *attr, int *pshared);

intsched (pthread_attr_t  void *datd (pthread_rwlockattrrr_destroendencies_cr_destreferencmulation_pthread_rwlockattr_t *attr, int pshared);


d_key_ pthread_is_threaded_np (void);


int pthread_main_np (voachine/thread_status.h" 2 3 4
# 71 "/ut_t threnc_t(struct kmod_in pthread_mach_thread_np (pthread_t);
size_t pthrd_key_et_stacksize_np (pthread_t)t *rwlock);
int pthread_rwlock_wrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_trywrlock (pthread_rwlock_t *rwlock);
int pt;
typedef mach_p);




int pthread_create_suspended_np (pthread_t *thread, const pthread_attr_t






struct task_event_once_t;
typedef pthread_mutex_t __gtred);




int pthread_is_threaded_np (void);


int pthread_mai alarm_t; pthread_mach_thread_np (pthread_t);
sze_t pthread_get_stacksize_np (pthread_t)t *rwlock);
int pthread_rwlock_wrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_try wrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_unlock (pthread_usr/inclue (once, func);
  else
    return -1;
}

static inline int
__gthread_kr_t *attr);
int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *attr, int *pshared)_gthread_key_t *key, void (*dtor) (void *))
{
  returol_flavpthread_rwlockattr_setpsharepthread_key_t __gthrea_t *attr, int pshared);




int pthread_is_threaded_np (void);


int pthread_main_np (void);
rt_t pthread_mach_thread_np (pthread_t);
size_t pthread_get_stacksize_np (pthread_t);
void * pthread_get_stackaddr_np (pthread_t);


int pthread_cond_signal_thread_np (pthurn pthread_key_delete (key);
}

static inline void *
__gthread_getspecific (__gthread_key_ 4
# 54 "/usr/include/machme);




int pthread_create_suspended_np (pthread_t *thread, ne int
__gthread_setspecific (__gthread_key_t key, const void *ptr)
{
  return pthread_setspecific (keendencies






struct task_eventgthread_once_t;
typedef pthx_lock (__gthread_mutex_t *mutex)
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
    return pthreariority;
 : 1;
 ority;
     unsority;
ed char share_mode;
_Srocessorclude;
typedef processor_set_t *processor_set_array_2 3 4
# 54 "/usr/4 "/usr/include/mo *prigned int cv : _t *thread_actbufsizpedef long long int64_t;
typedeonst __int_type _S
typedef on_submap_info *vm_retrol_flavor_t;
typedef void* nt_type _S_leef sdependencies_cmd_red);


eft = n/3.3_item_t;
ay_t;
# ;
  using id);


mach_port_tnt_tyocessor_por  int nt_tyntum; 3 4
type/include/gc  exteedefype _S_dority;def processorshar>0x04tic const __intthread_rwloistream0x0800_policask_arra>>9 "/usr_S_skipws = 0x,hare_li& 0x04  static const __int_type oS_skipws = 0x1000;
    sta<<9 "/usrt_type _S_uppeessor_senitbuf = 0x2000;
    static const __in_S_skipws = 0x1000;get/incc const __int_type _S_unitbuf , sharstfield = 0x0020 | 0x0080 | 0x0010;
    static const __int_type _S_basefield = 0x0002 |ectio9mh/devel/libgist/include/gist_defs.h" 1
#   vm_inherit_t inhe_typ5void *, const void *, size_t);
voidthreshmult : 1s exception
  {
  public:
    exception()o_bale_orityes.h"     truct {
          
 _type _p = 0x
hread_public:nt pths/appleaunata_ed_is_t4 : 1;
 ead_basiority;facr, void ority;itpos;
 ority;
}mpnce_polifr/kmot __int_type _S_intype _S_out =const __int_  vm_offset_t objecttype   unsigtype _S_rlcat ;
}
#        use__typeconst _p = 0xconsype _S_trunc = 0x20;
  };
}
# 45 "/usr/inclu
          hasits/fpos.h" 2 3
# 1 ";
# 17hread_unsignedticude/gcc4 : 1;
  nonts/gisupper "/usr/include/gcc/darct *at= 1L <<3/c++/ctime" 1 3
# 48 "/usr/innumeriime;c/darw      time" 1 3
# 48 "/usr/incol _S_de/gcc/da
# 1 "/ "/usr/include/gcc/dartim
{
  using3::clock_t;
  using ::time_t;monetarnt;
c/darw4

  using ::clock;
  using ::essct ve;
  usin5::clock_t;
  using ::time_t;alfo.h(clude/|sr/includ|ace std
{|hread_policy_t;
# 91 "/usr/include/mach/thre
  us|::difftime|  using :chine/kerp = 0x(+/cwchar" 3
r/include/gs.h" 2 3
# 1 peciata_cc/darwin/3.3/c+expliciimeval+/cwchar" 3
e_poli, fun/3.3/c++/cwchar" 3
extern "C"
sr/iessor_sebstate_t;,de/gcc/dar    t sv_maskespace std
{
  using ::mbstate_t;
}xtern "C"
adypedinclude/gcc/darwin/3.S_trunc = 0x20;
  };
}
# 45 "/us+/cwchar" 3
extern "C"
{
  tfo_6typete_tng :.3/c+~clude/gcc/darwin/3.3/c+pace std
{


1000;
    sta=ar" 3
extern "C"
{
  typedef struct
  T>
    class fpos
    {
    public:

 eval *);
mb_intpace std
{





{
  typde/gcead_basiocessoct macam/gccst) { _Mh/memory_objee_type _MM_st;

    public:
            }typedef): _M_osr/inclff(streamoff()), !M_st(__state_type()) { }

      fpos(st   poliolean_t!n_port_off()), _M_e_type _residype
      state() const     
                unsigned int cv : 31;
  memory_objeamoff()), ()const __int_type _S_hex =0x0008;
    static consta);
typedef kern_reeturn *this; }

      fpos&
      operator-=(ste);




 _M_st = _/usr/t; }

     globalos.h" 2 3
# 1 "/usr/in "/usr/includ      __statorityicstreamoprivatet __intconst*;



nst __s);
           fpos
S01;
  icoperator-(streamoff __off{
    ar **, const "/usr/includttr, intSd4 : 1;
ies_getsche6     __t -= __off;
        return _prot___t;
      }

     0_control_ock_t;
  using :state_ __t;
      [n __t;
      }

  hread_policy_t;
# 91 "/usr/include/mach+s& __pos) const
      { rr_cot
  {
    int __fill[6];   fpocc/darwin/3.3/c+moff __sr/include/sys/t_S_iniar *pe_t; 3 4


# 1 "/usr/!off)
      pthread_y    return ern_retur= __off;
  : 1;
 d
      normsitiod4 : 1;
  e_t> strtreamoff void
    M_coalesc/bits/fpos.h" 2 3

namespace std
{






  template<typename _ /inclS_ate = 0x02;
  ::const  static const __inttype _S_out =p = 0x;
    static const ude/gcc/_type _ype _S_trunc = 0x20;
  };
}
# 45 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cwchar" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cwchar" 3
_t;
      }

    Atomic_word     un *, FIct sche_type*os
  _typect schettr, intd(void); int32_t fd_; }

  M_uct {   operator!=(const fpos& __pos) const
      { return _M_oreturn _M_off != __pos._M_off; }

      );
        __t += __off::regide/gcc/S_id_clude[r* __s);

  void
  __throw_length_error(consr/inclur* __s);

  void
  __throw_out_of_range(constce std
r* __s);

  void
  __throw_out_of_range(const
  ur* __s);

  void
  __throw_out_of_range(const:difftim);

  void
  __throw_overflow_error(const charusing :r* __s);

  void
  __throw_out_of_ranggth_error(c_type   bool
       strea

      void
    M

    void
  _gcc/darwin   poli__acast(vadd(&

  void
  __,aticf() consdarwin/3.3/c++/iosfred_pr 2 3

namespace std
{
  te        unsigexch bad_andpename _CharT, typena-1
typemachine/thr


        vm_offset_t offset;deleteread_esident;
        unsigned int pages_sht r13;
        un() consconstead_onceonstS_unarray  typedass basic_is; }



  template<typenamebad_typ

  temp,, __streamof~ass bacc/darwin/3.3/c+ass basic_istream;c/darwin/3.3/c++/e_type _M_st;

  _CharT, typen __off, __state_h_port_t_same* __sn(streamoff __o  strucd_attrf uint64_t v(*)(cttr, int info {
        thread_at       cpn __t;
      }

   ff != __pos._M_off; }

   el (void);
int punsigned long, cpename = (strc++/nr* __s);
_ickat char_traitf th]ize_t mrt_name_t;
typedef t_name_t *poin/3.3/c++/ios_64_t;
t_t;
      _traits<_Cha*template<tc/darwin/3.3/c++/iossic_istringstreK_GRAPHIClate<typow_ios_failure(const chCharT, typename _Traits = chts/fpos.h" 2T>,
           typename _c/darwin/3.3/c++/iosinstallits/fpos.h" 2 3
# 1_leng,_bad_ty"/usr/include/gcc/darwin/3.3/c++/cwchar"sr/include/sys/t typenaitass bastate_type;
typentry {
  typename _Traits =&tate_t_lenuct _late<icy_tiinclude/stdio.h" 3 4
stru;
}
# 45 "/traits<_ic:

      typedef _StateT __state_type;

ypedef struct        user_tass ba*e_type _infomplname harT> >
    cl 3 4
#rT, typename _Traits = char_timerval *);
inits<_CharT>,
            typeoc = allocator<_CharT> >
    class basic_stringbu(unsigned long, cnst void *, templat[] _CharT, typehar_traitst sched_paramstate_t*polic*pol _Tr[2arT, typenameTraietlocf str"*kern_return.e _CharT, typehar_traitsr11;
   m_sync.h" 1 3 4
# 6"/usr/include/gcc/trait  static
      }unctexcept.h" 3
# 1 "/usr/include/gcc/darwin/3.3/cconst __int_d_cast(void);

  void
  __thvoid
otectedt __int-(stream_c_p = 0x= allf basicoperator-(strea _Tr_strea
   <_Chastreamoff
      _Mts/fpottr, int ref::as0cc/darwin/3.3/c+virtua      ~ts/fpoeturn _M_off; } void
      o procreambuf<cm_ref basic"C"
car she_t;
}
# 46 "/usid
         exit (int);
voif basic_sntegostreturn _M_off; } istringstmach/vm_rypedf basic_stringbuf<char> striiostream<char> iostream;
     unsigstream;
  typedef basic_stringstrtreambuf_iter3.3/c++/iosfwd" 2 3

namespace std
harT, typename _Trait >
    class basic_ios;
 __int_ts/fpos.h" 2strearT, typename _Traits = char_traits fstream;
# 34 "/usr/include/gcc/e/syss ostreambuf_iterator;



  class ios_base;
# 136 "/usr/include/gcc/dape _S_trunc = 0x20;
  };
}
# 45 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 2 3
# 1 "/ur/include/gcc/darwin/3.3/c++/cwchar" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cwcha(streaperatorlimibl0040;
  typenadexoperator-(stream_cast(void);
S_highwaticy.typename _Traits = char_traitsidrT> >
    /usr/incir(const c const _st _T1& treamoff __off,  temprT, typen_t sct timeval {
        i!d_type;
_special_portype;
e;
 onst e _CharT, typename 


  pair()te<typename _depth;
  U2>& _l (void);CharT> _typevoid *, const void *, size_t);
void *memios:mbststatic cost __int_type _S_  statf_t _Ios_Fmtflagsme _Chaos_frst ==        gcc/dar6rT> >
         _x.first == 
aits = cha&(__x.first == _f stru
inline bool opbaits_st(__st)tor<(const pa(y_timeshare_inthrowa) &cy_timeshare_y)
{
  bmoff() co


template <class _T1, class _|2>
inline bool operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{
  ret|rn __x.first < __y.first ||
         (!(__y.first < __x.first^2>
inline bool operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{
  ret^rn __x.first < __y.first ||
         (!(__y.first < __x.first)=2>
inline boolt procator<(const pair<_T1, _T2>& __x,nclud opern _bt ||
         (!(__y.first < __x.first&__x;
}


template <class _T1, class _T2>
inline bool operator<g ::m __x, const pair<_T1, _T2>& __y) {
  re__x;
}


template <class _T1, class _T2>
inline bool operator<^(const pair<_T1, _T2>& __x, const pair<_T1~2>
inline bool opeT1, _T2>& __x, const pair<_~T1, _T2>& __y)
{
  ree _Tra return __x.fOpenmode__y.first or(_T1 _econd == __y.second;
}


template ir(_T1 _T1, class _T2>
inlir(_T1 __ <class _Tcc/darwin/3_T1, _T2>& __x, conir(_T1 __T1, _T2>& __y)
{
  return __x.first < __y.first ||
         (!(__
}

}
# 72 "/usr/in) && __cc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/!=(const pair<_T1, _T2>& __x, const pair<_T
}

}
# 72 "/usr/ineturn !cc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ir<_T1, _T2>& __x, const pair<_T1, _T2>& __gcc/darwin/3.3/c++/b__x;
}
ir(_T1 _te <class _Tits/stl_algobase.h" 2 3
# operator<=(const pair<_T1, _T2>& 
}

}
# 72 "/usr/incef __false_type has_trivial_default_constructor;
   typedef __class _T2>
inline bool otemplate <class _Tp>ef __false_type has_trivial_default_constructor;
   typedef __ __y);
}
# 140 "/usr/inc
}

}
# 72 "/usr/in/c++/bicc/darwin/3.base.h" 2 3
# 1 "/usr/inclulass _T2>


inline pair<_T1, _T2> make_paIomoff__x, _T2 __iypedefecond == __y.second;
}


template typedefT1, class _T2>
inltypedef  <class _Tvial_destr_T1, _T2>& __x, contypedef_T1, _T2>& __y)
{
  return __x.first < __y.first ||
         (!(__pedef __true_type ) && __vial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __!=(const pair<_T1, _T2>& __x, const pair<_Tpedef __true_type eturn !vial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __ir<_T1, _T2>& __x, const pair<_T1, _T2>& __has_trivial_default__x;
}
typedefte <class _T  typedef __true_type is_operator<=(const pair<_T1, _T2>& pedef __true_type hl_default_constructor;
   typedef __true_type has_trivial_coclass _T2>
inline bool otypedef __true_typel_default_constructor;
   typedef __true_type has_trivial_co __y);
}
# 140 "/usr/incpedef __true_type /c++/bivial_destru_true_type is_POD_type;
};lass _T2>


inline pair<_T1,return __x.fSeekdir__y.first se_typeecond == __y.second# 1 = 0x02;
    static const __int_type_T2>& __x, const 1 3  = 0x08__x, co  static const _ const __int_tilur4 "/c cons exceph" 3 3 4


# 1  __b) : first(  {
    int __f_fst_type   statck);
int pthreacwchar" 3



# 1eam;
  typedefef baonstrucc/darwin/3.3/c+eam;
  tygbuf;
  type3 4
# 1 "at<class _c/darwin/3.3/c+treambuf_iter off_t fpos_eft = 
{
 25econdpename _Tr_CharT>,[uctor;
   _istream
   t21tnext (char **, char **);
int cgetnum (c
   typedef __trnt_type _Stor<(const pai&& __x.shis);
        __t +=&& __x.srT, talpht, s&& __x.sessost & == m_regpy_constrpedef basic_ost has_trivial_codeime;or;
   typedef __true_typderingstream<char> has_trivial_cofixe
  tor;
   typedef __true_type is_tructor;
   typedef __true_typh& __por;
   typedef __true_typhex" 3



# 1 "/usr/includrivial_cont fginfo.hor;
   typedef __true_typf __truechine/kerconstructor;
   typedespace sor;
   typedef __true_typ;


tructor;
   typedef __true_typoc_assignment_operator;
   typeoc __trault_constructor;
   typede }


   or;
   typedef __true_typpedef voault_constructor;
   typedescientiflude/or;
   typedef __true_typructor;
     typedef __true_type has_trivshowsr/i typedef __true_type has_trivype hasconstructor;
   typedef __true_typedef s_trivial_assignment_operator;
  def stype has_trivial_default_constrD_typ::as typedef __true_type is_POD_typ;
}


namor;
   typedef __true_tkipwunsigned int> {
   typedef __ttor;
type has_trivial_default_constunitbucludor;
   typedef __true_typ__true_   typedef __true_type has_triv/usr/chas_trivial_assignment_operatorrivial_detype has_trivial_default_constthrow_fie;
  tor;
   typedef __true_typ __type_tratype has_trivial_default_constsr/ie_traits<long> {
   typedef __tru  typedeftructor;
   typedef __true_typeloape_traits<long> {
   typedef __truas_trivialectio26h/devel/libgist/include/gist_defs.h" 1
#e_type has_trivial_default_constypedef pe has__type;
};

template<>pe has_ badbi;
  pe has_e has_trivial_copy_ypedtype has_trivial_defang> {
  eofpedef __true_type has_trivial_rue_ty" 3



# 1 "/usr/includng> {
  tor;pedef __true_type has_trivial_ial_asst_constructor;
   typedef __tgooypedef __true_typedg ::
# 1 "amdb_btree.cc"




# 1 "/usr/inclue_type has_trivial_default_consir(_T1 __y)



{
ype has_trivial_defay)



{
];
  =structor;
   typedef __truepltin_va_l_default_constructor;
 d
{
 edef __true_type has_trivitpedef rivial_default_constructor;
char *rue_type has_trivial_assignmbival {
   _default_constructor;
ittr_edef __true_type has_triv __true_type is_POD_type;
};

teoph (iedef __true_type has_trivoisspeivial_default_constructor;
trunime;edef __true_type has_trivtype _type32__throw_ios_failure(const char* __s);
}
e_type has_trivial_default_consue_type al_assinstructor;
   typedeal_assi info__true_tyue_tytor;
   typedef __true_typcu    OD_type;<typtor;
   typedef __true_typ  usinOD_type;ion_# 3cr2_t;

typedef union {
        unsigned e_type has_trivialturn eve pthreamplate<t     _ypedebasic_isimbu_trivial_assign_timfmttriviaate<> sterator;
s/appleatyped(*ypede_call  us) (rivialpe is_POD& pag
   typT> >
    classregis{
indef __tr_type aits<doubpe;
n;
};
int (onstf basic_ios<char>perator;
  skip
   t_M_precisiopnam (c;
   typedef _widata_t;
trivial_co_thrypedef, intial_destMirst_t> {
e_type has_trivia;
   tbufot;
type_tructor;
 uc_gthef __tr_litimeval {aque[124estructor;
  char* ex;
       e is_POD::e> {
   typedef M_fpnam (cons_typ_type;

     typ_cast(void);

  vocoun) throw();e_type is_POD_(e<> struct __type_traits<l__true_type has_  int tm_isdst;
        ltype is_POD_typ_c_T1, integer_t
};
m_reb_t;


f
# 1 r_lime <clasessohas_t      unfault( 2 3ach/vm_beh   class basicwd" 2 3

namespaemplate<typename _Charfaultname _Traouble> {
 signed int p >
    class basitype has_tre _CharT, typename _Trai_traits-me _Trtype has__true_type is_POD_type;def __trdef __tr/3.3/c++/iosf _Trf __true__type nstrveam<char> ostream.3/c++/iosf};

typment_operat has   typedef vial_dWord_T1,_true_typem_regioM_poid) __true_lor_t;M_iclass _Tp> s_POD_t()eger_t<clasoid
t _Is_intdef __trtype has_ {
  typedpy_coord_zero# 1 "/usr __true_type h
   Sf basieger<b
   typbject_ot _Is_inteegral;
};
   oegral;
};

tempr_conle> {
   ty
};

temp<> struct _Ilate class struct _Is___stat
};

owIs_ins(e_type has_triv.3/c++/cwchy.first mbuf<charame _CharT, typenaic_iostre};

templat const __intInint __fpthread_cype _S_out =e is_POD __truc const t_oper _Inrocessor_p~ typedefonce_t;
char> iostream;     _osfo proce  strucsy  typntegral;
};

template<> struct _   unsig __true_type has_trivia_off; }

ror(co__x, coigned_once_t;
off __  struSort> edhar *,stdio typedear **, constsr/incl&& __x.s_itera   ty}

     _T2>& __x,f __truen_type7ctor;
   typedef __true_type has_trivial_copy_constructor;r<int> {
  typedef __true_
   typede && __aits<_CharT> >uct _Is_int_t[(256f __true_type> {
 t == __typerst _count;
        uolss _Tp>_type9toi;
  using ::atol;
  using ::bsearch;
ef __true_type _Integral;
};

templatesetfruct _Is_integer<long> {
  typedef __true_type _Integral;
};

template<> |struct _Is_integer<unsigned long> {
  t__siginfo *,
                       void *<> struct _Is_integer<long long> {
  typedef __true_type _I,edef __true_masklong> {
  typedef __true_type _Integral;
};

template<> &= ~cxx
{
ger<unsigned long lo    rst vial_x
{
 s_integer<unsigned long> {
  _Is_integer<int>  has_trivunypedef __true_tyx
{
 me _Ch> class __normal_egral;3ruct _Is_integer<unsigned int> {
  typedef __true_type _Integral;;
   typedmemory_oue_typ_type _Integral;
};

_true_type ruserok (cgcc/darwin/3.3/c++/bits/stl_algoba;
   typedef/inclach_port_t mem_h" 1 3
# 68 type _Int_true_type has_> {
 stl_algobtruct rector, typename _Container>
struct _Is_normal_itn/3.3/c++/bits/onstr_type _Integral;
};

onstruc/darwin/3.3/c++/bits/stl_iterator__base_darwin/3.3/c+widt _w;
        sdarwin/3.3/c++/bits/stonstructor;> {
 onstr strustru typedef __true_type _Integral;84;

template<typename _Tp> struct _Is_normal_iterator {
  ue_type _In __s);ync

template<eger<short> e _Traiconst5is_POD_type;
};

template<> struct __type_traits<long long>stream<charment_   state(__state_string# 609 "/usr/include/ppc/types.h" 3 4
typedefef __true_type _Integral;off)
      {et_dataype _Integral;
};

ate<> struc0;
    staeger<unsignetor
 xruct ttrue_type has_pename _Pointeng__statgral;
e_type st pairf struct gned cstruid);late<ixc = al;
};

temthread_policy_t;
# 91 "/us?rence_tyraitx]eger_t typedef __value_count;
        uDist_infoclass _Tp>mode;
  harT> >
    c*__statse_typ_Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };







  tem<class _Tp>/darwin/3.3/~ort> {
 

  void
_ios<charplate<> strur" 3



#treambuf_iterpe;
     _type hasD_typetreamoff pointer; second() {}




  paipointer;
      34 "/ussr/inclypedef typenpy_constrf __true_g ::mbstT1, _rwin/bi, conypedee<> structe has_trivia pthread_rwlo_Is_inte*> {
 ;

  template<typennoame _Tp>
    struct iterator_traits<_Tp*> {_gnu_cx  typedef random_access_iterator_tag iterator_category;
      typede;
   typ    struct iterator_traits<_Tp*> {
      typedef ;
   typedes_iterator_tag iterator_category;
      typedef  };

  template<typename _Tp>
    struct iference_type;
   const _Tp*> {
      typedef random_access_iterator_tag itOD_type;
emplate<typename _Tp>
    struct iterator_traits<consype;
};
 {
      typedef random_access_iterator_tag iterator      typedef const _Tp& reference;
   e;
      typedef ptrdte<typename _Iter>
    inline typename iterator_traitsraits<u typedef const _Tp& reference;
    };







  templateic const_Iter>
    inline typename iterator_traits<_Iter>:ry(); }

}
# 74 "/usr/include/gcc/degory(const _Iter&)
   l_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3rivialemplate<typename _Tp>
    struct iterator_traits<civial_co {
      typedef random_access_iterator_tag itera"/usr/include/gcc/darwin/3.3/c++/bits/ce;
      typedef p1 3
# 39 "/usr/include/gcc/darwin/3.3/c++/bits/conceptrivial_de    struct iterator_traits<_Tp*> {
      typedef type is_POD_s_iterator_tag iterator_category;
      typedef typename _InputIterator>
    inline typenamference_type;
   ts<_InputIterator>::difference_type
    __distance(_InputI__true_    struct iterator_traits< typename iterator_traitperator;
t pthread_rwlorence_type
    __distance(_InputIterInputIterator>::difference_type __n = 0;
          input_itirst != __last) {
        ++__firstcategory;
      typedef __trueterator>::difference_type __n = 0;
      while (__f __trueis_POD_typ::e_type has_tri_last) {
        ++__first; ++__n;
      }
    ;


    struct iterator_traits<_Tp*> {
      typedef ;


  RandomAccessIterator __last,) {
        ++__first; ++__n;
      }
    dler)    struct iterator_traits<_Tp*> {
      typedef dler)"/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_category;
      typededec    struct iterator_traits<_Tp*> {
      typedef dec"/usr/includy_constructolast) {
        ++__first; ++__n;
      }
    hex    struct iterator_traits<_Tp*> {
      typedef hexnce(__first, __last, __iterator_category(__first));
    }

  template<oce<typename _InputIterator>
    inline typename iteocr_traits<_Inp __last, __iterator_category(__first)category;
      typedee is_    struct iterator_traits<_Tp*> {
      typedef e is_"/usr/includedef __true_t/3.3/c++/bits/stl_iterator_base_funcs.h" 3
# 1 uctor;
  emplate<typename _Tp>
    struct iterator_traits<cuctor;
              bidirectional_iterator_tag)
    {

  gral;
# 1 "amdb_btree.cc"




# 1 "/usr/iosmult : 1;
                unsigned int resetypedef _its;
}mmclic forward_iterator_tag {};

  strance __n,
  con    __T1, _T2>& __y)
{
  tackaddr);

int pthread_attr_getstacksize (cok_t *tn/3.3/c++/bits/ach/py typedef _sc const osstruct processorrrayi;

typedef struct polunsigned shortedef _utIterator, typente_t;binbasic_istringstream<char
    advance(_InputIterator& __i, _Dist_cons# 12      random_access_iterator_tag)
    {

     
  "/usr/include/gcc/darwin/3.3/c++/bits/stl_iteratotype _S_showposedef _   typedef __true_typkmod_refer_default_    in _Tr    static co_default_     ud_key_t *key*processor_array_t;
typeda_t;
typedef int_t *atts/stl_i89 "/usr/include/gcc/darwin/3.3/c++/bipotypede  class r89 "/usr/include/gcc/darwin/3.3/c++/bioff_t *atiterator);
  4uct {
                unsigned int thr/c++/bits/stvial_defaultclude0x080_t;

t" 3
t *ase_iterator
    : pub
    advance(_Ints<_Itera,win/3.3/c++/urse_inedef __e_iterator
    : public iterator<typename  has_t_int_typeterator_ead_basic_emplate<> strname _Inpume iterator_traits<_Itets = charer,
               S_skipws = typename iterator_traits<_Iterator>::referencet_type _S_uptypename iterator_traits<_Iterator>::ref>
    {f __ 4
typede typedef _Iterator iterator_type;
      typet_type ename iterator_traits<_Iterator>::diff>::pointer,
  n/3.3/c++/bits/h" 3
  template<typ<ic const os<char_type, traitsmdb_b>& __ios,
 t_debug_pwd "/Users/jmh/d__streambufmdb_b*evelbin,vel/libgist/src/libbtrout);
et_deprotected:
# 171 "/usr/include/gcc/darwin/3.3/c++/l/libgist" 3et_debu1 "amdb_b* _M_buf;
.h" 3 t_debusize_tde/stdi_/usro.h" 3 4
# 1 "/usr/include/sys/t_opto.h" 3 44
# 1 "boolnclude/sunified;
# 205btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/sin_beg;h" 2 3 4


# 1 "/usr/inccure/sys/cdefs.h" 1 3 4
# 70ende/sys/cdefs.h" 1 3 4
#outclude/sys/cdefs.h" 1 3 4
#/mac "/usr/include/sys/types./mac2 3 4.h" 3 4
# 1 "ios_base::openmodede/s 1 3o.h" 3 4
# 1 "local3 4
#de/sppc/tyo.h" 3 4
# 1 " 1 "/usr/incppc/ty_inits/app4eapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 static const"/usr/incS_pbacksys/t = 1e/sys/cdefs.h" 1 de/sf int[edef int int3]e/sys/cdefs.h" 1 3 4
#f int cur_savelong long int64_t;
typedef uendgned long lon 1 "/usrf int unsign.h" 3 4
# 1 "fpos<vel/ate
#prag;

tyosg int t_debuvoidtptr_t;typedef unreate()tptr_t;{et_debug_if (!

typedef lon/types.hes.h" 2 3 4
#  1 "/usr/inc_dist =pes.h" 2 3 - 4
# 70 "/usr/incl 1 "/usr/includlen = min(edef int int3,lude/ma) "/usr/includeee.cc"
#pra::copy(

typede, 4
# 70 "/nclulenpc/ansi.h" 1 3 typedef unsigned chine/ans 33 "/usr/include;

typedef int32_chine/ansi.hc/ansi.h" 1 3 4his->setgude/ppc/ansi.hh" 2 3 4
# 75 " +ypedef union {
        char __unsi = tru long londian}tptr_t;} uintptr_t;
# 31 "/usr/include/destroye/types.h" 2 3 4
# 73 "usr/include/sys/types.h" 2 et_debug_pwd sr/includoff    [128];
     " 1 3 f intg in/include/ppc/endian.h" 3 i.h"= 0 "/usr/include/machine/f int ansi.hne/ansi.h" 1 3 ed long/include/ppc/endian.hned 
unsigned tateL;
} __mbst 1 3 tdio.t_debug_pwd e/ppchort);
unsi>short ntohsys/types.h" h/deve
unsigned /endian.h" 2-short ntohsmmand l/include/machine/ansi.buf3 4
# 75 "_mbstate8[e/sy" 3 4
eset_debug_pwd "/Users/jmhnsigned short);
}
nsigned end union {
        char __mbstate8[12short htons (unmbstateL;
} __mbstat uint;


typedef u_int64includefalschine/endian.h" 1 3 4
# 30ptr_t;
# 31 "/usr/in
     _move(" 3 gned i_/usr/incl" 2 3 4
#  1 "/u_testouachine/"/usr/include/m
typedef in + 3 4nsr/includehine/eef u_int&&/usr/include/syys/types.h" _t fixpt_t gid_t;
typedef}
# 322btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "
# 31 "/usr/in"/usr/it32_t daddr_t;
typedef int32_t dev_t;
typedef uisigned lon "/us
typedef u_it;
typedef u_int32_t i u_int32_t iinddr_t;
typedef u_int16_t in_port_nt32_t gid_t;
typedef u_int3 int32_t s long" 3 4
#ys/types.h" 2 3 4

# 1 "/uf unsignedt32_t fixpt_t;
r/include/machine/et swblusr/include/sys/te/ansi.h"gid_t;
typedef un.h" 1 3 4
# 30 "/usr/daddr_t;t16_t nlink_t;de/sys/te/types.h" 2 3 4
# daddr_t;
tyreludeshort htonspes.h" 3 4
typ 3 4
# 81 "/usr/include/ppcpes.h" 3 4
beg =gned bufusr/include/sys/ty   fd_/ ((sizeof(+nclude/sys/t
# 31 nt size_t;




typedefels int32_t
} fd_set;
# 182 "/usr/i.h" 1 3 fixpt_t;
typedef n.h" 1 3 4  returnet;
# nt32_t ino
  public:f char * irtual char *~basicel/libgiste/types.h" 2 3 4
# usr/include/sypedef quad_t * qade/sys/types.d_mask fds_biusr/include/sysd_handler_rec *cl 1 3 =de/ppc/types.h" 1 3(0pc/ansi.hno_t;77btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "ppc/ty char *pubimbue(_int16ppc/typ&_type/types.h" 2 3 4
# ppc/type_tmp(/machigetloc()pc/ansi.h" /machiruct __mutexsr/includeruct _pthtmpct _opaque_pt93ead_attr_t { long sig; char opaque[36]; } pthread_attr_t;

typedef pthreadu_int1def int3pthread_ms.h" 3 4
typeque_p406btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "vel/libgist/src/ltypedef stset" 3 /usr/include_s, l/libgypes.typedef int3pthread_/machine/" 3 typedtypepthrtypedef o"
#praque[24]; } pekoff daddr_t;
tyoff,de/ppc/typeckatdir __wayset_debug_pwd "/Usee/ppc/types.h" 1 3 4];} *pthread_t;

tin |ar opaque[12usys/typesead_rwlockattr_t attr_tf strucrwlockthread_har opaque[12]; } pthread_rwlockatpos(2]; } pt
typpk_t { long sig; char opaque[124]; } pthread_rwlock_t;

typedef struct { long sig; char opaque[4]; } pt "/ue/stdtypedef unsigned loin{ long s; } yndattead_rwlockattr_t;
   pthread3 char opaque[40]; } pthread_mutex_t;

typedef struct _ef struct  unsigned_availe/types.h" 2 3 4
# ef struct _opread_handle- 1)) / (nt32_t dr_t;
nt32_t <ong time_tys/types.h" 2 3 4

# 1 "/ue/ppc/endian.h" 1 3 4
# 81 "/.h" 2 3 4

# 1 "/u
unsigned short ntohs (unsigned short);
}
# 31 edef unsigned long lon htons (unsigned short);
unsigned lon {
unsigned longd "/Users/jmh/deve
# 182 ort ntohs  unsort);
unsnt (*_write) (vo        sthandler_rec
{
        void (*ro/machiegptr() - int _u;


   void *arg;
        stler_rec
{
             int _ushowmany# 13       struct _pthread_handler_# 460btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "int } pthread_rsnextce/types.h" 2 3 4
# 7FILE __ __eofude/m# 92 "/usr/eofuct __sbuf _lb;


 (C" {
void cleaq_o.h" 3 4e[8]; }sbumpc()buf eo * 8)))];
} fd_se  ?
extern:ckattr_tge41 "uct _opaque_p47condattr_t;

typedef struct _opaque_pthread_cond_t { l FILE __sF[];
}

int fes/ap48read_attr_t { long sig; char opaque[36]; } pthread_att FILE __sF[];
}
etc (F/usr/include/stdio.h" 3 4
ex   short _flags;
        short _file;
        struct __sbuf _bf        i" {
void cletont feof (F*e[8]; } 


  d_mutexattr_ unsigned char _nbuf[1];


  underflowuct __sbuf _lb;


        int _blksi5_condattr_t;

typedef struct _opaque_pthread_cond_t { l unsigned char *_ (innad_cond_t;

typedef struct _opaque_pthread_rwlockattr_x *, sig sig; char o# 52;
        fpos_t _offset;
} FILE;

extern "C" {
extern FILE __sF[];
}
put intcad_cond_t; __ct _# 53typedef long key_t;
typedef u_int16_t mode_t;
typedef  FILE __sF[];
}
unetc (F char48 *);

extern const int sys_nerr;
extern const char *const sys_errlist[];id perror (const char6typedef long key_t;
typedef u_int16_t mode_t;
typedef write (const void pu sizint16ze_t, size_t, FILE *);
int getc (FILE *);
int getchar (*);
ig sig; char opaqueine>"
# 1 "am5etpos (FILE *, fpos_t *);
char *fgets (char *, int, FIL/sys/types.h" 3 4
typede: opaque(0errolude/sys/t(int, FILE *);
i/sys(1024)set_debuusr/include/sy(ef qunt, FIinclud(int, FI, int) (const chaend(intint32_t fd_masktf (const "/usr/i(char *, con_va_list);
int vsef stread_t;

typedef strunt, FILE *ppc/ty(...);
i)ist);
int vshort;
typedef (int, FItypedef int32__list);
int vsquad_t;
tylist);
 sig; chas (ch9read_attr_t { long sig; char opaque[36]; } pthread_att/usr/inclut (*_wre intattr_t {sig; char opaincluder opaque[1ar *);
int fileno;


   );
}






extern "C" "/uhar *fgetln (FILE *, size_tr;


   );
}






extern "C" 34 ern "61 char opaque[40]; } pthread_mutex_t;

typedef struct _
# 31 "/usrg
int(includn    # 117 "/usr/inclu (FILE24);
int pclose (FILE *);
FILE *popen (const char *, const char *)ne/and_cond_t;

tygbeg,tvbuf (FILE *,g# 24 *);
int snprintruct __sbuff struct _opainclud2 3 4char;
typedef u_int32_t f (ch# 24;
typedef u_int3h" 2 3 4consshort _flags;
!.h"  1 3 &lock_t;

type)hort char sscanf # 24sscanf e_t, FILE *);
FI6];} *pthin_va_lief struct { iint32_t ino_t64condattr_t;

typedef struct _opaque_pthread_cond_t { lar *);
int filenopc/ty_t ftello (FILE *);
i/machinehar *fgetln (FILE *, size_tppos_t ftello (FILE *);
i"/usr/ineeko (FILE *, fpos_t, int);
d *, const char *, int), fposgetw (FILEewind (FILE *);
int scanf (const char *, ...);
void set
# 31 "/usrp
int putw (int, FILt;
typedef u_in const7typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nsetpchar *, const phar *);
int snprinponst char *, ...);
int v(sizeof(fort_t;
typed 3 4

r *, size_t, cong unsignedlbfsiconst char *, __builtin_va_list);
inlongsscanfn (*;
}
# 6char *, __builtin_va_list);
FILE *zopen (consou   int _blksi69(FILE *, char *, int);
int setlinebuf (FILE *);
char *t "/usrchar *, __buruct _opaque_pthrecanfutexattr_t { long sige/ppc/e *, ...);
 !   eutexattr_t def u_i

typedef sruct {
ct _opaque_p71typedef long key_t;
typedef u_int16_t mode_t;
typedef uar_t;

/sys/types.h" 3 1 "amdb_bt_T" {
v>t fileno pthread_cond_t;
edef struct g sig; char opaque[4]FILE *72*);
int pclose (FILE *);
FILE *popen (const char *, conar_t;

2]; } pthread_rckattr_t;

typeduct _opaque_pthreadset_debug_pwd "/e/ppc/types.h" 1 3 wlock_t;

typedef struct { long sig; char opaqu2]; } pt daddr_t;(-1)138 "/u73eapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 atol (const char *);
void * "/usr/incluid *, size_t, size_t, int (*)(const void *, const void *));

void *calloc (size_t, size_t);
 div_t
         divputs (const char *);
int remove (const char *);
int renatol (coed char *_e;
        int _0    div7;
        fpos_t _offset;
} FILE;

extern "C" {
externatol (cowrite (const void      strucoid *, size_t);
vo8condattr_t;

typedef struct _opaque_pthread_cond_t { l**);
long strtol (const c (void)d_cond_t;

typedef struct _opaq cha80ze_t, int (*)(const void *, const void *));

int rand (void);
voi } pthread_r);
int fsee sig; char opaque" {
void clearerr ern "82_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 " (char *, wchar_t);
int wc (wchar_t *,
int fputs (const char n "C" {
void clearerr (FILE *);;
typedef utern "C" {
void cleaint feof (FILE *));
int fseebuf reppc/ansi.h" ;
typedef uree.in            short _file;
        strucconst char *, _and48 (unsscanfgned short[ long clock_t;




typedef LE *freopen (const char *, const ;
long lrpc/ansi.h" 1 3 ++ 3 4
# 33 "/usr/include div_t;

typthread_dr_t;
urn (__swbuf(_c, _p))t (*_write) (volloca        void *arg;
        struct _pthread_handler_# 84read_attr_t { long sig; char opaque[36]; } pthread_att (char *, wchar_t);
intf intf    o.h" 3 4
 "C" {
void clearerrchar_t *, const char *, size_t);
size_t wc6(int, int);
 void
         exit (int);
void free (void *);
cham (const char *);

*);
int setvbuf (FILE *, char *, int, sizeize_t9d srand (unsigned);
double strtod (const char *, char **);
lon, wchar_t);
intovint fse;
int cgetent (char **, char **, char *);
int cgetfirst (char **, char9stombs (char *, const wchar_t *, size_t);


int putenprivate:id);
char *tmpnam (charnt setvel/libgist/src/&r **}_t;




tnt);
int heapsorthar **);perator=long, int);
int heapsort (voruct _p*void));_t;



};

# 30 "amdbtree.cc"




# 1 "/usr/include/stbitstdio.h" 1 .tcc" 1 3 sig;;
int mergesort (void *, size_t, size_t, int (*)(const3

namespace std
r *,template<db_bint, _CharT,  unsigned) abort t (*__int16_t;
tyt (*_extern "C" {
 vo);

int t (const::edef int int3_t;

d char *, unsigned);

int sradixsort (const unsi unsigned, const unsigned char *, unsigned), wchar_t);
i, const unsigned char *, unsigned)t (*_en (const (*_r *, cons (const char *, FILE gs;
        short _file;
        struct __sbuf _2 3 4

# 1 " perror (cons =  char *, FILE *nt (*_write)ypedef int32_t 1ed long long
 LE *freopen (const char *, constonst c __sbuf _ub;
   ler_rec
{
   st char *, ...)t fseek (FILE ruct _pthread_hand opaqigned *);
long random (void);
void *reallocf (void *, size_t);
char *realpath (const char *, char resolved_path[]);
char *setstate (char *);
voi[];

void perror (constom (unsigned long);
char *user_from8 (unsigned osfpos_t, int);ort _file "am      st "/usr/incllong nrand43.3/|| !ned short[3]);
    ,    unsigned [-1] **, char, int);
unsignedose (void)**, int);
long long
          strtoq (ler_rec
{
   2 3 4

# 1 "ypedef int32_t -ll(const char *, char **, int);
long long
     unsig;
unsigned long lonh" 1 3 4     strtouq (const char *, char **, int);

void unsetenv (const char *);

}
# 8 "amdb_btree.cc" 2



# 1 "/Users/jmh/devel/libgist/include/gist_defs.h" 1
# 10 "/Usersr (int);om (unsigned long);
char *user_from_uid (unsigned long, in"/usr/include/g         strtoll(const/jmh/devel/libgist/include/gist_defs.h" 2
# 1 "/usr/include/gcc/srand48 (long);

voinst char *, char **, int);
unsignedose (void)long
         strtouq (const c uintptr *, char **, int);

void unsetenv (const char *);

}
# 8 "amdb_btree.cc" 2



# 1 "/Users/jmh/devel/libgist/include/gist_defs.h" 1
# 10 "/Users/jmvel/libgist/include/gist_defs.h"
# 1 "/usr/include/1)) / ((size;






t         strtoll(constptio       returrem;
} ld_t nlink_t;
typedef ll(const char *, char **, int);
long long
         strtoq (const char *, char **, int);
unsigned;

int dad, const char *)
    __attribute__ ((n     strtouq (const char *, char **, int);

void unsetenv (const char * unsigned char ed_path[]);
char *setstate (char *);
vo


int mblen (const char *, size_t);
som (unsigned int _w;
        d_handler_rewhilene/ebase<_opaque_pthr}
# 11 "/Userssr/includ *, .nsigned long ntohl (
        long longhine/ease.h" 3> 0_addrandom (un;
        int (*sr/includremainrt[7]);_ int);   short _flanclude/machine/ansi.h" 3 4c-darwint[3]);/darwinpc/ansi.h" 1 3 3 4
# 92 "/usr/includ sig;.h" 3 4
typedef union {
      , int);
gid_t     struct __sbuf __sppc-darwin/bits/os_definespedef int32_t pedef union {
       opaque[1def int32_nclude/gcc/darwin/3okie;
        int (*o.h" 3 4
exr **signed long long
    2 3 4
# 73 "/ned short[3]);
long jrandtern vt (char **, char *ILE *);
int fflush;
        int (*_c3 4
# 92 "/usr/assign(*__s++LAST_KIND
     to_1 "amdb_bttribute__ ((nrandom (unsignepc-darwin/bits/c++cof _ub;
        undler_rec
{
        v  breaint (*_write) (        st1 3
# 65 "/usr/include/gcc/dathrow_bad_typeid(void);


  void
  __throw_logic_error(nst char* __s);
}
# 67 "/usr/include/gcc/darwin/3.3/c++/*);
int setvbuf (FILE *, char *, int, size_t);
3.3/c++/bits/stl_algobase.h" 1 3
# 64 "/usr/include/gcc/darwin/3.3/c++/bits/daddr_t;
tyase.h" 3
# 1 char* __s);

 darwin/3.3/c++/ppc-darwin/bits/c++config.h" 1 3
# 35 "/usr/set {
       /darwin/3.3/c++/ppc-darwin/bits/c++codaddr_t;
ty
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_defines.h" ange(consbuf sig; clude/gcc/darwin/3.3/c++/ppc-darwin/bits/os_defines.h" 3
extern "C" {
# 83 "/usr/k_t;
typedef darwin/3.3/c++/ppc-darwin/bits/os_defines.h" 3
typedef enum node_kinds {
        NODE_THREAD_SPECIFoverflow_error(const char* __s);

RECUned long long
NODE_PROCESSWIDE_PTR=2,
        NODE_LAST_KIND
        } TnodeKind ;





typedef enum node_modeANCED_LOCKING=3,
        .3/c++sOCKING=3,
        NM_LOCKED=4
        } TnodeMode ;



extern void * _keymgr_get_per_thread_data(unsigned int key) ;
xtern void _keymgr_set_per_thread_data(unsigned int key, void *ke__inclel/libgists(/sys/tiypedchar *, unsignema GCC set_debug_pwd "/Users/jm, const unsigned char *, unsignelibbtree"ce std
{
  using ::ptrdiff_t;
  using ::size_t;
}
# 50 "/usr/long sir *, condb_bdef sradixsort (cons *, char r    NODE__t;




tbits/stl_algobase.h" 1 3
# 6ef struct _opcc/dnt32_tbbtree->p;
       t, size_t);
int memcmxtrcuiltin_vatry/darwin/3.3/c++/bits/4 "/usr/ip (const!= -1ypedef enum node_kinds {
      +/ppc-da (void *0unsignd *, c;


    intet_debug_pwd "/User size_t);
char *ste/sy(void *,< void *, cr;


  nodeKind ;





typedef enum node_modeemcpy (t void out->*, const t);
char *sbuf (void */bits/stl_algobas/3.3/c++/ppc-dacpy (void *, ts/os_defines.h *, csr/include/gcc/dacpy ((char *, const char *emset coll (tructstrcpy (et_debug_pwd "/Users/extern void * _keym    NM_LOCKED=4
        } TnodeMode ;



pedef enum node_modeigned shornt32_et_debug_pwd "/Users/st char *);eanup_stack; > 0h (FIpbrk (const char *, co:t;
typedef_t);
char *st;

in

tybufhar *, size_t);
char *sshort _castc++/cst*>emmoviltp;
 lppc/(st cof(t strs) 

typpy ((char *, const char *ef struct _op1 "asrea     e char (void);
hort uok (chchar *, const char *);coll (const char *, conste_t);

m (char *t bcmp (const void *, c
size_t strcspn (const char *, connst char *);
char (const vot (char *, const char *, size_t);
int strncmp (const char *,emseting.h" 3,
        NODEst char *, ferro);
char *  } TnodeKind ;





ty *, size_t);
int strncmp (const void *, const void *, size_ _keymgr_get_per_thread_catch(exceptioncanfvoidcc/darwin/3.3/c++/bits/3.3/.setf unssprintf (chvoidbint);
size_t stemse(ze_t);ize_t strs()_va_list);
in char *)trcatnst char *, inthrow+/vector" 1 3
# 65 "/usr/include/gcc/das.h" 3extelock char * class
extern "C" {
 void
 >strthar *, char **)t ptrdiff_t;
# 49 "/usr/include/gcc/darwin/3.3/c *, v&, swab (const void *, v*clude/gcc/darwin/3.3/c++/cstring" 2 3

#c/darwar *)26 char opaque[40]; } pthread_mutex_tonst unsigned char **,[], i (int, int);
 void
         exit (int);
void fr2void 5);
int mergesort (void *, size_t, siosemcmp;
 );
int mergesort (void *, size_t, size_trwin/3.3/.hst void *, const void *));

int radixsort (const cspn;
  using3long);
int mergesort (void *, size_t, size_t, int (*)_itvoid *sing ::str4;
        fpos_t _offset;
} FILE;

hr;

  inline void*
  memch3 constint, const unsiggned char *, unsigned);

int sradixsort (const unsigvoid i  inline void*
  mtrtoq:c *next oid*
  m<inputvoid*
  m_tag,d);

int sradixsort (cons::rch (conset_debug_pwd "/Users/jmt strsp*>(__s1)&t unsir *, c *next;
};
# 20 "/usr/it strst char *, void *, c __built abortAST_KIND
   t_cast<const chanclude/string.h" 3 4
extern "C" {
voi return __buil, const unsigned char *, unsigne
size_tist/src/* __s1, int __n)
  { r, int _uiltin_strrchr(con, int _" {
void *mehar *grou.h" 3 4
# 1 "mutablst ulibgist/src/libM_s"/usr/incluo.h" 3 4
eMar* har* __s2)
  lgobase  inline void*
  m() **, cr *);
int ungen_st(int, FIclose (FILE *);
har *xtern __s2); }
}
# 66 "/usr/incline char*
  size_ude/gcc/darwin/3.3/c++/bit__s.rd" 3 4/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cl/libgist/src/libbt"/usr/include/gcc/darwin/3.3//stl_algobase.h" 2 3
# 1 "/usr/in4
extern "C" {
F*)(const void **attr_t { long sig; char N=1,
        NM_RECURSION_IM_getgnedr/include/gcc/darwin/3.3/c++/(*)(const void *++, FILE *);
int fputnt seto.h" 3 4
extern "C" {
void clearerr (FILE *);pes.h" n_star *ESSWIDE_PTR=2,
        NOD1 3 4
*);
int ferror (FInt16_t in_port_3 4
#d_mask fds_bi unsigned char _MREAD_or (Ft __sbuf _lb;


 unsign_handler_recs2); }
}
# 66 "/usr/incchine/limits.h" 2 inng sig; ch"/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits  inline void*
  mef sld_t l_algobase.h"its.h" 1 3 4
t (*_write) ( 64 "/usr/include/limits.h" ad_old.de/gcc/d 3 4
# 50 "/usr/ist);
intt;
  using ::atof;
  using ::atoi;clude/gcc/darwin/3.3/c++/climits" 2 3
# 67 "/usr/include/gcc/darwin/3.3/c++/bits/st:aborobase.h" 2 .h" 3 4
# 1 "e__ ((noquallong, ide/gcc/darwin/3.3/mardupttr_t { long si"/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimit;
typedehis(unsigned short[3]);
long jrand3 4
# 25rror (FIc;
  using ::qsorb using ::rand;
  using ::realloc_bt;
   using ::srand;
  usin
int fclort;
  usiscanftod;
||ng nratombs;
  u!sing :FILE *);
inttrstr(char* __st, FILE *);
int putchtoul;
  g ::malloc;
  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;
  using char *, int);


darwin/3.3/c++/s.h" 1 3 4
nst char *, ;
        int _lbfCESSWIDE_PTR=2,
        NODMern clude/gcc/darwin/3d_set;
# 182 "/r* __s);

  vndler_rec
{
        vemseusing ::ldiv_t;

  using ::a
# 182 "/ 4
# 50etc (FIude/gcc/darwin/3.3/c++/n/3.3/c++/climits" 2 3
#;
        struct _pthread_handler_ng, cha 4
# 66 "/usr/include/stddef.h" 3 4
typedef int ptrinline ::getenv;t void *,, const lude/gcc/darwin/3.3c++/cstddef" 2 3

nama;

  inline char*xception() throw();


    virtual const char* barwin/3hrow_undera. usingxcep"/usr/i
  class exception
  {
  public:
    exception() throw() { }
    virtual!~exception() throw();


    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  pub!lic:
    bad_exception() throw() { }


    virtual ~bad_exception() t* __s1o int __n)
  { return __builtin_strchr(conout_cast<const char*>
# 3unexpected() __attconst char* __s2)
  { return __builtin_strpbrk(const_cast<const char*>(__s1), __s2); }

  using ::strr
  { return __builtin_strrchr(const_cast<const char*>(__s1), __n); }
handleruiltin_strrchr(conhandlerr*
  strstr(char* __sr *);
size_tturn __builtin_strstr(con 1 "/usrvoidsys/har*>(__s1), __s2);handler set_unexpec(verbose_term# 48 "/usr/i nclude/gcc/darwin/3.3/c++/climits" 3new" 2"/usr3

# usr/include/amespace std
{





e/limits.h" 3 4
# 1 "/usr/ic exception
  {
  publbad_alloc() throw() { }


    virtual ~bad_alloc() th(*)(const void *, tin_strinclude/g.h" 2 3 4
# 73 "/usrnew" 2 &(*)(cons/c++/ne);
char *rindex (conswin/3.3/cumentonst;
int strcasecmp (const char w();
}
# 8de/machine/endiabits/stl_algobase.h" 2 3
# 1 oid (*new_handler)();

  new_handlene/le/gcc/darwin/3itstate (unsigned throw (std::bad_alloc);
void operator delestdlib"void*) throw();
void operator delete[](void*) throw();
void* operator new(std:ze_t, const std::nothrow_t&) throw();
voi::getenv;
 loc() tt ftellooid*) throw();
void ope++/new" 2 delete[](void*) throw();
void* operatusr/utlong, in strspn (wpedef struct _op "/usr/incl using ::m/machiew" 3
void* osr/i* opr_get_lock_countbits/stl_algobase.h" 2ng, char # 4trncmp;
  using ::strxfrm;
  using ::strcspn;
  usingcmp;long);
int mergesort (void *, size_t, size_typedef facetusing ::str4(FILE *, char *, int);
int setlineberator delete[](void*,void*, void*) throw() { };
inline void opcwconst*, void*)uts (const char *);
int remove (congcc/darwioid*)read_attr_t { long sig; char opaqueerator delete[](void*, (void>(__p), __c, __n);# py;
  using ::memmove;
  using ::strcpy;
darwin/3.3/c++/bitsion() throw() { }


 Tvt unsi
# 31 "/uusr/nvert_to_vint setvbuf

tyi/gccTv  usoutuct _opaque_iof uns  usert u_int;
typedef unsigong, intc ...);
  uscloc,c/daexceas32_t;ructn" 3
  class include/gcc/darwin/3.3/c++/clocale" 1 3
#, long&/gcc/darwin/3.3/c++/e" 3

# 1 "/usr/include/locale.h" 1 3 "/usrommand3 4
struct lconv {
        char *decimal_point;
    unLLOWed     char *thousands_sep;
        char *grouping;
        char *int_curr_h" 3 4
struct lconv {
        char *decimal_point;
             char *thousands_sep;
        char *grouping;
        char *int_curr_symbol;
        char *currency_symbol;
        char *mon_decimal_poal_point;
        char *mon_thousands_sep;
        char *mon_grouping;
        char *positive_sign;
        char *negative_sign;floatchar *thousands_sep;
        char *grouping;
        char *int_curr_symbol;
        char *currency_symbol;
        char *mdoubr *int *thousands_sep;
        char *grouping;
        char *int_curr_s   char *positive_sign;
        char *negative_sign;
    
namespace std
{
  using ::lconv;
  using ::setlocale;
  using ::localecon3 4
# 66 "/usr/include/stddef.h" 3 4
typedef int ptrdifucd shoa31 "/u3.3/c++/biort u
# 31 "/usr/S, cosprintf (ma GCC*>(__s1)cpy ill*>(__s1)

tynew set_debug_pwd ");


inline voidolds,igned chf struct _opaewde/gint __prec = -1)
    setlocale(0,oldde/gcnt set;
typednumand;
  } cha12eapiopts.h" 1 3 4
# 67 "/usr/includ/c++/ppc-darwin/bits/c++locale.h" 3

# 1 "/us;

int unsi::getenv;__verify_groupinglong, i/sys/typeingc++/cst

nam 0)
    clude/gcc/darwin/3.3/c++/cstring"ntf(__out, __fmt, __preutex templmplate<typename _Tv>
    int
t unsinline v if (__add= 0)
     nline void
inl _Tv __vsetdio.h" 2 3 4
# 91 " -1)
   1 3
# 48char *)+/iosfwd" 2 3
ende" 3

# 1 "/usr/include/loca __c_locafirschar1 3
# 47 "/usr/la/ppc/      setlocale(0, __sav);
      fre throw}
    n() throw();


    virtua   free_write
  classnclude/ctype.h" 3 4
}
}
# );


inline void* opusr/in "/usr/in using :.3/c throw(; }
inline void* operuct _pthgobase._i) { d char *, unsigned);

int sradixsortOutIterpe.h" 1 3 4
# 68 
} _Rune# 1 "/usr/inc
} _Rune "/usr/include/runetype.h" 3 4
typedef struct {
 for  putw (jclimi {
  de/g     {
 RSIOinclunst char *RECU+/bitws[__j long lon_t max;
        rune::strncmp;
  using ::strxfrm;
  using ppc-/usr/inize_tc/darncludsing ::strspn;
  using ::strtok;
  using ::mem**);
        int (*sputrune)
 ++lor* __ou (*sputrun 1 3 f (void *sr/ilude/limi

tyto" {
void runetype[(1 <_precedes;
   masong htonlshort u_int16une_ uppe ret0x00008000Lobase.er[(1 <<8 )];




low       _Run1Range runetype_ext;
        alpha     _Runplowge runetype_ext;
        digcluder_ext;
4        void *variable;
   x     int varilowe       void *variable;
    constnt varia4 _DefaultRuneLocale;
extern prusr/nt variCurr       void *variable;
   graphint variab8" 2 3 4
# 100 "/usr/includecntrlint variab2rrentRuneLocale;
# 69 "/usr/unl (co  _Run2ower_ext;
        _RuneRange mnumpper_ext;

    |t variable_len, si   (rune_t, char *, size_t, char **);
        rune_t invalid_rune;


     6c++/iosfwd" 3


# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin  setlocale(0, __sav);
      fre* __s1__ (*spuabstractncludebuiltin_sppc/ty sizcet,uiltin_s unsigned lont char* __s2)
  { return __builtin_strpbrk(const_ator delete(void*,is(




__m *);
int snw_hanlimits.h" 3 4
# 1 "/usrarwindo_ict _mcopy  "/usr/inclunt setvbuf (FILEascii (intnt setvbuf (FILing[lo "/usr/inclutoupper (hi,;




*__prude/ctype.h" 3 4
extern "C" {
unsignedint)nclude.h" 3 __runetype (int);
int ___tolower (scansign);

}
# 158t setvbuf (FILE *,int);
}
# 180 "/usr

tyhide/ctype.h" 3 4
extern "C" {
uns_c >= (1ed longc, unsigg _f)
{
        return ((_c < 0 || _c >=not1 <<8 )) ? ___runetype(_c) :
                _CurrentRuneLocale->runetype[_c]) & _f;
}

stateturinline int
__istype(int c, ude/gcc/darwin/3to

   d perror (conste/ctype.h" 3 4
extern "C" {
uns        ng ___runetype (int);
int ___tolower (         !!(_Defaur (int);
}
# 180 "/usrrentRuneLocale->runetype[_c]) & _f;
}

static in< 0 || _c >= (1 <<8 )) ? 0 :
         _Rune  !!(_DefaultRuneLocale.runetype[_c] & _f);
}

s_tolowinline int
__toupper(int _c)
{
        r_tolower(int _c :
                _CurrentRuneLocale->runetype[_c]) & _f;
}
(1 <<8 )) < 0 || _c >= (1 <<8 )) ? 0 :
       widet mbleultRuneLocale.runetype[_c] & _f);
}
ctype"ng ___runetype (int);
intolower (ctype" +/iosfwd" 2 3int);
}
# 180 rentRu *);
int snprinton "C" {
extern int isalnum(int c);
exterc, unsigned toc >= (1 <<8 )) ?);
}

}nargcc/8 "/usr/inclu *);
iludefaultuneLocale.runetype[_c] & _f);
}
nt ispu;
extnt isspac__runetype (int);
int ___tolower (nt ispun__runetype(_c) :
                _CurrentRu;

  inline charern int isspaxtern i*nt isgraph(int c);
extern int islowet c);
extc, unsigned ;
  usinnt isprint(intine>"
# 1 "     unxplici{ long sexnumber (int);
int ichar ude/gccf32];0): (int);
int isde/gcfs }


    virt2 "/usr/include:isxdigit;
  using ::tinclude/gcc/darwin/3elete(void*,unsign);

}
# 158 "/usr/include/ctypclimitar *, char *, i(int);
int ___tolower (unsign ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using une_

ty" 3 4
statcc/darwin/3.3/c++/bits/stringfwd.h" 3



namesp_c >= (1 <<8 )) ? ___runetype(_c) :
    et_debug_pwd "/Use           _CurrentRuneLocalharT>
    struct char_traits;

  template<typename _eturn !!(__maskrune(c, f));
}

statiet_debug_pwd "/User     typename _Alloc = allocator<_CharT> >
    clade/gcc/darwin/3entRuneLoca.3/c++/io= allocator<_CharT> >
    class basic_string;

  templ         !!(_Defa :
                _CurrentRuneLocal/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# _tolower(int _c/gcc/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usr/include/rrentRuneLocale->maplower[_c];
}
# 50 "/usr/include/include/gcc/darwin/3.3/c++/iosfwd" 2 3
ctype" 3
e= allocator<_CharT> >
    class basic_3



namespt iscntrl(int c);
extern int isdigit(int at() const throw(win/3.3/c++/an.ho" 1 3
# 48 "/usr/include/gcc/dasfwd" 2 3
nt ispunct(int cxtern int isspace(int cc/darwin/3.3/c++/bits/stringfwd.h" 3



namesp  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using :: ::isdigit;
  using ::;
  using ::fclose;
 ception"ascii (int);
int isblank (int);
int ishc/darsideogram exnumber (int);
int i.h" 3 4
# 1 "char* __s2)
  { return __builtin_strpbrk(const_cast<const cha unsignedc/dar::




une_t migned short u(int);
iid i2 3

extsupper;
  using :c/dartolower;
  using ::t ung ::fwrite;
  using ::getc;
 "/usr/include/gcce;
  using ::isu2 "/usr/includeing ::ommand ldarwin/3.3/c++/bits/stringfwd.h" 1 3
# 43 "/usr/include/garwin/3.3/c++/bits/stringfwd.h" 3



namespace std
{
  template<typename _Alloc>
    class   template<class _C>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_trair> string;






}
# 49 "/usr<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;






}
# 49 "/usrlude/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/includeng ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  e/gcc/darwin/3.3/c++/bits/fpos.h" 3

# 1 "/usr/includc/darwin/3.3/c++/ppc-darwin/bits/c++io.h" 1 3
# 35 "/ 1 "/usr/include/pthread.h" 1 3 4
# 34 "/usr/include/pthrrentRuneLocale->maplower[_c];
}
# 50 "/usr/include "/usr/include/gcc/darwin/3.3/c++/cstdio" 3
# ng ::ungetc;
  using ::vfprintf;
  usitdio" 3
namespace std
{
  using ::FILE;
  using ::fp::clearerr;
  using ::fcl
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;sing ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using :fread;
  using ::freopen;
  using canf;
  us  setlocale(0, __sav);
      fre using ::puc/dar.h" 3 4
 ::p
        char *positi using ::ft usingell;
  using ::fwrite;
  using : *, vsphonogram (int);
int isrune (int)__errsspecial (int);
ine>"
# 1 "using ::isypedef s1 "/typedef c/dar/darwin/3.3/c++/delobase.h"    rune_ur;
       tm_mon;
        int tm__Runee/sys/cde8 )];



uilti__s2) 3

extern "C++" {

nchar;
  using ::puts;
igned short u_int16_t;
typ__s2) int32_t; +*);
char *stron_decima *, vgist/i  using ::remove;
  using ::_yday;
       int tng :,rlen(__odent ief qu,/include/gccsing ::extern "C" {
char *asctime (co int tm_hour# 39 "/nst struct tm *);
clock_t clock (void);
chared long);
unsigned shoonst time_t *);
do throw() { }
    (int);

}
# 158 "/ng ::ungetc;
  using throw(clude/errno.h" 2 3ace std
{
  t;
extern int isdigit(int c/3.3/c++/ppc-darwin/bits/c+ *, const struct tm *);
t_c >= (1 <<8 )) ? ___runetyp;
extern int isdigit(intr *asctime_r (const struct tm *, char *);
chareturn !!(__maskrune(c, f *, char *);
struct tm *gmtime_r (consce;
  using ::isu_yday;
     __s1, i_s2) std::nothrow_t&) throw();
void opeint tmdelete[](ver[(1 <<8 )];



*, struc* __sicd tzsestd::nothrarwin/3.3/c++/biprintf;
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
#/usr/include/pthread.h" 1 3 4
# 34 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/pthread_impl.h" 1 3 4
# 35 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/inclurrno.h" 1 3 4
# 22 "/usr/include/errno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errno.h" 3 4
extern "C" {
extern int * __er(void);

}
# 23 "/usr/include/errno.h" 2 3 4
# 37 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 10 "/usr/include/sched.h" 3 4
struct sched_param { int sched_priority; char opaque[4]; };


extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);
# 38 "/usr/include/pthread.h"t unsigned c timespec {(*)(cousete[](v< timespec {
>{
        int quot;
  char03
# 40 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++   (const char *, size_t, char const **);
        int (*spu throwsing ::strsuts (const char *);
int remove (cont rmdir (const char *);
int setg++lo::geten timespec { *);
 strftime (char *, size_t, c 1 3 4
# ruct _pthisSION_ILLbuf {and;
eleteclude/errno.h"gned int sleep (unstrl(int c);
extew "/usr/include/ghighvoid);



char *asct 1 3 4
# f str;k (coar maze_t;     vec      low FILE *);
ar encoding[vegcc/daune_rune .3/c(cons

    | _RuneR|e mapup|      i|xtern _et_debug_pwd "/Users/jmh/de   | _RuneL|r/inclu|e/ctype|t);
int|nt isdinst ld) + # id srand (unsigned);
double strtod (d_t setsid (void);
int setuid (uid_t "/usr/incruct _pthhar *csetpgrp (int, pid_t);
char *ttyname (
char *ctime_r (const time_t *, chonst char *);
ssize_tuneLocale. using4 "/usr/iextern char ine lt;

typc inlingetopt/gcc/darwtern inchar *ruct _pth * consonst char *, char *, long, int);
int des tm *localtime_r (const time_tt encrypt (char *, int);
void endusershell (void);
int exect (onst char *, char * cchar *strsep char * const *);
int fchdir (inconf throw() { };

}
# 70 "/usr/include/gcc/darwin/3.3/c++/bint isascii (int);
int isblank (int);
int ish (*sputyignedbuiltin_s 1 3 4
# 88 "sphonogram (int);
it isrune (int);
int isspecial (int);
in ::remove;
  using :id);
cht);
int unlink pedectime (const time_t *);
g ::setvbuf;
  using ::sprintf;
  usiid);
cha (void nf;
  using ::fseek;t unsiged long, inint sleel (void);
char *getwd (c*);
int iusr/ity (int);
int link (c issetugid (w:clear);
char *mkdtemp (char *);
int mknod (const ::strncmp;
  using ::strxfrm;
  using ::strcodecvtid*, void*)if (__sav)
        strcpy(__sav, __old);nt nice (in isascagesizet nicegned long getpgid (pid_teer (resul


str using :okltime (cpartialltime (cerrooid *, sinon/3.t char *;
  usiusing ::fseek;
  using :Inr *,nt sradixsortEar *,nt sradixsortS unsint);
int ishexnignal.h (int);
int irn __builtin_s(int);
int isnumber (inignal.h" 1 3 4nsec;
};


struct tm {
        iignal.h" 1 ::ignal.signal.* __s1, int __n)lude/mac" 3 ern(const_cast<const charh" 1 3  *, siz(const_cast<const char/includ);
tsignedng htonl (ignal.h" 3   out(f unsignedsize_EGS_ tm *gmtf enum {
  usr/iromltime (constal.h" 3 4
struct sigconteextegnal.h" 3 4
struct slcpy c_maf (cht (*_write)      REGS_ int i,sc_sp;
        voiask;
;
    int sc_sp;
      signeosc_psdiv(long __i, long __j) extern "C" {
uns66 "/ppc/signgcontexnt sc_mask;
   int sc_psw;
    int s;
  using ::atoi;
  oid # 28 "/us.h" 2 3 4
#obase.h" 2 3
# 1 s_saved_t;
# unshif "/usr/include/ppc/signc_sp;
        void *sc_regs;
};
# 28 "/usr/include/mde/machine/signal.h" 2 3 4
# 73 "/usr/inclsignal.h" 2 3 4
#ptr;
};
 "/usr/inclto,# 28 "/us   int sigv;
        void *sigval_in"/usr/include/ppc/signal.h" c_sp;
        vontext {
    inue;
        long si_band;ask;
       achine/signal.h"int sc_psw;
    int 3 4
struct sigcoid ction_u {
        "/usr/include/ int sc_ir;
     2 3 4
# 73 "/usr/include/sys/signal.h" 2 3 4
#usr/i/usr/include/sys/signal.h" 3 4
typedef unsigned int sigset_t;

unio sigval {

        int sigval_int;
        ed char *_encoort[ std::nothrow_t&) throw();
void "C" {
uns int, sigioperator delete(void*,always_/usr/iginfo_t *, void *);
        sigset_t sa_m

struct sigact     unsigned char *_lengtht);
int  union sigval si_value;
        long si_band;
        in.3/c++/iosc_sp;
        vsk;
 ;
int inimaxuneLocale.runetype[_c] & _f);
}
              void *);
};
       stac     unsigned char *_max   int sinfo_t *, void *);
        sigset_t sa_mgaltstack stg ::isspace;
  using ::isupper;
  using ::isal.h" 3 4
# 1 "/usr/:rename;
  using ::rewupper;
}
# 48 "/usr/include/gcc/darwin/3.3/c++/iosf       int sv_mask;
 nclude/gcc/darwin/3.3s_saved_t;
# 4
# 134/usr/include/ppc/signal.h" 3 4
struct sigcontext {
    intint sc_onstack;
    int sc_mask;
        int sc_ir;
    int sc_psw;
    int st sc_sp;
        void *sc_regs;
};
# 28 "/usr/include/me/machine/signal.h" 2 3 4
# 73 "/cc/darwin/3.3/c++/bits_onstack;
};
# ptr;
};







typedef struct __siginfo {
     et_debug_pwd "/Use*sc_regs;
};
# 28 "/usnclude/sys/signal];


extern "C" {
int raise (int);

int kill (pid_t     union sigval si_value;
        long si_band;
        in int pad[7];
} siginfo_t;
# 208 "/usr/include/sys/signal.h" 3 4
union __sigaigaction_u {
        void (*__sa_handler)(int);
           void (*__sa_sigaction)(int, cc/darwin/3.3/c++/bited char *_a_mask;
     td::nothrow_t&cc/darwin/3.3/c++/bit/c++/bits/stri

struct sigaction {
        int);
int sigblock (int);
int sigi        int sa_flags;
};/usr/include/sys/signal.h" 3 4
typedef voivoid (*sig_t) (int);




struct sigaltstack {
  int);
int sigblock (int);
int sigigaltstack stack_t;
# 285 "climits" 2/signah" 3 4
# 1 "/usr/include/machine/signal.h" 1 3 4
# 27 "/usr/include/machine/sgstack rn __builtin_ssigstack {
        char<lude/machi.h" 1 3 4
r/include/macgnal.h" 3 4
typedef int sig_atomic_t;
# 50 "/usr/include/ppc/signal.h" 3 4
typedef enum {
        REGS_SAVED_NONE,
        REGS_SAVED_CALLER,


        REGS_SAVED_ALsdst;
        long tm_gmtoff;
        ch  using ::remove;
  usit nicetolower;
  using ::*);
int un*, const char *, int *);

char *re_comp (const charefinesr/include/gccg ::setvbuf;
  using ::sprintf;
 (int, f*ss_sp;
        int ss_onstack;
};
# 336 "/usr/include/sys/signal.h" 3 4
extern "C" {
void (*signal (int, void (*) (int))) (int);
}
# 63 "/usr/include/signal.h" 2 3 4


extern const char *const sys_signame[32];
extern const char *const sys_siglist[32];


extern "Cint raise (int);

int kill (pid_t, int);
int sigaction (int, const struct sigaction *, struct sigaction *);
int sigaddset (sigset_t *, int);
int sigdel(sigset_t *, int);
int sigemptyset (sigset_t *);
int sigfillset (sigset_t *);
int sigismember (const sigset_t *, int);
int sigpending (sigset_t *);
int sigprocmask (int, const sigset_t *, sigset_t *);
int sigsuspend (const sigset_t *);

int killpg (pid_t, ;
int sigblock (int);
int siginterrupt (int, int);
inthold (int);
int sigrelse (int);
int sigpause (int);
int sigrn (struct sigcontext *);
int sigsetmask (int);
int sigvec (int, struct sigvec *, struct sigvec *);
void psignal (unsigned int, const char *);


191 "/usr/include/unistd.h" 2 3 4

int profil (char *, isr/include/pthread.h" 2 3 4
# 1ude/machine/signal.h" 1 3 4
# 27 "/usr/include/macude/time.h" t nice);

char *re_comp (const char/usr/include/time.h" 3 4
struct d long*:cle"/usr/, mbf unsigr *);
onst char *, const char *, int *)g,unsigned long,void*);

inec;
};


struct tm {
        int tf enum {
        REGS_SAVEDar *,      REGS_SAVED_CALLER,


ong,void*const char *, int, const char *, const char *);
char *sbrk (int);
int select (int, fd_set *, fd_set *,mmand line>"
# 1 " const gid_t *);
void sethostiint raise (int);

int kill (pid_tr *, int);
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
int checkuseraccess (const char*,uid_t,gid_t*,int,int,unsigned l
    31uts (const char *);
int remove (conf_t);




# 1 "/ussize_t pwrite (int, const void *, size_t, off_t);
int rcmd (char **, int, const charid);
char *getpassd long*,unsigned long);
int searchf *);
int getpgid (pid_t _nt);
int select (int, *mkdtemp (char *);
int mknod, fd_set *, fd_set */include/mach/ppc/vm_types.h" 3 4
ty (uid_t);
int setgroups (int, const gid_t *);
void sethosong, int, con 1));
    52, const void *));

int radixsort (const de_t getmode (const void nt ishexnumh" 1 3 4
# 62 "/usr/*sbrk ude/ char *, ...);
intS_minu set_debug_mt,
l
        integex       integeX       intege             integeount;

int vsceger_t r + 16       integeuns;
   vations;
   "/usr/include pageins;
eactivatiogeins;
      integer_t pa   loions;
      4t pageouts;
 Eger_t faults;
       integer_t nteger_t faults;;
};nst charo.h" 3 4
# 1short u_int16nst timS_atomsef u *sbrnt tm_min;
 vm_statistics_t;
typedef struct vt ch       integerruct {
  M_zerction *, _Mt cow_struct
   0st);
int vslooku {
       1st);
int vsconst v2e.h"1t char *, vm_statistice/gcc/darwS_format_strucexceptio               nst timefptnsignedthread;

  inline char*
  st setlocale(0,prong 

typedef struct pmap_statistics inp_statistics_t;
# 63 "/usr/include/mach/host_infohed_get_modlclude/masing ::fseek;
  using ::fsetpos;
  usingnumt isdide/ppc/signal.h" 1 3 4onst char* __s2)
  { return __builtin_strpbrk(const_cast<const cha    __ret = sprintf(inclfmt, {
void *memchrar;
  using ::puts;
  usihar *group_from unsigned intdecimal_poine/ppc/sig unsigned intthousands/inc  int tm_yday;nst timMmt, __pre# 128 "/usr/includ/include/s/macint,n.h" 2 3 4
# 61 "/usr/includef quch/macint integer_t;





typedef naturade/mach/        int sv_flags;
};
# 303 "/usr/includhrow();
vsr/iniys/sloweo {
     
};

typedefuct machine_info {
     , time_t);
struct t   integer_t major_version;
        integer_t minor_version;
        integstructc >= (1 <<8 )) ? 0 :
       28 "/usr/incle/limits.h" 3 4
# 1 "/usrC" {
unsfo_data_t;

typ(*)(void *, fpos_t, pid_t _pan.h" 2 3 4
ypedef integer_t cpu_type_t;
typeclude/mach/hosttwall (void);3 4
char *);0)
     uneLocale.runetype[_c] & _f);
}
include/malue.h" 1 3 4
# 62 64 "/usr/inc/mach/mst_info.h" 2 3 4

# 1 "/usr/includ     inte        integer_t seconds;
  nclude/mamach/time_value.h" 3 4
struct tim/usr/includg ::isspace;
  using ::isu2 "/usr/include    integerude/gcc/darwin/3.3/c++/iosfwd" 2 3
fo_data_t;

typedef integer_t cpu_typ
# 28 "/usr/incluude/gcc/darwin/3.3.3/c++/iosfwd" 2 3
#lude/mach/host_info.h" 2 3 4

# 1 "/oolean.h" 2 3 4
#ude/gcc/darwin/3.34
# 62 "/usr/time_value {
tr_t { long sig; char opah/booleanhost_info_data_t[(1024)]++/iosfwd" 2 3
#     integer_t microseconds;
};lude/mach/maar kernel_boot_info_t[(4096)];







t/usr/include/mach/time_value.h" 3r/include/mac__i) { re * caddr_t;
typedechine_info_t;
typedefime_t);
struct/darwin/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h"de/mach/4
# 88 "/usr/insymbol;
        cfo host_bnt sleends;
        int3 4
struct lconv {
     t host_basic_inf;
        cpu_type_t cpu_type;
        ck (co6hread_attr_t { long sig; char opaqueold);
      setlocale(0, "C");

      int __ret;






 /include/mach/id);
char *getpasfo host_basic_inpc/sign        int tm_hour;
        ide/mach/ch/machine.h" 3 4
strmachine/boolean.h" 3 4
# 1 "/usr/include/mach/ppc/boolean.h" 1 3 4
# 129 "/usr/inuct machine_info {
    id);
char *getwd (char *);
int initgroups (*);
int ufo host_basic_in  integer_t mino pageouts;
 machin_type;
  /incle_t task;
      );


and;
  usin;
        cpu_type_t cpues_t;



struct hosgval_int;
      _value {
        integer_t seconds;
    ong, int,r_t minor_Sian.h" 3esource_sizes_t;



struct hosappedception" 3
  class exception
  {
  public:
   InRuneEntry;/include/ul;
sideogram (int);
int isnumber (i integer_t act char* __s2)
  { return __builtin_strpbrk(const_cast<const char
     strch# 129 "/usr/include/mach/ppc/boolean.h" 3y_object;
};

typedeul;
        int sv_flags;
};
# 303 "/usr/include/sys/signaledef stru_pthread_c(edef stru 48 "/un[3];
      sk;
 tics_t;
# 63 "/
int strncasc/darwin/3.3/c++/clocalesigre  usvach/time_value.h" 3 4
struct time48 "/ "/ust ss_fla     load_ita_t"/usr/includ   integer_t avenrun[3];
        integer_t mach_factor[3];
};

typedef struct host_load_info host_load_i    cata_t;
typedef struct host_load_info *host_load_info_t;







struct host_cpu_load_info {
        unsigned long cpu_ticks[4];
};
typedef struct host_cpu_load_info host_cpu_load_info_daton_decimashort
typedef struct host_cpu_load_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 67 "/usr/include/mach/memory_object_tyinh" 3 4
# 1 "/usr/include/mach/port.h" 1 3 4
# 91 "/usr/include/mach/port.h" 3 4
typedef natural_t port_name_t;
typedef port_name_t *port_name_array_t;


typedef port_name_t port_t;
# 117 "/usr/incla_t;
typedef struct host_cpu_load_info *host_cpu_load_info_t;
# 67 "/usr/include_cpu_load_info {
        unsigned long cpu_ticks[4];
};
typedef struct host_cpu_load_info host_cpu_load_info_data_t;ta_t;
typedef struct host_cpu_load_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 67 "/usr/include/mach/memory_object_tych/port.h" 3 4
typedef natural_t mach_port_urefs_t;
typedef integer_t mach_port_delta_cpu_load_info {
        unsigned long cpu_ticks[4];
};
typedef struct host_cpu_load_info host_cpu_load_info_datstructata_t;
typedef struct host_load_info *host_load_info_t;







struct host_cpu_load_info {
        unsigned long cpu_ticks[4];
};
typedef struct host_cpu_load_info host_cpu_load_info_dat
namespata_t;
typedef struct host_load_info *host_load_info_t;







struct host_cpu_load_info {
        unsigned long cpu_ticks[4];
};
typedef struct host_cpu_load_info host_cpu_load_info_data_t;hts;
        boolean_t mps_pdrequest;
        boolean_t mps_nsrequest;
        unsigned int mps_flags;
} mach_port_status_t;




typedef struct mach_port_limits {
        mach_port_msgcount_t mp
# 3al.h"_t;
typedef struct host_load_info *host_load_info_t;







struct host_cpu_stdint.h" 3 4
typedef u_onds;_t
  diinfo {
        integer_t avatisxnt);
i*pmap_ad_info {integer_t mctor[3];
};ace std
{
  using ::lconv;
  using ::setl1 3 4
# 62    cpy r *asctime_r (conect_types.h" 2 3 4
# 1 "/u

tylude/mach/vm_types.h" 1 3 4
# 35 "/usr/include/mach/vm_types.h" 3 4
typedevm_offset_t po void  usias);
int execlp (const char vm_offset_t vm_nfo *holude/mach/vm_types.h" 1 3 4
# 35 "/usr/include/mach/info_d);
int cheef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memory_    c3 4
typedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 69 "/usr/include/mach/memorclocale" 3

# 1 "/usr/object_types.h"y_object_size_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memo/usr/include/ory_object_array_t;




typedef mach_port_t memory_object_name_t;



typedef mach_port_t memory_object_default_t;
# 106 "/usr/inmemory_object_ssize_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memoch/port.h"e/mach/memory_object_types.h" 3 4
typedef int memory_object_copy_strategy_t;
# 142 "/usr/include/mach/memory_object_types.h" 3 4
typ4
typedef int memory_object_return_t;
# 169 "/usr/include/mach/memory_object_types.h" 3 4
typedef int *memory_object_info_t;
tstructy_object_size_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memo
namespy_object_size_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memol_qlimit;
} y_object_size_t;






typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memo       38 "/usr/include/pthread.h" 2 3 4
# 1 "/usle_priority;
        intst_basic_info o *hc++/cstdde
      /usr/i;
chachine/vm_types.h" 3 4
# 1 "/usr/include
      setlocale(0, "C");

      int __ret;

ong *types;
} _RuneEntry;eger_t minpuum_priority;
        integer_t maximum_priority;
};

typedef struct host_priority_info host_priority_info_dataanges;
  vm_offsechar *tm_zone;
 using ::puts;
  using ::remove;
  ust_attr_lude/mach/host_info.h" 3 4
struct host_load_info {
        integer_t avt_ben[3];
      .h"            f158 "/usr/incl, cons;
typed_t;
typedef struct host_load_inforune_t
inlice_t;, constct host_cpu_load_info {
         boolean_t temporary;
        boolean_t invalidatect ol     boolean_t silent_overwrite;
        boolean_t advisory_pageout;
};


typedef struct memory_object_behave_info *memory_object_behave_int (*_write) 3 4
struct ol     boolean_t silent_overwrite;
        boolean_t advisory_pageouut;
};


typedef struct memory_object_behave_info *memory_object_behave_info_t;
o_t;
typedef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_perf_info *memory_object_perf_info_t;
typedef struct memoryemory_object_perf_info memory_object_perf_info_data_t;

typedef struct memory_object_attr_info *memory_object_attr_info_t;
typedef struct memory_o
names
typedef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_perf_info *memory_object_perf_info_t;
typedefl_qlimit;
}
typedef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_perf_info *memory_object_perf_info_t;
typedef_yday;     
typedef struct memory_object_behave_info memory_object_behave_info_datstdint.h" 3 4
typd char *, unsigned)Valu
typedefedef vm_offset_t vm_lude/g/3.3/c+sr/include/mach/vmics_t;
# 63 "/usr/iect_perf_info_t;
typedef
extern int sched_get_h" 1 " 3 4
#y_object_pe  integer_# 31 "/usr/ininclu *pmap_statisvm_offset_t, __prect char *, chainclude/gcc/darwin/3.3/car> string;






}
#p"/usr/include/sneonst_cond_t;

tyc set_debug_pwd "/Users/jm_types "/u2 3 4
# 147 "/uachine/exception.h" 3 4
# 1 "/usr/include/mach/ppc/exception.h" typedef uint64_tnclude/mach/machine/exception.h" 2 3 4
# 57 "/usr/includon_types.h" 2 3 4
# 147 "/usr/include/mach/exce/machine.hh" 3 4
# 1 "/usr/include/mach/thread_status.h" 1 3 4
# 7atus.h" 1 3 4
# 60 "/usr/s.h" 3 4
# 1 "/usr/include/mach/machine/threastatus.h" 1 3 4
# 27 "/usr
# 31 "/usr/incadunct(int c);
, cons setlocale(0,wctor[3];
};

typedef struct 4 "/usr/include" 3 4
#t setvbuf (FILE *,c.h" 3 tus.h" 1 3 4
# 2727 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/thread_status.hoolean.h" 1 3 4
# 127 "tion_types.h" 2 3 4
# 147 "/u vm_offset_t vm_addctype 1 3 4
# 28 "/usr/include/mach/machine/exception.h"usr/inclulude/mach/machine/thread_staus.h" 1 3 4
# 27 "/usrr17;
        unsigned inth/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/nt r20;
        unsigned int r21        unsigned int r22;
        unsigned iinserppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/thread_sed int r8;
        e.h" 3 4
typedef int memory_ointeger_t seconds;      (void *, size_port_t upl_t;
typedef mach   boolean_t " 1 3 4
# 35 olean_t invalidate;
        boole  unsigned int lr;
        unsigned int ctr;
        unsigned int mq;

        uemory_object_pe  unsigned int lr;
        unsigned int ctr;
        unsigned int mq;

        uon_decimal_poned int cr;
    pc_thread_state_t;



typedef struct ppc_float_state {
        double fpregs[regs[32];

        unsigned int fpscr_pad;
        unsigned int fpscr;
} ppc_float_state_t;

typedef struct ruct ppc_vector_state {
        unsigned long save_vr[32][4];
        unsigned long save_vscrpl_page_info_arraave;
} ppc_thread_state_t;



typedef struct ppc_float_state {
        double fpregs[d_state ppc_saved_state_t;
# 148 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_e/exception_types.h" 3 btype_t cpu_subtype;       unsigned long *types;
} _RuneEntry; old_memory_objput_attr_info} _RuneE/usr/include/time.h);
 int
         getpagesizeol   unachine/boolean.h" 1 3 4
# 27 "/usr/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/mach/ppc/boolean.h" 1 3 4
# 129 "/usr/tics vm_statistic   int tm_hour;
        in/threa*, int, const char *, const char *);
char *sbrk (int);
int select (threafd_set *, fd_set *, fd_set *rsion;
        integer_t minor_vee.h" 1 3 4
# 28       _t;



sr_t max_cpus;
        intede/mach/u_type;
        ces kernel_resource_sizes_data
typedef natural_t *thread_state_t;


typedef int threadlonresource_sizef struct machineed char *_comparhar *getarwin/3.3/co1sr/include/runetyphi        iprec = -1)
    {
      clo2 integer_t exception2uneLocale.runetype[_c] & _f);
}
t exceptpedef ition_dption_bedef in        integer_t seconds;
    ansistition_type_t;
typede integer_t exceptioneger_t microseconds;
};
typedef sttion_mas 71 "/usr/include/gcc/    3 4
typhas   int sy_t;
typedef exception_behavior_t *exception_behavior_array_t;
tvor_a 71 "/usr/includ unsigned char *_ceptiexception_type_t;
tsr/include/rune1 3 4
# 27 "/usrhar **, intr/incypedef thressor_info.h" 1 3 4
# vm_size_1 3 4
# 27 "stdint.h" 3 4
typedef u_int8_t uin/mach/        integer_t user_priority;
        ie/mach/
typedef excblock (int);
int sigit exception_type_t;
typedef integer_t exception_data_type_t;
typtypedef int exception_behavior_t;
typedef integer_  integer_t micro1 3 4
# 129;







tyption_mask_array_t;
typedef exception_behavior_t *exce  integer_t microception_flalude/macunsigned int dp : 1;
                unsigned i/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" /mach/4
# 88 "/usr/include/time.h" 3 4
ed char         
        ilude/mach/proc *);
intrl(int c);1 3 4
# 27 "nst char *);
inhar **, int           unsigne          u : 2;
           ch/machine/proces# 106 void*) throw() { };
inline void operator delete[](void*,fo_data_t;
typedef struct host_sched_inf       ral_t;
# 86 "/usr/i              *);
int getpgid (pid_t _pid);
int getsid (pid_t _p     vm_size_t memory_region;
        vm_size_t memory_object;
};

typ : 1;
        nel_resource_sizes kernel_resource_sizes_datasigned int pmc1ct kernel_resource_sizes *kesor_info.h" 3 4
# 1 "/usr/include/machce_sizes *kernel_resource_sizes_t;



stsigned t_priority_infnt setgroups (int, const gid_t *);
void sd;
        stach/vm_statist;
       timigned long  62 "/usr/include/sdateorder { no_ rese, dmy, mdy, ymd, ydmde/sys/sigscii (int);
int isblank (int);
int ishexult mach/machine/boolean.h" 1 3 4
# 27 "/usr/include/mach/machine/boolean *inde2select : 6;
        }bits;
}mmcr0_t;

typvel/l[(4096)]ing ::putchar;
  using ::puts;
 har *tm_zone;
};
# 1 47 "/usrS     zones[14]in/3.3/stdint.h" 3 4
typ int tm_hour;
        i       ste/sys/cdefs.e/macint,[2];
};

typedef st0;
        mmcM_ inttistics processor_pm_regs_data_t;
typerapedef struct processor_pm_regs *ult :_pm_regs_t;
# 119 "/usr/include/machssor_pm_regs_t;
# 119 "/usr/include;
typ/mach/ppc/processor_info.h" 3 4
typeata_t;
typssor_pm_regs_t;
# 119 "/usr/includeam processor_pm_regs_data_tp
        processor_pm_regsam_pmh/ppc/prounetype (int);regs_data_t;
y;
typedef ol_cmd {
    intege2_t cmd_op;
    cpu_type_t cm3_t cmd_op;
    cpu_type_t cm4_t cmd_op;
    cpu_type_t cm5_t cmd_op;
    cpu_type_t cm6_t cmd_op;
    cpu_type_t cm7essor_control_cmd {
    intege_ar_t cmd_op;
    cpu_type_t cm_ad_cpu_type;
    cpu_subtype_t_a cmd_cpu_subtype;
    union p_arocessor_control_data u;
};

_atypedef struct processor_cont_arol_cmd processor_control_cmd_a_data_t;
typedef struct procmonth0r_t cmd_op;
    cpu_type_tnfo_ard_cpu_type;
    cpu_subtypnfo_ar cmd_cpu_subtype;
    unionfo_arrocessor_control_data u;
}nfo_artypedef struct processor_cnfo_arrol_cmd processor_control_nfo_ar7ypedef int processor_flavor_t;
8ypedef int processor_flavor_t;
9ypedef int processor_flavor_t;1short htopu_subtype_t cpu_subtypray_t;


typedef integer_t proc12edef integer_t *processor_info_a_array_t;


typedef integer_t proc_aessor_info_data_t[(1024)];


typ_aedef integer_t *processor_set_in_afo_t;


typedef integer_t proces_asor_set_info_data_t[(1024)];



_a
typedef int processor_flavor_t;_a





struct processor_basic_inf_ao {
        cpu_type_t cpu_type;_a
        cpu_subtype_t cpu_subty_ape;
        boolean_t running;
 _a       int slot_num;
        boo_alean_nt integer_t;





typedef natura
        stsr/include/gcc/darwin/3.3/set_flavor_t;


struct proces, time_t);
struct tm *gmtwd (char *);
int initgroups (const cned int r4;
     134 ;
    }
}
# ct sigaltsta(malloc(str 47 "/usr/istics     char* __sav = sttm tm *m
        unsigned int r4;
    ;
typedef snt);
int_basic_;
  u/macg ::malloc;
  unst char *,sk_c[0]      ;
typedef struct prd_count;
1       integssor_pm_regs_t;
# ppc/proces# 31 "/usr/in/mach/ppc/pfo {
        int tault ount;
        int thread_coult 
        /mach/ppc/processortruct pro    inteture_t;



union procestypedef struct processoampask_array_t;
ty   u 4
#div(long __i, long __j) /mach/
        {
        6 "/usr/i    inte_data_t cmtypedef struct processoata_t;
typedef ufo {
        int tas
# 73 "/usr/incluad_average;
t
        integet_load_info *processordt     integer_to_t;
# 73 "/usr/include/mach/mach_types.h" 2 3dayfo {
        int taskystask_info.h" 1 3 4
# 66 "//pol
        iner_t cmd_ocy_timesh    integemd_cpu_typcy_timesh2ase_priori cmd_cpu_cy_timesh3ase_priorirocessor_cy_timesh4ase_prioritypedef scy_timesh5ase_priorirol_cmd pcy_timesh6ase_priori




strur_t *policy_limit_t;
# 108 _abbreviated"/usr/include/mach/policy.h" 3 4
struct policy_timeshare_base {
or_control_nteger_t base_prioriol_cmd_t;
#ruct policy_timesharch/machine/
        integer_t m3 4
# 66 "/ty;
};
struct policycessor_infoe_info {
        intf integer_tx_priority;
        typedeger_t base_priority;
       nfo_afo {
        int ta polictask_info.h" 1 3 4
# 66 "/ polic
        nfo_array_t;



typedef st    inte processor_info
typedef stcy_times

typedef integ
typedef stinteger_et_info_t;


ty
typedef struct polrocessor_set_in
typedef st        ;




typedef i
typedef sty;
     or_t;





stru
typedef st7t base_priori {
      
typedef st8t base_priori        c
typedef st9t base_priorpe;
      imit policy_ruct policy_t       intimit policy__timeshare_lileanshare_info_t;

typedef struct policeger_t cur_priority;
        bolicy_timeshare_base_data_t;
typedef struct policy_tct processorimit policy_timeshare_libasic_info_d;
typedef struct policy_processor_bainfo policy_timeshare_insic_info_t;

# 142 "/usr/include/macu_load_info " 3 4
struct policy_rr_bg cpu_ticks[    integer_t base_prior processor_c   integer_t quantum;
};_cpu_load_inlicy_rr_limit {
        uct processomax_priority;
};
struct ssor_cpu_loainfo {
        integer_t include/machty;
        integer_t bas
typed {
        unsigned int word;
        struct truct procesne.h" 1 3t memory_size;
        cpu_ount;
        int default_ppu_subtype_t cpu_subtype;
};

typedef struct host_basic_in
        st4
# 88 "/usr/include/time.h" 3 4
slude/errno.h" 2       integ
       r1_t mmcr1;
        3 4
struct lconv {
       ifo_base *policy_f {
        integer_t max_priority;
     nst char *, mode_t, difo_limit *policy_fifo_limit_t;row()             : 6;
         sor_set_b unsigned in30reserved7 : 1;
                unsigned int reserved8 : 1;
                unsigned int reseuct processor_s     integer_t deprfifo_base_t;
typedessize_t read (int, void *, size_t);
int rmdir (const cult :memberusing ::strsread_attr_t { long sig; char opaque;
        policy_rr_base_data_t 0, "C");

      int __ret;






 ch/policy.h" 3 4
strucruct processor_set_basic      or_t *thread_state_flavor_ars.h" 3 4
stcessor_pm_regs thread_ch/machine.h_t;
typedef struct policubtype_t    setlocale(0, __sav);
      free;
        policy_rr_limit_data_t    int default_policy;
};

typedef

struct timeval;

int acct (c(const time_t *);
timpolicy_fifo_limit_data_t fifo;
};

struct policy_infos {
     new};

t[strlextershr (1 long lonstrcclude/cessor_pm_regst_priority_inf_t;
typedef struct policy_fruct _opaqcy_rr_info_data_t rr;
        policy_fifo_info_data_t fipriority;
};
srity;
};

tase.h"   policy;
cha

typedef naturanst char *delete []pend_count;
      sk_flavorselect : 5;
                unst;
       fo_t;


imit condattr_t;

typedef struct _opaque       integer_t free_countrity;
        integer_t idle_priority;
        integer_tult :imum_priority;
        integer_t mault : 1;
   y;
};

typedef struct host_priority_info host_priority_info_data_t;
typedef struct 31;
        }bits;
}pmcn_t;





struct processor_pm_regs {
      union {
     emory_object;
};

typ struct /thread_status.h" 2 3 4





typedef natud (uid_t);
int setg d int rese     intege: 31;
ypedef integer_t cpu_type_t;
typedypedef struhost_cpu_load_info {
        ue_t uboolean_t temhar *teger_t mach_factor[3];
};

typedef struct ruct host_load_info host_load_it_basic_info_t;def struct host_load_info *hnfo *t_info_td_info_t;







structmt;
typedef struct task_events_in_inftask_events_info_t;






struct task_thread_times_info {
        time_value_t user_time;

        time_value_t system_time;

};

typedeef stuct task_thread_times_info task_thread_times_info_data_t;
typedwthreaytask_events_info_t;






struct task_thread_times_info {
         size_t, int _t user_time;

        time_value_t system_time;

};

typede/mach/mauct task_thread_times_info task_thread_times_info_data_t;
typednfo_a   stch_types.h" 1 3 4
# 38 "/usr/include/mach/task_policy.h" 2 3 4
# 56   time_value_t user_time;

        time_value_t system_time;

};

typede_policy.h"uct task_thread_times_info task_thread_times_info_data_t;
typedyear" 3 4
enum task_role {
        TASK_RENICED = -1,
        TASK_UNStime_value_t user_time;

        time_value_t system_time;

};

typedeER
};uct task_thread_times_info task_thread_tistdint.h" 3 4
typedef u_int8_t u  integernclude/gcc/darwin/3.3teger_t csw;
};
tts_info_data_t_saved_state_t;
# 148 "/usr/include/mach/ps_info *task_events_info_t;






struct task_thread_times_info {
        licy {
        task_role_t role;
};

typedefedef mach_port_t upl_t;
typedef mach_podef struct task_thread_times_info *task_thread_times_info_t;
# 74 "/usrcial_port_t;
# 76 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thre/mach/mach_types.h" 1 3 4
# 38 "/usr/include/mach/tde/mach/machine/thread_s_port_t;
# 76 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thre_policy.h" 3 4
enum task_role {
        TASK_RENICED e_data_t;
typedef struct _t user_time;
        time_value_t system_time;
        integer_t cpu_usage;
    ER
};

typedef enum task_role task_role_t;

struct task_category_polic        integer_t suspend_count;
        intege char * caddr_t;
type
# 1 "/unum" 3 4
enum usingo_t;






strol_factoned inase_da     unsigned int r21;
      m  intcy.h" ax_data_t;
ty;
      char* __sa        unsigne1 3 4
# 88 " 4
# pbrk;

  inline char*
  str_t user_time;
        ti9;
        unsignech_types.h" 2 3 4
# 1 "y.h" 3 4
enum/mach/thread_policy.h" 1 3 4
# 56 "/usr/include/mach/thread_pol/usr/include/m   unnt, _data_t;
tyindedef set_debug_pwd "/Users/jmmach/thread_policy.h" 3 4
struct thead_standard_policy {
      vior_pm_retural_t no_data;
};

typedef struct thRENICED = -1,
        TASK_UNSPECIF        time_value_t user_time;

        te_data_t;
typedef struct policruct processor_set_basmory_object_attr_info_t;
typedef struct old_memory_object_attr_info old_memory struct _attr_info_data_t;




ef struct task_basic_info task_basic_info_data_t;
typedef struct id);
char *getpasad_time_constraint_policyrity;
};

typedef struct host_priority_info host_priority_info_data_t;
typedef struct host_peceived;
        integeoffset_t;






typedef natural_t vm_size_t;



ad_time_constraint_policy (uid_t);
int setgroups (int, const gid_t *);
void thread_time_con   unsigned inize;
        boolean_t may_cache;
};

struct memory_objecult :tr_info {
        memory_object_cop_t;






struct task_events_info {
        integer_t faults;
        intege_t may_cache_objects_sent;
        integer_t messages_received;
        intt_behave_info {
      te_flavor_t *thread_state_flavategy_t copy_strategy;
        boolean_t temporary;
       
        unsigned int ror_set_basic_include/mach/except strspn (c 1 "/usr/i_basic_infructsigned int r22;
        unsigneock_types.h" 1 3 4
# 46 "/usr/include/mach/clock_typnclude/mach/excep 4
typede r15;
  et_basi r15;
     ng ::rboolean_t silent_overwrite;
        boole





advisoryct mimespec {
excep struct task_category_policy *task_category_polr;
   3 4
externunsigned int lr;
        unsigned int ctr;
    1 3 4
# 46 "/usr/include/mach/clock_types.h" 3 4
typedef int alarmnt r15;
  espec {
        unmory_object_attr_info_t;
typedef struct old_memory_objexception_state_t;
# 28 "ach_typeclude/mach/machine/threadt importance;
};

typedef struct thread_precedence_policy thread_2_t constraint;
      /usr/include/mach/macthread_precedence_policy *thread_precedence_policy_t;
# 78 "/usr/include/mach/mach_types.h" 2hread_special_ports.h"       struct {
     icy *thread_time_constraint_policy/usr/include/mach/mac  integer_t minord long, pec_t;
# 82 "/usr/include/mach/mach_type           unsigned int threshmmoney: 1;
                unsignede/syrved nar *cons, symbo;
  ign, v3 4
onst char* __oupatr *, { r15;
field[4]ned long, short u_int16"/usr/inesideisspa_"/usr/i    unsigclude/m"/usr/imap_stats.h"  __oync.h" 3 __errorachieddef h/host_sr/incl/mach/maosf unioion" 3
  class exception
  {
  p 1 "/uIntlmemory_objec/vm_pmach/machine/boolean.h" 1 3 number (i/vm_prot.h" 3 27 "/usr/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/mach/ppc/boolean.h" 1 3 4
# 129 "/usr/include/moc(strlen(_intnt iude/mct;
        boolean_t temporary;
}; 4
typedef int bsr/include/mach/boolean.h" 2 3 oolean_t;
# 28 "/usr/include/mach/machine/boolean.h" 2 3 4
# 128 "/usr/includ/include/scurr_ude/ma        vm_inherit_t inheritpositivcludg   structed int r8;
       M_negalean_t reserved;
typedM_fracger_t r     int/include/   boh/ppc/processor        unsnegct processnt integer_t;





typedef naturan.h" 3 4
t    integer_t major_version;
        integer_t minor_version;
    m_region_baer_t max_cpus;
        intem_region_ba    int default_policy;
};

typedef struct processor_ste_flavor_t *thread_state_flavor_array_t;
vm_region_basic_info_dstruct tpriorct machine_info machine_info_data_t;

typedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
# 64 "/usr/include/mach/host_info.h" 2 3 4

# 1 "/usr/include/mach/time_value.h" 1 3 4
# 62 "/usr/include/mach/time_value.h" 3 4
struct time_value {
        integer_t seconds;
  ance;
     mach/time_value.h" 3 4
struct timude/mach/vm_r        integer_t seconds;
   boolean_t remach/time_value.h" 3 4
struct timn;
        unsi        integer_t seconds;
  fset_t offsetmach/time_value.h" 3 4
struct timt pages_shared_2 3 4





typedef inhavior_t beude/mach/time_value.h" 3 4
typedefd int pages_
        boned vm_sync_[12]; t threaigned int user_tag;
        unsigneepth;
        unsigned short shado
};

typedd_now_private;
        unsigned int 
        unsigned stdint.h" 3 4
typedef u_int8_t uasic_info_dat integer_t microseconds;
        integer_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_info.h" 2 3 4




typedef integer_t *host_info_t;


typedef integer_t host_info_data_t[(1024)];


typedef char kernel_version_t[(512)];


typedef char kernel_boot_info_t[(4096)];







tude/mach/vm_region.h" 3 4
struct vmritance;
      ar kernel_boot_info_t[(4096)];







tn;
        unsigned int user_tag;
       boolean_t resar kernel_boot_info_t[(4096)];







tt pages_shared_now_private;
        u_offset_t offset;
# 1 "/usr/include/t);
int sigied int pages_dirtied;
        unsig_behavior_t beh
# 1 "/usr/includeed short shadopager;
        m_region.h" 3 4
struct vm_reh/ppc/pr   unsigned int pages_resident;
   
};

typedef struct vm_region_extent;
};

typede vm_size_t tandard_poliinheritance;
        boolean_riority;
        ie_data_t;
typedef struct policy_litrl(int c);
exr_t su_subtype_t cpu_subtype;
};

typedef strsr/include/mach/vm using ::pun.h" 3 4
t_attr_info_dtlch_types.h" 2 3 4
# 1 "/usr/include//include/mach/vm_c(strlen(_       vm_offset_t object_id
typeef struct policy_f       vm_ogned lypedstru_extended_info vmsubmap_info_t;
typedef struct vmef quion_submap_info vm_region_submap_inftruct protypedef struct vm_region     unsigned short shadow_depth;
 ;
            p_info_64 {
        vm_prot_t protection;
    truct vmprot_t max_protection;
        vm_inherit_t inheritt to* __p, int __c, size_t __n)
  { return mevm_size_t cluster_size;
        boolean_t may_c/include/mach/vm_region.h" 3 4
tid);
char *getpas       vm_offset_t objectef struct {
   nt tm_hour;
        in.h" 3 4
t  vm_size_t thread;
        vm_size_t port;
        vm_size_t memory_region;
        vm_size_t memory_short u_int16gion_flavor_t;
type4_t;





struct vm_region_basic      struct {
                unsigned int pmc3sele       vm_offset_t objectct kernel_resource_sizes *kernel_resource_sizes_t;



stn.h" 3 4
tt_priority_info {
        inte      boolea_submap_info_64 vm_re  integer_t system_priority;
        integer_t s  unsigned short u        integer_t user_priority;
        i {
        vepress_priority;
        integer_t idlered_count;
};

typedef struct vm_regietugid (n_submap_info *vm_region_submap_in   integer_t idle_priority;
        integer_t/vm_primum_priority;
        int
struct task_events_info {
        integer_t faults;
        integer_t pageins;
        integer_t cow_faults;
        in1 3 4
# 129 "/usr/include/mach/ppc/boolean.h" 3




struct vm_region_/include/mach/host_info.h" 3 4
struct host_load_info {
        integer_t avenrun[3];
      .h" eger_t mach_fact;
typedm_reuct mach_port_limits {
        mach_port_msgcount_t mpl_qlimit;
} macunit_timeshare_base_ct host_load_info *host
inliinfo_t;
n.h" t;







struc/kmod.host_cpu_load_info {
        unsigned long /usr/include/mach/kern_return.h" 2 3 4
# 35 "/usr/include/mach/kmod.h" 2 3 4
# 54 "/uuct processtrolount;
.h" 3 4
typedef int kmod_t;
typedef int kmod_control_flavor_t;
typedef /usr/inextended_info_t;
typedef struct vm_region_extelicy_t;
# 75 "/usr/includeupl_t;
typedef mach_port_t vm_narence {
        struct kmod_reference *next;
        struct kme/mach/kmod.h" 2 3 4
# 54 "/usr/include/mach/kmod.h" 3 4edef mach_port_t upl_t;
typedef mach_port_t vm_nastruct kmod_info {
        struct kmod_info *next;
        int info_version;
        int idrence_t;
# 73 "/usr/include/ject_attr_info_t;
typedef struct old_memory_object_attr_info old_memoryt kmod_stconstraint_policy {
        uint32_t period;
        uint32_t struct memory_objec/vm_prtr_info {
        memory_oselect : 7;
                unsigned int pmc2select : 6;
        n_t may_cache_object;
    h" 3 4
# 1 "/usr/include/mach/ppc/kern_return.h" 1 3 4
# 135 "/usr/include/mach/ppc/kern_return.h" t_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t temporrn_return.h" 2 3 4
# 35 "/usr/include/mpedef struct ppc_exception_state/kmod.h" 3 4
typedef int kmod_t;
type_t tv_nsec;
l_flavor_t;
tadvisoryvoid* kmod_args_t;



typedef strt kmod_generic_cmd {
        int type;
        char data[1];
} kmod_generic_igned int srt;
# 73 "/usr/include/mach/kmod.h" 3 4
typedef 





typedef mach_port_t task_t;kmod_info *ki, void *data);
typedef kern_return_t kmodr;
       1 "/usr/include/mach/vm_attributes.h" 1 3 4
# 70 "/usrn_return.h" 2 3 4
# 35 "/uschine/exception.h" 2 3 4
# 57 "/cmd_t;
# 91 "/usr/include/  unsigned int lr;
        unsigned int ctr;
    ypedef mach_port_t semaphore_t;
typedef mach_port_t lock_set_t;
tyh_port_t host_t;
typedef mach_portlude/mach/vm_attributes.h" 3 4
typedef int vm_machine_attribute_val_t;
#processorclude/mach/machine/thread_str* __oumessageppc/tyd enduseronst chatypecataloan.h"ion" 3
  class exception
  {
 ude/mach/kmod
typedeypedef int *vm_region_info_t;
typ
typedef mach_pr/include/mach/machine/thread_state.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_state.h" 3 4
# 1 "/usr/include/mach/ppc/thread_state.h" 1 3 entry_t;ypedef struct processoead_t *thr int, const char *, const char *);
char *sbrk (int);
int selectentry_t;sr/include/gcc/darwin/ocessor_set_t *processor_set_na    int default_policy;
};

typedef struct processor_set_basic_ndler_t*)(const vcntrl(in    __ret = s, cons "/usr/inclu   int quot;
 d int tv_sec;
        clock_res 156 keymgr_gstruct m_t *ledger_array_t;
# 156 "/usr/include/mach/mach_t.h" 3 4
typedef;
                unsigne integer_t seconds;
  egerndler_t);
exttypedes_inftypedefsgpecth_port_t host_t;
typeinclude/mach/kmod.h" 3 4
typedef kern_rshared_infypedef hored;
        botruct proceclosetypedef hostregion.h" 3 4
struct vm_region_ex_nameng ___runetypdress;
        vm_size_t size;
};r_set_nanfo vm_region_extener_array_t;
#rray_t tport_t;
typedef thread_array_t thread_po
                unsigned int dis : 1;
      t;
typedef e_t;
ad_act_h_port_t host_t;
typednt sched_priority; char opaqutruct procerocessor_t_t;
typpc_vector_state errno.h" 2 3ception.h" NM_RECUsigned int srt;
# 73 "msmaphore_f int policy_t;
tyruct _pref enupretr *strfifo_, off_tr *strstr (const msg./typeE *);
int fsy_t;
typedd int dis : 1;
   ception.h" 1
# 2port_tst timeedger_port_t;
typedef ledger/machine/ansi.h    vm" {
v*policy_  int ss_edger-t;
t# 18 using ::strcmp;
  using ::strcoll;
now_private;
        unsigledger_array_uct processd *, size_h" 1 3 lude/pthread.h" 2 3 4
# 1 "/usr/include/time.h"t proces4
# 88 "/usr/include/time.h" 3 4
4
# 62 "/usdef char nt sleeead_act_t thread_act_port_t;
typedef tct_types.h" type" 3


# 1 "/usr/include/ctype.h" _handler_arrayied;
        unsigef char *user_sselect : 7;
                unsigned int pmc2select : 6;
        }bits;
}mmcr0_t;

typedef union {
        unsigned int w"/usr/include/par *getwd (char *);
int initgroups (const char *, int);
int iruserok (unsig {
        int32.h" 2 3 4
# statistic   (const char *, size_t, char const **);
        intentry_t;
ase_data_t rr;
        policy_fifo_base_data_t fifo;
};

struct policde/sys/time.h" 3 4
s0, "C");

      int __ret;






 edef char *user_subor_set_name_array_t;
tt max_por_t *thread_state_flavor_arrtate_t;


typeer_array_thread_state_data_t[lue;
};




struct clockinfo {
        int hz;
        int      vm_inherit_t inhevm_size_t memor  int tickadj;
        int stathz;
        int profhz;
};
# 179 "/usr/include/sys/time.h" 3 4
extern "C" {
in unsigned3 4
extern "C" {::t_t;
typedefezone *);
int seti 156 "/usr/include/mach/mach_types.h" 3 4
typedef task_e_data_t;
typedef struct poli                untion
  {
  pubtask_array_t task_port_array_t;
texception_handler_t *exceptionezone *);
int seti_t processotion
  entry vm_read_entry_t[(256)];
# 9
typedeexception() throw() { }


    vil *, struct timezone *);
int setitimer (int, const struct itimerocessor_t processor_port_t;
typedef processor_array_t tion
  {
  pube_t);gettimeofday (struct timeval *, struct timezone *);
int setid int dis : 1;
 _attr_getinheritsched_act_t thread_act_port

struct timeval;

int acct (ct;
typedef thread_act_array_t thretion
  {
  publi_arrayclude/sys/time.h" 3 4
extern "C" {
invm_prot_t attr_getinheritschedmaphore_t semaphore_tion
  y_t;
tylue;
};




struct clockinfo {
        r/include/mach
        in   int32_t tv_sec;
        int32_t tv_  int ticze (const pthrea int stathz;
  unt;
    (pthread_attr_t *attr);
int pthread_attr_pthread_att struct vm_region_submap_info
typedet_priority_in     8r *, const char *);
int fprintf (FILcc/darwin/3.3/c++/ppc-darwin/be" 3


# 1 "/usr/include/ctype.h" 1 3 4
sigrelse (issr/in set_new_ha.h" 3 4
typedef task_ttion
  {
  pubr *);
off_t lseelean.h" r_t t_ar.int)(*sputrun::sr/inclng ___runetattr_t *attr, const struct sched_param *param);
/inclpthread_attr_setschedpolicy (pthread_attr_t *attr, int policy);

int pthread_attr_setstackaddr /inclead_attr_t *attr, void *stackaddr);

int pthread_attr_setstac);
inpthread_attr_setschedpolicy (pthread_attr_t *attr, int policy);

int pthread_attr_setstackaddr );
inead_attr_t *attr, void *stackaddr);

int pthread_attr_setstactatic ihread_attr_setschedpolicy (pthread_attr_t *attr, int policy);

int pthread_attr_setstackaddr 

   ead_attr_t *attr, void *stackaddr);

int pthread_attr_ is <<8 ))hread_attr_setschedpolicy (pthread_attr_t *attr, int policy);

int pthread_attr_setstackaddr _Runeead_attr_t *attr, void *stackaddr);

int pthread_attr_setstac mapuread_cond_signal (pthread_cond_t *cond);
int pthread_cond_wait (pthread_cond_t *cond, pthread_m mapuead_attr_t *attr, void *stackaddr);

int pthread_attr_setstac     read_cond_signal (pthread_cond_t *cond);
int pthread_cond_wait (pthread_cond_t *cond, pthread_m     ead_attr_t *attr, void *stackaddr);

int pthread_attr_setstackbooleapthread_attr_t *attr, size_t stacksize);

int pthread_attr_setstack (pthread_attr_t *attr, voim_regionattr_t *attr, void *stackaddr);

int pthread_attr_setstactern __create (pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *atern _t *mutex);

int pthread_cond_timedwait (pthread_cond_t *cond, p"/usad_mutex_t *mutex, const struct timespec *abstime);


int pthread_condattr_init (pthread_condattnu long ___runetattr_t *attr, const struct sched_param *param);
/ctyponst sigset_t *, int *);
int pthread_getschedparam (pthread_t thread, int *policy, struct sched/ctypead_attr_t *attr, void *stackaddr);

int pthread_acreate *, ststatic ihread_attr_setschedpolicy (pthread_attr_t *attr, int policy);

int pthread_att
static inline int
utex, int *prioceiling);

int pthread_mutex_init (t pthread_cond_signal (pthread_cond_t *cond);
int pthread_cond_wait (pthread_cond_t *(1 <<8 )) ? ___t__p)  throw() { };

}
# 70 "/usr/include/gcc/erator delete (voi__p), __c, __n); y) ;
extern void _keymgr_set_per_thread_data(unsigned in
void swab (ioy_t;
typedet timeshdef mach_port_t io_me;
  using  ::gets;
  using ::perror;
  using ::printf;
  usnline char*
  strrchr(char* __s1, int __n)(const pthread_mutsr/includ2]; } ptnt *protocol);

int pthread_mutexadaddr_t;
daddr_t;t_cast<const char*>(__s1), __s2); }


voin;
  using ::strtok;
  using ::memset;
  using ::strer"/usr/include/m1 3 4
# 88 "wind;
  u
int pthread_mutexat"/usr/include/ctype.h" 3 4strrchr(con_c++/excene void*     integer_t c/usr/include/machattr, int priocet *ade/mar(char* __s1, int __n)on() throw();


    virtual const chgetpgr, int prioceiling);

int pthreadkmod_info_t;


  usinl (pthread_mutepedefne_t maplowestdint.h" 3 4
typ/3.3/c++/exception" 3
  void _clude/mt pthread* __s2)
    vm_prot_t, coe_t *once_contro3.3/c++/nillf long ::ptrdiff_t;
  using ::size_t;
}
# 50 "/uMel/libgistessor_control_cmdttr);
int pusr/innt tm_m, int policy, cutexattr_t usr/inutexatam *param);


int pt(pthready_create gead_ struct vm_rent *prioceilit void *ption_       unsigned char external__throw ? 0electedef alarioceiling*>e[8];    int sa_flags;
};


 typedef y_t key);
int pthread_setspecific (pze_t w1stombs (char *, const wchar_t *, siznt pthread_mutexattr_init 3.3/c++       vdid stred int pages_shared_now_prhread_mutepc/si_getsco *);
int printf (const char *, ...);nt pthread_mutexattr_init rocessor_set_R
};
.3/c++e/ppc/si = goodr *);
nt *prioceili{
        if (id strmodead_rwlock_i.h" 2 3 4
e_t;
t
int pe_t;
tnt);
int p|ttr_t *atsignede;
  using ::getenv;
  (pt       unsigned char external_nt);
int p=     key) ;
eator delete(void*,# 1 "d int tv_sec;
        lock_rdlock (pthr&d_rwt);
char _getsco;
}







static inline int __sputcnt pthread_mutexattr_init lete(void*, conlock_t *rwlock);
int pthread_rwlock_trywrlo(bathre |, conr *)hread_rwlorwlock);
int pthread_rwlba_tryrdlock (pthread_rwlocread_rwlock_trywrlo);
inthread_rwlock_; char opaque[40]; } pthread_mutex_thread_attr_setscope (pthread_attr_t *, it char *, conr_t { long sig; char opaize_t strze_t w22achine/vm_types.h" 3 4
# 1 "/usr/includeroy (pthread_rwlock_t * rwlock);t char *, crwlockattrize_t 4
typedef struct _opaize_t str+/bitsze_t mutexattr_t;

ty
int p (void);
int pthrebs(long __i) e;
  using pper;
  using :ioceilingarwin/3
  using ::size_t;
}
# 50 "/usr/:rewt timesh {
        t;

type/stthreahread_rwlock_wrlo2 "/usr/include/sys/t(pth4


# emcpint pthread_mutex_unlock (pthread_mutex_t *mutex);
inoid);
char *tm;

int pthread_once (pthr
        nt pthread_getconcurrency (voncetruct etpos (FILE *, fpos_t *);
char *fgetk (pthread_rwlock_t *rwlockd_t *thread, const pthread_attr_t *attr, hared);

int pthread_once (pthreaid *stgcc/darwi32_t dev_t;fault.h" 2 3


typedef pthread_ke+/cstdad_once_t *onccessor_   lony_t __;
  using ::exit;
  using ::free;
  lock_wrlocff_t;
  using ::size_t;
}
# 50 "_t *, int" 3 4pthread_getconcurrency (void);
int), voi30pn;
  using ::strtok;
  using ::memset;
  using ::strer.3/c++/ppc-darwin/bits/gthr-default.h" 3
static inliread_cond_t *, pthread_t);


int pthreat uintptr_t;utex, con(*)(consinclfmp_statis{
  if (__uralhar *mkwin/3.3/c++.3/c++/iosfwd" 2t pt div(long __i, long __j)  throw(); pthread long clock_t;




typedef lohreaAD_SPECIFctype"' ' union {
        chread_keyude/machine/endian.h" 1 3 4t *);
int nit_routine)(vno_t;
int pthread_mutex_unlock (pthread_mutex_t *mutex);
in4
# 64 "/usr/incllse
    retuusr/include/eh3 4
# 63 "/usr/incline/excepti+/cstdtspecifreturrity_info {
 , void else;
  using ::exit;
  using ::free# 3timespec *reltime);




int pthread_create_suspended_np (pthrer_t;

typedefruct {
        int quot;
 mach/8r (__gthread_key_t key, void *ptr)
{

  if (ptr)
    return pthrextern int ispunct(int c);
extern int isspace(int t cha0 *rwlock);
int pthread_rwlock_unlock (pthread_rwlock_t *rwlocdarwin/3.3/c++/cctype" 3
extern "C" {      int tm_min;
 rwin/3.3/c++/ppc-dconst _cond_timedwait_relatnd_t *cond, pthrtypedef stre/stonce (__gthread_once_t *once, void (*func)*rwlock);
int pthm_reheckte[](v_opaque_pthre
int isncludrn -1;
}

static inline int
___# 1 "/usr/incb;

row_badr *stuct __sbuf _lb;


 /machine/endtypedef struct processocachete[](vo return pthread_getspecng, char *, :strncmp;
  using ::strxfrm;
  using ::strcspn;
  usconst void *int pthread_mutex_unlock (pthread_mutex_t *mutex);har **, int, const unsigned char *, unsigned);

int sradixsort (const unsitatic inlrwin/3.3/c++/cstddef" 2 3
::
int pthread_rwlock_ic_info {
        ik_t *rwl/climithread_mutexoid);
int pthret voidthreae__ ((noreturn));
}
_streampos;

  typedef __gthre |d (consth_error(conread_rwlock_trywrloint _ur char *, copos_t __c_st0;
}

st tivoidure("ad_mutex_amoff;
  typede) causedmach_threa"nfo_t;


typedef integer_t task_infot sradixsort (const unsi/ppc-darwin/bits/gthr-default.h" 3
stastd
{

  typedef long streamhread_once (__gthread_once_t *once, void (*fu_info {
     iff_t;
  using ::size_t;
}
# 50 "/us_t;
typedead_t threa __c_streampos;

 t void      intepthread_get     rune_t max;
  using :: = 0x0002;
    static const __int_type _S_fixed = 0x0004;
 .3/c++/cstddef" 2 3

pace std
{

  typedef long streamoactive_p ())
    return pthreasource_sde/mach/ppWords1;

 ype  =efineh     howpeger_t *, S ...);    static) ?thread_mutex__int_typeata_ewt_type [0x0800;
    static {
    strpbrallrt);
uisn pthcbad_ke0800;
 ctatic cthread_aremset cc constch/ppc/bow()   rereferencer_t ledgerppercasercase = 0(erase_eve_currsys/types.h" taticuspend__int_typec/darwin/3.3/c++/bits/t virtual_sizhowpd long long
   taticd_mask fds_bih" 1 3 4
# 1ispose80 | 0x0010nfo vm_regppercase = 0ad_keynst __intf struct {
i       ciar ma0800;
    static*optaristatic consthowpo[__i     eofbit = 0x0e _S_ const __int_type _S_basefield = 0x0002 | 0x0040 | 0x0008;
    static const __int_type _S_floatfield = 0x0100 | 0x0004;floatfiint_typct = 0x0040   static ailbit = 0x04;
sys/type* __p) throwflagmeva0800t_typehar *, con(*dtor) (t ss_0800onst _10;
    static cachiisio tas0800 };
}
# 4510;
    static ctr,  "/usrtr, v0;
    static cead_k _S_outreturnfo vm_regt __int_type;

   "/usrt_type;

     __int_type _S_b80 | 0x0010pe _S_s static const _bits/stl_algobase.terminate() __attribute__ ((__noreturn__));


  unexpekey_t kestd
{

  typedef long streamnt ispunct(int c);
extern int isspace(int c);
e pthreadh/host_/c++/bitttr, voconst __int_tygthread_actisched_par static const
# 182 "/ed_par->t c);
extern int isxdi
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(co_mutex_initstd
{

  typedef long streamctype" 3
extern "C" {
exte using ::tim {
        fd_RECURSION_c const __int_tyock;
  using ::difftime;
  using ::mktime;
  using );
extern i);
char *strtok_r (char *, coion() throw() { }


    virtual ~bad_exception() tr_t;

typedstd
{

  typedef long streamruct {
        int quot;
       pthreadme_t);
stolde[8]; } pthread_mutexatt_t user_timedef struct _opaque*mutex)
{
  if (struct _opaque;



  typedef fpchar *strsep (c
  typedef fp-> struct _struct _opaque80;
    static const __int_type _S_scientific = 0x0100;
    static consamespace std
{

  typedef long streame int
__gthread_mutex_trylock (__gthread_mutsource_sizes {_t user_tinheritad = 0x0020 | 0x    streamofMt_typppc/ty   private:
_t __g0r_arr5pn;
  using ::strtok;
  using ::memset;
  using ::har **,lete (__gthread_k;

ind = 0x0020 | ead_key_creaef quadypes.h" 2 3 ksize_np ( (pthrect = 0x0040;
    static const __inttreampos;

  typedef __gb ?this; }
 :truct __ios_ft; }

      void
      state(__state_type __st) { _M_st = __st; }



      fpos(): _M_off(*mutex)
{
  if (__gthread_active_p (_info {
        ihaype off_ const struchread_atos_t __c_streed_par = &r *);
off_streamoff __off)
   ad_mutex_t __c_lock;
   fpos __t(darwin/3.3    operator-(stutexattr_t off)
      {
        futexat_t(*this);
     st fpos& __pos) con       return __t;
      urn _M_ofshort hto  operator==(const (pthreadpos) const
      { returnimumoff == __pos._M_offf != __pos._M_o
      operator!=(const fposamoff
scanf;
  const char *, char **);
void swab (g" 2 3
# d_rwlocex);
ithrow() { return __p; }


inline void operator delete (voticssing ::strcmp;
  using ::strcoll;
  using ::s5 throw() { };

}
# 70 "/usr/include/ackwardtdiohread_sing ::strncmp;
  using ::strxfrm;
  using thread_*, void*) char opaque[40]; } pthread_mutex_t# 1 "/usrvoid*, void*) throw() { };
inline void oplimits*, void*)d_mutexattr_t *attr, int *type);

iits/func
ssiz5;
        fpos_t _offset;
} FILE;

__throw_baint, const unsigneude/sstruc_rou intty

typt);
pidast(vreadterminpedef -         __thto4 "/{
    nsigned c  void
 _neare

}
#id);


  void
  __thinfe inyt wid);


  void
  __th *vmomain_errornt);
in  __throw_bad_denormvoid);

  void
nst charow_bad_typeid(void);


nst chaabseclude/(const char* pres);

  counistics har* __out,numeric_its/fuf mach_port_t vior_t behavior;
  s_specn;
   d_t { long me_error(const chatypeeins;
   scanf;
rror(const char* __s);
10
  void
  __throw_overfr* __s);
decimaedef quad_t *__s);

  void
  __thrf eng     low_error(const char* __s);


  exa     low_error(const char* __typeradix    bool
  lude/gcc/darwin/3m);
ixpon);

  void
  __throw_overflow_
{
  templatconst char* __s);

  voidname ax  template<typename _CharT, typename  basic_ios;const chror(const char* __s);

operomain_errorlow_error(const char* __s);

operquiet_NaNasic_streambuf;

  template<typenameow_ualf leT, typename _Traits = char_traent(const char* __enamenst ch =t char* __s);
eambuf;

  template<typenamenst chalost = hrow_range_error(const chs);


  vec559__throw_ios_failure(const char* __sbast(nderflow_error(const char* __s);


  modul_log template<typename _CharT, typtrap;

  templaTraits = char_traits<_Cinyness_befor__t(asic_istream;

  template<typecast(void);or(consplate<=
  void
  __throw_t;

typedef union {
        uTp_v(char* __ou
  void
  __thnt fsctl (co
  void
  __throw_runt int __size, cons_Tph" 3 ze_t, conef int kmo);
char *strsTp>truc00 | 0x00am;

  templaxe<typename _CharT, typename _Traits = char_traits<_CharT>,
 epsile/gctypename _CharT, typename _Traits = char_traits<_CharT>,
   __th 1 3 gstream;

  template<typename _CharT, typename _Traits = chaomain_ergstream;

  template<typename _CharT, typename _Traits = cha _CharT, gstream;

  template<typename _CharT, typename _Traits = chaT> >
    clasgstream;

  template<typename _CharT, typename _Traits = chanst chalate<typename _CharT, typename _Traits = char_traint);
ssize_t pwri      typename _Alloc = all< 1 "    unsigned sror(const char* __s);

  void
  __t/machihar *tm_zone;
 strucate<typenamehrow();
void opeef quaar_traits<_CharT struc         typ.h" 3 4
# 1 "/usr/uetwall (void);
time_t timar* __s);

  ;
typedef__throw_overflow_error(const char* * __s);

  void
  __throw_underflow_error(c(const char* __s);


  void
  __t/machine/endilure(const char* __s);
}
# 5 "/usr/include/gcc/darwinin/3.3/c++/iruct poliT, typename _ostringstream;

eam;

  template<typename _CharT, typename r_traits<_CharT>,
   eam;

  template<typenametypedef basic_ios<char> 
{
  template<typenameme _CharT, typename _Traits = char_traits<_<_CharT> >
    class basic_ios;

  templalate<typename _CharT, typename _Traits = chahar_traits<_CharT> >
    class basic_streambufuf;

  template<typename _CharT, typename _Traiaits = char_traits<_CharT> >
    class basic_istreaeam;

  template<typename _CharT, typename _Traits = char_traits<_<_CharT> >
    class basic_ostream;

  template<tybasic_streambuclass basic_stringeam;

  template<typename _CharT, typename its = char_traits<_eam;

  template<typename _CharT, typename name _CharT, typename _eam;

  template<typename _CharT, typename tream;

  template<t<char> ostream;
  typedef basic_iostream<char, typename _Traits = char_trtraits<_CharT> >
    class basic_ "/usr/include/gcc/darwin/3.3/c++CharT, typename _     mmcr0_t mmcr0;
  its<_CharT>,
 "/usr/include/gcc/darwin/3.3/ allocator<_CharT> >
    clasass basic_stringbuf;

  template<typename _CharT, typename _Traits =satty (int);
int link ( class basic_ofstream;long tv_nsec;
};ename _CharT, typename _Traits = char_traits<_CharT> >
  h/hosss basic_fstream;

  template(( *);
igist < ::r?  *);
i1 << char *);*);
in* 8 - && __x.second ==ock late < char_traits<_CharT
{
  rTraits = char_traits<_CharT> && __x.second == __yy.second;
}


template <class _T1, class _T2>
inandle : ~e bool operalass istreambuf_iterator;

  temp


template <class _T1, class _T2>
in typedef basic_ios<char> error(const(


template <class _T1, class _T2>
inl* 643 / 2136 operator!=(const pair
  __throw_underf&& __x.second ==);
}


template <class _T1, case;
# 136 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3
  typedef basic_ios<char> ios;
  typedef basic_strmach/m<char> streambuf;
  typedef basi_rwlonline bool operatotypedef basic_ostream<char> ostream;
r_getschsic_stringbuf<char> stringbuf;
  pedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;
# 166 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3
}
# 71 ".h" 2 3clude/gcc/darwin/3.3/c++/bits/stport_operator<(const pair<_T/include/gcc/darwin/3.3/c++/bits/ste_traits.h" 3
# 90 "/usr/incclude/gcc/darwin/3.3/c++/bits/stl_pair.e_traits.h" 3
# 90 "/usr/inclate <class _T1, class _T2>
struct p);
char *strame[];& __x.second < __y.second)e;
  typedef _T2 second_type;

  _T1 first;
  _T2 second;




  pair() : first(), second() {}




  paipair<_T1, _T2>& __y)
T2& __b) : first(__a), second(__b) {}


  template <class _U1, class _U2>
  pair(const pair<_U1, _U2>& __p) : first(__p.first), second(__p.second) {}
};


template <class _T1, class _T2>
inlar *tzname[]c_istringstream;

  arT, typename _Traits = char_traits<_CharT> >
  ar *tzname[ return __x.first == __y.first-127ndlert pair<_T1, _T2>uctor;
   typTraits = char_traits<_CharT>127__x.second < __y.second);
}


template <classar *tzname[<class _T1ructor;
   tline bool operator!=(const pair<_T1, _T2>& __x, const pructor;
   typedef __true_type is_POD_type;n !(__x == __y);
}


template <class _T1, class _T2> "/usr/include/gcc/darwin/3.3/c++ase;
# 136 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3
  typedef basic_ios<char> ios;
  typedef basic_structor;
   tyr<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>uctor;
   ty) {
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
# 53 "/uctor;
   tynclude/gcc/darwin/3.3/c++/bits/typ);
char *strar *tzname[]; char_traits<_CharTuctor;
   ty/include/gcc/darwin/3.3/c++/bits/stPOD_type;
};

template<> struct __type_traits<wchar_t> {clude/gcc/darwin/3.3/c++/bits/stl_pair.POD_type;
};

template<> struct __type_traits<wchar_t> {raits {
   typedef __true_type this_dummy_member

template<> structst;
# 113 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 3
   typedef __false_type has_trivial_default_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typedef __false_type has_trivial_assignment_operator;
   typedef __false_type has_trivial_destructor;
   typedef __false_type is_POD_type;
};




template<char *tzname[]ype_traits<bool> {
   typedef __true_type has_trivial_default_constrchar *tzname[ return __x.first == __y.firstnst pair<_T1, _T2>_type has_triviype has_trivial_assignment_oper * 2Usk_i__x.second < __y.second);
}


template <classchar *tzname[<class _T1 is_POD_type;
line bool operator!=(const pair<_T1, _T2>& __x, const p is_POD_type;
};

template<> struct __type_train !(__x == __y);
}


template <class _T1, class _T2>reambuf_iterator;



  class ios_base;
# 136 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3
  typedef basic_ios<char> ios;
  typedef basic_str_type has_trivr<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>_type has_triv) {
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
# 53 "/_type has_trivructor;
   typedef __true_type is_POD_type;
};char *tzname[]; char_traits<_CharT_type has_triv
   typedef __true_type has_trivial_default_contypedef __true_type has_trivial_default_construc_copy_constructor;
   typedef __true_type has_trivitypedef __true_type has_trivial_default_construcraits {
   typedef __true_type this_dummy_membertypedef __true_type hst;
# 113 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 3
   typedef __false_type has_trivial_default_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typedef __false_type has_trivial_assignment_operator;
   typedef __false_type has_trivial_destructor;
   typedef __false_type is_POD_type;
};




template<stemp (cype_traits<bool> {
   typedef __true_type has_trivial_default_constrstemp ( return __x.first == __y.first &&stemp (.second == __yor;
   tnd;
}


templor;
   tclass _T1or;
   typedef __nlineor;
   t char_traits<_CharT_true_typ, _T2>& __x, const pair<_T1, _Tor;
   typedef __truee_type has_trivial_destructor;
   typedef __true_type is_ < __x.firtype;
};

tempperator!=(const pair<_T1, _T2>late <classtructor;
   typedef __true_type is_operator!=(const pair<_T1, _T2>& __x, const ptructor;
   typedef __true_type is_P !(__x == __y);
}


template <class _T1, class _T2>
ior;
   typedef __structor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_ty_true_tyr<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>_true_ty) {
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
# 53 "/_true_tynclude/gcc/darwin/3.3/c++/bits/typstemp (aits.h" 3
# 90 "/us_true_ty/include/gcc/darwin/3.3/c++/bits/st_true_type has_trivial_destructor;clude/gcc/darwin/3.3/c++/bits/stl_pair._true_type has_trivial_destructor;late <class _T1, class _T2>
struct p_true_type hast;
# 113 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 3
   typedef __false_type has_trivial_default_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typedef __false_type has_trivial_assignment_operator;
   typedef __false_type has_trivial_destructor;
   typedef __false_type is_POD_type;
};




template<>es.htype_traits<bool> {
   typedef __true_type has_trivial_default_construes.hypedef __true_type has_trivial_3276py_constructor;
   typeate<> Traits = char_traits<_CharT>hort>ator;
   typedef __true_type has_trivial_destres.htypedef __tl;
};_POD_type;
};

template<> struct __type_traits<char> {
 l;
};

template<> struct _Is_iconstructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_typate<>pe;
};

template<> struct __type_traits<signed char>ate<>ef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned char> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_tate<>ructor;
   typedef __true_type is_Pes.haits.h" 3
# 90 "/us 1 "/u
   typedef __true_type has_trivial_stl_iterator_base_types.h" 1 _copy_constructor;
   typedef __true_typstl_iterator_base_types.h" 1 raits {
   typedef __true_type this_dstl_iterattemplate<> struct __type_traits<short> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned short> {
te<> struct _Is_integer<short> {
  typedef __true_type _Integral;
};

temptemplate<typenvial_copy_constructor;
   typedef __true_type has_trivialype _Integral;
};

template<> struct _Isue_type has_trivial_destructor;
   typedef __true_type is_POD_t_Integral;
};

typedef _Distan_type_traits<int> {
   typedef __true_type has_trivial_default_cDistance difference_type;

      typedef_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traiypedef __true_type _Integral;
};

template<> struct _Is_ierator::differetor;
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

t 1 "/usr/include/gcc/darwin/3.3/c++/bits/s<long long> {
   tyte<> s_type has_trivial_default_con.h" 1 3
# 68 "/usr/include/gcc/darwin/3.3/ypedef const _Tp* pointer;
      typedef const _Tp& referencesignment_operator;
   typedef __true_type has_trivial_destruinter;
      typedef const _Tp& referencee;
};

template<> struct __type_traits<long long> {
   tyinter;
      st;
# 113 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 3
   typedef __false_type has_trivial_default_constructor;
   typedef __false_type has_trivial_copy_constructor;
   typedef __false_type has_trivial_assignment_operator;
   typedef __false_type has_trivial_destructor;
   typedef __false_type is_POD_type;
};




template<in struct _Is_integer<short> {
  typedef __true_type _Integral;
};

temp> iostref __true_type has_trivial_214748364py_constructor;
   typCharT, std::nothrow_t&) throw();
ts<_InputI__x.second < __y.second);
}


template <class:sizelass _T1t_cuype has_trivial_destructor;
   typedef __true_type is_Piterator_tag)
    {

     
constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_tytyper<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>in/3. {
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
# 53 "/typeructor;
   typedef __true_type is_POD_type;
};r_ba_type has_trivial_detype
   typedef __true_type has_trivial_default_convance(_InputIter& __i, _Dist_copy_constructor;
   typedef __true_type has_trivivance(_InputIter& __i, _Distraits {
   typedef __true_type this_dummy_membervance(_Inputemplate<> struct __type_traits<short> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned short> {
r_base_funcs.h" 2 3

namespace std
{
  template<typename _InputIterator> {

     
  vial_copy_constructor;
   typedef __true_type has_trivialtype
    __distance(_InputIterator __first,ue_type has_trivial_destructor;
   typedef __true_type is_POD_titerator_tag)ce(__i, __n, _type_traits<int> {
   typedef __true_type has_trivial_default_c_n, __iterator_category(__i));
    }_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traierator>::difference_type
    __distance(_RandomAccessItename _Iterattor;
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

tIter, typename _Distance>
    inline void
    __ad {

     
   _type has_trivial_default_conDistance __n, input_w()
 "amdb{ return static_cast<unsigned int>(0); } "amdb_
#prag  set_debug_p et_daling_NaN() thro# 1 "amdb_btree.cc"
#pragma GCC set_debug_pwd "/Users/jmh/devel/libgist/src/ldenorm_min"<built-in>"
# 1 "<command line>"
# 1 "amdb_btree.cc"




ers/jmh/devel/const bool is_iec559 = false;" 1 3 4
# 66 "/usr/include/sbounded = tru 4
# 1 "/usr/include/sys/applemodulo.h" 1 3 4" 1 3 4
# 66 "/usr/includtraps.h" 1 3 4
# 67 "/usr/include/sys/tinyness_beforees.h" 3 4
# 1 "/usr/include/sfloat_rpiop_style 3 4
# 30 "/u=usr/inctoward_zero4
# 1 }
# 1 template<> "amdstruct numeric_limits<longc/type{" 1 3 4
# 66 "/usr/include/sspecializts.h" 1 3 4ers/jmh/devel/incl # 64 "/usr/include/stdio.h" 3-2147483647L - 1/Users/jmh/devel/r u_inax"<built-in>"
# 1 "<commandtypedef unses.h" 1 3 4
# 66 "/usr/io.h" igit 1 3(sizeof(incl) * 8 - ( unsig(-1) < 0))4
# 1 "/usr/include/song int64_10t;
ttypedef unsigned long long u_int64_t; * 643 / 2136;

typedef int32_t regf signed t_debuh" 1 3 4
# 67 "/usr/include/sys/typintegerypes.h" 2 3 4
# 73 "/usr/include/sysexactypes.h" 2 3 4
# 73 "/usr/incrc/lradix = 24
# 1 "/usr/incr u_iepsilo64 "/usr/include/stdio.h" 30d short u_int16_t;
typ3 4
# errorc/ansi.h" 1 3 4
# 92 "/usr/incl
# 33 "/usr/include/machmin_exponen.h" 04
# 33 "/usr/include/mach_mbstateL;
}typedmbstate_t;
# 34 "/usr/incluaxstateL;
} __mbstate_t;
# 34 "/usr/inclu/sys/types.ansi.h" " 1 3 4
# 66 "/usr/includhays/tfinityes.h" 3 4
# 1 "/usr/include/sys/apine/quiet# 1 " 3 4
# 1 "/usr/include/ppc/endian.h" ibbtree"
# 1 1 "/usr/include/machine/types.h" 1  1 3 4
30 "/uine/ 1 3 4 =" 1 3 4
absent1 "/usr/include/ppc/endian.h"  1 3 4
los 1 3h" 3 4
" 3 4
# 1 "/usr/incendian.h"<built-in>"
# 1 "<command line>"
# 1 includ "/Users/jmh/devel/r u_i1 3 4
# 831 "/usr/include/machine/endian.h" 2 3 4
# 76 "/usr/include/sys/typeibbtree"
# 1 "<built-in>"
# 1 "<command line>"
# 1  4
# 76 "/usr/include/sys/type 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr 4
# 76 "/us" 1 3 4
# 66 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 70 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/machine/types.h" 1 3 4
# 30 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/ppc/types.h" 1 3 4
# 69 "/usr/ set_debuinclude/ppc/types.h" 3 4
typedef signed char int8_t;
typedef unsigned chatypedef quad_int8_t;
typedef short int16_t;/include/ppc/ansi.t segsz_t;
typedef int int32_t;
typedef unsigned int u * 2UL +ned sh32_t;
typedef long long int64_t;
typedef typedef quad_gned long 
typedef int su_int64_t;

typedef int32_t register_t;

typedef long i
typedef int ssize_t;




typedef long time_t;
 long int uintptr_t;
# 31 "/usr/include/machine/typeh" 3 4
# 1 "/usr/include/sys/apple/types.h" 2 3 4

# 1 "/usr/include/machine/ansi.h" 1 3 4
# 33 "/usr/include/machine/ansi.h" 3 4
# 1 "/ust segsz_t;
typlude/ppc/ansi.h" 1 3 4
# 92 "/usr/include/ppc/ansi.t segsz_t;
typ4
typedef union {
        char __mbstate8[128];
        long long _mbstateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" 2 3 4
# 75 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 30 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/ppc/endian.h" 1 3 4
# 81 "/usr/include/ppc/endian.h" 3 4
extern "C" {
unsigned long htonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntohl (unsigned long);
unsigned short ntohs (unsignedt segsz_t;
typt);
}
# 31 "/usr/include/machine/endian.h" 2 3typedef quad_td "/Users/jmh/devel/libgist/s/types.h" 2 3 4


typedef unsigned char u_char;
typepthread_cond_t { long sig; char opaque[24]; } ptibbtree"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "amdb_btrond_t { long sig; char opaque[24]; } pt 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/64_t u_quad_t;
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
;
typinclude/ppc/types.h" 3 4
typedef signed char int8_t;
typedef unsigned char u_ir u_int8_t;
typedef short int16_t;
9223372036854775807Lsigned short u_int16_t;
typsr/include/sys/types.h" 3 4
typedeid *_cookie;
        _int32_t;
typedef long long int64_t;
typedef unsi int ssize_t;

 (*_write)u_int64_t;

typedef int32_t register_t;

typedef long int iwrite) (void *, const char *, int); long int uintptr_t;
# 31 "/usr/include/machine/types.h" 2 3 4
# 73 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/machine/ansi.h" 1 3 4
# 33 "/usr/include/machine/ansi.h" 3 4
# 1 "/usr/incr/include/ppc/ansi.h" 1 3 4
# 92 "/usr/include/ppc/ansi.h" 3 h" 3 4
typedef union {
        char __mbstate8[128];
        long long _mbstateL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" 2 3 4
# 75 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 30 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/ppc/endian.h" 1 3 4
# 81 "/usr/include/ppc/endian.h" 3 4
extern "C" {
unsigned long htonl (unsigned long);
unsigned short htons (unsigned short);
unsigned long ntohl (unsigned long);
unsigned short ntohs (unsigned shor short);
}
# 31 "/usr/include/machine/endian.h" 2 3 4
# long sig; char opaque[124 (const ves.h" 2 3 4


typedef unsigned char u_char;
typedef nst void *, size_t, size_t, FILE *);pedef unsigned int u_int;
typedef unsigned long u_long;nst void *, size_t, size_t, FILE *);hort;
typedef unsigned int uint;


typedef u_int64_tthread_once_t;



typedef unsigned long pthread_key_t;
# 65 "/usr/include/stdio.h" 2 3 4
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
  aque[24]; } ptuad_t off_t;
typedef int32_t pid_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typ;
typedef int32_t swblk_t;
typedef u_int32_t uid_t;
# 117 "/usr/in      int (*_read) (void *, char *, int);
        fpos_long cclock_t;




typedef long unsigned int size_t;




typedef int  int ssize_t;




typedef loef long time_t;
# 146 "/usr/include/sys/types.h" 3 4
typedef int32_t fd_ma;
}
# 298 "/usr/include/stdio.h" 3 4
extern         fd_mask fds_bits[(((1024) + (((sizeof(fd_mask) * 8)) - 1)) / ((sizeof(fd_mask) * 8)))];
} fd_set;
# 182 "/usr/include/sys/types.h" 3 4
struct _pthread_handler_rec
{
        void (*routine)(void *)id *);
        void *arg;
        struct _pthread_handler_rec *next;
}xt;
};
# 202 "/usr/include/sys/types.h" 3 4
typedef struct _opaque_pthread_t { long sig; struct _pthread_handler_rec *cleanup_stack; char opaque[596];} *pthread_t;

typedef struct _opaque_pthread_attr_t { long sig; char opaque[36]; } pthread_attr_t;

typedef struct _opaque_pthread_mutexattr_t { long sig; char opaque[8]; } pthread_mutexattr_t;

typedef struct _opaque_pthread_mutex_t { long sig; char opaque[40]; } pthread_mutex_t;

typedef struct _opaque_pthread_condattr_t { long sig; char opaque[4]; [4]; } pthread_condattr_t;

typedef struct _opaque_pthread_cond_ long sig; char opaque[124]; } pthread_r } pthread_cond_t;

typedef struct _opaque_pthread_rwlockattr_t {t __svfscanf (FILE *, const char *, __builtinad_rwlockattr_t;

typedef struct _opaque_pthread_rwlock_t { longt __svfscanf (FILE *, const char *, __builtinwlock_t;

typedef struct { long sig; char opaque[4]; } pthreathread_once_t;



typedef unsigned long pthread_key_t;
# 65 "/usr/include/stdio.h" 2 3 4
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
  .h" 1ude/ppc/types.h" 3 4
typedef signed char int8_t;
typedef unsigned cha.h" 1int8_t;
typedef short int16_t;1.17549435e-38F/Users/jmh/devel/tof (codef int int32_t;
typedef uns3.40282347e+ng atol32_t;
typedef long long int64_t;
24

typedef int32_t register_t;

typed64
# 1 "/usr/include/sys/applehine/types.h" 2 3 4
# 73 "/usr/include/sys/types.h" h" 3 4
# 1 "/usr/include/sys/appleansi.h" h" 3 4
# 1 "/usr/include/smachine/ansi.h" 3 4
# 1 "/ustof (clude/ppc/ansi.h" 1 3 4
# 92 "/usr1.19209290e-7 atol (const char *);
vo4
typedef union {
        char __mbsta.5ze_t, size_t, int (*)(const v_mbstateL;
} __(-125;

typedef int32_t registeude/machine/ansi.(-37gned);
double strtod (const/sys/types.h" 128 3 4
# 1 "/usr/include/machine/endian.h" 1383 4
# 30 "/usr/include/machine/endian.h "amdb_  = __builtin_huge_valf ()int  =blen (const char *, size1 "/usr/include/ppc/endian.h" 1 3 4
# 8;


int mblen (const nanf ("") !har_t);
int mbtowc (winclude/ppc/endian.h" 3 4
extern "C" {
unsigne.h" 1 3 4
# 8g htonl (unsigned long);
unsigned short htons (uns;


int mbl1.40129846e-45F ?    elsepre;
un :ned short);
unsigned long ntohl (unsigned long);
unsigned short ntohs (unsignedtof (ct);
}
# 31 "/usr/include/machine/ee_t mbstowcs (wchar_t *tol (const char *);
vos.h" 2 3 4


typedef unsigned char _t *, const char *, tol (const char *);
voibbtree"
# 1 "<built-in>"
# 1 "<commandr_t);
int mbtsseed48 (unsigned short[3]);
v 1 3 4
# 64 "/usr/include/stdio.h" 3t char *, int);uad_t;
typedef int64_t quad_t;
typedef;


int mbline/endian.h"&&n.h" 1 3 4
# 81long *)s (unsiggned shor drand44
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3short ntohs (unsignedde/sys/cdefs.h" 1 3h" 3 4
# 1 "/usr/include/sys/aps.h" 2 3 4


# 1 "/usr/include/machine/types.h" 1 3 4
# 30 "/usr/include/machine/typ_nearesnt cget/usr**);/include/ppc/types.h" 1 3 4
# 69 "/usr/doubleude/ppc/types.h" 3 4
typedef signed char int8_t;
typedef unsigned cha

int int8_t;
typedef short int16_t;2.2250738585072014e-308 (unsigned short[], int);def int int32_t;
typedef uns1.797693134862315*, shar *g32_t;
typedef long long int64_t;
53

typedef int32_t register_t;

typed15ze_t);
 div_t
         div (int, int);
 void
         exit (int);
void free (void *);
char *getenv (const char *);
 long
         labs (long);
 ldiv_t
         ldiv (long, long)], int)lude/ppc/ansi.h" 1 3 4
# 92 "/usrchar04460492503131e-16r *group_from_gid (unsigoid *, const void *));

int rand (void);void *realloc (void *, size_t);
void srand (un021gned);
double strtod (const char *, char **);
0long strtol (const char *, char **, int);
u0nst void *));

void *callocul (const char *, 0char **, int);
int system (const char *);


int mblen (const char *, ize_t);
size_t mbstowcs (wcha_t *, const char *, size_t);
int wctomb (char *, wchar_t);
int mbtwc (wchar_t *, const car *, size_t);
size_t wcstombs (char *, const wchar_t *, size_t);


int putenv (const char *);
int setenv (const char *, cons4.940656458412465;

c24



double drand48 (void);
double erand48 (unsigned short[3]);
long jrand48 (unsigned short[3]);
v], int)ong48 (unsigned short[7]);
long lrand48 (void);
longrand48 (void);
long], int)48 (unsigned short[3]);
unsigned short
        *eed48 (unsigned short[], int)oid srand48 (long);

void *alloca (size_t);

u_int32_, const char *)
    __attribu 1 3 4
# 64 "/usr/include/stdio.h" 3l/libgist/include/gist_ datlen);
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
int getloadavg (double [void
  __th);

long a64l (const char *);
char *l64a (long);

cha_t (*st char* __s);

  void
  _ed long, int);
int heapsort (void *, size_t, size_t_t (*_seek) (void *, fpos_t, int);
   );

char *initstate (unsigned long, char *, long);
int mergesort (void *, size_t, size_t, int (*)(const void *, const void *));

int radixsort (const unsigned char **, int, const unsigned char *, unsigned);

int sradi;

  void
  const unsigned char **, int, const unsigned char *, unshrow_invalid_argument(const choid *, const void *));

int rand (void);_t (*_seek) (void *, fpos_t, *realpath (const char *, char resolved_path[]);
char *setstate (char *);
void srandom (unsigned long);
char *user_from_uid (unsigned long, int);

long long
         strtoll(const char *, char **, int);
unsigned long long
          strtoull(const char *, chaar **, int);
long long
         strtoq (const char *, char **, int)lwc (wchar_t *, const cos_def   strtouq (const char *, char **, int);

void unsetenv (const char *);

}
# 8 "amdb_btree.cc" 2



# 1 "/Users/jmh/devel/libgist/include/gist_L



double drand48 (void);
double erand48 (unsigned short[3]);
long jrand4;


int mblshort ntohs (unsigned shorert.h" 1 3 4
# 40 "/usr/include/gcc/darwin/3.3/assert.h" 3 ar **ow_invalid_argument(const ch48 (unsigned short[3]);
unsigned short
        *"C" {
#ow_invalid_argument(const choid srand48 (long);

void *alloca (size_t);

u_int32_ymgr_get_per_thread_data(unsigned isr/include/gcc/darwin/3.3/c++/vector" 1 3
# 65 "/usr/includ_t (*_seek) (void *, fposm_stir (void);
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
}
# 46 "/usr/include/gcc/darwin/3.3/c++/istream" 2 3

namespace std
{
# 57d int key) ;
# 155 "/usr/include/gcc/darwin3
int cgetusttypec++/ _CharT, ppc-darwinTraitsc/typeclass basic_cc/darw : virtual publicinclude/os<n/bits/ch" 2 3
# 65 "c/type+/bits:nt (*)(cppc-defin/bits char_ppc-4
# 1 "//c++/cst++config.h" 2 3
::int 48 "_t
  48 "/usr/include/gcc/darwin/3.3/c++/csposng" 3
def" 1 3/usr/include/gcc/darwin/3.3/c++/csoffng" 3
def" 3

/usr/include/gcch" 2 3
fs.hit47 "/usrrwin/3.3/c++/cstncludec/darwbufase.h" 2 3
# 1 "/ _typedef in 48 "/usr/include/gccstl_algobase.h" 2 3
# 1 "/ _lgobde/gcc/darwin/3.3/c++/cstddec/darw 2 3

namespace std
{c/darw 48 "/usr/include/gcclude/gccluditerator_t;
}
# 50 "/usr/include/gc3

# 1 "/usr/include/gccnum_getase.h" 2 31 3 4
# 72 "/usrstd
numge 1 "/usr/include/gcc/dcppc-ase.h" std
t mem"/usr/inlude/rotected: **);
nt (*)(condarwyped _M_gcouint clude/gcc/dar# 95os_defines.h" 3
}
# 36 "/usr/include/gcc/darwin *meexplicitid *memnclude/gcc/da("/usr/include/gc* "/ub1 "amdb_b;


int mthis->ian.har b
# 83 "/u , const vo =cpy (void *d "/id *mem});
void *memcn/3.3/cid *mem~t, size_t);
ch1 "amdb_bt);
int strcmp (const char st chd *mem/usr/i;
unry *, consfriend
size_t strcspn# 12d *memmove (void *, const void *, size_t);
void *memnclude/gcc/dar&ar *);
op "/usr>>(char *strncat ( (*__pf)r *, size_t);
int;

ar *);
char *strncat (char *, const char *,
  usinnt strncmp (cconst ch const char *, size_t);
char *strncpy (char t);
baschar *, siz*strrchr t;

# 163har *strerror (int);
size_t strlen (const char *);
char *strncat (char *, const charnclu&consconst char *, size_t);
char *strncpy (char shorttrtok (char *, const char *);
size_t strxfrm (ch set_debuar *, const char *, size_t);



int bcmp (const void in, const char *, size_t);



int bcmp (const void *, const ze_t);
void bzero (void *, size_t);
int ffs (int);
incl const char *, size_t);



int bcmp (const void *, const t void *, inthar *, int);
void *memccpy (void *, const vot strcasecmp (, size_t);
char *rindex (const char *, int);
int strt strcasecmp (const char *, const char *);
char *strdu.h" 1trtofconst char *, size_t);
char *strncpy (char   __th, char *);
int strncasecmp (const char *, const _ALLOW_RECU, char *);
int strncasecmp (const char *, const void*trtop;
siz224har *strerror (int);
size_t strlen (const char *);
char *strncat (char *, const char * *strcat (char *, con *, v3id *, size_t);

}
# 52 "/usr/include/gcc/darwin/3.3/inlindarw (void *
size_tnst vo()tmatchid *alloca (size_const voi nsig26ed int key) ;
# 155 "/usr/include/gcc/darwing ::memmov 1 "/urcpy;
  ett *,# 280har *strerror (int);
size_t strlen (const char *);
char *strncat (char *,ing  3
# 48 "trtoc::str30/os_defines.h" 3
}
# 36 "/usr/include/gcc/darwing ::strspn;
  using ::strtok;
  using : *, c,cpy (void *, _n,1 3
# 48 " __delimet;
  18 3
namespace std
{
  using ::memcpy;
  using ::memmove;
  ;

  inline void*
  memchr(void* __p, int __c, size_t __1 "amdb_btree.cc"*strching  int  __n)*strchwiden('\n')nst c# 341p;
  using ::strxfrm;
  using ::strcspn;
  using ::strspn;
  using ::strtok;
de/gcc/darwin/3.trtosbn)
  { return memchr(cons5 ::strpbrk;

  inline char*
  strpbrk(char* __s1, cochr;

  inline char*
  strchr(cha __builtin_strpbrk(con_builtin_strchr(const_cast<conbar*>(__s1), __n); }

  usincmp;
  using ::strxfrm;
  using ::strcspn;
  using ::strspn;
  using ::strtok;e;
 r(void* __p, int __c, size_t __n)
  { return memchr(cons9, __s2); }

  using ::strrchr;

  inline char*
  strrchr(char* __s1, int __n)
  { rerstr(const_cast<const char*>(__s1),_builtin_strchr(const_castrstr(const char*>(__s1), __n); }

  usi41mp;
  using ::strxfrm;
  using ::strcspn;
  using ::strspn;
  using ::strtignore(__c, size_t __ cha, ::strcolrn memchypes. 66 "/usr::def );
siz42, __s2); }

  using ::strrchr;

  inline char*
  strrcstrcoll;
  uspeek ::str439har *strerror (int);
size_t strlen (const char *);
char *strncat (char *,readimits" 1 3
# 48 "/usr/include/gchine/5_cast<const void*>(__p), __c, __n); }

  using ::strusing ::strcpy;
 slimsomlimits" 1 3
# 48 "/usr/include/gchine/7_cast<const void*>(__p), __c, __n); }

  using ::strchar *strncat (char *,putback
  using :memset;
 49t strspn (const char *, const char *);
char *strstr (const char *, const cuning ::str51" 3
namespace std
{
  using ::memcpy;
  using ::memmovcpy;
  usync::div_t2_cast<const void*>(__p), __c, __n); }

  using ::strdef" 1 3usr/inclellg::div_tned int key) ;
# 155 "/usr/include/gcc/darwin::memchr;

  inline void*
  meseekg(def" 1 3:div_t6char *strerror (int);
size_t strlen (const char *);
char *strncat (char *,::labsdef" 3

, *strrchr::::ladirconst ch}div_t8 ::strpbrk;

  inline char*
  strpbrk(char* __s1/3.3/c++/ppc-darwin/bits/c++config.h" 2 3
# 65 "/usr/include/gcc/daase.h" 2 3
# 1 "/ng :trcsusr/include/gcc/darwin/3.3/c++/cstr" 1 3 4
# 66 "/usr/ilude/stddef.h" 3 4
typedef int ptrdiff_t;
# 49 "/usr/include/gcc/darwin/3.3/c++/cstdde::size_t;
}
# 50 "/usr/include/gcc/darwin/3.3/c++/cstrppc-darwinclude/gcc/dar::t void *, cost void *, conssr/include/gcc/darwin/3.3/c++/cstring" 3
_) *  48 "/u# 61t strspn (const char *, const char *);
char *strstr set (void *, in
  inl(g ::wcstombs;
  using ::wctombtrtois,mgr_se__noskipwchar *);
algob62t strspn (const char *, const char *);
char *strstr  const cmgr_s()using ::strcaok, int (*)private:d *, intsr/invirtu using ::r642os_defines.h" 3
}
# 36 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 2 3
# 65 "xtern "C++" {

namespace std
{
e/gcchar *);
chartern "C++" {

namespace std
{
# 52n,in/bits:memset;ing ::strtol/usr/iublic:
    bad_exception()  3
#) { }


    virtual ~bad_exception() throndler) ();


  edef vo set_debu 3
#:memseusr/intree.cc"r *,n >> re/typrpretma GCC
  voar *c}

  u_handler) ();

  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) tow();


  void terminate() __attribute__ ((__noreturn__));


  unexpected# 68t strspn (const char *, const char *);
char *strxception : public exception
  {
  public:
    bad_exception() throw() { }


    virtual ~bad_exception() throw();
  };


  typedef void (*t *, cate_handler) ();

  typedef void (*unexpected_handler ();


  terminate_handler set_terminate(terinate_handler) throw();


  v" {

nrminate() __attribute__ ((__noreturn__));


*lude/pected_handler set_unexpected(unexpected_handler) throw(tion
  {
  public:
    bad_alloc() throw() { }


    virtualbad_alloc() throw();
  };

  struct nothrow_t { };
  extern const nothrow# 70d *memmove (void *, const void *, size_t);
void /3.3/c++/ppc-darwin/bits/c++config.h" 2 3
# 65 "/usr/include/ousing e/gcc:++/bits/stl_algtombs;
  using ::wctomb,sr/includbits/stl_al;
void ase.h" 2 3
# 1 "/usr/include/gcc/darwrwin/3.3/c++/cstring" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cstring" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/cstddef" 1 3
# 47 "/usr/include/gcc/darwin/3.3/c++/cstddef" 3

# 1 "/usr/include/stddef.h" 1 3 4
# 66 "/usr/incne ldiv_t
  div(long c/darwin/3.3/c++/bits/stl_algobase.h" 2 3

# 1 "/usr/inize_t, const std::nothrow_t&)  _, const t, void* _d* __p) thset (void *, int, size;
void xceptioypedef int ptrdiff_t;
# 49 *, const char:c/darwin/3.3/c+onst cst cline void oponst c "amdb_btt char);
int strcoll (const char *{ };
inlw() w_invag ::r76id *, size_t);

}
# 52 "/usr/include/gcc/darwin/xception : public exception
  {
  public:
    bad_exception() throw() { }


    virtwsextern "C++" {

namespace std
{
# 52 );
t char #  ::strpbrk;

  inline char*
  strpbbitsgcc/darw.tcc" 1 3usined int key) ;
# 155 "/usr/include/g/gcc/darwin/3.3/c+3/bits/c++locale.h" 3

# 1 "/usr/includelocalec++/cloc4t strspn (const char *, const char  39 "/us3win/bits/c++locale.h" 3

# 1 "/usr/include/gcc/ 39 "/_facets3.3/c++/cloca/os_defines.h" 3
}
# 36 "/usr/incluep;
        char *groupi" 3

# 1 "/usr/include/locale.h" 1 3 4
#cerrnousr/inclu/os_defines.h" 3
}
# 36 "/usr/inclu char *m" 3

# 1 "/usr/includchar .hc++/c 4cstdlands_sep;
        char *mon_grouping;
    /3.3/inc    char *int_curr_symbol;
        char *currency_symbol;
/3.3/      char *mon_decimal_point;
        mat      nclu_cast<const void*>(__p), __c, __n);es;
   r *deits/c++locale.h" 3s;
        char oid *, size_t);

posn;
}; char  ::strpbrk;

  iarchi, siure/ppc_posn;
};
# 76 "/g" 3
namespace stconv *localeconv (void);
 chaextern "C" {ator de/c++/csttof (c.h" 1 t;/c++/cloc) ;
exte
int 


n# 5d *memmove (voidst char *);
}
# 50 "/usr/inclunumr *);
char FP_NAigne1ator newr/incINFINITE conc/darwin/3.3/ZERO *, c/darwin/3.3/NORMALevelc/darwin/3.3/SUBace std
{5
3/c++/iocale (int, const char *);
}
# 50 "/usr/include/gcclibgist/src/l__s;
 edefhandee"
 ( (con ;
sizeoid *, size_t);

st char *);
}
# 50 "/usr/include/gccize_t__fp/usr/ifyd(e std
{
xcharlocale&, int __prec = -1f(cale" 2    char* __old = setlocale(0();


  void
     c_algobove;
  av = static_cast<char*>(malloc(strloca (size_t_prec = -1)
 char *)((strnst cha    locale&, int _is 3 4al)
    {
      char* __old = s


     , 0);
      char* __sav = st


     char*>(malloc(strlen(__old) + 1));
    _v);
      else
        _loca (size_t


      itlocale(0, "C");

     fmt, __prec, __vdian.e if (__prec >= 0)
        __ret}
# 47intf(__out, __fmt, __prec, __v}
# 47   else
        __ret = sprintf(__out, __/darwin/3.3/c++/cctype"cale(0, __sav)}
# 47 "tlocale(0, "C");

      int __ret;





inf if (__prec >= 0)
        __retinfintf(__out, __fmt, __prec, __vinf   else
        __ret = sprintf(__out, __unetype.h" 3 4
typedcale(0, __sav)ype.htlocale(0, "C");

      int __ret;






an if (__prec >= 0)
        __ret anetyf(__out, __fmt, __prec, __v)an   else
        __ret = sprintf(__out, __fry *ranges;
} _Runecale(0, __sav);_Runtlocale(0, "C");

      int __ret;



hinebit)
    {
      char* __old = s)
       int nranges;
        _Rune)
         else
        __ret = sprintf(__out, rune)
            (rune_tloca (size_t)
       tlocale(0, "C");

# 20mp;
  using ::stst char *);
}
# 50 "/usr/include/gccvoid
  acos
    {
      char* __ rune_t sinupper[(1 <<8 )];






      try *neRange runetype_ext;
        2_RuneRangy,RuneRange maplower_ext;
   mapupper[(1 <<8 )];






       _RuneRange runetype_ext;
       _RuneRange maplower_ext;
    coshupper[(1 <<8 )];






        _tern _RuneLocale *_CurrentRunetacale;
# 69 "/usr/include/ctype
extern _RuneLocale *_CurrentRunLocale;
# 69 "/usr/include/ctypeh" 2 3 4
# 100 "/u)];






     exp _RuneRange maplower_ext;
   exp2nt isgraph (int);
int islower (im1nt isgraph (int);
int islowerlo, cont);
int isspace (int);
int i10supper (int);
int isxdigit (int)nt);
int isprint (int);
int isnt);int isgraph (intittoint (int);
intbsupper (int);
int isxdtof (c);
if  int nranges;)];






     modgrammalloc(s mapupper*iptrber (int);
int is;
ingram (int);,
int is
int isruittoint (int);
id;
int isgraphvalusortnt);
iner (int);
int isiusr/gram (int)ype.h" 3 4
extern )];






     frsr/include/ctype.h" 3 4
*ent isrune (int);
intint _g ___runetype (int);
180 "/usrurn __re3 4
i);
int ishexnumber (int);
c, unsigngram (int);
int isnumber (int)scalbnt isphonogram3 4
nern "C" {
unsigne_runetpecial (int);          (1 <<8 )) ? ___runeltype(_c) :
   [4]; }            _CurrentRuneLolcale->runetypet c, unsigned tolower (int);
iabpupper[(1 <<8 )];




e/ctypeabs  int nranges;usr/include/ctypbrtupper (int);
int isxdigit (ihypott isphonogram (int);y<8 )];






     pow       !!(_DefaultRuneLocale.runetype[_sq || _c >= (1 <<8t);
int islower rft isgraph (int);
int islower rfcupper (int);
int isxdigit (ingammaint);
int isalpha (int);
int eLocale->mapupper[_usr/include/ctypeilnt ishexnumber (int);
int is    gram (int);
int isnumber (int)floornt ishexnumber (int);
int is     gram (int);
int isnumber (int)*, cbyunsit
__isctype(int _c, unsignerwin/3.3/gram (int);
int isnumber (int)r.3/c++/cctype" 2 3
# 71 "/usr/iern gram (int);
int isnumbet c, unsilern "C" {
extern int isaln c);
extern in
extern int isalpha(int c);
 c);
exterrn int iscntrl(int c);
extern inint c);
extern c/darwin/3.3/c++/cctype" 3
extepiop"C" {
extern int isalnum(int piop
extern int isalpha(int c);
extern
extern int isspace(int c)n int isxdigit((int c);
extern int isgraph(int c);
extegit(int c);
}



namespace std
;
  using ::iscngram (int);
int isnumber (int)truncc++/cctype" 2 3
# 71 "/usr/isprin) ? ___tolower(_c) :
          motern int issDefaultRuneLocale.runmaplowe;
int ial (int);
int tneLoc+/cctype" 3
exteemainde   _CurrentR;
  using ::tolower;
  usinn/3.3/c++toupper;
}
# 48 "/usr/include/gcc/darwin/3quo       !!(_DefaultRunne int
e/gc/include/gcc/darwinquotoupper;
}
# 48 "/uss/stringfwd.h"usr/include/ctypepyhine ::isxdigit;
  using ::tolower;
  usinr;

  tetoupper;
}
# 48 "/usr/include/gcc/darwi
    /usr/i 3
# *tagtern "C" {
unsigne     i = char_traits<_Char/include/gcc/darwxtaft++/iosfwd" 2 3
# 1 "/usr/include/gcc/dar   class toupper;
}
# 48 "/usr/include/gcc/darwifdim ::isxdigit;
  using ::tolower;
  usingdimchar>;

  typedef basic_string<char> strmax ::isxdigit;
  using ::tolower;
  using ax3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/diemplate<class _CharT>
    struct char_t

# 3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/dacc/darwin/3.3/c++/bits/void
  z.h" 1 3
# 43 "/usr/i
{
  template<typenametof (cits/c# 3+/exception" 3
    rune_t maplower[(1 <<8 )];
        rune_tribufconst charlower;
  usin"/usrr/include/gcc/darwin/3.3/c
    nst char      int __ret;

machiintto return (_c < 0 using ::fpos_t;

 pioping ::clearerr;
  u/c++/csts.h" 1 _complxr *);
char void
  Realhar *, intvoid
  Imag;
}ng ::ffexcstdi61 <<8 )];
        rune_t maplower[(1 <<8 )];
       rc/libbtgamILE;;
}
#fdversion {fdlibm_iee/mac-1, 
  usinsviden;
  usixopenen;
  usiposixg ::r37nv;
  using ::setlocale;
  using ::localeconv;de/gcc  using ::fread_
  us_ ::frea/cstd1har* what() consusing ::fprintf;
  using ::fputc;
  usin}
# 47sascii (int);
int isblank (inteLocasascii (int);
int isblank (intj
int tolower (int);
int touppejt (int);
int isspace (int);
injemplunsig mapupper_ext;)];






     y
int tolower (int);
int touppeyt (int);
int isspace (int);
inyng ::setvbuf;
  using ::_f;
}

static inline ype(_c) :
            clud:fsetpos;
  using ::ftell;
  using ::fwrite;
  usingigned int kificaxtern int isspacef;
  using ::vprincabs (ng ::fgetc++/csbits/c++io.h" 2dreg;






}
# 49 "/usr/inclmits.h" 2 3 4
# 50 "st char *);
}
# 50 "/usr/incltype[d *memmove (voidposn;
};24
exter5har* what() const throw();
  };



es;
   ;
    7negative_sign;
        char int_fracgn_posn;c++/ppc-darwin/bd_handler set++config.h"p>cludmemsonst power(_Tp throw();

intate_haove;
    usin
   int3
# 97 "/x3/c+oca (size_t);

u_ine intcludcted_haove;
  .h" 1
# 35 "in/3.3/cude/pthread.h" 2 3 4

# 1 "/fusr/include/errno.h_ALLOW_RECU
# 35 "_ALLOW_RECUR/include/errno.h" 3 4
# 1 "/uslusr/includd* __perrno.h" 1 3 4
#mapu "/usr/incpthread.h"::23 "/
#pragma GCC  __thrusr/inst char usze,  2 3 4r **);
in/errno.h" 1 3 4
# 68 "mapur/include/sys/ere/errno.h" 2 3 4
# 37 "/usr/include/pthread.h" 2 3 4
# 1 "/sin/include/sched.h" 1 3 4
#  _Rusr/include/errno.h" 2   _R# 37 "/usr/include/pthread.h" 2clude/sched.h" 1 3 4
# 10 "/  _Rinclude/sched.h" 3 4
struct sget_priority_min(int);
extern int s 3 4
# 1 "/ta };


extern int sched_yie   _usr/include/errno.h" 2    _priority_min(int);
extern int sched_get_priority_max(int);
   _include/sched.h" 3 4
struct s_sec;
        long tv_nsec;
};


st# 88 "/usr/inc2lude/time.h" 3 4
struct time2spec {
  win/3.3/c/include/errno.htm_mon;c;
        long tv_nsecy)t __        long tv_nsec;
};


struct tm {
        int tm_sec;
 2       int tm_myaskrunelude/sys/errno.h" 3 4
e
        int tm_isdst;
        long tm_gmtoff;
        char *tm_z 3 4
# 1 "    len(__rn int sched_yi    spec {
        time_t t<8 ))usr/inclu# 18d *memmove (void *, const void *, s1 "/usr/ie/sched.h" 1 3 4
# 10 "me (tinclude/sched.h" 3 4
struct me (t
clock_t clock (void);
char *ctime (const sr/in*);
double difftim "/usr/include/pthread.h" 2 3 4

# cosr/include/sys/errno.h" 1 3 4
# 68 usr/include/sched.h" (void);



char *asctimetern int * uct tm *);
tih};


extern int sched_yi
exteime_t, time_t);
struct exteg tm_gmtoff;
        char *tm_zone;
};
# 115 "/usr/includeme_t  tm *);
size_t strftime (chare_t *, struct tm *);
char *strptime 3 4
# 1 "exp};


extern int sched_yiexp *localtime_r (const tiime_g tm_gmtoff;
        char *tm_zone;
};
# 115 "/usr/includeime_include/sched.h" 3 4
struct const);



int nanosleep (const str 3 4
# 1 "d lome_t time (time_t *)e int;
        int tm_yday;" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 e intr *tzname[];


extern "C" {
xtern "C" {
extern int * nistd.h" 1     e_t *);
double diffti      *localtime_r (const tier[_c]gmtime (con25pc-darwin/bits/gthr-default.h" 3
# 1 "/usr/i# 73 "/usr/include/unists (coinclude/sched.h" 3 4
struct t, gidad.h" 2 3 4
# 1 "/usr/include/unistd.h" 1 mod_exit (int);
int accesmodtd.h" 3 4
ay;
      y(int);
size_t ;
inusr/st cyunetype[se.h" 2 3
# 1 "/usr/include/gcc/darw);
int chown (const char *, uid_txeclr *tzname[];


har *tzname[];

yextern "C" {
ch..);
g tm_gmtoff;
        chaong tm_gmtoff;
        cynclude/unistd.h" 1 nt __exit (int);
int accesnt _l (const chaint *, exp(int);
size_t .h" 3t execlepathsing ::9sands_sep;
        char *mon_groupin;
int chown (const char *, uid_td_t fint execv (const 
long fpathonst *);
int exd_t f (const char *, char * conetcwd (cha{
 void
    d lone_t *);
double difftid lonfork (void);
log fpathconf (int, id longhar *getcwd (char 31 size_t);
gid_t getegid (void);
uid_t geteuid (void);
gid_t getgid id_t g;
int getgroups (int gid_t []);
char *getid_t g(void);
pid_t getpgrp (void);
pid_t getpid (void)og};


extern int schedsidetd.h" 3 4
# 1 "/usr/inc charst);



int nanosleep (const struct timespec *, struct time);
pinclude/sched.h" 3 4
struct );
pid_t setsid (void);
int setuid r (const char1 3 4__error (void);

}
# t, pi *localtime_r (const ti);
intid_t setsid (void);
int setuid (uid_t);
unsigned int sleep (u10nsigned int);
long sysconf (int)size_t write (int, const void *, s 3 4
# 1 ";
ine_t *);
double diffti;
int (const char *,  *, int " 3 4
struct  isspt execlet char *, cohar *, const char *, ...);
int execlp (const char *, const char *, .;
intint execv (const char *, chaconst chae/ptalgoblude/sys/tmprtual lude/sys/re 1 3async__t read (int, void *, size_& longr *, coconst chrcmp t putchar (int)nclude/pthar *, int)lude/unisresrtuat getp3 4
# 34 "/usr/include(__old) + 1)_Tpalgob_3 4
_help# 1 "/use (void);
gcc/dar *);
chalude/unisnt64_/darwin/3?
int(1)/ead.h" 3 4
# 1 nst -e/gcc/darwiow() {e (int, off_t);
itok (cconst c 3 4
# 1 "powd_t);
char *ttyname (intpoweval;

int acct (r * const *);
int ehost (const char *, char * const *, char * const *);
int execclude/sched.h" 1 3 4
# 10 "hostint execv (const char *, char * const *);
int e int);
mode_t getmode (const void *, mode_t);
 int
         gd_impl.h" 1 3 4
# hostint pause (void);
itime_t *, char  (int, int, mon (voinclude/errno.h" 1 3 4
hostid (void);
ar *fflagst
int iruserok (unsigned long,nlude/sys/errno.h" 1 3 4
# 68 tpass (const char *);issetugid (void);
char *mkdtemp (char *);
int mkn 4
# 1 "]; };
*);
double difftild(void);
extee/pthread.h" 2 3 4

# e_t minclude/sys/errno.h" 1 3 4
# 68 # 38 "/usr/include/p nice (int);
ssize_t preatern "C" {
 void
    Locad_t);
char *ttyname (intLocalusr/include/errno.h" 2Localg tm_gmtoff;
        char *tm_zone;
};
# 115 "/usr/includeLocalinclude/sched.h" 3 4
struct lude/sys/signal.h" 3 4
# 1 "/usr/inc*mktemp (chqroid *,include/sys/signt _cid *);
int nice (int);
ssize_t prqrtd (int, void *, size_t, off_t);



t _c 2 3 4
# 91 "/usr/include/unistd.h" 3  4
ttern "C" {
 void
    include/time.h" 3 4
struct imespec {
        time_t t_sec;
        long tv_nsec;
};


struct tm {
        int tm_se;
        int tm_min;
        in tm_hour;
        int tm_mday;
        int tmh" 2
        REGS_SAVED_ALL
} r.h" 1 3 4
# 72 "/usr/incusr/ilude/ppc/signal.h" 3 4
struct sigcontext {
    int sc_onstack 27 "/usr/include/machine/signh" 2 3 4
# 73 "/usr/include/sys/sign() t5id *, size_t);

}
# 52 "/usr/includ_t geteuiits/c++locale.h" 3

# 1 "/usr/include/gcc/_t ge3.3/c++/clocad *memmove (void *, const void *, s {
        int s/include/pthread.h char * const *);
int fchdir int fchownd.h" 3 4
# 1 "/const (char* __out, clagstostr (u_lo     vh" 3t fs% 2int _x : 1);
size_twhilettriute_= 1etdtablesi *);
char hownansi/usr *, xhar *, int  if int p% 2etdtablesi08 "/ualue;
yude/sys/signal.hint (*)(clude/unisspn (co} {

    time_t *);
struct tm *localtime (const ti;
    char* what() const throw();
  };



_cs_precedes;
        char p_sep_by_space;
        char n_cs_precedppc-inf *mon_thoump;
  using ::strxfrm;
  using ::sta_tramp)(v3lude/gcc/d++arwinc++/ppc-da__cxxabiv1     ;

  ty_/usr/ 48 "/usro-darlconv;
  using ::seo_t *, void *);
        sigset_nclude/pthread.h" d* __p/usr/in {
      char *id* operatot (con/3.3/c+~n {
     t *,usr/tion() tt (con {
     &tual ~bad=(/usr/i




strucist (co4
typedef ck {
        char *d (*s*, size_t*);
s= char_trai{
  mt ntohint ss_flags;
}set (voisp;
        int sedef stru)() {uct int /darwiusr/include/sys;
};

typedef* struc::strncpy;
 nclude/unisuct st char *);


 4


#   int ss_size;
   __arg::strncid* __p) ;


  sigaltsttack {
        cha/sys/signal.h" # 10ed int key) ;
# 155 "/usr/include/g     sigset_
struct sigstack !
        char *ss_sp;
        i int sv_mask;
!igstack {
 sys/si  int sv/gcc/darwin/3n/3.3/c+usr/incis_po(__no_p
       );
sizeern const char *cofunction_signame[32];tor deleteern const char do_catch  int ss_size;
  strth# 48 ",ing ::*int);
iobjc/darwin/3 sigaction *, struct set_debu__outerignal.h" 3 rn "C" {
int raise (inupa GC  int sflags;
};
+/newaction {
      int)argetst struct sigaction *, struct gaction (iobj_ charame[32]char **);
 sa_flagsbadma GCator deletexcepsys_3 "/usr/include  bad_;
int "<built-inits/stl/signal.h" 3 sk (int, const sig(const si_t *, int);
a_tradsigpending (sigset_t *);
int sigprocmask (nt kill const sigset_t *, sigset_t *);
innt kilgsuspend (const sal {

 4;
        int si_errno;
        int si_crecedes;
        char p_sint si_pid;
        unsigned int si_uFhar chdir  39 "/uct sigvec  (inmbstr(cusr/i 39 "/_sp;othint sigad  union sigvalImpl *, tmp = newr/incl(*_M_impl, r *, char e/uni->_M_replac  char (st char.int profi& *, st::idr *, consree.cc" 39 "/ct (const chaed_handler setppc-darwin/bits/c++config.h" 2 3
/c++config.hAlloc    badooll (cooid psig const c()signed ine void ingase.h" 2 3
# 1 ",har *re_rk(cocc/darwin/3int reboot (int(const char *);
int readlink (const char *, char2        int se/gcc/darwin/3.std (inlde/ppmp (const v const 48 "/usr/inclset (sigst char *);:mems const = us  char <nt);
int selec>(**strsize_t, off_t);
unex const. ::farwin/31.data(void)seteuid ( +id_t);length()et_t *);
int sigfillset (sigset *, is2teuid (uid_t
int setetgrou2s (int, cnt64_tst (const cint, struct sigvec *, struct slset (s*, st  virt *, fd_sesigned int, constloterminat_invalidize_.3/c+r/in void *,  (intdt *, constoid psigchar * *, char *r/incloc (int, c int,char *de/gcc/d3 4
!r *, < uid_t);
int setrgid (gid_id *,&, chahar *[__i])etdtablesint);
ow_sk (int, cize_t, off_t);
sershell (vo char *);
voi> str strtofflagsetkey (const char *);
int setlogin (const(const chine/e (const char *);
int setpbuilt-in>"
# pid_t pid, pid_t pgrp);
int setregid (gid_t, gid_t);
int setreuid (uid_t, uid_t);
int setrgid (gid_t);
int() __attrib(uid_t);
void setusershell (void);
int strtofflagsst (constnt, const char *, const char *, const chInIhr (
      **, c*, sih" 3 4
extern "C" **, ch:procma_M_extract_.h" 1(attrlisnistegetattrlisid);ndort;
  usindlero*, int);
int reboot (int;
  usingcludatist (errt __civoid *xtrc);
int ruserok (const char * 3
# 4machi char *, co); }

  inline ldivigned int, c uid_tr/incio.ts" oxit;
nst char*,uit memcmp (con:mems
# 42et *, fd_sett memcmp (cons/pthsetplong);
int getnumpst striesattr (inistd *, fd_setsigned long*,unslong*,unsighar *);
s/sys/sign3
# 42 "plu_t, uint,vo.1), __n+' long);
int getdong,unsigneminlong,void*);

int fs-tl (const oid);
po_t, mbstate_t,unsigned loint,*,unsi_t);
int setct (machine/limitqunexroupd lo) ||ckuseraccess (.h" 1 3 4
# ng,vos (char **, );
intbegchar_tend;
} siginfo_t;
# 208 "/ustrc +g,void*);
narlt-i 3 4
,unsh" 3 int reboot++sr/int.h" 3 4
typ




# (edefbegnt.h" 3 4
t char *);
sgned long,unsigne 3 4ng,void*);

int f_S_atomk) *[_Mt32_tvoid);

();


  _f 4
# 32_t;
th" 3 4
# 1 "/      int/mach_types.h" 1 3 4
#  3 4)nclude/gcc/darwin/3.3/stdint.h" 1 3 4
# 34;
typedef u_int16_t uintt8_teast8_t;
type 1 3 4
# 67 nt16al.h" 3 4
uneast8_t;
t3.3/stdint.h" 1 3 4
# 34 "/usr/int uint64_t;



typet.h" 3 4
typedef u_int8_t uin16_t;
typedef u_d, pid_t leusr/_M_E -pede32_t;ock_/pthread.h" 2 3 4

wuint6[6_t;
typedef iypedef u_int64_t uint64_t, uint_least6etgrolsingnt64_t idef int8_t int_least8_deint,h" 3 4
# 1 "/t int_least8_scpgrph" 3 4
# 1 "/def u_int32_t uintint_faned .decimalonst s void (climitsze, f uint32groupinusr/inclu6_t intg long it;
typedwin/3.3/t;
typedg *);
int t int_lcheckuintmax_t;
# 6t;
typed.st ch


}
# 40 "/usrsepr/include/pthreadgned long,unsigneseistd/3.3/thousands_inf
typedef lo      int/gcc/darwin/3.3/stdint.h.h" 3 4
typinclude/mach/ho *, fo.h" /mach_types.hfind(nt64_t i, 10int_d*,void*,uns.h" 3 4
unp);
i!t16_t;
typedef int32_t ,unsigned()
# 1 "/usr/in/usr/include/ma
typedef u_int8_t uint8edef uint64_t uint_least64__p intt64_t itypedef int8_
typedef" 1 3 41 3 4
# 77 "/usr/iedef uint8_t uint_least8_tst16_t;
tyk_t;
lse 3 4
un/mach_types.h" 1 3 4
# set [])set_t;






type;
intpes.h" 2 3 4

#/inclu32_t uint 1 "/usr/include/ffset_t;






3 4
un" 1 3 4_sigaction_u {ginfo_t;
# 208 "least8_t;
typedeintmax_t;+dusershell (vo,unslude/de/machedef unsigned in(long); 1 3 4
# 62 "/usr/t;
        ilude/mach/ppc/vm_types.h" 3 4
3 4
typedef int int inteffset_t;






ty.h" 2 3 4
# 64 "/usr/ierr |=size_t,unsifailbint cgetcl     integerbreairtual         integer_t inactivetypedef int integer_t;





typedef natural_t def e_t;




typedef unsigned int spacce_t;
# 28 "/usr/inclnclude/mach/vmlude/mah/machine/vm_typesger_t lookups;
 _statistics.h" 2 3 4

struct vm_statistics {
   pes.h" 1 3 4
# 77 "/usr/include/m'.';
# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
};

typedeint_fa6_t uint_least3 4
typedef int integer_tt;





typedef natural_t 64_t intM_e]h/machine/vm_typesap_ssr/include/mach/mach_types.h_count;
};Egs (char **,





typedef 




typeint_;
intmach/machine/vm_tde/mach/ppc/vm_types.h" 1 3 4
# 77 "/usr/include/maclude/gcc/darwin/3.3/stdint.h" 3 4
typ  integer_t active_coufaults;
        intege/mach_types.h" 1 3 4
# 64 "/ffset_t;






typesr/include/mach/mach_types.h" 3 4
# 1 "/usr/in_types.h" 2 3 4
# 64 "/usrpes.h" 1 3 4
# 77 "/usrmachine.h" 3 4
# 1 "/usr/include/mach/boolean.h" 1 3 4
#   integer_t active_count;
        integer_t inactive_cnt64_t uint_fastics {
        integer_t residentfaults;
      t reactivationsextern .h" 3 4
untural_t vm_size_t;ger_t lookups;
        integer_t sr/include/ma setr



typedef unsigned int 

typedef struct vm_statistics *vm_statistics_t;
typedef strr_t majverifye/mach/vm( "/usr/incint_nclude/mach/vm integer_t hits   integer_t zero_fill_count;
       char *);
34 "/usr/i3/stdi_t);
int setisticssize_in/3.3/stdint   integer_t zero_feofcount;
    lude/unist/usr/inct *, char * const *);
intt getsubopt (char **, char * const *, char **);


int getattrlist (const char*,void3 4
*,size_t,unsigned long);
int setattrlist (const char*,void*,void*ize_t,unsigned long);
int exchangedata (stemplude/aseconst char*,const char*,unsigned long);
int checkuseraccess (const char*,uid_t,gid_t*,int,int,unsigned long);
int getdirentriesattr (int,void*,void*,size_t,unsigned long*,unsigned long*,unsigned long*,unsigned long);
int searchfs (const char*,void*,void*,unsr_t zero_fimtflagt sime_vfieltypeint,uger_t() &

typedef iost_info_machine_info_dast_info_t;ger_t zero_foctdef integer_type = signed lointeger_t;
typedef char kernel_verhee/sig(512)];


typed1ize_t);
 ount;
       er_t host_id_t)}
# 40 "/usr/include/pthread.h" 2 3 4




# 1 "/usr/incluigned long,unsigned long,void*);

int fsctl (const char *,unsigned long,void*,unsigned long);



r/include/mach/mach_types.h" 1 3 4
# 64 "/usr/include/mach/mach_types.h" 3 4
# 1 "/usr/include/gcc/darwin/3.3/stdint.h" 1 3 4
# 34 "/usr/include/gcc/darwin/3.3/stdint.h" 3 4
typedef u_int8_t uint8_t;
typedef u_int16_t uint16_t;
typedef u_int32_t uint32_t;
typedef u_int64_t uint64_t;



typedef int8_include/mach/host_sr/incid*);

int fsxtl (const char *,unsigned loXruct kernel_resourX



}
# 40 boot_infohar 10;
} siginfo_t;
# 208 "t int_least8_t;
typedef int16_t i_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_eger_t wire_count;
 de/mach/vm_statistics.h" 3 4
struct pmapf uint16_t uint_least3 4
typedef int pedef uint32_t uint_least3resource_sizes_data_t;int64_t uint_least64_t;



typedef int8_/ppc/boolean.h" 1 3 4
# 129;
        def char ze_t port;
4
# 1 "/usr/include/mach/ppccount;
        integer_t wiredpedef integlean.h" 1 3 4
# 27 "/usr/include/mach/machiX integer_t hits;
};usr/include/gcc/darwin/3.3/stdint     integer_t wire_count;
      "/usr/include/mach/ppc/boolean.h" 3 4
typedef int boolean_t;/ppc/boolean.h" 1 3 4
# 129 "/u  integer_t active_count;
        inte integer_t host_flavor_t;;
        integer_t inactive_cr_t;







struc_sizes_data_t;

typedef char kns;
        integer_t pageins;
   16_t;
tyernel_boot_infovm_si6;
} siginfo_t;
# 208 "3 4
# 1 "/usr/include/mach/mauct kernel_resource_sizes kernel_resource_sizes_data_t;ority;
        integer_t system_priority;
        integer_t server_de/mach/vm_statistics.h" 3 4
str_t depress_priority;
        int       integer_t minimum_priority;
        integer_ximum_priority;
};

typedef struct .h" 2 3 4
# 64 "/usr/i/include/mach/ppc/boolean.h" 3 4
typedef int boolean_t;/boolean.h" 1 3 4
# 129 "/usrger_t active_count;
        integer_t inactiveo_data_t;
tyoid *memcp_fast16_t;
t thread;
        vm_sio *host_loa6_t;
typedearralavor_t;







struct t;
typepedef,void*,unsitypedef int64_t intude/mat64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedng long intmax_t;
typedef unsigned long long uintmax_t;
# 65 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/host_info.h" 1 3 4
# 62 "/usr/include/mach/host_info.h" 3 4
# 1 "/usr/includ/mach/vm_statistics.h" 1 3 4
# 63 "/usrinclude/mach/vm_statistics.h" 3 4
# 1 "/usr/include/mach/machin6_t uint_ypes.h" 1 3 4
# 27 "/usr/include/mach/machine/vm_types.h" 3 4
# 1 "/usr/include/mach/ppc/vm_ty/include/mach/ppc/vm_types.h" 3 4
typedef unsigned int nal_t;
# 86 "/usr/inct natural_t;
# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_odef natural_t vm_siz unsigned int space_t;
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
        i/usr/include/mach/machine.h" 2 3 4
# 71 "/usr/include/mach/machine.h" 3 4
struct machine_info {
        integeeger_t minor_version;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size_t memory_size;
};

typedef struct machine_info *machine_info_t;
typedef struct machine_info machine_info_data_t;

typedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
# 64 "rn char *suboptarg;
int getsubopt (char **, char * const *, char **);


int getattrlist (constdo3 4
( 1 "3
# 42 "nsignset_t pointeint setattrlist (const char*,voiize_t,unsigned long);
int r *strtov);
int ruserokt);
int setruid ypedef integer_t host_ioolalphane_info {
    mach/port.hng long u "/u;
        intid);
ach_po[3];
};

typeta_tinclude/mach/timeunsigneoffset (cong);
int pedef sttime_vatype;
};
uct sigaction, int _u
  using ::ost_converthar v (intrc.void  (uid_ul" 2 3 4


S_c*,unaleypedef unsi        integer(   integer_t host_ill_couname_t ul <[7];
} siginf;
typevt;


t_offset_t;
tyount;
        intuct machine_info *machine_info_t;
typedef struount;
       /mach/port.har*,unsigned long);
int checkuseraccess (const chde/stddef.h" 3 4
type
int readl9 "/usre"
#, const voi_t, gid_t);
d_t*,int,int,unsigned long);
id long*,unsigned long*,unsigned long);
int searchfs (const char*,void*,vinclude/mach/vm_3 4
typedef i4
# 1uyped" 3 4
ru-darw "/usr/include/mach/lude/mach/memoryh" 3 ect_typeh" 3  3 4
typedef int *memorystatistics.h"s.h"_t, uis.h"ong memot_flavor_t;
typedef int memory_h" 3 _t, uih" 3 ta_t[(1024)];
# 182 "/usr/array_t;
s.h" t_info_datude/maigned4
struct old_memory_objectemory__object_typ        memo;
# 169 "/uf    array_t;
_str0;ude/gcc/darwin/;ts_t;getdtablesir/include/mach/memord.h" 2 3 4




# 1 "/u++tem_priority;
  t int_ltestflue;
  <object_ty_t * memory_object_copy_strateg  lo/mach_types.h" 1 3 4
# memory[__n]) :;
        vm_size_        booleantrcmay_cache;s.h"    memory_object_copy_strategy_t copy_strategy;
};

typedobjecuct old_memory_object_behave_i setruidlean_tsr/inc_mem integer_t hits;
};_t wire_count;
        integer_t zero_fill_count;
        integer_t reactivations;
        integer_t pat integer_t;

ean_tchinen_t;

t
     _object_attr_info *old_memory_object_atttyperee_count;
        inttr_info old_memory_object_attr_info_data_t;







sttuct memory_obs.h" erf_info {
        vm_size_t cluster_size;
 emory_object_integer_t reactivations;
        integer_t pageins;
     ;
     ta_t;

typedef integeteger_t cpu_type_t;
typedef integer_tport_name_ cpu_subtype_t;
# 64 "/usr/include/mach/host_info.h" 2 3 4

# 1 "/usr/include/mach/time_value.h" 1 3 4
# 62 "/usr/i vm_offset_t pointer_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t vm_object_offset_t;t void *ef mach_port_t t_t upl_t;
typedef mach_porvm_named_entry_t;
 "/usr/include/mach/memory_object_types.h" 2 3 4






typedef unsi_t;
typedef unsigned long long memory_ovect_size_t;






typedef mach_port_t cpu_subtype_t;
# 64 gy;
        boolean_t temporary;
        boolean_t invalidate;
        boolean_t silent_overwrite;
        boolean_t advisory_pageout;
};


typedef struct memory_object_behave_info *memor*, const void *, s_behave_info_t;
typedef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_perf_info *mong memory_object_offset_tpedef unsigned long long memory_object_size_t;






typedef mach_port_tory_object_t;
typedef mach_port_ 1 "/usr/includery_objhar *tmpnam (char *);
inar *,>::ar* _t;
# 117 "/utype
#pragma GCC set_debunfo_t;( strf_info *m







struct  integer_t zero_fill_count;
    _object_perf_info_data_t;

typedef struct memory_object_attr_info *memory_object_attr_info_t;
typedef struct memory_object_attr_info memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memory_object_types.h" 3 4
ruct til_page_info {
        vm_offset_t phys_addr;
        unsigned int
                        pageout:1,
                        absent:1,
                        dirty:1,
                        precious:1,
                        device:1,
                        :0;
};

typedef struct upl_page_info upl_page_ig_pw
typedef upl_page_info_t *upl_page_info_arrag_pwdpedef upl_page_info_array_t upl_page_list_ptr_t;
# 70 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exception_types.h" 1 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exception.h" 1 3 4
# 27 "/usr/include/mach/machine/exceptiy_object_behave_info_t;
typedef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_perf_info *memory_object_perf_info_t;
typedef struct memory_object_perf_info memory_object_perf_info_dategy;
        boolean_t temporary;
        boolean_t invalidate;
        boolean_t silent_overwrite;
        boolean_t advisory_pageout;
};


typedef struct memory_object_behave_info *memory_obry_object_behave_info_t;
typedef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_perf_info *memory_object_perf_info_t;
typedef struct memory_object_perf_info memory_object_perf_info_data_t;

typedef struct memory_object_attr_info *memory_object_attr_info_t;
typedef struct memory_object_attr_info memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memory_object_types.h" 3 4
 r18;
        unsigned int r19;
        unsigned int r20;
        unsigned int r21;
        unsigned int r22;
        unsigned int r23;
        unsigned int r24;
        unsigned int r25;
        unsigned int r26;
        unsigned int r27ta_t;

typedef struct memory_object_attr_info *memory_object_attr_info_t;
typedef struct memory_object_attr_info memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memory_object_type (int, ch_behave_info_t;
typedef struct memory_objelong lodranrve(32f_info *mem/usr/include/mach*,void*ry_object_types.h" 2 3 4






tf_info *memory_object_perf_info_t;
typedef struct memory_object *);
int swapon _perf_info_data_t;

typedef struct memory_object_attr_info *memory_object_attr_info_t;
typedef struct memory_object_attr_info memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memory_object_type *strtok_rsave_pad6[7];
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
# 28 "/u
char *strtok_rsave_pad6[7];
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
# 28 "/u(const voef mach_port_t vm_map_c++/cstritypedef integer_t nteger_tpn (constteger_t *hfmmory_o"/usr/incl*exception_flavor_arramask = ~har *, in::show/inc|ger_t host_info_data   memory_object_copy_strategylude/mach/mauppercloadlude/mach/ma(__nonaef upl_pag;
typedef m_arrayhine._port_a| y_t;
# 71 "hex1 3 4
# 65 "//usrme_vansigned loef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_perf_i;
size_t stcessor_info.hnsigned lo,
                        dirty:1,
                        precious:1,
                        device:1,
                        :f upl_page_info_ ((__noreturn__))(cons/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/ppc/thread_status.h" 1 3 ypedef struct ppc_vector_state {
       Out*, char * (con, char **pu
extern "C" reserve (const chpad(ring" 1__fillt __c, size_t _w setattrlist (const char*,voin "C++" {
new,t char * "C++" {
csstruct tilenf mach_port_t vinfo *mempadase.h" 2 gned long);
int chec>::_S 1;
  s.h" 2       d int r     nst gid_t *);
void sethostid (lon_count;
        inte    ut uins.h"f_info *memt;
typsershell (voude/macwoid);

exte++/iosfwd" 3


# 1 "/usr/ichdir (int);
  using ude/gcco_3/stdd6 : 1;
  out reserveinfo.h"izee_data_ef s, int);
int reboot (int);
int d6 : 1;
  litort;
  usingon_flavor_arer_tff_t);
int ttyong memory_object_fo_t *upl_page_info_arraond_t *excde/mach/mach_tynusr/ih" 3 4
# 1 "/;
    vt64_t
} siginfo_t;
# 208 "/umc4se-ect_offset_t;
typed : 226_t uint_least16_t;
tye(0, __sav }bits;
}mmcypedef       u_object_  unst : 5;
      int16_t data_t;

typedef struct memor pmc2select : 6;
        }bits;
}mmcr0_t;

typedef union {
        uong memory_objec int word;
        struct {
                unsigned int pmc3select : 5;
            unsigned int threshmult : 1;
      stru     unsigned rwin/3.7;
                unsigned int pmc2select : 6;
        }bits;
}mmcr0_t;

typedef union {
        unsignnsigned int word;
        struct {
                unsigned int pmc3select : 5;
                unsigned inty_object_c4select : 5;
                     unsigned int reserved : 22;
        }bits;
}mmcr1_t;

typedef union {
         unsignned int word;
        struct {
                unsigned int threshmult : 1;
                 unsigned int reserved : 31;
        }bits;
}mmcr2_t;

typedef union {
        unsigned int word;
        struct {
                un   unsigned int ov : 1;
                unsigned int cv : 31;
        }bits;
}pmcn_t;





struct processor_pm_regs {
      union {
        mmcr0_t mmcr0;
        mmcr1_t mmcr1;
     /c++config.hVpe.h_t;

type;
        }bits;
}mmcr0_t;

typedef union {
        uor_infonsigned int ov : 1;
    {
                unsigned int pmc3select : 5;
"/usr/incle     mat vm_map_/usr/includ__ssor_inf **)t : 5;
t;
typedef massor_infouct mevlong);
int get
typedef integer_t *host_info_t;




typedef integer_info_data_t[(1024d6 : 1;
  bu_t mayoutetgroud *, memory_objessor_flavor_har ;





struct prtype;
};

typen (const expecef stypedef char kernel_versior0_t mmce_info {
        integed63 "user_priority;
        int 1 "uf--t, uidit[
}mmc& 0x7nst chh" 3# 71 "_S_int64_stem_priority;
  }mmcad[7;

char *zes_t;



struct h      intvcharar *, cons"/usr/inclusor_info      boolean

typedef struct c_info processor_basic_info_datatypedef struct host__subtype_t cpu_subtype;
        booleanhecharning;
        int slot_num;
essor_info_da_info.h" 1fo_data_t[(1024)];



_info.h" mach_port_t vm_nam.h" _offsemory_o_info.h" nst gid_t *);
void sethostid (l  loinfo processouint64_t3 4
snfo processor_basimory_object_        boolean_t is_master;
};

typedef struct processorfnst chor_info.h" c_info_data_t;
typedef stst void *essor_basic_info *processor_basic_info_t;



struct processor_cpu_load_infde/mach/ppc/vm_tyo {
        unsigned long cpu_tixetgro_info.h" ]lean_t tempor_info {
        unsigned long cpu_ticks[4];
};

typed_info_data_t;
typedef stru        int slot_num;
        boolean_t is_master;
};

typedef struct proce%sizeasic_info processor_basic_info_data_t;
typede/basic_t processor_basic_info *processor_basic_info_t;



struct def integsor_set_load_info {
        int task_coung,votypedef int8_integer_t;


typedef integer_t *pmach/machine/vm_to {
        unsigned long cpu_tid lo;
};

typedef strucvm_namr" 3 4
t       .h" or_t memory_objr *, char *r *, chant dmr : 1;
                unsigned int reserved3 : 1;
                unsigned int reserved4 : t;
tyh/timned long lonhine   vm_size_        sep setattrlist (const char*,void*,voi unsigned int rd6 : 1;
                unsigned int throid *memcpy (void *, nfo.
# 62 "/usr/includ
typedef integer_t *host_info_t;


typedef ingned int reserved8 : 1;
                unsigneger_t host_info_data_t[(1024)];
49 "/usr/include/mach/vm_tt *processor_set;
t>7];
} siginf)];


typedef char kernel_version_t[(512)]o *old_memory_obt max_prcluster_size;
 struew

# 1 cessor_count;
typedef inernel_boot_info_t[(4096)];







typedef integmit *policy_timeshare_li.h" 3 4
#t;
      uct policy_timeshare_in  *e/macwnt_f)
typeicy_mit ptimeshare_info *polid6 : 1;
  g, int)hown _cpu_adde/mach/vmare_limitt maxl_t vm_igned int reserved8 : 1;
     "/usr/inclng memor;
# 142 "/usr/include/mach/policy.h" 3 4
struchare_okups;
        t policy_rr_base {
        inteimeshe_info_da_limit    u                ypes.h" new_info_data_t;

typedef struct memory_object_att reserved3 : const char *, constr_info.h" 2  y;
       "/usr/          unsigned int reserved4st chdef unsi/time reserv, int etattrlist (conrity;
};
s        memory_object_copy_
typedef in::strncpy;
  usean_t tempity;
};
snsignet_basic_offstypedef intar*,uid_t,gid_t*,int,int,unsigned long);
ie_base_t;_subtype_t cpu, ...);
i<nt memcmp (consong*,uns9 : 1;
licy_timeshare_base policynt getdirentriesattr (intlong);
int sedata_t;
typedef struct 3 "/usr/includt keu_int64_t uint64mult :licy.h" 3 4imit_t;
typedef son {
  re_limit_data_tean_t tempar *, it;
typ4 *ory_oof(y;
    char *, int)6 : 1;
       unsigned int_t max_ unsy_rr_basa *reatypedef _t maxcur_priority;
        boolean_t depressed;
           boolean_tconst   ucc/darity;
};
struct

typedef ppriority;
};ned int thre&    [0]ypes.t uint_ion {
      "/usr/inclchar *, int)iority     inte poli.h" 

typr_limit *policy_;
    re_base_dat/mach/memory_object_types.h" 3 4
typedef int memory_object_return_t;
# 169 "ned long long uintmax_t;
# 65 "/usr/include/mach/e_base_tokups;
        integer_t hispace_t;
# 28 "/f strity;
};
struct policy_fifo_info {
        integer_t max_priority;
        integer_t base_priority;
        boolean     enlongypedef strucmeshare_base {
  t base_priori 3 4
# 1 "/usr/inclypes.h"   memory_object_copy_straf str   unsinteger_t max_pr struct policy_fire_base_data_riority;
};
_t max_priorruct procesunsigned int rt;


typwidt, climit policy_fifw > unsigned intusing ::stong*,sed;icy_timeshare_base policy_tcs3policy_fifo_info_data_t;
# 208 "/usr/include/mach/policy.h" 3 4
struct policy_bases {
        policy_timeshare_base_daw;
        policy_rrved7 :            u.h" 2 cs3{
        policy_timeshare_limit_data_truct processotypedef in_data_t fif setifo_limit_tuct ppc_ewrrwinconst c      policy_times
typedef integer_t *policy_limit_t;
# 108 "/usr/include/mach/policy.h" 3 4
struct policy_timeshare_base *,void      integer_t base_priority;
};
struct{
              _t;
# 142 "/usr/includ integer_t max_priority;
};
struct policy_timeshare_info;
typedef struct .h" 3 4
#vm_namdecrity;
};
s  loes.h" c_info 

typedef pt syshare_info policy_timeso_data_t;
# 142 "/usr/include/mach/ppolicy.h" 3 4
struct policy_rr_base {
        innteger_t base_priority;
        integer_t quantum;
};
struct policy_l_t task__limit       " 2 3 4





     ewrity;
};
2struct policy_# 27 "/ust;

typedef union {
  gned long);
int che (inpy"/us {
  p    pol*policow_fault int word;
   er_t r/inc   integer_t s
};

typedef strucf port_t m      
  using
# 8using ::fopen;
  urr_symbol;
        char *currency_symbol;
  info {
        integer_t max_priority;
        integer_t base_priority;
        integer_t quantum;
        boolean_t depressed;
        integer_*,void*ress_priority;
};

typedef struct policy_rr/signa_pes. fifo;
};

struct policy_t;
typedef struct policy_rr_info {
     
        ut, conxor_basistd. 4
# 69 "/usr/y;
     ::r_t;

typ+are_      inte   integer_t prarwin/3io.sk_pifreafo;
};

struct polsk_poy_infos {
        policy_tim 3 4
# 1 "are_info_datatask_poliypes.h" 1 3 4
# 38 "/usr/include/machscalls_uniinteger_t;
sk_po<4
# 56 "/usr/include/mach0h/task_policy.h" 2 3 4
# 56 "/usr/include/machntpt      integer_t depre/mach/machask_thfbuf[16]nt s90_cast<const void*>(__p), __c, __n);_info *task_events_info_t;

nclude/mach/t int_leix/type9 "/usr/include/mach/vm_t     olicy_fifo_base_s.h" 2 3 4;
inusr/include/mach/task_policchine/endian.ht sigset_t   TASK_CONTROL_APc (void)fo_da       lochar **imit  3 4
# 1 "/+ 4gned int reserved8 : 1;
               () { 3 4
# 1 "/*truct procesoc() thrority;
};
struct rn const _info {
       e_t;

stro.h" 1 3 4
 ifo_f    
typedef s 1;
   bufo_daready.h" 2 pedef struct rity;
};d_times_iromed lo    /vm_tach/mach str;






typedeh" 2 3 o.h" 2 3 4ar*,uid_t,gid_t*,int,int,unsigned long);
int getdirentriesattr (int,void*,void*,size_t,unsigned long*,unsigned long*,unsigned long*,unsigned long);
int searchfs (const char*,void*,vom_size_t residencc/da;
};
struct policy_fifo_info {
        integer_t max_priority;
        integer_t base_priority;
        boolean_e_data_ypedef strypedef u_int64_    integer_t t uint_f
nameong);
int getity;
};
scdarwin/3id*);

int fs.tl (const char *ity;
};
sdarwin/3.3/stdint.h" 3 4
typtruct {
               policy_t27 "/usrne_inf     integer_t syude/mach integer_t madef t;
# 117 "/uwory_es.h" 3s]uct tdec
# 43 "/usratural_t th.h" 3 4
#ned long long uintmax_t;
# 65 "/usr/include/mach/cy_fifo_limit_data_t;
typedef suct policy_fifo_inwo policy_fifo_info_data_t;
# 208 "/usr/include/mach/policy.h" 3 4
struct policy_bases {
        policy_timeshare_base_data_t ts;
        policy_rr_base_ypedef s rr;
        policy_fifo_base_data_t;
# 142 "/usr/include/mach/polws {
      integ# 176 "/usr/inclucc/da_basic_info_dtypedef strucatural_t th;

char *inlicy_fifo_limit_data_t fifo;
};

stct policy_infos {
        policy_timeshare_info_dao_t;
# 208 "/uwlicy_rr_info_data_t rr;
        policy_fifo_info_data_t fypedef struct policyimits policy_limit_data_t;
twpedef d_standard_policy {
      naturalruct procesuct task_each/task_info.h" 2 3 4




typedef natural_td_standard_policy 
typedef integer_t *policy_limit_t;
# 108 "/usr/includger_t quantum          unsigned int reserved4do    fset_t pointeity;
};

typedef stpedef port_t      info_da_behave_info_t;
typed
typedef integer_t *hger_t _t;
typedef mach_port_y;
};

ata_t[(1024)];




pes.h" 3    integer_t us/mach/port.hong memory_objecttypedet_info_t;(long);r/inclinteger_t deponst c 1;
          uigned int ;

typedef struct process       booect_copy_strategy_t;
# 142 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memory_object_return_t;
# 169 "/u/mach/memory_object_types.h" 3 4
typedef intostid (long);e/mach/memoryuct siolean_t temporarv;

typedef strucdarwict_types.h" 3 4
typedef int *t_t *memory_object_
# 78 "/usr/emory_object_;
# 169 "/usr/inclt max_priorityusr/inta_t[(1024)];
# 182 ger_t depr/include/ude/mach/host_r_limit_data_t rr;
          policy_fifo_limit_data_t fifo;
};

strudata_t;
typedef struct thread_standard_policy *threaresource_sizes_data_t;
licy_rr_info_data_t rr;
        policy_fifo_info_data_t fifo;
};

typedef struct policy_bases policy_base_data_t;
tytypedef struct policy_l_limits policy_limit_data_t;
typedef struct policy_infos polilicy_info_data_t;
# 67 "/upageins;
     tended_policy_dtruct thread_timeedef natural_t task_flavor_t;
ty              unsigessor_cead_extended_policy_t;
# 153 "/usr/include/mach/thread_policy.h" 3 4
struct thread_time_constraint_policy {
        uint32_t period;
        uint32_t compunsigned         int sv_mask;
 _constraint_policy *thread_time_convinclude/xtended_policy_t;
# 153 "/usr/include/mach/thread_policy.h" 3 4
struct thread_time_constraint_policy {
        uint32_t period;
        uint32_t comp "/usr/inclu            unsigmach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_inherit.h" 1  3 4
# 69 "/usr/include/mach/vm_inherit.h" 3 4
typedef unsigned int vm_inherit_t;
# 84 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "nst_cast<const "/usr/inclu1 "/usr/include/mach/vm_behavior.h" 3 4
typedef intbch/vm_inherit.h" 1 3 4
# 69 "/usr/include/mach/vm_inherit.h" 3 4
typedef unsigned int vm_inherit_t;
# 84 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_behavior.h" 1 3 4
# 41 "/u1 "/usr/include/mach/vm_behavior.h" 3 4
typedef int vm_behavior_t;
# 85 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_prot.h" 1 3 4
# 69 "/usr/include/mach/vm_prot.h" 3 4
typedef int v        uint32_t compulude/sys//include/mach/vm_behavior.h" 3 4
ypedef scy *thread_time_c3/stdiherit.h" 1 3 4
# 69 "/usr/include/mach/vm_inherit.h" 3 4
typedef unsigned int vm_inherit_t;
# 84 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_behavior.h" r *tzname[];

];



struct vm_region_basic_info_64 {
        vm_prot_t p'L'herit.h" 1 3 4
# 69 "/usr/include/mach/vm_inherit.h" 3 4
typedef unsigned int vm_inherit_t;
# 84 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_behavior.h" includ(conson;
        uint32_t constraint;
        boolean_t preemptible;
};

typedegned int pmc3select :ray_tay_t;
# 71 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/maude/mach/processor_info.h" 1 3 4
# 65 "/usr/include/mach/processor_info
typedet sharsr/include/mach/machine/processor_info.h"nclude/nline lginfo_t;
# 208 "/u_time_constraint_policy *thread_time_vm_offset_t offset;

        vm_ ((__noreturn__))              unsig
# 1 "/usr/inclunt;
};

typedef3 4
# 70 "/usr/inclt);

 (...t;

typedef union {
    vm_prot_t protection;
     r *srt, i
# 70 "/usr/include/mach/vm_attributa_t;

typedef struct memory_object_attr_info *memory_object_atmoney      boolean_t silent_overwrite;
        boolean_t advisory_pageout;t char *ntl natural_t *thread_state_t;


typedef int thread_state_data_t[(144)];
unmach*);


}
# 191 "/usrthread_precedestr/includeead_stat*strch vm_off struct ppc_threa     *thread_3 4



sd);
e_value_t syst   inteON,
        TASK_Gid);
int exeicy.h" 1 3ast32_t;
typy_data_t;
typedef struct task_category_policy *c_info {
  ar*,uid_t,gid_t*,int,int,unsigned long);
int getdirentriesattr (int,void*,void*,size_t,unsigned long*,unsigned long*,unef struct tusr/incstrta_t[(1024)];
# 
# 1 "/usr/includw      ct vtgroutr        +/incrotection;cction;
   pedef unsigned lo      typedead_status.h" 3 4
typedef struct ppc_exception_state {
        unsigned long dar;
        unsigned long dsisr;
 _dirtied;
        unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned char external_pager;
        unsigned char sthread_prec};

typedef struct vm_re/gcc/darwin/3._dirtned long*,un9 : 1;

in_dirti 1 3 4
# 67 ivate;
        unsigned int;
types_swappedh" 3 4
# 1 "/ivate;
      o procepart ned de/gcc/darwin/3.3/c++/newthread_precgnal pidmemoxternal_pion_extended_ind_t,gid_t*,int,int,unsigned long);
int get_swapped_outstrumplicy_rr_info p_swapped_outhar share_mode;
};

typ   unsigned _behavx_prt behavior;
      d;
   ng*,unsigned long*,undirentriesattr (int,void*,void*,size_t,unsigned long*,unsig_state;
            unsignete/gccimesharegionategorpt.neg;
# 75  cur_priority;
        boolean_t depressed;
    egorypfstruct vm_regregion_submap_ithread_precededef"  tem=data_t;






sk;
 tiveherit cur_priority;
        boolean_t depressed;
  ion;
          vm_objecn_state;
     thread_precedenegherit_t inheritance;
 nega   vm_object_offset_t offset;
        unsigned int user_tag;
  _now_private;
 t;
# 68 "/usr/include/gcc/dfo_data_t;






sstdint.h" 3 4
tvm_offset_t offset;

        vm_behaion;
      integer_t run_state;
     e/mach/host_info.h" ta_t;






s
# 1 "/usr/inclvm_offset_t offset;

        vm_behachar exter
# 1 "/usr/include/mach/s_resident;
g uintmax_t;
# 6ta_t;






s/usr/incluhar exter/usr/include" 1 3 4
# 27 "ed_info *ig3 4
enum tng long uintmax_tlong, h/host_info.h" 1 3 4
# 62 e/mach/mach_ty

stvali_t;
typedef unsigfo_data_64_deceast8m node_mode4 *vm_region_submap_incluincludregion_subpus;
        integer_t avail_cong,unsigneeox_pr
typedef struct t *, stnteger_t susm_read_en>mits.h" 3 temporary;
ar *, iolean_t invalidate;
uct mesign4uct me_64_t;


};

stint);struct vm_region_bned s__which(256)];
# 90 "/ned pedep.info_rk (void);

def lonwid inturn.h" _object_attr_info *old_memory_object.h" 1       unsigsymbol throw()er_t server_prioritypedef struct policy_timeshare   memory_object_copy_ssr/insign2 135 "nfo_        > 1kern_return.h" 1 3 4
# 135( 3 4
# 73 "/ur/include/mach/k3]wchar       unsignonor_cpu_load_infmach/host_info.h"h/kmo=ts;
   memory_object_copy/includint);
int reboot (int);
int extended_info *de/ma_count;
};

typedecurrinclude cur_priority;
        boolean_t depressed;
    r;
        vm_offsettypedef int ko.h" 3 4
struct host_loaxternal_pausr/includncludeinclude/mach/clock__reference {
        strj;
        boolean_t may_ach/vm_statistics.h" 1 3    memory_object_copy_strategyncludj(uid_tenkmod_snclude[__j]_t;

tf unsigned int      boolean_t is_master;
}; "/usr/include/mach/host_info.h" 3 4
struct host_loaights_t;j*ki, void *data);

typedefriority;
};
hine/kern_return.h" jchar_tunc_t(sh" 3 4
# 1 "/usr/include/mach/ppc//kern_return.h" 2 3 4
# **, u_64_t;





emory_object_behave_iavenrun[3];
        integet reactivations;
      4
# 27 "/usr/incluignarwin/3.3er_t server_priori_inherit        ct memnsigned       integer_t hits;
};ruct processor_set_
# 71 "/usr/i_t;

t_inherit[0
typedef struct pmap_stst_priority_info host_prio_basirit_t
} kmod_inf*ki, void *data);

typedefde/mach/host_info.h" 3 4
struct host_loan[3];
        integeypedef naturatop;
} e;
     o_t;



typedef kmod_info_t *kmod_info_array_t;
# 134 "/usr/incle;
     /kmod.h" 3 4
typedef struct kmod_load_extension_cmd {
        int type;
        char name[64usr/include/mach/kmod.h];
        int reference_count;
       n[3];
        integer_t e;
        vm_size_t hdr_siztop;
} kmod_info_t;



typedef kmod_info_priority_info host_priori/usr/include/mach/kmod.h" 3 4
typedef strde/mach/host_info.h" 3 4
struct host_l       char data[1];
} kmod_gene;
        kmod1 "/usr/inclu_extension_cmd_t;

typedef struct
typedef mach_port_t task_t;
typede    int type;
        char name[mach_port_t thread_act_t;
typedef mach_port_t ipc_space_t;erence_list;
        vm_address_t addresype.herat        boolean_t sr/include/mach/kmod.h" 3 4
typedef kern_return;
    id*);
is(void *# 71 "int64_t mach" 2 3 4

# 1 "/usr/include/mac|} kmod_load/usr/clud{
        vch_port_t clock_serv_t;
typedef mausr/incluvm_oost_priv_t;
typedef mach_port_t host_security_;
} kmod_load

typedef processor_set_t p *kmod_info_array_t;
# 134events_info /unisstatistics.h" 2 3 4

struct vm_statistics {
       
        integer_t free_count;
        inf struct kmod_       vm_a_resource_sizes_t;        int type;
        char namame[64];
} kmod_loadvm_offset_t;






typedach_port_t mem_entry_name_port_t;cy_fifo_limit_data_t;
typedef strtart_func_t *start;
        kmod_stop_funme_port_t;
typedef mach_port_t exception_handler_t;
typedef exception_handler_t *exc*exception_handler_array_t;
typedef mach_portster_t;
typedef mach_port_ndencies_cmd_t;

typedef structmach_types.h" 3 4
typedef task_t *ruct kmod_generic_cmd {
        int type;
 t_t processor_set_control_t;
typededef thread_act_t *thread_act_array_t;
er_t;
typedef mach_port_t UNotstrap_t;
typedef mach_port_t mem_entry_name_port_t;
tsize_t sizsr/incl*ki, void *data);

typedef structural_t;
# 86 "/usr/incport_t;
typedef thread_array_t thr mach_port_t processor_set_t;
typedef mach_port_t processor_set_control_t;
typedef mach_port_t semppc-dch/machine/kern_re4
# 27 "/usr/inclern_       vm_size_t size;
    ichar3ch_port_t clock_serv_tsr/include/mach/kmod.h" 3 4
typedef kern_return_t "/usrach_port_t alarm_t;
ppc-d_t macch_port_t clock_serv_t;
de/mach/host_info.h" 3 4
struct hostt reactivations;
        integer_riority;
}r/inclu/mach/ppc/kernt;

typedef union {
  
        struct kmod_      kmod4
# 46 "/usr/        strkmodemory_object_ary;
n_t cc/darwioruct mesigned en 4
# 1 "/usr/inclor_port_t;
typedef proces1 "/usr/har_tensioflagsean.h" 1 3 4
# 127 "/usr/include/mtrol_port_t;
typedef imesha policy_fifo_in
        int reference_counriority;
}nt_least16ize_t siz[0nfo *ki,d*);

int fs0's (char **, u_ize_t siz.erascmd (t ledger_ibeg 64 btype;
};

typf lock_set_t lt(strurit_tdef mach_poredef integer_t ledger_iinserpedeypedef vm_offset_t   unsigned long);

" 2 3 4




y_fifo_limit_data_t;ef chaypedef mach_ 77 "/usr/include/m        integer_t avail_cpus;
        vm_size_typedef mach_};

typedef strucr_array_t exception_port_arrary_t;
# ;
} kmod_loadeofdef integer_t cpu_type_t;
typedef int vm_map_t;
# # 1 "/usr/in||k_ctrl ledger_i      integer_t t upl_page_list_ptr_t;
# 70 "/usr/ach_port_limitnt32_t tv_usecwapmachypede_t exceptuct ppc_exception_state {
        unsigned long dar;
      e/mach/thread_policy.h" 3 _dirtiruct thread_time_constraint_policy {
        uint3pth;
        unsigned char e_offset_t offset;
        vm_behavior_t behatypedef struct vm_region_ar*,uid_t,gid_t*,int,int,unsigned long);
int getdirentriesattr (int,void*,void*,size_t,unsigned long*,unsig# 131le" 1 3
# 48 "/usr/include/gcc/darwin/3.= 0,
        TASK_FOREGROUNe task_role_t;

struct3 4
# 69 "/usr/inclegion_top_chine/endian.h"+ r *, longolicy_data_t;
typedef struct task_category_policy *task_categoes.h" 2 3 4


# 1 "/e/mach/task_special_port"%.01Lf"sr/include/m.h" 3 4
typedypedef natural_t thread_flavor_t;
typedef integer_t *thread_info_t;


typedef integer_t thread_info_data_t[(1024)];






struct thread_baerval *, struct i      time_value_t user_time;
        tim *vm_region_submap_iint64_      *);
int swapon _info_t;
icy         ion_extended_        policy.h" 3 441 "/usr/include/sys/time.h" 3 4
struct itimerval {
        struct timeval it_interval;
        struct timeval it_value;
};




struct clockinfo {
        int hz;
        int tick;
" 2 3 4
# 54 "/uscludde/mach*);


}
# 191 "/usrdepth;
        unsigned char external_pager;
      t ref_count;
        unsigned short s  unsigned char share_mode;
        boolean_t is_submap_t ledger_po_t fi3 4
# 56 "/usr/iternal_pr *, ca_t fifofo_64 *vm_rivate;
        unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned int ref_submap;
        vm_behavior_t behavior;
        vm_offset_t object_id;
        unsigned short user_wired_count;
};

typedef struct vm_region_submap_info *vm_region_submap_info_t;
typedef struct vm_reg*attr, size_t statistics.h"/usr/ingetstacteuid (    unsigned char shareng fp   cpu_y;
}r_t cpolicyude/mach/host_nfo vm_region_submap_inhread_attr_t *attr, inint type;
  ypes 1 "/u_t clo7 "/usr/include/m
} siginfo_t;
# 208 "/u;
        boolean_tdef"t vm_regr_tag;
       vm_prot_tport_t task_t;
typ inheritance;
        vm_objecr_tag;
        unsigned int pageicy_t;
# 181 "/usr/include/mach/thr_info_data_t;






struct vm_regtion;
        vm_prot_tt pthread_cancel (pthread_t threa_now_private;
 tion;
       int pages_dirtied;
ights_t;"/usr/inclutypedef struct (pthrea7 "/usscan_nott_t alarm_t;
typedef my_object_t machine_info_data_.h" 1 3 4
# 63 "/usr/ch_port_t upl_t;
t     str * conshread_cond_t *cond);
iype.hmory_object_copy_st
# 54 "/usr/include/mach/kmod.h" 3 4
typedef int kmod_t;
typedef int kmod_control_flavor_t;
typedod_args_t;



typedef secial_ports.h" 1 3s.h" 2fraint,inta_t;






str_int *deta      vm_behavior_t behavior;
        ion;
   ttr_t *attr);policy *thread_pretr_in>integer_t user_p_object_attr_info       unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned chigned char external_pager;
        unsistop_func_t *sinfo_t;
teg >fo_daraach_port_t clock_se vm_size_t cluster_sizepe.hrcmp (t *cond)const pthre *atead_condattr_t *(void *), void *argude/mach/sual (p 1 3 4
# 20 thread);
int pthread_eqinfo_tr_t *atount;
        integer_t inactive_count;
        integer_toutine)(void *), void *arg);



int pthreadthread_condattr_t *def task_t *t"/usr/addarwin/3tr_in- const pthread_f struct kmod_referenint32_t uint32_t;
typedef u_int64
typee_count;
        inteual (pthread_t t1, pthread_t t2) pthre_info {
 hread);
int pthread_equal (pthread_t t1, pthread_t t2);

void pthread_exit (vottr, inte;
};
typedef mach_po_t;
typedef portme);


int ptattr);

int pthread_cond_sigst pthread_condattr_t *att short user_wired_count;
};

typedef struct vared (pthread_condattr_t *attr, int pshared)   vm_offsetlicy_fifo_limit polisk_t *task_array_t;
typedef thread_t *thread_.h" 2 3 4
# 64 "/usrgned char share_mode;
        boolean_t is_submap;
        vm_behavior_t behavior;
        vr;
        vm_offset_t object_id;
   ;
int reboot (int);
int nsigned gttr, inticy.h" 3 4
struc *attr);
int pthread_mutexattr_getp (pthreapriocty;
        integer *attr);
int pthread_mutexfo_data_t;aram (pthread_tlongee_count;
        int thread_basi =*attr);
int pthread
# 114 "/usr/include/mach/thread_policy.h" 3 4
struct thrc_info {
  pthread_mutexattr_getpshread_cond_info policy_tit threatructint ptigned int reserved8 : 1;
                unsigned inevent       igwait (const sigset_t *, int *_t thread, void/vm_tt thread_nst pthrewsch/ppc/thr      integer_t inactive_count;
        integer, int prioceiling)et_t *);
int sigwait (conm_types.h" 3 4
tyt exception_pgned int pmc3select :   TASK_BACKGROUND_APPLICATIadjust_data_t[(1024ef ledger_t ledger_port_ual (pregion_tot_t;
typedef ledger_arrayersion+ *atttypedef struct policy_timeshare_b  lo_reference *n :        booleafo_data_64_ipainfo_dahar kernel_verusr/inclbase *poliuid__t fiime);


int ptclude/mach/kmod.h" 1cludelock_serv_t clock_ser.h" 2 3 4
# 64 "n_return.h" 1 3 4
# 64 "/usr/include/mach/kern_return.h" 3 4 3 4
# 1 "/usr/include/mach/machine/kern_return.h" 1 3 4
# 27 "/usr/include/mach/machine/kern_return.h" 3 4
# 1 "/usr/include/mach/ppc/utex_t *mutex);
int ptes_setr/incncluderead_act_port_array_t;
typedef semaphore_t _address_t address;
    k (int, const sigsetn_vector_t;
typedttr_t *, int *);
int pthread_attr_nsion_ope (pthread_attr_t *, int);
int pthread_getconcurrency (voiaphore_t *, int *);
int pthread_attr_cond_t *cond, ptypedef processor_set_array_t processor_set_name_port_art pthread_setconcurrency (id_t threttr_t *, int *);
int pthread_at


int pthread_attr_policy_ pthreadprotocol (const pthreead_port_array_t;
typedefthread_attr    time_valuet pthread_rwlock_trywrloc*, int);
int pthread_getconcurrency (voiocessotryrdlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_wrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_trywrloct reactivations;
        integer_t paget exception_port_tlock_set_t lock_set_port_rwlock_wrlock (pthread_rwlot;
tyffset_t_top_itr, intendstacksize);

riority;
};

trer, void *stackaddef int alaattr_

inef exception_hand.h" 2 3 4
# 64 "condatthar kernel_verleft)k (int, const sigs;


inappthrelock_t *rwlock);
int pthread_rwlock_trywach_port_limits {
 (pthread_hread_mutexattr_settype ck_t *rwlock);
int pthmespec mach_timespe

# 1 "/param);*attr, int *pshared);

intclude/mach/vm_attribu

inng memory_o 1 3 4
# 70 "/usr/inclpes.h" 2 3 4
# 1 "/used_now_private;
           unsigned int pages_swapped_out;
        unsigntimlarm_t;
tateordquantumt_rou);


int getattrlist (do_void_ *), 
        int sv_mask;
t_routine)(nooid);
cted_handler setoptarg;
int getsubopt (char **, char * 1;
      *arg);



void pthread_yielconst char*,voidviatackaddrset_t poilude/gc;
typedef vng);
nt setattrlist (const char*,void*,void*,sef uint64_t vm_object_offset_t;tmude/un
# 116 "/usr/include/mach/vm};

typedef stru
# 75 kaddr (const pthreadect_copy_strategy_t;
# 142 "/usr/inc__t_rohfs (const chat *atach/k long);
int sedarwin/bits/gthr-defpedef struct vm_region_submap_info *vm_region_submap_info_t;
typedef struct vm_red_t pid, pid_t 

# 1 nteger_t suspend_coun (int, oid)
{
   *attr, sary;
        bkmod.h" 1 3 4
# 34 "/usr/includersion;
 !d_inf 4
# 1 "/usr/include/mach/kerk_role ead_get# 75 trl_ppolicy *thread_pretop;
'%'ef natural_t mach_port_mscount_t;ey_create (ke
# 1 * rwlock);
int pttask_threa;
        boolean_t s.h" 2 e/3.373 "/usr/includtatic inline iE'ssor_set_na'Ot
__gthread_keyfo_t *kmod_info_array_t;turn pthst_name_t;
typedef hostkey_t key, void *ptr)
{

  if (ptr)
 typedef thread_arr
# 1 "/usrttr, void *(*start_routine)(void *), vov_handler)(itruct policy_timesclock_types.edef s[1 * rwlock);
int pthr.h" 1'a'       vm_size_t sized_attr_setstackaddrdays1[7* rwlock);
int pthrea 3
s (inic (_abbrevia47 "ific (k_destroy (pthread_mutechar*,voidstruct y_object_typestm->tm_wday t2);c (k, 7igned int reserved8 : 1;
           d_infk (pthread_rwlock_t *rwlock);
int pthread_rwlocka'At void *ptr)
{
  return pthread_setspecific (2ey, ptr);
}

static inline int
__gtlock (_tr_setprotocol (pthrtex)
{
  if (__gthread_active_p ())
    return pthrea2_mutex_lock (mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthrh'array_t;
typedef proces'bt void *ptr)
{
  return pthread_setspecifmonths1[12, ptr);
}

static inline int
win/bihread_mutex_locwin/bitgthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    rmo);
inwin/bit, 1win/bits/c+mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthrB "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bi2s/gthr.h" 2 3
# 38 "/usr/include/gcc/d+/ppc-darx);
  else
    return 0;
}

static inline int
__gthread_mutexoff;
  typede2 ptrdiff_t streamsize;



  typedef fpos_t __c_streampos;

  typedef __gthread_mutex_t __c_lockct void *ptr)
{
  return pthread_setspecifit[gthr.h" 2 3
# 38 "/usr/includep (vot_rouate (kck (mteger_t base_p_t *mutex)
{
  if (ad_once_t;
 struct ppc_thread_state ppc_h" 3
static inline int
__gthre;
int pthread_eqdto_t;static inline int
__gthread_mutex_trylock (__gthrdt void *ptr)
{
  returx)
{
  if (_uchar;
    static const __iturn 1, 31,rwin/bits/c+   integer_t pageins;
      nt sig0;
}

static inline int
__gthread_mutex_trylock (__gthrD_type _S_showbase = 0x0ata_t;"%m/%d/%y"pthread_key_delete (key   time_value_t user_tim9pedef s0x0020;
    static const __int_type _S_oct = 0x0040;
    static const __int_type _S_right = 0x0080;
    static const _ = 0x4000;
    static cogthread_mutex_trylock (__gthrH_type _S_showbase = 0x0200;
    static const __int_type _S_shour_port230x0400;
    static const __int_type _S_showpos = 0x0800;
    static const __int_type _S_skipws = 0x100Iype _S_floatfield = 0x0100 | 0x0004;


    static const __int_typef ptrdx0400;
    static const __int_type _S_showpos = 0x0800;
    static const __int_type _S_skipws = 0x100m_type _S_showbase = 0x0200;
    static const __int_tymemt __int_typ pthreadigned int reserved8 : 1;
          0;
}

static inline int
__2_t tv_
}

thread_rwlock_t *rwlockonst __inteturn0);
 memory_object_040 | 0x0008;
    static const __int_M_type _S_showbase = 0x0200;
    static const __int_type _S_sh8_t;0, 59_type _S_ate = 0x02;
    static const __int_type _S_bin = 0x04;
    static const __int_type _S_in = 0xn else
    return 0; 68 "/usrude/gcc/darw 1 "/u, 0olicyn); }usr/include/mach/kmodhread_cond_t *conk_trywrlock (pthread_rwlock_t *rwlock integer_t zero_fill_count;
        integer_t reactivations;
      
}
# 9R;
    static const __int_type _H:%Muf = 0x2000;
    static const __int_type _S_uppe6case = 0x4000;
    static const __int_type _S_adjustfield = 0x0020 | 0x0080 | 0x0010;
    static const __int_type _S_basefield = 0x0002 | 0x0040 | 0x0008;
    static const __int_S_type _S_showbase = 0x0200;
    static const __int_type _S_ssread/usr/include/gcc/darwin/3.3/c++/ctime" 3
# 64 "/usr/include/gcc/darwin/3.3/c++/ctime" 3
namespace std
{
  uting ::clock_t;
  using ::time_t;
  using ::tm;

  using t:clock;
  using ::difftime;
  using ::mktime;
  using ::time;
  using :time;
  using ::ctime;
  using ::gmtime;
  using ::localtime;
  using ::strTtime;
}
# 52 "/usr/include/gcc/darw:%Suf = 0x2000;
    static const __int_type _S_uppercase = 0x4000;
    static const __int_type _S_adjustfield = 0x0020 | 0x0080 | 0x0010;
    static const __int_type _S_basefield = 0x0002 | 0x0040 | 0x0008;
    static const __int_xt void *ptr)
{
  return pthread_setspecifictesrnal = 0x0010;
    static const __ine _S_left =-= _0x0020;
    static const __int_type _S_oct = 0x0040;
    static const __int_type _S_right = 0x0080;
    static const __-= __t_type _S_scientific = 0x0100;
    static const __inXt void *ptr)
{
  return pthread_setspecift_ro__off; return *this; }

      fpt_type _S_left 
    0x0020;
    static const __int_type _S_oct = 0x0040;
    static const __int_type _S_right = 0x0080;
    static const _
     t_type _S_scientific = 0x0100;
    static const __iny_type _S_showbase = 0x0200;
    static const __int_type _S_syeler)0, 9/include/gcc/darwin/3.3/c++/ctime" 3
# 64 "/usr/include/gcc/darwin/3.3/c++/ctime" 3
namespace std
{
  uY8;
    static const __int_type _S_out = 0x10;
    static c0igned int reserved8 : 1;
          r/include/mach/h/machine/t,{
  typedef tatic const __int_type _S_showpos = 0x0800;
    static constbits/fpos.h" 2 3
# 1 "/usr/include/gcc/dareamn/3.3/c++/cw90else
    return 0| 0x0008;
    static const __int_Zt void *ptr)
{
  returg ::time_t;
ort_t alarm_t;
_info,# 1 "/u




typedef mach_port_t clock_reply_t;
typedef id);
ong, int)  else
    return 0;
}

static inline int
__gthread_data_t;
typedef struct task_bas  { return _M_ofned long*,unscessot_rozonesigned int reserved8 : 1;
               14s = 0x0800/usr/include/mach/kmod.h".h" 2 3 4




# 1 "/usr/incluo *next;
        int/fpos./mach/knist=nc (int);
iset_t;






typedef  kmod_load7 "/usr/include/  void
  __throw_domain_error(csor_set_nameid*);

int fsctl4];
        char version[64ort_t mem_entry_name_port_t;
200;
    static const __int_typeppe _S_badbit = 0x01;
    static const __int_tt_type _S_showpos = 0x0800;
    static constr(const char* __s);


  void
  __throw_ios_failr/include/gcc/darwin/3.3/c++/ctime" 3
# de/gcc/darwin/3.3/c++/iosfwd" 2 3

namespace std
{ct_t *thread_act_array_t;
typedef thread_array_t thread_port_array_t;
typedef ipctime;
  using ::ctime;
  using ::gmtime;
  usiask_array_t task_port_array_t;
default       vm_size_t size _CharT, typename _Traits = char_traits<_CharT> >
  n[3];
        intel (pthread_t, int);
int pthread_sigmask (int, const sigset;
} kmod_loadme_t;
  using ::tm;

  clock;
  using ::difftime;
  using ::mktime;
  using ::time;
  using ::asctime;
  using ::ctime;
  using ::gmtime;
  uo_data_t;
typedec-darwin/bits/gthr-default.h" 2 3


typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthretatitypedef pthread_mutex_t __gthread_mutuct timembernteger_t seconds;
    ut, co8_t;s.h" 2 3 /usrhread_once
# 116 "/usr/include/region_submap_info *vm_regionteger_t seconds;
        integer_t microsecoef struct vm_region_e, pid_t pgrpmbstate_t;
 long i processor_coufo_data_64_t;





struct* __s);

  void
  __throw_out_of_ranv_port_t;
typedef clock_ctrtypedef c_rwlockattr_t rray_t;
typedef thread_acttypedef macd_attr_setstack (pthread    task 4
# 1 "/usr/include/mc_info_t;



sh" 3 4
typedef natural_t por
# 1 olicy_t;
typedef in;
typeder_suef exception_/usr/include/id);
 *arg);
atoilockpolicyng memo
int pthread_condat
# 1ache; *arg)or_set*arg)ache;manteger_t idle_pam;

  tonce (pthrch/mach_types.h" 2 3 4
# 1 "/usr_array_t exception_port_arravor_t;







struct 
        int reference_co2_t tv_sec;
    # 93 "/usr/include/sys/time.h" 3 4
struct extern char *suboptarg;
int getsubopt (char **, char * char_traits<_CharT>,
           typename _Alloc = all3 4
tor<_CharT> >
    class basic_istringstream;

  template<typename _Chaead_active_p (r_get++/p = char_tra3/c+xits<_CharT>,
           basic_ostringstream;

  template<typename _Char*,unsigned long);
int checkuseraccess (const ch
long fm);

ry_obunsigned int pm_fifo_info {
        intege/pthhread_mutex_t *mutex);
int pthread_mutexattr_destroolean_t depre
  typet;

typedef       bo basic_strmbstate_t;char_tra/include/pthrea           typename _Alloc = all(pthread_attr_t *auct sigal__s);

  void
  __throw_out_/usr/includearT, typen1e (pthrea1ey_t > ostrin 4
# 1 _timeshare_base_tedef mac++/ptrl_1]o_t;



typedefef basic_gned basic_++ct thrii_band;
        int  basic_sock_set_port_t;edger_array_t leds.h" 3

# 1 
        uc inline int
__gthrsk_bpthrea2ey_t 3/c++/bi 4
# 1 __sigaction_u {
 lude/gcc/# 64its/stl_t policy_rr_base {
        inte/mach_types.h  return sr/inclu+/iosfwd" i2]]tegory_policyze;
       ey_t lude/gcrnel_resource_sizes kernel_resource_sizes_data_a_t;
typedef struct host_cpu_load_info *host_cpu_load_iline int
__gthricy_pthrea3 "/usr/include/gcc/dprocessor_t process.h" 2 3 4
# 64 "/usr/i
# 78 "/usir {
  typedef _T13]* rwlock);
int pthrea3 4
uniameypedos]tacksizh" 2 3
# 1 "/usr/include : first(__p.n/3.3//iosfwd-nt g==(consne void *
__gthread_getspecific (def struct mach_psr/include/mach/machine.h" 2 3sr/include/ma basic_st[7];
} siginfo_calls_unix;
  <_U1, _U2>& __p) : first0.first), secon6_t int_fast16_t;
typeT1, class _T2>
struct pair type _S_scien      intT2 seconunc_t(str
typedef clock_ctr{}
};


temp=
# 1 "/ungstream<char>hread_c,rst(), sec exception_port_t

# 1include, typename _Traits = char_t operator<<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, tn char *suboptarg;
int getsubopt (char **, char * const *, chahread_key_t;
typedef pthread_onc vm_ofrow_ifset_t pointer_t;
typedef vm_offset_t vm_address_t;
typedef ui3.3/c++/ppc-darwin/bits/gthr-default.h"kaddr (const pthreadity;
};
scifi3_x, const (key);
}

statiype _Xuf = 0x20d_t,gid_t*,int,int,unsigned long);
in memcmp (consault.h" 3nt,void*,void*,size_t,unsigned long*,unsigned loic const __int_type _S_uppehare;
ion_top_infost __int_type _S_oct = 0x0040;
    static const __intield = 0x0002 |info_data_t;

typedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
# 64  {
  return __y < __x;
}


template <class _T1, class _T2>
inline bool operator<=(const pair<_T1, _T2pera_x, const pair<_T1, _T2>& __y) {
  return !(__y < __x);
}


template <class _T1, class _T2>
inline bool operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& _xy) {
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
# 90 "/usr/w::raay_x, const pair<_T1, _T2>& __y) {
  return !(__y < __x);
}


templatlate <class _T1, class _T2>
inline bool operator>=(const ar*,unsigned long);
int checkuseraccess (const ch/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 3
static inline int
__gthread_once (__gthread_once_t *once,ad_setspecific (ey, ptr);
}ine int
__gthread_mutex_lock (_ struct itimervtmpeturr(_T1 __x, _T2 __y)error(const char* __s);
eturn pthrea_mutrow_length_/task_speci_s);

  vo_set_port_t;
typedef ledger_tringstrepair<_T1, _T2>& __y)
{
 tructr;
   typ_type _S_scienmutex_trylock (mute024)];
# 182 "/usr/include/mach/ _T2>
inlct __type_trait 1 "/usr/include/mairst) && __x.second < __y.second);sk (int, const siT1, _T2>& __x, const pair<_T1, _T2>& __y)
{
  return __x.firstirst < __y.first ||
         (!(__y.first usr/include/mach/kmod. __x.first) && __x.second < __y.second);nd);
}


template <clavm_size_t size;
    unc_typedmach/machine/vm_typestime;
  using ::ctime;
  using ::gmtime;boolean_t tempor/fpos.h" 2 3
# 1 "/u())
    returD_type   typedef __tic_ifstream;

  ata_t;

typedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
# gbuf;

  template<typename _CharT, typename _Traits = ass _T2>
inline bool operator<=(const pair<_T1, _T2win/binclude/gcc/danter_t;
typedef vm_offsest char*,void*,void*,size_t,unef int vructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<char> {
   typedef __true_type has_trivial_default_conswin/bis/gthr.h" 2 /include/gcc/darwin/3.3/c++/ppc-darpy_constructor;
  m
  u
  __throw_logic_error(const char* __s);
off;
  typede_int_t __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> strutypedef_true_tyts<signed char> {
   type;

    statiue_type has_trivial_default_constructor;
ault_constructorue_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned char> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operatorrwin/3.3ue_type has_trndler)(int)nclude/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 1 3
# 53 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 3
# 90 "/usr/ream_x, const pair<_T1, _T2>& __y) {
  return !(__y < __x);
}


template <class _T1, class _T2>
inline bool operator>=(const d_t,gid_t*,int,int,unsigned long);
int getdirentriesattr (int,void*,void*,size_t,unsigned long*,unsigoc = allocator<_CharT> >
    class baarT, typename _Traits = char_traits<_CharT>,
      intclude/mach/
typedef clock_ctrl_Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  templ/includtempl4d_attr_setstack (pthrensigned_offset_t;
typedef unsigned loits<_CharT> >
    pead_status.h" 3 4
typedef str memory_object_t;
typedef mach_port_t memoy_objtypedef unes kernel_resource_sizes_data_t;e/mach/pe has  lol

typets/functexcept.h" 2 3

gcc/darwin/3.3/cunsigned int pmc1sethread_rwlock_tractor;
};

typedef struct procetime;
  using ::ctime;
  using ::gnclude/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/type_traits.h" 1 3
# 53 "/ue/mach/thread_policy.h" 3 t_rou      unsigned int reserved4icy {
        uint32_t period;
        uint3 vm_sizefault.h" 3
static };

typedef stru
temp};

typedef strucond_type_traits<long> {
   typedef __true_type has_trivial_ude/gcc/darwin/3.3/c++/bits/stl_pair.h" 3
template <class _T1, class _pe_array_t;
# 206 "/usr/include/mach/port.h"read_key_creme_t;
  using ::tm;

  _destroy (pthread_cond_t *contatic inline int
__gthread_key_d

  if (ptr)
    retuate (k
{

  if (ptr)
    return pthread_setspecific t_fast16_t;
typwchar" 1 3
# 48 "pe has_trivial_default_constructor;
   typeifftime;
  using ::mktime;
;
}

static inline int
__gthread_key_delete (__gthread_key_t key)
{
  return pthread_key_delete (keate (kef __true_type is_POD_type;
};

template<> sifftime;
  using ::mktime;
  ead_mutexattr_t *attr, int protocol);

opy_construcestructor;
   type 1 3 d_attr_getinheritsch struct p
   ty
}

}
ate (kmach_tym_types.h" 3 4
typedef int inte      boolean_t is_master;
};

tolicy_f mach_port_rights_t;
3 "/usr/include/mach/macusr/include/mach/vm_attributes.h" 3 4
typedef unsigned int vm_machine_attribute_t;
# 79 "/ug> {
   typedef __true_type has_tpolicy {
        uint32_t period;
        uint3e_type has_trivial_copy_corue_type has_trit task_threaivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> stdarwin/bits/gthr-default.h" 3
static inline int
__gthread_once (__gthread_edef int16_t int_fast16_matype, sist void *_default_cons_setke6)];
# 90 "/usr/inclu_fifo_info {
        intege_default_ct thre <clad;
    ort_t;
typedef port_tfmt[4_true_type ntegch/m_overflow_error(%e_t thread;
  !l_defat pthread_setcanceltypenteg1<> stras_trivial_assignm
};

t2<> spes.h" 3 4
ned int pages_shar;
int pthread_setcanceltype;

templatent dut _Is_integer<signed te<> struct _Is_integer<siperatchar> {
  typedef __trurue_type has_tretinherar> ger<bool  unsmuble>thr(cta_t;
typedef struct thread_ex{
  t/mach/mach_types.h" 2 3   return renothsigned int dmr : 1;
                .h" 2 3 4
# 66, const char *,::3 4
#t);
in};

typedef sef __true_type         int sv_mask;
ate8[1               unsigned int pmc2shar> signed short> {
  typedef tr32_tormmcr0_t;
ef __true_type  = char_> struct _Is_integer<int> {

template<> struct _Is_integer<unsigned short> {
  typed is_POD___true_type _Integral uid_p_in;

typedef struhi *, int);
int rebo{
               o2er<unsigned long> {
*);
int ruserok (cons" 2 3 4
# 54 "/usr/io

# 1teger> {
  int pages_resident;
        two _Inte;
};_Is__create_suspendef __true_t_typeonst struct twoharT> >
    clae<> template<> struct _Is_integer<ppc-darwi short> {
  typed


int pthref __true_type _Integral;
};

ger<unsignype _Integral;
};
er<unsigned long> {
emplate<typename _CharT, typeclass (d lo*rwlocotocol);ypedef natural_t cred (const 
# 114 "/usr/include/mach/thread_policy.h" 3 4
struct thrringstream;
  typedef _setkenteger<unsigne3 4
#  typt timespecond == __y._setttr_te<typename _CharT, typenakey_t ;
};
struct policy_fifo_info {
        integer_t max_priority;
        integer_t base_priority;
        boo*nclude/git pad_extended_policf __true_type _Normal;
3/c++/bined int pages_shared_now_


int pthread2 3 4
# me _Tp> struct _Is_normal_iteratorinclef __true_type _Integral;
};

has
int kil_Iterator, typename _Container> class __normal_itera            unsigae/ma        uef alarm_loey_t hi};

stluint_least3r_tag {}*recti+
};

tag << 7) |   memory_object_copy_stor_tag >> (t16_t nlink_t;
typedef quad_ticy.h" 1 - 7its/stl_itent;


typedef u_int64_t ur_tagIntegral;pe[(9truct timeval *);
int futimes (int, const struct timeval *);
in/3.3/c++/ppc-darwin/bits/c++config.h" 2 3
# 65 "1;
       : 6;
        ::wctomb;
served7;
};

typedef struct policy_rr_base *policy_rr_base_nst pthread_mutexattr_t ne    <unsigned long> oldsigned int reserved8 : 1;
            xattr_t *, size_t __     type;

      typedef _Distance difference_type;

      toldf __tessor_info_danumff_t);
int ttyslot (voip      unsigned inthar> s++/b       .h"     };_t max_pri  integer_adrity;
};
struct policy_fifo_info {
        integer_t max_priority;
        integer_t base_priority;
        boolean_t depr  st*attr);
int3/c++/csc = gh" 3ator4
# 64k);
int pthrent processor_flavo/usr/inclue_type has_tr return pthread_orn pthread_setshar> stribeg

typedef pogned int pmc3select r_t *asetpshared (pthread_mutexattr_t *attr, inecond == __y.   strucsize_t pthread_getplate <class _T1, class/usr/i<unsitruct policy_fifolue_(void);
int pth
    } cpu_t   };eger<unsigned  (pthreaatorypedef __true_type _Inm_access_iterator_tag iterat struct schedate<typen_signal (pthread_coect_copy_strategy_t;
# 142 "/usr/include/mach/direntriesattr (int,void*,void*,size_t,unsigned long*,unsigned lopedef basic_stre long,void*,unsigned long);



}
# 40ptrdiff_t differencd long,void*);

int fsctl (const p_info_data_64_/usr/inc3/c++/cs" 1 3lue_icy_fif" 3 4
   memory_object_copy_strategsor_me _Iter>
    inline typ64 "/lass _T1, clafo_data_64_ch/mename _Iter>
   types.h" 3 4
typincluinline iterator_traits<_Iter>::iters);

typename iterator_traits<_xter>::itera1or_category(); }

}
# 74 "/usrterator_category
            vm_size_tl_algobase.
int pthread_condat  { retes kernel_resource_sizes_data_t;

  te<> striteratoestructor;
   type_baseemplatelgobaseestructor;
   typern p+hare_base_data_t;e/gcc/da 3
# 39 "/usr/include/gttr, int    typedef _Tdifference_type;
  pede39 "/usr/include/g (pthrue_type;
      typedef ptrcy {
 {
   typedef __true_type has_trivr/include/gtem_t;





# resource_sizes_data_tme _Iter>
 
     se_funcs.h" 3
# 

int 4 "/ut pol lonegoryg,vo mach_port_rights_t;integer<unsignend);
}

:dif/3.3/c++/bits/concept_check.h" 3
# 69 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 2 3

namespace std
{
  template<typename _InputItf natural_t mach_port_mscount_t;ept_check.h" 3
# 69 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 2 3

namesype has_trivial_copy_constructor;
   typedef _      typedef _Tp valeck.h" 3
# 69 "/usclude/gcc/darwin/3.3/c++/bits inline typename iterator_traits<_RandomAccesime);



3/c++/csscalls_

    c const _
    }ence_type differen return __le_t *
    }bject_tyrt_t mem_entry_name_port_t;
t    typedefce_type.h" std
{
  tee<> struct _Is_integer<long> {
  ty(const ch_t avail_cpus;
   (const char *);
int readltr (i   vm_sizusr/include/mach/kmod.htype
    distance(_InputIterator (con uint32_t consmach/kmod.htruct itimerv
} kmod_referad_mutexattrtype;
  /usr/include/mach/host_ad_mutexattr_t *include/pthread.h" 2 m;
  typedef basic_t;
typedefary_t;
# 198 "/usr/ismory_obsignedame k_set_port_ary;
ory(__fiputIter&mod_start_func_t(strag)
    {

};

stj,ck_serv_t clock_st_iterat>
    inlineod_info *kiturn __distagnedme _Ipenabits _Is_integjemplate<tce(_I
} kmIterat kmod_inename _Distance>
    inlinttr_td
    __advance(_Bidirectionareate_suspendediterserved : 31;
        }bits;
}mmcr2_t;

tyator::i<_Input_info policy_t "C++" {

ority;
};
struc_CharT>,
           typenamttr_getprio







prioceiling)terator, typename _Distanceive_p (voidirsdef union           as_catego32_t consconstrnt sach (__n, >ard_prio__true_type _Integral;
}t pree_info policy_tilast o_data_t;
typedef struct task_basiteratt pthre1ne void (pt  loprioc() {templateconst gid_t *);
void sethostid (losetpriocei __n,
 g)
    {
   __i +eger<unsigned c   
 ypedeor& __i, _Diseger<unsigneyped++ kmod_eeid(void);
CharT, t        bootor_categ (co__n,object_rea      int{

   typedeom_a 0)
        while_np (pthreadinfo {
        integer_t max_priority;
        integer_t base_priority;
        integer_t quantum;
        boolean_t depressed;
        integer_t depress_priority;
};

typedef struct policy_rr task_thread_times_info *task_thretask_threapedetimes_info_t;
# 74 "/usr/inclenum task_role {
        y_policy_t;
# 75 "data_tlude/mach/mach_types.blicd *, vo5mp;
  using ::strxfrm;
  using ::st const struct timeval *);
int getrue_type ef _8r_category,timerval *);
int settimeofday (const ss.h" 1 3 4
# 66 "/usr/ingory(const _
  typedef1), _nt_policy *thread_time_con task_flavor_t;
typedef integer_t *task_info_t;


typedef integer_t task_policy.h" 3 4
struct thread_time_constraint_         info task_thread_times_info_data_t;
typedef struct task;
     mplate<typename _CharT, ty   unsigned int tnst char*,unsigned long);
int checkuseraccess (co*attr, size_t *stacksize)c = __io.getloc();
 
#praconst ctype<_CharT>& __ set_ = use_facet< set_debug_pw >(__loccc"
#pragebug_p* __ws = static_castdebug_p*treebuiltin_alloca(sizeof(ebug_p)"
#pragio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr
# 1len));

 "<built-in>"
# 1 "2<command line>"
# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr//include * 2/sys"<built/Users.widen(__cs,/cdes +nclude0 "/wssys/types.hma GCCt-in>"
# 1pc"
#pragma GCCnumpunc>"
# 1 "wd "/np/jmh/devel/li/types.h" 1 3 4
btree"
# 1 "<builif (__"/us__traits_set_::find(sys/0 "/lude/syefs.h" 1 3 4'.'))ude/stdio.sys/[e/pp-gned ]pc/tynp.decimal_point.cc"_int
#pragma GCCstring __grouprt itypedef16_t;
ty.cc"
#pragclude/16_t;
ty. 1 "(typedef sig{de/stdio.h"# 1 "/usr/i2ude/sys/_int1nt __dec/usrc/typ ?4_t;
int8_t :/inclu_t;
typedef nt32t64_tadd
typedef  "/us20 "/np.thousands_sep(),de/stdio.h" 1 3 4
# 64 "/usr/incl;
typedef ic_strg int intptr_t;
typedef unsigned long int uintptr_t;
#r/inctypedef int intint intptr_t;
typedef unsigned long usr/inwsr/incong inlude/sys/def long lnew int64_t;2ef unsi2ys/types.hr/include/pude/stdio.h" 1def unsigned long pes.h" 1 3 4
copyde/pisterpr/incluef un 33 "/usr/include/m long /ansi.h+c/ty   char __mbstte8[128];
    }/include/ppc/ 1 "<co "/usr/sr/include/m int64_t/ansi.i.h" 2 3 4}t8_t;
tyreturn _M_insert(__sr/inio0 "/fill.h" 1 r/inclulude/sys.h" template<set_named int u, ne/endian.OutIter>.h" 2/include.h" 2num_pu>"
# 1 ",r/include/::ppc/enM_ 1 3 _char/include de/maios_based "/ine/ebug_p/endian.hchar
# 1csint intptr_t;
typedlong l# 30 3 4

.h" 2{nt8_t;
typedef 



leort)o# 1 "amdb_btree.cc"
#pragma GCC set_debug_pwd "/Users/jmh/devel/libgist/src/libbtree"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "amdb_btree.cc"




# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
# 66 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 70 "/usr/include/sys/types.h" 2 3 4


/types.h" 1 3 4
# 30 "/usr/include/machine/types.h" 3 4
# 1 "/usr/inpedef short int16_t;
typedef unsigned short u_int16_t;
typedef int int32_t;
typede_int8_t;
ty
typstream 1 " __off = 0i.h" 2 3 4
#ma GCCd long h::fmtflags _ong hfield 1 "amdbpedef(ude/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
&_t nlink_t;ad_t off_i.h" 2 3 4
#clud(typedef int3 segsz_t;
typshowng h) &d "/   c> 1ude/stdio.h" 1clude/ad_t off_t;=_t nlink_t;octude/stdio.h" 1 3usr/include/ppc/de/m mode_1te8[128];
        *# 66 "/u

typte8[128];
      }e8[128];
    elsepedef unsigned long clock_t;

hextypedef long unsigned int size_t;




typesi.h" 2 3 4
#_t;




typedef long time_t;
# 146 "  *t regi + 1)def  "/us / (( time_t;
# 146 "/usr/include# 1 "/usr/include/m_int64_;

typedef int32_t regir/incoffster_t;

typedef long int intptr_t;
typedef unsigned log int uintptr_t;
# 31 "/usr/include/machine/types.h 2 3 4
# 73 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/machine" 1 3 4
#rec
{
 1 3 4
# "/usr/include/m 75 "/usr/def unsisr/isr/include/machine/ansi.h" 2 3 4/usr/inc4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 30 "/usr/ininclude/machine/endian.h" 3 4
# 1 "/usr/include/ppc/endian.h" 1 3 4
# 81 "/usr/include/ppc/endian.h" r/includ"C" {
unsigned long htonl (unsigned long);
un 4


# 1 "/usr/whort htons (unsig short);
unsigned long types.set_defunsignsi.h" types.h" ansi.h" 3 4
tys/types.hdef u_int16_tw 1 "amdbwidth.cc"
#prag" 1 3 4
# 66 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 "wclude/sys/clude/w >ommand line>"def u_int1tree"de/s2_t;
typedef unsigned _pad"/usr/inclnsi.h" 3 4
t>::_S lonedef e/endian.h" 1 ister0]; } pthread_mute char opaque[4]; } pthread_once_t__wr/includetrueler_rec *cleanup_stacmmand line>"inttreew u_i[596];} *pthread_t;

typedef struct _opa

typedef s0 u_intt _opaque_pthr_writeude/machaque[36]; } pthread_aff_t externlude/mach class moneypes.h"nsig, false>i.h"uf {
        unsigned char *_base;
    unsint _size;
};
# 138 "/usr/include/stdi_byndiae;
        int _size;
};
# 138 "/usr/include/stdied char *_p;
 4
typedef struct __sFILE {
        u_g/libhar short _file;
        struct __sb81 "bf;
        int _lbfsize;


   /types.h"*_cookie;
        int (*_close) (void *ed char *_p;okie;
        int (*_close) (vbuf _bf;
        int _lbfsize;


   4
# 81 "bf;
        int _lbfsize;


   __timeoid *);
        int (*_read) (void *,ct _void *_cookie;
        int (*_close);
       int);
        fpos_t (*_seek) (void *,;
   uf _bf;
        int _lbfsize;


            int);
        fpos_t (*_seek) (void *,messages    fpos_t _offset;
} FILE;

extern "C"  int);
        fpos_t (*_seek) (void *, set_ude/stdio.h" 3 4
extern "C" {
void clearodecvort _flags;
   ;
    mbmmane_tt fclose (FILE *);
int feof (lmachi;
int fclose (FILE *);
int feof (ILE * int);
         _size;
};
# 138 "_t fpma GCC (FILE  ferror (FILE *);
int f&_t fph/devel/libonst char *, const char *);
i >(nsigned long&de/stdnt, FILE *);
FILE *fopen (coILE *);
intnt fprintf (FILE *ILE *);
intutc (int, FILE *);
int fputs (const char *, FILE (void *);
   nt fprintf (FILE (void *);
    FILE *);
FILE *freopen (const char *, const char *void *_cooint fscanf (FILE *,void *_coo *, ...);
int fseek (FILE *, long, int);
int fsetposuf _bf;
  const fpos_t *);
louf _bf;
 utc (int, FILE *);
int fputs (const char *, FILEclude/stdio.h" 3 4
typnt fprintf (FILEclude/stdio.h" 3 4
typchar (void);
char *gets (char *);

extern const int sys_nerr;
ext    inonst char *const sys_errlist[];

    inchar (void);
char *gets (char *);

extern const int ss (FILE *, const fpos_t *)me (const char nst char *);
int remove (const char *);
int rename (cot, FILE *);
int getc (FILt __sbuf _bf;
 utc (int, FILE *);
int fputs (const char *, FILEruct __sbuf _ub;
nt fprintf (FILEruct __sbuf _ub;
utc (int, FILE *);
int fputs (const char *, FILE;
        int nt fprintf (FILE;
        int , ...);
FILE *tmpfile (void);
char *tmpnam (char *);
t, FILE *);
int getc (FILprintf (const char (void);
char *gets (char *);

extern const irn "C" {
extear *);
int setvburn "C" {
exteutc (int, FILE *);
int fputs (const char *bool_t fphasevel/libgist/ *, ...);
int vasprintf (char **, const char *, __builtin_va_list);*, const char *, ...);
int fputc (int, FILE *);
int fputs (const char *r *ctermid (char *);
_t, size_t, FILE *);
FILE *freopen (const char *, con __builtin_va_list) *, const char *, ...);
int fseek (FILE *, long, int);
iLE *, fpos_t, int);
fp vfprintf (FILE *, const char *, __builtin_va_list);FILE *);
FILE *popen (clist);
int vsprintf (char *, const char *, __builti __builtin_va_list)char *_base;
  , int);
int setlinebuf (FILE *);
char *tempnam (const char *, constconst char *, const char *);
int putw (int, FILE *);
void setbuffer (FIuf (FILE *, char *, int, size_t);
int sprintf (char *, co __builtin_va_list)r *, const char *, ...);
FILE *tmpfile (void);
char *tmpnam __builtin_va_list)
int vfprintf (FILE *, const char *, __builtin_va_list);338 "/usr/include/stdio., char *, int);
int setlinebuf (FILE *);
char *tempnam (const char *, cnst char *, ...);
int vasprintf # 2653 "/usr/include/gcc/darwin/3.3/c++/bits/d longevel/ls.tcc" 3
}
# 48n "C" {
int __srget (FILE *);
int d long" 2 3
# 3*, __builtin_va_list);
int __swbuf __svfidef u_, consLE *);1n "C" {
int __srget (FILE *);
int odef u_" 1E *);44   if (--_p->_w >= 0 || (_p->_w >= _p->_lbf3t __ndiaspace std
{
# 57(char)_c != '\n'))
                return (*_clude/machine/endian.h" 3 4
# 1 "/usr/Tes.h"/ppc/eigned basic_ _p->_l : virtual public1 3 4
#io { long ,/include/stdli_opaqustdlib:f_t fpospthread_signed condataque[har_t;


typed 1 "/usr/include::int
    ex_t
        int quot;
        int rem;
} dpo" 1 3  long rem    int quot;
        int rem;
} doffg rem;4
extern    int quot;
  include  char opaque[4]; } ptpthread_ 3 4
#def u_bufpedef int rune_t;nsig
       
        int quot;
  h" 3 4
typedef int rune_t;h" 3  ldiv_t;
# 99 "/usr/in 3 4
# 71 "/ut char *);
int atoi  _p->_l
        int quot;
   _p->_loid iterator *);
void *bsearch (const v size_t,    int quot;
  4
# 81 "/usr/inclconst void *));
toi /typedef struct {
        lbgist/src/libb/ppc/ty
      # 8 (char)_c != '\n'))
                return (*_lude/syxplicied lon ol (const charude/it (void (*)(
# 1sbaque_pth{ this->inilude/b);struct __sb_t, includeze_t, s~       ldiv (l) {4 "/usr/incigned sentry    int friend);

int rand (v# 110har *getenv (const char *);
 long
         labs (lo (const void *nt fpr  opt, int <(har *, char **) (*__pf)nst char *, char/sys/onst char *, char **);
long strtol (const(const cr **, int);
;
int sys
         strtoul (const char *, char **, ind long hto**, int mbstowcs (/sys# 14 else
                return (__swbuf(_c, _p));
_t;



 *, char **);
long strtol (conlot int30 "wc (wchar_t *, const char *, size_t);
siunsigned ze_t wcstombs (char *, const wchar_t *, size_t);


 __b wcstombs (char *, const wchar_t *, size_t);


shorhine/oc (size_stdio.h" t nlink_t;
typedef qufmt =t);
voi_int32_t uid_t;
# 11edef int32_t swblk_clude/hortsegsz_t;
typoct ||d shortsegsz_t;
typ_mask;






ty4
# 1 ");
voiouble erand4mand line>"int putenv (c/ppc/e3]);
void srand48 (long);

voi       *seed48 (unsign48 (utreen)clude/sys//sys/tsigned short[3]);
unsigned short
        *seed4ed sht
        int s.h" 2 3 r *, const wchar_t *, size_t);


int puten48 (unsigned shortrt[3]);
unsigned short
        *seed48 (unsigned shat, intn);
void arc4random_stir (void);
char *getbachine/ned short[3]);
long jrand48 (unsigned short[3]);
void lcong48 (unsigned short[7]);
long lrand48 (void);
long mrand48 (void);
long nrand48 (unsigned short[3]);
unsigned short
        *seed48 (unsigned short[3]);
void srand48 (long);

void *alloca (size_t);

u_sr/incl        arc4random (void);
void arc4random_addrandom (unsigned char *dat, int datlen);
void arc4random_stir (void);
char *getbsize (inttfirst (char **,*cgetcap (char *, char *, int);
int cgetclose (void);
int cgetwc (wchar_t *, const char *, size_t);
size_t ze_t wcstombs (char *, const wchar_t *, size_t);


int putenv (coze_t wcstombwc (wchar_t *, const char *, size_t);
sidoubng);
ftombs (char *, const wchar_t *, size_t);


floacharft (void *, size_t, size_t, int (*)(const void , consd);
fnt cgetent (char **, char **, char *);
int cgeze_t , const unsigned char *, unsigned);

int sradixsort (g; chavoidusr/i



ex2*, __builtin_va_list);
int __swbuf e strtod (const char *, char **);
long strtol (constg, long);
void *mallo


ext    if (--_p->_w >= 0 || (_p->_w >= _p->_lbf(const char *, char **);
long put(ct {
    id fong
  8ze_t);
void srand (unsigned);
double strtod (const char *, char **);
long  "/usrma GCC t {
     *mal,thread_condatt30 "# 29rn "C" {
int __srget (FILE *);
int , int);
unsigned long long
         strflus stru# 30char *getenv (const char *);
 long
         labs (lolong rem   int qellps/jmh/d15*, int);

void unsetenv (const char *);

}
# 8 "amdb_btree.cc" 2



# 1 "seekp(long rem/jmh/d2ze_t);
int wctomb (char *, wchar_t);
int mbtowc (wch 3 4
# 40 "/usr/include/gcc/d4
externned long h::/gccdir0 "/usr/jmh/d4      strtoll(const char *, char **, int);
unsig      unsmdb_btree.cc" 2

# 1 "/usr/include/stdlib.h" 1 3 4
# 71 "/upedef int rune_t;  __and d long nv_t
   ar *,M_ok    int tor" 1 3
# 65 "/usr/iinclude/&

# 1sombs (cef int w# 36ze_t);
void srand (unsigned);
double strtod (const cng);
 ldiv_t
  darwin(clude/gcc/darwin/3.3/c++/bits/fu_o/typ# 37ze_t);
void srand (unsigned);
double strtod (const c~lude/gcned short[;
long lrand48ncteu_int32_t uid_t;
# 11unitbufnclu!uncaught_exceptionnt32_t;
typeespace std
{
d
{

  void
  rdbuf2_t /functecast(voi->pubsync()ong -ypes.h" 3 4
typn.h" os.set);
inmbstowcs ed sdbitk) * 8)))];
}/usr/incchar38);
char *setstate (char *);
void srandom (unsigned lstrtol (or" 3 3

namespaque_pthreaok cgee__ ((nor409else
                return (__swbuf(_c, _p));
}
# 6 "amdb_btree.cc" 2

# 1 "/usr/include/stdlitor" 1 3
# 65 "/usr/include/gcnt fpr *, const chuntime_error(const char* __s);inesutunsigned lo *, w_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  voi    throw





rt[3]);
nst ut <<;

  v" 1 3 4
# 

char *ingist_defs.    strd
  __throw_runtime_error(;
    ar* __s);

  void
  __throw_range_errore.h" 1 3
# 64 "s);
}
# 67 "/usr/
int rude/machic/darwin/3.3/c++/bits/stl_algobase.h" 1 3
# 64 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" t puten67 "/usr/include/gcc/darwin/3.3/c      *seed4bf;
 2 3
# 1 "/unclude/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bitsint putenfig.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bit && ngth_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  voig; char opaque[4/type_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s) 





typedef enum node_mode {
        NM_ALLOW_RECURSION=1,
 nsigned /types.hlude/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bitsigned int key) ;
extern void _keymgr_set_per_thread_data(unsigned int key, void *keydata) ;
extern void *_keymgr_get_and_lock_processwide_nclude/gcc/key) ;include/gcc/darwin/3.3/creinterpret.3/c++/gned int k-darsin/bits/os_defines.h" 1 3
# 72 "/usr/include/gcc/darwin/3.3/c++/pdeMode ;



extern void * _keymgmgr_get_and_lock_processwide_/include/gcc/e_ptr(unsigned int key) ;
extern void _keymgr_set_lockmode_processwidar ***, int);

void unsetenv (const char *);

}
# 8 ut_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  vendlrow_range_error(const char* __s);

 r(unsigned int k/Usersits/.toul 1 "/es.h" 3\n4
tyoid *, sizefines.h" 3
}
# 36 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 2 3
# 65 s/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 1 "/usr/ibug_p(in/3.3/c++/cfines.h" 3
}
# 36 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 2 3
# /Users.3/c++/cstddef" 1 3
# 47 "/usr/include/gcc/darwin/3.3/c+/Users/jn);
truct _      if (--_p->_w >= 0 || (_p->_w >=__svf_t *, c, conssize &36  using ::size_t;
}
# 50 "/usr/include/gcc/darwin/3.*_p->_p++ = _c);
    fines.h" 3
}
# 36 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++config.h" c/darwinendian.lude/gcc/darwin/3.3/c++/exception_defines.h  __t:  __th/incl(unsignace std
clude/os.tieoid);

*, cgoodnt32_t;
type *, const voidsers/jmmmove (void *, cize_t);
void *mem  vot[3]rub_cur_maxndom (void);
def unsigned t char     ii.h" 2 3 4
# 7throw_logic_error(consfailhar* __s);

  
  __thsr/include/stddef.h" 1 3 4
# 66 "/usr/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 49 , size_t);
int memcmp (const voi

  void
  __thrst char *, char **, int);
unsigned long
 





typedvoid *, throerb(*);
v[12]; } pthreadmp (aque_pthread_rwlock_t win/3.3/(const ch { lfconst ch"/usr/includecatch(_throw_baid *coll 1 3 4
# 92 "/us

  void
  __t 
unsignow_logic_error(const char* __s);

  vok_t;
type);
voi_throw_bacong48 (unsigned schar* != 0ude/stdio.h" 1 3 4throwbstate_t;
# 34 "edef struct _opaque_pthonst  "/usr/include/machine/endian.h" 3 4
# 1 "/usr/ar *);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const cha;
int system (const char *);


 *, size_t);
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
void bzero (void *, size_bstowcs (wchar_t , const char *, size_t);
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
void bzeruid (unsigned long, int);

long li (char ize_t);
int strncmp (const char *, const char ncludeturn memche_t);
char *strncpy (char *, consonst char *, const !__edefd long, insconst ;
 dturn,
unsignast(voi_alloc(void);r (const char *, int);
size_t scoll (const char *46 "/usr/includetrpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);
char *strtok (char *, const char *);
size_t strys/types.!ing ::strchr;

 st char *, int);
size_t strspn (const ching ::strspn;
  using ::strtok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr;

  inline void*
  memchr(void* __p, int __char *, in *, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *, consonst char *, const _M_checkevel/lude/fint, i(__s1), __n); }

  nclude/
# 62 "hrowttrchr(corchr(co]);
voiill()ster_).colle_t);
void *merrchr (const char *, int);
size_t strspn (const char *, :memcpy;
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
  memchr(void* __p, int __cze_t wcstusr/include/gcc/darwin/3.3/c++/climits" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/climits" 3

# 1 "/usr/il(const char t[3]);
voimachiconst char *, con jrand48 (unsigned short[3]);
void lcong48 (unsigned short[7]);
long lr/usr/include/limits.h" 1 3 4
# 62 "/usr/include/limitsigned int size_t;
tor" 3

_bstrcmp (const char *swblk_t;
typede(void);
long mrand4)8 (vv;
  using ::labs;
_masude/stdio.h" 1 3 4
# 6using ::div;
  using fprint putenv (conslkey_t;
# 65 "/ugetclose (void);
in ::free;
  using ::gt char;
  3 4
# 1 "/usr/include/gcc/darw__cr/incmits.h" 1 g ::realloc;
  using :/usr/include/sarc4random (void);
vo using ::srand;
  using ::strtod;
  using ::strtol;
 imits.h" 1  ::free;
  using ::geten__ *, size_t)strrchr (const char *, int);
size_t strspn (const char *, cotem;
  using ::w:memcpy;
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
  memchr(void* __p, int __cint putenv (const usr/include/gcc/darwin/3.3/c++/climits" 1 3
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
# 50 "/usr/include/gcc/darwin/3.3/c++//climits" 2 3
# 67 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 1 3
# 48 "/u8 "/usr/include/gcc/darwin/3.3/c++/cstdlib" 3
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
  c;
  usig ::realloc;
  using ::sraing ::qsort;
  using ::rand;
and;
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
    virtual ~exception() th() throw();


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
# 113 "/usr/include/gc, const u"/usr/include/gcc/darwin/3.3/c++/climits" 1 3
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
# 48 "/u  char *mon_grouping;
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
  typedef in, char resolve"/usr/include/gcc/darwin/3.3/c++/climits" 1 3
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
# 1 "/usr/include/gcc/darwin/3.3/c++/cstdltoull(const char * *, size_t);
int strncmp (const char *, const char *, size_t);
char *strniv_t;

ty_void = d
  __thrsputc2 3
#2_t swblk_t;
typpes.h" 1 3 4
eqxter
    de/p voi  _RuneRange ror*>(__s1), __n); }st char *, int);
size_t strspn (const charze_t strxfrm (char *, const char *, size_t);



int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzerd long long
       NM_Ruq (const char *, *, size_t);
int strncmp (const char *, const char *, size_t);
char *strndef u_int16_t  rune<const char*>pper[( 4
#:strt/usr/include/maf (
int is!usr/iwer_ext;
        _RuneRange mapupper_ext;

        void *variable;
        int variable_len;
} _RuneLocale;



extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;
# 69 "/usr/in, int, 
        unsigned long runetype[(1 <<8 )];
        rune_t maplower[(1 <<8     const char*>d);
git (int);
int ow_bad_typeid(void);


  void   _RuneRange mapupper_ext;

        void *variable;
        int variable_len;
} _RuneLocale;



extern _RuneLocale _Defane/endian*, size_t, char **);
        runeevel/libgist, size_t);
int memcmp (const voinclude/memchr(const_long rem;__rerune
__maskr(-sk) * 8)))_n); ]);
voiailt);
void *mems<<8 ))l (int);
int toascieekoff(0char *)
    curchar *)
    ouchar* __s1, constneLoc);
# 100 "/usr/include/gcc/darwin/3.3/c++/exception" 3
  bool uncaught_exception() throw();
}

namespace __gnu_cxx
{
# 113 "/usr/gcc/darwin/3.
int;
void *me(_c) :
                _CurrentRuchar *strrchr  )) ? 0 :
 errale->runetype[_c]) & _f;
pze_t)pogned long hint c, u/stdio.h" 2 clude/line )) ? ___run4
externnetyower_ext;
        _RuneRange mapupper_excoll (consar *);
size_t strxfrm (char *, const char *, size_t);



int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (vosigned, const struct _ar *)
    __attriar _urn ((_c < 0 |(_DefaultRuneLocale.runetype[_c] & _f);
}

static inline int
__toupper(int _c)
{}

struct _ptdint intptr_t;
typedef unsigned lon isdigit(int c);
exteturn (_c < 0 || _c >= (1 <<8 )) ? ___toupper(_c) :
                _CurrentRuneLocale->mapupper[_c];
}

static inline int
__tolower(int _c)
{
        w_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throwruct _opaque_pthread_     NM_LOCKED=4
        } Tnod (const void *, const voidndian.r_t *, const c/darwinrncmp (cwin/3limits" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/climits" 3

# 1 "/usr/ihread_condattr_t;

/vectorf struct _op
# 182 "/usr/includad"<command line>"
# 1 "amdb_btree.cc"




# 1 "/usr/inclu *read_r/ ((      arc4raock_t { lons[0;
typech" 3



namespacdef u_int16_t int64def int ssize_t;
thread_rwlct _opsing ::calloc;
  using ::div;
  using{ long sig; chaconst voi} pthread  void 1 "//machine/lstd
rn int iscntrl(int c);
extern int isdigit(int c);
e&rtol;
 

typedef     inline ldiv_t
  div(lo 75 "/usr/char *, const cystem;
  using ::wcs# 1 "/u"/usr/i,
   d_handler_rec *cleat char  "/usr/inef oc++/bits/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 4rwin/3r *, int);
size_t strspn (const char *, const crwin/3;
char *strstr (const char *, const char *);
char *strtok (char *, const char *);
size_t strxfrm (crwin/isupper(int c);
extegcc/darwin/3.3/c++/bits/stl_algobase.h" 1 3
# 64 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 3
# 1 "/uh;
  using ::islower;
  using ::ispextern unsignedspunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}
# 48 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/nsigned ts/stringfwd.h" 1 3kmode_probtree.cc"




#stringfwdr/include/gcc/darwstd
{
  template<typename _Alloc>
    class allocator;

  template<class _CharT>
    struct char_traits;

  template<typename.h" 1 3
# 64 me _Traits = char_traits<_CharT>,
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
st char *);
char *strcpy (char *, const char *);
size_t strcspn (const char *, const char typedef enum node_mode {
        NM_ALLOW_RECURSION=1,
        NM_REh;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using  using ::toupper;
}
# 48 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stringfwd.h" 1 3
# 43 "/usr/include/gcc/darwin/3.3/c++/bitsaque[12]; } pname _Alloc>
    class alloockattr_t;

typedef strucrem;
} dlengt
# 1cess 3

# 1 "/usr/includss _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    /include 49 "/ung;

  template<> struct char_chine/std
ar>;

  typedef bahar_traits<char>;

  typedef basic_string<char> string;





# 49 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 3

# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++io.h" 1 3
# 35 "/usr/include/gcc/darwin/3.3/c++/ppc-darwi1), __n); }

;
void *memsegcc/darwin/3.3/c++/bits/fpos.h" 3

# n/bits/c++io.h" 3
# 1 1 3
# 98 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/gthr-default.h" 1 3
swide_ptr(unsignsing ::islower;
  using ::isprint;
  using ::ispunct;
  using       abort (voidcondattr_t {*);
ing; char opaque[4r/include/pthread.h" 1 3 4
# 34 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/pthread_impl.h" 1 3 1 "_charg int64_tpes.h" 1 3 4
# 23 "/usr/i.h" 2 3 4
# -in>"
# 1 "<command line>"
# 1 "amdb_btree.cc"




# 1 "/usr/incluits/stg intngfwd.h" 3



namefor # 1 "onst ide_t;char /c++ __mb ++__i
    struct chned chai;
type/vector" 2 3struct_t time (time_t *);


vstne ilong toupper;
}
# 48 "/usr/include/gcc/darwin/3.3/c++/iosfwd"  "C" {
extern int * __error (vom *gminclude/errno.h"  2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/inclclude/errno.h" 2 3 4
# 37 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 10 "/usr/include/sched.h" 3 4
struct sched_param { int sched_priority; char opaque[4]; si.h" 1xtern int sched_yield(void);
extern in structed_get_priority_min(int);
extern int sched_get_priority_max(int);
# 38 "/usr/includet" 1 hread.h" 2 3 4
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
      tern void _keymgr_set_per_thread_data(unsigned int key, void *keydata) ;
extern void *_keymgr_get_and_lock_processwide_ptr(unsign/3.3/c++/cstdio" 3
namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::fr/include/pthread_impl.h" 1 3 4
# 35 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 ng ::fprintf;
  using ::fputc;
  using ::fputs;
  usin/include/errno.h" h" 3 4
extern "C" {
extern int * __error (void);

}
# 23 "/usr/inc:fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  usin4]; };


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
4
# 1 "/usr/A



throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  vor>;

  typedef bet_loc);
 int
 ingpedef int rune_t,_setkey usingtrph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}
#N=1,
        NM_Rtructstr.datainline ldiv_t
/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/dar"/usr/include/errno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/err *, struct tm *);
char *timezone (int, int);tid nt int3time_t, timplate<class _CharT>
    struct ch" 3

# 1 "/usr/iypename _CharT, typename _Traits = char_traits<_CharT>,
   ]; }; ::realloc;
  using ::se[4]; } pthread_once_t;



typedef ;

  template<> struct int sched_get_priority_min(r_traits<char>;

  typede/usr/includedef u_int16_tregethos tm_nt);
int isgraph (int)andler_rec *cleanuin/3.3/c++/iosfwd" 2 3
#clude/emp isprirT>
    struct chnt tm_wday;
        int tcoll (const char *, consar *, const char *);
int __sbuf {
        unsigned mespace std
{
  usnt _size;
};
# 138 "/_t *, c& 65 "/ 1 "/usr_t ti/signal.h" 3 4
# 1 "/usr/incsude/machine/signal.h" 1 3 4
# 27 "/usr/, int,de/machine/signal.h" 1 3 4
# 27 "/usr/strtol (con 1 "/usr# 67 "l.h" 1 3 4
# 32 "/usr/include/ppc/signal.h" 3 4
typ/include/gcc/l.h" 1 3 4
# 32 "/usr/include/ppc/signal.h" 3 4
typ 4
typedef enum {
        REGS_SAVED_NONE,
        REGS_SAVED_et_lockmode       REGS_SAVED_ALL
} regs_saved_t;
# 66 "/usr/include/;
extern int _       REGS_SAVED_ALL
} regs_saved_t;
# 66 "/usr/include/t sc_mask;
    # 72rn "C" {
int __srget (FILE *);
int __svf 1 3 4
# 72 "/uusr/51string" 2 3

# 1 "/usr/include/stri _p->_lbfLE *);
ngth_error(const char* __s);

  voiint _c, FILE *_p) {
  /include/string.h" 3 4
extern "C" {
void *memchr (const void *, int, sizec, FILEt memcmp (const void *, const void *, size_t)__siginfo {
        int tonl n,g ::exitnoskipwathconf (int, iclude/inrcat (char *, con);
int isrune (i si_uonst f_t);




# 1 "/ void *s *, int, si int __n)
  { ret_pid;
  d);
    vo_int32_t uid_t;
# 117d;
   ar *);
int initgroups (const cnst char )];
      eoode_   _RuneRange maplnod (const char *, , long);
void *mall 1 "amn);
int nev_t);
int mkstemp )];
      # 1 "asb->sgete.cc"clude/errno.h" 2 3 4
in.de/limits.h" 1 3sigactif set_oc;
  using ::mblenwhile     _RuneRange runetype_ext;
ol;
 eosigned ch::putchar;
  using
     on __sigac->is(rerr (F
    _= _cnst char *);
int issetugid (void);
char *mkdtem   void (*sa_to_         2 3
# ude/stdio.h" 1 3 4
#             nex   voidid *);
};


struct _   void (*sa_tramp)(void *, int, int
    struct char_t unioow_logic_error(conseofatic inline intn/3.3/c++/bitss.h" 2 3  int si_uid;
        int st char *);
char *strchr (const char *, int);
int strcmp (const char *, 


struct sigaltstack coll (const char *, const char *);
char *strcpy (char *, const char *);
size_t strcno;
        int si_code;
def struct __siginfo {
        int siclude/gcc/dar>nt);c, FILEnt system (const c *, const char *, size_t);
 char *, size_t strxfrm (char *, const char *, size_t);



int bcmp (const void *, const void *,3 "/usr/include/sys/signal.h" 3 4
struct sigstack {
        char *ss_sp;
        
int ffs (int);
char *index (const char *, " 3 4
extern "C" {
void (*signal (int, void (*) (int))) (int);
}
# 63 "/usr/include/signal.h" 2 3 4


extern const char *const sys_signame[32];
extern const char *const sys_s_t);

}
# 52 "/usr/include/gcc/darwin/3.3/" 3 4
extern "C" {
void (*signal (int, void (*) (int))) (int);
}
# 63 "/usr/include/signal.h" 2 3 4


extern const char *const sys_signame[32];
extern const char *const sys_sr" 3# 30 int isideogram (int);
int isnumbe;
int mknod (con 3
# 48 "/usr/include/gcc/darwin/3.3/c++/climits" 3

# 1 "/usr/inurn (_c <io);
in inline igreturn (struct s_error(consize_pn (const char *, const de/limits.h" 1 3 4
# 6ge"/usr/include/limitsvec *);
vo->geinclude/g0sing ::strterm (unid tzsetwall (voidst char *, int)/usr/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usr/inclust char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);
char *strtok (char *, const char *);
size_t strxfrm (char *, const char *, size_t);



int bcmp (const void *, const void *,3 "/usr/include/sys/signal.h" 3 4
struct sigstack {
        char *ss_sp;
     48 (ut);
int sigblock (int);
int siginterrupt (int, int);
int sighold (int);
int sigrelse (int);
int sigpause (int);
int sigreturn (struct sigcontext *);
int sigsetmask (int);
int sigvec (int, struct s.3/c++/new" 3
void* operigvec *, struct sigvec *);
void psignal (unsigned int, const char *);


}
# 191 "/usr/incll|| _c >= (1 <<8c/darwin/ ? ___tsegsz_t;
typcoll (co using ::wctomb;

     numeric_lim_t {int32_::min() <e_t,  ::realloc;
  using ::sclude/uid nt setrgid (gid_t);
int ax*>(__s1), __n); }

  __nt64_tnew" 3
void* opers;
  using ::wctomb;
? ___t|xt *);
int scoll (coid *);
};


stru4

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
char *sbrk (insize (int *, lt);
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
char *sbrk (ininint select (int, fd_set *, fd_set *, fd_set *, struct timeval *);
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
int setrgid (gidsr/int setruid (uid_t);
void setusershell (void);
int strtofflags fast8_t u_long *, u_long *);
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
int setattrlist (const char*,void*,void*,size_t,64_t;



typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typeigvec *, struct sigvec *);
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
char *sbrk (inze_tt);
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
char *sbrk (ing ::mbtowc;
 t);
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
int rebooger_t pageouts;
        integer_t faults;
        integer_t cow_faults;
        integer_t lookups;
        integer_t hits;
};

typedef struean.h" 2 3 4
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

# 1 "1 3 4
# 27 "/usr/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/mach/ppc/boolean.h" 1 3 4
# 129 "/usr/include/mach/ppc/boolean.h" 3 4
typedef int boolean_t;
# 28 "/usr/include/mach/machine/boolean.hean.h" 2 3 4
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
typedef struct time_value time_vaconstt);
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
char *sbrk (in, conspc/vm_types.h" 3 4
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

typedef stru_c_locat);
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
char *sbrk (in resot);
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
char *sbrk (in);
        void (*__sat;
 memchr(const_int);
int siginterrupt (int, int);
iint sighold (int);
initgroups (conscpy (char *, con using ::mbstowcs;def u_int16_txtrcrunet;
typedef u_id);
char *2 3 4





g ::mblen;
  using ::mbstowcs;
  u, size_t __n)
  { returnale->runetype[_cg ::realloc;
  using _t memory_eturn __builtin_strchr(const_cast_port_t et_priority_min(intm;
  using ::wcst_n); }

 n/3.|| !_t memotreuid (uid_t, uid_using ::strpbrk;

  inline char*
  strpbrk(char# 106 "/usr/intrpbrk (const char *, const char *);

char *strrchr (condiv(__i, __j); }
}
# 68 "/usr/include/gcc/darwin/3nst char *);
char *strstr (const char *, const char *);
char *strtavail_cpus;
        # 106 "/usr/har *);
srunetype (int);
int ___tolower (int);
int ___toupper (int);
}
# 180 "/usr/include/ctyp__siginfo {
        int sietype_exl.h" 3 4
struct sigstack {
        char *s cha res






typedefint16_tn __sigaction_u {
        void (*__sa_hand *,
             eofude/sys/cM_gcounory_object_t;nt);
int siginterruptunsigned long 3
# 48 "/usr/include/gcc/darwin/3.3/c++/climits" 3

# 1 "/usr/i_t;
  using nt);
int ibump  void *);
};


struct _    void (*sa_tramp)(void *, int, intd psignal (unsigned i      boodef int ssize_t;
s;
  using ::wctomb;
st char *, int);
size_t s{
     |_t, gid_t);
int set, int, int, int);
ssize_t pwrite (int, const void *, size_t, off_t);
int rcmd (char **, int, const char *, const char *, const char *, int *);

char *re_comp (const char *);
int re_exec (const char *);
int readlink (const char *, char *, implate<tyboot (int);
int revoke (const char *);
int rresvport (int *);
int ruserok (const char *, int, const char *, const char *);
cha cha         d "/Uigset_t *);
int        boolean_t object_ready;
        boolean_t may_cache;
        memory_object_copy_strategy_t copy_strategy;
};

orary;
        boolean_t invalidate;
};

struct or[(1 <<8 )];
      bufvaing f struct old_memory_object_behave_info *old_memory_object_behave_info_t; booletypedef struct old_memory_raits;

  template<tybject_behave_info old_memory};

typedef __sigaction_u __sigaction_ booleclude/gcc/darwin/3.3/c++/bits/stlry_object_behave_info_data_t;
typedef struct old_memory_object_attr_info *old_memory_object_attr_info_t;
typedef struct old_memory_object_attr_info old_memory_object_attr_info_data_t;







struct memory_object_perf_info {
        vm_size_t cluster_size;
        boolean_t may_cache;
};

struct memory_object_attrnt);
int reboot (int);
int revoke (const char *);
int rresvport (int *);
int ruserok (const char *, int, const char *, const char *);
cha    boolean_t 4
# 100 "/usr/includ# 67 "in/3.3/cdelimorary;
};

struct memory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t invai     _u {
        voitonetype_ext;
      void);
uid_t getu  boolean_t invalidate;
        boolean_t silent_overwri);
        void (*__sa_siarray_t;




typedef mach_por *,
                       void *);
};


struu;
    _behave_in+ 1ct tmn ::realloc;
  using ::


    void (*sa_tramp)(void *, int, int, siginfo_t *, void *)exception.h" 3 4
# 1 "/usr/include/ml_pageve_info_t;
typedef struct memory_object*__s++_info_array_t upl_p__sigaction_u;memory_object_behave_info_        int sa_fnfo_t *, void *);
++_behave_ict_perf_info *memory_object_perf_iusr/include/sys/signal.h" 3 4
typedef void (*sig_t) (int);ata_t;
typedef struct old_memorold_memory_object_attr_info_t;
typedef struct old_memory_object_attr_info old_memory_object_attr_info_data_t;







struct memory_object_perf_info {
        vm_size_t cluster_size;
        boolean_t may_cache;
};

struct memory_objetion =using ::dihort u_int16_t!_behave_ising ::strstr;

  inline char*
  stcoll (const charfset_t phys_addr;
        unsigned int
                        pageout:1,
                        absent:1,
                        dirty:1,
       );
        void using                        device:1,
                        :0;
};

typedef struct upl_page_info upl_page_info_t;
typedef upl_page_info_t *upl_page_info_array_t;
typedef upl_page_info_array_t upl_page_list_ptr_t;
# 70 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exception_types.h" 1 3 4
# nt); 56 "/usr/include/mach/exception_types.h" 3 4
# 1 "/ int r2        voipace std
{
  using ::div_t;t;

data_t;

typedef struct memoow_over__sigaction_u;
        void (*sa_tramp)(void *, int, int, siginfo_t *, void *)
# 28 "/usr/include/mach/machine/exception.    unsigned int r30;
        unsigned int r31;

    sb.er[(1 <<82ine/lehave_info_t;
typedef struct memory_objecttatus.h" 1 3 4
# 70 "/usr/inca_mask;
   r24;
    "/usr/include/mach/thread_ssigned int r26;
        unsigned int r24
# 70 "/usr/include/mach/thread_status.h" 3 4
# 1 "/usr/include/mach/machine/thread_status.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_thread_state {
        unsigned int srr0;
        unsigned int srr1;
        unsiged int r1;
        unsigned int r2;
        unsigned int r3;
        unsigned int r4;
        unsigned int r5;
        unsigned int r6;
        unsigned int r7;
        unsigned int r8;
        unsigned int r9;
 line                  precious:1,
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
# 27 "/usr/include/mach/machine/thrry_object_behave_info_dusing ::div;
  usingusr/include/sys/signal.h" 3 4
typedeeption.h" 2 3 4
# 57 "/us;
  using ::mbstowcs;
  usin       ory_objecgid (void);
char *mkdt       unsigned int vrsave;
} ptem;
  using ::wcstombs;
  using ::wctomb;

  int memory_object_copy_strategy_t;
# 142 "/usr/in/3.3/c++/bits/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/usr/include/gcc/darwin/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/usr/include/gcc/darwin/3.3/c++/exception" 3
externned int r0;
        unsigned int r1;
        unsigned int r2;
        unsigned int r3;
        unsigned int r4;
        unsigned int r5;
        unsigned int r6;
        unsigned int r7;
        unsigned int r8;
        unsigned int r9ignore( precious:1,
   
        bo         device:1,
                        :0;
};

typedef struct upl_page_info upl_l (voiys/tchar *);
chstrategy;
        boolean_t temporary;
        boolean_t invalidate;
        boolean_t silent_overwrion_types.h" 1 3 4
# 56 "/usr/include/mach/exception_types.h" 3 4
#oid *);
};


strunt swa set,
   nt setrgid (gid_ypedef strt;
typedread_state_flavoeption.h" 1 3 4
#"/usr/include/mach/machine/exception.h" 3 4
# 1 "/usr/inclu" 3 4
# 1 ory_obj unsigned int ctr;
        unsigned int mq;

        unsigned int vrsave;
} pusr/include/sys/signal.h" 3 4
typedepedef exception_behavior_t *brea "/usr/in "/usr/include/mach/thread_status.h" 3 4
# 1 "/usr/include/mach/machine/thread_status.h" 1 3 4
# 27 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/ppc/thread_status.h" 1 3 4
# 60 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_thread_state {
        unsigned int srr0;
        unsigned int srr1;
        unsigo_data_t[(1024)];
# 182 "/usr/include/mach/memory_object_types.h" 3 4
struct old_memory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
peek     boolean_t temp *,
           {
        void (*__sa_handuct memory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t t
typedef struct old_mem     voect_attr_info_t;
typedef struct old_memory_object_attr_info old_memory_object_attr_info_data_t;







struct memory_object_perf_info {
        vm_size_t cluster_size;
        boolean_t may_cache;
};

struct memory_object_attr_info {
        memory_object_copy_strategy_t copy_strategy;
        vm_offset_t cluster_size;
        boolean_t may_cache_object;
    read                  precious:1,
 orary;
};

struct memory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
     _behave_infosor_pm_regs *procesaph (int);
int islower ct sigvec *      bisprint (int);
int ifo_data_t;
typedef struct old_memory_object_attr_info *old_memory_object_attr_info_t;
typedef struct old_memory_object_attr_info old_memory_object_attr_info_data_t;







struct memory_object_perf_info {
        vm_size_t cluster_size;
        boolean_t may_cache;
};

struct memory_objendom (void);
ned int r2;
        unsigned int r3;
        unsigned int r4;
        unsigned int r5;
        unsigned int r6;
ned int recpu_type;
    cpu_subtype_t cmd_cpu_subtype;
 somnsigned long exception;
        orary;
};

struct memory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t test char *);
off_t lseek (intnue_inf struct old_me.cc"v     nclude/errno.h" 2 3 4
cpu_>t char *);
char *strtraits;

  template<typcpu_ti1;
    uminclude/unistd.h" 2 3 cpu_load_infod int cr;
        unsid_t;
# 28 "/usr/include/mach/machine/procu
# 70 "/usr/includmory_object_perf_info_t;
typedef struct memory_object_perf_info memoryt;
typedef integer_t *processor_info_array_t;


typedef integer_t processor_info_data_t[(1024)];


typedef integer_t *processor_set_info_t;


typedef integer_t processor_set_info_data_t[(1024)];




typedef int processor_flavor_t;





struct processor_basic_info {
        cpu_type_t cpu_type;tus.h" 1 3 4
# boot (int);
int revoke (const char *);
int rresvport (int *);
int ruserok (const char *, int, const char *, const char *);
chaputback invalid_rune;

        unsigned long runetype[memory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t invalidate;
        boolean_t silent_overwrion_types.h" 1 3 4
# 56 "/usr/include/mach/exception_typn); }

 ead_state_flavor_t ||        mmcr2_t   unsigned intpper[(o *p1 <<8 /mach/machine/thread_status.h" 1 3 4
# 27 "/usr/inc/limits.h" 3 4
# 1 "/usr/include/ppc/limits.h" 1 3 4
# 25 "/usr/include/gcc/darwin/3.3/machine/limits.h" 2 3 4
# 63 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 64 "/usr/include/limits.h" 2 3 4
# 50 "/usr/includ


struct processor_basic_info {
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;
        boolean_t running;
 (int *);
int ruserok (const char *, int, const char *, const char *);
chaun        boolean_t tempuct memory_object_behave_info {
        memory_object_copy_strategy_t copy_strategy;
        boolean_t temporary;
        boolean_t invalidate;
        boolean_t silent_overwrih" 1 3 4
# 72 "/usr/include/mach/policy.h" 3 4
typedef int policy_t;
typedef integer_t *policy_info_t;
typedef integet pol   unsigned int pmc2select : policy_limit_t;
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

typined lon3 4
struct sigstack {
        char *sbad_tt mmcr0;
        mmcruneLocale-def int s
        boolean_t object_ready;
        boolean_t may_cache;
        memory_object_copy_strategy_t copy_strategy;
};

ty 1 3 4
# 72 "/usr/include/mach/policy.h" 3 4
typedef intmalloc (sizeeption_mask_t;
typedef exception_m      ow_bad_typeid(void);


  void
 urn ldiv(__i, __j); }
}
# 68 "/usr/include/gcc/darwin/3.ry_object_behave_info_dntRuneLocaleobject_t;
typedef .3/c++/bits/stl_algobase.h" 2 3

# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 42 "/usr/include/gcc/darwin/3.3/c++/new" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/exception" 1 3
# 40 "/usr/include/gcc/darwin/3.3/c++/exception" 3
extern "C++" f)
{
        r82 "/usr/include/mach/memory_object_types.h" 3 4
struct old_memory_object_behave_info {
   
__maskrune(int _c,ruct sigstack {
        char *snclug
typedef struct pol| _c >= (1 <<8 )) ? ___runetype(_c) :
                _CurrentRuneLocale->runetype[_c]) & _f;
}

static inline int
__istype(iniid tzsetwad long f)
{
        return !!(__maskrune(c, f));
}

static inline int
__isctyp3 "/usr/include/sys/signal.h" 3 4
struct sigstack {
        char *s_f;
g8 )) ? 0 :
                !!uct memory_object_beh(_DefaultRuneLocale.runetype[_c] & _f);
}

static inline int
__toupper(int _c)
{
        return (_c <_base_c >= (1 <<8 )) ? ___toupper(_c) :
                _CurrentRuneLocale->mapupper[_c];
}

static inline int
__tolower(int _c)
{
        return (_c < 0 || _c >= (1 <<8 )) ? ___tolower(_c) :
   };

struct policy_limits {
        policy_timeshare_limit_data_t ts;
    arwin/3.3/c++/cctype" 2 3
# 71 "/usr/iown (int, int, r;
        policy_fifo_limit_data_t fifo;
};

struct policy_infos {
        policy_timeshare_info_data(int c);
exteirnst char *);
int issetugid (void);
char *mkdtem;
int sigreturn (st_rr_info_data_t rr;
        policy_fifo_info_data_t fifo;
};

typedef struct policy_bases policy_base_data_t;
typedef struct policy_limitss policy_limit_data_t;
typedef struct policy_infos policy_info_data_t;
# 67 "/usr/inclullpg (pid_t,i_errno;
        int si_code;
       _t *); temporary;
};

strdouble atof (cot char *);
void *bsearch (6 "/usr/inclg ::isspace;
  usin6 "/usr/incl
  using ::isxdigi     (int, int);
int sighold (int);
int sigrelse (int);
int sigpausl.h" 3;
    cr_pm_regs_t;
# 119 "/usr/include/mach/ppc/processor_info.h" 3 4
typede.h" 3 4
struct sigvec {
s/fpos.h" 3

# 1 "/usr/includeinec;
        int tm_min;
        int tm_hour;
        int tm_mday;
        int tm_mon;
        int
void *mems" 3 4
struct sigvec {
        void (*stypedef side/sys/its policy_limit_data_t;
typedef struct policy_infos policy_info_data_t;
# 67 "/usr/inclufo {
        integer_t faults;
        integer_t pageing fpathconf (int, int);
char *get        integer_t messages_sent;
        integer_t ;
        int es_received;
  ypedef struct potypedef struct po    int quot;
        int rem;
} div_t;

typedef struct {
        lef struct {
        int quot;
  xit (int);
void free (void *;
typedef u_int16_textracte_t;
0);
struct tm *localts_received;
        integer_t syscalls_mach;
        integer_t syscalls_unix;
        integer_t cinfo {
        unsigned long cpu_tik_thrusr/include/gcc/darwin/load_info =t char *);
char *strtruct pro          unsigned int reserved8 oid *);
};


strunst charfree (voidd "/Users/jmh/devel/li    task_rol     };
tyree.c# 70 "/usr/include/mach/mach_types.h" 2 oid);

}
d (*__sa_handler)(int);
        void (*__sa_sigaction)(int, struct __siginpes.h" 3 4
# 1 "/usr/include/mach/machine/exception.h3 4
enum ta"/usrum - 1    unsigned int r30;
    ruct task_unsigned int r29;
        unsigned int r30;
    /ppc/typ_mask;
        int sathrowh" 2 3 4
# 57 "/usr/include/mach/exception_typemplate<typename _Al*except3 4
enum t/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/threadlude/mach/thread_staorts.h" 3 4
typedef int task_speid (*sig_t) (int);




struct sigaltstack {
        info {
        uned int r0;
        def struct task_even.3/c++/iosfwd" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/fpos.h" 1 3
# 43 "/usr/includevents_info *task_events_info_t;






struct task_thread_times_info {
        time_value_t user_time;

        time_value_t system_time;

};

typed int po 4
enum t;
void *memsthread_times_info task_thread_times_info_data_t;
typedef ss policy_limit_data_t;
typedef struct policy_infos policy_info_data_t;
#ar* __s);

  vw/3.3/c++56 "/usr/include/mach/thnfo *37 "/usr/include/mach/task_policy.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "/usr/include/mach/task_policy.h" 2 3 4
# 56 "/usr/include/mach/task_policy.h"r/include/mach/tafree (void/usr/include/mach/tash" 1 3 4
# 38 "/usr/include/mach/
typedef upledef strus.h" 2 3 4


#   task_role_t role;
};

typedef struct task_category_policy task_cat 3 4
union __sigaction_u ruct task_category_pol);
        void (*__sa_sigaction)(int, structfo *,
                       void *);
}u;
     orts.h" 3 4
typedef int task_special_port_t;
#     ude/mach/mach_types.h" 2 3 4
# 1 "/usr/incmask;
        int sa_flt;


typedef integer_t thread_info_data_t[(1024)];







struct sigaltstack {
        char *ude/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_policy);
int des_setkey (const char# 74 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_policyead_state_flavor char * const *);
int fchdir (int);
int fchown (int, int, int);
char *ffolicy.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "/usr/include/mach/read_standard_policy ude/mach/thread_policy.h" 3 4
struct thread_standard_policy {
        natural_t no_data;
};

typedef struct thread_standard_policy thread_standard_policy_ char * const *);
int fchdir (int);
iare;
}ing   natural_t no_data;
};

typede1 3 4
# 79 ::_t *, " 2 3 4# 1 "/us timeshare;# 1 "/usr/i 4
enum task_role {
        TASK_RENICED = -1,
        TASK_UNSPECIFIED = 0,
        TASK_FOREGROUND_APPLICATION,
char eras     unsign} pthread_condattr_t;

tROL_APPLICATION,
    _types.h" 1 3 ng long u_int64aits<ch   u ?ommand line>"
types.h" 1includgned tid maxtypessk_category_pol_standard_policy_t;
# 114 "/usr/include/mach/thread_policy.h" 3 4
struct thr thread_extended_policy {
        boolean_t timesha(int);
        void (*__sa_sigaction)(int, struct __sfo *,
                       void *);
};


al_ports.h" 1 3 4
# 66 "ead_state_flavor_tal_ports.h" 3 4
typedef int task_special_port_t;
# 76 r/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include_limit_data_t;
typedeong _rem;
} d147 "/usr/include/mach/exception_d_info.h" 3 4
typedef naturals.h" 3 4
# 1 "/usr/include/mach/th/usr/includepedef integer_t thread_info_data_t[(1024)];











struct sigaltstack {
        system_time;
        integer_t car *initstdef struct thread_basic_info *thread_ba*, const c
}

static inline ifo_data_t;
typedef struct task_thread_times_info *task_thread_tid_time_constraint_policy thread_time_constraint_policy_data     unsf struct thread_time_constraint_policy *thread_tim char * const *);
int fchdir (int);
int fchounsigned lo         device:1,
.h" 3 4
struct thread_precedence_policy {
        integer_t importance;
};

typedef struct thread_precedence_policy thread_precedence_policy_data_t;
typedef struct thread_precedence_policy *thread_precedence_policy_t;
# 78 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_special_ports.h" 1 3 4
# 79 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/machh/clock_types.h" 1 3 4
# 46 "/usr/in using ::exittest_page_incmp (const ch      TASK_RENICED = -1,
        TASK_UNSPECIoolean_t may_cache;
        memory_object_copk_id_t;
typedef int clockedef int clock_ethostid      clock_res_t tv_nsefo *,
       l_page_in" 1 3 4
# 69age_list_ptr_t;
# 70 "/usr/ins.h" 1 3 4
# 70 "/usr/include/mach/vm_attributes.h" 3 4
typedef unsigned edef thread_state_f_types.h" 2 3 4
# 1 "/usr/include/mach/vm_attributes.vm_inherit_torts.h" 3 4
typedef int taskeption._machine_attribute_t;
# 79 "/usr/usr/iude/mach/vm_attributes.h" 3 4
typedef int vm_machine_attribute_val_t;
# 83 "/uvm_inheri3 4
# 1 "/usr/include/mach/vm_inherit.h" 1 3 4
# 69 "/usr/include/mach/vm_inherit.h" 3 4
typedef unsigned int vm_inherit_t;edef thread_state_flavo;
        vm_prot_t max_protection;
        vm_inhesr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_behavior.h" 1 3 4
# 41 "/usr/include/mach/vm_behavior_t;
typedef struct threa      vm_behavior_t behavik_thread_times_info task_thread_times_info_data_t;
typedef struct task_    strdef intc/darwin/3.3/        uetkey (consin  un 3 4
# 56 "/usr/include/mach/thread_# 1 "/usr/include/mach/vm_sync.h" 1 3 4
# 60 "/usr/include/mach/vm_sync.h" 3 4unsignedint);
int fchown (intvm_prot.     unsger_t plarm (unint *cgcc/darwioid *, silude/sys/signal.h" 1 3 4
# 72         bf;
        int _lbfsize;       &_polded_infone/signal.h" 1 3 4
# ded_info_nt64_t uint6" 3 4
typedef




struct vm_region_top_info {
        unsigned int ob        int sc_ir;
   top_info {
        unsigned in/include/gcc/




struct vm_region_top_info {
        unsigned in_pages_resident;
        unsigned char share_mode;
};

typedef int sc_mask;
        int sc_ir;
    char share_mode;
};

typedef struct vm_rgs;
};12ength_error(const char* __s);

  voiint _c, FILE *_p) includ77 (char)_c != '\n'))
               nsigneds/signal5efs.h"
# 1 "/usr/include/gcc/darwino *pward/str;
        vmp->_p++ = _c);
    ed_i;

int ffset;

id);:/stdlib.h" 3 4t
        ferror (FI tm *gmtime (c/ppcclocef int wchar_e_t);
struct tm *gmtime (concluder/inclrt (void);
 int
          using ::FILE;
Ba (conow_private;
   ng);
 ld     unsigned  unsigned intd qsial_capacityask_sr/incl   unsigned s resol**, "



)e_t *, ),r res     free)ger;
 
int paus   unsigned snsigned geits/precious:1,
       :fpri runened char external_pagextern int _keym_behavior_t behaviorextern int _key  vm_offset_t object_id;
  ;
extern int _keym_behavior_t behavior;
extern int _keyput=ef ofan_t is_submap;
  ruct tm *);
cm_behavior_t behavied char external_pagunlock_processwide_pt





struct vm_region_submap_info_64 {
     o *vm_region_submap_info_t;
typedef nherit_tinclude/~   unsigned snheritef int w vm_oharee;
 ze2 3
# r *);
sr/inclnsigne_t;
#r/inclicy_p     (unsignesignedroteum tsigned nclude/
        overflowt64_
            uct task_cates_resid_now_private;
   po *p     gned int pages_swapped_out;
        unsigned int pageund   unsi       unsigned   un* seoid)        vbufuq (const char *, c    unsignedlong rem;_f;
}

stural_t task_flavor_t;
typedef integer_nst char *);
int issetugid (voiturn (_c < penmodpoli    st char *);
int issetugid (voixt *);
int siny_object_attrt;
  usinghar share_mode;
     
    )) ? 0 :
    return (_c < ;
        unsigned short user_wired_count;
};

typedef struct vm_region_submad intivate wchar_nsignedM   unsgned chagned chharen __rensigne       vm_om_size_setup        vm_behegion_submauq (const char *, cntry {
        vmer;
     s_t add_funigned cha      vm_sies.h"t si4
# 1      bnfo vm_r" 3

# d chaic :ve_info r" 3

# frozen.h" 3 4
# 1 "/usr/_infoant.h" 3 4
}


typigned nsig71 "/usr/stdlib.h" 3 4
on_extended_red_now_private_count;
     mach/kern_ze;
};


/kern_return.h" 1 3 4
# 2lude/ppc/signal .h" 1 3 4
# 27 "/ ehavior_t be" 3 4
# 1 "/usr/incruct tm *)mach/ppc/kern_returobject_ofh" 1 3 4
# oolean_t is_submap;
*e_t mapu unsigneigned int pages_rntry {
     an_t is_submap;
ize_butr_in/usr/include/_t */kern_return.h" 3 4
# "/usr/includede/mach/machine/ker_return.h"_depth;
4 "/usr/inc"/usr/iintdef struct vm_region_g clock_t;


submap_info_64 *v~4 "/usr/includef int kern_return_t;
# 28 "/usr/inclu int user_tag;
        unsigned int pages_resident;
        unsigned intrn_return.h" 2 3 4
# 65 "/usr/include/mach/kernach/kern_return.h" 3 4
# 1r/include/mach/kmod.h" 2 3 4
# 5pthread_conduct {
        ine_t);
struct tm *gmtime ( div_t;

typedef struct {;
typedef kern_return_t kmolong rem;
} ldiv_t;
# 9;
typedef kern_return_t kmo4
extern int __mb_curn.h" 2 3 4
#_depth;
" 1 3 4
# 27 "/ypedef int kmod_t;
typedef int kmod_cotruct vm_region_submap_info_64 *vffset_t of kmod_args_t;



typedef struct kmod_reference {
        struct kmod_refent;
        unsignenclude/mach/machine/kern_return.h" 2 3 4
# 65 "/usr/includeusr/19 "amdb_btree._p) {_t;
  using ::size_t;
}
# 50 "/usr/inc_return_bfsize &&rn "C" {
int __srget (FILE *);
int info_t *km    u->_p++ = _c);
      6_array_t;
# 134 "/usr/include/mach/kmod.h" 3 4
signal.h"1 "/usr c;
typeuf {
   71 "/usc+io.h" xtension_cmd_t;
er

voixtension_cmd_t;
log;
};
 else
                return (__swb        char n      _t object_iIni
uniood qs
     20 kmod_stop_func_t *t;

ty depend __bubtConsistent(    unis __tt_t*h_decy *th# 135 
    query intdata[pe;
        vec_t& preern inticy_level)g.h"   (
typed ((0) ? 0 :rts.hprintf ("%s:%u: ts.h"  asinclion `%s'\n", kmod_stop_func_, 33, "0"), 0wd.h" 3

4
# 1 (;

  temes.h dependef s
btPenalty_cmd {
        int pe;
        char p& pagort_t hicy_sloype;
         resolkeod_geneicy_kn inriv_t;
typedef ma(voiport_t hosd_security
typed_space;
# 9ch/mach_types.h" 2! mac.is_lea;
   4






typedef mach_port_t task_t;
typedef mach_port_t thread_t;
typ49, "t;
typedef machach_port_t thrb      int ty = ( mach_po *) ach/clo# 135 keyr_t;
# lef8 )) 
typrec(ost_unsigned
typedef maost_kensigtype.key_depth;
erv_t;
typedef m(voiledgerv_t;
typpede(( 3 4
pedeef mach/incext->keySclocame_t;

s_resident;emp (ctypedef Cmp(ch_pname_t;

      vf (emp < 0ing :emp (= 0 83 typed(voih_pomach_ypedef pr)mach))ACKGROUND_AP 3 41.t;
typedef 4
# 1 typedef _offset_ost_ <f machnrec32_t- ((sCKGROUND_APport_t alarm_t;
righedef mach_port_t +sk) * 8)))];ef mach_pok_ent clock_ctrl_ io_mastf processor_set_t processor_set_name_t;




typedef mach_port_t clock_ree/sign
typedef mach_port_t bootstrap_t;
tt;
typedef mproc_port_t mem_entry_name_port_t;
typedef mach_poprocet;
typedef man_handler_t;
typedef def exception_ha  integer_usr/inn_handle0_t;
}f mach_port_t ipic_indisplae_t;
tyost_t;
typedef mach_portJNIEnv* envcurityjint* highl_entonst ch156 ask_Hsr/include/mach/object g
typedef task_normalColor_t behef task_usr/incluf task_arraymachusr/ie/mach/machhe_entch/mach_ypedn_handler_arrICS_S exceptioedef thread_arde/ma threa_t;
tresidentmod_ssupport::read_ac_t_t *thrvoid machrray_/usr/include/machrt_t;
ty_types.h" 3 4
 g,
typedef taskk_port_array_t;
hread_tort_t;
ttypedef  int _space_port_t;
typedef host_t host_name91 "typedef host_t host_name_port_t;
typedef processor_set_t processor_set_port_t;
typedef processor_set_t pypedef thread_af mastrhread_act_array_t;
typedef ledger_t *ledger_array_t;
# 156 "/usr/include/mach/mach_types.h" 3 4
typedef task_t task_port_t;
typedef task_array_t task_port_array_t;
typedef thread_t thread_port_t;
typedef thread_array_t thread_port_array_t;
typedef ipc_space_t ipc_space_port_t;
typedef host_t host__portt;
typedef host_t host_name_port_t;
typedef processor_set_t processor_set_port_t;
typedef processor_set_t processor_set_name_port_t;
typedef process_poret_array_t processor_set_name_port_array_t;
typedef processor_set_t processor_set_control_port_t;
typedef procesmod_st;
typmod_stoic_inext(
        i::em_t;
type_id, ipc_space_vect *thread_accurity0_vecod_generic);teger_t ledger_item__porypedef vm_offset_t /std_tyion_vector_t;
typed_port_t;
tyer_subsystem_t;





# 1