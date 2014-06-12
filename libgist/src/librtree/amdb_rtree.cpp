# 1 "amdb_rtree.cc"
#pragma GCC set_debug_pwd "/Users/jmh/devel/libgist/src/librtree"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "amdb_rtree.cc"




# 1 "/Users/jmh/devel/libgist/include/amdb_ext.h" 1







# 1 "/Users/jmh/devel/libgist/include/gist_defs.h" 1
# 9 "/Users/jmh/devel/libgist/include/gist_defs.h"
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
# 10 "/Users/jmh/devel/libgist/include/gist_defs.h" 2
# 1 "/usr/include/gcc/darwin/3.3/assert.h" 1 3 4
# 14 "/usr/include/gcc/darwin/3.3/assert.h" 3 4
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
# 15 "/usr/include/gcc/darwin/3.3/assert.h" 2 3 4
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
 ug_pwd "/Users/jmh/devel/libgist/src/librtree"
# 1 "<built-in>agma GCC set_de;bug_pwdt_dedef# 1 "name iee.cc"
 "amdb_rtree.cc"
#prrea GCC s libgist/iline>"
# 1 "amdb_rtree.cc"




# 1 "/Users/jmh/devel/pointer de/gist;
bug_ppublic:

1
# 9   reverse_"




# () { }/jmhbug_pwdexplicith/devel/libgist/include/"




# 1 ype __x) : current(ncludst_defs.h"
# 1/libgist/include/const/include/sys/appl&inclubug_pwde/sys/types.h.sys/typ" 3 4
# 1 ine>"
# emplate<_rtree.cctree.>bug_pwd "include/sys/appleapiopts.h" 1 3 4
# 67 rtree.>"/usr/includede/sys/types.h" base()" 3 4
# 1 "/usr/4
# 66 "/usr/bug_pwd/usr/i apiopt{ return/sys/typ;1 "/usr/ "/usr/ina GCC sbug_pwdope.cc"
*clude/ppbug_pwd{bug_pwd "tree.cc"
 __tmp =" 1 3 4
#0 "/usr/inces.h"*--gned 8_t;
typ69 "/usr/include/gistpes.h" 3 4
type->clude/ppc/types.h"&(3 4
typedef)# 69 "/usr/includeh" 1 3 4
# 67 "pes.h" 3 4
type++(/includeint8_t;
ty--r u_int8_t;
typedef shortthist;
typedef unsigned shdef long long in64_t;
typedef unsiintgned long long u_idef long long inigned chaegister_t;

t_int64_t;

typedef int32_t rnt16_t;
typedef unsigned shdef long long int64_t;
typedef u--igned long long u_i++64_t;

typedef int32_t register_t;

typedef long int intptr_t;
type 33 "/usr/inint uintptr_t;
# 31 "/usr/include/machine/types.h" 2 3 4
# 73.h" 3 4
# 1 "/usr/include/" 2 3 4

# 1 "/usr/include/machine/ansi.h" 64_t;
typedef un(agma GCC set_de __nf signed char idef shorinclude/sys/appleays/typ - 3 4
 u_int32_t;
typedef long long int64_t;
typedef un=e/sys/types.h" 2 3 4
ned long long u_i 4
# 30 "= 3 4typedef int32_t register_t;

typedef long int intptr_t;
typedef unsigned lo-e/sys/types.h" 2 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 30 +/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/-pc/endian.h" 1 3 4
# 81 "/usr/include/ppc/endia+.h" 3 4
extern "C" {
unsigned long htonl (unsigned /ppc/types.h" 3 4
type[]e/sys/types.h" 2 3 4
# 1 "/clude/mach*(egist ntohs (unsypede;
# 269 "/usr/include/gcc/darwin/3.3/c++/bits/stlt/include.h" 3
ude/sys/cdefs.h" 1 3 4
# cc"
#edef inline booledef 3 4
type==.h" 2 3 4


# 1 "/usr/includecc"
#"/usr,bug_pwd "/Users/t;

typedef char * caddr_t;
typedef iy81 "/ulude/mach30 "/usr/i =.h" y"/usr/i# 69 64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qad<_t;

typedef char * caddr_t;
typedef int32_t daddr_t;
tpedef int32_t dev_t;
typedef u_int32_t fixpt_t;
typedef_t;
type <def u_int32def u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_!r_t;

typedef char * caddr_t;
typedef int32_t daddr_t;
typedef int32_t dev_t;
typedef u_int32_t fixpt_t;
typed!es.h_t gid_;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t>nt32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t off_t;
tynt32_tdef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_ir_t;

typedef char * caddr_t;
typedef int32_t daddr_t;
tys/types.h" 3 4
typedef unsigned long clock_t;




typedef fds_bitigned int size_t;




typedef int ssize_t;




typedef long time_tswblk_t;
typedef u_int32_t uid_t;
# 117 "/usr/include/sys/types.h" 3 4
typedef unsigned long clock_t;




typedef lot32_signed int size_t;




typedef int ssize_t;




t_rtree.ccpedef char * caddr_t;
typedpragma GCC set_debug_p htons (unt32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t off_t;
typedef in"/ust pid_t;
typedef quad_t rlim_t;
typedef int32_t segsz_tpedef char * caddr_t;
typedpthread_attr_+(opaque_pthread_attr_t { long sig; char opaque[36]; }  3 4ef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedr/inclulude/machine/endian.h" 1 rtree.cc"
# 30 "/usr/i "/usr/incl# 32d short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedeContain# 70 "/uclass back_insert" 2 3 4
# 75 ": "/Usertypes.h" <outpu sig; char_tag, void struct { long sigaque_pint8_tprotected:bug_pwd _opaque_p*de_taque_p 1
# 9 "/Users/jne>"
# 1 "amdb _opaque_p unsigned mand lis.h"
# 1 "/usr/include/k_t { long sig; char( _opaque_p"/usr/e/synsigned (&s.h" 3 4
# 355 short ushort;
typedef unsigned int uint;


typedef u_int641 "/usr/include/gcc/darwt64_t;
typedef u=ndattr_t { _opaque_p::apiop_libgist/in__value81 "/usr/include/ppnsigned ->push_k_t (


typedtypedef int32_t register_t;

typed 4
# 71 "/usr/include/stdlib.h" 3 4
typededef  unsigned giste       long quot;
        long rem;
} ldiv_t;
#nsig "/usr/include/stdlib.h" 3 4
extern int __mb_cudef unsigned long int  "/usr/include/stdldef unsig386ckattr_t { long sig; char opaque[12]; } pthread_rwlockattr_t;

typedef struct _opaque_pthread_t;
type_t { long sig; char< _opaque_pthread void *, siewin/3.3/assert.h" r opaque[24];  void *, size_t, size_t, int (*)es.h"read_r401ckattr_t { long sig; char opaque[12]; } pthread_rwlockattr_t;

typedef struct _opaque_pthread_rwlocfront{ long sig; char opaque[124]; } pthread_rwlock_t;

typedef struct { long sig; char opaque[4]; } pthread_once_t;



typedef unsigned long pthread_key_t;
# 10 "/Users/jmh/devel/libgist/include/gist_defs.h" 2ong);
 ldiv_t
        in/3.3/assert.h" 1 3 4
# 14 "/usr/include/42(const char *);
int atoi (const char *);
long atol (const ch*, cng);
 ldiv_t
        ib.h" 3 4
typedef int rune_t;





typedef int wchar_t;


typedef struct {
        int quot;
   ng);
 int rem;
} div_t;

typedef struct {
        longar **, int);
int system (const char * 99 "/usr/include/stdlib.h" 3 ar **, int);
int system (const char *n "C" {
 void
         abort (vng);
 ldiv_t
         ldivint);
int atexit (void (*)(void));
double ato457const char *);
int atoi (const char *);
long atol (const char *);
void *bsearch (const void *, constng);
 ldiv_t
        e_t, int (*)(consng);
 ldiv_tonst void *));

void *calloc (sizlong mrand48 (void);
long nrand48v (int, int)7(const char *);
int atoi (const char *);
long atol (const char *);
void *bsearch (const void *_rwloc long sig; char opaque[124]; } pthread_rwlock_t;

typedef struct { long sig; char opaque[4]; } pthread_once_t;



typedef unsigned lone>"
# 1 "rune_t;





typee/ppc/ans"


long pthread_key_t;
# 10 "/Users/jmh/devel/libgist/include/machine/tystrtod (const char *, char **),_opaque_ptetent (char **, char __i/include/sy4
# 14 "/usr/i, **, (ar * {ude/518char **, int);
unsigned long
         strtoul (const char *, ch int);
int system (const char *);apioptint rune_t;





typedef int wchar_t;


typedef struct {
     "


char  int quotar *); 4
# ,;


typed long long _**, ch div_t;

typedef struct {
        long*, const char *, size_t);
size_t wcstombs (char *, const wcha size_t);


int putenv (const char *);
int setenv (const char  size_t);


int putenv (const charxit (void (*)(void));
double ato550ckattr_t { long sig; char opaque[12]; } pthread_rwlockattr_t;

typedef struct _opaque_phar **);
intf int64_t quad_t;
typrand48 (void);
long nrand48 (unsshort[3]);
unsigned shor,ypedef unsign *, lonint8_t;
ef shorsigned short[3]);
void srand48 s/types.h" 3 4
strhar resolved_path[]);
cha);
int cgetent (char **, char);
in *group}
}

ee.cspa_t;

gnu_cxx
{9 "/usr
  using stdr **, char "amdb_(unsned long, int);

lo(uns_t u_quad_t;
typedef int64_har **);
int cgetnum (unsigned ch__norma


typedefinclude/s[124]; } pthread_rtree.cc"




# 1 "/Users/jmh/devel/"




# 1category (const char *, char resol_rtree.cc"




# 1 "/Users/jmh/devel/
type/usr/long
         strtouq (const char *, char **, int);

void unsetagma GCC set_delong
         strtouq (const char *, char **, int);

void unsetde/gistlong
         strtouq (const char *, char **, int);

void unsetned short opaque[4]; } pthread_once_t;
edef unsigM_r u_int8_
# 9 "/Users/ne>"
# 1 "amdb_rtree.cc"




# 1 "/Users/jmh/devel/agma GCC set_debug_pwd "/Users/jmh/devel/libgist/src/librtree"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "amdb_rtree.cc"




# 1 "/Users/jmh/devel/libgist/include/amdb_ext.h" 1







# 1 "/Users/jmh/devel/libgist/include/gist_defs.h" 1
# 9  nst char *, char *( 1 3gist/inclu(/devel/li/include/h"
# 1 "/usr/include//include/gcc/darwiapiopt/devel/li"/usin/3.3/c++/bits/f
int        longe/sys/cdefs.h" 1 3 4
# 70 "/usr_t;
typvoid
  __throw_bad_exceptt char *, char *rtree.,t _opaque_pt);


 e/types.h" id
  __throw_b"/usr/include/m/include/ppc/types.h" 3 4
typedef signe "/usr/inclgist/includ 2 3

nameort u_int16_t;
typedef int int32_t;
typedeid_argument(const chaeid(void);


  vor_max;




extern "C" {++id_argument(usr/include/stdli

  void
  __throw_out_;



double drand48 (void);
doub/include/gcc/darwigist/inclu++/includ

  void
  __throw_out_of_range(const c/inc { --;

  void
  __throw_runtime_error(const char* __s);

  void
  __thr
typedee_error(const char* __s);

  void
  __--row_overflow_ned short u_short;
typedef apioptagma GCC set_de"/us4
# 1 "/usr/include/machgist/inclu[__n]__s);

  void
  __throw_out_of_range(const char *devnwin/3.3/c++/bits/stl_usr/inclugist/inclu2 3 4


 __throw_runtime_error(const char* __s);

  void
  __throgcc/darwin/3.3/c++/bits/stl_algobase.h" 1 3
# 64 "/st char* __s);

  void
  __ ntohs (unsirflow_error(const char* __s);

  void
  /usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/cn.h" 3 rror(const char* __s);


  void
  __throw_ios_failure(con/bits/c++config.h" 3
# 1 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_de"/usr/inclu 4
struct _ption(void) 1 "/usr/include/ppc/types.h"id_argument(codef unsig65
 void
         exit (int);
void free (void *);
char *getenv (const char *);
 lree.cc"
Lconst unsigned char Rd long long
         strt_t;
typedef qu_t * qaddr_t;

tyeid(void);


  void
  _NCED_LOhrow_logic_errolhst32_t daddr_t;
keymgr_get_per_thread_data(unsignRd int key) ;
exterhsc++/_error(conslhsu_int32_t gidrmgr_get_adef u_int32_t in_addr_t;
typedef u_LOCKED=4
        } TnodeMode ;



extern void * _keymgr_get_per_thread_data(unsignd int key) ;
extern void _keymgr_set_per_thread_data(unsigned int ke, void *keydata) ;
extern void *_keymgr_get_and_lock_processwide_ptr(unsigned int key) ;
extern_LOCKING=3,
        NM_LOCKED=4
        } TnodeMode ;



extern void  swblk_t;_get_per_thread_data(unsigned int key) ;
extern void _keymgr_set_per_thread_data(unsigned int key, void *keydata) ;
extern void *_keymgr_get_an!_lock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_and_unlock_processwide_ptr(un_keymgr_get_lock_count_processwide_pvoid _keymgr_unlock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_lockmode_processwide_ptr(unsigned cc/darwin/3.3/c++/ppnt mode) ;
extern unsigned int _keymgr_get_lockmode_processwide_ptr(unsigned int key) ;
extern int int32_t _get_per_thread_data(unsigned int key) ;
extern void _keymgr_st_per_thread_data(unsigned int key, void *keydata) ;
extern void *_keymgr_get_ant32_k_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_and_unlock_processwide_ptr(une/stddef.h" 3 4
typedef int ptrdiffvoid _keymgr_unlock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_lockmode_processwide_ptr(unsigned 50 "/usr/include/gcc/darwin/3.3/c++/cstring" 2 3_LOCKING=3,
        NM_LOCKED=4
        } TnodeMode ;



extern void t;
# 146.h" 3 4
typedef int ptrdiff_t;
# 49 "/usr/include/gcc/darwin/3.3/c++/cstddef" 2 3

namespace std
{
  using ::ptrdiff_t;
  using ::size_t;
}
# >0 "/usr/include/gcc/darwin/3.3/c++/cstring" 2 3

# 1 "/usr/include/string.h" 1 3 4
# 72 "/usr/(char *, const char *);
char *strcht;
# 49 "/usr/include/gcc/darwin/3.3/c++/cstddef" 2 3

namespace sttrcoll (const char *, const char *);
char *strcpy (char *, const char *);
size_t strcspn (cons3/c++/cstddef" 3

# 1 "/usr/include/stddef.h" 1 3 4
# 66 "/usr/includekeymgr_get_lock_count_processwide_ptr(unsigned int key) ;
# 155 "/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/os_defines.h" 3
}
# 36 "/usr/include/g<_lock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_and_unlock_processwide_ptr(un(const char *, const char *);
char *void *memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void *memcpy (void *, cont key, unsigned int mode) ;
extern unsigned int _keymgr_get_lockmode_processwide_ptr(unsigned int key) ;
extern int 2 "/usr/i_get_per_thread_data(unsigned int key) ;
extern void _keymgr_set_per_thread_data(unsigned int key, void *keydata) ;
extern void *_keymgr_get_an>_lock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_and_unlock_processwide_ptr(unchar *, size_t);
size_t strlcpy (chavoid _keymgr_unlock_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_lockmode_processwide_ptr(unsigned strsep (char **, con(unsig);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int););
int cgeget_per_thread_data(unsigned int key) ;
 3
# 65 "/usr/includfines.h" 3
typedmemcmp;
  using ::strcmp;
  using ::strcoextern void _keymgr_set_per_thread_data(unsigned int key, void *keydata) ;
extern void *_keymgr_get_an"/usk_processwide_ptr(unsigned int key) ;
extern void _keymgr_set_and_unlock_provoid *, size_t);

}
# 52 "/usr/include/gncmp;
  usiondattr_t {void *, size_t);

}
# 52 "/usr/include/g} pthread_condattr_t;

typedef struid *, void *, size_t);

}
# 52 "/usr/include/gcc/dr(con_error(const char* __s);


}
# 52 "/usr/include/gvoid
  __th ntohs (unsude/
void *alloca (size_t);

u_int32_t
         aalgo/usr u_i2 3
long);
char std
{
# 9
 void
         exit (int);
void free (void sing ::strrcnt64_t u_quad_t;
typedeForwardree.1har **);
int__s1), __n)2t quad_t;
typtruc);

inter_swap((__s1), __n); __a,g ::strstr;

  __bid);
void *rea 1 "amdb_rtree.cc"




# 1 "/Users__s1), __n);setenv (const _VtypeType1line>"
# 1 "amdb_rtree.cc"




# 1 "/Users::strstr;

  /usr/include/gcc/darwin2ude/gist_
# 48 "/usr/include 3
# 72 cc/darwin/hine/types__a(unsigne 1 "

# 1 b/usr/includb .h" 16_t;
typude/1tr (char *, char *, char **);
int cgetustr (cin_strrchr(const_cast<const char*>(Tp inline char*
  strstr* __s1Tp"/us_s2)/limituiltin_ste/gcc/darwin/3.Tpigned cha1 "/usr/incude/liits.h" 1 3 
# 62 "/usr/include/li4const_cast<const char*>(__s1), __s2); }

  using ::strrcts.h" 1 3 4
# 24 "/usr/include/gcc/dar ::strxTpAST_KImind_except/limits.h 2 3 4
# 50 " 1 "/usr/include/ppc/liif (
# 6t32_a)error(consb/include/1 "/usr/ide/li6h" 2 3 4
# 63 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 64 "/usr/include/limitsax" 2 3 4
# 50 "/usr/include/gcc/darwin/3.3/c++/climits" 2 3
a 67 "busr/include/gcc/darwin/3.3/c++/bits (const char *);
int atoi (const char *);
lon# 1 "/usr/include/sys/syslimits.h" 1 har **);
int cmparnoretur64 "/usr/include/limits.h" 2 3 4
# 50 "/usr/include/gcc/d int ::at __comp1 "/usr/includs" 2 3
sing 3
#g);
a)usr/include/gcc/darwin/3.3/c++/bit204_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  usintdlib" 3
# 84 "/usr/include/gcc/dg ::exit;
  using ::free;
  using ::getenv;
 _s2)_b ::labs;
  using ::ldiv;
  using ::m2rchr(char* __s1, int __n)
  { return __builtin_strrchr(const_cast<const char*>(Input
  __t);
int cgeOrwloc4
# 70 "/u_cast<co(__i, __j) enumgetepy(ong __j) { __firstlong3/c++/bits/lastt32_t daddr_tusr/includee voesul1 "/usr/includig __k_t;

typedefid);
void *reafor ( ;ts/stl_a3/c++/
# 1;_s);3.3/c++/e/gccstl_a(const cha*cc/darwi

# 1 stl_a(unsignec/darwin/.3/c++.3/c++/bmemmove;
  using ::strRandomAccessj) { return ldiv(__i, __j); }
}
# 68 "/usr/include/gcc/darwin/3mespace std
{
# ts/stl_algoception
  {
  publi
# 1 "/usr/include/gcc/darwin/3.3/c++/new" 1 3
# 4respac_a std
sr/include/gcc/darwin/3.3/c 1 "amdb_rtree.cc"




# 1 "/Usersmespace std
{
# 1 3
# 65 "/usr/include/gcc/da_Distaamdb_ext.h"++/nethrow() {har*nclud
# 1ine vincludexcep> 0;ow_utl_aint8_t;
ty1 3
# 40 "/usr/include/gcc/dng _();

  typedef void (/c++/excepti++/b/gcc/darwin/3.3/c++/exception" 3
extern "C++" {

nainclude/gcc/dar_Tp*/gcc/darwin_trivial" 2 3 4
# *ts/stl_alg(__noreturn__
# 1 return__.3/c++id);
void *reamemmove(cc/darwin/s/stl_algsizeofne/l) *2 3
() throw();
   (unsign/darwin/3.3/c++/e +__attribute__ ((__nxception" 3
extern "C++" {

nang __j) { return ldiv(__i, __j); }
}
# 68 "/usr/include/gcc/darwin_aux2/3.3/c++/bits/stl_algobase.h" 2 3

# 1 "/usr/includnclude/gcc/darwin/3.3/c++/


 als(const fixpt_t;
typedefrwin/3/stl_algohandler );
}

}
# 4);
unsigned long c++/new"nt u_inception" 3
  bool uncaught_exception() throw();
}

namespace __gnu_cxx
{
# 113 "/usr/include/gcc/darwin/3.3/c++/exception" 3
  void __verbose_terminate_handler ();
}

}
# 4tr (constclude/gcc/darwin/3.3/c++/new" 2 3

extern "C++" {

namespace std
{





  class bad_alloc : public excep);


  void terminate() __attrilude/gturn__));


 ected_handlebug_pwd "/Users/j set_unexpect

  typedef void (*new_handler)();ibute__ (++/new" 2 3

extern "C++"# 82 "/usr/include/gcc/darwin/3.3/c++/new" 3
void* operator new(__noreturn__));


  unexpected_handlebad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator deleaught_exception() throw();
}

namespace __gnu_cxx
{
# 113 "/usr/incnie/gcc/darwin/3.3/c++/exception" 3
  void __verbose_termi nothrow_t nothrow;


  typedef void (*n" 2
# 1 "/usr/include/gcc/darwin/3.3/c++/vg __j) {/darwin/3.3/cxception() tcc/darwinline>"
# 1 "amdb_rtree.cc_/usr/ "amdb_rtcc/darwin>::hasibute__ _assignment_3 4
typexception() tTute__ return__));
# 10(__i, __j):geteator new(+/new" 2 3

extbug_pwd "/Users/jmh/devel/libgist/src/rn "C++""/usr/i3
# 1 "/usr/include/gcc/darwin/3.3/c++/i# 70 "/() (unsigned, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }3 "/usr/include/gerator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { };
inline void operator delete[](void*, void*) throw() { };

}
# 70 "/usr/include/gcc/++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/dar/3.3/c++/new" 1 3
# 4n/3.3/c++/iosfwd" 3


# 1"/usr/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c++locale.h" 1 3
# 40 "/usr/include/gcc/darwin/3.31();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t_Istrpbrk(char* __s1,(__i, __j);::_Nchar  _des;
    char *grouping;
    row()();
  1 3
# 442 3

exsign_posn;
or new[](ses;
  
        char *mon_thousands_sep;
        char *mon_grouping;
        char *positive_sign;
        char *negative_sign;
        char int_frac_digits;
        char frac_digits;
      e" 1 3
# 48 "/usr/include/gcc/darwin/3.3/_by_space;
        char n_cs_precedes;
        char n_sep_by_space;
        char p_ 2 3

extern "C++" {


};
# 76 "/usr/in# 33d short ushort;
typedef unsigned int uint;


  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }
}
# 68 "/usr/include/gcc/rwin/3.3/c++/bits/stl_algobase.h" 2 3

# 1 ) throw() { return __1 "/usr/include/gcc/daunsigned using ::setlocale;
  using ::localecow() { returndes;
        char n_sep__by_space;
      1/bits/c++locale.h" 2 3



namespace std
{
  typ ::memmove;
  using ::strBidirectional__n); }

  using 

      if (__pre  inline char*    __ret = sprintf13 "/usr/inc voi1), (


      if (__prects/stl_algo= sprintf(__out, __fm void __verbose_termin/usr/   __ret = sprintfncy_symbol;
        char *mon_db
      if (_sr/include/gcc/darwin/3.3/cwhile2 3
# 1 "/usr/incluxception" 1def 
# 40 "/usdef nclude/gcc/darwin/3.3/c++/exception" 3
extern "C++" {

namespace std
{
# 52 "/usr/inc

      if (__pre(__out, __fmt, __prec, __v);
     else
        __ret ception
  {
  public:
    exception() throw() { }
    virtual ~e(__sav);
      return __rency_symbol;
        char *mon_dl const char* what() const throw();
  };



bad_exception : public exception
  {
  public:
    bad_eh" 3 4
exter virtuception() throw();
  };


  typedef vo/cctype" 1 3
# 47 "/usr/include/gcc/darwin/3.3/c++/cctype" 3


#ng ::memmove;
  using ::str

      if (__prec >= 0)
        __ret = sprintf3
# 1 "/usr/it **);
    oold ope3.3/matructrxf
        __re_dispatchd);
void *reastatict, __prec, __v);
      el        = sprintf(__out, __fmt, __v);

      setlocale(0, __sav);
      fre
      return __ret;
    }
} uintptr_t;
# 31 "/uouping;
        __ret algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.cy_symbol;
        char *mon_decima  int vanamespace std
{





  class
  terminate_}de/gisr/include/gcc/darwin/3.3/cvalid_rune;

        unsigned l<(std) thro

  typedef v opaque[4]; e[(1 <<8 )inate()        (__noreturn__));


  unexpected_handler set_unexpected(uneruct {
        st ptragma_t _Numption() throw();
  }unsigned handler) throw()ine Num;


  void unexpected() _issp;
} div_t;

typede(int);
int issp
extern _RuneLocale *_CurrentRuneLocale;
# 69 "/usr/include/ctype.h" 2 3 4
# 10(__noreturusr/include/ctype.h" 3 4
extern "C" {
int isalnum (int);
int isalpha (int);
int iscntrl (int);
int isdigit (int);
int isgraph 
        _RuneRange ma2 3 4
# 100 "/usr/include/ctype.h" 3 4
ypes.h":3.3/c++/new" 2 3

extern "C++";
extern _RuneLocale *_CurrentRuneLocaleBIc >= 0)
      If(__out, __fmt, I    else
        __reor n((int_fmt, __v);
askrunt __prBI    _RuneRange mlconv;
  using ::setlocalew() { };
inli  int nranges;
        _Ru/usretenv (const70 "/usr/i>runetype[_c]) & _f;rator delete[](void*, void*) throp;
        char *grouping;
    nt);

}
# 158 "/usrint);    ) thute__ neLocale->runetype[_
unsigned long ___runetype (int);
int _include/gcc/d __toupper (int);
}
# 180 "/usr/include/ctype.h" 3 4
static inline i_rwlockt char* __s);

  maskrune(int _c, unsignedbug_pwd "/Users/jmh/devel/libgist/src/librtrlong _f)
{
  

  typedef void (*new_handleBI  chtatic inline int
__+/new" 2 3

extern "C++""/usr/inwide_ptr(unsigne || _c >= (1 <<8 )) ? 0 :
                !!(_DefaultRuneLocale.runetype[_c] & _f);
}

static inline int
__toupper(int _c)
{
        return (_c < 0 || _c >= (1 <<8 )) ? ___touppe3 "/usr/include/gcc/darwin/3.3/eLocale->mapupper[_c];
}

static inlineolower(int _c)
{
        return (_c < 0 || _c >= (1 <<8 )) ? ___tolower(_c) :
      2 "/us] & _f);
}

static inline int
__toupper(int _c)
{
        return (_c < 0 || _c >= (1 <8 )) ? ___toupper(_c) :
        conv;
  using ::setlocale;
  using ::localeco      des;
        char n_sep_by_space;
    cale.runetype[_c] & _f);
}

statihar p_sign_posn;
        charbug_pwd "/Users/jmh/devel/libgist/src/librtree"
# 1 "n_sign_posn;
};
# 76 "/usr/include/localsalpha(int c);
extern int iscntrl(int c);
extern int isdigit(int c);
extern int isgraph(int c);
extern int islower(int c);
extern int isprint(int c);
extern int ispunct(int c);std
{
  using ::lconv;
  using ::setlocale;
  using ::localeco int isxdigit(int c);
}



namespace std
{
  using ::isalnum;
  using ::isalpha;
   2 3

extern "C++" g ::isdigit;
  using ::isgraph;
  using ::islower;
  usspace std
{
  typed47 short[3]);
long jrand48 (unsigned short[3])# 1 "/usr/include/sys/sy || _c >= (1 <<8 )) ? 0 :
                !!(_Defaul
        __ret =askrune(int _c, unsigned long _f)
{
        re"/usr/include/gcc/daey_t;
# 10 "/Use"/usr/include/gcc/darwin/3.3/c++ "/usxdigit(int c);
}



namespace std
{
  using ::
extern int isgraph(intss allocator;

  template<class _CharT>
    struct char_traits;

  template<tpename _CharT, typena50 int* __c_locale;





  template<typename _Tv>
    int
    __convert_from_v(ch__s1), __n) return ldivinclude/
  strstrfills1, const chats/stl_algocc/darwin/3.3/nt __p 2 3 4
# 50 "
typedef str/include/ppc/li++/new" 3
# 1 "/usr/include/gccc++/exception" 1 3# 1 "/clud
type 3
# 35 "/u3rchr(char* __s1, int __n)
  { return __builtin_strrchr(const_cast<const char*>((__i, __j) return ldivSize++/cstdio" 1 3
# 48 usr/include/gcc/lude_n(e/gcc/darwin/3stl_algof str_t;
/include/stdio.h" 1 3 4
# 91 "/usr/include/stdio.h"
  typedef vn/3.3/c++/exception" 1 3include/stdio.h" 3 4
;
int toascinclude/gcc*, siine char*
  strslude/unoid*ed charrn__));


  int (*_read) (vo"/usr/includ int (*_read)"/uscline = set int (*_read)s.h" 1 3 4
cint);
memserow_/new" 2 3tmpsn;
    cc/darwin/3.3/cinclu) (void *);
       nt (*_read) (void *, cr *, int);
        fpos_t (seek) (void *, fpos_t, int
        int (*_write) (void *, const char *,(1 <<8_cast< int (*_read) { rtmposn;
        struct __sbuf _ub;
        unsignedead) (void *, ct);
        fpos_t (void *, fpos_t, intar _nbuf[1];


        struct __sbuf _lb;


        int _blksize;
        fpos_t _offset;
} FILE;

e/sys/cdefs.h" 1 3 f stt quad_t;
typ int (*_read)  char *_p;
  int (*_read) (void *, c  int _w;
       *_seek) (void *, fpos_rwin/3.3/c+ude/g char *, i# 1 "/ntohssn;
coreturn__));
# 100intf (FILE      return (_c < 0LE *);
int fgetc (FILE *);
i fgetpos (FILE *, fpos_t *fgets (char *, int, FILE *);
FE *fopen (const char *, const char *);
int fprintf (FILE *, const char *, ...);
int fputc (int, FILE *);
int fputs (const char *, FILE *); fread (void *, size_t, size_t, FILE *);
FILE *frn (const char *, const char *);
int fprintf (FILE *, const char *, ...);
int fputc (int, FIL# 60v_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  usingw() { ret; }

  using w() { ret  inlinpaichar*>(malloc, f
int printf (conmismed l/3.3/c++/biskrune(in;
int putc (i unsigne1e<class _CharT>nt putc (in);
int f2  char* __old = setlo/gcc/darwin//include/nclude/gcc/dar1/usr/inclu1 &&lbfsize;
1_t gbfsize;
2oid (*terminid (*unex/3.3/c++/*, char *);2
extern _RuneL;
int toast char *, ...);
int putc (intLE *);
in;


  voi2d
{
  typed64ixsort (const unsigned char **, int, const ut char *const sys_errlist[];

void perror (const char *);
int print"/usr/include/naryPredied lf (const char *, ...);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int remove (const char *);
int renaint remove (cons char *, __builg ::char _pred  char* __old = setlocd rewind (FILE *);
int scanf (const ;
int vasprin(char *, .,;
void setbbuf (FILE *, char *);
int setvbuf (FILE *, char *, int, size_t);
int sprintf (char *, const char *, ...);
int sscanf (const ch6its.h" 3 4
# 1 "/usr/include/gcc/darwin/3.3/machine/limits.h" 1 3 4
# 24 "/usr/perror (const char *);
int printf (con_t;
typedef quadequvoidputchar (int);
int puts (const char *);
int remove (st char *);
int rename (const char *, const charr/include/stdio.h" 3 4
nt scanf (cof_t fpos_t;1n/3.3/c++/eame (cousing ::!dio.h" 3 4..);
void setbding[32];
;
int toa3 "/ugcc/darwin/3.3/typef (const ch9 int* __c_locale;





  template<typename _Tv>
    int
    __convert_from_v(char* __outILE *);
int vfprintf (FILE *, const char *, __builtin_va(FILE *);
FILE *popen (const char *, const char *);
int putw (int, FILE *);
void setbuffer (FILnt, FILE *);
nst char *, ...);
int vasprintf (char **, const char *, _ILE *);
char *tempnam (const char *, const char *);
int snprintf (sr/include/stdio.h" 3 4
extern "C" {r *, ...);
int vsnprintf (char *, size_t, const char732*);

extern const int sys_nerr;
extern const char *const sys_errlist[];

void perror (const char *);
int printf (conedef quadlexicographicaletenvare (const char *, const char *);
int putw (int, FILE *);++/ppc-darwin/bits/" {
FILE *funopen (ce
             
# 1ame (const char *, const char *);
void rewiILE *);
char *tempnam (cons "/usrar *);/usr/inclu maplowe" 3
nat char *, const char *);
ong a64l (cof char *, siz<;
void setbr *, ...);
int vsn_t, const sing ::fpos_t;

2 using ::cl1ILE *);
int __svfscanf (FILE *, inate_handler setr *, ...);sr/include/gcc/darwin/3.3/c++/*, __builti6 _Traits = char_traits<_CharT>,
           typename _Alloc = allocat;
int ungetc (int, FILE *);
int vfprintf (FILE *, constng ::atol;
  0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
                return (*_p->_p++ = _c);
        else
                return (__swbuf(_c, _p))e<class _CharT>
    struct cha::exit;
  using ::free;
  usinst char *);
/cstdio" 2 3
# 97 "/usr/include/gcc/darwin/3.3/c++/cstdio" 3
namespace std
{
  using ::FILE;
  using ::fgetenv; "C" {
int __srget (FILE *);
int __svfsclose;
  using ::fe::tmpfile;
  us2
extern "C1FILE *);
int __svfscanf (FILE *, tc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using odeMode ;



exte>_w >= _p->_lbfsize && ( *);
FILE *fopen (crn__));

1LE *);
FILE *fopen (c        
int remove (conid _keymgr_set_per_ int (*_read) (void *,2gcc/darwin/3.3/c++/ppc-darwinearer
externE *freozelowe_len1ption() t1hrow();
  /3.3/c+r/include/gcc/darw2ption() t2hrow();
  
  usinr/inclincc/d
# 40 "/umemcnv;
 ;
int put+/ppc-dars.h"/darwisn;
 en2e;
exterit (int);
int to!= 0 ?4 "/usr/in< 0ar* darwint32_ead___sbuf _ub;
    rwin/3.3/c++/ppc-darwin/bits/gthr.h" "/usr/include/gcc/darw+/ppc-darwin/bits/gthr.h" 3
# 1 "/usr/include/g/3.3/c++/ppc-darwin/biefault.h" 1 3
# 37 l.h" 1 3 4
#>_w >= _p->_lbfsize && (thr.h" nt (*_read) )/include/gbug_pwd "/Users/jmh/devel/libgist/sr" 2 3 4
# 37 "/usr/inclrwin/bits/gthr.h" 3
# 1 "/usr/include/sched.h" 1 3 4
# 10 "/usr/i asprintf (char **, c# 1 "/usr/include/sched.h" 1 3 4
# 10 "/usr/incluanf ng ::mem}
rpbrkze_t *);
int fpurge (FILE *);
int fsvectorrchr;
# rchr(char* __s1, int __n)
  { return __builtinloc u_i1usr/i8its.h" 3 4
# 1 "/usr/include/gcc/darwin/3.3/ma.h" 1 3sr/include/pthread.h" 2 3 4
# 1 "/usr/includfunctexcept 1 3 4
# 83lloc;
  using ::mblen;
  using ::mbstowcruct tm {
     sr/include/pthread.h" 2 3 4
# 1 "/usr/itm {
 ion_defines       int c/darwin/3.3/assert.h" 3 4
# 1 "/usr/incruct tm {
     hr;

 inline char*
  
8 "/usr/i__throw_bad_    int t(trucority        char *tm_zone
    5 "/usr/include/time.h" 3 4
ext    5 "/usr/i        char *tm_zoneusr/id5 "/usr/include/time.h" 3 4logic_errbad_excepead) (vosime (const struct tm domainst time_t *);
double difftime (time_t, timeinvalid_argu, voe_t *);
double difftime (time_t, timelengthst time_t *);
double difftime (time_t, timeout_of_rangno.h" 3 4
# 1 "/difftime (time_t, timeruntimest time_t *);
double difftime (time_t, timenst s
size_t strftime (char *, size_t, const charverflowst time_t *);
double difftime (time_t, timeundchar *);
struct tm *gmtime_r (coime_t *);
struct tmos_failurno.h" 3 4
# 1 "/diff (ch8 int* __c_locale;





  template<typename _Tv.h" 1 3/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/tithread
        in5lloc;
  using ::mblen;
  using ::mbstowcs;
 struct tm *3  long tm_gmtoff;
 (convalid_ruRefcount_Bas
inl (void) 1 "amdbude/gcc/RC_ude/# 48 "/latluderead.;


ref_espech" 2 3 4__gstruct_mutexnclude/unistd.h_lockde/gist timespec *);
(r/inclutl_ar* __/unistd.h     ::free;
  usin# 72 "/usr/include/ned cha{0x32AAABA7, {}}/gcc/darwunistd.h" 3 4
# 62 "/usr/i(char *, DE_PTR=
  strstr_M_incrigned lpace(int# 72 "/usr/inclu4
# (&
 void
         _;
extern s);

/unistd.h" d int alarm (unsigned unint);
int chdir (const char *)DE_PTR=read.char *, det);
unsigned int alarm (unsigned int);
int chdir (const char *);

# 1 "/usr/incluned chaw_undhown (const char *, uid_t, gid_t);
int close (int);
size_t confstbstate_t;
# 34 "/usrinatunsig1sr/include/gcc/darwin/3.3/c++/ppc-darwin/bitsnanosleep (cofflush (FIL# 34 "dummye_t invalid_ruSwap int)_valid_r opaqu(1 <<8 ) 72 "/usr/include/Sr* __ 4
# 1Locale *_Current*, char * const *nst *);
pid_t for*getcwxecvp (const cha<har * co:: (void);
lon/unistd.h" 3 4
externclose) (void int (*_rlong  chAtomicr* __soups (int, gi (in_p char *, invoid)__q
# 37 "/usalarm (unsigned int);
id_t getegid (void0t geteuid (void;
exter getpgrp (void);
# 40 "/usr/_t;
typcharde/stqst cha*, uid_t, gid_t);
int clod (void);
uid_t getuid (void);
int isattarwin/3.3/c++/excepnt);
ex1cc/darwin/3.3/assert.h" 3 4
# 1 "/usr/includenanosleep (const struct times *);
int exTLsigned int)
}
# 3linebuf # 72 "/usr/include/un4
# 1 "/usrnst char *, initialize;
unsigne# 19_va_list);
int __swbuf (int, FILE *);
}




st char *, charccess (const char *, acquire int); 3 4
# 91std.h" 2 3 4
# 91 "/usr/int);
intze_t confstr (int,nst char *, releashar *ttyname (int);
int unlink (const ch;
int closeze_t confstr f unsign2r (char *, char *, char **);
int cgetustr (cst char *, chargid (gid_t);autosetpgid (p);
gidt);
int setpg& (void);
int se

int acct (co(*);
int async_daemrr, op3 4
# onst crr, opr opaquchar *).pid_t);
char *ttyt(const c~ar *brk (const ar* const char , size_t);

ext(constprivateh" 2
#truc int);
char *devn

int acct (co&;
exterar *brk (const nt encrypt (char *, int);
oid) (ch9r *, const char *, ...);
FILE *tmpfile (void);one (int, ir/include/pthread.h" 2 3 4
# 1 "/usr/ippc-def unst uina]);
city       int d short ushort;
typedef unsigned in (u_long);
int fsync (int);
i3
 1 "amdb# 34 []);
chword;

(1 <<8 , __fmt,nt, int *, 
__attribute__ ((__unused__))
_e;
}hct tmand_add (
# 1 "/usrnt, int *, ;
pimem,
# 34 "val)t set *, mode_t);, int);


reg
   __asm__   g# 1 "/utnamunsigned "/* It;
typ
mode_t  & de (*/\n"d (pid_t _0:\t;
char *getlwarxint %0,0,%2 \nershell (voidadd%I3r *g1,%0,%3char *);
int inistwcx. " " (conwd (char *);
int inibne- cons0bchar *);
int ini/* End getsid (pid_t _pi;
char *ge: "=&b") thro),har r);
i    mkdtemp (char"tf;
memmknoI(consgetpakdtemp (chacr0", "memory";
extit (int);
inconst *);
long geth
  st
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
int mkstemps (char * *, c_va_list);
int __swbuf (int, FILE *);
}






t);
int fcho inline char*
  st103"/usr/include/time.h" 3 4
struct timespec {
        tioull(const ewVED_NO# 37 "/_defs.h" 2
#(1 <<8 trucILE *,ED_NOate(ude/gcc/dlude/uni int);
c::type(int newinclut(const ctext {
    char de_onstack;    i
pid_tude/gc*crypt ( int sc_ir;deletr) tp
typedeecv (c, char **, int);
unsigned long
         strto 66 "/usr/inconf (int, int);inststrtoull(constmED_NO/usr/i_e/sys/cdopaque[4]; } etkey (consontext {
    ik (voomd int s;
    i;
extern val_int;
        voir      d *sc_;
};
# 28
};







typedef  (
 intint sigset_t voihandler)(ime (c
struct sigconontext {
    int scsc_onstack;
    int sc_maskong long u_i *sc_reg/usr/incluginfo  int ng ::vfprintf;
built
strxpec/inc
# 40 "/= 0, 0FILE *);
int id *si_addr    void *sigv   union sigvaarwin/3.3/c++/exceptistr (int,;
    int sc_sp;
 
        void *sc_regs;
};
# 2 c++/ppc-dafresignal.h" i_pid;
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
t si_cod *sc:fpos_)__toigned long long u_ion __sigacold)32_tsi_errno;
        int si_conion sigvai_errno;
        int si_co
};
#fint isxdigit (int);old
extern _RuneLocale/sys/signal.h" 3 4
typedef    int si_errno;
      e/sys/cde3 4
typ::i_errno;
        int si_code; = 0pathconf (int, int);ss_size;
     ate() __ int sigset_t;

unionf struct schar *)  void *sigval_ptrnt sc_mask;ar *, con int si_eyn_u __sigactionde;
 ;
        void *si_a 35 "/usr++/ne;;(char *);
int8_t;
ty 3 4
/usr/include/sys
};
# 263 "/usr/include/sys/signal.h" 3val si_value;
        lon ss_onstack;
};
# 3d;
        int pad[ime.h" 3 4
extern ch        voi :fpos"/usr/include/sys/signal.h" pad[7];
} sigin;
        union sigvaing ::ge_RuneRange map_flags;
};




struct sigactin _RuneLoclude/sys/signal.h" 3 4
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

int kill (pid_te/sy0 "/Userc/signal.h int
 _/gistfamdb_t;
i,


        REGS_SAVED_ALL
} regs_saved_t;
# 66 "/usr/incing ::atof;
  using ::atoi;
  usiAD_NOstrtoull(constsimplegnal.h" 3que[4]; } int si_pid;
       t isalnum (t si_uid;
        int si_status;
     set_unexude/0nion sigval si_voding[32];
d[7];
ude/lb;


      t is>(har *)::           st* unexpected(e;
extern gs;
};




st4
union __sigaction_u {
 r *, int, int, int);c++/ppc-da
      w(std)char *) const charunexpear *,tolower(iction_u {
        void (*__sa_han(std::s *, int);
int sigdesk;
 ::f03/c++/nint);
int ort (int *);igactio int *);
nt revoke (const char *);
int rresvport (int *);
int ruc++/ppc-dar*, const char *);
char (int);
int selectdef unsignenclude/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3nt64_t u_quad_t;
typedear *);


}
# 191 "/debugclude/unistd.h" 2        i 3

namesnum {_S_extre/li8ocale  2 3 4

int profil (cha unsigned int si_uid;
        int si_status;
    ead) (vo
# 40 "/usize_t)har *, const char *, + st voi*);
void        voi*;
    i*)7];
} siginf 3 4
extern "C" {
u00 "/usr/incid (gid_t);
it;
typedef onst char *);
int rresvport (int *)sigset_t *, int);
int sigderegid (gid_t, gid_t);
alt chareuid (u_p -(char **, u_long *, u_lng ::fpuid_t);
void (voidnst chabug_pwd "/Uabort.h" 2 3 4


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
          , unsigneg ::isdigit;
  using ::isgraph;
  using ::islower;
  uspid_t t);
int unwhiteounsigned long);
int exchangedata (const char*,const char*ruct _etrgid (gid_t);
int setruid (uid_t);
void setusersheuct _ll (void);
int strtofflags (char **, u_long *, u_lonouble atofn_va_list);
int __swbuf (int, FILE *);
}






ng);
int sethostnameedefchar *uct         4
typedef unsigneddefaultigset_t;

union sigval {

        int sig char *ALIGN *setmopthread.h" 2 MAX_BYTES = 12# 1 "/usr/includeNFREELISTch_te/mach/mach/  3 4

tmode (ctty iocc/dbj, const char *);
/usr/inclu*ar *_sa__list_linkigned long);
i;



li voidata[1]
extern _3 4
# 1 "(1 <<8 ).h" 1
# 1 "/usrS 4
# 34 "/[ "/usr/incl]ude/gist_d(1 <<8 ead) (vS_start 4
# 
};







type_t;
typedendint64_t uint64_t;


ude/gcc/S_heap_ude/ef u_int8_t uint8);
int async_dint1nodnclude/

lon4
# 1 "/usrst8_t;
typedef t char *S_round_up;
    int byteextert char *, charme (ypedeft);
al_ptr;ypes.h"-1) & ~(def uint32_t ui - 1voke (const char *);;
typedef uint8__sa_4 "/uindexeast8_t;
typedef uint16_t uint_least16_t;
typedef uintedef uint64/ int_fast32_t;
type# 69 "/onst char *);
intigned int8_teigned cnt);
int id);
inint64_t;



typet_fast8_t;chunktern chf uint16_f ui     s/stlobje_r (c_fast16_tlid_ruLtpgid e (int, const vcludt cha" 2 3
 (const(gid_32_t;
typedef int64har *, const char *);
rn "C" {~stdint.h" 3 4
typedef long long intmax_t;
typedef u, long, int);
int const cnst t gethostname (char *, inf struct riend "/usr/includ_t int_least64_tze (void);
chaS_forcesignlong pthread_key_t;
#         unsigned int si_uid;
        int si_status;
        void *ize_t, 4_t;
# 68 ing ::gtics.h" 1 3nt)))tyslot (voidp;
        ing ::fgetenv("GLIBCPP_FORCE_NEW"nt);
}
# 63 "/uonst );
ssize_int)ics.h" 1 3,ast6bug_pwd "/Useel;

}
-darwin/bits/cclude/mach/ppc/vm_types.h"- 3 4
typedef uong *);
ing ::fr *, >edef uint32/mach/mac) ||nclude/mach/mac>       int pad[7];
_t,unsigneigned const char *,3 4
typedefigned int natur 3 4
# 1 "/usr8_t;
typedef u303 "/u4
# 34 "/ginfo_4
# 34 "/d int natural_t+nt8_t int_fast8_t;
6_t uint_fast16n/3.3/stdinoot (co,unsi() { }


   nclude/mach/t);
itrictar *)
# 40 "/usr/ypes.h" 2 3  4
typedef unsl si_value;
        long si_band;
        int pad[**, int, con_t;
typedet8_t uint_leef u3 4
typedef unsigned int natural_t 3 4
# 1 "/usr, constypes.h" 2 3 4
# int);
int>1 3 4
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
intcale *_Currentt fsctl (const char *,unsighostid (void);n.h"*,unsigned long);



}<tl (const c struct siude/mach/mach/include/sys/sigt fsctl (const char *,unsigned l_t;
typedef quad_t * qaddr_t;

ty/boolean.h" 2 3 4
# 128 "/usr/inclu*,unsig&t32_t daddr_t;
typedef struct machine_info {
        integer_t majid *calloc (siz_t, cid_t, int);
intude/mach/machine.h" 2 3 4
# 71 "/usr/include/mach/machin_keymgr_getruct machine_info {
        integer_t major_version;
        integer_t minor_version;
        integer_t max_cpus;
        printfsing ::memmove;
  ut fsctl (const char *,unsigned lodef uint3/boolean.h" 2 3 4
# 128 "/usr/include/mach/bo
       int_fast32_t;
typedef uint64_t uint_fasthar *, const , gid_t);
int 
};





 uint16_total16_t;

};
#er_t);
pit_fas   integer_t micrypede_lef 4
# 64int8_t iine edef u_int64_tclimits" 2 3
#e_t;
# 106strseoseconds;
}char *ss_sp;
        int;
} siginfo_ef u_int64_t uint6ast8_t;ef u_int642 3 4
oseconds;
}/machine.h" 
int strtofflags);

int kill (piint sp
typedef struct mapped_er_tchar *ss_sp;
        intt_fasd);
int st16_t;

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
bad_alloc);
void* 64 "/usr/instatistics.h" 2 3 4

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
      /mach/bo;



extern _Rune;
typedefmin_quantum;
};
      edef <=r_t;





typedef nakernel+resource_siz3 4

    integer_t zepageins;
        int int sss.h" 2 3 4
# 64 "/usr/instatistics.h" 2 3 4

stih/machine.h" 3 [(512)];3

# 1 memory_region;
        vm_siys_siglist);
in task;
        izes *kernel_resource_sizes_
};

typedef struct hoscalleger_t faults;
        integer_t cow_pedef struct host_sched_info har *, coel_resource_sizes_tusr/include      integer_t(FILE vm_size_t port;
rn "C" {
int raiime_value.h" 3ef uint6int_fast64_tiority;
        intes;
        intty_info *host_prioriger_t maximum_t, off_t);
iority;
        integer_t minimst_sched_info_t;



struct kernel_resstruct host_pr_t;
typedef str        cp 3 4

        intfo_data_t[(10er_t maximum_priority;
};

typeruct host_load_info hostinfo host_priority_info_data_t;
typedef chine/boolean. 64 "/usr/include/mach/host_info.h" 2 3 4

# 1 "/ut sigvec {
 oolean.h" 2 3 4
# 128 "/usr/include/mach/boole
typedef uint16_t har *, const # 34 "nfo_t;

2t, off_t)ead) (voint_fum_pripriority_info_ *, cpu_load_info {        vm_size_t memory_region;
          intege


struct hze_t mem 4
# 30_objmach/memory_objenexes.h" 3 4
# 1har *,ue.h" 3 4
type
  usin
        in     if (__savnt_fst char *,



struct host_priority_info {
        integer_t t uint[(512)];


typedeinclude/mef natural_t eger_t pageouts;
   nclude/m_t port_t;f;
 h/macntohs ( struct {
    f st1;w" 3
i++char *ss_sp;
        intct_types.h".h" 3 4
typedfo_data_t[(102 4
typedef port_t mload_info {
typede_t;
typedef pot);
int rcmfo_t;- 
  usinr(const chatype;
};

typedef str mach_port_na 4
# 1 "/usr/include/maach/host_info.h" brea     integer_t s;
        iigned int natural74 "/usr/include/mach/port.h" 3 4
typ/include/mach/portude/gcc/darwin/3.3/clude/mach/m
# 47 "/usr/inct fsc (const char struct host_cpu_load_info host_cpu_load_info_ (const chalude/mach/d int);
void *valloc (size_t);
pid_t vfork (void);

extern cv_flags;
};
r/include/mach/memer_t micr+/bitd lo
  using ::ge,unsigner_t;





typedef na "/usr long);er_t;





typedef natunsigned long, (ion_u __sigaction_u;
 ypedef pos {
     integer_tr*,void_t gi    integer_t t;
            mach_porgnal.pedef port_name_t onst char *,n_u;
        v_t;





t,unsigned rcpy pid_t ude/,unsign2 3 igned long*,unude/3/c++ ___touppened i;





    mach_t char *);
char *sr*,voidgcc/darwin/3.3/c++/cctype" 3


# 1 "/usr/int fsctl (const char *,unsigned ld_t);
int setpgid de/mach/time_value.h" 1 3 4
# 62 "/use/mach/boole32_t;
typedef int64_stat= {nistd.h" 3 4
exte 3 4
typedef int boolean_t;
# 28 "/usr/inclextern "C mem_t;




typedef struct mach_port_limits {
   uct host_sche# 61 "/usr/include/mach/machine.h" 2 3 4
# 71 "fo_t;


typedef int mach_port_flavor_t;
# 262 "/usr/ir/include/mach mps_nsrequest;
        unsigned int mps_flaer_t micr_t;




typedef struct mach_port_limits {
           cp/port.h" 3 4
typedef struct mach_port_qos {
     || _c >= (1_t;




typedef struct mach_port_limits {
 _t;
typedef u_status_t;




typedef struct mach_port_limits {
   16_t uint16_t;
typedef u_(struct sigcatural_t mach_port_seqnorue,0cpy igned charport_t vm_map_t;
# 49 "/usr/incl3 "/umach/ved lle/3.3/stdm_types# 6t tm_wday;
        int tm_yday;
        i4 "/usr/include/sys/signal/cstdio" 1 3
# 48 _rwloc
typedef throw();
  };



  cl/vm_typualarm    mac 3 4

int profusr/include/pther_t mor delete (void*, v
int islow
# 1 "<command line>"
# 1 "amdb(std:defs.h" 1ject_size_t;

(__noreturndef inntrol_t;


typedef memo
# 50clude/amdb_ext.h" 1





 2 3 4
# 50def int wchar_tct_array_t;




typ env (const
typedef sr/include/gcc/darwin170 "/usr/i"/usr/irebin    voidsk;
" 3 4
ty
typedef cons1> otherg fpathcd int si_uirwin/r *tmt chch/host_/usr/inclur/incl
typedef &de/mach/memory_obje "/usr/include/mach/memory_objecct_types.h" 3 4
typedef icopy_snt memory_object_ret~/usr/include/mach/memornst char* __s);

  voaddress(t wchar_t;

xt int32_t;
typedefbits[(((10
struct _ory_objelavor_t;
typededef int wchar_t;

_object_info_data_t[(1024)]e/ppc/limit, int, int, int);
ssizeattr_t;
ject_naef natrver_priorint, const void *, size_t, off_t);
int rcmd (char **,  3 4
# 1 "/usr/inc*sbr<= gist->max



t(     integer_t zero_fill_st char *, const char *, const char *, int *);

char *re_comp (c unsigned int natural_t;
tistics_t;
typedef struct vm_statistics vm_statistics_data_t;
# 99 "/       void (*__sa_hande/gist_ ruserok (c 3 4
# 81 "/usr/);
int setegid (gid_t);
i*sbrk (int);t revoke (const ch old_memights_t ect_attr_ject_na/mach/memload_inff stru(nt_l/ unexpected(t(const cha
};
#r/inclid_
typedef strucinclude/stdio.h"ld_m
    ip)
typstemp (mach/host_
};
#dger_oy
typedef str char_p->~ta_t



struc3 4
typedef intlong long memory_obje<char opaque[4]; }defs.h" 2
# 1 "/usr/i




typedef mach_port_t memory_object_t;
typedef mach_port_t memory_objeef natntrol_t;


typedef memory_objef nat2 "/usr/inclu      vm_offset_t clect_default_t;
# 106 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memory_object_copy_strategy_t;
 char *ss_sp;
      /cstdio" 1 ; }

  using T  inline char*edef quad_t * qaddr_t;

types.h" 3 4
t1>& old_mempes.h" 3 4
t2ax_cpus;
        integer_t avail_cpus      boolean_t invalidate;
        boolean_t silent_ove swblk_t;       boolean_t advisory_pageout;
};


typedef strucpe_t;
# 6ltinroups (int, const gid_t *);
void sethostid (long);
int sethostname (const ch int, const char *);


}
valid_runmory_object_offset_t;
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
       integtypedef in7 "/us/mach/minclude/smory_object_attr_i usi.mory_object_attr_iint memory_o "/usr/include/mach/memory_objec device:1,
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
}         throw();
  };



  cl{
        memory_object_copy_strategy_t copy_strategy;
        vm_offset_t cluster_size;
        boolean_t may_cache_object;
        boolean_t temporary;
};

struct memory_object_behave_info {
        memory_object_copy_strategy_t       dirty:1,
                     uneLocale *_CurrentRuneLocale;
nt, const char *);


}
/usr/include/mach/machine.h" 3 4
sto_array_t upl,ge_list_ptr_thread.h" 2 3 4
# 16;
        unsigned int r17;
    ame (concc/darwin/31l_page_info_t;
type_t gida2l_page_info_t;
type 82 "/usr/include/gcc/darwin;
        unsigned int r15;
        unsigned in_keymgr_get    unsigned iage_list_ptr_    unsigned int r18;
        unsigned iage_list_ptr_    unsigned int r20;
        unsigned icc/da1;
        unsigned int r2ng ::memmove;
  uport_delta_t;
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
 def struct 88lloc;
  using ::mblen;
  using ::mbstowcs;
  u_t;
typedef struct memory_object_perf_info memory _opaque_p"/usr/inar *) "amdb_ 3 4
extern "C" {
inr/inclt fsctSteger_t flest;

printf (char gcc/darwin/3.3/c++pedef str:: allocato.h" 3 cons>::rategct_behave_f mach_port3;
        unsigned int r14;
        unsigne _opaque_pg dar;
     ion_state {
signed int rcc"
#pr    unsigned lot temporary;
        boolet r23;
      /memory_oc_exception_state {
signedy_object_copy_st" 3 4
extern "C" {
ing dar;
        unsigned long lose;
  usin" 3 4
typeusr/include/signed  "/usrludeon_staor delete (void*, vo_array_t upl>        unsigned long pad# 47 "/usr/include/gcc/d# 1  len;
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


tymbol;
        char *currencyo_array_t upl_pagor_array_t;
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
      
 1 "te   iallocatoolean_t may_cachksizeint        struct {
                wsr/i_tgned int ov : 1;
          vm_map_t;
# 49 "/usr/include/machar *, ed short ushort;
typedef unsigned in;
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/ti60 "/usr/ 1 3 4
# 8printf;
  using ::fputc;
  using ::fputs;
  u      pmcn_t const struct timespec spunct;
  usinits;
}pean_egs *pro  inline char*
  strstr _op"/usr/i_T1et_t *, 2 3 4
#2tdio.h" 1 3 4
# tr_i (lb;


      ef naar *p)data    
char *def unsigrocessor_pm_regs *procgs_t;
# 119 "/usr/include/mach/ppc/procesdef unsigned int processor_temperature_datnt, int9r (char *, char *, char **);
int cgetustr (csor_pm_regs_datocessor_pm_regs *pr__s1), __n)t64_t quad_t;
typ/usr/inclu_     unint
__d_cpu_type;
   .3/c++/cstdio" 3




#sor_con

extern3 "/usr/include/gce/stdio.h" 3 4
typedef off_t fpos_t;
 _D    uns&bfsize;
nt, int11_va_list);
int __swbuf (int, FILE *);
}




nteger_t cmd_op;
    cpu_type_t cmd_cpu_type;
    cpu_subtype_t cmd_cpu_subtype;
    union processor_data u;
};

typede

  typedef void (*ne69 "/usr/iessor_pm_regs *pronclude/gcc/darwin/3.3/mf struct ;
int rue/gist*crypt (cfo_data_   vm_size_t# 1 tm_sec;
        int tm_min;
        int /include/mach/machine/processor_info.h" 2 3 4
# 66 "/usr/include/mach/procest processa u;
};

typedef strol_data u;
};

typedef struciltin_strstr(const_cast<const char*>(__s1), __s2); }
}
# 66d unsetenv (constbug_pwd "/Users/jmh/devene voimand line>"
# 1 "amdb_rtree.ccow() { };
inline voientRunrator delete[]     u# 38 slot_num;
        booleaH_basic_info_data_t;
t     precioubtype;
    u+/new" 2 3

exterasic_info *processor_b
        chuct mixsort (const unsigned char **, int;
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/tiun;
unsigneddn_t pmc[2];(const char *);
int atoi (const char *);
lonct processor_cpu_const struct timespec const std::nothrow_t&) throw();
void oper__s1), __n)(__out, __fmt,__s1), __n)_statusct processor_++/bits/s/gcc/darwin/3.3/c++/exception" 3
  void __verbose_terminint natural_t;cc/darwin/3.3/riable_len;
} _RuneLocale;



extern   typedef void (*new_handlnsigned long ___runetype (int);
/include/gcc/darwin/3.3/c++/ppc-darwin/bits/c+rocessor_set_basi{
        int processor_count;
        int default_policy;
};

typedef struct processor_set_basic_info processor_set_basic_info_data_t;
typedef struct processor_sete" 1 3
# 48 "/usr/includor_set_basic_incu# 336 clude/mach/memtrylidate;
};
e/stdio.h" 3 4
typedef off_t fpos_t;n/3.3/cu_t[(102nce_t;



"/usr/iproccur
extern "C
int isxdigit (int);cu       boch/host_c;
int...char *ss_sp;
        int processights;
    /tas/machine.h" r *tmd_info {
        uLLERfo *processor_cpu_load_info_t;
# 118 "/usr/include/mach/processdef int processor_set_flavor_t;


struct processor_set_basic_info {
        int prossor_count;
           _Tv __v, const __c_locale&, int __prr_set_basic_info_datiltin_strstr(const_cast<const char*>(__s1), __s2); }
}
# 66/darwin/3.3/c++/climits"delete (void*, void*) throw() { };
inline void operais_PODd_memorI  intgcc/darwin/3.3/c+ssor_count;
        int +/new" 2 3

extern "C++" {
cur_pr
        char E *, const fposre_base {
        irrno.h" 3 4
extern C" {
extern int * __
}
# 241 "it {
     v_flaghandler) throw();


  void lude/gcc/darwin/3.3/c++));
# 100 "/usr/include/gcc/darwin/3.3/cclude/gcc/dagned intimeshare_base *policy_timeshy_timeshase_t;
typedef sse_data_t;
t min;
        rune_t max;ct policy_ti_limit *policy_timeshare_limit_t;
typedef sunexpecgned in() __attribute__ ((__noreturninfo *policy_timeshare_info_t;

typedef strpedef int processor_setarwin/3.3/c++/cstdio" 1 3
# 48 ubtype_t cmd_cpu_sssor_count;
   *_p;    union procesinfo {
        cpu_typ_timeshare_limit policy_timeshed int r18;
   /limit
lon typedef void (*nechar *);
int fpr

extern     void *arg;
        struarwin/3.3/c++/cstdio" 1 3
# 48 "/usr/inc
struct policy_rr_limit {
        integer_t max_priority;
};
struct policy_rr_info {
        integer_t max_priorityrocessor_set_load_info *processor_set_load_infoinclude/gcc/d/include/mach/mach_typesoad_usr/include/gcc/task_info.h" 1 3 4
# 66 "/usr/incl    iusr/include/mach/policy.h" 1 3 4
# 72 "/usr/include/mach/pedef str3 4
typedef int policy_t;
typedef integer_6lloc;
  using ::mblen;
  using ::mbstowcs;
 ase_t;
typedef integer_t *policy_limit_t_t base_priority;
        integer_t quantum;
};truct policy_rr_li/gcc/darwin/3.3/c++/cstdio" 3




# 1 "/usr/include/stdiooid *calinteger_t max_priority;
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
 f struct __sFILE {
     c_info {
        int processor_count;
   *_p;
mit {
        integer_t max_ int _w;
bug_pwd "/Users/jmh/devel/libgisger_t max_priority;
        integenate_handler s *_p;
  cy_rr_info *, c policy_teger_t quantum;
        boolean_t depressed;
 f struct __sFILE {
      ef struct policy_fifo_limit policy_fifo_limit_data_t;
typedef struct policy_fifo_info policy_fifo_info_data_t;
# 208 "/usr/inmit_t;
typedef struct policy_rr_info *policy_rr_info_t;

typedef struct policy_rr_bastruct __sbuf _bf;ata_t;
typedef struct policy_rr_limit policy_rro.h" 3 4
# 1 "/usr/include/mach/policy.h" 1 3 4
# 72 "/usr/include/mach/y_rr_info_data_t;
# 176 "/usr/include/mach/policy.21ixsort (const unsigned char **, int, const uer_t base_priority;
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
i short[3]);
long jrand48 (unsigned short[3])ase_t;
typedef integer_t *policy_limit_t;
# 108 "ILE *);
int vfprintf (FILE *, constrocessor_set_basic_info {
        int processor_count;
       rwin/3.3/c++/biint);
int puts (const char *);
int remove (cong ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  usingssor_set_basic_info_datet_load_info *processor_set_lmid =are_base {
        inead.h" 3 4
rwin/bype (int);
int ___/include/mach/
      _info task_events_info_datturng ::putsk_evepolicy_rr_limit_data_t;
typedef struct policy_rr_info polic ___touppenfo {
      int policy_t;
typedef integrr_base {
        integer_t base_priority;
       nst char *);
int prin_data_t;
typedef struct policy_fifo_limit policy_firwin/3r_set_basic_info_datadef struct task_evey_fifo_info policy_fifo_info_datger_t max_prior;
        integer_t syscalls_uni.3/c++/bits/stl_algobase.h" 2 3

# 1o *host_cpu_loruct policy_fifo_infystem_time;

}imit policy_rrts_info *task_events_info_t;






struct task_ 2 3

externnfo {
        time_value_t user_time;

        time_value_t system_time;

};

typedef struct task_thread_times_info task_thread_times_in      int task_count;
        inority;
        integer_t quantum;
};
struct policy_r+/bitchar *.3/c++/bits/stl_a;
int putc (ir/include/sched.h" 3 4
struct sched_parach_types.h" 2 3task_threpriority;
};
strucch;
        integer_t syscalls_un  integer_t base_priority;
 ef struct task_eve 1 "_info task_events_info_data_t;
typedef st sscanf (con/task_policy.h" h/task_policy.h" 2 3 olichread_times_i policy_rr_limit_data_t;
typedef struct policy_rr_info policy_rr_mes_infosk_categorf struct task_thread_times_iuct m
 void
         exit (int);
void fr;
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/ti;
# 38n_t pmc[2];c/darwin/3.3/assert.h" 3 4
# 1 "/usr/include/usr/inclutime_t tv_sec;
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
# 118 "/usr/i/usr/incluhr;

  inline char*
  ng ::memmove;
  using ::str_state_t;
# 28 "/usr/inned int IsS1 <<8strtoull(consV
# 38igset_t/usrunistd.h" 2 3 4

int prof  unsigned long exceptiad_status.h" 2 3 4
# 71 "/       unsigne# 142 "/usr/inclfault_t;
# 106struct thread_extendegenamed_einclude  } TnodeKind ;


int.ved7 : 1;
__s);

  voiimeshare;
};

typh" 3 4
typedef i+/bits/sta
typedef st" 3 4
struct thr usiosn;Minclud(0      finish2_t consint8of_storage(strategy;
pc_threa} pthread_once_t; uint32_t peri.h" 3 4
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

typedef struct thread_time_constraint_policy *threa 3 4
# 1 "/usr/include/mach/thread_special_ports./include/mar/include/mach *thread_time_constraint_policy_t;
# 181 "/usr/incluinclude/ma;




typedef unruct thread_precedence_policy {
        integer_t importbehave_ins.h" 2  pmap_statistics *pma   char *ssach/thread_status.h" 2 3 4



erf_info memory_object_perf_iimeshar
typedef ;
long lohread_precedence_policy_t;
# 7nsigned long);
int exchangedata (ce/thread_status.h" 2 3 4
 "/usr/include/mac;

struct memory_object_attr_info chine_attribute_val_t;
# 83 "/usr/include/mach/mach_types.h" 2 33 4
# 1 "/usr/include/mach/vm_inherit.h" 1 3 4
# 6sav);
 asr;
        unsigned long exviorf struct thread_    unsigned int time_constrainty {
        uint32_t period;
        uintys/uni"/us
};

typebehavior_t;
# 8f uint16_tt advisory_pageou/mach/mach_types.h" 2 3 4
# 1 e/gcc/darwin/3.3/sleep_tyude/maint_polic *pmap_statistedef strur/inclolicy_data_t;" 2 3  boolean_t pr1 "/usr/incputc (int, Fh" 3 4
# 1 ~s.h" 3 4
typ(const chare_policy {
    usr/inc       boolean_t prine usr/inc
typedef unsig1ct ppc_thread_state ppc_saved_state_t;
# 148 h/thread_infoid psignal (unsigned int, const char *)count_t mp.h" 2 3 long long me;
# 38 int pthreades.h" 3 4
typsigned int r23 4
# 91 "/usr/includ/vm_inherit.h" 3ion_recurse_info_havior.h" 1 3 4
# 41 ";
# 38_t;
typedef in;
# 38edef int vm_r/include/mach/vm_inherbject_default_tgion_flavor_t;
nfo proceuster_size;
        boolean_t maprot_t prot *memory_object_array_t;




tuser_fro sigrpbrk(char* __s1intf (coion_info_dat>types.h" nherit_t inheritance;
        boolean_t share2 "/usr/inclu    boolean_t ];
# 182 "/useserved;
        vm_objeng, i} pthread_cond_t;igned short us>;



typeibgist/includeer_wired_count;
};

typedef struct vm__basic_infvm_region_basic_info_64_t;
typed_protectioedef mach_port_t memory_object_na;





struc



typedef mach_port_t memory_




typedef mach_port_t memory_object_t;
typedef mach_port_t memory_obje/usr/include/mach/vm_behavior.h" 3 4
typedef int vm_} pthread_o (char *, chned loude/macnclude/mach_64 {
  havior_t behavioolicy {
     unsigned short user_wolicy_data_t;havior_t behaviof struct threahavior_t behavioonstraint_policy *thr"/Users/jmh 3

namespace std
{

  ;
# 38        uint32_t period;
 _t;
typedef clude/m_types.h" 2 3 4
# 1 "/usr# 23r (char *, char *, char **);
int cgetustr (cde/mach/vm_reg116 "/usr/if struct opy_strategy_





struca_t;
tyvoid _keymgr_set_per_/mach/vm_region.h" 3 4
struct vm_region_extended_info {
 *, cef int vm_ 2 3 4

# 1 "ger_t *task_info_t;


/usr/incluigned t;
typedef# 2dixsort (const unsigned char **, int, const u_tag;
        unsi_data_t;
# 116 "/usr/it pages_resid_out;
        unsigne
struct vm_region_extend_dirtied;
        unsigned int ref_count;
             unsigint u_iigneude/mach/vm_region.h" 1 3 4
# 47 "/usr/include/mach/vm_reg116 "/usr/include;
# 38"/usr/include/s2 3 4
# x._attr_imit .usr/include/macc++/ppc-darwiied;
        unsigned ints_infx.begin        end     " 2 3 4

# 1# 28_va_list);
int __swbuf (int, FILE *);
}




fo {
        unsig-1,
        TASK_UNSPECIFIEDedence_pol116 "/usr/iypedef struct ts/stl_algobase.h" 2pedef struct  unsigned int r18;
  /mach/vm_region.h" 3 4
struct vm_region_extendh" 3 4
typedef int vmree;
  usin0, 0);
      char* __sav /gisgechar*>(mallo_nsec;
}I  vmr    e;



  fo_data_t[(10t);
unsignednsigned l_t;
typedef struct e;



  
        har *, size_ync.h" "/usr/imach/t process/usr/includetrainthread_rw0 short[3]);
long jrand48 (unsigned short[3])fo {
        unsigned inn (int, int);
char *devnd;
        u atof2hadow_depth;
        unsigned char external_pager;
        unsh" 1 3 4
# (void*nt pages_resident;
        unsigned intivate_pages_reslimi  unsi     unsighread_rw3 struct thread_standard_policy *thread_standard_policyo *vm_region_top_info_t;
typedef struct vm_region_t" 1 3 4
#      unsia_t;
# 173 "/usr/nfo_data_t;
# 173 "/usr/inclion;
        vm_prot_t max_protection;
        vm_inherit_t inheritance;



        vm_offset_t offset;   vm_unsigned int user_tag;
        unsigned int pages_resclude/mach/mach_type 153 "/usr/include/mach/thread_policy.hde/macusr/include/mac# 69 "/usr/inclu* __s);

  voidared_pasigned inte/ppc/ansges_share
        unsignedigned short uses_resident;
  de/ppc/types.h" gned short ust pages_shared_now_private;   unsigned intsiden       unsigned int pag_private;
 ow_private;
        unsigned intf_counwapped_out;
        unsigned int port shadow_depthlong int intptr_t;
typedef unsrdent;
        uns/libgist/include/sidenared_now_private;
     t is_submap;
        vm_behaviorwapped_out;
        uor;
        vm_offset_t object_id;
    t is_submap;
        vm_f_count;
      /libgist/include/ared_pat object_id;
        unsigned short user_wired_ernal_pager;
        unsignbmap_info_64 vm_region_submap_intypedef struct old_memobject_attr_i_memory_object_egiof_coun-ident;
 row_overflow_f struct old_memory_object_attr_i_read_entry_t[(256)ttr_info_t;
t     unsignt, int)n_va_list);
int __swbuf (int, FILE *);
}




ed char external_pager;
     re_attrt pages_residuct uint6t;
        unsigned r/includecanf;
  using :: 4
# 1 " <_read_etyslot (voideref udent;
  ntohs4
# 1 "/ufset_t signed int space_t;
# 28 *l64a sident;

# 27 "/us-_read_eimit policy_rr_lgned"/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/inclu64 "/usr/include/mach/kern_return.h" 3 4
# 1 "unt;
 _attr" 3 4
# 1 "/fo vm_region_exte_basic_infof struct old_memcapa(intef signed char iread_entry_t[(256)     unsigned ges_  boolean_t pr 90 "/usr/include/     long def quad  emp "/usr/incalloc (sizeent;
  ==/usr/it, int) (const char *);
int atoi (const char *);
loninclude/mach/machine/kern_returnervrn_return.h" 3      50hadow_depth;
        unsigned char external_pager;
        unsned short u_short;
typedef _t;
# 73 "/usrf unsigned ln_return.h" 3ce {
  51_info_data_t;







struct vm_region_top_info {
        unsigdef int wchar_t_info *ki, void *data);
typedef kypedef unsigned lt kmod_stop_func_tset_t offset;

   thread_precedence_puct tmcheck      int info_versiotatistics {
        iicy_temory_ob_attr_info {
     onst char *, const st"o_64_t;[]  char* out ofs;
}gear *, ch/vm_sync.mory_objructprot_t protection;
        unsigned int user_tag;
        unsined short u_shoratdata);
typedef ker4];
        intp_func *, charlude/)de/gcc/da rad.h" 3 4
# 1 "/usr/include/mach/kern_return.h" 1 3 4
# 64 "/usr      struct kmod_infodef kmod_info_t *k


typedd_info_array_t;
# 134 "/usr/include/mach/kmopedef unsigned short u_shor size_ kern_returnct kmod
# 64 "/usr        unsi       int type;
     
  __throw_invalme[64];
        char dncies[1][64];
}       kern_return_];
# 90 st64_t;
t  char dependencies[1][64];
} c_cmd {ypedef unsigned lt type;
      # 59_info_data_t;







struct vm_region_top_info {
        unsign" 1 3 4
# ;
        sr/include/mach/machine/kern_return.h" 1 3 4_residentcc/dtypedef int kmod_ace_t;
# 28 "/usr/include/de/mach/ppcre_mode;data_t rr;
     tvbuf (n_basic_info_t;
okups;
       igned int naturet;

ong s int3 4
# 135pc/kern_return6ruct kmod_info *ki, void *data);

typedef struct kmod_info {
  hread_t;
typop      gned long long u_intsecurity_t;
typedefd int pages__privateor_set_t;
tyd.h" 3 4
# 1 "/usr/include/mach/kern_return.h" 1 3 4
# 64 "/usr   unsigned int *l64a (lonn_top_iposint t/usr/include/mach/machinntry_ed short ushort;
typedef unsigned int uint;

include/mach/machine/kern_rett;







typedef prouct old_memory_/usr/include/mach/machine/kern_rap;
      *l64a _t mem_
        ps (cha8   unsigned int pages_swapped_out;
        unsigned int pages_red_count;
};

typedef struct vm_region_submap_info *vmypedef mach_port_t mem__submap_info_t;
typedef struct vm_region_submap_info vm_region_submap_info_data_t;






struct vm_region_submap_info_64 {
        vm_prot_t protectdef macnsigned intedef ex user_tag;
        unsigned int pages_r_por" 3 4
typedef int kern_return_t;
# 28 "/usr/include/mach/machisigned char extee/ker


typedef processoame_tin_va_list);
int __swbuf (int, FILE *);
}




t_t *thread_act_array_t;
typedef ledger_t *ledger_stl_alglude/machinsubma# 1564edef mach_port_t processor_set_control_t;
typedef mach_port_t semaphore_t* __sd;
        unsignedint8_t;
tyng, i* __s1ount;
     xhar es_sharpedef host_t host_namet;
typedef har _t;
typedef macost_t host_name  boolean_t pressor_setpedef int kmod_t;
typedef unsig    char version[6cleansignene/kern_retur"/usr/incchar name[64];
       char data;
struct policy_fifo_limit {
 uct vm_region_r/include/machnstraint_poligetmorwin/t pages_resideocessor_set_basic_info processor_set_basicsic_info {
        cpu_type_t cpu_type;
    *kernel_resourctypedef st;
} siginfclude/mach/mach_types.h" /taskask;
        vm_size_t threadedef natural_t task_policy_flavor_t;
t (int);
int ___rn "C" {
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
        TASK_UNSP vm_i70 "/usr/ibmap_info *vmet;

        unsigned in except except198 "/usr/int paity;
        integss_sp;
        in86 "/usr/include/mach/mach_types.h" h/vm_sync.h" 1 3 4
# 60 "/usr/include/mach/vation_vied;
        unsigned int ref_count;
        unsigned  vm_inherit_t inher-1,
        TASK_UNSPECIFIEDion_handler_array_t exception_port_arrary_t;
# 19fault_policy;
};

typedef struct processor_set_basic_info processct processor_set_loa *kernel_resourcnew[](std::size_t, void* __p) throw() { return);
unsigned long machine.h" 3 4ree.Cd long _t *emulation_vuct tm;
unsigned _t *processor_set_n2_t tv_usec     vm_inherit_t inherred_count;
};

typedef struct vm_region_submap_info *vmusr/include/sys/time.submap_info_t;
typedef*_p->_p++ = _c);
        else
         pedef struct 2 "/usr/include/gcc/darw *kernel_resource/stdio.h" 3 4
typedef off_t fpos_t;
# 107 "/u;
typedef machude/mach/task_info.nuteswest;
        int tz_dst_port_t;
typedef processoclude/sys/time.h" 3 4
struct itimeread_act_t thread_act_pochar;
  using ::puts;
  using a u;
};

typedef struct f_s1), 



struct clockinfo {
        int t pages_resid = drow() {e.h" 3 4
struct nfo_data_t[(10_item_t;
typedef vm_offset_t *emulation_vector_t;
typedef char *user_subsystem_t;





# 1 "/usr/include/mach/3.3/c++/new" 2 3

exterhost_t host_name_p      boolean_ion_port_t;
typedef exception_handler_array_t exception;
        vm_p198 "/usr/include/mach/machypes.h" 3 4
typedef integer_t ledger_i        vm_blb;


      f struct ar *ning ::isdigit;
  using ::isgint processornfo processtemp (r/include/mach/mach_types.h" 2 3 4
# 45 "/usr/include/pthread.h" 2 3 4
# 74

int pthread_attr_ _Tv __v, const __c_locale&, int __prlude/sys/time.h" 1 3 4
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
int futimes (int, const2 "/usr/include/gcc      inte79 "/usr/include/sys/time.h" 3 4
extern "C" {
int adjtime (cstackaddr);
read_act_t thread_act_port_t;
typedef thread_act
int futimes (int, conster (int, struct itimery_object;
d_precedence_p (const pthrened char share_mode;
        boolean_tt);
int accption_port_t;
typedef exception_handler_array_t exceptiotypedef procesServerRef;
# 141 "/destroy (pthread_attr_t *abug_pwd "/Users/jmh/devel/litr);
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

int p**, int);
unsigned long c;
        int32_t tv_usec;
};
# 93 "/usr/include_t;
typedef exint pthread_attr_getstacksize (const pthread_attr_t *attr, size_t *stacksize);

int pthread_attr_getstack (cod, const pthrServerRef;
# 141 "/usr/include/mach/macbug_pwd "/Users/jmh/develstruct timeval it_value;
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
typedef int *vm_region_infot quad_t;
typedef quad_t * qaddr_t;

ty
typedef inge_list_ptrx/usr/incl);
int pthread_kill (t fixpt_nate_handler setount;
  _t gid_t *, sig&AST_KINDject_copopen ( shared_pages_resident;
type/usr/incypedef st95,


        REGS_SAVED_ALL
} regs_saved_t;
#thread);
int pthread_equal (pthread_t t1, pthread_t t2);

void pthread_exit (void int32_t r);
int pthread_kill (pthread_t, int);
int pthread_sigmask (int, const sigs>_w >= _p->_lbfsize && (c shared_pages_resident
# 1 "/usr/include/gcc/darwin/3.3/c++/ioetschedpaad_getusr/include/
# 47 "/usr/include/gcc/dnt r23;
        unsigned int r24;
        unsigned int r25r);
int pthread_kill (pthread_t, int);
int pthread_sigmask (i



typedef long unsigned         unsigned int r14;
        unsigned int r15;
        unsigned int;
# 146ing (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);
k fds_bits[(((t pthread_join (pthread_t thread, void **value_ptr);

int pthread_mutex_prioceiling (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);


in);
        vox_trylock (pthread_mutex_t *mutex);
int pthread_mutex_unlock (pthread_muprioceiling (pthread_mutex_t *mutex, int prioceiling, int *old_prioceiling);


int ack; char o        unsigned int r14;
        unsigned int r15;
  win/3.3/machinr);
int pthread_kill (ptht prioceiling, int *old_prioceiet_t  __s1; char  proc_va_list);
int __swbuf (int, FILE *;
# 38 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/tib/usr/include/machlloc;
  using ::mblen;
  using ::mbstowcs;
 hread_mutexnst char *);
int setry_objec getpgrp (void)Bitde/mach/m char imes *, _bisr/iint(8 int *);

c pthread))g padxception pthlibgist/inf;
  d (*init_ (inMar *, d_self (vo_M_masatura);

pthread_t id (*init_);
pi polhread_setsigmask (int32 pth (chschedpapthre# 56 mory_objec(pthread_t threnst chap2_t consint p0memory_type(int void
# 91 "/usr/includ!(chaM_p aemonedpad_prece);

pthread_t & 4
typedef t fsctloid *int, c" 2 3
x)alid_p |ef seedparam ude/macead_key= ~d *pthread_get32_t register_tt pthread_setspecific (pthread   interead_setspecifi char opaque[24]; ong u_=t pthr    intef voidern void * _keymgr_);
int pthread_attrnt;
       lloc (sizepthrnclude_refr_t *, int);
int pthread_gete/stddef.y (void);
int pthread_setconcurrency (i!nt);
int pth&&ad_rwlock_destro
};
#flipd {
 ead_ke^oid *pthred_muine)(void));

p"




# 1/usr);
long long
      l const char* what() constned in>agesiz_self (void);
int p int (*_r# 34 M_offsload pthreadck (pthread_read, int policy, ct pthread_rwlo sched_param *param);


_wrlocpthread_kethread__M_bumpt_leILE;
  u_t ipc__wrloc++_t giad_once_t *;
  gned int ack_t *rwtypedef natut_sec..);
int exeread_rwlock_unlodow;
   hread_rwlock_t *rw--ze_t tockattr_init (pthread
int pthread_rw/includeset_t*attr);
int pread_rwlockint);
int islowe
int sp;
  RuneRange;

typedeude/min.h"ck_wrlock ation_vp2 3 4

_typad_once_t );
off_ttpsharn %int pshared);




uct old_mt *attr);
int pthread_rwgetlogin (id (giint);nt pshared);




const pthread_rt processor_ain_np (void);


mach_port_t pdef struct pthread_getconcurrency (vck (pthread_r);


  


type/usr/include/tr_tdef nahar p "/usit (pthreanp (pthreread_rwlocstroy (pthread_rwlock_t * rwlopthread_t);


int pthread_cond_signal_threadt32_pthreadral_tread_np (pthread_cond_t *, ptex, const_wrlocedef st * pthread_get__keymgr_gee_np (pthread_cond_t *cond, pthread_mutex_t!long u_def natpthread_cond_timedwai(char *, e_np (pthread_cond_t *cond, pthread_mutex_t nel_ pthread_attr_y (pthread_rwl *thread, const pthread_attr_t *attr, void *(*start_ro/darwin/3.3*), void *arg);



void *thread, const pthread_attr_t *attr, void *(*start_routine)ex, c*), voiread_t;
typ
int islo
p;
  using ::strxe_np (pthread_cond_t pthread_t/gthr-default.h" 3
staread*, int);
chad_once_t * __atr_setall onst/usrrn.h" r_set (pthreinclude/g_wrlock ad_m_rwlock_rdlock (pthr int vm_mace_np (pthread_con_t *attr, int);

pthread_t ppedef mach_poad_once_t *once, void uster_size;
 ad_once_t *on**, char **, sic_in(pthread_rwlock_*key, read_rwlock_t *rwl
    emory_
  else
    rewlock_t *rwloread_rwlock_trywrlock (pthrearead_rwlock_t *rwloioritynt pthrealibgist/in_s);

  void
  __throw_invaead_t threaM    1UL <<ond_t *, pd_prece 4
# 67 "/(const char *)lockattr_unlock (_t key);
int pthread_attr_e/ppc/ansi.h" 3 4onst voidtrstr(cha/machine/types.h" 2 3 4
  return pthread_setspeci"/usr/inc key, void *ptr)
{

   __thrr)
    returntr_desread_setspecific (key, 0);
  else
    returnst char*tatic inline int
__gthread_key_delete (__nline void *
__gthr)
{
  return pthread_key_deleteppc/endian.h" 1 3 4
#

int pthattr, int kernel_petspecific (key, 0);
  else
key_delete ey_t key, const void *ptr)
{
ong u_l= -pedef stretspecific (key, 0);
  else
    returny_t key, const void *phread_cond_slude/machine/types.h" 2 3 4
 int
__gthredef st vm_secific (__gthread_key_  return pthread_mutex_lock (mutex);
  else
    return 0;
}

static inline n.h" _gthreareate (key, dtor);
}
ef unsigned int u_intbad_ansigned long u_longiead_mue/gcc/darwoid *))
{
  r+/ppc-dar+nt *pshared);ata_t[(102pthread_once pthrea_t;
typedef putc (itr);
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
  return pthde/gcessor_setead_key# 56 "/def int wchar_t;_s);

  void
  __th
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
        uint32t constraint;        boolean_t preemad_key pthread_oncwlock_t *rwlockbinamed_e;
    int sc_mask;
       ude/mach/thread_policy.h" 3nt setr
int pthread_rwl/return 1;
}nst pthread_erv_port_t;
tystroy (pthread_ef u_de/gccecedence_poct thread_precedence_policng ::time_t;d_mutex_init (pthread_mutex_t *mutex,ude/mach/mach_types.h" 2 3 4de/gcc);
int ffl thread_extended_policy pthread_special_ports.h" 1 3 4
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

      fposune_t max;
 ior.h const __int_type _S_in = 0xde/mach/vm_behavior.h" 3 4
typedef int vos
      oper        uint32_t period;
  h" 2 3 4
# 1 "/tati~._M_off; }

  mach/rt user_wired_count];
   char *
# 114 "/usr/include allocator<_CharT> >ar *);


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
typedef inread_time_constrainusr/include/mach/threadnate_handler sehrow_bad_typeid(void); int user_tag;
 
int tcset} pthread_once_havior_trow_bad_typeid(void); 1 3
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
  __throw_out_of_rangonstraint_policy *t} pthread_once_r_t *attr,unsigned ata);
typedef kepedef pod, int policyusr/ 1 3
# 48 "/uk_ctrl_t clovm_sync.h" 1 3 4
# 60_q/include/gcc/darwin/3.3/c++/ctime" 3
nilure(const "/usr/ivoid srandoq    ilure(const 4

# 1 "/usr/inc +hread_rwlockattros_failure(ch/hosr_t *attr,*thread, const pthread_attr_t _key_t kest_cpu_loat ipc_space_"/usr/;
typedef mach_port_tuct {
       uneRange mapupprocessor_edef process_CharT, t+" 3 4
typedefcharrocessoude/mxint setvbuf (n_basic_info_t;
r/include/macypedef host old_memoryle >
 _attr_bug_pwd "/Users/jmh/devel/l?pus;
 *, sig:ze);

int pthread_attr_sectime" 3
name/sys/timer* __s);


  void
  __throw_ios_le union sigval random (vo charpyet_name_poe<typename _td
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
# 6t, off_t)e/stdio.h" 3 4
typedef off_t fpos_t;
# 107 "/u int stathz;
        int ic_istringstream;

  tem_port_t;
typedef procrT, typename _Traits = cha);

int pthread_attr_setinheritsched (pthread_attr_t *attr, int inheritsnheritsched);

int pthread_a
extern "Cday (struct timeval *, struct timezone *);
int s_t);
unsigned k_ctrl_t clot timezone *);
int utimes (const charic_istringstream;

  template<typename _CharT, typenaong snst stmach_port_t memmbol;
        char *currenc_setcanceltype (int ty       typename _Alloc = allocator<_CharT> >
    s basic_ostringstream;

  ted processor_control_cmd_data_t;
typedeint8_t;
typor<_*once_t;
typedef ude/mach/task_info.id (poter_t;

typtypename _CharT, typename _Traits = char_traits<_CharT> >
 class basic_fstream;

  tcessormbol;
        char *currencilebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>   class basic_ifstream;

  te" 2 3
c/darwin/3.3/c++ _CharT, typename _Trai timeval *, struct timezone *);
int setits 4
# 54 "/usclude/maapped_void (*termin struct char_traior<_CharT> >
    clame _Traitsts = char_traits<_Ch
typedef int 3.3/c++/new" 2 3

externarray_t;
# stem_t;





# 1 "/u+imev = char_traits<_CharT> >ef mach_port_t pro
int gettimeofday (structts = char_tr +d;
  ude/mach/pet_t *emulationchar_traits<_CharT> >
    class basic_iostreamam;

  template<typename _CharT, typename _Traits = char_traits<_CharTpedef st3.3/c++/new" 2 3

externkernel_priorite _Alloc = allocator<_CharT> >
    class basic_strtringbuf;

  template<typenename _CharT, typename _Traits = char_traits<_CharT>,
           typename _

namespace std
{
  template<typenameboolean.h" 3gument(condefs.h" 2
#;

  tempdent;
        uns_error(co
  pair     unsigned icount;
};

typedef stru_T1& __a, const ;

  tempf_count;
      istream;

 const _T2& __b) : firernal_pager;
        air(const pai| 0x001include/ppc/ans_behavior_t behavior;
        vm_offset_t obj        unsigned short used_count;
};

typenate_handler sct vm_region_submap_info_64 *vrT> >
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
template <class ad_getigned);
"/usr/include/mach/vm_region.h" 3 4
struct vm_region_extended_i(streamoff __off) {os& __posits<_Cned int pages_resident fsctlint pages_shared_noww_private;
        unsigned int pages_swapped_out;
       3
# 1 "/usr/include/gccpedef struct taits<_CharT> >
    class char *ng ::difftimeonst char* __s);
}g);

char ? ~" 2 e<typena2>(__x, __y);
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
typedef struct processor_secc/darwin/3.3/c++/bitsts = chac++/bits/stl_pair.hLocale _DefaultRuneLocale;
exteror;
   typedef __true_type has_trivial_assigop_info vm_region_top_info_data_t;
# 173 "/usr/include/mach/vm_reggcc/darwin/3.3/c++/bits/type_traits.h" 3
# 90 "/usr/include/gcc/darwin/3.3/c++/bits/type_traimax_protection;
        vm_inherit_t inheritance;



        vm_offset_t et;

        unsigned int user_tag;
        unsigned int p;
int de    unsignearwin/3.3/c++ead_attr_t *, int pedef __falsear> iostreamt[(1)(vont ptht32_t register_t;

tvoid *v*);
int >st pair<_T1> >
    classngbuf;

  template<typenameype has_trivial_assignment_opelude/machator;
   typedef __false_typschedparam (pt"/usr/include/x;
}


template <class _T1, al_assignment_opet32_t register_t;
      boolearT, typed_attr_t *attr, co_traits.h" 1 pename _Traits =cy_ti_attr_iclude/mach/mructor;
   typedef __true_type has_trivial_copy_constructeturn.h" 1 3 4
# 135 nclude/mach/ppc/kern_retustream<char> ofstreamne/kern_return.h" 3"/usr/include/machtypedef __true_type is_POD_type;
};

template<> struct __typinclude/gcc/d
};
#ment_operator;
   typedef __trap;
        vm_behavior     void  typedef __true_type has_trivial_assignmen_region_submap_info_t;
typedef struct vm_region_submaspace(int c);
extern int isuppts<signed char> {
   typedef __true_type has_trivial_deion;
        vm_prot_t max_protection;
        vm_ipedef __true_type is_POD_te_type is_POD_type;

int pthread_attr_destroy (pthread_attr_t *attr);
int pthread_atas_trivial_destrudef uint32edefd_keyort>uct ppc_threaingstream;

  template<typtrivial_destructor;
   typedef __r, struct sched_param *param);

int pthread_attr_getscheas_trstackaddr);

int pthread_attr
namespace std
{





  class bad_a  typedef __true_type has_trivial_assignment_onst pthread_attr_t *attr, void **stackaddr, size_t *stacksize);

int pthread_att  template<typename _CharT, t;

  templaoad_inme[64];
harT, typename _Traits = char_tr "/usrse polierence fo_datan/3.3/c++/exception" 1 3oad_insr/include/gcc/dream;
  type using ::raits<_Chaledgersr/inclusr/include/maigned int natn.h" 1 3 4
# 135uct timezone *);
intname _CharT, typename _Traits = char_traits<_CharT> > detachstate);

int pthread_attr_setinheritsched (pthread_attr_t *attr, int inheritspedef basic_iostream<char> iostpename _Traits = ceval *, struct timezone *);
int s" 2 3
ts =r/include/mach/macledger3.3/c++/new" 2 3

exteschedpartype;
};

template<> >
    classread_act_t thread_events();

  typedef voadv *, strsr/in_assignment_opepedef basic_filebusr/in_default_constru __type_traits<unssr/inclone *);
int sl_assignment_operaeference_t;
# 73 "/usr_operator;
  _triviory_object_attr_info {
   (struct tm *);
size_t     vm
typerencm_size_t hits ory_ob4
# 54 "/ust32_void (*terminar* __s);


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
# 91 "/usr/include/mach/mach_typeent_opera;
        ypedef __true_type has_ char_traits<_CharT> >
    class bachar_traits_CharT,            typenigned int natypedef mach_port_t processor_sevial_destrutr_setprioce return __t;
gnment_operatort_t host_name_t;
typedef host_t host_nameort_t;
typedef processor_set_t processor_seport_t;
typedef processor_set_t processor_set_name_port_t/thread_    union __int p_types.h" 3 4,{
   typedeve_p (voiT1, class.h" 1 3 4
 class batypedt> {   mach_poy62 "/usr/includete <class _U1,t;







typedef processor_ypedef _attr_t *structor;
 read_rwlockattr_setpshar_CharT> >0 "/usr/iedef __true_t char_traits<_CharT> >
    class b "/usr_CharT> >
ivial_aype_traits<unsigned long long> {
   typedef __true_type has_trie<typename _Ccessor_set_ef struct kmod_utc (int, FILEructor;
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







typedef processorbad_alloc);
void* ype_traits<short> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
 def __true_type ype has_triviaype has_trivial_assignment_operator;
   rivial_assignt;







typedef processor_bits/type_traits.h" 1 __true_type has_trir_t *a
       typedef __ringstream;
  typedef basic_ostringstruf;

  template<typename _ypedef basic_stringstream<char> stringstream;
  tychar *)e has_trivia_CharT> >emplate <class _T1, cldata_t rr;
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
typedef hrow_und(const pair<_U>& __p) : edger_t *ledger_array_t;
edef __true_typgral;
};

tnt sce;
};

templateal;
};

templat<> s> >
    clafilebuf;
  typedef set_t;
typedef mach
        typedef <class _T1, gned long> {
  typedef __tt_array_t;
typedef threypedef __true_loc = allocatolicy_traits<unsignednst char *, ...);
int farT> >
    class ch/kern_return.h" 3 4
# 1 "/u typedef __true_type has_tr1 3 4
# 27 "/usr/include/mach/macne/kern_return.hchar> ifstream;
  tusr/incltype;
};

template<> struct __type_traits<uns "/usr/include/mach/ppc/kern_vial_destrurwlockat struct {
   d, int policy charng ::time_t;kern<_CharT> >
    class bssignmchar *, modnst cha~char *, cox);
}


tempy_t processor_set_name_port_array_tde/machlavor_t;
typedec const28 "/usr3
# tructohar *, 7,


        REGS_SAVED_ALL
} regs_s;
# 38 "/usrhown (int, int, int);
char *fflagstostrt uin/usr/intccexattr_t *attr, int type);

int pthread_mutexattr3/c++/bits/shread_mutexattr_t *att pthread_mutex_lock (pthread_mutex_t *mutehread_t;
, int);
int pthreaatural_t erence_t;
# 73 "/usr *host_cpu_loae_type is_POD_type;
};

template<> struct __type_traits<unsigned long> {
   typedef __true_type has_trivial_dhar *ss_sp;
        ir/include/gcs_resipid_t4
# 1 _attr_  typedef batypedef st" 1 3 4t_t;
typedef processtrue_ts_shared_now_private72 "/usr/include/machname _Tp, typename _Distance = psync_t;
# 88 "/usr/include/mach/mach_types.h" 2 3 4

;
int setitimer (int, c/usr/inclu_true_type _Integrnline i3/c++/bits/r
    {

      ector_t;
typedef char *user_subsystem_t;
  pair() : erator_tag {};

  struct forward_iterator_ta ::gmtimec input_iterator_tag   unsigned ic input_iterator_tag {};
t;







typedef processor_set_t processor_set_na 3 4
extern "Car> stringbuf;
tor;
   typedef __true_type has_trivial_dctor;
   typedef __true_type is_POD_type;
};

templaint8_t;
typ_t host_priv_t;
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
typedef thre *host_cpu_loa random (voe<> strurmal_iterator {
   ty<typename lude/mach/itype;
};

templa _CharT, typenap> stru-nclude/gcc/darwin/3.3/c++_cookie;
        int (*_citerator_tag {};

  struct forward_iterator_tag);
int pthread_kile<typename _Iterator>
    stru_type has_trivial_assit pthread_kill (p _Tp value_type;
  type!ef __trnt);
int isgraph (int);_category itxts = cal_copy_conion sigval si_vc/darypedef __truearray_t thread_act_port_array_ttemplate<typename _Category, c/daessor_ared_pages_residen _Distance = ptrdiff_t,
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

namespinate_handler spedef __true_titerator_tag {};

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
   *_p;
 ared_pages_avior_t btype;
};

temp template<typename _RandomAccessIterator>
  types.h" 2 3 4
# 45 "/usr/include/pine typename iterator_traits<_RandomAnst pthread_attr_t *av, const __c_locale&, int __p2 "/usr/include/gcc/darwin/3.3/crue_type has_trn __x.first < tructor;
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
      retemplate<typename _InutIterator>ng a64l (constn_top_i, tytraint;t timezone *);
int utimes (cons }
# 162 "/usr/includ
    }
}
# "/usr/include/machr_category;

     }
}
# rocesswitypename _Iterator::pointeype has_trivial_defaulnstructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __tre _InputIterator, type timeval *, const struct timezrator;
   tp, typename _Distanc      typedef _Pointer pointer;

      typedef _Referenine typename iterator_traits<_RandomAic_ios;

  template<typename _Ch  integer_t base_priority;
 ypename _Iterator::value_type valuypename _Iterator::difference_type diffe*ipc_space_tnt64_t_type;
      typedef typenamlimits.hxct ti         typenamuf;

  template<typename _t kmod_t;
typ> str-2true_type haserator>::  typename itts<_CharT> >
    ct tior.h" 1 3
# 68 "/usr/include/gcc/darwe/gcc/darwin/3.3/c++/bits/stl_iterator_bas   const size_type __len = __old__rtr != 0 ? 2 *a GCC set_de: 1;
 ibgist/iterator __new_start(_M_allocate(
#pra))/libgist/src/librtree"
# finish(ee"
# 1 "<bmand line>"trylibgist/s  {libgist/inc db_rtree.cc"
 = uninitialized_copy(rc/librtuilt "/Use, __position,ude/amdb_ext.jmh/devel/libgist/include/gist_def


# 1 "/Users/jmh/devext.hC"amdruct



# 1e.cc"
.base(ist_dxsr/include/sys/++3 4
# 66 "/ur/include/sys/t" 1







# 1 "/Users/jmh/devel/_defs.h" 1
src/librtuilte.cc"
)
# 9 "/Users/jmh/devel/libgist/include/gist_defs.h"
#  1 "/usr/include/sy}libgist/scatch(...)libgist/include/amdb_ext.hDestroude/"
# 1 "<b,apiopts.h" 1sr/include/sys/tM_de-in>"
# 1 ""
# 1 "<bsr/inclu "<comr/include/sys/throw2 3 4


# 1 "/usr/inclsr/includbegincludend(mmand line>"e/ppc/types.h" clude/g,_t;
end_of_storage -_t;
 "/Users/jmh/devhort u_igma G 3 4
# 69 "/usr/t16_t;
typede





# 13 4
# 66 "/usr/inclt16_t;
typedeypedef unsigned
typedef
# 69 "/usr/ +"
#pra/libgist"/usr/}
# 305 "/usr/include/gcc/darwin/3.3/c++/bits/vector.tcc" 3
  template<e.ccname _Tp, 31 "/usr/iAin>">libgivoid.h" 2 d lon<incle/types::libgiu_intll_insert/libgist/t_defs.h" 1
b_rtree.cc"
#n,1 "amdbvaluree.cc&de/sylibgilude/amdif " 1 ebug_ne/typeslude/amdb_ 4
#_rtree.ccort ypedef unsigned shor 3 4
#  >
typene/types.h" 1 3 4
# 30 "/usr/includde/sdevelg lonxr/include/sys "amdb_rtree.cc"
#elems_after =gned cd shdefs.h" 1r/include/sysrc/librtreeCC se.cc"


i.h" 3 4
i.h" 2 3 4
# 74
# 1;
# 34 "/usr>edef union {
   include/amdb_ext.   4
# 67 "/usr/include_int32_t;/macn_t;
te.cc"
de/ppc/endie/ppc/types.h" nt u_int32_t;+
type# 81 "/usr/includevel_backwardde/sys/types.include/sys//include/nclude/sys/
# 81 "/usr/includ2 3  htonl (unsigneefs.h" 1pedefsigne
     
# 81 "/usr/incl"/usr/incl   elseh" 1 3 4
# 30 "/usr/include/machine/endian.h"2 3 4n
# 1 "/usrd shn/incl;
# 34 "/usg);
unsigned short ntohs (ude/ppc/endian.h" s/types.h" 2 3 4# 81 "/usr/includ4
# 67 "/usr/include/sys/types.short htons an.h" 1 3 4
# 81 "/usr/include/ppc/endian.h" short u_short;
typedef unsiunsigned long ntohllong u_long;

unsigned short ntohs (unsigned sho"/usr/inclt);
}
# 31 "/uslude/amdb_ext. "amdb_rtree.cc"
#CC set_de=b_rtrint64_t;
typint32_t daddr_t;
typedpragma GCC set_de+ max(edef int32de/sye/ppc/types.h" rc/librtree"
# 1 "<built-in>"
# 1 "<command line>"ne>"
# 1 "amdb_rtree.cc"




# 1 "/Users/jmh/dev/devel/libgist/inc 30 "/usr/include/maceapiopts.h" 1 3 4
# 67 "/usr/includdef unsig_defs.h" 1
# 9 "/Users/jmh/devel/libgist/include/gist_defsad_t off_tnt16_t mode_t;
typedad_t off_t;
typedef int32_t pid_t# 76 "/uys/types.h"de/syude/sys/types.h" 3 4ppleapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.ned c
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedefhtons (unsigned short);unsigned shorlude/machine/types.h" link_t;
typedef quad_t r/include/machine/types.h" 3 4
# 1 "/usr/includclude/ppc/types.h" 1 3 4
# 69 "/usr/include/ppc/types.h" .h" 3 4
typedef signe_mask;






typed[(((1024) t int16_t;
t 3 4
# 1 "/usr/include/ppc/types.h" t int16_t;
typedef unsigned short u_int16_t;
typ u_charf int int32_t;
typedef unsigned int  u_char;
typed
typedef long long int64_t;
typ
typedef unsigned long long u_int64_t;

typedef int32_t re_mask;





gister_tintptr_t;
# 31 "/usr/include/machine/typestptr_t;
# 31 "/usr/iInputIc/librts.h" 2 3 4
# 73 "/usr/include/sys/types.h" range4

# 1 "/usr/include/m
# 9 "/Users/jmh/develread_attr_t;

 __firs6_t;

typedef structlast
# 9 "/Users/jmh/develiad_a_rc/librt_taghine/ansi.h" 3for ( ;uct _opaebug_t { l;4
# 1 _opa/include/ppc/ansi.hl (u = 

# 1 "e[8];  *tr_t { l/libgist/s
# 1post32_t register_tuct _opaque_pthread_attr_t { long sig; char opaque[36]; } pthrForlongttr_t;

typedef struct _opaque_pthread_mutexattr_t { long sig; char opaque[8];.h" 1
struct _opaque_puct _opaq} pthread_mutexattr_t;edef struct _opaqu { lo strlong pthread_mutex_t;

typedef /incluaque_pthread_co/include/ppc/ansi.ansi.h" 1 3 4 = distanc 1 " _opaqueopaque/libgist/sr" 1 3 4
# 92 "/usr/include/ppc/ansi.h" 3 4
typedef union {
 lude/amdb_exteL;
} __mbstate_t;
# 34 "/usr/include/machine/ansi.h" 2 3 4
#75 "/usr/include/sys/types.h" 2 3 4
# 1 "/us/include/machine/endian.h" 1 3 4
# lude/amdb_ext.hine/endian.h" 3 4
# 1 "/usr/include/ppc/endian.h" 1 3 4
# 81 "/usr/ince/ppc/endian.h" 3 4
extern "C"unsigned long htonl (unsigned long);
unsigned short htons (unsigned shortnclude/ong pthread_kad_t rlim_t; 2 3 4


# 1 "/usr/inclef char * caddr_t;
typedef int3ig; char opaque[124mid_pthr _opa struct _pthreadvigned lmidthre;
# 34 "/use/ppc/types.h" 4
# 67 "/usr/include/
double4
exterroutine)(void *);
        ;
typedef unsigned short u_short;
typedef ugned int u_int;
typedef unsigned long u_long;
typedef unsigned short ort;
typedef unsigned int uint;


typedeude/stdlib.h" 3 
double int __mb_cur_max;




extern ";

typedef char * caddrclude/gcc/darwin/3.3/assert.h"ef int32_t dev_t;
typedef u_i32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
tedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
tedef long key_t;
typedef u_int16_t mode_t;
typef u_int16_t nli"/usr/include/mah" 1







# 1 "/Users/jmh/devel/libgist/include/gistypedef int32_t segsz_t;
typedef int32_t swblk_t;edef unsigned edef u_int32_t uid_t;
# 11apiopts.h" 1 3 4
# 67 "/usr/include/lib.h" 3 4
extern 3 4
typedef int32_t fd_masapiopts.h" 1 3 4
# 67 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 70 "/usr/include/e_t);
int wctoe/ppc/types.h" 

extern "C"ef struct fd_set {
    (const char *, ch(((1024) + (((sizeof(fd_mask) * 8)) - 1)) / ((size/ppc/types.h" 1 3 4
# 69 "/usr/iypedefusr/include/sys/tes.h" 3 4
struct _p

extern "C"ec
{
        void (*routine)(void *);
      void *arg;
        struct _pthread_handler_rec *next;
};
# 202/usr/include/sys/types.h" 3 4
typedef strt _opaque_pthread_t { long sig; struct _pthad_handler_rec *cleanup_stack; char opaque[596];} *pthre_t;

typedef str_t;
76pedef long int intptr_t;
typedef u "/usr" 2 3
# 12 "/Users/jmh/devel/libgistlong int iist_defs.h" 2
# 23ize (int *, long *);
char *cgetcap (char *, cha
enum lde/m_mode_t { LATCH_NL = 0,nt cgetSH = 1(char **EX = 2 };

e.ccdef short int2;h (char *longr *)4
int cgetnunsigned char uint1 **, char **);
int , charum (;
int cgetn**);
int ext (um (r **, char *tr ( sm_rtree;

int cgset (char *);
intint shpid*);
 (char *ar *rc*);
# 79t);
int cgetclose (void);
int cgetent (char **, using /usrspace stdint,8int);
char *devname (int, int);
int getloadavg (d (char * "/usr/ 3 4 *> Vd lonint,int);
char *devname (int, int);
int amdb_extchar *, 1ize (int *, long *);
char *cgetcap (char (*)(co1);
int heapsort (void *, size_t, size_ttate (unsig
class (charpint,void *, const void *));

char *initsvec_nsigned l18)(const void *, const void *));

int radixs
s.h" 1gid _pair);
ilibgi "amdb**);
int cgetn* pthort;
t_rtree  int3atchar *, uVEC;

int srar *_cn atexit*, int,set_d/libginsigned);
* _r/in;ond_);
long rand gned)[8]nst unt, sizct rad : protected char *, unsifriend t, sizt rad;
publictypes.char dummy_charid {t;
t_small = 8matcypedet rad()g; char opaqcnt in0t16_t;
typent32_t signed long,r/in = & (void0]d long"/usr/);
char "amdb);
cha& v1
# 33 "/t);
unsig2 *user_from_ur/in   strtoll(const t ranet(gnedv2ey_t;
#char *, char **, in 3 4* pe/ansi.h l    strtoull(cons    strtoll(const , int);
p, long
         ~);
char d);
voibool _is_larg
typ "amdb{return
      !   strtoll(cchar *, char& puq (const char *, char **, d long);
cha.3/assert.h"t);
unsig/include/gcc/daret);
 *user_from_uid (un, int);

long long
*);

}
*thiopaque_gcc/darwin/3.3t);
**, int);
unsigned long long
         strtoull*);

}
{
exter./assv1st/incllong
         strtoq*)
    __att char *, char **, int);
unsigh/devel/libgist/inc(const char *nt rand_r (udev_t;st char or" 1 3
# 65 "/unsigned *);.3/c++/vector"unsigto( char *, char **,imi (unsx7frwin/3 1 "/us;
 size_t);
car *realpchar char *re{;
char *setst;
char *:g);
char *ued long char **, int);
unsigned long long
       /exceptiolong lo_defines.h" 1 3
# 35  char *, char **, i/exceptio(cons_defi
);
voidchar *tr(ar *index 1 "/usr/# 65 "/u(throwtype0 &&_throw <_uid ) ?# 9 "/Users/jmh/devel/libgist/include/gis 3
# 3)(cons[throw].ptr : 0;, const*, int, co
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);id
  __throw_pragc_error

private:n(vo}nt (*void *, const void *));

char *initstate (unsign *, i0ng, char *, long);
int mergesort (void *, size_t, size_t, query[]);t, size_t, cursorext*);
int ct, size_t, ienaltynclude/gcc/darwinstat"/us"amdbdoublesrand
  voidd);
voi_s);

  void
 on_ded
  __throw_underflot char*p__thp(pw_error(c;


  vot);

void unop/librt<  __att_s);

  void
  &pen)loc(void);p < pen.prror(con __s);
}s_failu# 1 "/usr//3.3/c++/rror(con_s);

  void
 & "/usr/in=# 67 "/usr/include/gcc/darwin/p =ctor" 2  char *, unsits/stl_algobase.h" 1 3
# 64 "/usr;


  vo/c++/bits/stllgobase.h" 3
# 1 "r(con9void *, const void *));

char *initstate (unsigchar* __s);
rror(lude/gcc/da3/c++/char h" 3
# 1 idsr/include/gct_poin.3/c++/pnsigned lort_recefines.h" 1 3
# 72bt__defines.h" 1 3
# 72bt_strfines.h" 1 3
# 72 1 "</os_defines.h" 1 3
# 72 n "C"usr/include/gcc/darwisp/os_defines.h" 1 3
# 72ss/bits/os_defines.h" 3
tyC" {
# 83 "/usr/include/gC" {
# 83 "/usr/include/npefines.h" 1 3
(charnumext/c++/bd);
voi 67 "/usr/i/c++/ppcmyIdd long)3.3/ashar* myNamid);
voiow_erroh" 3
# 1 "/*    } Tnolist[2,
        ];
int cg
voidirtualmon ( } pthrelibgist/se_t, i& pagensigned loespace /usr/ikey   NM_LOCKED=4
        datanes.h" 3
ty char  childne/types.h;

lo_ILLEGAL=2,
        removeANCED_LOCKING=3,
        NM_LOCKED=4
 ar *,lots[]nsigned loar *numSvoid_data(unsigned int key) ;
extern voupdateKeyANCED_LOCKING=3,
        NM_LOCKinr/inlohread_rwlocED=4
        newKey_data(unsigned int key) ;
exteignedfindMinPenANCED_LOCK 67 "/usr/in
        NM_LOCKED=4
        } TnodeMode ;



extern void * _keymgr_ggr_set_angned int key, void *ptr) ;
extern vsearchANCED_LOCKING=3,
        NM_LOCKED=4
 __s);

  voi* 

  vkeydata) ;
extmde/med *keydata) ;
ex&ternMern in_data(unsigned intid *ptr) ;
extern vgetsigned int kerocesswide_ptr(unsigned int key, voinsigned lo       } T_data(unsigned  (cot dalude/gcc/darwin/3.3/c++/ppc-darwin/bits/c++cLEGAL=2,
        pickSpliHANCED_LOCKING=3,
        NM_LOCKdaemoightEntriint _keymgr_get_lock_cR3
# d_unlock_processwide_ptoldBpos_defines.h" 3
}left/include/gcc/darwin 3
# /include/gccED=4
        entry1-darwin/bitool& oneGoes3.3/c++/cstring" 1 3
# 48 "//c++/2stddef" 1 3
# 47twousr/inclu36 "/usr/include/21int);
char *devname (int, int);
int getlog.h" 2 3
# 65 "/usrignedunionBpsr/include/gcc/darwin/3.3/c++/ppc-darw       binclude/gccid unbpIsVal.h" 1 3
# 72ED=4
        predcstddef" 1 ;
}
# 50 "/usr/inf" 3

# 1 "/usr/ibpCh lond)_ptr(unsigLEGAL=2,
   row_range_error(nsignedCnge_esr/include/gcc/darwine_ptr(unsigned 1 "/usr/string.h" 1 3 4
# 72id unchecksr/include/gcc/dstd
{
  using ::ptr;
}
# 50 "/usr/in_algobase.h" 2lng *ocesswide_ptr(unsign.h" 1 p_from_gigned(*PrintPredFct)ANCED_LOCKostream& ; } pthread*memcpy (void *, const void *, size_td long const void *, size_Datavoid *memset (void *, int, size_t);
char *strcaid *);
charsize_t);
voi pize_t);
trcoll (con *, int *, co *, 66 "/6c/darwin/3.3/c++/ppc-darwin/bits/c++config.h" 2 3
#  (char *     (*Parsevoid typedef enumstr,;


  vout,ptr(un8 (unsignerror (in pror nst char *)t (char *, cohar *, char *);
char *strerror Q
  v(int);
size_t strlen (d *memchr (co&nst voi*strncat (char *, s *, cohar *oid
  __throrror(::ar *, consANCED_LOCKING=3/c++/ppcing ::size_t;
}
#  unsig/usrnsigned lo (const char *, const nst char *, conar *strcpy (char nst char *,t (char *, const r *);
char *strtok (char char *);
char *str);
char *strpbrk (c) types.bcmpnd ;(id),m node_(/usr), *, const (*, const void *,  *, _t);
v *, unsigned lo*, const (*, const voidt strxfr bzero*, voi*strpbrk (c bzero_t);

ine/ansi.h" 3rchr (const,
   id] =  unsigned, cor(consar* __s);

  void
  __throw_runtime_, int (*)(const voidLibrary/Java/Homelong int jnisigned l2sizesecmp (const char *, const char t (*)(cef long int intptr_t;
typedstdargsigne 3 4
# 4onstchar *, const char *, size_t);
size_ttrlc (char *__builtin_vaemccp __gnuct strnca(constar* r *, const char *, size_t);
void strmode (int, charmp (const ch onst char *int);secmp (const char *, const char *2 (voi strcasecmp (const char *, const ch_mdixsort (cypedd *, void *, size_t);

}
# 52 "/usrint cgetnext (ji

innt cgetnext (clude/ext /darwin/3.);
int cgetnjbyte (chaonst const char *, char **);
void swab (cextern "C" {t;

int)strdup (const char *);
size_t str*, char **);
int cgetnj3
# eanhar *, char *, long *);
ijf en3
namespacetrcollrncmp/darwin/3.float jrm;
 /darwin/3.t char*jt chartch (char */gcc jsignedt char* __jobject_defising ::mt, siz3
# 1 "/u:memset;
  using ::st3 4
tahar*;
  using ::strlen;

  using :strble ;
  using ::strlen;

  using :arraynt __c, size_t __n)
  { return using :Aemchr(const_castmemchrvoid*>(__p), yte_n); }

  using ::strchr;

  inlinef en_n); }

  using ::strchr;

  inlinerncmp_n); }

  using ::strchr;

  inlineinchar*>(__s1), __n); }

  using ::strext _n); }

  using ::strchr;

  inlinerm;
 _n); }

  using ::strchr;

  inlinet char_n); }

  using ::strchr;

  inlineemset;_n); }

  using ::strchr;

 (int, chamemset;
*ine cha/darwin/3.strerror*trerron_strrchr(co:memchr;

*s1), __n);n_strrchr(co__p, in*  inlinn_strrchr(comemchr*r* __sn_strrchr(co __c, __n); }*)
  { return  char* __s2)
char*
  s*t<const chn_strrchr(con return _*# 66 "/usr::strstr;

  st char*>(*/c++/bits/sn_strrchr(copbrk;

  */usr/incln_strrchr(co__s1, cons*/climits" n_strrchr(coiltin_strpb*gcc/darwin/n_strrchr(cos1), __s2); *"/usr/includn_strrchr(cone char*
  s__builtih" 1 3 , inar*  using ::strcat;
  using ::strncat;
  usimemset;
jweakint __n)
  e/gcc jusr/ir/inclu)
  { re zd longt<con bs.h" 3 cgetncs.h" 3 rncmp;opaque_g ::si 1 3 4
clude/ 1 3 4
rm;
  f 1 3 4
t char* char *memset;
l;
}darwin/ unsigned _jfieldID3
namespace/limits.h" 2 3 3.3/" 2 3 4
de/limits.metho 3 4
# 1 "/usr/include"/usr/in * "/usr/inclcludr *, const char *, char **);
void sw
# 1 "/usr/incluint sratrspn (cod long)unsig);
iaturned *);
gned fnPd ch} JNINativeM/usr/;
int cr/inclugcc/darwiInterface_ 1 3 4
# 6JNIEnvude/at;
  usiwin/3.3b" 3
# de/gc77sr/include/gcc/darwin/3.3/machine/ligcc/darwinInvok"/usr/include/gcc/darwavaVM3/c++/cstdlib"::ldivg ::abo;
int dlib" 1 3
# 48 "/usr/inclu/darwin "/usr{
exrvedsigned atof;
  using l/libgiatof;
  using 2d);
voidtof;
  using 3/c++id);


  vcfm_ "/usrs[225URSIO 3 4
# 25( *GetVers__mb(win/3. *en 3 4/usr/in, siz( *DefineC, sine/typesnv;
  using ed long ltrspn (con2 3 4
# 63oad 4

typede 4
# 1*bufnsigned ltrtokchar *strnc  using ::Find  using ::malloc;
  using ::mblen;
  using ::labs;
  4
# 50 "singromRefl (conn/3.3/ng ::malloc;
  using :memset;
"/usr/ng ::ran/sys/sys
  using ::strtoF" 2 using ::system;
  using ::wcstmits.::labs;
 emset;
( *Tog ::strtoul;
  using ::system;
  using_t);
chls,g ::strtol;"/usr/in,chine/limiisSw_err::labs;
  using ::GetSuper usin __j) { return ldiv(__i, __j)subng ::ranine/limi( *IsAsbase.bleusin "/usr/include/gcc/darwin/3.3/c+arwin/3.3/cp  inline ldiv_t
  div(long __i
  abs(long __i) { return la, __j); }
}
/sys/sysmits.h"e/gcc/darwin/3.3/c++/bits/stee;
  uT 4
tusing ::system;
  using:memchr;

objng ::ran 52 "/usr/inNenclude/gcc/darwin/3.3/c+, __j); azz ::mblen;
  usmsgng ::ran:memchr;

( *Exceph" 1Occur(voig ::malloc;
  usingar *, soid *,);


    viDescribenst char* what() const throw();
  };



  clClearnst char* what() const throw();
  }FatalErroad_exception() throw( { }
    virtual ~exg ::free;
  uPushLocalFrod;
sing ::system;
  using ::scapacithar *, s ldiv_t
  dPopndler) ();

  typedef void (*unexemset;
resulkey_) ();


  terminNewGlobalRefet_terminate(terminate_handlerln" 3
  claw();
  }Deletee() __attribute__ ((__noreturn__));


 grefxpected_handler set_undlerattribute__ ((__noreturn__));


 n" 3
  clas 3
# 42 "/usrSameOmset;__ ((__noreturn__));
# 100 "/usr/1
# 100 "/usr/long
    void terminatttribute__ ((__noreturn__));
# 100 "/u
  void unss excepEnsurattribCd_handle
  typedef void (*unexpected_handler)amespace __gnu_c/type+/exception" 3
  bool uncaughn() throw()
namespace __gnu_cxx
+/new" 2 3

extern "C++" {

namespace st
}
# 68 "/usr/include/chin
{





  class bad_alloc V: public exception
  {
  public:
    bad_alloc() throw() strncasargs}


    virtual ~bad_alloc(A: public exception
  {
  public:
    bad_alloc() throw()arwin/3* nothroits/stl_algobase.h+/exce  using ::malloc;
  using : 100 "/usr/include/gcc/darwin/3.InnsigneOe__ ((__noreturn__));
# 100 "/usr/

namespace std
{using ::strtol;
  Getn/3.3/ID
  public:
    exception() throw() { }
    virtuing ::typedef engobasnclude/gcc/darwin/3Call+/exceul;
  using ::system;
  using ::wcst:size_bad_alloc() throw() { }


    virtual ~b_t, const std::n) throw();
  };

  strucd* operator new[](std::size_t, cothrow_t nothrow;


  typedef _t, const std::nw_handler)();

  new_hand* operator new[](std::size_t, c throw()t nothroclude/gcc/darwin/_t, Bsing :std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nturn __p; }
inline void* opeperator delete(void*, const std::nothrow_t&) throw();
void operator delete[]turn __p; }
inline void* ope_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { ret
# 1; }
inliytin/3.3/t&) throw();


inline void* operator new(std::size_t, vp; }


inlin/iosfwd" 1 3
# 44 "/ud*, void*) throw() { };
inline void operator delete[](void*, void*) throw() {/iosfwd" 1 3
# 44 "/u_t&) throw();


inline void* operator new(std::size_t, void* __p;
}
# 82 "/usroid*; }
inlChar44 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3


# 1 "/usr/include/gcc/da.3/c++/clocale" 3

# 1perator delete(void*, const std::nothrow_t&) throw();
void operator delete[].3/c++/clocale" 3

# 1"/usr/include/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/include/gcc/darwin/3rncmp;; }
inlS cha44 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3


# 1 "/usr/include/gcc/da char *mon_thousands_sepperator delete(void*, const std::nothrow_t&) throw();
void operator delete[] char *mon_thousands_sep"/usr/include/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/include/gcc/darwin/3ee;
  u_t, Innds_sep;
        char *mon_grouping;
        char *positive_sign;
       har p_sign_posn;
   perator delete(void*, const std::nothrow_t&) throw();
void operator delete[]har p_sign_posn;
   "/usr/include/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/include/gcc/darwin/3ext (p_sign_Long44 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3


# 1 "/usr/include/gcc/dang ::localeconv;
}
# 4perator delete(void*, const std::nothrow_t&) throw();
void operator delete[]ng ::localeconv;
}
# 4"/usr/include/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/include/gcc/darwin/3rm;
  p_sign_Fm;
 44 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3


# 1 "/usr/include/gcc/dalocale&, int __prec = -1perator delete(void*, const std::nothrow_t&) throw();
void operator delete[]locale&, int __prec = -1"/usr/include/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/include/gcc/darwin/3t char*p_sign_D char44 "/usr/include/gcc/darwin/3.3/c++/iosfwd" 3


# 1 "/usr/include/gcc/da, __prec, __v);
      elseperator delete(void*, const std::nothrow_t&) throw();
void operator delete[], __prec, __v);
      else"/usr/include/gcc/darwin/3.3/c++/clocale" 1 3
# 48 "/usr/include/gcc/darwin/w();
  }_t, Voioul;
  using ::system;
  using ::wcstator new[](std::size_t, const std:: 1 "/usr/include/ctypeperator delete(void*, const std::nothrow_t&) throw();
void operator delete[ 1 "/usr/include/ctype_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { re(void*, const NonL=2,
  const std::nothrow_t&) throw();
void* operator n  public:
    bad_alloc() throw() { }


    virtual ~b
        _RuneEntry *rangeperator delete(void*, const std::noth  public:
    bad_alloc() throw(libgist/id operator delete[](void*, const      _RuneEntry *range_t&) throw();


inline void* operatorconst **);
        int (*sputrune)
     oid* __p) throw() { return __p; }
inl     _Runeine void* operator new[](std::size_t, void* __p)   public:
    bad_alloc() throw() { }


      rune_t mapupper[(1 <<8 )];






            (const char *, size_t, char const **);
        int (*sputrune)
            (rune_t, char  rune_t mapupper[(1 <<8 )];






    invalid_rune;

        unsigned long runetype[(1 <<8 )];
        rune_t maplower[(1 <<8 )];
       /iosfwd" 1 er[(1 <<8 )
# 44 "/usr/include/gcc/darwin/3.3/c++/iosfwd  _RuneRange maplower_ext;
        _RuneRangea (int);
int iscntrl (int);
inte;
        int variable_len;
} _RuneLocale;



extern _RuneLocale _DefaultRuneLocale;
extern _Runea (int);
int iscntrl (int);
int invalid_rune;

        unsigned long runetype[(1 <<8 )];
        rune_t maplower[(1 /gcc/darwin/3.3/c++/cloca     _Runele" 3

# 1 "/usr/include/locale.h" 1 3 4
# 39   public:
    bad_alloc() throw() { }


    nt isrune (int);
int isspecial (         (const char *, size_t, char const **);
        int (*sputrune)
            (rune_t, charnt isrune (int);
int isspecial (k (int);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram (int);
i char *mon_th     _Runeousands_sep;
        char *mon_grouping;
        public:
    bad_alloc() throw() { }


    e->runetype[_c]) & _f;
}

static i         (const char *, size_t, char const **);
        int (*sputrune)
            (rune_t, chare->runetype[_c]) & _f;
}

static ik (int);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram (int);
ihar p_sign_     _Runeposn;
        char n_sign_posn;
};
# 76 "/usr  public:
    bad_alloc() throw() { }


    _c) :
                _Current         (const char *, size_t, char const **);
        int (*sputrune)
            (rune_t, char_c) :
                _Currentk (int);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram (int);
ing ::localec     _Runeonv;
}
# 42 "/usr/include/gcc/darwin/3.3/c++/p  public:
    bad_alloc() throw() { }


    a(int c);
extern int iscntrl(int         (const char *, size_t, char const **);
        int (*sputrune)
            (rune_t, chara(int c);
extern int iscntrl(intk (int);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram (int);
ilocale&, int      _Rune__prec = -1)
    {
      char* __old = setlocal  public:
    bad_alloc() throw() { }


     using ::islower;
  using ::isprin         (const char *, size_t, char const **);
        int (*sputrune)
            (rune_t, char using ::islower;
  using ::isprink (int);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram (int);
i, __prec, __v)     _Rune;
      else
        __ret = sprintf(__out, __fm  public:
    bad_alloc() throw() { }


     allocator;

  template<class _CharT         (const char *, size_t, char const **);
        int (*sputrune)
            (rune_t, char allocator;

  template<class _CharTk (int);
int ishexnumber (int);
int isideogram (int);
int isnumber (int);
int isphonogram (int);
 1 "/usr/inc     _Runelude/ctype.h" 1 3 4
# 68 "/usr/include/ctype.h  public:
    bad_alloc() throw() { }


   fpos.h" 1 3
# 43 "/usr/include/g         (const char *, size_t, char const **);
        int (*sputrune)
            (rune_t, chafpos.h" 1 3
# 43 "/usr/include/g invalid_rune;

        unsigned long runetype[(1 <<8 )];
        rune_t maplower[(1 <<8 )];
      ::wctomb;

Get
  abdelete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size/gcc/darw
  abs(long __i) { return labs(__i):size_eption" 3
exterern _RuneLocale *_CGetine voi138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
        u/iosfwdar *yte138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
        .3/c++/cGetle" 138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
         char *moe.h" cha138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
        ee;
  usinIn(*_seek) (void *, fpos_t, int);
        int (*_write) (void *, cong ::locGetonv;138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
        locale&, _t;
m;
 138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
        , __prec, Get;
    138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
    ::div;
 ec, Se;
};
# 138 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
e void* opva*);
charC" {
void c*_p;
        int _r;
        int _w;
        short _flags;
    e/gcc/darwiLE *);
int fflush (FIL     struct __sbuf _bf;
        int _lbfsize;


        voie/gc
# 1LE *);
int fflush (FI int (*_close) (void *);
        int (*_read) (void *, char 
# 1oid*LE *);
int fflush (FIs_t (*_seek) (void *, fpos_t, int);
        int (*_write) (vo,);
     LE *);
int fflush (FI, int);


        struct __sbuf _ub;
        unsigned char nexpectLE *);
int fflush (FIur;


        unsigned char _ubuf[3];
        unsigned char ,       LE *);
int fflush (FIstruct __sbuf _lb;


        int _blksize;
        fpos_t _of strm;
  LE *);
int fflush (FI "C" {
extern FILE __sF[];
}
# 241 "/usr/include/stdio.h" 3 4
,} FILE;

LE *);:bad_alloc);
void ope3.3/c+rator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, 3.3/c+const std::nothrow_t&) throw();
voi       char magic[8];
        char encoding[32];

        har *);
void rewin) throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


  typedef setvbuf (FILE *, char w_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/usturn __p; }
inl3.3/c+ine void* operator new[](std::size_t  _RuneRange maplower_ext;
        _RuneRange mapupper_ext; char *, __builtin_) throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


tf (char *, const char *, __builti*tmpfile (void);
char *tmpnam (char *);
int ungetc (int, FILE *);
int vfprintf /iosfwd" 1  char *
# 44 "/usr/include/gcc/darwin/3nt islower (int);
int isprint (int);
int ispunct (int);
t, const char *)n_va_list);
int asprintf (char **, const char *, ...);
int vasprintf (char **,ze_t *);
int fpurge (FILE *w_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/usr3/c++/cloca3.3/c+le" 3

# 1 "/usr/include/locale.husr/include/ctype.h" 3 4
extern "C" {
unsigned long ___r *, int);
int se) throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


FILE *, char *, int);
int sew_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/us char *mon_thow_errousands_sep;
        char *mon_groong f)
{
        return !!(__maskrune(c, f));
}

static izopen (const char) throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


C" {
FILE *funopen (const voidw_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/ushar p_sign_zopen posn;
        char n_sign_posn;
inline int
__tolower(int _c)
{
        return (_c < 0 |st char *, __bu) throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


nt __sputc(int _c, FILE *_w_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/usng ::localeczopen onv;
}
# 42 "/usr/include/gcc/darrn int isgraph(int c);
extern int islower(int c);
externude/gcc/darwin/3) throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


namespace std
{
  using ::FIw_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/uslocale&, int zopen __prec = -1)
    {
      char* __oace;
  using ::isupper;
  using ::isxdigit;
  using ::tolintf;
  using ::f) throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


::fscanf;
  using ::fseek;
  uw_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/us, __prec, __v)zopen ;
      else
        __ret = sprinte<typename _CharT, typename _Traits = char_traits<_CharT>,remove;
  using ::) throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


g ::setvbuf;
  using ::sprintf;
w_handler)();

  new_handler set_new_handler(new_handler) throw();
}
# 82 "/u 1 "/usr/inczopen lude/ctype.h" 1 3 4
# 68 "/usr/in, __j); }
}
# 68 "/usr/include/+/ppc-darwin/bits/c++i 3

# 1 "/usr/in) throw();
  };

  struct nothro}
}
# 68 "/usr/include/arwin/3.3/c++/cstdio" 1 3
# 48  3

# 1 "/usr/inw_handler)();

  new_handler set}
}
# 68 "/usr/include/g/stdio.h" 3 4
typedef off_t fpos_t;intf;
 # 107 "/usr/include/stdio.h" 3 4
struct __sbuf {
        unsigned char *_base;        int _size;har *);
void 40 "/usr/include/gcc/darwin/3.3/c++:
    ruct __sFILE {
        unsigned char  char *, __bu 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errno. _file;
  t, const c 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errnoie;
        *, int);
 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errno
        fposopen (cons 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errnoee;
  usinst char * 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errno      int _ude/gcc/da 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errno;


        intf;
  usi 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/errnoFILE;

externremove;
  us 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/include/ size_t, size_t, /pthread.h" 2 3 4

# 1 "/usr/include/errno.h" 1 3 4
# 22 "/usr/incluferror (FILE u;
        int tm_mon;
   clude/sys/errno.h" 1 3 4
# 68 "/usr/include/sys/errno.h" 3 4
ext *fgets (char sdst;
        long tm_gmtofrror (void);

}
# 23 "/usr/include/errno.h" 2 3 4
# 37 "/usr, const chasdst;
        long tm_gmto
# 1 "/usr/include/sched.h" 1 3 4
# 10 "/usr/include/sched.h"read (void sdst;
        long tm_gmtos_t (*_seek) (void *, fpos_t, inttime (const time_t *);
struct tmt fscanf sdst;
        long tm_gmtod_get_priority_min(int);
extern int sched_get_priority_max(i *, const sdst;
        long tm_gmtothread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 88 "/usr/inILE *);
intsdst;
        long tm_gmtostruct __sbuf _lb;


        int uct tm *gmtime_r (const time_t *r;
externsdst;
        long tm_gmtoc;
        int tm_min;
        int tm_hour;
        int tm_mday char *, ...)sdst; 4
stru_p, inrminatS_p, iexception() throw();
  };


e/pthr*unicod ::mt;
  using ::rant;
     int tp, iLengthinate_handler ();
}

}
t timegstst char sleep (const pec *);

}
#le" 1 "/usr/include/gcc/darw2 3 4
# 1 e/gcc/darwi*isCigned shorC" {
voiRelease3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usrsleep (const FILEuiltin_va_l timegm (struct tmUTFexception() throw();
  };


  typeut/exceptiotimespec *);

}
#UTF 39 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/includef enumalarm (unsigned72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 73 "/usr/incl);
int close (int);
size_t confstr (int, chtypedef enumextern "Csigned int alarm _n);  39 "/usr/include/pthread.h" memchrmemchnclude/gcc/darw_n); }ef void (*new, consr/include/unistd.h" 3 ;
  usim *);
char *strptemset;
/Use3 4
# 35 "/usr/includ (const chaElemeneption" 3
  bool uncaught_exce_n); }memchtimespecthrow_t;
        long t
int execvp (const char *, char * const *);
pid_t fork (void);
long fpaferror (FILE *);har **, const);
int execvine voit char *, char * const *);
int execvern "C" {
ex getgroups (i (void);]);
char *getlogin (void);
pid_t getpgr 66 "/usr/rminatle" d_t []);
char *getlogin (void);
pid_t getpgrc++/bits/stm (strust char*>]);
char *getlogin (void);
pid_t getpgrpbrk;

  rminatIbrk;

 ]);
char *getlogin (void);
pid_t getpgr__s1, consu_cxx
{
s1, con]);
char *getlogin (void);
pid_t getpgriltin_strpbrminatstrucd_t []);
char *getlogin (void);
pid_t getpgrs1), __s2); rminat;
    d_t []);
char *getlogin (void);
pid_t ghar **, const , uid_t,int, gid_t [ (const1 "/usr/include/gcc/darwd);
int getgrk (void)include/sys/unistd.h" towc;
 ile;
      nt, pid_t);
char *ttyname (int);
int  (void);
t char *);
ssize_t write (int,  unsign       intnt, pid_t);
char *ttyname (int);
int 66 "/usr/t char *);
ssize_t write (int, rncmp;, uid_t, st char*>id_t);
char *ttyname (int);
intc++/bits/stt char *);
ssize_t write (int,  ::st (int, oid);
inid_t);
char *ttyname (int);
intpbrk;

  t char *);
ssize_t write (int, ext (t (int,  rmdir (cid_t);
char *ttyname (int);
int__s1, const char *);
ssize_t write (int, r;
extt (int, d_t);
pid_id_t);
char *ttyname (int);
intiltin_strpbt char *);
ssize_t write (int, t char*t (int, unsigned inid_t);
char *ttyname (int);
ints1), __s2); t char *);
ssize_t write (d.h" 1 3 4
# 73 "/uspgrp (int, pid_t);
char *ttyname (int);
int unlink (const char *);
ssize_;
# 3nexpectar *std.h" 1 3 4
# 73 "/usgetpid (v

extern char *optarg;
extern int optind, opterr, wc;
 t getmode (const void *, mode_t);
 intchar * const [], const char *);



struct timeval;

int ac;
  ust getmode (const void *, mode_t);
 intvoid);
char *brk (const char *);
int chroot (const char *);
async_dt getmode (const void *, mode_t);
 intar *);
int des_cipher (const char *, char *, long, int); *, ct getmode (const void *, mode_t);
 intnt encrypt (char *, int);
void endusershell (void);
int exchar *t getmode (const void *, mode_t);
 intar * const *);
int fchdir (int);
int fchown (int, int, int); * const getmode (const void *, mode_t);
 int (int);
int ftruncate (int, off_t);
int getdtablesize (void);
ong);
int getmode (const vo;
        lonsetpgrp (int, pReg__mbar *ttyname (int);
int unlink (const char *nt exint16_tint exer *);
ssize_bu void unexpected *, size_t);4
# 1 "/usr/include/ppc/signalt optind, opterr,/include/ppc/signalcve (owc;
  us int sig_atomic_t;char * co4
# 1 "/usr/include/ppc/signat timeval;

int ac     REGS_SAVED_NONE,
  ;
  usREGS_SAVED_CALLER,


void);
cha4
# 1 "/usr/include/ppc/signaonst char *);
int is    REGS_SAVED_NONE,
  async_dREGS_SAVED_CALLER,


oid);
in4
# 1 "/usr/include/ppc/signaar *, long, int);w;
    int sc_sp;
       *, cREGS_SAVED_CALLER,


 rmdir (c4
# 1 "/usr/include/ppc/signaell (void);
int exw;
    int sc_sp;
      char *REGS_SAVED_CALLER,


d_t);
pid_4
# 1 "/usr/include/ppc/signawn (int, int, int);w;
    int sc_sp;
       * consREGS_SAVED_CALLER,


unsigned in4
# 1 "/usr/include/ppc/signatdtablesize (void);
w;
    int sc_sp;
      ong);
inREGS_S;
int fflush (FILE *);
h" 3 4
# 1 "/usr/include/ppc/signal.h" 1 3 4
# 32 "/usr/include/ppc/signal.h" 3 4
typedef int sig_atomic;
FILE 0 "/usr/include/ppc/signal.h" 3 4
typedef enum {
        REGS_SAVED_NONE,
        REGS_SAVED_CALLER,fputc (    REGS_SAVED_ALL
} regs_saved_t;
# 66 "/usr/include/ppc/signal.h" 3 4
struct sigcontext {
    int _t, FILEck;
    int sc_mask;
        int sc_ir;
    int sc_psw;
    int sc_sp;
        void *sc_regs;
};
# 28 char *include/machine/signal.h" 2 3 4
# 73 "/usr/include/sys/signal.h" 2 3 4
# 134 "/usr/include/sys/sig ftell 3 4
typedef unsigned int sigset_t;

union sigval {

        int sigval_int;
        void *sigval_ptr
int get



typedef struct __siginfo {
        int si_signo;
        int si_errno;
        int si_code;
      nst sys_epid;
        unsigned int si_uid;
        int si_status;
        void *si_addr;
        union sig;
extern4
# ster/darwi1 "/usr/include/gcc/darwin/3.3row() { }
   gcc/darwin/3.3/ *"/usr/; } pthrea34 "/id* opec != '\n'))
    Unr
# 303 "/usr/include/sys/signal.h" 3 4
struct si void (*terminatMonitorEusr/3/c++/new" 3
void* operator new(std::sizeoid (*) (int)))xieption" 3
  bool uncaught_exceptio void (*terminatGet ::abo"/usr/include/ppc/sign ::abo **vmsr/include/machine/;

}
#   int sc_mask;
        int sc4
# 1 "/usr/e/ppc/signal.h" 3 4
struct sigcontext {
    int sc_o(int, in, int);
int sigaction (int, const struct sigaction *, struct sigact sigcontex;
        t (int, Prude/ivignal.Critica_t);
voidt execlp (const char *, cosr/include/sys/unistd.h" 1 3 4
# 73 "/us);
int sigismember (const sigset_t *, int);
int sigpending ::calc (char *);
i "/usr/inclusleep (const  uid_t, gid_tmber (const sigset_t *, int);
ionst strucingsr/include/sys/unistd.h" 1 3 4
# 73 "/usr/incluiginterrupt (int, int);
int sighold (int);
innistd.h" 3 4
eint);
cgetpgrp 4 "/sleep (Weake() __attribute__ew" 3
void* operator new(std::siz_handler set_u struct sigvec *);
void psignal (unsit sig
  voihar **, const chapublic:
  st vc *);
void psignal (uw();


  void terminatDiusr/getpBuffint);
}
# set_t *,* ();
 


  vaddrestmodext (ed_handler) ();


  vextern nt rcmhar *Aar *, *, int, const char *, c char * REGS_SAVED38 "/usr/incp (const chaose_terminate_haec (const char *);
int readli *);
r(con76usr/include/gcc/darwin/3.3/machine/ligcc/darwin/3.3
int sradixsoabs;
  using ::atexit;
  us*funch" 1se (const  ::ssing ::getern void __ep*);

}
;
int sel->set *, fd_s unsong
         *);
chaldiv;
  usi);
size_t susing ::mbstowcs;
  using ::mbtowc;
  using ::qso
int sethostnamemespec *, t *, fd_set *, struct timevalid (uid_t);
 uns, [], ,s;
  usin usichar *strnct);
int seteug ::reall
int setgroups (iar *, int);
int setkey (const har *);
in setlogin id *setmode (c 4
# 50 "using ::strtoul;
  (g ::wcstombs;
 pid, pid_t pgrp);
int setregid);
int setrgid (gid setlombs;
  usingt);
int/sys/sys  inline long
  abd_t);
int; }

 d (uid_t);
void setusershell (void);
int s(const setl; }

  ic++/bits/fu char * iv(long __i, long(i, __j); }
}
# 68 "/usr/include/gcc/darwin/3.3/c++t *, fd_set *, struct timevalint truncate (cons setloc++/pr/include/n/3.3/c++/byscall (int, usinge.h" 2 3

# 1st char /c++t *, fd_set *, struct timeval *) *valloc (s setlo/c++/new" t);
intine/limisr/include/gcc/dsize_t);
pinclude/gcc/dat *, fd_set *, struct timevalonst *, char **);nt getsubetsudarwyscall (int, ...);
int truncat(const /3.3/c++/exception" 3
extern "C++" {

namespace ualarm (unsigned int, unsigned int);
in sync (voidc++/ocal (st
int usleep (unsigned i ::ssr/in(++/exception" 3 ualarm (unsigned int, unsignet get setlon" 3
  clat);
int);
int geNewed long);
w() { }
    virtual ~(int,void*,void*,size_t,unsigned l*,unteout (c:
   al ~exceptt);
int:memchr;




    virtual coset *, fd_set *, struct timevalar *,unsigned longtegid (gid_t);
in ::ca;



  class bad_ern void __epg);



}
# 40 "/usr/nclude/mathread.h" 2 3 4




# 1 "/usr/i   baach/mach_types.h" 1 3 4
# 64 "/ussr/incthread.h" 2 3 4




# tual ~bad_
int setgroup (const char*,vint setregidrwin/3.3/s setlooid*);

int g ::free;
e_handler) ();(xpected_handlet *, fd_set *, struct timevalint32_t uint32_char*,d_handler) ();t);
intemset;
ate_handler sd_t);
int) thrownt64_t uint64_t;



typedef in
typedef int3 setl) throw()yscall (int, ...);
nate() __attd_t);
int unext *, fd_set *, struct timevalnt16_t uint_l setl unexpected 3 4




#  set_unexpectedd_t);
int

  vedef u_int8_t uint8_t;edef int8_t int_ setl

  void un4_t;



typedef ittributed_t);
int
typedef uint32 int_fast16_t;
ty int_fastng*,unsigned long*r **, char * con3/c++/excet64_t;
typedn() throw();
}

st char*,void*,void*,size_t,unst uint_fast setlpedef;
}

namesp8_t;
typedef uint1 int_fast64_t;
tytypedef int16_t_t uint_least32_t;
tydef uint16_t ut_fast32_t;
typeignedvoid __verbose_term_t;
typedef u_int64_t uint64_t;



typedef i
# 1 "/usr/include/m8_t;
typedef int16_t i4
# 35 "/usr/.3/c++/new"nsigned long)t_fast64_t;
# 68 "/usr/includecs.h" 1 3 4
char*,u std
{



 int_least16_tad_alloc nsigned long);
new[](std::size_t, constr/include/gothrow_t not/libgist/s_handler) throt16_t;
typer *);
int st1 "<bu not(char *{
       long uthro =t_least32_t;
tyalloc()r/include/mc/vm_type, nothrow;


# 77 "/usr/incluned ch/ppc/vm_typesh/devel/li.h" 1 3 4hine/vm_types.h" 1 3 4
V# 27 "/usr/include/mach/machine/vm(long);
int sethostname othrow_t nothedef uint32_t uint_least32_t;
tyral_t;
# 86 "/usr/include/mach/ppc/vm_thine/vm_types.h" 1 3 4
Apedef natural_t vm_size_t;




typedef unsigned int space_ isphonogram /include/mach/machine/vm_types.h" 2 3 A
# 64 "/usr/include/mach/vm_statisgned int);
voidc/darwin/3.t64_t;
typedef uint8_t u *, struct timeval *) zero_fill_c.3/stdinopt (char **, char * cond::bad_allt64_t;
typed

namespace stdst char*,void*,void*,size_t,unsouts;
     .3/stdinlude/mach/machiid (uid_t, uid_operator densigned long);
int searchfs (const char *def struct vm_statow();
void* opert *, fd_set *, struct timeval *)edef stru 86 "/usr/igin ( 1 3 4
# 3ach/vm_statisti_t, const std::n    integer_t fde/mach/machine/vm_types.h" 3 4
# 1 "/usr/include/mach/ppc/vm_types.h" 1 3 4
# 77 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef unsigned int n throw();
void opt lookups;nclude/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_offset_tnclude/mach/machinvoid* operator new(std::size_t, _t;
typedef struct vm_stat;
# 28 "/usr/include/mach/machine/vm_typenclude/mach/machine.h" 1 3 4
# 60 "/usr/include1 3 4
# 127 "/usr/include/machAboolean.h" 3 4
# 1 "/usr/include/mach/machine/boolean.h" 1default.h" 3
#sr/include/mach/machine/boolean.h" 3 4
# 1 "/t;
    lude/mach/ppc/boolean.h" 1r **, char * c
inline void* opeboolean.h" 3 _t;
typedef struct vm_stati/include/mach/machine/vm_types.h" 3 4
# 1 "/usr/include/mach/ppine/limiedef naturaltatistics_t;
# 63 "/usr/include/mach/host_info.h" 2 3 4
# 1 "/usr/inclur *, __builtinne.h" 1 3 4
# 60 "/usr/include/mach/machine.h" 3 4
# 1 "/usr/include/mach/boolean.h" 1 3 4
#h/machine.h" 2 3 4
# 71 "/boolean.h" 3 4
# 1 "/usr/include/mach/machine/boolean.h" 1ean.h" 1 3 4
# 27 "/usr/include/mach/machine/boolean.h_t memory_size;
};

typedef struct machine_ie_info_data_t;

typedef integer_h/ppc/boolean.h" 3 4
typedef int boolean_t;
# 28 "/usr/inclusr/include/mach/machine/boolean.h" 2 3 4
# 128 "/usr/istruct time_valolean.h" 2 3 4
# 6t nothrow;

lude/mach
# 1" 1 3
# 44 "/uboolean.h" 3 4
# 1 "/usr/include/nteger_t major_version;
        integer_
# 1_version;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size_e (FILE *)/mach/time_value.h"t machine_info *machine_info_t;
typedef struct machine_info machine_info_dapped_time_value {t cpu_type_t;
typedef integer_t cpu_subtype_t;
# 64 "/usr/incach/host_info.h" 2 3 4

# 1 "/usr/include/mach/

typedef integer_t *host_info_t;


typekernel_version_t[(512)];

alue {
        integer_t seconds;
        integer_t microseco;
typedef struct time_value time_value_t;
# 106 _cpus;
    olean.h" 2 3 4
# 61 "/usr/include/macFILE locale" 3

# 1
        integer_t seconds;
        integer_t microseconds;
        inteFILE _version;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_sizesize_t, consic_info host_basic_info_data_ypes.h" 3 4
typedef int integer_t;





typedef natural_t vm_oef struct host_basi
typedef char kernel_boot_info_t[(4096)];







typedef integer_t host_flavor_t;







struct host_basic_ed_info_data_t;
typedef struct host_schedes {
        vm_size_t tas      vm_size_t memory_size;
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;
};

typedef strel_resource_olean.h" 2 3 4
# 61 "/usr/include/macrncmp;n_thousands_sep
        integer_t seconds;
        integer_t microseconds;
        interncmp;_version;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size(const void a_t;
typedef struct host_sched_info *host_sched_info_t;



struct kernel_resource_sizes {
  ger_t system_priorityt cpu_type_t;
typedef integer_t cpu_subtype_t;
# 64 "/usr/inclu 3 4
# 27 "/usr/include/mach/machine/boolean.hmum_priority;
        integer_t maximum_prrity_info_data_t;
typedef stalue {
        integer_t seconds;
        integer_t microsecondude/mach/machine/boolean.h" 2 3 4
# 128 "/usr/ictor[3];
};

olean.h" 2 3 4
# 61 "/usr/include/mac ::sign_posn;
   
        integer_t seconds;
        integer_t microseconds;
        intedaemoversion;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size, FILE *_pa_t;
typedef struct host_sched_info *host_sched_info_t;



struct kernel_resource_sizes {
   cpu_ticks[4];
};/boolean.h" 3 4
# 1 "/usr/include/mach/machine/boolean.h" 1 3 4
# 27 "/usr/include/mach/machine/boolean.h3 4


# 1 "/usr/include/mach/memory_objes.h" 2 3 4
rwin/3.3/c++/c/ppc/boolean.h" 3 4
typedef int boolean_t;
# 28 "/usr/include/mach/machine/boolean.h" 2 3 4
# 128 "/usr/i_t;
# 117 "olean.h" 2 3 4
# 61 "/usr/include/macext (aleconv;
}
# 4
        integer_t seconds;
        integer_t microseconds;
        inteext ( host_cpu_load_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 using ::FILa_t;
typedef struct host_sched_info *host_sched_info_t;



struct kernel_resource_sizes {
  e_t *mach_port_name
typedef char kernel_boot_info_t[(4096)];







typedef integer_t host_flavor_t;







struct host_basic_edef mach_port_type_t *mach_port_type_arrral_t mach_port_urefs_t;
t      vm_size_t memory_size;
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;
};

typedef stratural_t macolean.h" 2 3 4
# 61 "/usr/include/macr;
extint __prec = -1
        integer_t seconds;
        integer_t microseconds;
        inter;
ext host_cpu_load_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 :fseek;
  usa_t;
typedef struct host_sched_info *host_sched_info_t;



struct kernel_resource_sizes {
  qno_t mps_seqno;
    ruct host_priority_info *host_priority_info_t;
# 152 "/usr/include/mach/host_info.h" 3 4
struct host_load_inf
        boolean_t mps_srights;
        bo
        unsigned int mps_fl

typedef struct host_load_info host_load_info_data_t;
typedef struct host_load_info *host_load_info_t;






typedef int molean.h" 2 3 4
# 61 "/usr/include/mact char*__v);
      else
        integer_t seconds;
        integer_t microseconds;
        intet char* host_cpu_load_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2  ::sprintf;
 a_t;
typedef struct host_sched_info *host_sched_info_t;



struct kernel_resource_sizes {
  _t pad1:30;
        nat/boolean.h" 3 4
# 1 "/usr/include/mach/machine/boolean.h" 1 3 4
# 27 "/usr/include/mach/machine/boolean.h 4
typedef vm_offset_t pointer_t;
typedef vset_t;


typedef mach_port_t v "/usr/include/mach/port.h" 3 4
typedef port_t mach_port_t;
typedef port_t *mach_port_array_t;
typedef por






typedefolean.h" 2 3 4
# 61 "/usr/include/ma ::ca/include/ctype
        integer_t seconds;
        integer_t microseconds;
        int7 "/usr/include/mach/ppc/vm_types.h" 3 4
tychine/boolean.h/3.3/c++/ppa_t;
typedef struct host_sched_info *host_sched_info_t;



str 3 4




# t memory_object_ue {
        integer_t seconds;
        integer_t microsect;
# 28 "/usr/include/ma mach_port_t memory_object_default_t;
# 106 "/usr/includ4
typedef int memory_objealue {
        integer_t seconds;
        integer_t microsecude/mach/machine/boolean. mach_port_t memory_objec  boolean_t prealloc:1;
        boolean 127 "/usr/     _RuneEntry *ranget_copy_strategy4
struct sig        integer_t microseconds;
}t machine_info {
        integer_t major_version;
        integer_statistics *pmap_statistics_t;
# 63 "/usr/include/mach/host_info.h" 2 3 4
# 1 "/usr/inclurune_t (*sgetrune)
    t lookups;
    
typedef int32_t segsz_t;
typedef int32_t swblk_t;
t bcmp (
# 60 "/usr/include/mach/machine.h" 3 4
# 1 "/usr/include/mach/boolean.h" 1 3 4
# 127 "/usr/boolean_t may_cache;
   object_behave_info {
        memory_object_copy_strategy_t copy_st/include/gcc/darwin/3.3/c++/ppc-dasr/include/mach/machine/boolean.hboolean_t may_cache;
        memory_object_copy_strategy_t copy_strategy;
};

typedef struct o/mach/ppc/boolean.h" 1 3 4
# 129 "/usrar **);
        rune_t _object_behave_info_data_t;
typedef struct old_memory_object_attr_info *old_memory_objecude/mach/machine/boolean.h" 2 3 4
# 128 "/usr/iean_t may_cache;
};

strbject_attr_info_data_t;







struct memory_object_perf_info {
        vm_size_t cluster_si_info_data_t;

typer[(1 <<8 )];






   _object_behave_info_data_t;
typedef struct old_memory_object_attr_inine_info {
        integer_t major_version;
        integer_t minor_version;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_size

        void *variable    boolean_t temporary;
};

struct memory_object_behave_info {
            vm_size_t cluster_nfo *machine_info_t;
typedef struct machine_info machine_info_data_t;

typ_behave_info memory_objectemporary;
        boolean_t invalidate;
        boolean_t silent_ovnfo *old_memory_object_attr_info_t;
typedef struct old_memory_object_attr_inffo memory_object_behave_info_data_t;

typedef struct memory_object_perf_info *memory_o2 "/usr/include/mach/time_value.h" 3 4
ntRuneLocale;
# 69 "/usrattr_info *memory_object_attr_info_t;
typedef struct memory_object_attr_info memory_object    vm_offset_t cluster_size;
        boolean_t may_cache "/usr/include/mach/timel_page_info {
        vm_offset_t phys_addr;
        unsigned int
      3 4
typedef struct mapped_tit iscntrl (int);
intattr_info *memory_object_attr_info_t;
typedef struct memory_objer_t seconds;
        integer_t microseconds;
        integer_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_info.h" 2 3 4

int isspace (int);
in    boolean_t temporary;
};

struct memory_object_behave_info {
        memory_object_copy_def integer_t host_info_data_t[(1024)];


typedef char kernel_version_tch/machine/exception.hobject_behave_info {
        memory_object_copy_strategy_t copyr_info memory_object_attr_info_data_t;
# 264 "/usr/include/mach/memory_objectexception.h" 3 4
# 1 "/usr/include/mach/ppc/exception.h" 1 3 4
# 28 "/usr/inclur_t max_cpus;
        integer_t avaiii (int);
int isblanktion_types.h" 3 4
# 1 "/usr/include/mach/thread_status.h" 1 3 4
# 70 "/usr/include/m             device:1,
                        :0;
};

typct host_basic_info h4
# 27 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/ppcs {
        vm_nt);
int isspecial ( 70 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exception_types.h" 1 3 4
# 56 "/usr/include/mach/except min_timeout;
        integer_t min_quantum;
};

typedef struct host_sched_info host_schunetype (int);
int __h" 3 4
# 1 "/usr/include/mach/ppc/exception.h" 1 3 4
# 28 "/usr/include/mach/machine/exception.h" 2 3 4
# 57 "/usr/include/mach/exception_types.h" 2 3 4
;
        unsigned int r5;
  ption_types.h" 3 4
# 1 "/usr/include/mach/thread_status.h" 1 3 4
# 70 "/usr/include/mach/thread_status.h" 3 4
# 1 "/usr/include/mach/machine/int r14;
        unsigned int r15;
        unsigned int r16;
        unsigned inef struct kernel_resource_sizes kern, unsigned long _f)
{include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_thread_state {
        unsigned int srr0;
        unsigned int srr1;
        unsigne{
        integer_t kigned int r1;
        unsigned int r2;
        unsigned int r3;
        unsigned int r4ger_t systc]) & _f;
}

static iattr_info *memory_object_attr_info_t;
typedef struct memory_objecger_t server_priority;
        integer_t user_priority;
        integer_t depress_priority;
        integer_t idle_priority;
        integer_t mininline int
__isctype(in
struct upl_page_info {
        vm_offset_t phys_addr;
        unsigned int
                iority;
};

typedef struct host_priority_info host_priority_info_data_t;unsigned int save_pad6[object_behave_info {
        memory_object_copy_strategy_t copy_sfo *old_memory_object_attr_info_t;
typedef struct old_memory_object_attr_infnt save_pad6[7];
} ppc_vector_state_t;
# 132 "/usr/include/mach/ppc/thread_status.avenrun[3];
        integer_t mach_fale.runetype[_c] & _f);struct ppc_exception_state {
        unsigned long dar;
        unsigned long dsisr;
     vm_offset_t cluster_size;
        boolean_t may_cache
struct host_cpu_load_long pad1[4];
} ppc_exception_state_t;
# 28 "/usr/include/mach/machine/thread_statrt_name_t port           _Currentstruct ppc_exception_state {
        unsigned long dar;
     t host_cpu_load_info host_cpu_load_info_data_t;
typedef struct host_cpu_load_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 | _c >= (1 <<8 )) ?  unsigned long pad1[4];
} ppc_exception_state_t;
# 28 "/usr/include/mach/machine/thread_stct_types.h" 1 3 4
# 67 "/usr/include/mach/memory_object_types.h" 3 4
#ption_types.h" 2 3 4
object_behave_info {
        memory_object_copy_strategy_t cofo *old_memory_object_attr_info_t;
typedef struct old_memory_object_attr_infs.h" 2 3 4





typedef int exception_type_t;
typedef integer_t exception_dataarray_t;


typedef port_name_t portcctype" 2 3
# 71 "/uask_t;
typedef exception_mask_t *exception_mask_array_t;
typedef exception_behavio    vm_offset_t cluster_size;
        boolean_t may_cachet_name_t mach_port_navor_array_t;
typedef mach_port_t *exception_port_array_t;
# 71 "/usr/include/maal_t mach_port_tern int iscntrl(int 70 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exception_types.h" 1 3 4
# 56 "/usr/include/mach/exceptrt_right_t;
# 174 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_type_t;
typ int isprint(int c);
h" 3 4
# 1 "/usr/include/mach/ppc/exception.h" 1 3 4
# 28 "/usr/include/mach/machine/exception.h" 2 3 4
# 57 "/usr/include/mach/exception_types.h" 2 3 4
 43 "/usr/include/mach/ppc/prption_types.h" 3 4
# 1 "/usr/include/mach/thread_status.h" 1 3 4
# 70 "/usr/include/mach/thread_status.h" 3 4
# 1 "/usr/include/mach/machine/t dms : 1;
                unsigned int dmr : 1;
                unsigned int real_t mach_port_msgcount_t;
typedef n
}



namespace std
{include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_thread_state {
        unsigned int srr0;
        unsigned int srr1;
        unsigne  mach_port_name_t mpigned int r1;
        unsigned int r2;
        unsigned int r3;
        unsigned int r4qno_t mps_wer;
  using ::isprincr;
} ppc_float_state_t;

typedef struct ppc_vector_state {
        unsigned long save_vr[32][4];
        unsigned long savimit;
        mach_port_msgcount_t mps_msgcount;
        mach_port_rights_t mps_sorights;ower;
  using ::touppe[7];
} ppc_vector_state_t;
# 132 "/usr/include/mach/ppc/thread_status.h" 3 4
typedef struct ppc_thread_state ppc_saved_state_t;
# 148 "/usr/include/mach/pbits;
}mmcr1_t;

typedef union  struct ppc_exception_state {
        unsigned long dar;
        unsigned long dsisr;
   memory_object_copy_strategy_t copy_st_attr_info_t;
typedef struct old_memory_object_attr_inf               unsigned int ov : 1;
                unsigned int cv : 31;
        pedef integer_t *mach_port_info_t;


 1 3
# 43 "/usr/includmmcr2_t mmcr2;
      }u;
      pmcn_t pmc[2];
};

typedef struct processor_pm_regs processor_pm_regs_data_t;
typedef struct     vm_offset_t cluster_size;
        boolean_t may_cachee:1;
        boolean_te.h" 1 3 4
# 28 "/usr/include/mach/machine/thread_state.h" 2 3 4
# 72 "/usr/include/mach_t pad1:30; template<class _CharTattr_info *memory_object_attr_info_t;
typedef struct memory_object_mach_port_qos_t;
# 68 "/usr/include/mach/memory_object_types.h" 2 3 4
# 1 "/usr/include/mach/vm_types.h" 1 3 4
# 35 "/usr/include/mach/vm_types.h" 3
           typename _Act_behave_info_data_t;

typedef struct memory_object_perf_info *memory_obpointer_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t vm_object_offset_t;


typedef m_info_array_t;


typedefobject_behave_info_data_t;
typedef struct old_memory_object_attr_info *old_memory_obje
typedef struct old_memory_object_attr_int_attr_info_t;
typedef struct old_memory_object_attr_infy_t;


typedef integer_t processor_info_data_t[(1024)];


typedef integer_t *processlude/mach/memory_object_types.h" 2 3 4ring<char> string;




processor_basic_info {
        cpu_type_t cpu_type;
        cpu_subtype_t cpu_subtype;
        boolean_t running;
        int sl    vm_offset_t cluster_size;
        boolean_t may_cacheef mach_port_t memory_on_t temporary;
};

struct memory_object_behave_info {
        memory_object_copy_strategdef int m# 43 "/usr/include/gask_t;
typedef exception_mask_t *exception_mask_array_t;
typedef exception_behavio*memory_object_array_t;




typedef mach_port_t memory_object_name_t;



typedef mach_port_t meo.h" 1 3
# 35 "/usr/i    boolean_t te;
# 106 "/usr/include/mach/memory_object_types.h" 3 4
typedef int m




struct processor_70 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/exception_types.   memory_object_copy_strategy_t copypes.h" 3 4
typedef int memory_object_r




struct processor_set_load_info {
        int task_co       integer_t load_average;
     {
        unsigned long cpu_ticks[4];
};

typedef struct proces_info processor_set_load_info_data_t;
typedef struct pror_t;
typedef int memory_object_info_dat/mach/task_info.h" 1 3include/mach/mach_types.h" 2 3 4
# 1 g *, u_long *)_t;
# 107 uct vm_statistics *vm_statistics_t;
typedef struct vm_stastics vm_statistics_data_t;
# 99 "/usr/include/micy_limiatistics.h" 3 4
struct pmap_statistics {
ze;
};
# 138 "   integer_t maruct __sFILE {
   integer_t reactivations;
        int sync (voidups;FILE {
       e_info_data_t;
ar *_p;
       iority;
};
struct policy_timeshare_info {
        integer_t maxnteger_t cur_       integer_t base_priority;
# 1
        str_priority;
        boolean_t depressed;
        integer_t deprese *policy       integer_t base_priorityFILE     int (*_ciority;
};
struct policy_timeshare_info {
        integer_t maxshare_info       integer_t base_priorityrncmp;fpos_t (*_seeiority;
};
struct policy_timeshare_info {
        integer_t maxolicy_times       integer_t base_priority fd_setd_get_priority;
};
struct policy_timeshare_info {
        integer_t max 142 "/us       integer_t base_priorityext (t _ur;


   iority;
};
struct policy_timeshare_info {
        integer_t maxum;
};
str       integer_t base_priorityr;
ext   struct __siority;
};
struct policy_timeshare_info {
        integer_t max;
        i       integer_t base_priorityt char*ern "C" {
exteiority;
};
struct policy_timeshare_info {
        integer_t maxy;
};

typed       integer_t base_pri;
        d clearerr (FIiority;
};
struct policy_timesferror (FILE *int memory_object_info policy_rr_info       integer_t,LE *);
int 3 4




# (FILE *);
int fo *policy_rr_info_t;

typedef sdef int memory_object_flavogets (char *rr_base policy_rr_base_dass_priority;
};

typedef strurr_limit policy_rr_limit_de *policy_timeshare_base_t;
typedef stcy_rr_info_data_t;
# 176const charach/policy.h" 3 4
struct py_timeshare_limit_t;
typerr_limit policy_rr_limit_share_info *policy_timeshare_info_t;

teger_t max_priority;
};
sd (void *rr_base policy_rr_base_dase policy_timeshare_base_drr_limit policy_rr_limit_olicy_timeshare_limit policy_timeshare_l (long);
int sethostname (c fscanf (rr_base policy_rr_base_day_timeshare_info policy_timrr_limit policy_rr_limit_ 142 "/usr/include/mach/policy.h" 3 4
cy_rr_info_data_t;
# 17, const frr_base policy_rr_base_danteger_t base_priority;
 rr_limit policy_rr_limit_um;
};
struct policy_rr_limit {
       eger_t max_priority;
};
s *);
int rr_base policy_rr_base_dat policy_rr_info {
       rr_limit policy_rr_limit_;
        integer_t base_priority;
      free_count;
        integr;
extern rr_base policy_rr_base_dalean_t depressed;
        irr_limit policy_rr_limit_y;
};

typedef struct policy_rr_base *polboolean_t;
# 28 "/usr/incluar *, ...);rr_base policy_rr_base_daicy_rr_limit *policy_rr_limirr_limit polier_t hits;
};

typ;
int putchar uct vm_statistics *vm_statistics_t;
typedef struct vm_statint);
size_t strspntistics_data_t;
# 99 "/usr/include/ma_t;
typedef statistics.h" 3 4
struct pmap_statistics {
    n;
        ie (const char *,ral_t vm_size_t;




typedef unsigned int space_





t wired_count;
};

typedef struct pmap_statistics *pmap_statistics_t;
# 63 "/usr/include/mach/host_info.h" 2 3 4
# 1 "/usr/inclubuf (FILE *, char *# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_offset_t        time_value_t useg runetype[(1 <<8 )];
        rune_t maplnfo_t;
# 152 "/usr/include/mach/host_info.h" 3 4
struct host_load_info   time_value_t user_time;

        time_value_t st task_basic_info task_basic_info_da vm_statistics {
        integer_t free_count;
        inte   integer_t active_count;
        integer_t inac   integer_t messages_se
        integer_t wire_count;
        h/machine.h" char *, __builtin_a_t;
typedef so *task_basic_info_t;






strt machine_info {
        integer_t major_version;
        integer_t minor_version;
        integer_t max_cpus;
        integer_t avail_cpus;
        vm_sizest char *, __builtin# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_o_events_info_data_t;
typedef stta_t;
typedef sts_info *task_events_info_t;






strdef exception_behavior_t *exception_behavior_array_t;
typedef thread_times_info_data_t;
typedef struct task_thread_timech/mach_types.h" 2 3 4
# 1 "/usr/inclu vm_statistics /usr/include/mach/machine/thread_state.h" 1 3 4
# 27 "/usr/include/include/mach/mach_types.h" 1 3 4
# 38 "/usr/include/mach/;
};
typedef struct task_events_info task_apped_tit, const char *)natural_t task_policy_flavor_t;
typedef integeer_t seconds;
        integer_t microseconds;
        integer_t check_seconds;
} mapped_time_value_t;
# 66 "/usr/include/mach/host_info.h" 2 3 4

t fpurge (FILE *)
typedef struct task_thread_times_info *task_thread_times_info_t;
# 74 "/usr/include/mach/mach_ 0,
        TASK_FOREGROde/mach/task_policy.h" 1 3 4
# 37 "/usr/include/ask_policy.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "/usr/ik_role_t role;
};

typedef struct task_catt task_category_policy *task_cat natural_t task_policy_flavor_t;
typedef integerhandler(new_handler) throw();
}
#     integer_t syscalls_unix;
        id int r0;
           integer_t wire_count;
        if struct *, int);
int seUND_APPLICATION,
        TASK_BACKGROUND_APPLICATION,
        TASK_CONTROL_APPLICATION,
        TASK_GRA min_timeout;
        integer_t min_quantum;
};

typedef struct host_sched_info host_schar *, size_t, con# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_of integer_t *thread_info_egory_policy_t;
# 75 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_special_ports.h" 1 3 4
# 66 "/uslicy;
        integer_t run_state;
           integer_t sleep_time;

};

ty 76 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_info.h" 1 3 4
# 76 "/usr/include/mach/thread_in{
        integereger_t *policy_base_t;
typedef intger_t systeopen (const charnatural_t task_policy_flavor_t;
typedef integer_ger_t server_priority;
        integer_t user_priority;
        integer_t depress_priority;
        integer_t idle_priority;
        integer_t minimopen (const void # 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_o3 4
struct thread_standard_de/mach/task_policy.h" 1 3 4
# 37 "/usr/include/maask_policy.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "/usr/read_policy.h" 3 4
struct thread_extended_pothread_extended_policy thread_exte natural_t task_policy_flavor_t;
typedef integer_t/usr/include/mach/thread_info.h" 1 3 4
# 76 "/usr/include/mach/thread_in
struct host_cpu_leger_t *policy_base_t;
typedef inte_t portst char *, __bunatural_t task_policy_flavor_t;
typedef intet host_cpu_load_info host_cpu_load_info_data_t;
typedef struct host_cpu_load_info *host_cpu_load_info_t;
# 67 "/usr/include/mach/mach_types.h" 2 int _c, FILE *_p# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_oypedef struct thread_tide/mach/task_policy.h" 1 3 4
# 37 "/usr/includask_policy.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "/usr/edence_policy thread_precedence_policy_datort_name_t port        return (nclude/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_spe/usr/include/mach/task_policy.h" 3 4
enum task_role t_name_t mach_poeger_t *policy_base_t;
typedef inte_t *machude/gcc/darwin/3UND_APPLICATION,
        TASK_BACKGROUND_APPLICATION,
        TASK_CONTROL_APPLICATION,
        TASK_GRArt_right_t;
# 174 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_type_t;
typd
{
  using ::FIL# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_oint clock_res_t;




struegory_policy_t;
# 75 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_special_ports.h" 1 3 4
# 66 "/ustributes.h" 1 3 4
# 70 "/usr/include/mach/vribute_t;
# 79 "/usr/include/maclude/mach/clock_types.h" 3 4
typedef int alarmaint;
        boolean_t preemptible;
};

typedef struct thread_time_constr  mach_port_name_eger_t *policy_base_t;
typedef inteno_t mps_intf;
  using ::fpolicy {
        natural_t no_data;
};

typedef struct thread_standard_policy thread_standard_policy_data_imit;
        mach_port_msgcount_t mps_msgcount;
        mach_port_rights_t mps_sorights;sing ::fseek;
  us# 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_oint vm_behavior_t;
# 85 "/unded_policy_data_t;
typedef struct thread_extended_policy *thread_extended_policy_t;
# 153 "/usr/include/mach/thread_policmach/vm_sync.h" 1 3 4
# 60 "/usr/include/mac/include/mach/mach_types.h" 2 3 4
edef unsigned int vm_inherit_t;
# 84 "/usr/incluaint;
        boolean_t preemptible;
};

typedef struct thread_time_constre:1;
        booleeger_t *policy_base_t;
typedef int_t pad1:30;remove;
  using ::natural_t task_policy_flavor_t;
typedef integer_t mach_port_qos_t;
# 68 "/usr/include/mach/memory_object_types.h" 2 3 4
# 1 "/usr/include/mach/vm_types.h" 1 3 4
# 35 "/usr/include/mach/vm_types.h" 3 using ::sprintf;
 # 86 "/usr/include/mach/ppc/vm_types.h" 3 4
typedef int integer_t;





typedef natural_t vm_o     vm_prot_t max_protectionde/mach/task_policy.h" 1 3 4
# 37 "/usr/include/machask_policy.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 38 "/usr/pedef struct vm_region_basic_info_64 *vm_regi_64 vm_region_basic_info_data_64_t;
*vm_region_recurse_info_64_t;
typedef int vm_regioaint;
        boolean_t preemptible;
};

typedef struct thread_time_constref mach_port_t memoeger_t *policy_base_t;
typedef indef int m 3

# 1 "/usr/inst char *, off_t);
int ttyslot (v*memory_object_array_t;




typedef mach_port_t memory_object_name_t;



typedef mach_port_t medarwin/3.3/c++/pp char*,uid;
# 106 "/usr/include/mach/memory_object_types.h" 3 4
typedef int m unsigned int user++/ppc-darwin/bits/gthr.h" 1 3
nt vm_inherit_t;
# 84 "/usr/inclypes.h" 3 4
typedef int memory_object_r unsigned int user_tag;
        unsigned int pant pages_shared_now_private;
  lude/mach/cned int pages_swapped_out;
        unsigned int pages_or_t;
typedef int memory_object_info_datxternal_pager;
    short shadow_depth;
        unef integer_t *polad.h" 1 3 4
#a_t;
typedef stmits policy_limit_data_t;
typedef struct policy_fos policy_info_data_t;
# 67 "/usr/include/mach/task_ity;
};
struct policy_timeshare_limit{
        integn;
        int tma_t;
typedef stricy_timeshare_limit_data_t;
typedef struct policyident;
        unbasic_info_teger_t base_priority;
        im_gmtoff;
        nsigned char share_mode;
};

typedef struct vm_region_top_info *vm_regss_priority;
};

typedef struct vm_region_top_hare_bat * __error (vo_t;
# 173 "/usr/include/mach/vm_region.h" 3 4
struct vm_region_submap_iy_timeshare_liypedef struct vm_region_topicy_timefftime (time_t,nsigned char share_mode;
};

typedef struct vm_region_top_info *vm_regse policy_timesypedef struct vm_region_top struct po
time_t mktime nsigned char share_mode;
};

typedef struct vm_region_top_info *vm_regy_timeshare_infoypedef struct vm_region_top fd_setme_t time (timnsigned char share_mode;
};

typedef struct vm_region_top_info *vm_regnteger_t base_ypedef struct vm_region_top_t quant*ctime_r (constnsigned char share_mode;
};

typedef struct vm_region_top_info *vm_regt policy_rr_infypedef struct vm_region_top_priorityocaltime_r (consnsigned char share_mode;
};

typedef struct vm_region_top_info *vm_reglean_t depressedypedef struct vm_region_topss_prioritchar *timezone (insigned char share_mode;
};

typedef struct vm_region_top_info *vm_regicy_rr_limit *polypedef struct vm_regiotruct policy_fident;
        unsigned char share_mode;
};

tyboolean_t;
# 28 "/usr/inclu  int tm_isds
typedef sypedef struct m_region_top_info_t;
typedef structrr_lsdst;
   struct policy_fion_top_info_data_t;
# 173 "/usr/include/mach/vmboolean_t;
# 28 "/usr/inclun char *tznameied;
        unsigned int refinfo {
        vm_prot_t protec shadow_depth;
        unsigned chrotection;
        vm_inherit_t inherithare_mode;
        boolean_t(const tim       vm_behavior_t behavior;      unsigned int user_tag shadow_depth;
        unsigned c_resident;
        unsigned int pages_shboolean_t;
# 28 "/usr/inclu *localtimeied;
        unsigned int refpages_swapped_out;
        u shadow_depth;
        unsigned c      unsigned int ref_count;
        unsboolean_t;
# 28 "/usr/incluhar *, constied;
        unsigned int refned char external_pager;
     shadow_depth;
        unsigned ce;
        boolean_t is_submap;
       boolean_t;
# 28 "/usr/inclustruct tm ied;
        unsigned int refset_t object_id;
        un shadow_depth;
        unsigned ct;
};

typedef struct vm_region_submap_iboolean_t;
# 28 "/usr/inclu, struct tmied;
        unsigned int reftruct vm_region_submap_info  shadow_depth;
        unsigned c






struct vm_region_submap_info_64 {
boolean_t;
# 28 "/usr/inclu const char ied;
        unsigned int refm_prot_t max_protection;
     shadow_depth;
        unsigned c        vm_object_offset_t offset;
       s;
        policy_rr_info_data_t rr;
;
typedef int kmod_control_flavod int pages_resident;
         shadow_depth;
C" {
 void
  struct tm);
size(const struct timespec *, edef uint32_t uint_least32_t;
tyruct km setlstruct t
void *setmode (cw;
   *);

}
# 39 "/( 2 3 4
# 1 "data_t;
# 67 "/usr/include/mach/taruct kmod_i setl 1 "/usr/ichar *,d_info *ki,  1 3 4
# 72 "/info {
     r *);
ssize_t write  struct kmod_info *next;
        int ];
   rsion;
 ,ys/unistd.h"  3 4




# 73 "/usr/include/u      char vernistd.h" 3 4
externint memory_object_infodress_t address;
  _t *referextern "d_policy.h" 3func_t(struct kUTF
int setgroup);
uf kern_return_t kmod_stop_func_t(struckmod kmod_;
unsigneata);

typedef structned int);info {
        struct kmod_info *next;
        int ef struct rsion;
        int id;
    f enum_t, gid_t);
int c      char version[64];
        int reference_count;
        kmod_refef struct_t *reference_list;
        vm_address_t addreef struct kmod_load_wi*, ...);
int execl_size_t hdr_size;
        kmod_starme[64];
        ch;
        kmod_stop_fypedef st char *, (t char *, cont *, fd_set *, struct timeval *)# 91 "/usr/i setl*, const pmap_statistics {_n); }ecv (const cha(int execve (const char *nt vm_inherit_t;
# 84 "/usr/includchar * constcount;
        integer_t inactive_countmach_64_t uendent;
 const *, cht shared_pages_re
int execvp (const   integ_t fork (void);
long fpat  integer_t reactivations;
        inth_port_t proc task_t;
t,g fpathconf licy_rr_limit_ef mach_port_t processor_t;
typedef mach_port_t pr/mach/machine.h" 3 4
struct machinuct policy_rr_base policy_rr_base_data_t;
essor_set_control_t;
typedef ct policy_bases pold);
int getgrs (int, gid_t [_port_t thrt_t host_t;
typedef mach_port_t t_t processor
typedef 3 4
typedef int tcessor_setrap_t;
tr_set_name_t;




typedef mach_port_t clock_f mach_poedef mach_port_t boots 66 "/usr/ isatty (intr_set_name_t;




typedef mach_port_t clockhandler_t edef mach_port_t bootsc++/bits/st (int, off_t,r_set_name_t;




typedef mach_port_t clockmaster_t;
tedef mach_port_t bootspbrk;

   (void);
inr_set_name_t;




typedef mach_port_t clockk_t *taskedef mach_port_t boots__s1, consint rmdir (cr_set_name_t;




typedef mach_port_t clockay_t;
typeedef mach_port_t bootsiltin_strpb pid_t);
pid_r_set_name_t;




typedef mach_port_t clock
typedef thedef mach_port_t bootss1), __s2); p (unsigned inr_set_name_t;




typedef mach_port_t clock/mach_types.edef mach_port_t tpgrp (int);
intsetpgrp (int, pid_t);
c(t unlink (const char *);
ssize_t writepressed;
        integer_t depress_priod_port_t;
typetrol_t;
typence_list;
         const v *, size_t);

extern(int optind, opterr, optopt, optreseuct policy_timeshare_limit *policy_t
typedef host_t host_name_t;
typedef host_t higblock


        Rpedef proct timeval;

int acct (const char *pedef struct policy_timeshare_base p
typedef host_t host_name_t;
typedef host_t hasync_dan (void);
char *brk ((oot (const char *);
char *crypt (conmit_data_t;
typedef struct policy_tim
typedef host_t host_name_t;
typedef host_t h *, co char *);
int des_c_t;
tef thread_act_t thread_act_port_t;
typedef thread_act_array_t _t;
typedef lock_t host_name_t;
typedef host_t hchar *k;
int encrypt (char (hell (void);
int exect (const char integer_t max_priority;
};
struct po_array_t ledger_port_array_t;
typedef alarm_t * const char * const *);
int(own (int, int, int);
char *fflagstos  integer_t quantum;
        boolean__array_t ledger_port_array_t;
typedef alarm_tong);
intync (int);
int ftrunca(etdtablesize (void);
int getgrouplistcy_rr_base_t;
typedef struct policy_rr_array_t ledger_port_array_t;
typedef al     vm_address_tt thread_port_t;
typedef thread_array_t tts_info *task_events_info_t;






strut);
mode_t getmts_info *task_events_info_t;






strulpg (pid__size_t hdr_size;
        kmoport_t;
typedef host_t host_namet getmonst void *      vm_address_tort_t;
typedef processor_set_t procrse_info_64_t;
typedef int vm_region;
int getpgirse_info_64_t;
typedef int vm_region 3 4
# 68 "/usr/include/sys/time.h" 3 4_set_name_port_t;
typedef pr_t tv_sec;
        int32_t tv_usec;processor_t procesy_t;
typedef procrse_info_64_t;
typedef int vm_regionint initgrou;
        int tz_dsttime;
};
# 141 "/usr/include/sys/time.h" 3 4
struct itprocessor_t processor_port_t;_t tv_sec;
        int32_t tv_usec;essor_port_array_t;
typedef thread_acnherit_t inheritance;
        booleanssetugid (voinherit_t inheritance;
        boolean 3 4
# 68 "/usr/include/sys/time.h" 3 essor_port_array_t;extern "C" {
int adjtime (const struct timeval_t;
typedef lock_set_t lock_set_p   natural_t no_data;
};

typedef s);
int mkst timeval *, const struct timezone *);
i
# 68 "/usr/include/sys/time.h" 3 ger_array_t ledger_port_arra_t tv_sec;
        int32_t tv_usec;t_t;
typedef clock_serv_t clock_serrse_info_64_t;
typedef int vm_region_t pread (in;
        int tz_dsttime;
};
# 141 "/usr/include/sys/time.h" 3 4
struct itt_t;
typedef clockpthread_attr_destroy (pthread_attr_t *attr);
iion_handler_array_t exception_port_arnherit_t inheritance;
        boolean" 3 4
# 1 "/utruct itimerval *);
int gettimeofday (struct timeval *, struct timezone *);
typedef integer_t ledger_item_t tv_sec;
        int32_t tv_usec;on_vector_t;
typedef char *user_subsyst       vm_behavior_t behavior;
       signal.h" 1 3        vm_behavior_t behavior;
       val *);
}
# 169 "/usr/include/pthread. 4
# 207 "/usr/include/mach/mac_t tv_sec;
        ;
        ne/signal.h" 3 4
# 1 
# 74 "/usr/include/pthread.h" 3 4
extern "C" {
# 168      REGS_SAVED_NONE,
   3 4
typedef int memory_object_info*attr, int detachstatetrol_t;
typint16_def REGS_SAVED 3 4




# _t;
# 50 "/usr/incclude/sys/time.h" 3 4
struct timezone {
             REGS_SAVED_NONE,
        REGSd_attr_setschedparam (pthr_attr_setschedpconst struct sched_param *param);

int pthrea           void




struct clockinfo {
        int hz;
       sigaction *, struct sigaction *);
id_attr_setschedparam (pth size_t stacksizconst struct sched_param *param);

int pthreaonstack;
    int *);
int futimes (int, const struct timeval *);
isw;
    int sc_sp;
        void *sc_d_attr_setschedparam (pth, int *oldstate);const struct sched_param *param);

int pthreaigaction {
   day (const struct timeval *, const struct tim/sys/signal.h" 2 3 4
# 134 "/usr/id_attr_setschedparam (pthond_t *cond);
iconst struct sched_param *param);

int pthrea.h" 3 4
typedefetdetachstate (const pthread_attr_t *attr, int 
        int sigval_int;
        vod_attr_setschedparam (pth *cond, pthread_const struct sched_param *param);

int pthreass_sp;
        iam *param);

int pthread_attr_getschedpolicy (con
        int si_errno;
        int sd_attr_setschedparam (pthttr_t *attr);
intconst struct sched_param *param);

int pthreasys/signal.h" 3 4ize_t *stacksize);

int pthread_attr_getstack (consus;
        void *si_addr;
        und_attr_setschedparam (pthread_condattr_t *aconst struct sched_param *param);icy_rr_limit_data_t; detachstate);

int pthread_attr *thread, const pthread__setinheritsched (pthread_attr_t ;

int pthread_attr_setschedparam (int pthread_equal (pthconst struct sched_param *param);

int pthon_u {
        voiocessor_set_t proces2);

void pthread_exit (void *value_ptr);
int pthredr (pthread_attr_t *attr, void *sigset_t *, int *);
set_t *, sigset_t *);
int sigwait (const sigs size_t stacksize);

int pthread_hedparam (pthread_t thread, int *policy, struct sched_size_t stacksize);

int pthread_stroy (pthread_muteset_t *, sigset_t *);
int sigwait (const sigs, int *oldstate);
int pthread_setcahedparam (pthread_t thread, int *policy, struct schedancel (void);
int pthread_cond_broaattr_t *attr);

int set_t *, sigset_t *);
int sigwait (const sigsond_t *cond);
int pthread_cond_hedparam (pthread_t thread, int *policy, struct sche *attr);

int pthread_cond_signack (pthread_mutex_set_t *, sigset_t *);
int sigwait (const sigs *cond, pthread_mutex_t *mutex);
hedparam (pthread_t thread, int *policy, struct sched_read_mutex_t *mutex, const struconst pthread_mutexaset_t *, sigset_t *);
int sigwait (const sigsttr_t *attr);
int pthread_condattr_ (pthread_mutex_t *mutex);
int pthread_mutex_setprioceir_getpshared (const pthread_condad_mutexattr_t *attr,set_t *, sigset_t *);
int sigwait (const sigsread_condattr_t *attr, int pshared);
 (pthread_mutex_t *mutex);
int pthread_mutex_setprioceattr_t *attr, void *(*start_routine)ttr_setprioceiling (p



int pthread_detach (pthread_t three);

;
# 303 "/usr/iruct vm_region_top_in
        char *ss_sp;
        int_t *mutex);
int pthreadnstack;
}t *, fd_set *, struct timeval *attr, int typebasic_info_t;
typs,nstack;
};
# 33t semaphoreinclude/sys/signa
# 63 "/usr/include/mach/vm_statistics.h" 3_self (void);
int resident;
pthread_mutexattr_t (int))) (in   integer_tpthread_once (pthread_once_t *int pthread_k pageins;
        inte;


int pthrxist32_t;
typedpthread_key_t *key, void (*destructor)read pageins;
        (int, fd_set ::abo( {
int raiset *, fd_set *, struct timeval *)*pthrea setlise ((pthread_attr_t *at(pid_t, int)      char vers*attr, void *stackaddr, size_t stacksize);

int pthread_canint *);
int p_t *refer pthread_setcancelstate (int state,et_t *, int);
pthread_attr_setscope (pthread_attr_t , int);
int pthread_getconcurrency (void)estroy (ptthread_setconcurrency (int);
inillset (sigst *);
int sigismember (coinclude/mach/tem_t;





# 1 "/usr/include/mach/std_types.h" 1 3dlock (pthread_rwlock_tt host_name_t;
typedef host_t vm_address_tdlock (pthread_rwlock_t *rwlock);
int_t *);

int killpg (pid__size_t hdr_size;
        kmock);
int pthread_rwlock_wrlock (pt

int khstate (pthread_at;
int sigblocknt);
int siginterinfo {
     );
int sigrelse (int); int reference_count;
        kmod_refed_rwlock_wrlotroy (phread_rwlock_t *rwlock);
int pt pthread_rwlockattr_destroy (pt(int);
int sigvec (in_size_t hdr_size;
        kmod_startared (const pthread_gvec (int,edef struct t sig *, struct sigved_key_t key);
int pthread_setspecific (pthmain_np (void);

 pageins;
        int

typedef in_np (void);


t profil f uint8_t uint_fast8_t;
type_t);
size_t pthreadt_fast32_t;
h/mach_types.hint);
ssize_t g,void*,unsigned long);



}
# 40 "/usr/hread_tegid (gid_t)ine/vm_types.h" int rcmd (char * 3
# 34har *, const char *, intedef task_t task_port_t;
typedef _mutex_t *mutex, setlohar *, cotypedef int16_t int_l


  vcomp (const char *);
i   integetr, void *(*stat;
typedef struct poli*start_routine)(voi setloram *param);

inuser_wire, char *, int);
int id *), void *arg);



void pthread_yield_np (void);

}
# fo.h" 3 4
# 1 ude/gcc/darwits/fun# 1 "/usr/inclu ::aboO   vi/darwin/3.3/co   vilock_dt;
        *extraInfoude/gread_mutex_once_t;
typedef pthread_InitArgpc-darwimach/m ::getvoid (*terminmutex_lude/mahread_mutex_tmutex_t" 1 3 4
cc/darwingnoreinclcognjmh/rwin/3.3/ct.h" 3
sonce_t;
typedef pthread_Attach 3
static inline int
__gthread/3.3/c++/bits/stfast8_t;
touprwin/3.3/cline int
_r *);e_t;
typedef pthDK1_1t.h" 3
static inline int
__gthread;
  us*pr __stie" 1 3 4
# 25nst vSourcce, voidactivdarwiStackSigned *);g ::stavae (__gthread_key_t *minHeap (*dtor) (void *ax
{
  return pthreadverifyModbits/stl_algo usinpathvoid (*terminatvf*, cof)(FILE *fpn_top_info {
 format/3.3/c++/ppc-darwin/bits/gthrechar_t;
typnst void *, mode_tabort) 3
#  void (*termieude/g  usiGCead_key_t *e int
Verboseread_key_deledisde/gAsyncread_key_delevthread/usr/include/gcdebugg 96 "/usrey)
{
linePusing} return pthreadonce_t;
typedef ptheturnline int
__gthreat (sigs__padd 96 "fic (__gf (__gthread_ac ::abs;
  usi{
  using ::div_sing ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  u ::div;
  using ::exit;4using ::free;
  ur/incluys_siglad_getspeise (int);


exterline iCal cntThreadt *mutex)
{
ock_t *r*p *, constnt __svfscanf (FILE *,Detive_p ())
    return pthreadconst char *const sEnvturn pthread_mutex_lock (munline int
__  if (__gthread_active_p ())
    reAsDaemetenvn pthread_mutex_lock (mutex);
  else
 ead_onc  using ::ldivt char *, const char *)thread_key_t key,);
int select (int, fd_thread_mutex_set *, fd_set *, struct timevalve_p ())
    rtegid (gid_t);
int ::sactive_p ())
    re 3
# _lock (mutex);
  elsclude/mach/vm_statistics.h" 3 sr/include/gcc/darw setlock (mu/mach/clock_types.h" 1
}

static inline ireturn pthread_mutex_unlock (mutede/gcc/darwin/3.3/c++/pthread_mutexattr_t__gthrwin/3.3/c++/pp(__gthread_act *, fd_set *, struct timeval *)_c_sc++/ppc-darwhread_actirn 0;
}
# 99 "/usr/include/gcc/darx_trylocwin/3.3/c++/ppc-darwin/bits/gthr.h" 2 3
# 38 "/usr/include/gcc/darwin/3.3rt __int_c++/ppc-darwin/bits/c++iost un (void99 "
JNI_ppc-efaulead_attt.h" 3
swin/3.3 throw() st __int_Create*pthread_getspecpad_mutex_lock (mutex);
  else
  st __int_typpe _S_d(mutexsad_getspec_setsco_setscop*le (cost __int_OnLoad (mutex);
  else
    using  (cha 3 4
  statUn;
  onst __int_type _S_oct = 0x0040ic inlconst char* __s);

  void
  __throw_out_, int (*)(const 3size (int *, long *);
char *cgetcap , int (*)(c char* __s);

  void
  __throw_rdispr/inange_e*);
i using, int (* "/ussr/includent);
void *mest char *);
 char int ranw_errost __int_t*skipws = 0,
        0;
    statiNM_RECURSt_type _S_skipws = 0x10  usn fd_s const __iic cost char *, int);(void);
00;
    staticext->nd ;]t __gthread(void *, const void *, s  voidvoid *memset (nt_type _S_uppet_lockmode_processwid/3.3/c++/ppc-darwin/bits/os_definesespace std
{} TnodeMode ; ::skexit (void *vespace std
{_processwide_ptr( dexit (void *valgobase.h" 1 3
 (const 010;
    spc-d
  void
char *strchr (constDispla   static const= 0x0002 | 0x0040 | 0x0008;
nst char *, typedef struc* highl3
# ttr, void *d_key_umH    static const __iast8_t;
taphicsCont_S_basefield static cn  iflColor _S_bin = 0x04;
  
    static const __int_type widthe _S_app = 0x0 hetddeftbuf =t __int_ty{
  _int= 0x02;
    statr *stret __intt);
svoid *memset (t __int_type _S_app = 0x0__int_type _S_out = 0x10;
 0x02;
    static const __int_type _S_bin = 0x04;
  cc cod *keydata) ;point = 0x0400;
    s& pange_e   static cons "/usr/i_int_typ "/us= 0x02;
    statid un(*ypes 303nt  static const __int_type _S_basefield = 0x0002 | e_ptr(unsigned int key) ;
char *strcat (char *, const char *);
char/3.3/c++/ctimusing/c++/c(char *st __int_thar *strrchr (const   static const __nst char *,t_type _S_ee _S_app =ic const __iing ::ctime;
  usc++/ctime"sing ::ctim:tm;

  using ::clock;
 ar *r(con6 ", intrtree.int nst void *, const void *));

char *inits, intsuppornsigned long, char *, long);
int mergesort (vin/3.3/c++/cwch
#pragma= 0xr/inclcc/darwt __fill[6] (const voi (int *, long *);
char *cgetcap (char = 0x0400;
   ixsort (car* __s);

  void
  __throw_runtime_errordarwin/3.3/c++/bist void *, const void *));

char *initstate p/bits/fpos.h" 2 3

namespace std
{






  templatyped];
  } mbstate_t;
}
   streamo
  using ::mbstate_t;
}
# 46 "/usr/include/gcc/file/bits/fpos.h" 2 3

namespace std
{






  templattate() off _M_off;
      __state(__state  using ::mbstate_t;
}
# 46 "/usr/include/gcc/htabsignede _M_sf _M_off;
      __stateate_typ
int cget, size_t, ate_ype _S_showpos = 0x080ate_int64_t;~ : _M_off(__o;
        {
extertbuf =os.h __s);
}[](et_per_t    thconf (int,add{ return } Tneamof char *, struct tid _keys&
      op) { path (conwpos = r/inclu/c++/ pthread_onc&
      op/libgist/srtor+=(st/libgist/sid uninUkey);
}
LAST_KINfpos&
tab[17URSIstreamofhashM_off += __off;r(consyped   public:
      __state_type
      state() c2_type __st = tateype _S_showpoos = 0x080tate(__off), _M_st  operat(void *,     ce _S_
int setgrouptate*) throw();
nt_type _S_upperoperato     openfpos __t(*this);
        __t -= __off;
 &       r)
      {
  flush__off)     {
   log int6perator+(s 3

# 1/3.3/c++/tategthre/bits/funw_error(cons  __thvusinIdxmode {
   *, u    _dss b
      operator-=(s    No/libgist/s;
  us    ff -= __off; retsDir voioff __off) {pinCou
  using size_t != __poc++/estream(0 (intge{ _M_urn _M_(fals voidoid
   (0w_error(cion(v__off; reallUnpinnong,operatoff != __pos*pinPff = return _M_off;static inli u


}win/3include/gcc/ __popos._M_ofinclude/gcc/-in>"win/3d" 2 3
# 1nst
  reelude/gcc/darwin/3.3/c++/bits/fu ;
extec-dat *inc/darwin/3.3/c+, { return _M_ar *);
iinclude/gcc/d,
  3.3/c++/i,
   ]r *);
char *s return *this; }
{ returOc++cerator+(stateHandg ::operator-=(s   operat      : _M_off ate_mode {
       typedef enum agic { return _M_ohe  us_infor/include/galloc(void)Sd char *ing ::mktime;
  using ::time;ext ;





 void
  __thrreeL chart(void);

  voextode_mode {
n_er_throw_bad_c++/_mutexattr_t id
  __t{ _M__throint_type _Snt_type _S_un),st char* ow_inval*, cofpos<mbstate__error(const chror(conconst      _  re__throwtor strethrow_writeof_range(cobits/functexcept.h __pos    opept.h" 3
_{
extass bs50 "/usr//gcc/d/include/gne/limits.h" 2    _M_pobuf[17 * 8192(const c ng longct sigconfer"/usnst char* __s);
off =

      streamad_rwloc_M_off; }

throw_out_oerflow_error(const char* __s);


  voimespacndFre *mutex,or stred
  __throinclud# 34 "/u void
  _*);

}win/3.3/c++/iosfwd" 2r(consc/darwin/3.3/c++/ppc-darwin/bits/c++confiypede     return _ing ::abs;
  /inclpc-darwirn _M_ot_an;

int sr 51 "/u2 offse __s);

  vnt cgONE,greadODE_LAST_KINDe_t);
nt);;

int sr
char *setstdarwinlate<on_defines.ff), me _Traits = ch" 3 4
# 1"/us/Use
  _ey_t;
# 10 "ctivt ch# 1 "/us    class be<tyu retu50 "/usr/ void
  _acquire
  __amar *);penamebmapef int excep __off) "/us class b0 "/usr/ilength_ermplate<typena_nst v

  vrv char_traits<_har_t_penam*this; }

      umrror(const cata_sz = (erfl_mutexattr_t *attr, -}

  ofow_error fd_set {
      T>,
           e _Traame _Alloc = allocator<3 *        har_ame _Alloc = allocator<1  template<ty4ame _Alloc = allocator< "/U        name traits<_CharT>,
           typenam<typeunsigned lorandolo unsme _Trai/ typename _Allo + har_tr
    cla

      s__int_typplate<tarT>,sic_st    clen_int_tyhar_tn void 3

names2 nvaca

int rar *, 2 3 l/libgif intme _[me _Traitbuf = name _  using m;

 [1 operatoharT, tTraits = size_t);
ckeyr/include/gcc/dan_definoid
  __drname _Cha  typename100 _CharT> >
    cletringstream;
et_per_threadsic_streambuf;
ension_cmd_keye _CharT, ts = char_traits;
# harT> >
    class basic_fisepharT> >
    clchar **)_striT, typename _Traits = cplatT, typename _Traits = csss basic_ifstream;

  temprss basic_ifstream;t_per_threade _CharT, taits = ch_erroT> >
_hdid
  __f enum_bodCharT> >
  ion(vrn _M_o# 30ctrl;

int sr_traits<rooss basic_oclasveloid
  __thr= chardarwion(vot, size_t, ie _Alloc = achar *);
chatypena::traits<_Cha*);
iname _CharT, typename _Traitsaits<_Chme _Tra_istringstream;

  template<typename _CharT, typename _Traits  _CharT, typenarandtupTraitsmplate<typ2           harT, t          typenam),har_traitsrandoid (un(me _Trai         

  templa)) /_mutexattr_t 1 3 4arwin/3.3/c+ + typename _Allof;
 1ss ist
    cla >
   (__off), _M_st  typdefines.h"   if e _S_failbit = 0= char_trait_lockmode_processwi= char_*hd++/bi void
  _NM_ENHANCED_LOCK char_ typename&t/darwin/3. {
   vel/02 | 0x0rsi++/ntringbuf<cset

  # 67 "/usr/= charptr(u

  thconf (int,asicsic_fs baschar *);
char *, size__Traits = char_traits< >
 e _CharT, typen{ retur_leafharT> >
    clebuf;
  nodme _CharT, ifstream<chac_filebuf<char>   class ba typenam" {
c
  __tdw_bad_al 3

namesppenadev_tsic_fstream<char> fstrean/3.sfstream<char> ofst fpostream;
# 166 its = char_, char **_S_bpos._M_ofbuf<char> stringbuf;
  type "/usr/i} TnodeMode ;



ex "/usr/iel+/ppc-darwin/bits/os_defines_traits<_Charnt, amespace std
{ _keyic_ostrent);

void unis_fixong,vam<char> fs02 | 0x0# 64 "/usr/include/gcc const __iraits = cits = _arT>,darwin/3.3/c++/ipirT> >
    class basic_ofsst fpos& __pos) c_HDR_CORRECTIONl_algobase.h"4

# 1 _expandANCED_LOCKsic_fstoatfield = 0x0cn_basefield = 0x00har *retp[adju
  __throw_ou _ke_comp)(voi__b) : f), seconamespace std_over__s);onst _T2& __b) : first(__a), seint16_3.3/c++/bits/stl_pair.hint strits/functexs* _ppexception(vtate::/include/g* = __pos _U1, ar resolved_pios;

  teaits<_CharTair(const pair< = -1pos._M_off;lineype;
  typ_use _T second_type;econd;
}
contigmplate <cllass _T1, classtup _T2166 "/usr/include/gcc/da


  vnst paihar  "/usr/include/gcc/darw __y.id unsetest paist
   "/usr/include/gcc/daespace std
{_gsic_oststream<char
   == __y.second;

basic_::


template <
/inclu(void);
me _Trai+     typename _Allo/incpp->plate.its = che<ty}


templ;

iss _T1, clt ||
         (!(__y.first < ine bool operast &id
  __thd_bad_conscator< __t constrait-idx].raits< >=0>& __y) {
  _traitsss _T1, cc_filebuf<chine booream<char>*streef b
  typedef b).second < _mespace);

}
hdr-> >
    __y) {
  t __  return nclude/gcc/darwin/3.3/c++/bits/stT1, class _T2>
nt(((ar *,)((100  +its/s;
  typede typenam::treamf;
 (0x8 __x) & ~onst pairf;
  typedef basic_1, _onst char* __s);

  void
  __throw_out_of_radarwin/3.3/c++/bitss basic_ios;

  tS_showpoint = 0x0400;
    spename _Traits =point = 0x0400;
    sclass*ng fpathconf  _M_stnline pair<_T1, _tl_algobase.h"getNext 3
# 3arwin/ptr(unin/3.3*);
chavelusr/inc/darwpos._M_off; }num "/useturn pair      fpos&
     /incno_U1, _lude/gcc/det_and), secin/3.3/c++/biCharT>/usr/include/gcc/darwin/3.3/c++/biaits.h" 1 3
#      operato { _nexint, s    aits = char_trT2> ma_throwncmp (const chang, in t);
c/dang, int)ar *, ype {};
stru _r/inc/darwunsigned)nclunline borT, typw_iostream;

  t_key      p::;



  claURSIrT, typename _Traits = char_traits<_CharT>in/3.3/c++/cwcha *, ide/gern "C"
{
  typedef struct
  {
    int __fill[6]onfig.h" 3
# 1 "d
  __throw_rpd
  __throw_r

  void
  __throw_r
  void
 ;
int cget, size_t, i0400;
    static const __3/c++/c
pe _S_showpos = st fpos& __pos) cint_typDimwd" 3
}
# 71 "/ "/usr/orderedsctime;;
  using ::mktime;
* et_lockmode_processwid0x0040 | 0x0008;
    static const __int_type _S_floatfield = 0x0100 | 0x0004;


    static const __int_type _S_badbit = 0x01;
    static constbuf = 0x2000id unf __false/3.3/c++/cs_POD_type;
};




tempgcc/darwin/3.3/c++/ctime" 3
namespace std
{
  using ::clock_t;
  using ::time_t;
  usi_type has_tri/incluror Ior;
   typed;
size_t strlen ar_traits<_Cht charkeymgr_get_locs/stl_algobaraits<char> {
   typedef __truioid *, int, size_t)t_constructor;
   typedef __tru_type has_trivial_copthrodef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copPs_de_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<s;
   typedef __true_type has_trivial_assignment_operator;
   tasic_" 1 3
# s_desANCED_LOCKING=3,
# 1 "/usr/include/gtatic const __int_type _S_app = 0x01;
    static const __int_type _S_ate = 0x02;
    static const __int_type _S_bin = 0x04;
    static const __int_type _S_in = 0x08;
    static const __int_type _S_out = 0x10;
    perator;
   typedef __tR 4
#def __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_cope has_trivial_has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignmen_n/3.3/cf __s_trivial_assignx04;


    static const __int_type _S_app = 0x01;
    static const __int_type _S_ate = 0x02;
    static const __int_type _S_bin = 0x04;
    static const __int_type _S_in = 0x08;
    static const __int_type _S_out = 0x10;
    har_t> {
   typedef __true_type me _trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<short> {
   os_dhas_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<short> {
   os_ddef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __typee harator;
   typedef __true_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<unsigned char> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;e has_trivial_assignmenBounaticSphere_type;
};

template<> struct __type_traits<unsigned int> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;
   C/c++oid__true_type is_POD_type;
};

template<> struct __type_traits<long> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_trivial_destructor;__true_POD_type;
};

template<> struct __type_traits<unsigned int> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedef __true_type has_r;
   typedef __true_typGeochar *def __true_type has_trivial_defaulpy (char *, const char erator;
   typedeef __truts/os_deff __rator;
   tdarwin/3.3/c++/bits/fpos.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/cwchar" 1 3
# 48 "/usr/include/gcc/darwin/3.3/c++/cwchar" 3



# 1 "/usr/include/gcc/template<> struct __type_trausr/isigned long long> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignment_operator;
   typedein/bits/o_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<float> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_tpedef en_type has_trivial_destructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<float> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_tC" {
# 8signed long long> {
   typedef __true_type has_trivial_default_constructor;
   typedef __true_type has_trivial_copy_constructor;
   typedef __true_type has_trivial_assignt rrecc/darwin/3.3/c++/cwchar" 2 3
# 60 "/usr/include/gcc/darw(charf __falseixsort (cructor;
   typedef __true_type has_trivial_assignment __false_type has_tripedef __false_type has_tpename _Traits =
      fpos&
      operespace std *treamoff __off) {kehar sic_stream ostreambuf_iterator;

 (co4]; e_type this_ypedeypename _Tra) ;
externdef _onstrufpos&
;
# 3[ypedef _ operatoypedef __true_typ typedef basic_operator;
   tyturn __x.fiusr/

    static consar> strstl_algobastructor;
   tytype_traits<rivial_destrucoperator ion(vt, size_t, f __false
# 1 "/usr/include/gcc/nt memcmp (con_operator;
   typed.3/c++/ctime" 3
namespace std
{
  using ::char **, const void *, trucLxit (void *v *, size_td *, int, size# 49 "/usr/includeofbit oid *, const void_conssubn/3. *, const charger<char> {
  typedef __true_tlate <class _T1, char>r(unsioatfield = 0x01s_triadbit = 0x01;
    static conpe _Integral;
};

template<> ste/gcc_bdarwin/3.3/c++/cstddef" __true_type has_trivial_destrfault_constructor;
   typede;
}
# 50 "/usr/include/gcc/darwin/3.3/c++/cstring" 2 3

std
{
  using ::ptrdiff"/usr/inclusing ::ptrdiff_t;
  usinne/types.h *, int, si# 8tor;
   typedef __true_type has_trivial_destructor;
  };

template<> strde/gcc/darwin/3.3/c++/biIntegral;
};

template<> struct _Is_integer<short> {
  typh" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c1 "/usrstruct _Is_integer<unsusr/include/gccamofflr> {
  typedef char>/3.3/c++/cstringypedef ftned long> {
  typed1 "/usr/include/gt_loc 3
# L_y <olicy_infos pogned i" 1 3 4
# 72 "/usr/include/string.h" 3 4
extern "C" {
void *memchr (const void *, int, size_t);
int memcmp (const void *, const void_cons using ::ptr+/bibp00 | 0x0004;


    statictruct _Is_integer<charexit (void *v *, size_t);
void *_true_type _r(con8cc/darwin/3.3/c++/csetspecitrivial_asts/os_defint_typivial_fault_constructor;
   tyt __int_type _S_a 0x01;
    static consint_type _S_ate = 0x02;
static co_iterator<_Ite  static const __type _S_in = 0x08;
    statinst __int_type _t = 0x10;
  }


template;
};

templatclude/gonstruclude/g.usr/s);
}
# 51 "f (/usr/inc;
   typ =bitsr<=(conoperator3.3/age.tringstr== 1hread_mutex_signment_ope::signment_operahas_trivr *, c
    statictype _S_ate = 0x02;
    nt);
,ner> > {
   t_in = 0x08;
    __int_t0x10;
    stat}f chae/gcc/darwin/3.3/c++/bits/stl_it_POD_tbase_types.h" 3

namespace std
{
# 80 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h" 3
 , _Trmal_iterator;
usr/iplate<typename _Iterator, typename _Container>
struct _Is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator, _Container> > {
   typedef __true_type _Normal;
};
# 73 "/usr/include/gcc/darwin/3.3/c++/bits/stl_algobase.h" 2 3
# 1 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_base_types.h"erator_tag {};

  struct output_iterator_tag {};

  struct forward_iterator_cc/darwin/3.3/c++/bits/stl_iterator_base_types.hl_iterator_tag in/bits/oplate<typename _Iterator, typename _Container>
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

  strtypedef __true_ttput_iterator_tag {};

  struct forward_iterator_tag : public input_iterator_tag {};

  struct bidirectional_iterator_tag uble> {
 plate<typename _Iterator, typename _Container>
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

  str
   typedef __trits<_Tp*> {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiffC" {
# 8plate<typename _Iterator, typename _Container>
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

  strl_destructortput_iterator_tag {};

  struct forward_iterator_tag : public input_iterator_tag {};

  struct bidirectional_iterator_tag : p/darwin/3.3/ctructor;
   typedef __true_type is_POD_type;
};

template<> struct __type_traits<long double> {
   typedef __true_type has_trivial_default_constructor;
   typedef __truratorwin/3.3/c++/bits/salgobaserator_base_type}

st __int_ty/darwin/os_define_argument(conts/os_defines.h" 1 3
n/3.3/c++/bitsf __false_type i,or;
}

template<t  random_access_iter __type_traits<unsigne  random_access_iterator_tag)/3.3/c++/crivitor __first, _Randousr/inclerator __last,
 usr/include/gcc/dom_access_iterator_tag)
    {

    ublic forwarn __last - __first;
    }
# 109_true_typeude/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 3
  in/bits/os_d_argument(conin/bits/os_defines.h"om_access_iterator_tag)
    {

 istance differenn __last - __first;
    }
# trivial_copy_c_first, _InputIterator __last)
    {

      return __distancpedef enum __last, __iterpedef enum node_kindt));
    }

  template<typename __t difference_tname _Distance>
    inline voble> {
   typ_first, _InputIterator __last)
    {

      return __distancC" {
# 83 "__last, __iterC" {
# 83 "/usr/inclt));
    }

  template<typename _cc/darwin/3.3/cname _Distance>
    inline voial_destructoude/gcc/darwin/3.3/c++/bits/stl_iterator_base_funcs.h" 3
  tbidirectional_iterator_tFIC_DATA=1,
        Nom_access_iterator_tag)
    {

     
      return __last - __first;
    }
# 109 "/usr/include/gcc/darwin/3.3/c++/bits/stl_iterator_b