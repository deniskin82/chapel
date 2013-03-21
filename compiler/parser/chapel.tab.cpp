/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 12 "chapel.ypp"


#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdint.h>
#include "lexyacc.h" // all #includes here, for make depend
#include "driver.h"

  static int query_uid = 1;
  int captureTokens;
  char captureString[1024];

 
#define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
  if (N) {                                                              \
        (Current).first_line   = (Rhs)[1].first_line;                   \
        if ((Current).first_line) yystartlineno = (Current).first_line; \
        (Current).first_column = (Rhs)[1].first_column;                 \
        (Current).last_line    = (Rhs)[N].last_line;                    \
        (Current).last_column  = (Rhs)[N].last_column;                  \
        (Current).comment = NULL;                                       \
  } else  {                                                             \
    (Current) = yylloc;                                                 \
  }                                                                     \



/* Line 268 of yacc.c  */
#line 100 "chapel.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TIDENT = 258,
     IMAGLITERAL = 259,
     INTLITERAL = 260,
     REALLITERAL = 261,
     STRINGLITERAL = 262,
     TALIGN = 263,
     TATOMIC = 264,
     TBEGIN = 265,
     TBREAK = 266,
     TBY = 267,
     TCLASS = 268,
     TCOBEGIN = 269,
     TCOFORALL = 270,
     TCONFIG = 271,
     TCONST = 272,
     TCONTINUE = 273,
     TDELETE = 274,
     TDMAPPED = 275,
     TDO = 276,
     TDOMAIN = 277,
     TELSE = 278,
     TENUM = 279,
     TEXPORT = 280,
     TEXTERN = 281,
     TFOR = 282,
     TFORALL = 283,
     TIF = 284,
     TIN = 285,
     TINDEX = 286,
     TINLINE = 287,
     TINOUT = 288,
     TITER = 289,
     TLABEL = 290,
     TLAMBDA = 291,
     TLET = 292,
     TLOCAL = 293,
     TMINUSMINUS = 294,
     TMODULE = 295,
     TNEW = 296,
     TNIL = 297,
     TON = 298,
     TOTHERWISE = 299,
     TOUT = 300,
     TPARAM = 301,
     TPLUSPLUS = 302,
     TPRAGMA = 303,
     TPRIMITIVE = 304,
     TPRIMITIVELOOP = 305,
     TPROC = 306,
     TRECORD = 307,
     TREDUCE = 308,
     TREF = 309,
     TRETURN = 310,
     TSCAN = 311,
     TSELECT = 312,
     TSERIAL = 313,
     TSINGLE = 314,
     TSPARSE = 315,
     TSUBDOMAIN = 316,
     TSYNC = 317,
     TTHEN = 318,
     TTYPE = 319,
     TUNDERSCORE = 320,
     TUNION = 321,
     TUSE = 322,
     TVAR = 323,
     TWHEN = 324,
     TWHERE = 325,
     TWHILE = 326,
     TYIELD = 327,
     TZIP = 328,
     TALIAS = 329,
     TAND = 330,
     TASSIGN = 331,
     TASSIGNBAND = 332,
     TASSIGNBOR = 333,
     TASSIGNBXOR = 334,
     TASSIGNDIVIDE = 335,
     TASSIGNEXP = 336,
     TASSIGNLAND = 337,
     TASSIGNLOR = 338,
     TASSIGNMINUS = 339,
     TASSIGNMOD = 340,
     TASSIGNMULTIPLY = 341,
     TASSIGNPLUS = 342,
     TASSIGNSL = 343,
     TASSIGNSR = 344,
     TBAND = 345,
     TBNOT = 346,
     TBOR = 347,
     TBXOR = 348,
     TCOLON = 349,
     TCOMMA = 350,
     TDIVIDE = 351,
     TDOT = 352,
     TDOTDOT = 353,
     TDOTDOTDOT = 354,
     TEQUAL = 355,
     TEXP = 356,
     TGREATER = 357,
     TGREATEREQUAL = 358,
     THASH = 359,
     TLESS = 360,
     TLESSEQUAL = 361,
     TMINUS = 362,
     TMOD = 363,
     TNOT = 364,
     TNOTEQUAL = 365,
     TOR = 366,
     TPLUS = 367,
     TQUESTION = 368,
     TSEMI = 369,
     TSHIFTLEFT = 370,
     TSHIFTRIGHT = 371,
     TSTAR = 372,
     TSWAP = 373,
     TIO = 374,
     TLCBR = 375,
     TRCBR = 376,
     TLP = 377,
     TRP = 378,
     TLSBR = 379,
     TRSBR = 380,
     TNOELSE = 381,
     TUMINUS = 382,
     TUPLUS = 383
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 42 "chapel.ypp"

  const char* pch;
  Vec<const char*>* vpch;
  RetTag retTag;
  bool b;
  IntentTag pt;
  Expr* pexpr;
  DefExpr* pdefexpr;
  CallExpr* pcallexpr;
  BlockStmt* pblockstmt;
  Type* ptype;
  EnumType* penumtype;
  FnSymbol* pfnsymbol;
  Flag flag;
  ProcIter procIter;
  FlagSet* flagSet;



/* Line 293 of yacc.c  */
#line 284 "chapel.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 309 "chapel.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10480

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  397
/* YYNRULES -- Number of states.  */
#define YYNSTATES  744

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   383

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    14,    16,    19,
      22,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    47,    50,    53,    57,    60,    64,    68,    72,    75,
      79,    83,    86,    90,    94,    96,   101,   106,   111,   116,
     121,   126,   131,   136,   141,   146,   151,   156,   161,   166,
     171,   174,   178,   179,   181,   183,   186,   188,   191,   195,
     197,   199,   201,   203,   205,   207,   213,   217,   223,   229,
     233,   239,   245,   251,   255,   259,   266,   272,   278,   282,
     289,   296,   301,   306,   311,   315,   322,   328,   334,   335,
     338,   342,   345,   352,   360,   361,   363,   365,   367,   369,
     370,   373,   374,   377,   381,   387,   389,   392,   396,   398,
     402,   403,   404,   413,   414,   416,   418,   421,   423,   426,
     427,   428,   438,   442,   448,   450,   453,   455,   457,   459,
     461,   463,   465,   467,   469,   471,   473,   475,   477,   479,
     481,   483,   485,   487,   489,   491,   493,   495,   497,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   519,
     521,   523,   525,   526,   530,   534,   535,   537,   541,   546,
     551,   558,   565,   566,   568,   570,   572,   574,   576,   578,
     580,   581,   583,   585,   587,   588,   590,   592,   594,   596,
     598,   600,   602,   604,   607,   609,   610,   612,   615,   618,
     619,   622,   627,   633,   635,   639,   644,   649,   652,   657,
     658,   661,   664,   669,   674,   679,   680,   682,   684,   686,
     690,   694,   699,   705,   707,   709,   713,   715,   718,   722,
     723,   726,   727,   732,   733,   736,   739,   741,   746,   751,
     758,   760,   761,   763,   765,   769,   774,   778,   783,   790,
     791,   794,   797,   800,   803,   806,   809,   811,   813,   817,
     821,   823,   825,   827,   829,   832,   836,   838,   842,   843,
     845,   847,   851,   855,   859,   863,   865,   867,   869,   871,
     873,   875,   877,   879,   882,   887,   892,   897,   903,   906,
     909,   916,   923,   928,   938,   948,   956,   963,   970,   975,
     985,   995,  1003,  1008,  1015,  1022,  1032,  1042,  1049,  1051,
    1053,  1055,  1057,  1059,  1061,  1063,  1065,  1069,  1071,  1075,
    1078,  1083,  1085,  1087,  1089,  1091,  1093,  1095,  1097,  1099,
    1104,  1108,  1112,  1115,  1118,  1120,  1122,  1124,  1126,  1128,
    1130,  1132,  1137,  1142,  1147,  1151,  1155,  1159,  1163,  1165,
    1167,  1169,  1171,  1175,  1179,  1183,  1187,  1191,  1195,  1199,
    1203,  1207,  1211,  1215,  1219,  1223,  1227,  1231,  1235,  1239,
    1243,  1247,  1251,  1255,  1259,  1263,  1267,  1271,  1274,  1277,
    1280,  1283,  1286,  1289,  1293,  1297,  1301,  1305,  1309,  1313,
    1317,  1321,  1323,  1325,  1327,  1329,  1331,  1333
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     130,     0,    -1,   131,    -1,    -1,   131,   132,    -1,   135,
      -1,   134,   135,    -1,   132,    -1,   133,   132,    -1,    48,
       7,    -1,   134,    48,     7,    -1,   136,    -1,   137,    -1,
     142,    -1,   145,    -1,   181,    -1,   143,    -1,   146,    -1,
     149,    -1,   141,    -1,   211,   114,    -1,     9,   135,    -1,
      10,   135,    -1,    11,   138,   114,    -1,    14,   137,    -1,
      18,   138,   114,    -1,    19,   215,   114,    -1,    35,   139,
     135,    -1,    38,   135,    -1,    43,   215,   140,    -1,    58,
     215,   140,    -1,    62,   135,    -1,    67,   199,   114,    -1,
      72,   215,   114,    -1,     1,    -1,   216,    76,   215,   114,
      -1,   216,    87,   215,   114,    -1,   216,    84,   215,   114,
      -1,   216,    86,   215,   114,    -1,   216,    80,   215,   114,
      -1,   216,    85,   215,   114,    -1,   216,    81,   215,   114,
      -1,   216,    77,   215,   114,    -1,   216,    78,   215,   114,
      -1,   216,    79,   215,   114,    -1,   216,    89,   215,   114,
      -1,   216,    88,   215,   114,    -1,   216,   118,   215,   114,
      -1,   216,    82,   215,   114,    -1,   216,    83,   215,   114,
      -1,   120,   121,    -1,   120,   133,   121,    -1,    -1,   139,
      -1,     3,    -1,    21,   135,    -1,   137,    -1,    55,   114,
      -1,    55,   215,   114,    -1,   114,    -1,   162,    -1,   150,
      -1,   155,    -1,   183,    -1,   186,    -1,    21,   135,    71,
     215,   114,    -1,    71,   215,   140,    -1,    15,   215,    30,
     215,   140,    -1,    15,   215,    30,   144,   140,    -1,    15,
     215,   140,    -1,    50,   122,   203,   123,   140,    -1,    27,
     215,    30,   215,   140,    -1,    27,   215,    30,   144,   140,
      -1,    27,   215,   140,    -1,    27,   144,   140,    -1,    27,
      46,   139,    30,   215,   140,    -1,    28,   215,    30,   215,
     140,    -1,    28,   215,    30,   144,   140,    -1,    28,   215,
     140,    -1,   124,   199,    30,   215,   125,   135,    -1,   124,
     199,    30,   144,   125,   135,    -1,   124,   199,   125,   135,
      -1,    73,   122,   199,   123,    -1,    29,   215,    63,   135,
      -1,    29,   215,   137,    -1,    29,   215,    63,   135,    23,
     135,    -1,    29,   215,   137,    23,   135,    -1,    57,   215,
     120,   147,   121,    -1,    -1,   147,   148,    -1,    69,   199,
     140,    -1,    44,   135,    -1,    64,    57,   199,   120,   147,
     121,    -1,   151,   152,   139,   153,   120,   154,   121,    -1,
      -1,    26,    -1,    13,    -1,    52,    -1,    66,    -1,    -1,
      94,   199,    -1,    -1,   154,   142,    -1,   154,   134,   142,
      -1,    24,   139,   120,   156,   121,    -1,   157,    -1,   156,
      95,    -1,   156,    95,   157,    -1,   139,    -1,   139,    76,
     215,    -1,    -1,    -1,    36,   159,   168,   160,   174,   194,
     180,   176,    -1,    -1,    32,    -1,    25,    -1,    25,   139,
      -1,    26,    -1,    26,   139,    -1,    -1,    -1,   161,   173,
     163,   165,   164,   174,   194,   180,   175,    -1,   172,   166,
     167,    -1,   172,   139,    97,   166,   167,    -1,   139,    -1,
      91,   139,    -1,    76,    -1,    90,    -1,    92,    -1,    93,
      -1,    91,    -1,   100,    -1,   110,    -1,   106,    -1,   103,
      -1,   105,    -1,   102,    -1,   112,    -1,   107,    -1,   117,
      -1,    96,    -1,   115,    -1,   116,    -1,   108,    -1,   101,
      -1,   109,    -1,    12,    -1,   104,    -1,     8,    -1,    87,
      -1,    84,    -1,    86,    -1,    80,    -1,    85,    -1,    81,
      -1,    77,    -1,    78,    -1,    79,    -1,    89,    -1,    88,
      -1,   118,    -1,   119,    -1,    -1,   122,   169,   123,    -1,
     122,   169,   123,    -1,    -1,   170,    -1,   169,    95,   170,
      -1,   171,   139,   198,   192,    -1,   171,   139,   198,   179,
      -1,   171,   122,   191,   123,   198,   192,    -1,   171,   122,
     191,   123,   198,   179,    -1,    -1,    30,    -1,    33,    -1,
      45,    -1,    17,    -1,    46,    -1,    54,    -1,    64,    -1,
      -1,    46,    -1,    51,    -1,    34,    -1,    -1,    17,    -1,
      68,    -1,    46,    -1,    64,    -1,   114,    -1,   176,    -1,
     137,    -1,   141,    -1,   113,   139,    -1,   113,    -1,    -1,
     177,    -1,    99,   215,    -1,    99,   178,    -1,    -1,    70,
     215,    -1,   182,   139,   120,   121,    -1,   182,   139,   120,
     133,   121,    -1,    40,    -1,    64,   184,   114,    -1,    16,
      64,   184,   114,    -1,    26,    64,   184,   114,    -1,   139,
     185,    -1,   139,   185,    95,   184,    -1,    -1,    76,   207,
      -1,    76,   195,    -1,   187,    46,   188,   114,    -1,   187,
      17,   188,   114,    -1,   187,    68,   188,   114,    -1,    -1,
      16,    -1,    26,    -1,   189,    -1,   188,    95,   189,    -1,
     139,   194,   192,    -1,   139,   193,    74,   215,    -1,   122,
     191,   123,   194,   192,    -1,    65,    -1,   139,    -1,   122,
     191,   123,    -1,   190,    -1,   190,    95,    -1,   190,    95,
     191,    -1,    -1,    76,   215,    -1,    -1,    94,   124,   199,
     125,    -1,    -1,    94,   207,    -1,    94,   195,    -1,     1,
      -1,   124,   199,   125,   207,    -1,   124,   199,   125,   195,
      -1,   124,   199,    30,   215,   125,   207,    -1,     1,    -1,
      -1,   207,    -1,   177,    -1,   124,   125,   196,    -1,   124,
     199,   125,   196,    -1,   124,   125,   197,    -1,   124,   199,
     125,   197,    -1,   124,   199,    30,   215,   125,   196,    -1,
      -1,    94,   207,    -1,    94,   177,    -1,    94,    22,    -1,
      94,    59,    -1,    94,    62,    -1,    94,   197,    -1,   215,
      -1,   177,    -1,   199,    95,   215,    -1,   199,    95,   177,
      -1,    65,    -1,   215,    -1,   177,    -1,   200,    -1,   200,
      95,    -1,   200,    95,   202,    -1,   200,    -1,   202,    95,
     200,    -1,    -1,   204,    -1,   205,    -1,   204,    95,   205,
      -1,   139,    76,   177,    -1,   139,    76,   215,    -1,   139,
      74,   215,    -1,   177,    -1,   215,    -1,   139,    -1,   210,
      -1,   216,    -1,   209,    -1,   223,    -1,   222,    -1,    59,
     215,    -1,    31,   122,   203,   123,    -1,    22,   122,   203,
     123,    -1,    61,   122,   203,   123,    -1,    60,    61,   122,
     203,   123,    -1,     9,   215,    -1,    62,   215,    -1,    27,
     215,    30,   215,    21,   215,    -1,    27,   215,    30,   144,
      21,   215,    -1,    27,   215,    21,   215,    -1,    27,   215,
      30,   215,    21,    29,   215,    63,   215,    -1,    27,   215,
      30,   144,    21,    29,   215,    63,   215,    -1,    27,   215,
      21,    29,   215,    63,   215,    -1,    28,   215,    30,   215,
      21,   215,    -1,    28,   215,    30,   144,    21,   215,    -1,
      28,   215,    21,   215,    -1,    28,   215,    30,   215,    21,
      29,   215,    63,   215,    -1,    28,   215,    30,   144,    21,
      29,   215,    63,   215,    -1,    28,   215,    21,    29,   215,
      63,   215,    -1,   124,   199,   125,   215,    -1,   124,   199,
      30,   215,   125,   215,    -1,   124,   199,    30,   144,   125,
     215,    -1,   124,   199,    30,   215,   125,    29,   215,    63,
     215,    -1,   124,   199,    30,   144,   125,    29,   215,    63,
     215,    -1,    29,   215,    63,   215,    23,   215,    -1,    42,
      -1,   210,    -1,   206,    -1,   219,    -1,   218,    -1,   158,
      -1,   213,    -1,   214,    -1,   212,   119,   215,    -1,   216,
      -1,   212,   119,   215,    -1,    41,   215,    -1,    37,   188,
      30,   215,    -1,   221,    -1,   207,    -1,   208,    -1,   224,
      -1,   225,    -1,   158,    -1,   213,    -1,   214,    -1,   122,
      99,   215,   123,    -1,   215,    94,   215,    -1,   215,    98,
     215,    -1,   215,    98,    -1,    98,   215,    -1,    98,    -1,
     206,    -1,   218,    -1,   219,    -1,   220,    -1,   216,    -1,
     158,    -1,   217,   122,   203,   123,    -1,   217,   124,   203,
     125,    -1,    49,   122,   203,   123,    -1,   215,    97,   139,
      -1,   215,    97,    64,    -1,   215,    97,    22,    -1,   122,
     201,   123,    -1,     5,    -1,     6,    -1,     4,    -1,     7,
      -1,   120,   199,   121,    -1,   124,   199,   125,    -1,   215,
     112,   215,    -1,   215,   107,   215,    -1,   215,   117,   215,
      -1,   215,    96,   215,    -1,   215,   115,   215,    -1,   215,
     116,   215,    -1,   215,   108,   215,    -1,   215,   100,   215,
      -1,   215,   110,   215,    -1,   215,   106,   215,    -1,   215,
     103,   215,    -1,   215,   105,   215,    -1,   215,   102,   215,
      -1,   215,    90,   215,    -1,   215,    92,   215,    -1,   215,
      93,   215,    -1,   215,    75,   215,    -1,   215,   111,   215,
      -1,   215,   101,   215,    -1,   215,    12,   215,    -1,   215,
       8,   215,    -1,   215,   104,   215,    -1,   215,    20,   215,
      -1,   112,   215,    -1,   107,   215,    -1,    39,   215,    -1,
      47,   215,    -1,   109,   215,    -1,    91,   215,    -1,   215,
      53,   215,    -1,   215,    53,   144,    -1,   226,    53,   215,
      -1,   226,    53,   144,    -1,   215,    56,   215,    -1,   215,
      56,   144,    -1,   226,    56,   215,    -1,   226,    56,   144,
      -1,   112,    -1,   117,    -1,    75,    -1,   111,    -1,    90,
      -1,    92,    -1,    93,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   182,   182,   187,   188,   193,   194,   199,   200,   205,
     206,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     263,   264,   268,   269,   273,   277,   278,   282,   283,   287,
     288,   289,   290,   291,   292,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     316,   322,   332,   336,   337,   338,   339,   343,   348,   349,
     353,   355,   360,   367,   373,   374,   378,   380,   382,   386,
     387,   392,   393,   395,   400,   410,   417,   421,   429,   430,
     435,   440,   434,   465,   466,   468,   470,   472,   474,   479,
     485,   478,   515,   524,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   581,   582,   586,   590,   591,   592,   596,   598,
     600,   602,   607,   608,   609,   610,   611,   612,   613,   614,
     618,   619,   623,   624,   628,   629,   630,   631,   632,   636,
     637,   641,   642,   646,   648,   653,   654,   658,   659,   663,
     664,   668,   670,   675,   680,   682,   684,   689,   696,   707,
     708,   709,   713,   717,   721,   728,   729,   730,   734,   735,
     743,   745,   751,   756,   758,   760,   765,   767,   769,   776,
     777,   781,   782,   787,   788,   789,   790,   794,   798,   802,
     810,   814,   815,   816,   820,   822,   828,   830,   832,   837,
     838,   839,   840,   841,   842,   843,   849,   850,   851,   852,
     856,   857,   858,   862,   863,   864,   868,   869,   873,   874,
     878,   879,   883,   884,   885,   886,   887,   891,   902,   903,
     904,   905,   906,   907,   909,   911,   913,   915,   917,   919,
     924,   926,   928,   930,   932,   934,   936,   938,   940,   942,
     944,   946,   948,   955,   961,   967,   973,   982,   987,   995,
     996,   997,   998,   999,  1000,  1001,  1002,  1007,  1008,  1013,
    1018,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
    1036,  1038,  1040,  1042,  1044,  1049,  1050,  1051,  1052,  1063,
    1064,  1068,  1069,  1070,  1074,  1075,  1076,  1083,  1087,  1088,
    1089,  1090,  1091,  1092,  1106,  1107,  1108,  1109,  1110,  1111,
    1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,  1120,  1121,
    1122,  1123,  1124,  1125,  1126,  1127,  1128,  1139,  1140,  1141,
    1142,  1143,  1144,  1148,  1149,  1150,  1151,  1155,  1156,  1157,
    1158,  1163,  1164,  1165,  1166,  1167,  1168,  1169
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENT", "IMAGLITERAL", "INTLITERAL",
  "REALLITERAL", "STRINGLITERAL", "TALIGN", "TATOMIC", "TBEGIN", "TBREAK",
  "TBY", "TCLASS", "TCOBEGIN", "TCOFORALL", "TCONFIG", "TCONST",
  "TCONTINUE", "TDELETE", "TDMAPPED", "TDO", "TDOMAIN", "TELSE", "TENUM",
  "TEXPORT", "TEXTERN", "TFOR", "TFORALL", "TIF", "TIN", "TINDEX",
  "TINLINE", "TINOUT", "TITER", "TLABEL", "TLAMBDA", "TLET", "TLOCAL",
  "TMINUSMINUS", "TMODULE", "TNEW", "TNIL", "TON", "TOTHERWISE", "TOUT",
  "TPARAM", "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE", "TPRIMITIVELOOP",
  "TPROC", "TRECORD", "TREDUCE", "TREF", "TRETURN", "TSCAN", "TSELECT",
  "TSERIAL", "TSINGLE", "TSPARSE", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTYPE",
  "TUNDERSCORE", "TUNION", "TUSE", "TVAR", "TWHEN", "TWHERE", "TWHILE",
  "TYIELD", "TZIP", "TALIAS", "TAND", "TASSIGN", "TASSIGNBAND",
  "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE", "TASSIGNEXP",
  "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNSL", "TASSIGNSR", "TBAND",
  "TBNOT", "TBOR", "TBXOR", "TCOLON", "TCOMMA", "TDIVIDE", "TDOT",
  "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP", "TGREATER", "TGREATEREQUAL",
  "THASH", "TLESS", "TLESSEQUAL", "TMINUS", "TMOD", "TNOT", "TNOTEQUAL",
  "TOR", "TPLUS", "TQUESTION", "TSEMI", "TSHIFTLEFT", "TSHIFTRIGHT",
  "TSTAR", "TSWAP", "TIO", "TLCBR", "TRCBR", "TLP", "TRP", "TLSBR",
  "TRSBR", "TNOELSE", "TUMINUS", "TUPLUS", "$accept", "program",
  "toplevel_stmt_ls", "toplevel_stmt", "stmt_ls", "pragma_ls", "stmt",
  "assignment_stmt", "block_stmt", "opt_ident", "ident", "do_stmt",
  "return_stmt", "class_level_stmt", "loop_stmt", "zippered_iterator",
  "if_stmt", "select_stmt", "when_stmt_ls", "when_stmt",
  "type_select_stmt", "class_decl_stmt", "opt_extern", "class_tag",
  "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt", "enum_ls",
  "enum_item", "lambda_decl_expr", "$@1", "$@2", "linkage_spec",
  "fn_decl_stmt", "$@3", "$@4", "fn_decl_stmt_inner", "fn_ident",
  "opt_formal_ls", "req_formal_ls", "formal_ls", "formal",
  "opt_intent_tag", "opt_this_intent_tag", "proc_or_iter", "opt_ret_tag",
  "opt_function_body_stmt", "function_body_stmt", "query_expr",
  "opt_query_expr", "var_arg_expr", "opt_where_part", "module_decl_stmt",
  "module", "type_alias_decl_stmt", "type_alias_decl_stmt_inner",
  "opt_init_type", "var_decl_stmt", "opt_config", "var_decl_stmt_inner_ls",
  "var_decl_stmt_inner", "tuple_var_decl_component",
  "tuple_var_decl_stmt_inner_ls", "opt_init_expr", "opt_reindex_expr",
  "opt_type", "array_type", "opt_formal_array_elt_type",
  "formal_array_type", "opt_formal_type", "expr_ls", "tuple_component",
  "tuple_guts", "tuple_expr_ls", "opt_actual_ls", "actual_ls",
  "actual_expr", "ident_expr", "type_level_expr", "for_expr", "cond_expr",
  "nil_expr", "stmt_level_expr", "io_expr", "new_expr", "let_expr", "expr",
  "lhs_expr", "fun_expr", "call_expr", "dot_expr", "parenthesized_expr",
  "literal_expr", "binary_op_expr", "unary_op_expr", "reduce_expr",
  "scan_expr", "reduce_scan_op_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   129,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   138,   138,   139,   140,   140,   141,   141,   142,
     142,   142,   142,   142,   142,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   144,   145,   145,   145,   145,   146,   147,   147,
     148,   148,   149,   150,   151,   151,   152,   152,   152,   153,
     153,   154,   154,   154,   155,   156,   156,   156,   157,   157,
     159,   160,   158,   161,   161,   161,   161,   161,   161,   163,
     164,   162,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   167,   167,   168,   169,   169,   169,   170,   170,
     170,   170,   171,   171,   171,   171,   171,   171,   171,   171,
     172,   172,   173,   173,   174,   174,   174,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   183,   183,   183,   184,   184,   185,
     185,   185,   186,   186,   186,   187,   187,   187,   188,   188,
     189,   189,   189,   190,   190,   190,   191,   191,   191,   192,
     192,   193,   193,   194,   194,   194,   194,   195,   195,   195,
     195,   196,   196,   196,   197,   197,   197,   197,   197,   198,
     198,   198,   198,   198,   198,   198,   199,   199,   199,   199,
     200,   200,   200,   201,   201,   201,   202,   202,   203,   203,
     204,   204,   205,   205,   205,   205,   205,   206,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   209,   210,   211,
     211,   211,   211,   211,   211,   211,   211,   212,   212,   213,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   216,   216,   216,   216,   217,
     217,   218,   218,   218,   219,   219,   219,   220,   221,   221,
     221,   221,   221,   221,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   223,   223,   223,
     223,   223,   223,   224,   224,   224,   224,   225,   225,   225,
     225,   226,   226,   226,   226,   226,   226,   226
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     1,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     3,     2,     3,     3,     3,     2,     3,
       3,     2,     3,     3,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     3,     0,     1,     1,     2,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     5,     3,     5,     5,     3,
       5,     5,     5,     3,     3,     6,     5,     5,     3,     6,
       6,     4,     4,     4,     3,     6,     5,     5,     0,     2,
       3,     2,     6,     7,     0,     1,     1,     1,     1,     0,
       2,     0,     2,     3,     5,     1,     2,     3,     1,     3,
       0,     0,     8,     0,     1,     1,     2,     1,     2,     0,
       0,     9,     3,     5,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     3,     0,     1,     3,     4,     4,
       6,     6,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     0,     1,     2,     2,     0,
       2,     4,     5,     1,     3,     4,     4,     2,     4,     0,
       2,     2,     4,     4,     4,     0,     1,     1,     1,     3,
       3,     4,     5,     1,     1,     3,     1,     2,     3,     0,
       2,     0,     4,     0,     2,     2,     1,     4,     4,     6,
       1,     0,     1,     1,     3,     4,     3,     4,     6,     0,
       2,     2,     2,     2,     2,     2,     1,     1,     3,     3,
       1,     1,     1,     1,     2,     3,     1,     3,     0,     1,
       1,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     4,     4,     5,     2,     2,
       6,     6,     4,     9,     9,     7,     6,     6,     4,     9,
       9,     7,     4,     6,     6,     9,     9,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     3,     3,     3,     3,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,    34,    54,   350,   348,   349,   351,
       0,     0,    52,     0,     0,   216,    52,     0,     0,     0,
       0,   115,    95,     0,     0,     0,     0,   114,     0,   110,
       0,     0,     0,   203,     0,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   393,   395,     0,   396,   397,   334,     0,     0,
     394,   391,    59,   392,     0,     0,     0,     4,     0,     5,
      11,    12,   277,    19,    13,    16,    14,    17,    18,    61,
       0,    62,   326,     0,    60,    15,     0,    63,    64,     0,
     335,   322,   323,   280,   278,     0,     0,   327,   328,     0,
     279,     0,   336,   337,   338,   321,   282,   281,   324,   325,
       0,    21,   288,    22,     0,    53,     0,    24,     0,     0,
       0,     0,     0,     0,     0,   326,   335,   278,   327,   328,
       0,   279,   336,   337,     0,     0,     0,     0,   268,     0,
     116,     0,   118,     0,     0,     0,     0,     0,     0,   268,
       0,     0,     0,     0,     0,   218,    28,   379,   319,     0,
     380,     9,   268,   268,    57,     0,     0,     0,   283,     0,
     268,    31,   289,     0,   209,     0,   194,   257,     0,   256,
       0,     0,   382,   333,   378,   381,   377,    50,     7,     0,
       0,   260,     0,   262,   263,     0,   261,     0,     0,     6,
      96,    97,    98,     0,   183,   182,   119,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   332,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   268,   268,     0,     0,
      23,     0,     0,     0,     0,     0,     0,    56,    69,     0,
      25,    26,     0,   277,   275,     0,   269,   270,   276,     0,
       0,     0,     0,    74,     0,     0,    73,     0,     0,    78,
       0,    84,     0,    27,   165,   111,   223,     0,   224,   226,
       0,   236,     0,     0,   229,     0,     0,    29,     0,     0,
      58,    88,    30,   268,     0,     0,     0,   207,   204,   193,
       0,    32,    66,    33,    51,     8,   352,     0,   264,   347,
       0,     0,    10,    99,   180,     0,     0,     0,     0,   316,
     374,   373,   376,   384,   383,   388,   387,   370,   367,   368,
     369,   330,   357,   346,   345,   344,   331,   361,   372,   366,
     364,   375,   365,   363,   355,   360,   362,   371,   354,   358,
     359,   356,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   386,
     385,   390,   389,     0,     0,     0,     0,     0,     0,   353,
      55,     0,     0,   205,     0,     0,     0,   285,     0,   108,
       0,   105,   206,     0,     0,     0,   292,     0,     0,     0,
     298,     0,     0,    83,     0,     0,   284,   176,   173,   174,
     175,   177,   178,   179,     0,   166,     0,   184,     0,   227,
       0,   240,     0,   235,   322,     0,     0,   220,   320,   219,
     343,     0,     0,     0,   286,    88,     0,   211,   322,     0,
     259,   258,   329,   266,   265,     0,     0,    81,   302,     0,
       0,   181,   120,     0,   201,     0,   213,   212,   214,    35,
      42,    43,    44,    39,    41,    48,    49,    37,    40,    38,
      36,    46,    45,    47,   341,   342,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    67,    65,   274,   272,   273,
     271,     0,   106,   104,     0,    82,     0,     0,    72,     0,
      71,     0,     0,    77,     0,    76,     0,     0,    86,   172,
     164,     0,   249,   185,   187,   188,   186,     0,   225,   228,
       0,   229,     0,   221,   230,    70,     0,     0,    87,    89,
     287,     0,     0,   208,     0,     0,     0,   100,   101,   184,
     148,   146,   126,   155,   156,   157,   152,   154,   150,   153,
     151,   149,   159,   158,   127,   130,   128,   129,   140,   131,
     144,   136,   134,   147,   135,   133,   138,   143,   145,   132,
     137,   141,   142,   139,   160,   161,   124,   162,   202,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   107,    75,
       0,     0,   291,     0,   290,     0,     0,   297,     0,   296,
      85,   307,   167,     0,     0,   229,   199,   222,     0,     0,
      91,     0,    92,     0,   267,     0,    80,   304,     0,    79,
     303,    94,     0,   125,     0,   165,   122,     0,     0,     0,
       0,     0,     0,     0,     0,   295,     0,     0,   301,     0,
       0,   249,   252,   253,   254,     0,   251,   255,   322,   195,
     169,   168,     0,     0,     0,   238,   322,    90,     0,     0,
       0,    93,    94,   102,   199,   124,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   229,   241,
       0,   196,   198,   197,   200,   191,   192,   112,     0,     0,
       0,   103,     0,   123,   163,     0,     0,     0,     0,     0,
       0,   294,   293,   300,   299,   171,   170,   243,   244,   246,
     322,     0,   353,   322,   306,   305,   189,   121,   190,     0,
     245,   247,   241,   248
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   188,   189,    68,   423,    70,    71,   114,
      72,   268,    73,    74,    75,   502,    76,    77,   452,   549,
      78,    79,    80,   203,   470,   641,    81,   410,   411,   125,
     151,   437,    83,    84,   334,   559,   472,   597,   646,   295,
     434,   435,   436,   473,   206,   537,   737,   707,   177,   702,
     670,   673,    85,    86,    87,   175,   317,    88,    89,   154,
     155,   299,   300,   447,   303,   304,   443,   728,   667,   625,
     190,   194,   195,   464,   275,   276,   277,   126,    91,    92,
      93,   127,    95,    96,   128,   129,    99,   131,   101,   132,
     133,   104,   105,   106,   107,   108,   109,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -670
static const yytype_int16 yypact[] =
{
    -670,    46,  2045,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    3024,  3024,    96,   -56,  5455,     5,    96,  5455,  3024,     4,
      96,    96,   546,  4663,  5455,  5455,    16,  -670,    96,  -670,
       9,  3024,  5455,  -670,  5455,  -670,  5455,  5455,   116,    21,
      72,  4861,  5455,  5455,  5455,   122,    77,  3024,    33,  4960,
    5455,  5455,  -670,  -670,  5455,  -670,  -670,  6346,  5455,  5455,
    -670,  5455,  -670,  -670,  2292,  4564,  4960,  -670,  2902,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
     114,  -670,   170,    71,  -670,  -670,    96,  -670,  -670,   125,
      74,  -670,  -670,  -670,   141,   153,   149,   162,   173, 10131,
   10356,   -29,   183,   186,  -670,  -670,  -670,  -670,  -670,  -670,
     232,  -670, 10131,  -670,   191,  -670,  2414,  -670,  5455,  5455,
    5455,  5455,  5455,  4960,  4960,   139,  -670,  -670,  -670,  -670,
    6881,   174,  -670,  -670,    96,   197,  8116,   241,  4960,   196,
    -670,    96,  -670,    96,   195,    -3,  6946,  7011,  7076,  4960,
    3024,   202,     7,    61,    -7,  -670,  -670,   371,   233,  7141,
     371,  -670,  4960,  4960,  -670,  8181,  7856,  7141, 10131,   207,
    4960,  -670, 10131,  4960,   255,   220,    96,  -670,   -36, 10131,
    7141,  8246,   279, 10225,   371,   279,   371,  -670,  -670,  2536,
     -42,  -670,  5455,  -670,   242,   216, 10131,    45,   335,  -670,
    -670,  -670,  -670,    96,  -670,  -670,  -670,   224,     9,     9,
       9,  -670,  5455,  5455,  5455,  5455,  5059,  5059,  5455,  5455,
    5455,  5455,  5455,  5455,   249,  6346,  5455,  5455,  5455,  5455,
    5455,  5455,  5455,  5455,  5455,  5455,  5455,  5455,  5455,  5455,
    5455,  5455,  5455,  5455,  5455,  5455,  5455,  5455,  5455,  5455,
    5455,  5455,  5455,  5455,  5455,  5455,  4960,  4960,  5059,  5059,
    -670,  7986,  8051,  8311,    51,  3024,  5059,  -670,  -670,   231,
    -670,  -670,  5455,   251,  -670,   225,   254,  -670, 10131,    96,
     236,   321,  4960,  -670,  3146,  5059,  -670,  3268,  5059,  -670,
    3024,   329,   230,  -670,    70,  -670,  -670,     7,  -670,   263,
     239,  -670,  1826,   289,   288,  5455,     9,  -670,   246,   248,
    -670,  -670,  -670,  4960,   256,   -19,  4366,   277,  -670,  -670,
    4960,  -670,  -670,  -670,  -670,  -670,  -670,  6816,  4762,  -670,
    5059,  2170,  -670,   283,   336,  2658,    55,    84,    86,  7921,
   10196, 10196,   172,  -670,   172,  -670,   172,   997,  1562,  1215,
   10314,   233,   279,  -670,  -670,  -670, 10225,  6746,   172,   783,
     783, 10196,   783,   783,   371,   279,  6746, 10290,   371,   674,
     674,   279,  8376,  8441,  8506,  8571,  8636,  8701,  8766,  8831,
    8896,  8961,  9026,  9091,  9156,  9221,  9286,   258,   267,  -670,
     172,  -670,   172,  5554,  5059,  5653,  5059,  5455,  5059,   493,
    -670,    -3,  7141,  -670,  9351,  5455,  4960,  -670,  4960,   317,
      38,  -670,  -670,  5455,   -57,  5455, 10131,    -2,  7206,  5455,
   10131,    24,  7271,   374,  9416,  3024,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,   -53,  -670,    14,   240,   271,     7,
     252,  -670,  4960,  -670,   557,  5455,  5455,  -670, 10196,  -670,
    -670,    -3,    63,   276,  -670,  -670,  4960,  -670,   165,    96,
    -670, 10131,  -670,  -670,   305,   281,  6422,  -670, 10131,  4960,
     282,  -670,  -670,  6704,  -670,  2780,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  5455,   380,  9481,  5455,
     383,  9546,   285,  6523,  -670,  -670,  -670, 10131,  -670, 10131,
    -670,  5455,    96,  -670,  7141,  -670,  7336,  3390,  -670,  3512,
    -670,  7401,  3634,  -670,  3756,  -670,  3024,  5455,  -670,   615,
    -670,     7,   314,  -670,  -670,  -670,  -670,    10,  -670,  -670,
    4366,   288,    53, 10131, 10131,  -670,  3024,  4960,  -670,  -670,
    -670,    76,    62,  -670,  4762,  3878,  4000,   316,  -670,   240,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,    96,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,   315,   292,  -670,  9611,
    5752,  5851,  9676,  5950,  6049,  6148,  6247, 10131,  -670,  -670,
    3024,  5455, 10131,  5455, 10131,  3024,  5455, 10131,  5455, 10131,
    -670, 10131,  -670,   290,  5158,   -41,   345,  -670,  5059,  4122,
    -670,   -18,  -670,  4244,  -670,  5455,  -670, 10131,  5455,  -670,
   10131,   817,    27,  -670,  6704,    70,  -670,  5455,  5455,  5455,
    5455,  5455,  5455,  5455,  5455,  9416,  7466,  7531,  9416,  7596,
    7661,   314,     4,  5455,  5455,  4465,  -670,  -670,    78,  4960,
    -670,  -670,  5455,   -26,  6588,  -670,   750,  -670,  7726,  7791,
      96,  -670,   943,  -670,   345,  -670,   292,    73,  9741,  9806,
    9871,  9936, 10001, 10066,  3024,  3024,  3024,  3024,   -41,  5257,
      66,  -670,  -670, 10131, 10131,  -670,  -670,  -670,  6247,  3024,
    3024,  -670,   -46,  -670,  -670,  5455,  5455,  5455,  5455,  5455,
    5455,  9416,  9416,  9416,  9416,  -670,  -670,  -670,  -670,  -670,
      91,  5059,  6445,   802,  9416,  9416,  -670,  -670,  -670,  6653,
    -670,  -670,  5356,  -670
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -670,  -670,  -670,     0,    82,  -225,  1486,  -670,  1064,   402,
    1490,   -61,  -652,  -621,  -670,    48,  -670,  -670,   -35,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,   -93,   291,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -223,  -264,  -670,
    -222,  -104,  -670,  -670,  -670,  -131,  -670,  -286,   205,  -670,
    -268,  -253,  -670,  -670,  -670,  -133,  -670,  -670,  -670,    81,
     127,  -670,  -281,  -536,  -670,  -388,  -310,  -547,  -669,  -227,
       1,  -303,  -670,  -670,     2,  -670,    31,   427,  -259,  -670,
    -670,   671,  -670,  -670,   732,   743,   -10,   865,  -670,  1070,
    1282,  -670,  -670,  -670,  -670,  -670,  -670,  -670
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -354
static const yytype_int16 yytable[] =
{
     112,   269,    67,   265,   130,   627,   457,   136,   280,    41,
       5,   301,     5,   146,   147,   148,   438,     5,   265,   517,
     683,   706,   157,   305,   158,   463,   159,   160,   301,    41,
     729,   165,   166,   167,   168,   446,     5,   172,   320,   179,
     180,   181,   529,   444,   182,   522,     3,   183,   184,   185,
     178,   186,   541,   320,   179,   196,   179,   458,   669,   320,
     706,   711,   301,   741,   116,  -233,   515,   197,   736,   134,
     530,   145,   296,  -172,   116,   330,   320,   320,   321,   326,
    -233,   398,  -233,   628,   283,   286,   289,   427,   306,   671,
     173,  -233,   628,   256,   116,   257,   731,  -233,   307,     5,
     428,   455,   116,   429,   540,   204,   312,   546,   112,   261,
     262,   263,   172,   179,   179,   430,   431,   116,   116,   322,
     546,   540,   205,   161,   432,   264,   138,   200,   278,   297,
    -233,   152,   547,   512,   433,  -231,   531,  -233,   149,   278,
     320,  -233,   208,   162,   116,   547,   320,  -233,   320,   626,
     306,   292,   278,   278,  -250,   302,  -233,   320,   539,   513,
     278,   320,   726,   179,   308,   309,   201,  -242,   529,   476,
     331,   209,   314,  -250,   315,  -233,   399,  -250,   629,   306,
     202,   306,   327,   169,   548,   740,  -242,   633,  -310,   325,
    -242,   732,  -172,   210,   163,   743,   714,   632,   477,   170,
     478,  -250,   339,   340,   341,   342,   344,   346,   347,   348,
     349,   350,   351,   352,  -242,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   278,   278,   390,   392,
     623,   634,     5,   301,   684,  -309,   402,   533,   387,   388,
    -210,  -340,   404,  -340,   343,   345,   222,   211,   212,   224,
     193,   353,   179,   227,   416,   418,  -314,   420,   422,  -210,
     424,   444,  -233,   414,  -313,   258,   534,  -315,   259,   336,
     337,   338,  -340,    82,  -340,   448,  -339,  -312,  -339,   215,
    -311,    82,    82,   278,   535,   260,   389,   391,   536,    82,
     461,   270,   272,   354,   401,   453,   279,   282,   196,   675,
     466,   468,    82,   675,   294,   405,   553,   406,  -233,   313,
     224,   316,   216,   417,   318,   217,   421,   328,    82,   329,
     504,   505,   332,   274,   335,   403,   540,  -233,   407,   408,
     412,   413,   425,   426,   274,    82,   518,   520,   439,    82,
     523,   525,   440,   445,   446,   668,  -233,   274,   274,   450,
     676,   451,   459,   222,   676,   274,   224,   469,   465,   454,
     227,   494,   471,   416,   498,   420,   501,   424,   503,   468,
     545,   215,   495,   511,   538,   507,   509,   526,   278,   550,
     554,   600,   558,   514,   603,   516,   555,    82,   624,   521,
     605,   320,   644,   661,   645,   672,   682,   475,   135,   608,
     551,   686,   713,   687,   216,   622,   738,   217,   642,    90,
     725,   712,   179,   449,   698,   543,   544,    90,    90,   510,
     730,    82,   497,   542,   500,    90,   179,     0,     0,   733,
       0,     0,     0,   609,     0,     0,     0,   552,    90,   179,
       0,   274,   274,     0,     0,   222,     0,   223,   224,     0,
     557,     0,   227,   730,    90,   325,     0,     0,     0,   234,
      82,     0,     0,   730,     0,     0,   599,     0,   240,   602,
       0,    90,     0,     0,     0,    90,     5,     6,     7,     8,
       9,   607,   118,     0,     0,     0,     0,   612,     0,   614,
       0,     0,   617,     0,   619,    19,     0,   621,   274,     0,
     119,   120,   121,     0,    26,   460,     0,     0,     0,    29,
      30,     0,    32,   193,    34,    35,     0,   179,     0,     0,
      37,     0,    39,    90,   196,   637,   640,     0,   631,     5,
       0,     0,    44,    45,    46,   122,    82,     0,     0,     0,
       0,     0,     0,  -217,     0,     0,     0,     0,     0,     0,
     677,     0,     0,     0,     0,    82,     0,    90,    82,     0,
    -117,    82,     0,     0,    54,     0,     0,  -234,     0,     0,
     612,   614,  -217,   617,   619,   637,   640,  -117,     0,     0,
     655,   656,    59,   657,     0,   658,   659,     0,   660,     0,
     141,   508,  -234,   274,  -217,    65,    90,   124,   674,   468,
       0,     0,    82,   468,     0,   678,    82,  -234,   679,     0,
       0,     0,   427,  -234,     0,     0,     0,   655,   688,   689,
     658,   690,   691,   692,   693,   428,     0,     0,   429,     0,
       0,     0,  -234,   168,   172,   179,     0,     0,     0,   703,
     430,   431,   704,     0,     0,     0,   700,     0,     0,   432,
       0,  -234,     0,    94,     0,     0,     0,  -234,     0,   433,
       0,    94,    94,     0,   721,   722,   723,   724,     0,    94,
       0,     0,    90,     0,   215,     0,     0,     0,   640,   734,
     735,     0,    94,     0,     0,   721,   722,   723,   724,   734,
     735,    90,     0,     0,    90,     0,    82,    90,    94,     0,
       0,   739,   468,     0,     0,     0,     0,   216,     0,     0,
     217,     0,   640,     0,    97,    94,     0,     0,     0,    94,
       0,     0,    97,    97,     0,    98,     0,     0,     0,     0,
      97,     0,     0,    98,    98,     0,     0,     0,    90,   193,
       0,    98,    90,    97,     0,     0,    82,     0,   222,     0,
     223,   224,     0,     0,    98,   227,     0,     0,     0,    97,
    -237,   233,   234,     0,     0,     0,   237,    94,     0,     0,
      98,   240,     0,     0,     0,     0,    97,     0,     0,     0,
      97,     0,     0,   215,     0,  -237,     0,    98,    82,     0,
      82,    98,     0,    82,     0,    82,     0,    82,     0,     0,
    -237,    94,     0,     0,     0,     0,  -237,     0,     0,   666,
       0,     0,  -239,    15,  -215,     0,   216,    82,     0,   217,
       0,    20,    21,    22,     0,  -237,    82,    82,    97,    27,
       0,  -113,    90,     0,     0,     0,     0,  -239,     0,    98,
      94,     0,     0,  -215,  -237,    38,     0,   100,  -113,     0,
    -237,     0,  -239,     0,   701,   100,   100,   222,  -239,   223,
     224,   680,    97,   100,   227,  -215,     0,     0,     0,     0,
     233,   234,     0,    98,     0,   237,   100,  -239,   238,   239,
     240,    82,    90,     0,   727,     0,    82,     0,     0,     0,
       0,     0,   100,     0,     0,     0,  -239,     0,     0,     0,
       0,    97,  -239,     0,     0,     0,     0,     0,     0,   100,
       0,    62,    98,   100,     0,     0,    94,   727,   681,     0,
       0,     0,     0,     0,    90,     0,    90,   727,     0,    90,
       0,    90,     0,    90,     0,    94,     0,     0,    94,    15,
    -215,    94,     0,     0,     0,     0,     0,    20,    21,    22,
       0,     0,     0,    90,     0,    27,     0,  -113,     0,     0,
       0,   100,    90,    90,     0,    82,    82,    82,    82,  -215,
       0,   198,     0,     0,  -113,     0,     0,    97,     0,     0,
      82,    82,    94,     0,     0,     0,    94,   680,    98,     0,
       0,  -215,     0,     0,     0,   100,    97,   215,     0,    97,
       0,     0,    97,     0,     0,     0,     0,    98,     0,     0,
      98,     0,     0,    98,     0,     0,     0,    90,     0,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
     216,     0,     0,   217,   100,     0,     0,    62,     0,     0,
       0,     0,     0,    97,     0,     0,     0,    97,     0,     0,
       0,     0,   102,     0,    98,     0,     0,   117,    98,     0,
     102,   102,     0,     0,     0,     0,     0,   219,   102,   220,
     221,   222,     0,   223,   224,     0,    94,   226,   227,   228,
     229,   102,   231,   232,   233,   234,     0,   235,     0,   237,
       0,     0,   238,   239,   240,     0,     0,   102,     0,     0,
       0,    90,    90,    90,    90,     0,     0,     0,     0,     0,
     100,     0,     0,     0,   102,     0,    90,    90,   102,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,   100,
       0,     0,   100,     0,     0,   100,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,    94,     0,
      94,     0,     0,    94,   267,    94,   100,    94,     0,     0,
     100,     0,     0,     0,     0,     0,     0,    97,     0,   267,
     267,   267,   291,     0,     0,     0,     0,    94,    98,     0,
     102,     0,     0,   267,     0,     0,    94,    94,     0,     0,
       0,   267,     0,     0,     0,   215,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,     0,     0,    97,
       0,    97,     0,     0,    97,     0,    97,     0,    97,   102,
      98,     0,    98,     0,     0,    98,     0,    98,   216,    98,
       0,   217,     0,     0,     0,     0,     0,     0,    97,     0,
       0,    94,     0,     0,   103,     0,    94,    97,    97,    98,
     100,     0,   103,   103,     0,     0,     0,     0,    98,    98,
     103,     0,     0,     0,     0,   219,     0,     0,   221,   222,
       0,   223,   224,   103,     0,   226,   227,   228,   229,     0,
     231,   232,   233,   234,     0,   235,     0,   237,     0,   103,
     238,   239,   240,     0,     0,   102,     0,     0,     0,     0,
     100,     0,    97,     0,     0,     0,   103,    97,     0,     0,
     103,     0,     0,    98,   102,     0,     0,   102,    98,     0,
     102,     0,     0,     0,     0,    94,    94,    94,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    94,   100,     0,   100,     0,     0,   100,     0,   100,
       0,   100,     0,     0,     0,     0,     0,     0,   103,     0,
       0,   102,     0,     0,     0,   102,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     100,   100,     0,     0,     0,     0,    97,    97,    97,    97,
       0,     0,   103,     0,     0,     0,     0,    98,    98,    98,
      98,    97,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,   267,     0,     0,     0,
       0,   103,     0,     0,     0,   100,     0,     0,     0,     0,
     100,   267,   267,     0,     0,   267,   267,     0,    69,     0,
       0,     0,     0,     0,     0,   102,   111,   113,     0,     0,
       0,     0,   115,     0,   137,     0,   115,     0,     0,     0,
     139,   140,   142,     0,     0,   267,     0,   156,   150,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,     0,     0,     0,   174,     0,
       0,     0,     0,     0,     0,   102,     0,   103,     0,     0,
      69,     0,     0,     0,   199,     0,     0,     0,     0,   100,
     100,   100,   100,     0,     0,     0,   103,     0,     0,   103,
       0,     0,   103,     0,   100,   100,   207,     0,   267,     0,
     291,     0,   215,     0,     0,   291,     0,   102,     0,   102,
       0,     0,   102,     0,   102,     0,   102,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,   216,   102,   103,   217,     0,
       0,     0,     0,     0,   174,   102,   102,     0,   273,     0,
       0,   174,     0,   281,     0,     0,   293,     0,     0,   273,
       0,     0,   298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,   273,     0,     0,   222,     0,   223,   224,
     273,     0,   226,   227,   228,   229,   319,   231,   232,   233,
     234,     0,   235,     0,   237,    69,     0,   238,   239,   240,
     102,     0,     0,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,   333,     0,   267,     0,     0,   153,   153,
     153,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,   355,     0,     0,     0,     0,     0,
     291,   291,     0,   291,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   705,     0,     0,
       0,     0,   291,   291,     0,     0,   273,   273,     0,     0,
       0,   400,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,   102,   102,   102,   102,     0,   409,
     400,     0,     0,   400,     0,     0,   705,     0,     0,   102,
     102,     0,     0,     0,     0,     0,     0,   298,     0,     0,
       0,     0,     0,     0,     0,     0,   153,     0,     0,   103,
       0,   103,     0,   273,   103,     0,   103,     0,   103,     0,
       0,     0,     0,     0,     0,     0,     0,   467,     0,     0,
       0,    69,     0,     0,     0,     0,     0,   441,   103,     5,
       6,     7,     8,     9,     0,   118,     0,   103,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,   119,   120,   121,     0,    26,     0,     0,
       0,     0,    29,    30,     0,    32,     0,    34,    35,     0,
       0,     0,     0,    37,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,   122,     0,
       0,     0,   103,     0,     0,     0,     0,   103,   273,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   528,     0,     0,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,     0,   532,     0,     0,   298,
       0,     0,     0,    58,     0,    59,     0,    60,    61,     0,
       0,     0,     0,    63,     0,     0,   123,     0,    65,   174,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,   596,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   103,   103,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   409,   400,     0,   400,     0,     0,   400,     0,
     400,     0,   620,     0,     0,     0,     0,     0,     0,     0,
       0,   298,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   630,     0,     0,     0,     0,     0,     0,     0,
       0,   636,   639,     0,     0,    -2,     4,     0,     5,     6,
       7,     8,     9,     0,    10,    11,    12,     0,   -94,    13,
      14,    15,  -215,    16,    17,   643,    18,    19,     0,    20,
      21,    22,    23,    24,    25,     0,    26,    27,     0,  -113,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,  -215,    37,    38,    39,    40,  -113,   -94,     0,     0,
      41,     0,    42,    43,    44,    45,    46,    47,     0,    48,
       0,   -94,    49,  -215,     0,     0,    50,    51,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   685,    53,    54,    55,    56,     0,
       0,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,    59,     0,    60,    61,     0,    62,
       0,     0,    63,     0,     0,    64,     0,    65,     0,    66,
     174,     4,     0,     5,     6,     7,     8,     9,  -353,    10,
      11,    12,  -353,   -94,    13,    14,    15,  -215,    16,    17,
    -353,    18,    19,  -353,    20,    21,    22,    23,    24,    25,
       0,    26,    27,     0,  -113,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,  -215,    37,     0,    39,
      40,  -113,   -94,  -353,     0,    41,  -353,    42,    43,    44,
      45,    46,    47,     0,    48,     0,   -94,    49,  -215,     0,
       0,    50,    51,     0,     0,  -353,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -353,    54,  -353,  -353,  -353,  -353,  -353,  -353,  -353,     0,
    -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,    59,
    -353,  -353,  -353,     0,    62,  -353,  -353,  -353,     0,     0,
      64,  -353,    65,     4,    66,     5,     6,     7,     8,     9,
       0,    10,    11,    12,     0,   -94,    13,    14,    15,  -215,
      16,    17,     0,    18,    19,     0,    20,    21,    22,    23,
      24,    25,     0,    26,    27,     0,  -113,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,  -215,    37,
      38,    39,    40,  -113,   -94,     0,     0,    41,     0,    42,
      43,    44,    45,    46,    47,     0,    48,     0,   -94,    49,
    -215,     0,     0,    50,    51,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    59,     0,    60,    61,   176,    62,     0,     0,    63,
       0,     0,    64,   187,    65,     4,    66,     5,     6,     7,
       8,     9,     0,    10,    11,    12,     0,   -94,    13,    14,
      15,  -215,    16,    17,     0,    18,    19,     0,    20,    21,
      22,    23,    24,    25,     0,    26,    27,     0,  -113,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
    -215,    37,    38,    39,    40,  -113,   -94,     0,     0,    41,
       0,    42,    43,    44,    45,    46,    47,     0,    48,     0,
     -94,    49,  -215,     0,     0,    50,    51,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,    59,     0,    60,    61,     0,    62,     0,
       0,    63,     0,     0,    64,   187,    65,     4,    66,     5,
       6,     7,     8,     9,     0,    10,    11,    12,     0,   -94,
      13,    14,    15,  -215,    16,    17,     0,    18,    19,     0,
      20,    21,    22,    23,    24,    25,     0,    26,    27,     0,
    -113,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,  -215,    37,    38,    39,    40,  -113,   -94,     0,
       0,    41,     0,    42,    43,    44,    45,    46,    47,     0,
      48,     0,   -94,    49,  -215,     0,     0,    50,    51,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,    59,     0,    60,    61,     0,
      62,     0,     0,    63,     0,     0,    64,   324,    65,     4,
      66,     5,     6,     7,     8,     9,     0,    10,    11,    12,
       0,   -94,    13,    14,    15,  -215,    16,    17,     0,    18,
      19,     0,    20,    21,    22,    23,    24,    25,     0,    26,
      27,     0,  -113,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,  -215,    37,    38,    39,    40,  -113,
     -94,     0,     0,    41,     0,    42,    43,    44,    45,    46,
      47,     0,    48,     0,   -94,    49,  -215,     0,     0,    50,
      51,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,    59,     0,    60,
      61,     0,    62,     0,     0,    63,     0,     0,    64,   474,
      65,     4,    66,     5,     6,     7,     8,     9,     0,    10,
      11,    12,     0,   -94,    13,    14,    15,  -215,    16,    17,
       0,    18,    19,     0,    20,    21,    22,    23,    24,    25,
       0,    26,    27,     0,  -113,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,  -215,    37,    38,    39,
      40,  -113,   -94,     0,     0,    41,     0,    42,    43,    44,
      45,    46,    47,     0,    48,     0,   -94,    49,  -215,     0,
       0,    50,    51,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
       0,    60,    61,     0,    62,     0,     0,    63,     0,     0,
      64,   598,    65,     4,    66,     5,     6,     7,     8,     9,
       0,    10,    11,    12,     0,   -94,    13,    14,    15,  -215,
      16,    17,     0,    18,    19,     0,    20,    21,    22,    23,
      24,    25,     0,    26,    27,     0,  -113,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,  -215,    37,
     198,    39,    40,  -113,   -94,     0,     0,    41,     0,    42,
      43,    44,    45,    46,    47,     0,    48,     0,   -94,    49,
    -215,     0,     0,    50,    51,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    59,     0,    60,    61,     0,    62,     0,     0,    63,
       0,     0,    64,     0,    65,     4,    66,     5,     6,     7,
       8,     9,     0,    10,    11,    12,     0,   -94,    13,    14,
      15,  -215,    16,    17,     0,    18,    19,     0,    20,    21,
      22,    23,    24,    25,     0,    26,    27,     0,  -113,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
    -215,    37,     0,    39,    40,  -113,   -94,     0,     0,    41,
       0,    42,    43,    44,    45,    46,    47,     0,    48,     0,
     -94,    49,  -215,     0,     0,    50,    51,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,    59,     0,    60,    61,     0,    62,     0,
       0,    63,     0,     0,    64,     0,    65,     4,    66,     5,
       6,     7,     8,     9,     0,    10,    11,    12,     0,   -94,
      13,    14,    15,  -215,    16,    17,     0,    18,    19,     0,
      20,    21,    22,    23,    24,   415,     0,    26,    27,     0,
    -113,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,  -215,    37,     0,    39,    40,  -113,   -94,     0,
       0,    41,     0,    42,    43,    44,    45,    46,    47,     0,
      48,     0,   -94,    49,  -215,     0,     0,    50,    51,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,    59,     0,    60,    61,     0,
      62,     0,     0,    63,     0,     0,    64,     0,    65,     4,
      66,     5,     6,     7,     8,     9,     0,    10,    11,    12,
       0,   -94,    13,    14,    15,  -215,    16,    17,     0,    18,
      19,     0,    20,    21,    22,    23,    24,   419,     0,    26,
      27,     0,  -113,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,  -215,    37,     0,    39,    40,  -113,
     -94,     0,     0,    41,     0,    42,    43,    44,    45,    46,
      47,     0,    48,     0,   -94,    49,  -215,     0,     0,    50,
      51,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,    59,     0,    60,
      61,     0,    62,     0,     0,    63,     0,     0,    64,     0,
      65,     4,    66,     5,     6,     7,     8,     9,     0,    10,
      11,    12,     0,   -94,    13,    14,    15,  -215,    16,    17,
       0,    18,    19,     0,    20,    21,    22,    23,    24,   611,
       0,    26,    27,     0,  -113,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,  -215,    37,     0,    39,
      40,  -113,   -94,     0,     0,    41,     0,    42,    43,    44,
      45,    46,    47,     0,    48,     0,   -94,    49,  -215,     0,
       0,    50,    51,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
       0,    60,    61,     0,    62,     0,     0,    63,     0,     0,
      64,     0,    65,     4,    66,     5,     6,     7,     8,     9,
       0,    10,    11,    12,     0,   -94,    13,    14,    15,  -215,
      16,    17,     0,    18,    19,     0,    20,    21,    22,    23,
      24,   613,     0,    26,    27,     0,  -113,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,  -215,    37,
       0,    39,    40,  -113,   -94,     0,     0,    41,     0,    42,
      43,    44,    45,    46,    47,     0,    48,     0,   -94,    49,
    -215,     0,     0,    50,    51,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    59,     0,    60,    61,     0,    62,     0,     0,    63,
       0,     0,    64,     0,    65,     4,    66,     5,     6,     7,
       8,     9,     0,    10,    11,    12,     0,   -94,    13,    14,
      15,  -215,    16,    17,     0,    18,    19,     0,    20,    21,
      22,    23,    24,   616,     0,    26,    27,     0,  -113,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
    -215,    37,     0,    39,    40,  -113,   -94,     0,     0,    41,
       0,    42,    43,    44,    45,    46,    47,     0,    48,     0,
     -94,    49,  -215,     0,     0,    50,    51,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,    59,     0,    60,    61,     0,    62,     0,
       0,    63,     0,     0,    64,     0,    65,     4,    66,     5,
       6,     7,     8,     9,     0,    10,    11,    12,     0,   -94,
      13,    14,    15,  -215,    16,    17,     0,    18,    19,     0,
      20,    21,    22,    23,    24,   618,     0,    26,    27,     0,
    -113,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,  -215,    37,     0,    39,    40,  -113,   -94,     0,
       0,    41,     0,    42,    43,    44,    45,    46,    47,     0,
      48,     0,   -94,    49,  -215,     0,     0,    50,    51,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,    59,     0,    60,    61,     0,
      62,     0,     0,    63,     0,     0,    64,     0,    65,     4,
      66,     5,     6,     7,     8,     9,     0,    10,    11,    12,
       0,   -94,    13,    14,    15,  -215,    16,    17,     0,    18,
      19,     0,    20,    21,    22,    23,    24,   635,     0,    26,
      27,     0,  -113,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,  -215,    37,     0,    39,    40,  -113,
     -94,     0,     0,    41,     0,    42,    43,    44,    45,    46,
      47,     0,    48,     0,   -94,    49,  -215,     0,     0,    50,
      51,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,    59,     0,    60,
      61,     0,    62,     0,     0,    63,     0,     0,    64,     0,
      65,     4,    66,     5,     6,     7,     8,     9,     0,    10,
      11,    12,     0,   -94,    13,    14,    15,  -215,    16,    17,
       0,    18,    19,     0,    20,    21,    22,    23,    24,   638,
       0,    26,    27,     0,  -113,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,  -215,    37,     0,    39,
      40,  -113,   -94,     0,     0,    41,     0,    42,    43,    44,
      45,    46,    47,     0,    48,     0,   -94,    49,  -215,     0,
       0,    50,    51,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
       0,    60,    61,     0,    62,     0,     0,    63,     0,     0,
      64,     0,    65,   441,    66,     5,     6,     7,     8,     9,
    -353,   118,     0,     0,  -353,     0,     0,     0,     0,     0,
       0,     0,  -353,     0,    19,     0,     0,     0,     0,   119,
     120,   121,     0,    26,     0,     0,     0,     0,    29,    30,
       0,    32,     0,    34,    35,     0,     0,     0,     0,    37,
       0,    39,     0,     0,     0,  -353,     0,     0,  -353,     0,
       0,    44,    45,    46,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -232,  -353,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -353,    54,  -353,  -353,  -353,     0,  -353,  -353,
    -353,     0,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,    59,  -353,  -353,  -353,     0,     0,  -353,  -353,  -353,
       0,     0,   123,     0,    65,   441,   456,     5,     6,     7,
       8,     9,  -353,   118,     0,     0,  -353,     0,     0,     0,
       0,     0,     0,     0,  -353,     0,    19,     0,     0,     0,
       0,   119,   120,   121,     0,    26,     0,     0,     0,     0,
      29,    30,     0,    32,     0,    34,    35,     0,     0,     0,
       0,    37,     0,    39,     0,     0,     0,  -353,     0,     0,
    -353,     0,     0,    44,    45,    46,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -353,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -353,    54,  -353,  -353,  -353,     0,
    -353,  -353,  -353,     0,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,  -353,    59,  -353,  -353,  -353,     0,     0,  -353,
    -353,  -353,     0,     0,   123,     0,    65,   441,   456,     5,
       6,     7,     8,     9,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,   119,   120,   121,     0,    26,     0,     0,
       0,     0,    29,    30,     0,    32,     0,    34,    35,     0,
       0,     0,     0,    37,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,     0,     0,     0,     5,     6,
       7,     8,     9,    58,   118,    59,     0,    60,    61,     0,
       0,     0,     0,    63,     0,     0,   123,    19,    65,     0,
     456,     0,   119,   120,   121,     0,    26,     0,     0,     0,
       0,    29,    30,     0,    32,     0,    34,    35,     0,     0,
       0,     0,    37,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    45,    46,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,     0,
       0,     0,     0,    57,     0,     0,     0,     5,     6,     7,
       8,     9,    58,   118,    59,     0,    60,    61,   176,     0,
       0,     0,    63,     0,     0,   123,    19,    65,     0,   124,
     699,   119,   120,   121,     0,    26,     0,     0,     0,     0,
      29,    30,     0,    32,     0,    34,    35,     0,     0,     0,
       0,    37,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,    46,   122,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,   192,     0,     0,     5,     6,     7,     8,
       9,    58,   118,    59,     0,    60,    61,   176,     0,     0,
       0,    63,     0,     0,   123,    19,    65,     0,   124,     0,
     119,   120,   121,     0,    26,     0,     0,     0,     0,    29,
      30,     0,    32,     0,    34,    35,     0,     0,     0,   143,
      37,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    45,    46,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    54,    55,    56,     0,     0,     0,
       0,    57,     0,     0,     0,     5,     6,     7,     8,     9,
      58,   118,    59,     0,    60,    61,     0,     0,     0,     0,
      63,     0,     0,   123,    19,    65,     0,   124,     0,   119,
     120,   121,     0,    26,     0,     0,     0,     0,    29,    30,
       0,    32,     0,    34,    35,     0,     0,     0,     0,    37,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,    46,   122,     0,     0,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,     0,     0,     0,     5,     6,     7,     8,     9,    58,
     118,    59,     0,    60,    61,   176,     0,     0,     0,    63,
       0,     0,   123,    19,    65,     0,   124,     0,   119,   120,
     121,     0,    26,     0,     0,     0,     0,    29,    30,     0,
      32,     0,    34,    35,     0,     0,     0,     0,    37,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    45,    46,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,    56,     0,     0,     0,     0,    57,
       0,     0,     0,     5,     6,     7,     8,     9,    58,   118,
      59,     0,    60,    61,     0,   164,     0,     0,    63,     0,
       0,   123,    19,    65,     0,   124,     0,   119,   120,   121,
       0,    26,     0,     0,     0,     0,    29,    30,     0,    32,
       0,    34,    35,     0,     0,     0,     0,    37,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,    46,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,     0,     0,     0,     0,    57,     0,
       0,     0,     5,     6,     7,     8,     9,    58,   118,    59,
       0,    60,    61,   176,     0,     0,     0,    63,     0,     0,
     123,    19,    65,     0,   124,     0,   119,   120,   121,     0,
      26,     0,     0,     0,     0,    29,    30,     0,    32,     0,
      34,    35,     0,     0,     0,     0,    37,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45,
      46,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    56,     0,     0,     0,     0,    57,     0,     0,
       0,     5,     6,     7,     8,     9,    58,   118,    59,     0,
      60,    61,     0,     0,     0,     0,    63,     0,     0,   123,
     662,    65,     0,   124,     0,   119,   120,   121,     0,    26,
       0,     0,     0,     0,    29,    30,     0,    32,     0,    34,
      35,     0,     0,     0,     0,    37,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   663,    45,    46,
     664,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,     0,     0,     0,
       5,     6,     7,     8,     9,    58,   118,    59,     0,    60,
      61,   176,     0,     0,     0,    63,     0,     0,   123,    19,
      65,     0,   665,     0,   119,   120,   121,     0,    26,     0,
       0,     0,     0,    29,    30,     0,    32,     0,    34,    35,
       0,     0,     0,     0,    37,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    45,    46,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      56,     0,     0,     0,     0,    57,     0,     0,     0,     5,
       6,     7,     8,     9,    58,   118,    59,     0,    60,    61,
     176,     0,     0,     0,    63,     0,     0,   123,    19,    65,
       0,   665,     0,   119,   120,   654,     0,    26,     0,     0,
       0,     0,    29,    30,     0,    32,     0,    34,    35,     0,
       0,     0,     0,    37,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,    55,    56,
       0,     0,     0,     0,    57,     0,     0,     0,     5,     6,
       7,     8,     9,    58,   118,    59,     0,    60,    61,   176,
       0,     0,     0,    63,     0,     0,   123,    19,    65,     0,
     124,     0,   119,   120,   121,     0,    26,     0,     0,     0,
       0,    29,    30,     0,    32,     0,    34,    35,     0,     0,
       0,     0,    37,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    45,    46,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,     0,
       0,     0,     0,    57,     0,     0,     0,     5,     6,     7,
       8,     9,    58,   118,    59,     0,    60,    61,     0,     0,
       0,     0,    63,     0,     0,   123,    19,    65,     0,   124,
       0,   119,   120,   496,     0,    26,     0,     0,     0,     0,
      29,    30,     0,    32,     0,    34,    35,     0,     0,     0,
       0,    37,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,    46,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,     0,     0,
       0,     0,    57,     0,     0,     0,     5,     6,     7,     8,
       9,    58,   118,    59,     0,    60,    61,     0,     0,     0,
       0,    63,     0,     0,   123,    19,    65,     0,   124,     0,
     119,   120,   499,     0,    26,     0,     0,     0,     0,    29,
      30,     0,    32,     0,    34,    35,     0,     0,     0,     0,
      37,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    45,    46,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    54,    55,    56,     0,     0,     0,
       0,    57,     0,     0,     0,     5,     6,     7,     8,     9,
      58,   118,    59,     0,    60,    61,     0,     0,     0,     0,
      63,     0,     0,   123,    19,    65,     0,   124,     0,   119,
     120,   648,     0,    26,     0,     0,     0,     0,    29,    30,
       0,    32,     0,    34,    35,     0,     0,     0,     0,    37,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,    46,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,     0,     0,     0,     0,
      57,     0,     0,     0,     5,     6,     7,     8,     9,    58,
     118,    59,     0,    60,    61,     0,     0,     0,     0,    63,
       0,     0,   123,    19,    65,     0,   124,     0,   119,   120,
     649,     0,    26,     0,     0,     0,     0,    29,    30,     0,
      32,     0,    34,    35,     0,     0,     0,     0,    37,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    45,    46,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,    56,     0,     0,     0,     0,    57,
       0,     0,     0,     5,     6,     7,     8,     9,    58,   118,
      59,     0,    60,    61,     0,     0,     0,     0,    63,     0,
       0,   123,    19,    65,     0,   124,     0,   119,   120,   651,
       0,    26,     0,     0,     0,     0,    29,    30,     0,    32,
       0,    34,    35,     0,     0,     0,     0,    37,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,    46,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,     0,     0,     0,     0,    57,     0,
       0,     0,     5,     6,     7,     8,     9,    58,   118,    59,
       0,    60,    61,     0,     0,     0,     0,    63,     0,     0,
     123,    19,    65,     0,   124,     0,   119,   120,   652,     0,
      26,     0,     0,     0,     0,    29,    30,     0,    32,     0,
      34,    35,     0,     0,     0,     0,    37,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45,
      46,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    56,     0,     0,     0,     0,    57,     0,     0,
       0,     5,     6,     7,     8,     9,    58,   118,    59,     0,
      60,    61,     0,     0,     0,     0,    63,     0,     0,   123,
      19,    65,     0,   124,     0,   119,   120,   653,     0,    26,
       0,     0,     0,     0,    29,    30,     0,    32,     0,    34,
      35,     0,     0,     0,     0,    37,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,    46,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,    57,     0,     0,     0,
       5,     6,     7,     8,     9,    58,   118,    59,     0,    60,
      61,     0,     0,     0,     0,    63,     0,     0,   123,    19,
      65,     0,   124,     0,   119,   120,   654,     0,    26,     0,
       0,     0,     0,    29,    30,     0,    32,     0,    34,    35,
       0,     0,     0,     0,    37,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    45,    46,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      56,     0,     0,     0,     0,    57,     0,     0,     0,     5,
       6,     7,     8,     9,    58,   118,    59,     0,    60,    61,
       0,     0,     0,     0,    63,     0,     0,   123,    19,    65,
       0,   124,     0,   119,   120,   121,     0,    26,     0,     0,
       0,     0,    29,    30,     0,    32,     0,    34,    35,     0,
       0,     0,     0,    37,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,     0,   214,     0,    53,    54,    55,    56,
       0,     0,   215,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    58,   118,    59,     0,    60,    61,     0,
       0,     0,     0,    63,     0,     0,   123,    19,    65,     0,
     124,     0,   119,   120,   121,   216,    26,     0,   217,     0,
       0,    29,    30,     0,    32,     0,    34,    35,     0,     0,
       0,     0,    37,     0,    39,     0,     0,   218,     0,     0,
       0,     0,     0,     0,    44,    45,    46,   122,     0,     0,
       0,     0,   219,     0,   220,   221,   222,     0,   223,   224,
     225,  -241,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   213,   235,   236,   237,   214,    54,   238,   239,   240,
    -241,     0,     0,   215,  -241,     0,     0,   556,     0,     0,
       0,     0,     0,     0,    59,     0,     0,     0,   176,     0,
       0,     0,     0,     0,     0,   123,     0,    65,  -241,   665,
       0,     0,     0,     0,     0,     0,   216,     0,     0,   217,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   213,     0,   218,     0,
     214,     0,     0,     0,     0,     0,     0,     0,   215,     0,
       0,     0,     0,   219,     0,   220,   221,   222,     0,   223,
     224,   225,     0,   226,   227,   228,   229,   230,   231,   232,
     233,   234,     0,   235,   236,   237,     0,     0,   238,   239,
     240,   216,     0,     0,   217,     0,     0,     0,   606,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   213,     0,   218,     0,   214,     0,     0,     0,     0,
       0,     0,     0,   215,     0,     0,     0,     0,   219,     0,
     220,   221,   222,     0,   223,   224,   225,     0,   226,   227,
     228,   229,   230,   231,   232,   233,   234,     0,   235,   236,
     237,     0,     0,   238,   239,   240,   216,     5,     0,   217,
       0,     0,   560,   708,     0,     0,   561,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   220,   221,   222,     0,   223,
     224,   225,     0,   226,   227,   228,   229,   230,   231,   232,
     233,   234,     0,   235,   236,   237,   215,     0,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,   742,     0,
     562,   563,   564,   565,   566,   567,     0,     0,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,     0,   216,
     578,     0,   217,     0,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,     0,   590,     0,     0,   591,
     592,   593,   594,   595,   213,     0,     0,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
     222,     0,   223,   224,     0,     0,     0,   227,   228,   229,
       0,   231,   232,   233,   234,     0,     0,     0,   237,     0,
       0,   238,   239,   240,     0,     0,     0,     0,     0,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,   265,     0,     0,     0,   219,     0,   220,   221,
     222,   266,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,     0,   217,     0,   462,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,   284,     0,     0,
       0,   219,     0,   220,   221,   222,   285,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,   116,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,   287,     0,     0,     0,   219,     0,   220,   221,
     222,   288,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,   116,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,   116,   217,     0,     0,     0,     0,     0,     0,   290,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,   265,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,   116,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,   519,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,   116,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,   524,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,   116,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,   116,   217,     0,     0,     0,     0,     0,     0,   610,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,   116,   217,     0,     0,
       0,     0,     0,     0,   615,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,   116,   217,     0,     0,     0,     0,     0,     0,   694,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,   116,   217,     0,     0,
       0,     0,     0,     0,   695,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,   116,   217,     0,     0,     0,     0,     0,     0,   696,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,   116,   217,     0,     0,
       0,     0,     0,     0,   697,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,   116,   217,     0,     0,     0,     0,     0,     0,   709,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,   116,   217,     0,     0,
       0,     0,     0,     0,   710,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,   116,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,   311,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,   393,     0,     0,
       0,   219,     0,   220,   221,   222,   394,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
    -318,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,   395,     0,     0,     0,   219,     0,   220,   221,
     222,   396,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     271,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   310,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     323,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     479,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   480,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     481,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   482,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     483,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   484,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     485,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   486,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     487,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   488,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     489,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   490,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     491,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   492,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     493,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,   527,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   506,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,   601,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,   604,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,   647,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,   650,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,   715,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,   716,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,   717,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,   718,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,   719,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,   218,     0,   214,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,     0,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,   720,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213,
       0,   218,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     0,   235,   236,   237,     0,
       0,   238,   239,   240,   216,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   220,   221,   222,     0,   223,   224,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   235,   236,   237,     0,   215,   238,   239,   240,   216,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,     0,     0,     0,     0,     0,   216,     0,
       0,   217,     0,     0,     0,     0,   219,     0,   220,   221,
     222,     0,   223,   224,   225,     0,   226,   227,   228,   229,
     218,   231,   232,   233,   234,     0,   235,   236,   237,     0,
     215,   238,   239,   240,     0,   219,     0,   220,   221,   222,
       0,   223,   224,     0,     0,   226,   227,   228,   229,     0,
     231,   232,   233,   234,   215,   235,   236,   237,     0,     0,
     238,   239,   240,   216,     0,     0,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   216,     0,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     219,     0,   220,   221,   222,     0,   223,   224,     0,     0,
     226,   227,   228,   229,     0,   231,   232,   233,   234,     0,
     235,     0,   237,     0,   219,   238,   239,   240,   222,     0,
     223,   224,     0,     0,   226,   227,   228,   229,     0,   231,
     232,   233,   234,     0,   235,     0,   237,     0,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,  -317,     0,     0,  -339,     0,
    -339
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-670))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      10,   134,     2,    21,    14,   541,   316,    17,   141,    55,
       3,     1,     3,    23,    24,    25,   297,     3,    21,    21,
     641,   673,    32,    30,    34,   328,    36,    37,     1,    55,
     699,    41,    42,    43,    44,    76,     3,    47,    95,    49,
      50,    51,    95,   302,    54,    21,     0,    57,    58,    59,
      49,    61,   440,    95,    64,    65,    66,   316,    99,    95,
     712,   682,     1,   732,   120,    55,   123,    66,   114,    64,
     123,    23,    65,     3,   120,    30,    95,    95,   114,   121,
      70,    30,    55,    30,   145,   146,   147,    17,    95,   625,
      57,    30,    30,   122,   120,   124,    30,    70,   159,     3,
      30,   120,   120,    33,    94,    34,   167,    44,   118,   119,
     120,   121,   122,   123,   124,    45,    46,   120,   120,   180,
      44,    94,    51,     7,    54,   124,   122,    13,   138,   122,
     120,   122,    69,    95,    64,    74,   122,    76,   122,   149,
      95,   114,    17,   122,   120,    69,    95,   120,    95,   537,
      95,   149,   162,   163,    76,    94,    95,    95,   439,   121,
     170,    95,   698,   173,   162,   163,    52,    76,    95,   114,
     125,    46,   170,    95,   173,   114,   125,    99,   125,    95,
      66,    95,   192,    61,   121,   732,    95,   125,   114,   189,
      99,   125,   122,    68,   122,   742,   123,   121,   114,   122,
     114,   123,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   123,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     531,   554,     3,     1,   642,   114,   266,    17,   256,   257,
      95,   122,   272,   124,   216,   217,    94,   114,   119,    97,
      65,    22,   282,   101,   284,   285,   114,   287,   288,   114,
     290,   540,    30,   282,   114,    53,    46,   114,    56,   208,
     209,   210,   122,     2,   124,   305,   122,   114,   124,    20,
     114,    10,    11,   313,    64,   114,   258,   259,    68,    18,
     320,   114,    71,    64,   266,   313,   120,   122,   328,   629,
     330,   331,    31,   633,   122,    74,   459,    76,    76,   122,
      97,    76,    53,   285,   114,    56,   288,    95,    47,   123,
     401,   402,     7,   138,   120,   114,    94,    95,   123,    95,
     114,    30,    23,   123,   149,    64,   417,   418,    95,    68,
     421,   422,   123,    74,    76,   624,   114,   162,   163,   123,
     629,   123,    95,    94,   633,   170,    97,    94,   330,   123,
     101,   123,    46,   393,   394,   395,   396,   397,   398,   399,
     451,    20,   125,    76,   123,   405,   406,    23,   408,   123,
      95,    21,   120,   413,    21,   415,   125,   116,    94,   419,
     125,    95,    97,   123,   122,    70,   641,   335,    16,   512,
     455,   644,   686,   645,    53,   529,   712,    56,   559,     2,
     698,   684,   442,   306,   661,   445,   446,    10,    11,   408,
     699,   150,   394,   442,   396,    18,   456,    -1,    -1,   708,
      -1,    -1,    -1,   514,    -1,    -1,    -1,   456,    31,   469,
      -1,   256,   257,    -1,    -1,    94,    -1,    96,    97,    -1,
     469,    -1,   101,   732,    47,   475,    -1,    -1,    -1,   108,
     189,    -1,    -1,   742,    -1,    -1,   496,    -1,   117,   499,
      -1,    64,    -1,    -1,    -1,    68,     3,     4,     5,     6,
       7,   511,     9,    -1,    -1,    -1,    -1,   517,    -1,   519,
      -1,    -1,   522,    -1,   524,    22,    -1,   527,   313,    -1,
      27,    28,    29,    -1,    31,   320,    -1,    -1,    -1,    36,
      37,    -1,    39,   328,    41,    42,    -1,   547,    -1,    -1,
      47,    -1,    49,   116,   554,   555,   556,    -1,   547,     3,
      -1,    -1,    59,    60,    61,    62,   265,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
     631,    -1,    -1,    -1,    -1,   284,    -1,   150,   287,    -1,
      34,   290,    -1,    -1,    91,    -1,    -1,    30,    -1,    -1,
     600,   601,    46,   603,   604,   605,   606,    51,    -1,    -1,
     610,   611,   109,   613,    -1,   615,   616,    -1,   618,    -1,
      64,   406,    55,   408,    68,   122,   189,   124,   628,   629,
      -1,    -1,   331,   633,    -1,   635,   335,    70,   638,    -1,
      -1,    -1,    17,    76,    -1,    -1,    -1,   647,   648,   649,
     650,   651,   652,   653,   654,    30,    -1,    -1,    33,    -1,
      -1,    -1,    95,   663,   664,   665,    -1,    -1,    -1,   669,
      45,    46,   672,    -1,    -1,    -1,   665,    -1,    -1,    54,
      -1,   114,    -1,     2,    -1,    -1,    -1,   120,    -1,    64,
      -1,    10,    11,    -1,   694,   695,   696,   697,    -1,    18,
      -1,    -1,   265,    -1,    20,    -1,    -1,    -1,   708,   709,
     710,    -1,    31,    -1,    -1,   715,   716,   717,   718,   719,
     720,   284,    -1,    -1,   287,    -1,   425,   290,    47,    -1,
      -1,   731,   732,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,    -1,   742,    -1,     2,    64,    -1,    -1,    -1,    68,
      -1,    -1,    10,    11,    -1,     2,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    10,    11,    -1,    -1,    -1,   331,   554,
      -1,    18,   335,    31,    -1,    -1,   475,    -1,    94,    -1,
      96,    97,    -1,    -1,    31,   101,    -1,    -1,    -1,    47,
      30,   107,   108,    -1,    -1,    -1,   112,   116,    -1,    -1,
      47,   117,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    -1,    20,    -1,    55,    -1,    64,   517,    -1,
     519,    68,    -1,   522,    -1,   524,    -1,   526,    -1,    -1,
      70,   150,    -1,    -1,    -1,    -1,    76,    -1,    -1,   624,
      -1,    -1,    30,    16,    17,    -1,    53,   546,    -1,    56,
      -1,    24,    25,    26,    -1,    95,   555,   556,   116,    32,
      -1,    34,   425,    -1,    -1,    -1,    -1,    55,    -1,   116,
     189,    -1,    -1,    46,   114,    48,    -1,     2,    51,    -1,
     120,    -1,    70,    -1,   669,    10,    11,    94,    76,    96,
      97,    64,   150,    18,   101,    68,    -1,    -1,    -1,    -1,
     107,   108,    -1,   150,    -1,   112,    31,    95,   115,   116,
     117,   610,   475,    -1,   699,    -1,   615,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,   114,    -1,    -1,    -1,
      -1,   189,   120,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,   114,   189,    68,    -1,    -1,   265,   732,   121,    -1,
      -1,    -1,    -1,    -1,   517,    -1,   519,   742,    -1,   522,
      -1,   524,    -1,   526,    -1,   284,    -1,    -1,   287,    16,
      17,   290,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,   546,    -1,    32,    -1,    34,    -1,    -1,
      -1,   116,   555,   556,    -1,   694,   695,   696,   697,    46,
      -1,    48,    -1,    -1,    51,    -1,    -1,   265,    -1,    -1,
     709,   710,   331,    -1,    -1,    -1,   335,    64,   265,    -1,
      -1,    68,    -1,    -1,    -1,   150,   284,    20,    -1,   287,
      -1,    -1,   290,    -1,    -1,    -1,    -1,   284,    -1,    -1,
     287,    -1,    -1,   290,    -1,    -1,    -1,   610,    -1,    -1,
      -1,    -1,   615,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    56,   189,    -1,    -1,   114,    -1,    -1,
      -1,    -1,    -1,   331,    -1,    -1,    -1,   335,    -1,    -1,
      -1,    -1,     2,    -1,   331,    -1,    -1,    13,   335,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    90,    18,    92,
      93,    94,    -1,    96,    97,    -1,   425,   100,   101,   102,
     103,    31,   105,   106,   107,   108,    -1,   110,    -1,   112,
      -1,    -1,   115,   116,   117,    -1,    -1,    47,    -1,    -1,
      -1,   694,   695,   696,   697,    -1,    -1,    -1,    -1,    -1,
     265,    -1,    -1,    -1,    64,    -1,   709,   710,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,   284,
      -1,    -1,   287,    -1,    -1,   290,    -1,   425,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   517,    -1,
     519,    -1,    -1,   522,   130,   524,   331,   526,    -1,    -1,
     335,    -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,   546,   475,    -1,
     150,    -1,    -1,   159,    -1,    -1,   555,   556,    -1,    -1,
      -1,   167,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,   517,
      -1,   519,    -1,    -1,   522,    -1,   524,    -1,   526,   189,
     517,    -1,   519,    -1,    -1,   522,    -1,   524,    53,   526,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,   546,    -1,
      -1,   610,    -1,    -1,     2,    -1,   615,   555,   556,   546,
     425,    -1,    10,    11,    -1,    -1,    -1,    -1,   555,   556,
      18,    -1,    -1,    -1,    -1,    90,    -1,    -1,    93,    94,
      -1,    96,    97,    31,    -1,   100,   101,   102,   103,    -1,
     105,   106,   107,   108,    -1,   110,    -1,   112,    -1,    47,
     115,   116,   117,    -1,    -1,   265,    -1,    -1,    -1,    -1,
     475,    -1,   610,    -1,    -1,    -1,    64,   615,    -1,    -1,
      68,    -1,    -1,   610,   284,    -1,    -1,   287,   615,    -1,
     290,    -1,    -1,    -1,    -1,   694,   695,   696,   697,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     709,   710,   517,    -1,   519,    -1,    -1,   522,    -1,   524,
      -1,   526,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,   331,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,
      -1,   546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     555,   556,    -1,    -1,    -1,    -1,   694,   695,   696,   697,
      -1,    -1,   150,    -1,    -1,    -1,    -1,   694,   695,   696,
     697,   709,   710,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   709,   710,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   401,   402,    -1,    -1,    -1,
      -1,   189,    -1,    -1,    -1,   610,    -1,    -1,    -1,    -1,
     615,   417,   418,    -1,    -1,   421,   422,    -1,     2,    -1,
      -1,    -1,    -1,    -1,    -1,   425,    10,    11,    -1,    -1,
      -1,    -1,    12,    -1,    18,    -1,    16,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,   451,    -1,    31,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,   265,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,   694,
     695,   696,   697,    -1,    -1,    -1,   284,    -1,    -1,   287,
      -1,    -1,   290,    -1,   709,   710,    86,    -1,   514,    -1,
     516,    -1,    20,    -1,    -1,   521,    -1,   517,    -1,   519,
      -1,    -1,   522,    -1,   524,    -1,   526,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   331,    -1,    53,   546,   335,    56,    -1,
      -1,    -1,    -1,    -1,   134,   555,   556,    -1,   138,    -1,
      -1,   141,    -1,   143,    -1,    -1,   150,    -1,    -1,   149,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,   163,    -1,    -1,    94,    -1,    96,    97,
     170,    -1,   100,   101,   102,   103,   176,   105,   106,   107,
     108,    -1,   110,    -1,   112,   189,    -1,   115,   116,   117,
     610,    -1,    -1,    -1,    -1,   615,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,   631,    -1,    -1,   208,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,    -1,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
     656,   657,    -1,   659,   660,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   673,    -1,    -1,
      -1,    -1,   678,   679,    -1,    -1,   256,   257,    -1,    -1,
      -1,   265,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,
      -1,    -1,    -1,    -1,   694,   695,   696,   697,    -1,   279,
     284,    -1,    -1,   287,    -1,    -1,   712,    -1,    -1,   709,
     710,    -1,    -1,    -1,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,   517,
      -1,   519,    -1,   313,   522,    -1,   524,    -1,   526,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,    -1,    -1,
      -1,   335,    -1,    -1,    -1,    -1,    -1,     1,   546,     3,
       4,     5,     6,     7,    -1,     9,    -1,   555,   556,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    31,    -1,    -1,
      -1,    -1,    36,    37,    -1,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,
      -1,    -1,   610,    -1,    -1,    -1,    -1,   615,   408,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   425,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    98,    -1,   436,    -1,    -1,   439,
      -1,    -1,    -1,   107,    -1,   109,    -1,   111,   112,    -1,
      -1,    -1,    -1,   117,    -1,    -1,   120,    -1,   122,   459,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   475,    -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   694,   695,   696,   697,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   709,   710,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   512,   517,    -1,   519,    -1,    -1,   522,    -1,
     524,    -1,   526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   555,   556,    -1,    -1,     0,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,   575,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
      -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   644,    90,    91,    92,    93,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,    -1,   111,   112,    -1,   114,
      -1,    -1,   117,    -1,    -1,   120,    -1,   122,    -1,   124,
     680,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    -1,    66,    67,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,   114,   115,   116,   117,    -1,    -1,
     120,   121,   122,     1,   124,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    -1,    66,    67,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,    -1,   111,   112,   113,   114,    -1,    -1,   117,
      -1,    -1,   120,   121,   122,     1,   124,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,    -1,   111,   112,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,     1,   124,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,    -1,   111,   112,    -1,
     114,    -1,    -1,   117,    -1,    -1,   120,   121,   122,     1,
     124,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    -1,    66,    67,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,    -1,   111,
     112,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,     1,   124,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    -1,    66,    67,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
      -1,   111,   112,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,   121,   122,     1,   124,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    -1,    66,    67,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,    -1,   111,   112,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,    -1,   122,     1,   124,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,    -1,   111,   112,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,    -1,   122,     1,   124,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,    -1,   111,   112,    -1,
     114,    -1,    -1,   117,    -1,    -1,   120,    -1,   122,     1,
     124,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    -1,    66,    67,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,    -1,   111,
     112,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,    -1,
     122,     1,   124,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    -1,    66,    67,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
      -1,   111,   112,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,    -1,   122,     1,   124,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    46,    47,
      -1,    49,    50,    51,    52,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    -1,    66,    67,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,    -1,   111,   112,    -1,   114,    -1,    -1,   117,
      -1,    -1,   120,    -1,   122,     1,   124,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,    -1,   111,   112,    -1,   114,    -1,
      -1,   117,    -1,    -1,   120,    -1,   122,     1,   124,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,    -1,   111,   112,    -1,
     114,    -1,    -1,   117,    -1,    -1,   120,    -1,   122,     1,
     124,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      52,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    -1,    66,    67,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,    -1,   111,
     112,    -1,   114,    -1,    -1,   117,    -1,    -1,   120,    -1,
     122,     1,   124,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    -1,    66,    67,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
      -1,   111,   112,    -1,   114,    -1,    -1,   117,    -1,    -1,
     120,    -1,   122,     1,   124,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    97,
      98,    -1,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,   115,   116,   117,
      -1,    -1,   120,    -1,   122,     1,   124,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    -1,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    97,    98,    -1,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,   115,
     116,   117,    -1,    -1,   120,    -1,   122,     1,   124,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    31,    -1,    -1,
      -1,    -1,    36,    37,    -1,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,     3,     4,
       5,     6,     7,   107,     9,   109,    -1,   111,   112,    -1,
      -1,    -1,    -1,   117,    -1,    -1,   120,    22,   122,    -1,
     124,    -1,    27,    28,    29,    -1,    31,    -1,    -1,    -1,
      -1,    36,    37,    -1,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,     3,     4,     5,
       6,     7,   107,     9,   109,    -1,   111,   112,   113,    -1,
      -1,    -1,   117,    -1,    -1,   120,    22,   122,    -1,   124,
     125,    27,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    98,    99,    -1,    -1,     3,     4,     5,     6,
       7,   107,     9,   109,    -1,   111,   112,   113,    -1,    -1,
      -1,   117,    -1,    -1,   120,    22,   122,    -1,   124,    -1,
      27,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,    36,
      37,    -1,    39,    -1,    41,    42,    -1,    -1,    -1,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,     3,     4,     5,     6,     7,
     107,     9,   109,    -1,   111,   112,    -1,    -1,    -1,    -1,
     117,    -1,    -1,   120,    22,   122,    -1,   124,    -1,    27,
      28,    29,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,     3,     4,     5,     6,     7,   107,
       9,   109,    -1,   111,   112,   113,    -1,    -1,    -1,   117,
      -1,    -1,   120,    22,   122,    -1,   124,    -1,    27,    28,
      29,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,     3,     4,     5,     6,     7,   107,     9,
     109,    -1,   111,   112,    -1,   114,    -1,    -1,   117,    -1,
      -1,   120,    22,   122,    -1,   124,    -1,    27,    28,    29,
      -1,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,     3,     4,     5,     6,     7,   107,     9,   109,
      -1,   111,   112,   113,    -1,    -1,    -1,   117,    -1,    -1,
     120,    22,   122,    -1,   124,    -1,    27,    28,    29,    -1,
      31,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,     3,     4,     5,     6,     7,   107,     9,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,
      22,   122,    -1,   124,    -1,    27,    28,    29,    -1,    31,
      -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
       3,     4,     5,     6,     7,   107,     9,   109,    -1,   111,
     112,   113,    -1,    -1,    -1,   117,    -1,    -1,   120,    22,
     122,    -1,   124,    -1,    27,    28,    29,    -1,    31,    -1,
      -1,    -1,    -1,    36,    37,    -1,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,     3,
       4,     5,     6,     7,   107,     9,   109,    -1,   111,   112,
     113,    -1,    -1,    -1,   117,    -1,    -1,   120,    22,   122,
      -1,   124,    -1,    27,    28,    29,    -1,    31,    -1,    -1,
      -1,    -1,    36,    37,    -1,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,     3,     4,
       5,     6,     7,   107,     9,   109,    -1,   111,   112,   113,
      -1,    -1,    -1,   117,    -1,    -1,   120,    22,   122,    -1,
     124,    -1,    27,    28,    29,    -1,    31,    -1,    -1,    -1,
      -1,    36,    37,    -1,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,     3,     4,     5,
       6,     7,   107,     9,   109,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,    -1,    -1,   120,    22,   122,    -1,   124,
      -1,    27,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,     3,     4,     5,     6,
       7,   107,     9,   109,    -1,   111,   112,    -1,    -1,    -1,
      -1,   117,    -1,    -1,   120,    22,   122,    -1,   124,    -1,
      27,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,    36,
      37,    -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,     3,     4,     5,     6,     7,
     107,     9,   109,    -1,   111,   112,    -1,    -1,    -1,    -1,
     117,    -1,    -1,   120,    22,   122,    -1,   124,    -1,    27,
      28,    29,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,     3,     4,     5,     6,     7,   107,
       9,   109,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,
      -1,    -1,   120,    22,   122,    -1,   124,    -1,    27,    28,
      29,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,     3,     4,     5,     6,     7,   107,     9,
     109,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,    -1,
      -1,   120,    22,   122,    -1,   124,    -1,    27,    28,    29,
      -1,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,     3,     4,     5,     6,     7,   107,     9,   109,
      -1,   111,   112,    -1,    -1,    -1,    -1,   117,    -1,    -1,
     120,    22,   122,    -1,   124,    -1,    27,    28,    29,    -1,
      31,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,     3,     4,     5,     6,     7,   107,     9,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,
      22,   122,    -1,   124,    -1,    27,    28,    29,    -1,    31,
      -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
       3,     4,     5,     6,     7,   107,     9,   109,    -1,   111,
     112,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    22,
     122,    -1,   124,    -1,    27,    28,    29,    -1,    31,    -1,
      -1,    -1,    -1,    36,    37,    -1,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,     3,
       4,     5,     6,     7,   107,     9,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    22,   122,
      -1,   124,    -1,    27,    28,    29,    -1,    31,    -1,    -1,
      -1,    -1,    36,    37,    -1,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    12,    -1,    90,    91,    92,    93,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,   107,     9,   109,    -1,   111,   112,    -1,
      -1,    -1,    -1,   117,    -1,    -1,   120,    22,   122,    -1,
     124,    -1,    27,    28,    29,    53,    31,    -1,    56,    -1,
      -1,    36,    37,    -1,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    90,    -1,    92,    93,    94,    -1,    96,    97,
      98,    76,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     8,   110,   111,   112,    12,    91,   115,   116,   117,
      95,    -1,    -1,    20,    99,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,   122,   123,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    75,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    90,    -1,    92,    93,    94,    -1,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,   110,   111,   112,    -1,    -1,   115,   116,
     117,    53,    -1,    -1,    56,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    75,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    90,    -1,
      92,    93,    94,    -1,    96,    97,    98,    -1,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,   110,   111,
     112,    -1,    -1,   115,   116,   117,    53,     3,    -1,    56,
      -1,    -1,     8,   125,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    92,    93,    94,    -1,    96,
      97,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,   110,   111,   112,    20,    -1,   115,   116,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      76,    77,    78,    79,    80,    81,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    53,
      96,    -1,    56,    -1,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,    -1,    -1,   115,
     116,   117,   118,   119,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      94,    -1,    96,    97,    -1,    -1,    -1,   101,   102,   103,
      -1,   105,   106,   107,   108,    -1,    -1,    -1,   112,    -1,
      -1,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    30,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,    -1,    56,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    30,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,   120,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    30,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,   120,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,   120,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,   120,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,   120,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,   120,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,   120,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,   120,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,   120,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,   120,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,   120,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,   120,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,   120,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,   120,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,   120,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,   120,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    30,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
     119,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    30,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
     114,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    23,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,    75,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    -1,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,    75,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      -1,   115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    -1,    96,    97,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,    -1,    20,   115,   116,   117,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    -1,   100,   101,   102,   103,
      75,   105,   106,   107,   108,    -1,   110,   111,   112,    -1,
      20,   115,   116,   117,    -1,    90,    -1,    92,    93,    94,
      -1,    96,    97,    -1,    -1,   100,   101,   102,   103,    -1,
     105,   106,   107,   108,    20,   110,   111,   112,    -1,    -1,
     115,   116,   117,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    92,    93,    94,    -1,    96,    97,    -1,    -1,
     100,   101,   102,   103,    -1,   105,   106,   107,   108,    -1,
     110,    -1,   112,    -1,    90,   115,   116,   117,    94,    -1,
      96,    97,    -1,    -1,   100,   101,   102,   103,    -1,   105,
     106,   107,   108,    -1,   110,    -1,   112,    -1,    -1,   115,
     116,   117,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,    -1,   122,    -1,
     124
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   130,   131,     0,     1,     3,     4,     5,     6,     7,
       9,    10,    11,    14,    15,    16,    18,    19,    21,    22,
      24,    25,    26,    27,    28,    29,    31,    32,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    47,    48,    49,
      50,    55,    57,    58,    59,    60,    61,    62,    64,    67,
      71,    72,    75,    90,    91,    92,    93,    98,   107,   109,
     111,   112,   114,   117,   120,   122,   124,   132,   134,   135,
     136,   137,   139,   141,   142,   143,   145,   146,   149,   150,
     151,   155,   158,   161,   162,   181,   182,   183,   186,   187,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   135,   215,   135,   138,   139,   120,   137,     9,    27,
      28,    29,    62,   120,   124,   158,   206,   210,   213,   214,
     215,   216,   218,   219,    64,   138,   215,   135,   122,   139,
     139,    64,   139,    46,    73,   144,   215,   215,   215,   122,
     139,   159,   122,   139,   188,   189,   135,   215,   215,   215,
     215,     7,   122,   122,   114,   215,   215,   215,   215,    61,
     122,   135,   215,    57,   139,   184,   113,   177,   199,   215,
     215,   215,   215,   215,   215,   215,   215,   121,   132,   133,
     199,    65,    99,   177,   200,   201,   215,   199,    48,   135,
      13,    52,    66,   152,    34,    51,   173,   139,    17,    46,
      68,   114,   119,     8,    12,    20,    53,    56,    75,    90,
      92,    93,    94,    96,    97,    98,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   110,   111,   112,   115,   116,
     117,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   118,   122,   124,    53,    56,
     114,   215,   215,   215,   199,    21,    30,   137,   140,   184,
     114,   114,    71,   139,   177,   203,   204,   205,   215,   120,
     184,   139,   122,   140,    21,    30,   140,    21,    30,   140,
      63,   137,   203,   135,   122,   168,    65,   122,   139,   190,
     191,     1,    94,   193,   194,    30,    95,   140,   203,   203,
     114,   120,   140,   122,   203,   199,    76,   185,   114,   139,
      95,   114,   140,   114,   121,   132,   121,   215,    95,   123,
      30,   125,     7,   139,   163,   120,   188,   188,   188,   215,
     215,   215,   215,   144,   215,   144,   215,   215,   215,   215,
     215,   215,   215,    22,    64,   139,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   203,   203,   144,
     215,   144,   215,    21,    30,    21,    30,    63,    30,   125,
     135,   144,   215,   114,   215,    74,    76,   123,    95,   139,
     156,   157,   114,    30,   199,    29,   215,   144,   215,    29,
     215,   144,   215,   135,   215,    23,   123,    17,    30,    33,
      45,    46,    54,    64,   169,   170,   171,   160,   191,    95,
     123,     1,   124,   195,   207,    74,    76,   192,   215,   189,
     123,   123,   147,   203,   123,   120,   124,   195,   207,    95,
     177,   215,   123,   200,   202,   144,   215,   135,   215,    94,
     153,    46,   165,   172,   121,   133,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   123,   125,    29,   144,   215,    29,
     144,   215,   144,   215,   140,   140,   114,   215,   177,   215,
     205,    76,    95,   121,   215,   123,   215,    21,   140,    21,
     140,   215,    21,   140,    21,   140,    23,    23,   135,    95,
     123,   122,   139,    17,    46,    64,    68,   174,   123,   191,
      94,   194,   199,   215,   215,   140,    44,    69,   121,   148,
     123,   147,   199,   184,    95,   125,   125,   199,   120,   164,
       8,    12,    76,    77,    78,    79,    80,    81,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    96,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     112,   115,   116,   117,   118,   119,   139,   166,   121,   215,
      21,    21,   215,    21,    21,   125,   125,   215,   157,   140,
      63,    29,   215,    29,   215,    63,    29,   215,    29,   215,
     135,   215,   170,   191,    94,   198,   194,   192,    30,   125,
     135,   199,   121,   125,   200,    29,   135,   215,    29,   135,
     215,   154,   174,   139,    97,   122,   167,    63,    29,    29,
      63,    29,    29,    29,    29,   215,   215,   215,   215,   215,
     215,   123,    22,    59,    62,   124,   177,   197,   207,    99,
     179,   192,    70,   180,   215,   195,   207,   140,   215,   215,
      64,   121,   134,   142,   194,   139,   166,   169,   215,   215,
     215,   215,   215,   215,    63,    63,    63,    63,   198,   125,
     199,   177,   178,   215,   215,   137,   141,   176,   125,    63,
      63,   142,   180,   167,   123,    63,    63,    63,    63,    63,
      63,   215,   215,   215,   215,   179,   192,   177,   196,   197,
     207,    30,   125,   207,   215,   215,   114,   175,   176,   215,
     196,   197,   125,   196
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 182 "chapel.ypp"
    { (void)(yylsp[(1) - (1)]).first_line; yyblock = (yyval.pblockstmt); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 187 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 188 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pblockstmt)); resetTempID(); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 194 "chapel.ypp"
    { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[(1) - (2)].vpch), (yyvsp[(2) - (2)].pblockstmt) ); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 199 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->insertAtTail((yyvsp[(1) - (1)].pblockstmt)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 200 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 205 "chapel.ypp"
    { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[(2) - (2)].pch))); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 206 "chapel.ypp"
    { (yyvsp[(1) - (3)].vpch)->add(astr((yyvsp[(3) - (3)].pch))); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 219 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (2)].pexpr)); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 220 "chapel.ypp"
    { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 221 "chapel.ypp"
    { (yyval.pblockstmt) = buildBeginStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 222 "chapel.ypp"
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[(2) - (3)].pch)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 223 "chapel.ypp"
    { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[(2) - (2)].pblockstmt));  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 224 "chapel.ypp"
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[(2) - (3)].pch)); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 225 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_DELETE, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 226 "chapel.ypp"
    { (yyval.pblockstmt) = buildLabelStmt((yyvsp[(2) - (3)].pch), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 227 "chapel.ypp"
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 228 "chapel.ypp"
    { (yyval.pblockstmt) = buildOnStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 229 "chapel.ypp"
    { (yyval.pblockstmt) = buildSerialStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 230 "chapel.ypp"
    { (yyval.pblockstmt) = buildSyncStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 231 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 232 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 233 "chapel.ypp"
    { printf("syntax error"); clean_exit(1); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 237 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "="); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 238 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "+="); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 239 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "-="); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 240 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "*="); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 241 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "/="); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 242 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "%="); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 243 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "**="); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 244 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "&="); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 245 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "|="); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 246 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "^="); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 247 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), ">>="); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 248 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "<<="); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 249 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "<=>"); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 250 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 251 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 263 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 264 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 268 "chapel.ypp"
    { (yyval.pch) = NULL; }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 273 "chapel.ypp"
    { (yyval.pch) = astr(yytext); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 277 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (2)].pblockstmt); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 278 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(1) - (1)].pblockstmt); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 282 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, new SymExpr(gVoid)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 283 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 287 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 296 "chapel.ypp"
    { (yyval.pblockstmt) = buildDoWhileLoopStmt((yyvsp[(4) - (5)].pexpr), (yyvsp[(2) - (5)].pblockstmt)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 297 "chapel.ypp"
    { (yyval.pblockstmt) = buildWhileDoLoopStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 298 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 299 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt), true); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 300 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 301 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveLoopStmt((yyvsp[(3) - (5)].pcallexpr), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 302 "chapel.ypp"
    { (yyval.pblockstmt) = buildForLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 303 "chapel.ypp"
    { (yyval.pblockstmt) = buildForLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt), false, true); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 304 "chapel.ypp"
    { (yyval.pblockstmt) = buildForLoopStmt(NULL, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 305 "chapel.ypp"
    { (yyval.pblockstmt) = buildForLoopStmt(NULL, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt), false, true); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 306 "chapel.ypp"
    { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[(3) - (6)].pch), (yyvsp[(5) - (6)].pexpr), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 307 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 308 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt), true); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 309 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 311 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), new BlockStmt((yyvsp[(6) - (6)].pblockstmt)));
    }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 317 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), new BlockStmt((yyvsp[(6) - (6)].pblockstmt)), true);
    }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 323 "chapel.ypp"
    {
      if ((yyvsp[(2) - (4)].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), new BlockStmt((yyvsp[(4) - (4)].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[(2) - (4)].pcallexpr)->get(1)->remove(), new BlockStmt((yyvsp[(4) - (4)].pblockstmt)));
    }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 332 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_tuple", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 336 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pblockstmt)); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 337 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 338 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pblockstmt), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 339 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(3) - (5)].pblockstmt), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 344 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pblockstmt))); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 348 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 349 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pexpr)); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 354 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[(2) - (3)].pcallexpr)), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 356 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 361 "chapel.ypp"
    { (yyval.pblockstmt) = buildTypeSelectStmt((yyvsp[(3) - (6)].pcallexpr), (yyvsp[(5) - (6)].pblockstmt)); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 368 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(3) - (7)].pch), (yyvsp[(2) - (7)].ptype), (yyvsp[(4) - (7)].pcallexpr), (yyvsp[(6) - (7)].pblockstmt), (yyvsp[(1) - (7)].flag), (yylsp[(1) - (7)]).comment));
      yylloc.comment = NULL; }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 373 "chapel.ypp"
    { (yyval.flag) = FLAG_UNKNOWN; }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 374 "chapel.ypp"
    { (yyval.flag) = FLAG_EXTERN; (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 378 "chapel.ypp"
    { (yyval.ptype) = new ClassType(CLASS_CLASS); (yyloc).comment = yylloc.comment; 
             yylloc.comment = NULL;}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 380 "chapel.ypp"
    { (yyval.ptype) = new ClassType(CLASS_RECORD); (yyloc).comment = yylloc.comment; 
             yylloc.comment = NULL;}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 382 "chapel.ypp"
    { (yyval.ptype) = new ClassType(CLASS_UNION); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 386 "chapel.ypp"
    { (yyval.pcallexpr) = NULL; }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 387 "chapel.ypp"
    { (yyval.pcallexpr) = (yyvsp[(2) - (2)].pcallexpr); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 392 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 394 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 396 "chapel.ypp"
    { (yyvsp[(1) - (3)].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[(2) - (3)].vpch), (yyvsp[(3) - (3)].pblockstmt))); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 401 "chapel.ypp"
    {
      EnumType* pdt = (yyvsp[(4) - (5)].penumtype);
      TypeSymbol* pst = new TypeSymbol((yyvsp[(2) - (5)].pch), pdt);
      (yyvsp[(4) - (5)].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 411 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyvsp[(1) - (1)].pdefexpr)->sym->type = (yyval.penumtype);
      (yyval.penumtype)->constants.insertAtTail((yyvsp[(1) - (1)].pdefexpr));
      (yyval.penumtype)->defaultValue = (yyvsp[(1) - (1)].pdefexpr)->sym;
    }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 418 "chapel.ypp"
    {
      (yyval.penumtype) = (yyvsp[(1) - (2)].penumtype);
    }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 422 "chapel.ypp"
    {
      (yyvsp[(1) - (3)].penumtype)->constants.insertAtTail((yyvsp[(3) - (3)].pdefexpr));
      (yyvsp[(3) - (3)].pdefexpr)->sym->type = (yyvsp[(1) - (3)].penumtype);
    }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 429 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[(1) - (1)].pch))); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 430 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[(1) - (3)].pch)), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 435 "chapel.ypp"
    {
      captureTokens = 1;
      captureString[0] = '\0';
    }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 440 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[(3) - (3)].pfnsymbol)->userString = astr(captureString);
    }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 445 "chapel.ypp"
    {
      (yyvsp[(3) - (8)].pfnsymbol)->retTag = (yyvsp[(5) - (8)].retTag);
      if ((yyvsp[(5) - (8)].retTag) == RET_VAR)
        USR_FATAL("'var' return types are not allowed in lambdas");
      if ((yyvsp[(5) - (8)].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[(5) - (8)].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[(6) - (8)].pexpr))
        (yyvsp[(3) - (8)].pfnsymbol)->retExprType = new BlockStmt((yyvsp[(6) - (8)].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[(7) - (8)].pexpr))
        (yyvsp[(3) - (8)].pfnsymbol)->where = new BlockStmt((yyvsp[(7) - (8)].pexpr));
      (yyvsp[(3) - (8)].pfnsymbol)->insertAtTail((yyvsp[(8) - (8)].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[(3) - (8)].pfnsymbol)));
    }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 465 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol(""); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 466 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol(""); (yyval.pfnsymbol)->addFlag(FLAG_INLINE); 
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 468 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol(""); (yyval.pfnsymbol)->addFlag(FLAG_EXPORT);  
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 470 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol((yyvsp[(2) - (2)].pch)); (yyval.pfnsymbol)->addFlag(FLAG_EXPORT);  
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 472 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol(""); (yyval.pfnsymbol)->addFlag(FLAG_EXTERN);  
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 474 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol((yyvsp[(2) - (2)].pch)); (yyval.pfnsymbol)->addFlag(FLAG_EXTERN);  
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 479 "chapel.ypp"
    {
      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString[0] = '\0';
    }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 485 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[(4) - (4)].pfnsymbol)->userString = astr(captureString);
    }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 492 "chapel.ypp"
    {
      FnSymbol* fn = (yyvsp[(4) - (9)].pfnsymbol);

      fn->copyFlags((yyvsp[(1) - (9)].pfnsymbol));
      // The user explicitly named this function (controls mangling).
      if ((yyvsp[(1) - (9)].pfnsymbol)->hasFlag(FLAG_EXPORT) || (yyvsp[(1) - (9)].pfnsymbol)->hasFlag(FLAG_EXTERN))
        fn->addFlag(FLAG_USER_NAMED);
      if (*(yyvsp[(1) - (9)].pfnsymbol)->name)
        fn->cname = (yyvsp[(1) - (9)].pfnsymbol)->name;

      if ((yyvsp[(2) - (9)].procIter) == ProcIter_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[(4) - (9)].pfnsymbol), (yyvsp[(6) - (9)].retTag), (yyvsp[(7) - (9)].pexpr), (yyvsp[(8) - (9)].pexpr), (yyvsp[(9) - (9)].pblockstmt), (yylsp[(1) - (9)]).comment);
      yylloc.comment = NULL;
    }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 516 "chapel.ypp"
    {
      (yyval.pfnsymbol) = (yyvsp[(3) - (3)].pfnsymbol);
      (yyval.pfnsymbol)->thisTag = (yyvsp[(1) - (3)].pt);
      (yyval.pfnsymbol)->name = astr((yyvsp[(2) - (3)].pch));
      (yyval.pfnsymbol)->cname = (yyval.pfnsymbol)->name;
      if ((yyvsp[(2) - (3)].pch)[0] == '~' && (yyvsp[(2) - (3)].pch)[1] != '\0')
        (yyval.pfnsymbol)->addFlag(FLAG_DESTRUCTOR);
    }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 525 "chapel.ypp"
    {
      (yyval.pfnsymbol) = (yyvsp[(5) - (5)].pfnsymbol);
      (yyval.pfnsymbol)->thisTag = (yyvsp[(1) - (5)].pt);
      (yyval.pfnsymbol)->name = astr((yyvsp[(4) - (5)].pch));
      (yyval.pfnsymbol)->cname = (yyval.pfnsymbol)->name;
      if ((yyvsp[(4) - (5)].pch)[0] == '~' && (yyvsp[(4) - (5)].pch)[1] != '\0')
        (yyval.pfnsymbol)->addFlag(FLAG_DESTRUCTOR);
      (yyval.pfnsymbol)->_this = new ArgSymbol((yyvsp[(1) - (5)].pt), "this", dtUnknown, new UnresolvedSymExpr((yyvsp[(2) - (5)].pch)));
      (yyval.pfnsymbol)->_this->addFlag(FLAG_ARG_THIS);
      (yyval.pfnsymbol)->insertFormalAtHead(new DefExpr((yyval.pfnsymbol)->_this));
      (yyval.pfnsymbol)->insertFormalAtHead(new DefExpr(new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken)));
    }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 541 "chapel.ypp"
    { (yyval.pch) = astr("~", (yyvsp[(2) - (2)].pch)); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 542 "chapel.ypp"
    { (yyval.pch) = "="; }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 543 "chapel.ypp"
    { (yyval.pch) = "&"; }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 544 "chapel.ypp"
    { (yyval.pch) = "|"; }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 545 "chapel.ypp"
    { (yyval.pch) = "^"; }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 546 "chapel.ypp"
    { (yyval.pch) = "~"; }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 547 "chapel.ypp"
    { (yyval.pch) = "=="; }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 548 "chapel.ypp"
    { (yyval.pch) = "!="; }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 549 "chapel.ypp"
    { (yyval.pch) = "<="; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 550 "chapel.ypp"
    { (yyval.pch) = ">="; }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 551 "chapel.ypp"
    { (yyval.pch) = "<"; }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 552 "chapel.ypp"
    { (yyval.pch) = ">"; }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 553 "chapel.ypp"
    { (yyval.pch) = "+"; }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 554 "chapel.ypp"
    { (yyval.pch) = "-"; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 555 "chapel.ypp"
    { (yyval.pch) = "*"; }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 556 "chapel.ypp"
    { (yyval.pch) = "/"; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 557 "chapel.ypp"
    { (yyval.pch) = "<<"; }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 558 "chapel.ypp"
    { (yyval.pch) = ">>"; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 559 "chapel.ypp"
    { (yyval.pch) = "%"; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 560 "chapel.ypp"
    { (yyval.pch) = "**"; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 561 "chapel.ypp"
    { (yyval.pch) = "!"; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 562 "chapel.ypp"
    { (yyval.pch) = "by"; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 563 "chapel.ypp"
    { (yyval.pch) = "#"; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 564 "chapel.ypp"
    { (yyval.pch) = "align"; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 565 "chapel.ypp"
    { (yyval.pch) = "+="; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 566 "chapel.ypp"
    { (yyval.pch) = "-="; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 567 "chapel.ypp"
    { (yyval.pch) = "*="; }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 568 "chapel.ypp"
    { (yyval.pch) = "/="; }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 569 "chapel.ypp"
    { (yyval.pch) = "%="; }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 570 "chapel.ypp"
    { (yyval.pch) = "**="; }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 571 "chapel.ypp"
    { (yyval.pch) = "&="; }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 572 "chapel.ypp"
    { (yyval.pch) = "|="; }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 573 "chapel.ypp"
    { (yyval.pch) = "^="; }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 574 "chapel.ypp"
    { (yyval.pch) = ">>="; }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 575 "chapel.ypp"
    { (yyval.pch) = "<<="; }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 576 "chapel.ypp"
    { (yyval.pch) = "<=>"; }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 577 "chapel.ypp"
    { (yyval.pch) = "<~>"; }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 581 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 582 "chapel.ypp"
    { (yyval.pfnsymbol) = (yyvsp[(2) - (3)].pfnsymbol); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 586 "chapel.ypp"
    { (yyval.pfnsymbol) = (yyvsp[(2) - (3)].pfnsymbol); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 590 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 591 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[(1) - (1)].pdefexpr)); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 592 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[(1) - (3)].pfnsymbol), (yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 597 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[(1) - (4)].pt), (yyvsp[(2) - (4)].pch), (yyvsp[(3) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr), NULL); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 599 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[(1) - (4)].pt), (yyvsp[(2) - (4)].pch), (yyvsp[(3) - (4)].pexpr), NULL, (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 601 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[(1) - (6)].pt), (yyvsp[(3) - (6)].pblockstmt), (yyvsp[(5) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 603 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 607 "chapel.ypp"
    { (yyval.pt) = INTENT_BLANK; }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 608 "chapel.ypp"
    { (yyval.pt) = INTENT_IN; }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 609 "chapel.ypp"
    { (yyval.pt) = INTENT_INOUT; }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 610 "chapel.ypp"
    { (yyval.pt) = INTENT_OUT; }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 611 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST; }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 612 "chapel.ypp"
    { (yyval.pt) = INTENT_PARAM; }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 613 "chapel.ypp"
    { (yyval.pt) = INTENT_REF; }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 614 "chapel.ypp"
    { (yyval.pt) = INTENT_TYPE; }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 618 "chapel.ypp"
    { (yyval.pt) = INTENT_BLANK; }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 619 "chapel.ypp"
    { (yyval.pt) = INTENT_PARAM; }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 623 "chapel.ypp"
    { (yyval.procIter) = ProcIter_PROC; }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 624 "chapel.ypp"
    { (yyval.procIter) = ProcIter_ITER; }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 628 "chapel.ypp"
    { (yyval.retTag) = RET_VALUE; }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 629 "chapel.ypp"
    { (yyval.retTag) = RET_VALUE; }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 630 "chapel.ypp"
    { (yyval.retTag) = RET_VAR; }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 631 "chapel.ypp"
    { (yyval.retTag) = RET_PARAM; }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 632 "chapel.ypp"
    { (yyval.retTag) = RET_TYPE; }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 636 "chapel.ypp"
    { (yyval.pblockstmt) = NULL; }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 642 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt((yyvsp[(1) - (1)].pblockstmt)); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 647 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[(2) - (2)].pch))); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 649 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 653 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 658 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 659 "chapel.ypp"
    { (yyvsp[(2) - (2)].pdefexpr)->sym->addFlag(FLAG_PARAM); (yyval.pexpr) = (yyvsp[(2) - (2)].pdefexpr); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 663 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 664 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 669 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[(2) - (4)].pch), new BlockStmt(), yyfilename, (yylsp[(1) - (4)]).comment))); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 671 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[(2) - (5)].pch), (yyvsp[(4) - (5)].pblockstmt), yyfilename, (yylsp[(1) - (5)]).comment))); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 676 "chapel.ypp"
    {(yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 681 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 683 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[(3) - (4)].pblockstmt)); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 685 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[(3) - (4)].pblockstmt)); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 690 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (2)].pch));
      var->addFlag(FLAG_TYPE_VARIABLE);
      DefExpr* def = new DefExpr(var, (yyvsp[(2) - (2)].pexpr));
      (yyval.pblockstmt) = buildChapelStmt(def);
    }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 697 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (4)].pch));
      var->addFlag(FLAG_TYPE_VARIABLE);
      DefExpr* def = new DefExpr(var, (yyvsp[(2) - (4)].pexpr));
      (yyvsp[(4) - (4)].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[(4) - (4)].pblockstmt));
    }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 707 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 708 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 709 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 714 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), (yyvsp[(1) - (4)].flag), FLAG_PARAM, (yylsp[(1) - (4)]).comment);
    }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 718 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), (yyvsp[(1) - (4)].flag), FLAG_CONST, (yylsp[(1) - (4)]).comment);
    }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 722 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), (yyvsp[(1) - (4)].flag), FLAG_UNKNOWN, (yylsp[(1) - (4)]).comment);
    }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 728 "chapel.ypp"
    { (yyval.flag) = FLAG_UNKNOWN; (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 729 "chapel.ypp"
    { (yyval.flag) = FLAG_CONFIG; (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 730 "chapel.ypp"
    { (yyval.flag) = FLAG_EXTERN; (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 736 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[(3) - (3)].pblockstmt)->body)
        (yyvsp[(1) - (3)].pblockstmt)->insertAtTail(expr->remove());
    }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 744 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[(1) - (3)].pch)), (yyvsp[(3) - (3)].pexpr), (yyvsp[(2) - (3)].pexpr))); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 746 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (4)].pch));
      var->addFlag(FLAG_ARRAY_ALIAS);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(var, (yyvsp[(4) - (4)].pexpr), (yyvsp[(2) - (4)].pexpr)));
    }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 752 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[(2) - (5)].pblockstmt), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pexpr)); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 757 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 759 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[(1) - (1)].pch))); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 761 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 766 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (1)].pexpr)); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 768 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (2)].pexpr)); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 770 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[(3) - (3)].pblockstmt)->insertAtHead((yyvsp[(1) - (3)].pexpr)), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 776 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 777 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 781 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 783 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 787 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 788 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 789 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 790 "chapel.ypp"
    {printf("bad type specification"); }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 795 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr)); 
    }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 799 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr)); 
    }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 803 "chapel.ypp"
    { 
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__buildDomainExpr", (yyvsp[(4) - (6)].pexpr)), (yyvsp[(6) - (6)].pexpr), (yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__buildDomainExpr", (yyvsp[(4) - (6)].pexpr)->copy()));
    }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 810 "chapel.ypp"
    {printf("bad array type specification"); clean_exit(1); }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 814 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 815 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 816 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pdefexpr); }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 821 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 823 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(2) - (4)].pcallexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 829 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 831 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(2) - (4)].pcallexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 833 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), (yyvsp[(2) - (6)].pcallexpr)); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 837 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 838 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 839 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pdefexpr); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 840 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_domain"); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 841 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr( "_singlevar"); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 842 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr( "_syncvar"); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 843 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 849 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 850 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pdefexpr)); }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 851 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 852 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 856 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 857 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 858 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pdefexpr); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 862 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 863 "chapel.ypp"
    { (yyval.pcallexpr) = buildOneTuple((yyvsp[(1) - (2)].pexpr)); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 864 "chapel.ypp"
    { (yyval.pcallexpr) = ((yyvsp[(3) - (3)].pcallexpr)->insertAtHead((yyvsp[(1) - (3)].pexpr)), (yyvsp[(3) - (3)].pcallexpr)); }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 868 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 869 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 873 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 878 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 879 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 883 "chapel.ypp"
    { (yyval.pexpr) = buildNamedActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 884 "chapel.ypp"
    { (yyval.pexpr) = buildNamedActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 885 "chapel.ypp"
    { (yyval.pexpr) = buildNamedAliasActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 886 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pdefexpr); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 891 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[(1) - (1)].pch)); }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 908 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 910 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 912 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 914 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 916 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[(4) - (5)].pcallexpr)); }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 918 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 920 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 925 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 927 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, false, true); }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 929 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 931 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr)); }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 933 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true); }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 935 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[(2) - (7)].pexpr), (yyvsp[(7) - (7)].pexpr), (yyvsp[(5) - (7)].pexpr)); }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 937 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 939 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, false, true); }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 941 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 943 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr)); }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 945 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true); }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 947 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (7)].pexpr), (yyvsp[(7) - (7)].pexpr), (yyvsp[(5) - (7)].pexpr)); }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 949 "chapel.ypp"
    {
      if ((yyvsp[(2) - (4)].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (4)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (4)].pexpr), NULL, true);
    }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 956 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, true);
    }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 962 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, false, true);
    }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 968 "chapel.ypp"
    {
      if ((yyvsp[(2) - (9)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (9)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr));
    }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 974 "chapel.ypp"
    {
      if ((yyvsp[(2) - (9)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (9)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true);
    }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 983 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(new DefExpr(buildIfExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)))); }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 987 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gNil); }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1003 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1009 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1014 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW, (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1019 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[(2) - (4)].pblockstmt), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 1035 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[(3) - (4)].pexpr)); }
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 1037 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_cast", (yyvsp[(3) - (3)].pexpr), (yyvsp[(1) - (3)].pexpr)); }
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 1039 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_range", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 1041 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_range", buildDotExpr("BoundedRangeType", "boundedLow"), (yyvsp[(1) - (2)].pexpr)); }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 1043 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_range", buildDotExpr("BoundedRangeType", "boundedHigh"), (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 1045 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_range", buildDotExpr("BoundedRangeType", "boundedNone")); }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1068 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1069 "chapel.ypp"
    { (yyval.pexpr) = buildSquareCallExpr((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 1070 "chapel.ypp"
    { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 1074 "chapel.ypp"
    { (yyval.pexpr) = buildDotExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pch)); }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1075 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[(1) - (3)].pexpr)); }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 1076 "chapel.ypp"
    { (yyval.pexpr) = buildDotExpr((yyvsp[(1) - (3)].pexpr), "_dom"); }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1083 "chapel.ypp"
    { (yyval.pexpr) = buildParenExpr((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1087 "chapel.ypp"
    { (yyval.pexpr) = buildIntLiteral(yytext); }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1088 "chapel.ypp"
    { (yyval.pexpr) = buildRealLiteral(yytext); }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1089 "chapel.ypp"
    { (yyval.pexpr) = buildImagLiteral(yytext); }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1090 "chapel.ypp"
    { (yyval.pexpr) = buildStringLiteral((yyvsp[(1) - (1)].pch)); }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1091 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1093 "chapel.ypp"
    {
      /* Transitional semantics for domain literals. After
       * release of 1.6 this production should simply be: 
       * $$ = new CallExpr("chpl__buildArrayLiteral", $2); */
      if( fNoWarnDomainLiteral ){    
        (yyval.pexpr) = new CallExpr("chpl__buildArrayLiteral", (yyvsp[(2) - (3)].pcallexpr));
      } else {
        (yyval.pexpr) = new CallExpr("chpl__buildArrayLiteralWarn", (yyvsp[(2) - (3)].pcallexpr));       
      }
    }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1106 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1107 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1108 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("*", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1109 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("/", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1110 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<<", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1111 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1112 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("%", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1113 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("==", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1114 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("!=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1115 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1116 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1117 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1118 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1119 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("&", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1120 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("|", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 1121 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("^", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 1122 "chapel.ypp"
    { (yyval.pexpr) = buildLogicalAndExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 1123 "chapel.ypp"
    { (yyval.pexpr) = buildLogicalOrExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 1124 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("**", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1125 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("by", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1126 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("align", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1127 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("#", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1129 "chapel.ypp"
    {
      if (strcmp(CHPL_TARGET_PLATFORM, "xmt")) {
        (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[(3) - (3)].pexpr), (yyvsp[(1) - (3)].pexpr));
      } else {
        (yyval.pexpr) = (yyvsp[(1) - (3)].pexpr);
      }
    }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1139 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1140 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1141 "chapel.ypp"
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[(2) - (2)].pexpr), '-'); }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1142 "chapel.ypp"
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[(2) - (2)].pexpr), '+'); }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1143 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("!", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1144 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("~", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1148 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1149 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr), true); }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1150 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1151 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr), true); }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1155 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1156 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr), true); }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1157 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1158 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr), true); }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1163 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1164 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1165 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1166 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1167 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1168 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1169 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
    break;



/* Line 1806 of yacc.c  */
#line 6851 "chapel.tab.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 1172 "chapel.ypp"


