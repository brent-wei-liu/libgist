/* A Bison parser, made from cmdline_gram.y
   by GNU bison 1.35.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	ID	257
# define	STRCONST	258
# define	INTCONST	259
# define	IOPARAM	260
# define	FLOATCONST	261
# define	CREATE	262
# define	INSERT	263
# define	OPEN	264
# define	CLOSE	265
# define	QUIT	266
# define	SELECT	267
# define	DELETE	268
# define	NL	269
# define	ERROR	270
# define	CHECK	271
# define	SPLIT	272
# define	HELP	273
# define	DUMP	274
# define	ONLY	275
# define	SET	276
# define	STRUCT	277
# define	WRITE	278
# define	ECHO_TOKEN	279
# define	EVALSPLIT	280
# define	EVALPENALTY	281
# define	LOADFILE	282
# define	PREDINFO	283
# define	CREATEANL	284
# define	OPENANL	285
# define	CLOSEANL	286
# define	WKLDSTATS	287
# define	SPLITSTATS	288
# define	PENALTYSTATS	289
# define	ANLINFO	290

#line 5 "cmdline_gram.y"

#include <iostream.h>

#include "gist_compat.h"	// for malloc
#include "gist_defs.h"
#include "cmdline.h"
#define YYDEBUG 1

void cmdPrompt();
int yyerror(char *msg);
int yylex();

#line 18 "cmdline_gram.y"
#ifndef YYSTYPE
typedef union {
    char *string;
    shpid_t pgno;
    int number;
    float flt;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		100
#define	YYFLAG		-32768
#define	YYNTBASE	37

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 290 ? yytranslate[x] : 43)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     1,     4,     9,    16,    22,    26,    30,    34,
      41,    47,    52,    55,    60,    65,    70,    76,    84,    88,
      92,    97,   101,   107,   111,   117,   120,   123,   125,   126,
     128,   129,   131,   132,   134,   135
};
static const short yyrhs[] =
{
      -1,    37,    38,     0,     8,     3,     3,    15,     0,     8,
       3,     3,     3,     7,    15,     0,    24,    28,     3,     3,
      15,     0,    10,     3,    15,     0,    11,     3,    15,     0,
      17,     3,    15,     0,    13,     3,    41,    42,     4,    15,
       0,     9,     3,     4,     4,    15,     0,    14,     3,     4,
      15,     0,    12,    15,     0,    20,     3,    39,    15,     0,
      18,     3,     5,    15,     0,    22,    25,     5,    15,     0,
      22,    23,     3,     5,    15,     0,    30,     3,     3,     3,
       5,     7,    15,     0,    31,     3,    15,     0,    32,     3,
      15,     0,    34,     3,    40,    15,     0,    33,     3,    15,
       0,    35,     3,     3,    40,    15,     0,    36,     3,    15,
       0,    29,     3,     5,     5,    15,     0,    19,    15,     0,
       1,    15,     0,    15,     0,     0,     5,     0,     0,     3,
       0,     0,     5,     0,     0,     6,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,    46,    47,    54,    61,    69,    76,    82,    88,    94,
     101,   109,   116,   121,   127,   133,   138,   144,   152,   158,
     164,   171,   177,   185,   191,   197,   202,   207,   211,   212,
     216,   217,   221,   222,   226,   227
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "ID", "STRCONST", "INTCONST", "IOPARAM", 
  "FLOATCONST", "CREATE", "INSERT", "OPEN", "CLOSE", "QUIT", "SELECT", 
  "DELETE", "NL", "ERROR", "CHECK", "SPLIT", "HELP", "DUMP", "ONLY", 
  "SET", "STRUCT", "WRITE", "ECHO_TOKEN", "EVALSPLIT", "EVALPENALTY", 
  "LOADFILE", "PREDINFO", "CREATEANL", "OPENANL", "CLOSEANL", "WKLDSTATS", 
  "SPLITSTATS", "PENALTYSTATS", "ANLINFO", "commands", "command", 
  "dump_page", "opt_id", "opt_k", "opt_ioparam", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,    37,    37,    38,    38,    38,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    38,    38,    39,    39,
      40,    40,    41,    41,    42,    42
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     0,     2,     4,     6,     5,     3,     3,     3,     6,
       5,     4,     2,     4,     4,     4,     5,     7,     3,     3,
       4,     3,     5,     3,     5,     2,     2,     1,     0,     1,
       0,     1,     0,     1,     0,     1
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    26,     0,     0,     0,
       0,    12,    32,     0,     0,     0,    25,    28,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,     6,     7,    33,    34,     0,     8,     0,    29,     0,
       0,     0,     0,     0,     0,    18,    19,    21,    31,     0,
      30,    23,     0,     3,     0,    35,     0,    11,    14,    13,
       0,    15,     0,     0,     0,    20,     0,     0,    10,     0,
      16,     5,    24,     0,    22,     4,     9,     0,    17,     0,
       0
};

static const short yydefgoto[] =
{
       1,    25,    59,    69,    54,    76
};

static const short yypact[] =
{
  -32768,     0,   -13,     3,     4,    18,    20,    10,    23,    24,
  -32768,    25,    34,    26,    35,   -20,    11,    37,    39,    40,
      41,    42,    43,    44,    45,-32768,-32768,    46,    47,    38,
      48,-32768,    49,    51,    50,    52,-32768,    53,    56,    55,
      58,    57,    61,    54,    59,    60,    63,    64,    62,     1,
      66,-32768,-32768,-32768,    65,    67,-32768,    68,-32768,    69,
      71,    70,    75,    74,    77,-32768,-32768,-32768,-32768,    72,
      63,-32768,    79,-32768,    73,-32768,    85,-32768,-32768,-32768,
      76,-32768,    78,    80,    87,-32768,    81,    82,-32768,    83,
  -32768,-32768,-32768,    92,-32768,-32768,-32768,    86,-32768,    90,
  -32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,   -18,-32768,-32768
};


#define	YYLAST		101


static const short yytable[] =
{
      99,     2,    26,    38,    72,    39,    27,    28,     3,     4,
       5,     6,     7,     8,     9,    10,    73,    11,    12,    13,
      14,    29,    15,    30,    16,    31,    32,    33,    34,    17,
      18,    19,    20,    21,    22,    23,    24,    35,    37,    40,
      41,    36,    42,    43,    44,    45,    46,    47,    48,    49,
       0,    50,    86,    51,    53,    55,     0,    57,    58,    60,
      61,    62,    63,    52,    64,    56,    68,    70,     0,    65,
      74,    75,     0,     0,    66,    67,    80,    71,    82,    83,
      84,     0,    77,    78,    79,    81,    87,    85,    88,    89,
     100,    90,    93,    91,     0,    92,    94,    95,    96,    97,
       0,    98
};

static const short yycheck[] =
{
       0,     1,    15,    23,     3,    25,     3,     3,     8,     9,
      10,    11,    12,    13,    14,    15,    15,    17,    18,    19,
      20,     3,    22,     3,    24,    15,     3,     3,     3,    29,
      30,    31,    32,    33,    34,    35,    36,     3,     3,    28,
       3,    15,     3,     3,     3,     3,     3,     3,     3,     3,
      -1,     4,    70,    15,     5,     4,    -1,     5,     5,     3,
       5,     3,     5,    15,     3,    15,     3,     3,    -1,    15,
       4,     6,    -1,    -1,    15,    15,     5,    15,     3,     5,
       3,    -1,    15,    15,    15,    15,     7,    15,    15,     4,
       0,    15,     5,    15,    -1,    15,    15,    15,    15,     7,
      -1,    15
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 315 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 2:
#line 48 "cmdline_gram.y"
{
        cmdPrompt();
    ;
    break;}
case 3:
#line 56 "cmdline_gram.y"
{
	cmdCreate(yyvsp[-2].string, yyvsp[-1].string);
	if (yyvsp[-2].string) delete [] yyvsp[-2].string;
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 4:
#line 63 "cmdline_gram.y"
{
	cmdLoad(yyvsp[-4].string, yyvsp[-3].string, yyvsp[-2].string, yyvsp[-1].flt);
	if (yyvsp[-4].string) delete [] yyvsp[-4].string;
	if (yyvsp[-3].string) delete [] yyvsp[-3].string;
	if (yyvsp[-2].string) delete [] yyvsp[-2].string;
    ;
    break;}
case 5:
#line 71 "cmdline_gram.y"
{
        cmdWriteLoadfile(yyvsp[-2].string, yyvsp[-1].string);
	if (yyvsp[-2].string) delete [] yyvsp[-2].string;
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 6:
#line 78 "cmdline_gram.y"
{
        cmdOpen(yyvsp[-1].string);
        if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 7:
#line 84 "cmdline_gram.y"
{
        cmdClose(yyvsp[-1].string);
        if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 8:
#line 90 "cmdline_gram.y"
{
        cmdCheck(yyvsp[-1].string);
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 9:
#line 96 "cmdline_gram.y"
{
	cmdSelect(yyvsp[-4].string, yyvsp[-1].string, yyvsp[-3].number, yyvsp[-2].number);
	if (yyvsp[-4].string) delete [] yyvsp[-4].string;
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 10:
#line 103 "cmdline_gram.y"
{
	cmdInsert(yyvsp[-3].string, yyvsp[-2].string, yyvsp[-1].string);
	if (yyvsp[-3].string) delete [] yyvsp[-3].string;
	if (yyvsp[-2].string) delete [] yyvsp[-2].string;
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 11:
#line 111 "cmdline_gram.y"
{
	cmdDelete(yyvsp[-2].string, yyvsp[-1].string);
	if (yyvsp[-2].string) delete [] yyvsp[-2].string;
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 12:
#line 118 "cmdline_gram.y"
{
        cmdQuit();
    ;
    break;}
case 13:
#line 123 "cmdline_gram.y"
{
        cmdDump(yyvsp[-2].string, yyvsp[-1].pgno);
        if (yyvsp[-2].string) delete [] yyvsp[-2].string;
    ;
    break;}
case 14:
#line 129 "cmdline_gram.y"
{
        cmdSplit(yyvsp[-2].string, yyvsp[-1].number);
        if (yyvsp[-2].string) delete [] yyvsp[-2].string;
    ;
    break;}
case 15:
#line 135 "cmdline_gram.y"
{
        cmdSetEcho(yyvsp[-1].number);
    ;
    break;}
case 16:
#line 140 "cmdline_gram.y"
{
	cmdSetStruct(yyvsp[-2].string, yyvsp[-1].number);
	if (yyvsp[-2].string) delete [] yyvsp[-2].string;
    ;
    break;}
case 17:
#line 146 "cmdline_gram.y"
{
        cmdCreateAnl(yyvsp[-5].string, yyvsp[-4].string, yyvsp[-3].string, yyvsp[-2].number, yyvsp[-1].flt);
	if (yyvsp[-5].string) delete [] yyvsp[-5].string;
	if (yyvsp[-4].string) delete [] yyvsp[-4].string;
	if (yyvsp[-3].string) delete [] yyvsp[-3].string;
    ;
    break;}
case 18:
#line 154 "cmdline_gram.y"
{
        cmdOpenAnl(yyvsp[-1].string);
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 19:
#line 160 "cmdline_gram.y"
{
        cmdCloseAnl(yyvsp[-1].string);
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 20:
#line 166 "cmdline_gram.y"
{
        cmdSplitStats(yyvsp[-2].string, yyvsp[-1].string);
	if (yyvsp[-2].string) delete [] yyvsp[-2].string;
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 21:
#line 173 "cmdline_gram.y"
{
        cmdWkldStats(yyvsp[-1].string);
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 22:
#line 179 "cmdline_gram.y"
{
        cmdPenaltyStats(yyvsp[-3].string, yyvsp[-2].string, yyvsp[-1].string);
	if (yyvsp[-3].string) delete [] yyvsp[-3].string;
	if (yyvsp[-2].string) delete [] yyvsp[-2].string;
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 23:
#line 187 "cmdline_gram.y"
{
        cmdAnlInfo(yyvsp[-1].string);
	if (yyvsp[-1].string) delete [] yyvsp[-1].string;
    ;
    break;}
case 24:
#line 193 "cmdline_gram.y"
{
        cmdPredInfo(yyvsp[-3].string, yyvsp[-2].number, yyvsp[-1].number);
	if (yyvsp[-3].string) delete [] yyvsp[-3].string;
    ;
    break;}
case 25:
#line 199 "cmdline_gram.y"
{
	cmdHelp();
    ;
    break;}
case 26:
#line 203 "cmdline_gram.y"
{
        yyclearin;
	yyerrok;
    ;
    break;}
case 28:
#line 211 "cmdline_gram.y"
{ yyval.pgno = (shpid_t) 0; ;
    break;}
case 29:
#line 212 "cmdline_gram.y"
{ yyval.pgno = (shpid_t) yyvsp[0].number; ;
    break;}
case 30:
#line 216 "cmdline_gram.y"
{ yyval.string = NULL; ;
    break;}
case 31:
#line 217 "cmdline_gram.y"
{ yyval.string = yyvsp[0].string; ;
    break;}
case 32:
#line 221 "cmdline_gram.y"
{ yyval.number = 0; ;
    break;}
case 33:
#line 222 "cmdline_gram.y"
{ yyval.number = yyvsp[0].number; ;
    break;}
case 34:
#line 226 "cmdline_gram.y"
{ yyval.number = 0; ;
    break;}
case 35:
#line 227 "cmdline_gram.y"
{ yyval.number = yyvsp[0].number; ;
    break;}
}

#line 705 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
yyerrhandle:
  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 230 "cmdline_gram.y"


int yyerror(char *errmsg)
{
    extern char *yytext;

    cerr << "Parser error: " << errmsg << "!\n";

    return 1;
}

extern "C" int yywrap()
{
	return 0;
}

