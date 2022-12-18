/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "gram.y"


#define YYDEBUG 1
#define YYERROR_VERBOSE 1
#ifndef YYSTACK_USE_ALLOCA
#define YYSTACK_USE_ALLOCA 0
#endif

#include "syck.h"

void apply_seq_in_map( SyckParser *parser, SyckNode *n );

#define YYPARSE_PARAM parser
#define YYLEX_PARAM   parser

#define yyparse           syckparse
#define yylex(yylval)     sycklex(yylval, YYLEX_PARAM)
#define yyerror(_, error) syckerror(error)

#define NULL_NODE(parser, node) \
        SyckNode *node = syck_new_str( "", scalar_plain ); \
        if ( ((SyckParser *)parser)->taguri_expansion == 1 ) \
        { \
            node->type_id = syck_taguri( YAML_DOMAIN, "null", 4 ); \
        } \
        else \
        { \
            node->type_id = syck_strndup( "null", 4 ); \
        }

#line 102 "gram.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "gram.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_YAML_ANCHOR = 3,                /* YAML_ANCHOR  */
  YYSYMBOL_YAML_ALIAS = 4,                 /* YAML_ALIAS  */
  YYSYMBOL_YAML_TRANSFER = 5,              /* YAML_TRANSFER  */
  YYSYMBOL_YAML_TAGURI = 6,                /* YAML_TAGURI  */
  YYSYMBOL_YAML_ITRANSFER = 7,             /* YAML_ITRANSFER  */
  YYSYMBOL_YAML_WORD = 8,                  /* YAML_WORD  */
  YYSYMBOL_YAML_PLAIN = 9,                 /* YAML_PLAIN  */
  YYSYMBOL_YAML_BLOCK = 10,                /* YAML_BLOCK  */
  YYSYMBOL_YAML_DOCSEP = 11,               /* YAML_DOCSEP  */
  YYSYMBOL_YAML_IOPEN = 12,                /* YAML_IOPEN  */
  YYSYMBOL_YAML_INDENT = 13,               /* YAML_INDENT  */
  YYSYMBOL_YAML_IEND = 14,                 /* YAML_IEND  */
  YYSYMBOL_15_ = 15,                       /* '-'  */
  YYSYMBOL_16_ = 16,                       /* ':'  */
  YYSYMBOL_17_ = 17,                       /* '['  */
  YYSYMBOL_18_ = 18,                       /* ']'  */
  YYSYMBOL_19_ = 19,                       /* '{'  */
  YYSYMBOL_20_ = 20,                       /* '}'  */
  YYSYMBOL_21_ = 21,                       /* ','  */
  YYSYMBOL_22_ = 22,                       /* '?'  */
  YYSYMBOL_YYACCEPT = 23,                  /* $accept  */
  YYSYMBOL_doc = 24,                       /* doc  */
  YYSYMBOL_atom = 25,                      /* atom  */
  YYSYMBOL_ind_rep = 26,                   /* ind_rep  */
  YYSYMBOL_atom_or_empty = 27,             /* atom_or_empty  */
  YYSYMBOL_empty = 28,                     /* empty  */
  YYSYMBOL_indent_open = 29,               /* indent_open  */
  YYSYMBOL_indent_end = 30,                /* indent_end  */
  YYSYMBOL_indent_sep = 31,                /* indent_sep  */
  YYSYMBOL_indent_flex_end = 32,           /* indent_flex_end  */
  YYSYMBOL_word_rep = 33,                  /* word_rep  */
  YYSYMBOL_struct_rep = 34,                /* struct_rep  */
  YYSYMBOL_implicit_seq = 35,              /* implicit_seq  */
  YYSYMBOL_basic_seq = 36,                 /* basic_seq  */
  YYSYMBOL_top_imp_seq = 37,               /* top_imp_seq  */
  YYSYMBOL_in_implicit_seq = 38,           /* in_implicit_seq  */
  YYSYMBOL_inline_seq = 39,                /* inline_seq  */
  YYSYMBOL_in_inline_seq = 40,             /* in_inline_seq  */
  YYSYMBOL_inline_seq_atom = 41,           /* inline_seq_atom  */
  YYSYMBOL_implicit_map = 42,              /* implicit_map  */
  YYSYMBOL_top_imp_map = 43,               /* top_imp_map  */
  YYSYMBOL_complex_key = 44,               /* complex_key  */
  YYSYMBOL_complex_value = 45,             /* complex_value  */
  YYSYMBOL_complex_mapping = 46,           /* complex_mapping  */
  YYSYMBOL_in_implicit_map = 47,           /* in_implicit_map  */
  YYSYMBOL_basic_mapping = 48,             /* basic_mapping  */
  YYSYMBOL_inline_map = 49,                /* inline_map  */
  YYSYMBOL_in_inline_map = 50,             /* in_inline_map  */
  YYSYMBOL_inline_map_atom = 51            /* inline_map_atom  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   396

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   269


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,    15,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,     2,
       2,     2,     2,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    17,     2,    18,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    19,     2,    20,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    57,    61,    66,    71,    72,    75,    76,    81,
      86,    95,   101,   102,   105,   110,   114,   122,   127,   132,
     146,   147,   150,   153,   156,   157,   165,   170,   175,   183,
     187,   195,   208,   209,   219,   220,   221,   222,   223,   229,
     233,   239,   245,   250,   255,   260,   265,   269,   275,   279,
     284,   293,   297,   303,   307,   314,   315,   321,   326,   333,
     338,   343,   348,   353,   357,   363,   364,   370,   380,   397,
     398,   410,   418,   427,   435,   439,   445,   446,   455,   462
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "YAML_ANCHOR",
  "YAML_ALIAS", "YAML_TRANSFER", "YAML_TAGURI", "YAML_ITRANSFER",
  "YAML_WORD", "YAML_PLAIN", "YAML_BLOCK", "YAML_DOCSEP", "YAML_IOPEN",
  "YAML_INDENT", "YAML_IEND", "'-'", "':'", "'['", "']'", "'{'", "'}'",
  "','", "'?'", "$accept", "doc", "atom", "ind_rep", "atom_or_empty",
  "empty", "indent_open", "indent_end", "indent_sep", "indent_flex_end",
  "word_rep", "struct_rep", "implicit_seq", "basic_seq", "top_imp_seq",
  "in_implicit_seq", "inline_seq", "in_inline_seq", "inline_seq_atom",
  "implicit_map", "top_imp_map", "complex_key", "complex_value",
  "complex_mapping", "in_implicit_map", "basic_mapping", "inline_map",
  "in_inline_map", "inline_map_atom", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     250,   318,   -97,   318,   318,   374,   -97,   -97,   -97,   335,
     -97,   267,   232,     7,   -97,   -97,   192,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   374,
     374,   374,   352,   -97,   335,   335,   335,   384,   -97,   -97,
     -97,   212,   -97,    10,     0,   -97,   -97,   -97,    10,   -97,
      -4,   -97,   -97,   284,   284,   284,   -97,   335,   318,    30,
      30,   -97,    -2,    36,    -2,    16,   -97,    36,    30,   -97,
     -97,   -97,   384,   384,   384,   -97,   363,   301,   301,   301,
      -2,   335,   -97,   318,   -97,   318,   -97,   158,   -97,   -97,
     158,   -97,   -97,   158,   -97,   -97,   -97,    24,   -97,    30,
     -97,   -97,   -97,   -97,   -97,    26,   -97,   335,   -97,   158,
     -97,   -97,   -97,   -97,   -97,    24,    24,    24,    24,    24,
      24,   -97,   -97,   -97,   -97,   -97,   -97,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,    30,     0,     0,     0,    31,    32,    34,    15,
      20,     0,     0,     0,     2,     6,     0,     5,     7,    35,
      36,    37,    38,    10,    29,     8,    26,     9,    27,     0,
       0,     0,     0,    28,    15,    15,    15,    15,    12,     3,
      13,    15,    52,    55,     0,    53,    56,    75,    78,    79,
       0,    76,     1,     0,     0,     0,    21,    15,     0,     0,
      65,    48,     0,     0,     0,     0,    69,     0,     0,    19,
      17,    18,    15,    15,    15,    16,    15,    15,    15,    15,
       0,    15,    51,     0,    74,     0,    23,     0,    47,    64,
       0,    43,    60,     0,    45,    62,    41,     0,    24,     0,
      11,    33,    22,    39,    40,    50,    57,    15,    58,    72,
      14,    73,    54,    77,    65,    46,    63,    42,    59,    44,
      61,    66,    25,    49,    67,    68,    70,    71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,     8,    81,   -56,   109,    33,   -53,    74,   -54,
      -1,   -97,   -97,   -96,   -31,   -32,   -97,   -97,   -44,   -97,
      77,   -97,   -97,   -52,     9,    -6,   -97,   -97,   -29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    13,    38,    15,    39,    40,    16,   103,    99,   101,
      17,    18,    19,    61,    62,    63,    20,    44,    45,    21,
      64,    65,   125,    66,    67,    46,    22,    50,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      24,    96,    26,    28,    33,   100,    49,    52,    14,   123,
     104,   106,   102,   126,   108,    60,    84,    85,    82,    43,
      48,    83,    88,    91,    94,   111,    81,   110,    24,    26,
      28,    68,   107,    24,    26,    28,    33,    86,    32,   112,
      60,    57,    41,    86,    98,   122,    88,    91,    94,    86,
     102,   124,    24,    26,    28,   115,   113,   127,   117,     0,
       0,   119,    32,    32,    32,    32,    97,    41,    41,    41,
      76,    24,    26,    28,    41,    68,    24,    26,    28,    49,
       0,     0,    23,     0,    25,    27,   114,     0,     0,   114,
      41,    43,   114,    48,     0,     0,   116,    59,     0,   118,
       0,     0,   120,     0,     0,    76,    76,    76,   114,    76,
      41,    41,    41,     0,    41,    23,    25,    27,     0,     0,
      32,     0,    59,    32,     0,     0,    32,    87,    90,    93,
      89,    92,    95,     0,    23,    25,    27,   105,     0,     0,
      41,   109,    32,    69,    70,    71,    75,     0,     0,     0,
      80,    87,    90,    93,    89,    92,    95,     0,    23,    25,
      27,    29,     2,    30,    31,     5,     6,     7,     0,     0,
      10,   121,     0,    57,     0,     0,     0,     0,     0,     0,
      58,    69,    70,    71,     0,    80,    69,    70,    71,   105,
     109,   105,   109,   105,   109,    53,     2,    54,    55,     5,
       6,     7,     8,     0,    10,    56,     0,    57,     0,    11,
       0,    12,     0,     0,    58,    77,     2,    78,    79,    37,
       6,     7,     8,     0,    10,    56,     0,    57,     0,    11,
       0,    12,     0,     0,    58,     1,     2,     3,     4,     5,
       6,     7,     8,     0,    10,     0,     0,     0,     0,    11,
       0,    12,    47,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,     0,     0,    11,     0,    12,
       1,     2,     3,     4,     5,     6,     7,     8,     0,    10,
       0,     0,     0,     0,    11,    42,    12,    53,     2,    54,
      55,     5,     6,     7,     8,     0,    10,    86,     0,     0,
       0,    11,     0,    12,    77,     2,    78,    79,    37,     6,
       7,     8,     0,    10,    86,     0,     0,     0,    11,     0,
      12,     1,     2,     3,     4,     5,     6,     7,     8,     0,
      10,     0,     0,     0,     0,    11,     0,    12,    34,     2,
      35,    36,    37,     6,     7,     8,     0,    10,     0,     0,
       0,     0,    11,     0,    12,    29,     2,    30,    31,     5,
       6,     7,     0,     0,    10,    56,    72,     2,    73,    74,
      37,     6,     7,     0,     0,    10,    56,    29,     2,    30,
      31,     5,     6,     7,     0,     0,    10,    72,     2,    73,
      74,    37,     6,     7,     0,     0,    10
};

static const yytype_int8 yycheck[] =
{
       1,    57,     3,     4,     5,    59,    12,     0,     0,   105,
      63,    64,    14,   109,    67,    16,    20,    21,    18,    11,
      12,    21,    53,    54,    55,    81,    16,    80,    29,    30,
      31,    32,    16,    34,    35,    36,    37,    13,     5,    83,
      41,    15,     9,    13,    14,    99,    77,    78,    79,    13,
      14,   107,    53,    54,    55,    87,    85,   109,    90,    -1,
      -1,    93,    29,    30,    31,    32,    58,    34,    35,    36,
      37,    72,    73,    74,    41,    76,    77,    78,    79,    85,
      -1,    -1,     1,    -1,     3,     4,    87,    -1,    -1,    90,
      57,    83,    93,    85,    -1,    -1,    87,    16,    -1,    90,
      -1,    -1,    93,    -1,    -1,    72,    73,    74,   109,    76,
      77,    78,    79,    -1,    81,    34,    35,    36,    -1,    -1,
      87,    -1,    41,    90,    -1,    -1,    93,    53,    54,    55,
      53,    54,    55,    -1,    53,    54,    55,    63,    -1,    -1,
     107,    67,   109,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    77,    78,    79,    77,    78,    79,    -1,    77,    78,
      79,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    97,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    72,    73,    74,    -1,    76,    77,    78,    79,   115,
     116,   117,   118,   119,   120,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,    17,
      -1,    19,    20,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    19,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    17,    -1,    19,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    17,    -1,
      19,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    -1,    -1,    -1,    17,    -1,    19,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    -1,    17,    -1,    19,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    19,    24,    25,    26,    29,    33,    34,    35,
      39,    42,    49,    26,    33,    26,    33,    26,    33,     3,
       5,     6,    29,    33,     3,     5,     6,     7,    25,    27,
      28,    29,    18,    25,    40,    41,    48,    20,    25,    48,
      50,    51,     0,     3,     5,     6,    13,    15,    22,    26,
      33,    36,    37,    38,    43,    44,    46,    47,    33,    28,
      28,    28,     3,     5,     6,    28,    29,     3,     5,     6,
      28,    16,    18,    21,    20,    21,    13,    31,    37,    43,
      31,    37,    43,    31,    37,    43,    27,    25,    14,    31,
      32,    32,    14,    30,    30,    31,    30,    16,    30,    31,
      30,    27,    41,    51,    33,    38,    47,    38,    47,    38,
      47,    31,    32,    36,    27,    45,    36,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    23,    24,    24,    24,    25,    25,    26,    26,    26,
      26,    26,    27,    27,    28,    28,    28,    28,    28,    28,
      29,    29,    30,    31,    32,    32,    33,    33,    33,    33,
      33,    33,    33,    33,    34,    34,    34,    34,    34,    35,
      35,    36,    37,    37,    37,    37,    37,    37,    38,    38,
      38,    39,    39,    40,    40,    41,    41,    42,    42,    43,
      43,    43,    43,    43,    43,    44,    44,    45,    46,    47,
      47,    47,    47,    48,    49,    49,    50,    50,    51,    51
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     2,     2,
       2,     3,     1,     1,     3,     0,     2,     2,     2,     2,
       1,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       3,     2,     3,     2,     3,     2,     3,     2,     1,     3,
       2,     3,     2,     1,     3,     1,     1,     3,     3,     3,
       2,     3,     2,     3,     2,     1,     3,     1,     3,     1,
       3,     3,     2,     3,     3,     2,     1,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YYPARSE_PARAM, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, YYPARSE_PARAM); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void *YYPARSE_PARAM)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (YYPARSE_PARAM);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void *YYPARSE_PARAM)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, YYPARSE_PARAM);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, void *YYPARSE_PARAM)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], YYPARSE_PARAM);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, YYPARSE_PARAM); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, void *YYPARSE_PARAM)
{
  YY_USE (yyvaluep);
  YY_USE (YYPARSE_PARAM);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *YYPARSE_PARAM)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* doc: atom  */
#line 58 "gram.y"
        {
           ((SyckParser *)parser)->root = syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[0].nodeData) );
        }
#line 1285 "gram.c"
    break;

  case 3: /* doc: YAML_DOCSEP atom_or_empty  */
#line 62 "gram.y"
        {
           ((SyckParser *)parser)->root = syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[0].nodeData) );
        }
#line 1293 "gram.c"
    break;

  case 4: /* doc: %empty  */
#line 66 "gram.y"
        {
           ((SyckParser *)parser)->eof = 1;
        }
#line 1301 "gram.c"
    break;

  case 8: /* ind_rep: YAML_TRANSFER ind_rep  */
#line 77 "gram.y"
        { 
            syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), ((SyckParser *)parser)->taguri_expansion );
            (yyval.nodeData) = (yyvsp[0].nodeData);
        }
#line 1310 "gram.c"
    break;

  case 9: /* ind_rep: YAML_TAGURI ind_rep  */
#line 82 "gram.y"
        {
            syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), 0 );
            (yyval.nodeData) = (yyvsp[0].nodeData);
        }
#line 1319 "gram.c"
    break;

  case 10: /* ind_rep: YAML_ANCHOR ind_rep  */
#line 87 "gram.y"
        { 
           /*
            * _Anchors_: The language binding must keep a separate symbol table
            * for anchors.  The actual ID in the symbol table is returned to the
            * higher nodes, though.
            */
           (yyval.nodeData) = syck_hdlr_add_anchor( (SyckParser *)parser, (yyvsp[-1].name), (yyvsp[0].nodeData) );
        }
#line 1332 "gram.c"
    break;

  case 11: /* ind_rep: indent_open ind_rep indent_flex_end  */
#line 96 "gram.y"
        {
           (yyval.nodeData) = (yyvsp[-1].nodeData);
        }
#line 1340 "gram.c"
    break;

  case 14: /* empty: indent_open empty indent_end  */
#line 106 "gram.y"
                {
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
                }
#line 1348 "gram.c"
    break;

  case 15: /* empty: %empty  */
#line 110 "gram.y"
                {
                    NULL_NODE( parser, n );
                    (yyval.nodeData) = n;
                }
#line 1357 "gram.c"
    break;

  case 16: /* empty: YAML_ITRANSFER empty  */
#line 115 "gram.y"
                { 
                   if ( ((SyckParser *)parser)->implicit_typing == 1 )
                   {
                      try_tag_implicit( (yyvsp[0].nodeData), ((SyckParser *)parser)->taguri_expansion );
                   }
                   (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1369 "gram.c"
    break;

  case 17: /* empty: YAML_TRANSFER empty  */
#line 123 "gram.y"
                { 
                    syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), ((SyckParser *)parser)->taguri_expansion );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1378 "gram.c"
    break;

  case 18: /* empty: YAML_TAGURI empty  */
#line 128 "gram.y"
                {
                    syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), 0 );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1387 "gram.c"
    break;

  case 19: /* empty: YAML_ANCHOR empty  */
#line 133 "gram.y"
                { 
                   /*
                    * _Anchors_: The language binding must keep a separate symbol table
                    * for anchors.  The actual ID in the symbol table is returned to the
                    * higher nodes, though.
                    */
                   (yyval.nodeData) = syck_hdlr_add_anchor( (SyckParser *)parser, (yyvsp[-1].name), (yyvsp[0].nodeData) );
                }
#line 1400 "gram.c"
    break;

  case 26: /* word_rep: YAML_TRANSFER word_rep  */
#line 166 "gram.y"
            { 
               syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), ((SyckParser *)parser)->taguri_expansion );
               (yyval.nodeData) = (yyvsp[0].nodeData);
            }
#line 1409 "gram.c"
    break;

  case 27: /* word_rep: YAML_TAGURI word_rep  */
#line 171 "gram.y"
            { 
               syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), 0 );
               (yyval.nodeData) = (yyvsp[0].nodeData);
            }
#line 1418 "gram.c"
    break;

  case 28: /* word_rep: YAML_ITRANSFER word_rep  */
#line 176 "gram.y"
            { 
               if ( ((SyckParser *)parser)->implicit_typing == 1 )
               {
                  try_tag_implicit( (yyvsp[0].nodeData), ((SyckParser *)parser)->taguri_expansion );
               }
               (yyval.nodeData) = (yyvsp[0].nodeData);
            }
#line 1430 "gram.c"
    break;

  case 29: /* word_rep: YAML_ANCHOR word_rep  */
#line 184 "gram.y"
            { 
               (yyval.nodeData) = syck_hdlr_add_anchor( (SyckParser *)parser, (yyvsp[-1].name), (yyvsp[0].nodeData) );
            }
#line 1438 "gram.c"
    break;

  case 30: /* word_rep: YAML_ALIAS  */
#line 188 "gram.y"
            {
               /*
                * _Aliases_: The anchor symbol table is scanned for the anchor name.
                * The anchor's ID in the language's symbol table is returned.
                */
               (yyval.nodeData) = syck_hdlr_get_anchor( (SyckParser *)parser, (yyvsp[0].name) );
            }
#line 1450 "gram.c"
    break;

  case 31: /* word_rep: YAML_WORD  */
#line 196 "gram.y"
            { 
               SyckNode *n = (yyvsp[0].nodeData);
               if ( ((SyckParser *)parser)->taguri_expansion == 1 )
               {
                   n->type_id = syck_taguri( YAML_DOMAIN, "str", 3 );
               }
               else
               {
                   n->type_id = syck_strndup( "str", 3 );
               }
               (yyval.nodeData) = n;
            }
#line 1467 "gram.c"
    break;

  case 33: /* word_rep: indent_open word_rep indent_flex_end  */
#line 210 "gram.y"
            {
               (yyval.nodeData) = (yyvsp[-1].nodeData);
            }
#line 1475 "gram.c"
    break;

  case 39: /* implicit_seq: indent_open top_imp_seq indent_end  */
#line 230 "gram.y"
                { 
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
                }
#line 1483 "gram.c"
    break;

  case 40: /* implicit_seq: indent_open in_implicit_seq indent_end  */
#line 234 "gram.y"
                { 
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
                }
#line 1491 "gram.c"
    break;

  case 41: /* basic_seq: '-' atom_or_empty  */
#line 240 "gram.y"
                { 
                    (yyval.nodeId) = syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[0].nodeData) );
                }
#line 1499 "gram.c"
    break;

  case 42: /* top_imp_seq: YAML_TRANSFER indent_sep in_implicit_seq  */
#line 246 "gram.y"
                { 
                    syck_add_transfer( (yyvsp[-2].name), (yyvsp[0].nodeData), ((SyckParser *)parser)->taguri_expansion );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1508 "gram.c"
    break;

  case 43: /* top_imp_seq: YAML_TRANSFER top_imp_seq  */
#line 251 "gram.y"
                { 
                    syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), ((SyckParser *)parser)->taguri_expansion );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1517 "gram.c"
    break;

  case 44: /* top_imp_seq: YAML_TAGURI indent_sep in_implicit_seq  */
#line 256 "gram.y"
                { 
                    syck_add_transfer( (yyvsp[-2].name), (yyvsp[0].nodeData), 0 );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1526 "gram.c"
    break;

  case 45: /* top_imp_seq: YAML_TAGURI top_imp_seq  */
#line 261 "gram.y"
                { 
                    syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), 0 );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1535 "gram.c"
    break;

  case 46: /* top_imp_seq: YAML_ANCHOR indent_sep in_implicit_seq  */
#line 266 "gram.y"
                { 
                    (yyval.nodeData) = syck_hdlr_add_anchor( (SyckParser *)parser, (yyvsp[-2].name), (yyvsp[0].nodeData) );
                }
#line 1543 "gram.c"
    break;

  case 47: /* top_imp_seq: YAML_ANCHOR top_imp_seq  */
#line 270 "gram.y"
                { 
                    (yyval.nodeData) = syck_hdlr_add_anchor( (SyckParser *)parser, (yyvsp[-1].name), (yyvsp[0].nodeData) );
                }
#line 1551 "gram.c"
    break;

  case 48: /* in_implicit_seq: basic_seq  */
#line 276 "gram.y"
                {
                    (yyval.nodeData) = syck_new_seq( (yyvsp[0].nodeId) );
                }
#line 1559 "gram.c"
    break;

  case 49: /* in_implicit_seq: in_implicit_seq indent_sep basic_seq  */
#line 280 "gram.y"
                                { 
                    syck_seq_add( (yyvsp[-2].nodeData), (yyvsp[0].nodeId) );
                    (yyval.nodeData) = (yyvsp[-2].nodeData);
				}
#line 1568 "gram.c"
    break;

  case 50: /* in_implicit_seq: in_implicit_seq indent_sep  */
#line 285 "gram.y"
                                { 
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
				}
#line 1576 "gram.c"
    break;

  case 51: /* inline_seq: '[' in_inline_seq ']'  */
#line 294 "gram.y"
                { 
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
                }
#line 1584 "gram.c"
    break;

  case 52: /* inline_seq: '[' ']'  */
#line 298 "gram.y"
                { 
                    (yyval.nodeData) = syck_alloc_seq();
                }
#line 1592 "gram.c"
    break;

  case 53: /* in_inline_seq: inline_seq_atom  */
#line 304 "gram.y"
                {
                    (yyval.nodeData) = syck_new_seq( syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[0].nodeData) ) );
                }
#line 1600 "gram.c"
    break;

  case 54: /* in_inline_seq: in_inline_seq ',' inline_seq_atom  */
#line 308 "gram.y"
                                { 
                    syck_seq_add( (yyvsp[-2].nodeData), syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[0].nodeData) ) );
                    (yyval.nodeData) = (yyvsp[-2].nodeData);
				}
#line 1609 "gram.c"
    break;

  case 57: /* implicit_map: indent_open top_imp_map indent_end  */
#line 322 "gram.y"
                { 
                    apply_seq_in_map( (SyckParser *)parser, (yyvsp[-1].nodeData) );
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
                }
#line 1618 "gram.c"
    break;

  case 58: /* implicit_map: indent_open in_implicit_map indent_end  */
#line 327 "gram.y"
                { 
                    apply_seq_in_map( (SyckParser *)parser, (yyvsp[-1].nodeData) );
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
                }
#line 1627 "gram.c"
    break;

  case 59: /* top_imp_map: YAML_TRANSFER indent_sep in_implicit_map  */
#line 334 "gram.y"
                { 
                    syck_add_transfer( (yyvsp[-2].name), (yyvsp[0].nodeData), ((SyckParser *)parser)->taguri_expansion );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1636 "gram.c"
    break;

  case 60: /* top_imp_map: YAML_TRANSFER top_imp_map  */
#line 339 "gram.y"
                { 
                    syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), ((SyckParser *)parser)->taguri_expansion );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1645 "gram.c"
    break;

  case 61: /* top_imp_map: YAML_TAGURI indent_sep in_implicit_map  */
#line 344 "gram.y"
                { 
                    syck_add_transfer( (yyvsp[-2].name), (yyvsp[0].nodeData), 0 );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1654 "gram.c"
    break;

  case 62: /* top_imp_map: YAML_TAGURI top_imp_map  */
#line 349 "gram.y"
                { 
                    syck_add_transfer( (yyvsp[-1].name), (yyvsp[0].nodeData), 0 );
                    (yyval.nodeData) = (yyvsp[0].nodeData);
                }
#line 1663 "gram.c"
    break;

  case 63: /* top_imp_map: YAML_ANCHOR indent_sep in_implicit_map  */
#line 354 "gram.y"
                { 
                    (yyval.nodeData) = syck_hdlr_add_anchor( (SyckParser *)parser, (yyvsp[-2].name), (yyvsp[0].nodeData) );
                }
#line 1671 "gram.c"
    break;

  case 64: /* top_imp_map: YAML_ANCHOR top_imp_map  */
#line 358 "gram.y"
                { 
                    (yyval.nodeData) = syck_hdlr_add_anchor( (SyckParser *)parser, (yyvsp[-1].name), (yyvsp[0].nodeData) );
                }
#line 1679 "gram.c"
    break;

  case 66: /* complex_key: '?' atom indent_sep  */
#line 365 "gram.y"
                {
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
                }
#line 1687 "gram.c"
    break;

  case 68: /* complex_mapping: complex_key ':' complex_value  */
#line 381 "gram.y"
                {
                    (yyval.nodeData) = syck_new_map( 
                        syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[-2].nodeData) ), 
                        syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[0].nodeData) ) );
                }
#line 1697 "gram.c"
    break;

  case 70: /* in_implicit_map: in_implicit_map indent_sep basic_seq  */
#line 399 "gram.y"
                {
                    if ( (yyvsp[-2].nodeData)->shortcut == NULL )
                    {
                        (yyvsp[-2].nodeData)->shortcut = syck_new_seq( (yyvsp[0].nodeId) );
                    }
                    else
                    {
                        syck_seq_add( (yyvsp[-2].nodeData)->shortcut, (yyvsp[0].nodeId) );
                    }
                    (yyval.nodeData) = (yyvsp[-2].nodeData);
                }
#line 1713 "gram.c"
    break;

  case 71: /* in_implicit_map: in_implicit_map indent_sep complex_mapping  */
#line 411 "gram.y"
                {
                    apply_seq_in_map( (SyckParser *)parser, (yyvsp[-2].nodeData) );
                    syck_map_update( (yyvsp[-2].nodeData), (yyvsp[0].nodeData) );
                    syck_free_node( (yyvsp[0].nodeData) );
                    (yyvsp[0].nodeData) = NULL;
                    (yyval.nodeData) = (yyvsp[-2].nodeData);
                }
#line 1725 "gram.c"
    break;

  case 72: /* in_implicit_map: in_implicit_map indent_sep  */
#line 419 "gram.y"
                {
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
                }
#line 1733 "gram.c"
    break;

  case 73: /* basic_mapping: atom ':' atom_or_empty  */
#line 428 "gram.y"
                {
                    (yyval.nodeData) = syck_new_map( 
                        syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[-2].nodeData) ), 
                        syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[0].nodeData) ) );
                }
#line 1743 "gram.c"
    break;

  case 74: /* inline_map: '{' in_inline_map '}'  */
#line 436 "gram.y"
                {
                    (yyval.nodeData) = (yyvsp[-1].nodeData);
                }
#line 1751 "gram.c"
    break;

  case 75: /* inline_map: '{' '}'  */
#line 440 "gram.y"
                {
                    (yyval.nodeData) = syck_alloc_map();
                }
#line 1759 "gram.c"
    break;

  case 77: /* in_inline_map: in_inline_map ',' inline_map_atom  */
#line 447 "gram.y"
                                {
                    syck_map_update( (yyvsp[-2].nodeData), (yyvsp[0].nodeData) );
                    syck_free_node( (yyvsp[0].nodeData) );
                    (yyvsp[0].nodeData) = NULL;
                    (yyval.nodeData) = (yyvsp[-2].nodeData);
				}
#line 1770 "gram.c"
    break;

  case 78: /* inline_map_atom: atom  */
#line 456 "gram.y"
                {
                    NULL_NODE( parser, n );
                    (yyval.nodeData) = syck_new_map( 
                        syck_hdlr_add_node( (SyckParser *)parser, (yyvsp[0].nodeData) ), 
                        syck_hdlr_add_node( (SyckParser *)parser, n ) );
                }
#line 1781 "gram.c"
    break;


#line 1785 "gram.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YYPARSE_PARAM, YY_("syntax error"));
    }

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
                      yytoken, &yylval, YYPARSE_PARAM);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, YYPARSE_PARAM);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YYPARSE_PARAM, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, YYPARSE_PARAM);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, YYPARSE_PARAM);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 465 "gram.y"


void
apply_seq_in_map( SyckParser *parser, SyckNode *n )
{
    long map_len;
    if ( n->shortcut == NULL )
    {
        return;
    }

    map_len = syck_map_count( n );
    syck_map_assign( n, map_value, map_len - 1,
        syck_hdlr_add_node( parser, n->shortcut ) );

    n->shortcut = NULL;
}
