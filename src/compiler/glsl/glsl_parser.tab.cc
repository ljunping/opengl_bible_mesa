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
#line 1 "glsl_parser.yy"

/*
 * Copyright © 2008, 2009 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef _MSC_VER
#include <strings.h>
#endif
#include <assert.h>

#include "ast.h"
#include "glsl_parser_extras.h"
#include "compiler/glsl_types.h"
#include "util/u_string.h"
#include "util/format/u_format.h"
#include "main/consts_exts.h"

#ifdef _MSC_VER
#pragma warning( disable : 4065 ) // switch statement contains 'default' but no 'case' labels
#endif

#undef yyerror

static void yyerror(YYLTYPE *loc, _mesa_glsl_parse_state *st, const char *msg)
{
   _mesa_glsl_error(loc, st, "%s", msg);
}

static int
_mesa_glsl_lex(YYSTYPE *val, YYLTYPE *loc, _mesa_glsl_parse_state *state)
{
   return _mesa_glsl_lexer_lex(val, loc, state->scanner);
}

static bool match_layout_qualifier(const char *s1, const char *s2,
                                   _mesa_glsl_parse_state *state)
{
   /* From the GLSL 1.50 spec, section 4.3.8 (Layout Qualifiers):
    *
    *     "The tokens in any layout-qualifier-id-list ... are not case
    *     sensitive, unless explicitly noted otherwise."
    *
    * The text "unless explicitly noted otherwise" appears to be
    * vacuous--no desktop GLSL spec (up through GLSL 4.40) notes
    * otherwise.
    *
    * However, the GLSL ES 3.00 spec says, in section 4.3.8 (Layout
    * Qualifiers):
    *
    *     "As for other identifiers, they are case sensitive."
    *
    * So we need to do a case-sensitive or a case-insensitive match,
    * depending on whether we are compiling for GLSL ES.
    */
   if (state->es_shader)
      return strcmp(s1, s2);
   else
      return strcasecmp(s1, s2);
}

#line 153 "glsl_parser.tab.cc"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ATTRIBUTE = 258,               /* ATTRIBUTE  */
    CONST_TOK = 259,               /* CONST_TOK  */
    BASIC_TYPE_TOK = 260,          /* BASIC_TYPE_TOK  */
    BREAK = 261,                   /* BREAK  */
    BUFFER = 262,                  /* BUFFER  */
    CONTINUE = 263,                /* CONTINUE  */
    DO = 264,                      /* DO  */
    ELSE = 265,                    /* ELSE  */
    FOR = 266,                     /* FOR  */
    IF = 267,                      /* IF  */
    DEMOTE = 268,                  /* DEMOTE  */
    DISCARD = 269,                 /* DISCARD  */
    RETURN = 270,                  /* RETURN  */
    SWITCH = 271,                  /* SWITCH  */
    CASE = 272,                    /* CASE  */
    DEFAULT = 273,                 /* DEFAULT  */
    CENTROID = 274,                /* CENTROID  */
    IN_TOK = 275,                  /* IN_TOK  */
    OUT_TOK = 276,                 /* OUT_TOK  */
    INOUT_TOK = 277,               /* INOUT_TOK  */
    UNIFORM = 278,                 /* UNIFORM  */
    VARYING = 279,                 /* VARYING  */
    SAMPLE = 280,                  /* SAMPLE  */
    NOPERSPECTIVE = 281,           /* NOPERSPECTIVE  */
    FLAT = 282,                    /* FLAT  */
    SMOOTH = 283,                  /* SMOOTH  */
    IMAGE1DSHADOW = 284,           /* IMAGE1DSHADOW  */
    IMAGE2DSHADOW = 285,           /* IMAGE2DSHADOW  */
    IMAGE1DARRAYSHADOW = 286,      /* IMAGE1DARRAYSHADOW  */
    IMAGE2DARRAYSHADOW = 287,      /* IMAGE2DARRAYSHADOW  */
    COHERENT = 288,                /* COHERENT  */
    VOLATILE = 289,                /* VOLATILE  */
    RESTRICT = 290,                /* RESTRICT  */
    READONLY = 291,                /* READONLY  */
    WRITEONLY = 292,               /* WRITEONLY  */
    SHARED = 293,                  /* SHARED  */
    STRUCT = 294,                  /* STRUCT  */
    VOID_TOK = 295,                /* VOID_TOK  */
    WHILE = 296,                   /* WHILE  */
    IDENTIFIER = 297,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 298,         /* TYPE_IDENTIFIER  */
    NEW_IDENTIFIER = 299,          /* NEW_IDENTIFIER  */
    FLOATCONSTANT = 300,           /* FLOATCONSTANT  */
    FLOAT16CONSTANT = 301,         /* FLOAT16CONSTANT  */
    DOUBLECONSTANT = 302,          /* DOUBLECONSTANT  */
    INTCONSTANT = 303,             /* INTCONSTANT  */
    UINTCONSTANT = 304,            /* UINTCONSTANT  */
    BOOLCONSTANT = 305,            /* BOOLCONSTANT  */
    INT64CONSTANT = 306,           /* INT64CONSTANT  */
    UINT64CONSTANT = 307,          /* UINT64CONSTANT  */
    FIELD_SELECTION = 308,         /* FIELD_SELECTION  */
    LEFT_OP = 309,                 /* LEFT_OP  */
    RIGHT_OP = 310,                /* RIGHT_OP  */
    INC_OP = 311,                  /* INC_OP  */
    DEC_OP = 312,                  /* DEC_OP  */
    LE_OP = 313,                   /* LE_OP  */
    GE_OP = 314,                   /* GE_OP  */
    EQ_OP = 315,                   /* EQ_OP  */
    NE_OP = 316,                   /* NE_OP  */
    AND_OP = 317,                  /* AND_OP  */
    OR_OP = 318,                   /* OR_OP  */
    XOR_OP = 319,                  /* XOR_OP  */
    MUL_ASSIGN = 320,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 321,              /* DIV_ASSIGN  */
    ADD_ASSIGN = 322,              /* ADD_ASSIGN  */
    MOD_ASSIGN = 323,              /* MOD_ASSIGN  */
    LEFT_ASSIGN = 324,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 325,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 326,              /* AND_ASSIGN  */
    XOR_ASSIGN = 327,              /* XOR_ASSIGN  */
    OR_ASSIGN = 328,               /* OR_ASSIGN  */
    SUB_ASSIGN = 329,              /* SUB_ASSIGN  */
    INVARIANT = 330,               /* INVARIANT  */
    PRECISE = 331,                 /* PRECISE  */
    LOWP = 332,                    /* LOWP  */
    MEDIUMP = 333,                 /* MEDIUMP  */
    HIGHP = 334,                   /* HIGHP  */
    SUPERP = 335,                  /* SUPERP  */
    PRECISION = 336,               /* PRECISION  */
    VERSION_TOK = 337,             /* VERSION_TOK  */
    EXTENSION = 338,               /* EXTENSION  */
    LINE = 339,                    /* LINE  */
    COLON = 340,                   /* COLON  */
    EOL = 341,                     /* EOL  */
    INTERFACE_TOK = 342,           /* INTERFACE_TOK  */
    OUTPUT = 343,                  /* OUTPUT  */
    PRAGMA_DEBUG_ON = 344,         /* PRAGMA_DEBUG_ON  */
    PRAGMA_DEBUG_OFF = 345,        /* PRAGMA_DEBUG_OFF  */
    PRAGMA_OPTIMIZE_ON = 346,      /* PRAGMA_OPTIMIZE_ON  */
    PRAGMA_OPTIMIZE_OFF = 347,     /* PRAGMA_OPTIMIZE_OFF  */
    PRAGMA_WARNING_ON = 348,       /* PRAGMA_WARNING_ON  */
    PRAGMA_WARNING_OFF = 349,      /* PRAGMA_WARNING_OFF  */
    PRAGMA_INVARIANT_ALL = 350,    /* PRAGMA_INVARIANT_ALL  */
    LAYOUT_TOK = 351,              /* LAYOUT_TOK  */
    DOT_TOK = 352,                 /* DOT_TOK  */
    ASM = 353,                     /* ASM  */
    CLASS = 354,                   /* CLASS  */
    UNION = 355,                   /* UNION  */
    ENUM = 356,                    /* ENUM  */
    TYPEDEF = 357,                 /* TYPEDEF  */
    TEMPLATE = 358,                /* TEMPLATE  */
    THIS = 359,                    /* THIS  */
    PACKED_TOK = 360,              /* PACKED_TOK  */
    GOTO = 361,                    /* GOTO  */
    INLINE_TOK = 362,              /* INLINE_TOK  */
    NOINLINE = 363,                /* NOINLINE  */
    PUBLIC_TOK = 364,              /* PUBLIC_TOK  */
    STATIC = 365,                  /* STATIC  */
    EXTERN = 366,                  /* EXTERN  */
    EXTERNAL = 367,                /* EXTERNAL  */
    LONG_TOK = 368,                /* LONG_TOK  */
    SHORT_TOK = 369,               /* SHORT_TOK  */
    HALF = 370,                    /* HALF  */
    FIXED_TOK = 371,               /* FIXED_TOK  */
    UNSIGNED = 372,                /* UNSIGNED  */
    INPUT_TOK = 373,               /* INPUT_TOK  */
    HVEC2 = 374,                   /* HVEC2  */
    HVEC3 = 375,                   /* HVEC3  */
    HVEC4 = 376,                   /* HVEC4  */
    FVEC2 = 377,                   /* FVEC2  */
    FVEC3 = 378,                   /* FVEC3  */
    FVEC4 = 379,                   /* FVEC4  */
    SAMPLER3DRECT = 380,           /* SAMPLER3DRECT  */
    SIZEOF = 381,                  /* SIZEOF  */
    CAST = 382,                    /* CAST  */
    NAMESPACE = 383,               /* NAMESPACE  */
    USING = 384,                   /* USING  */
    RESOURCE = 385,                /* RESOURCE  */
    PATCH = 386,                   /* PATCH  */
    SUBROUTINE = 387,              /* SUBROUTINE  */
    ERROR_TOK = 388,               /* ERROR_TOK  */
    COMMON = 389,                  /* COMMON  */
    PARTITION = 390,               /* PARTITION  */
    ACTIVE = 391,                  /* ACTIVE  */
    FILTER = 392,                  /* FILTER  */
    ROW_MAJOR = 393,               /* ROW_MAJOR  */
    THEN = 394                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 101 "glsl_parser.yy"

   int n;
   int64_t n64;
   float real;
   double dreal;
   const char *identifier;

   struct ast_type_qualifier type_qualifier;

   ast_node *node;
   ast_type_specifier *type_specifier;
   ast_array_specifier *array_specifier;
   ast_fully_specified_type *fully_specified_type;
   ast_function *function;
   ast_parameter_declarator *parameter_declarator;
   ast_function_definition *function_definition;
   ast_compound_statement *compound_statement;
   ast_expression *expression;
   ast_declarator_list *declarator_list;
   ast_struct_specifier *struct_specifier;
   ast_declaration *declaration;
   ast_switch_body *switch_body;
   ast_case_label *case_label;
   ast_case_label_list *case_label_list;
   ast_case_statement *case_statement;
   ast_case_statement_list *case_statement_list;
   ast_interface_block *interface_block;
   ast_subroutine_list *subroutine_list;
   struct {
      ast_node *cond;
      ast_expression *rest;
   } for_rest_statement;

   struct {
      ast_node *then_statement;
      ast_node *else_statement;
   } selection_rest_statement;

   const glsl_type *type;

#line 380 "glsl_parser.tab.cc"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int yyparse (struct _mesa_glsl_parse_state *state);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ATTRIBUTE = 3,                  /* ATTRIBUTE  */
  YYSYMBOL_CONST_TOK = 4,                  /* CONST_TOK  */
  YYSYMBOL_BASIC_TYPE_TOK = 5,             /* BASIC_TYPE_TOK  */
  YYSYMBOL_BREAK = 6,                      /* BREAK  */
  YYSYMBOL_BUFFER = 7,                     /* BUFFER  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DO = 9,                         /* DO  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_DEMOTE = 13,                    /* DEMOTE  */
  YYSYMBOL_DISCARD = 14,                   /* DISCARD  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_SWITCH = 16,                    /* SWITCH  */
  YYSYMBOL_CASE = 17,                      /* CASE  */
  YYSYMBOL_DEFAULT = 18,                   /* DEFAULT  */
  YYSYMBOL_CENTROID = 19,                  /* CENTROID  */
  YYSYMBOL_IN_TOK = 20,                    /* IN_TOK  */
  YYSYMBOL_OUT_TOK = 21,                   /* OUT_TOK  */
  YYSYMBOL_INOUT_TOK = 22,                 /* INOUT_TOK  */
  YYSYMBOL_UNIFORM = 23,                   /* UNIFORM  */
  YYSYMBOL_VARYING = 24,                   /* VARYING  */
  YYSYMBOL_SAMPLE = 25,                    /* SAMPLE  */
  YYSYMBOL_NOPERSPECTIVE = 26,             /* NOPERSPECTIVE  */
  YYSYMBOL_FLAT = 27,                      /* FLAT  */
  YYSYMBOL_SMOOTH = 28,                    /* SMOOTH  */
  YYSYMBOL_IMAGE1DSHADOW = 29,             /* IMAGE1DSHADOW  */
  YYSYMBOL_IMAGE2DSHADOW = 30,             /* IMAGE2DSHADOW  */
  YYSYMBOL_IMAGE1DARRAYSHADOW = 31,        /* IMAGE1DARRAYSHADOW  */
  YYSYMBOL_IMAGE2DARRAYSHADOW = 32,        /* IMAGE2DARRAYSHADOW  */
  YYSYMBOL_COHERENT = 33,                  /* COHERENT  */
  YYSYMBOL_VOLATILE = 34,                  /* VOLATILE  */
  YYSYMBOL_RESTRICT = 35,                  /* RESTRICT  */
  YYSYMBOL_READONLY = 36,                  /* READONLY  */
  YYSYMBOL_WRITEONLY = 37,                 /* WRITEONLY  */
  YYSYMBOL_SHARED = 38,                    /* SHARED  */
  YYSYMBOL_STRUCT = 39,                    /* STRUCT  */
  YYSYMBOL_VOID_TOK = 40,                  /* VOID_TOK  */
  YYSYMBOL_WHILE = 41,                     /* WHILE  */
  YYSYMBOL_IDENTIFIER = 42,                /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 43,           /* TYPE_IDENTIFIER  */
  YYSYMBOL_NEW_IDENTIFIER = 44,            /* NEW_IDENTIFIER  */
  YYSYMBOL_FLOATCONSTANT = 45,             /* FLOATCONSTANT  */
  YYSYMBOL_FLOAT16CONSTANT = 46,           /* FLOAT16CONSTANT  */
  YYSYMBOL_DOUBLECONSTANT = 47,            /* DOUBLECONSTANT  */
  YYSYMBOL_INTCONSTANT = 48,               /* INTCONSTANT  */
  YYSYMBOL_UINTCONSTANT = 49,              /* UINTCONSTANT  */
  YYSYMBOL_BOOLCONSTANT = 50,              /* BOOLCONSTANT  */
  YYSYMBOL_INT64CONSTANT = 51,             /* INT64CONSTANT  */
  YYSYMBOL_UINT64CONSTANT = 52,            /* UINT64CONSTANT  */
  YYSYMBOL_FIELD_SELECTION = 53,           /* FIELD_SELECTION  */
  YYSYMBOL_LEFT_OP = 54,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 55,                  /* RIGHT_OP  */
  YYSYMBOL_INC_OP = 56,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 57,                    /* DEC_OP  */
  YYSYMBOL_LE_OP = 58,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 59,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 60,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 61,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 62,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 63,                     /* OR_OP  */
  YYSYMBOL_XOR_OP = 64,                    /* XOR_OP  */
  YYSYMBOL_MUL_ASSIGN = 65,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 66,                /* DIV_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 67,                /* ADD_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 68,                /* MOD_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 69,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 70,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 71,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 72,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 73,                 /* OR_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 74,                /* SUB_ASSIGN  */
  YYSYMBOL_INVARIANT = 75,                 /* INVARIANT  */
  YYSYMBOL_PRECISE = 76,                   /* PRECISE  */
  YYSYMBOL_LOWP = 77,                      /* LOWP  */
  YYSYMBOL_MEDIUMP = 78,                   /* MEDIUMP  */
  YYSYMBOL_HIGHP = 79,                     /* HIGHP  */
  YYSYMBOL_SUPERP = 80,                    /* SUPERP  */
  YYSYMBOL_PRECISION = 81,                 /* PRECISION  */
  YYSYMBOL_VERSION_TOK = 82,               /* VERSION_TOK  */
  YYSYMBOL_EXTENSION = 83,                 /* EXTENSION  */
  YYSYMBOL_LINE = 84,                      /* LINE  */
  YYSYMBOL_COLON = 85,                     /* COLON  */
  YYSYMBOL_EOL = 86,                       /* EOL  */
  YYSYMBOL_INTERFACE_TOK = 87,             /* INTERFACE_TOK  */
  YYSYMBOL_OUTPUT = 88,                    /* OUTPUT  */
  YYSYMBOL_PRAGMA_DEBUG_ON = 89,           /* PRAGMA_DEBUG_ON  */
  YYSYMBOL_PRAGMA_DEBUG_OFF = 90,          /* PRAGMA_DEBUG_OFF  */
  YYSYMBOL_PRAGMA_OPTIMIZE_ON = 91,        /* PRAGMA_OPTIMIZE_ON  */
  YYSYMBOL_PRAGMA_OPTIMIZE_OFF = 92,       /* PRAGMA_OPTIMIZE_OFF  */
  YYSYMBOL_PRAGMA_WARNING_ON = 93,         /* PRAGMA_WARNING_ON  */
  YYSYMBOL_PRAGMA_WARNING_OFF = 94,        /* PRAGMA_WARNING_OFF  */
  YYSYMBOL_PRAGMA_INVARIANT_ALL = 95,      /* PRAGMA_INVARIANT_ALL  */
  YYSYMBOL_LAYOUT_TOK = 96,                /* LAYOUT_TOK  */
  YYSYMBOL_DOT_TOK = 97,                   /* DOT_TOK  */
  YYSYMBOL_ASM = 98,                       /* ASM  */
  YYSYMBOL_CLASS = 99,                     /* CLASS  */
  YYSYMBOL_UNION = 100,                    /* UNION  */
  YYSYMBOL_ENUM = 101,                     /* ENUM  */
  YYSYMBOL_TYPEDEF = 102,                  /* TYPEDEF  */
  YYSYMBOL_TEMPLATE = 103,                 /* TEMPLATE  */
  YYSYMBOL_THIS = 104,                     /* THIS  */
  YYSYMBOL_PACKED_TOK = 105,               /* PACKED_TOK  */
  YYSYMBOL_GOTO = 106,                     /* GOTO  */
  YYSYMBOL_INLINE_TOK = 107,               /* INLINE_TOK  */
  YYSYMBOL_NOINLINE = 108,                 /* NOINLINE  */
  YYSYMBOL_PUBLIC_TOK = 109,               /* PUBLIC_TOK  */
  YYSYMBOL_STATIC = 110,                   /* STATIC  */
  YYSYMBOL_EXTERN = 111,                   /* EXTERN  */
  YYSYMBOL_EXTERNAL = 112,                 /* EXTERNAL  */
  YYSYMBOL_LONG_TOK = 113,                 /* LONG_TOK  */
  YYSYMBOL_SHORT_TOK = 114,                /* SHORT_TOK  */
  YYSYMBOL_HALF = 115,                     /* HALF  */
  YYSYMBOL_FIXED_TOK = 116,                /* FIXED_TOK  */
  YYSYMBOL_UNSIGNED = 117,                 /* UNSIGNED  */
  YYSYMBOL_INPUT_TOK = 118,                /* INPUT_TOK  */
  YYSYMBOL_HVEC2 = 119,                    /* HVEC2  */
  YYSYMBOL_HVEC3 = 120,                    /* HVEC3  */
  YYSYMBOL_HVEC4 = 121,                    /* HVEC4  */
  YYSYMBOL_FVEC2 = 122,                    /* FVEC2  */
  YYSYMBOL_FVEC3 = 123,                    /* FVEC3  */
  YYSYMBOL_FVEC4 = 124,                    /* FVEC4  */
  YYSYMBOL_SAMPLER3DRECT = 125,            /* SAMPLER3DRECT  */
  YYSYMBOL_SIZEOF = 126,                   /* SIZEOF  */
  YYSYMBOL_CAST = 127,                     /* CAST  */
  YYSYMBOL_NAMESPACE = 128,                /* NAMESPACE  */
  YYSYMBOL_USING = 129,                    /* USING  */
  YYSYMBOL_RESOURCE = 130,                 /* RESOURCE  */
  YYSYMBOL_PATCH = 131,                    /* PATCH  */
  YYSYMBOL_SUBROUTINE = 132,               /* SUBROUTINE  */
  YYSYMBOL_ERROR_TOK = 133,                /* ERROR_TOK  */
  YYSYMBOL_COMMON = 134,                   /* COMMON  */
  YYSYMBOL_PARTITION = 135,                /* PARTITION  */
  YYSYMBOL_ACTIVE = 136,                   /* ACTIVE  */
  YYSYMBOL_FILTER = 137,                   /* FILTER  */
  YYSYMBOL_ROW_MAJOR = 138,                /* ROW_MAJOR  */
  YYSYMBOL_THEN = 139,                     /* THEN  */
  YYSYMBOL_140_ = 140,                     /* '('  */
  YYSYMBOL_141_ = 141,                     /* ')'  */
  YYSYMBOL_142_ = 142,                     /* '['  */
  YYSYMBOL_143_ = 143,                     /* ']'  */
  YYSYMBOL_144_ = 144,                     /* ','  */
  YYSYMBOL_145_ = 145,                     /* '+'  */
  YYSYMBOL_146_ = 146,                     /* '-'  */
  YYSYMBOL_147_ = 147,                     /* '!'  */
  YYSYMBOL_148_ = 148,                     /* '~'  */
  YYSYMBOL_149_ = 149,                     /* '*'  */
  YYSYMBOL_150_ = 150,                     /* '/'  */
  YYSYMBOL_151_ = 151,                     /* '%'  */
  YYSYMBOL_152_ = 152,                     /* '<'  */
  YYSYMBOL_153_ = 153,                     /* '>'  */
  YYSYMBOL_154_ = 154,                     /* '&'  */
  YYSYMBOL_155_ = 155,                     /* '^'  */
  YYSYMBOL_156_ = 156,                     /* '|'  */
  YYSYMBOL_157_ = 157,                     /* '?'  */
  YYSYMBOL_158_ = 158,                     /* ':'  */
  YYSYMBOL_159_ = 159,                     /* '='  */
  YYSYMBOL_160_ = 160,                     /* ';'  */
  YYSYMBOL_161_ = 161,                     /* '{'  */
  YYSYMBOL_162_ = 162,                     /* '}'  */
  YYSYMBOL_YYACCEPT = 163,                 /* $accept  */
  YYSYMBOL_translation_unit = 164,         /* translation_unit  */
  YYSYMBOL_165_1 = 165,                    /* $@1  */
  YYSYMBOL_version_statement = 166,        /* version_statement  */
  YYSYMBOL_pragma_statement = 167,         /* pragma_statement  */
  YYSYMBOL_extension_statement_list = 168, /* extension_statement_list  */
  YYSYMBOL_any_identifier = 169,           /* any_identifier  */
  YYSYMBOL_extension_statement = 170,      /* extension_statement  */
  YYSYMBOL_external_declaration_list = 171, /* external_declaration_list  */
  YYSYMBOL_variable_identifier = 172,      /* variable_identifier  */
  YYSYMBOL_primary_expression = 173,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 174,       /* postfix_expression  */
  YYSYMBOL_integer_expression = 175,       /* integer_expression  */
  YYSYMBOL_function_call = 176,            /* function_call  */
  YYSYMBOL_function_call_or_method = 177,  /* function_call_or_method  */
  YYSYMBOL_function_call_generic = 178,    /* function_call_generic  */
  YYSYMBOL_function_call_header_no_parameters = 179, /* function_call_header_no_parameters  */
  YYSYMBOL_function_call_header_with_parameters = 180, /* function_call_header_with_parameters  */
  YYSYMBOL_function_call_header = 181,     /* function_call_header  */
  YYSYMBOL_function_identifier = 182,      /* function_identifier  */
  YYSYMBOL_unary_expression = 183,         /* unary_expression  */
  YYSYMBOL_unary_operator = 184,           /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 185, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 186,      /* additive_expression  */
  YYSYMBOL_shift_expression = 187,         /* shift_expression  */
  YYSYMBOL_relational_expression = 188,    /* relational_expression  */
  YYSYMBOL_equality_expression = 189,      /* equality_expression  */
  YYSYMBOL_and_expression = 190,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 191,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 192,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 193,   /* logical_and_expression  */
  YYSYMBOL_logical_xor_expression = 194,   /* logical_xor_expression  */
  YYSYMBOL_logical_or_expression = 195,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 196,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 197,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 198,      /* assignment_operator  */
  YYSYMBOL_expression = 199,               /* expression  */
  YYSYMBOL_constant_expression = 200,      /* constant_expression  */
  YYSYMBOL_declaration = 201,              /* declaration  */
  YYSYMBOL_function_prototype = 202,       /* function_prototype  */
  YYSYMBOL_function_declarator = 203,      /* function_declarator  */
  YYSYMBOL_function_header_with_parameters = 204, /* function_header_with_parameters  */
  YYSYMBOL_function_header = 205,          /* function_header  */
  YYSYMBOL_parameter_declarator = 206,     /* parameter_declarator  */
  YYSYMBOL_parameter_declaration = 207,    /* parameter_declaration  */
  YYSYMBOL_parameter_qualifier = 208,      /* parameter_qualifier  */
  YYSYMBOL_parameter_direction_qualifier = 209, /* parameter_direction_qualifier  */
  YYSYMBOL_parameter_type_specifier = 210, /* parameter_type_specifier  */
  YYSYMBOL_init_declarator_list = 211,     /* init_declarator_list  */
  YYSYMBOL_single_declaration = 212,       /* single_declaration  */
  YYSYMBOL_fully_specified_type = 213,     /* fully_specified_type  */
  YYSYMBOL_layout_qualifier = 214,         /* layout_qualifier  */
  YYSYMBOL_layout_qualifier_id_list = 215, /* layout_qualifier_id_list  */
  YYSYMBOL_layout_qualifier_id = 216,      /* layout_qualifier_id  */
  YYSYMBOL_interface_block_layout_qualifier = 217, /* interface_block_layout_qualifier  */
  YYSYMBOL_subroutine_qualifier = 218,     /* subroutine_qualifier  */
  YYSYMBOL_subroutine_type_list = 219,     /* subroutine_type_list  */
  YYSYMBOL_interpolation_qualifier = 220,  /* interpolation_qualifier  */
  YYSYMBOL_type_qualifier = 221,           /* type_qualifier  */
  YYSYMBOL_auxiliary_storage_qualifier = 222, /* auxiliary_storage_qualifier  */
  YYSYMBOL_storage_qualifier = 223,        /* storage_qualifier  */
  YYSYMBOL_memory_qualifier = 224,         /* memory_qualifier  */
  YYSYMBOL_array_specifier = 225,          /* array_specifier  */
  YYSYMBOL_type_specifier = 226,           /* type_specifier  */
  YYSYMBOL_type_specifier_nonarray = 227,  /* type_specifier_nonarray  */
  YYSYMBOL_basic_type_specifier_nonarray = 228, /* basic_type_specifier_nonarray  */
  YYSYMBOL_precision_qualifier = 229,      /* precision_qualifier  */
  YYSYMBOL_struct_specifier = 230,         /* struct_specifier  */
  YYSYMBOL_struct_declaration_list = 231,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 232,       /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 233,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 234,        /* struct_declarator  */
  YYSYMBOL_initializer = 235,              /* initializer  */
  YYSYMBOL_initializer_list = 236,         /* initializer_list  */
  YYSYMBOL_declaration_statement = 237,    /* declaration_statement  */
  YYSYMBOL_statement = 238,                /* statement  */
  YYSYMBOL_simple_statement = 239,         /* simple_statement  */
  YYSYMBOL_compound_statement = 240,       /* compound_statement  */
  YYSYMBOL_241_2 = 241,                    /* $@2  */
  YYSYMBOL_statement_no_new_scope = 242,   /* statement_no_new_scope  */
  YYSYMBOL_compound_statement_no_new_scope = 243, /* compound_statement_no_new_scope  */
  YYSYMBOL_statement_list = 244,           /* statement_list  */
  YYSYMBOL_expression_statement = 245,     /* expression_statement  */
  YYSYMBOL_selection_statement = 246,      /* selection_statement  */
  YYSYMBOL_selection_rest_statement = 247, /* selection_rest_statement  */
  YYSYMBOL_condition = 248,                /* condition  */
  YYSYMBOL_switch_statement = 249,         /* switch_statement  */
  YYSYMBOL_switch_body = 250,              /* switch_body  */
  YYSYMBOL_case_label = 251,               /* case_label  */
  YYSYMBOL_case_label_list = 252,          /* case_label_list  */
  YYSYMBOL_case_statement = 253,           /* case_statement  */
  YYSYMBOL_case_statement_list = 254,      /* case_statement_list  */
  YYSYMBOL_iteration_statement = 255,      /* iteration_statement  */
  YYSYMBOL_for_init_statement = 256,       /* for_init_statement  */
  YYSYMBOL_conditionopt = 257,             /* conditionopt  */
  YYSYMBOL_for_rest_statement = 258,       /* for_rest_statement  */
  YYSYMBOL_jump_statement = 259,           /* jump_statement  */
  YYSYMBOL_demote_statement = 260,         /* demote_statement  */
  YYSYMBOL_external_declaration = 261,     /* external_declaration  */
  YYSYMBOL_function_definition = 262,      /* function_definition  */
  YYSYMBOL_interface_block = 263,          /* interface_block  */
  YYSYMBOL_basic_interface_block = 264,    /* basic_interface_block  */
  YYSYMBOL_interface_qualifier = 265,      /* interface_qualifier  */
  YYSYMBOL_instance_name_opt = 266,        /* instance_name_opt  */
  YYSYMBOL_member_list = 267,              /* member_list  */
  YYSYMBOL_member_declaration = 268,       /* member_declaration  */
  YYSYMBOL_layout_uniform_defaults = 269,  /* layout_uniform_defaults  */
  YYSYMBOL_layout_buffer_defaults = 270,   /* layout_buffer_defaults  */
  YYSYMBOL_layout_in_defaults = 271,       /* layout_in_defaults  */
  YYSYMBOL_layout_out_defaults = 272,      /* layout_out_defaults  */
  YYSYMBOL_layout_defaults = 273           /* layout_defaults  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2623

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  313
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  476

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   394


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   147,     2,     2,     2,   151,   154,     2,
     140,   141,   149,   145,   144,   146,     2,   150,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   158,   160,
     152,   159,   153,   157,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   142,     2,   143,   155,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   161,   156,   162,   148,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   295,   295,   294,   318,   320,   327,   337,   338,   339,
     340,   341,   365,   370,   377,   379,   383,   384,   385,   389,
     398,   406,   414,   425,   426,   430,   437,   444,   451,   458,
     465,   472,   479,   486,   493,   500,   501,   507,   511,   518,
     524,   533,   537,   541,   545,   546,   550,   551,   555,   561,
     573,   577,   583,   597,   598,   604,   610,   620,   621,   622,
     623,   627,   628,   634,   640,   649,   650,   656,   665,   666,
     672,   681,   682,   688,   694,   700,   709,   710,   716,   725,
     726,   735,   736,   745,   746,   755,   756,   765,   766,   775,
     776,   785,   786,   795,   796,   805,   806,   807,   808,   809,
     810,   811,   812,   813,   814,   815,   819,   823,   839,   843,
     848,   852,   857,   874,   878,   879,   883,   888,   896,   914,
     925,   930,   945,   953,   970,   973,   981,   989,  1001,  1013,
    1020,  1025,  1030,  1039,  1043,  1044,  1054,  1064,  1074,  1088,
    1095,  1106,  1117,  1128,  1139,  1151,  1166,  1173,  1191,  1198,
    1199,  1209,  1732,  1902,  1928,  1933,  1938,  1946,  1951,  1960,
    1969,  1981,  1986,  1991,  2000,  2005,  2010,  2011,  2012,  2013,
    2014,  2015,  2016,  2034,  2042,  2067,  2091,  2105,  2110,  2126,
    2151,  2163,  2171,  2176,  2181,  2188,  2193,  2198,  2203,  2208,
    2233,  2245,  2250,  2255,  2263,  2268,  2273,  2279,  2284,  2292,
    2300,  2306,  2316,  2327,  2328,  2336,  2342,  2348,  2357,  2358,
    2359,  2371,  2376,  2381,  2389,  2396,  2413,  2418,  2426,  2464,
    2469,  2477,  2483,  2492,  2493,  2497,  2504,  2511,  2518,  2524,
    2525,  2529,  2530,  2531,  2532,  2533,  2534,  2535,  2539,  2546,
    2545,  2559,  2560,  2564,  2570,  2579,  2589,  2598,  2610,  2616,
    2625,  2634,  2639,  2647,  2651,  2669,  2677,  2682,  2690,  2695,
    2703,  2711,  2719,  2727,  2735,  2743,  2751,  2758,  2765,  2775,
    2776,  2780,  2782,  2788,  2793,  2802,  2808,  2814,  2820,  2826,
    2835,  2844,  2845,  2846,  2847,  2848,  2852,  2866,  2870,  2883,
    2901,  2920,  2925,  2930,  2935,  2940,  2955,  2958,  2963,  2971,
    2976,  2984,  3008,  3015,  3019,  3026,  3030,  3040,  3049,  3059,
    3068,  3080,  3102,  3112
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ATTRIBUTE",
  "CONST_TOK", "BASIC_TYPE_TOK", "BREAK", "BUFFER", "CONTINUE", "DO",
  "ELSE", "FOR", "IF", "DEMOTE", "DISCARD", "RETURN", "SWITCH", "CASE",
  "DEFAULT", "CENTROID", "IN_TOK", "OUT_TOK", "INOUT_TOK", "UNIFORM",
  "VARYING", "SAMPLE", "NOPERSPECTIVE", "FLAT", "SMOOTH", "IMAGE1DSHADOW",
  "IMAGE2DSHADOW", "IMAGE1DARRAYSHADOW", "IMAGE2DARRAYSHADOW", "COHERENT",
  "VOLATILE", "RESTRICT", "READONLY", "WRITEONLY", "SHARED", "STRUCT",
  "VOID_TOK", "WHILE", "IDENTIFIER", "TYPE_IDENTIFIER", "NEW_IDENTIFIER",
  "FLOATCONSTANT", "FLOAT16CONSTANT", "DOUBLECONSTANT", "INTCONSTANT",
  "UINTCONSTANT", "BOOLCONSTANT", "INT64CONSTANT", "UINT64CONSTANT",
  "FIELD_SELECTION", "LEFT_OP", "RIGHT_OP", "INC_OP", "DEC_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "XOR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN", "INVARIANT",
  "PRECISE", "LOWP", "MEDIUMP", "HIGHP", "SUPERP", "PRECISION",
  "VERSION_TOK", "EXTENSION", "LINE", "COLON", "EOL", "INTERFACE_TOK",
  "OUTPUT", "PRAGMA_DEBUG_ON", "PRAGMA_DEBUG_OFF", "PRAGMA_OPTIMIZE_ON",
  "PRAGMA_OPTIMIZE_OFF", "PRAGMA_WARNING_ON", "PRAGMA_WARNING_OFF",
  "PRAGMA_INVARIANT_ALL", "LAYOUT_TOK", "DOT_TOK", "ASM", "CLASS", "UNION",
  "ENUM", "TYPEDEF", "TEMPLATE", "THIS", "PACKED_TOK", "GOTO",
  "INLINE_TOK", "NOINLINE", "PUBLIC_TOK", "STATIC", "EXTERN", "EXTERNAL",
  "LONG_TOK", "SHORT_TOK", "HALF", "FIXED_TOK", "UNSIGNED", "INPUT_TOK",
  "HVEC2", "HVEC3", "HVEC4", "FVEC2", "FVEC3", "FVEC4", "SAMPLER3DRECT",
  "SIZEOF", "CAST", "NAMESPACE", "USING", "RESOURCE", "PATCH",
  "SUBROUTINE", "ERROR_TOK", "COMMON", "PARTITION", "ACTIVE", "FILTER",
  "ROW_MAJOR", "THEN", "'('", "')'", "'['", "']'", "','", "'+'", "'-'",
  "'!'", "'~'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept", "translation_unit",
  "$@1", "version_statement", "pragma_statement",
  "extension_statement_list", "any_identifier", "extension_statement",
  "external_declaration_list", "variable_identifier", "primary_expression",
  "postfix_expression", "integer_expression", "function_call",
  "function_call_or_method", "function_call_generic",
  "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "function_prototype",
  "function_declarator", "function_header_with_parameters",
  "function_header", "parameter_declarator", "parameter_declaration",
  "parameter_qualifier", "parameter_direction_qualifier",
  "parameter_type_specifier", "init_declarator_list", "single_declaration",
  "fully_specified_type", "layout_qualifier", "layout_qualifier_id_list",
  "layout_qualifier_id", "interface_block_layout_qualifier",
  "subroutine_qualifier", "subroutine_type_list",
  "interpolation_qualifier", "type_qualifier",
  "auxiliary_storage_qualifier", "storage_qualifier", "memory_qualifier",
  "array_specifier", "type_specifier", "type_specifier_nonarray",
  "basic_type_specifier_nonarray", "precision_qualifier",
  "struct_specifier", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "initializer",
  "initializer_list", "declaration_statement", "statement",
  "simple_statement", "compound_statement", "$@2",
  "statement_no_new_scope", "compound_statement_no_new_scope",
  "statement_list", "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "switch_statement",
  "switch_body", "case_label", "case_label_list", "case_statement",
  "case_statement_list", "iteration_statement", "for_init_statement",
  "conditionopt", "for_rest_statement", "jump_statement",
  "demote_statement", "external_declaration", "function_definition",
  "interface_block", "basic_interface_block", "interface_qualifier",
  "instance_name_opt", "member_list", "member_declaration",
  "layout_uniform_defaults", "layout_buffer_defaults",
  "layout_in_defaults", "layout_out_defaults", "layout_defaults", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-329)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-295)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -44,    -6,    44,  -329,   143,  -329,    39,  -329,  -329,  -329,
    -329,    21,   181,  1770,  -329,  -329,    52,  -329,  -329,  -329,
     109,  -329,   123,   128,  -329,   140,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,   -23,  -329,  -329,
    2297,  2297,  -329,  -329,  -329,   167,   104,   108,   112,   119,
     134,   147,   161,    95,   247,  -329,   121,  -329,  -329,  1670,
    -329,    57,   126,   125,   321,  -111,  -329,   207,  2361,  2427,
    2427,    31,  2491,  2427,  2491,  -329,   137,  -329,  2427,  -329,
    -329,  -329,  -329,  -329,   232,  -329,  -329,  -329,  -329,  -329,
     181,  2219,   120,  -329,  -329,  -329,  -329,  -329,  -329,  2427,
    2427,  -329,  2427,  -329,  2427,  2427,  -329,  -329,    31,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,    55,  -329,   181,  -329,
    -329,  -329,   812,  -329,  -329,   390,   390,  -329,  -329,  -329,
     390,  -329,    51,   390,   390,   390,   181,  -329,   144,   148,
     -54,   153,   -21,   -20,   -19,   -16,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  2491,  -329,
    -329,  2013,   138,  -329,   122,   201,   181,   942,  -329,  2219,
     136,  -329,  -329,  -329,   139,   -33,  -329,  -329,  -329,    30,
     141,   142,  1295,   160,   165,   146,   151,  1828,   168,   169,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  2089,  2089,
    2089,  -329,  -329,  -329,  -329,  -329,   164,  -329,  -329,  -329,
      79,  -329,  -329,  -329,   188,    58,  2144,   190,   248,  2089,
     105,    81,   184,   -52,   197,   180,   182,   179,   274,   275,
     -47,  -329,  -329,   -92,  -329,   185,   200,  -329,  -329,  -329,
    -329,   492,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,    31,   181,  -329,  -329,  -329,   -53,  1775,
     -39,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,   203,
    -329,  2068,  2219,  -329,   137,   -87,  -329,  -329,  -329,  1006,
    -329,  2089,  -329,    55,  -329,   181,  -329,  -329,  -329,   303,
    -329,  1584,  2089,  -329,  -329,  -329,   -68,  2089,  1958,  -329,
    -329,    63,  -329,  1454,  -329,  -329,   296,  2089,  -329,  -329,
    2089,   209,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  2089,  -329,  2089,  2089,  2089,
    2089,  2089,  2089,  2089,  2089,  2089,  2089,  2089,  2089,  2089,
    2089,  2089,  2089,  2089,  2089,  2089,  2089,  2089,  -329,  -329,
    -329,  -329,   181,   137,  1775,     3,  1775,  -329,  -329,  1775,
    -329,  -329,   208,   181,   191,  2219,   138,   181,  -329,  -329,
    -329,  -329,  -329,   219,  -329,  -329,  1958,    65,  -329,    70,
     216,   181,   220,  -329,   652,  -329,   221,   216,  -329,  -329,
    -329,  -329,  -329,   105,   105,    81,    81,   184,   184,   184,
     184,   -52,   -52,   197,   180,   182,   179,   274,   275,  -115,
    -329,  -329,   138,  -329,  1775,  -329,  -117,  -329,  -329,   -48,
     318,  -329,  -329,  2089,  -329,   205,   226,  1454,   211,   210,
    1295,  -329,  -329,  2089,  -329,   948,  -329,  -329,   137,   213,
      72,  2089,  1295,   360,  -329,    -7,  -329,  1775,  -329,  -329,
    -329,  -329,   138,  -329,   214,   216,  -329,  1454,  2089,   218,
    -329,  -329,  1136,  1454,    -5,  -329,  -329,  -329,  -110,  -329,
    -329,  -329,  -329,  -329,  1454,  -329
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,     0,     0,    14,     0,     1,     2,    16,    17,    18,
       5,     0,     0,     0,    15,     6,     0,   186,   185,   209,
     192,   182,   188,   189,   190,   191,   187,   183,   163,   162,
     161,   194,   195,   196,   197,   198,   193,     0,   208,   207,
     164,   165,   213,   212,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   184,   157,   285,   283,     3,
     282,     0,     0,   115,   124,     0,   134,   139,   169,   171,
     168,     0,   166,   167,   170,   146,   203,   205,   172,   206,
      20,   281,   112,   287,     0,   310,   311,   312,   313,   284,
       0,     0,     0,   192,   188,   189,   191,    23,    24,   164,
     165,   144,   169,   174,   166,   170,   145,   173,     0,     7,
       8,     9,    10,    12,    13,    11,     0,   210,     0,    22,
      21,   109,     0,   286,   113,   124,   124,   130,   131,   132,
     124,   116,     0,   124,   124,   124,     0,   110,    16,    18,
     140,     0,   192,   188,   189,   191,   176,   288,   302,   304,
     306,   308,   177,   175,   147,   178,   295,   179,   169,   181,
     289,     0,   204,   180,     0,     0,     0,     0,   216,     0,
       0,   156,   155,   154,   151,     0,   149,   153,   159,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    30,    32,    26,    27,    33,    28,    29,     0,     0,
       0,    57,    58,    59,    60,   248,   239,   243,    25,    35,
      53,    37,    42,    43,     0,     0,    47,     0,    61,     0,
      65,    68,    71,    76,    79,    81,    83,    85,    87,    89,
      91,    93,   106,     0,   228,     0,   146,   231,   245,   230,
     229,     0,   232,   233,   234,   235,   236,   237,   117,   125,
     126,   122,   123,     0,   133,   127,   129,   128,   135,     0,
     141,   118,   305,   307,   309,   303,   199,    61,   108,     0,
      51,     0,     0,    19,   221,     0,   219,   215,   217,     0,
     111,     0,   148,     0,   158,     0,   276,   275,   242,     0,
     241,     0,     0,   280,   279,   277,     0,     0,     0,    54,
      55,     0,   238,     0,    39,    40,     0,     0,    45,    44,
       0,   208,    48,    50,    96,    97,    99,    98,   101,   102,
     103,   104,   105,   100,    95,     0,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,   244,
     247,   246,     0,   119,     0,   136,     0,   223,   143,     0,
     200,   201,     0,     0,     0,   299,   222,     0,   218,   214,
     152,   150,   160,     0,   270,   269,   272,     0,   278,     0,
     253,     0,     0,    34,     0,    38,     0,    41,    49,    94,
      62,    63,    64,    66,    67,    69,    70,    74,    75,    72,
      73,    77,    78,    80,    82,    84,    86,    88,    90,     0,
     107,   120,   121,   138,     0,   226,     0,   142,   202,     0,
     296,   300,   220,     0,   271,     0,     0,     0,     0,     0,
       0,   240,    36,     0,   137,     0,   224,   301,   297,     0,
       0,   273,     0,   252,   250,     0,   255,     0,   266,    92,
     225,   227,   298,   290,     0,   274,   268,     0,     0,     0,
     256,   260,     0,   264,     0,   254,   267,   251,     0,   259,
     262,   261,   263,   257,   265,   258
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -329,  -329,  -329,  -329,  -329,  -329,    14,    24,  -329,   124,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
     149,  -329,   -67,   -61,  -157,   -65,    37,    38,    36,    40,
      42,    35,  -329,  -153,  -144,  -329,  -146,  -234,     4,    26,
    -329,  -329,  -329,  -329,   256,    62,  -329,  -329,  -329,  -329,
     -90,     1,  -329,    99,  -329,  -329,  -329,  -329,   511,   -38,
    -329,    -9,  -131,   -13,  -329,  -329,   198,  -329,   215,  -145,
      25,    20,  -272,  -329,    98,  -226,  -177,  -329,  -329,  -328,
     329,    88,   101,  -329,  -329,    17,  -329,  -329,   -66,  -329,
     -63,  -329,  -329,  -329,  -329,  -329,  -329,  -329,   343,  -329,
      12,  -329,   331,  -329,    41,  -329,   336,   337,   340,   341,
    -329
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    13,     3,    58,     6,   274,   350,    59,   208,
     209,   210,   386,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   325,   233,   269,   234,   235,
      62,    63,    64,   251,   131,   132,   133,   252,    65,    66,
      67,   102,   175,   176,   177,    69,   179,    70,    71,    72,
      73,   105,   162,   270,    76,    77,    78,    79,   167,   168,
     275,   276,   358,   416,   237,   238,   239,   240,   303,   289,
     290,   241,   242,   243,   444,   382,   244,   446,   461,   462,
     463,   464,   245,   376,   425,   426,   246,   247,    80,    81,
      82,    83,    84,   439,   364,   365,    85,    86,    87,    88,
      89
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,   166,   104,   104,    74,   288,   334,   335,   268,   260,
     458,   459,   458,   459,    68,   351,   345,    60,    11,     7,
       8,     9,   278,  -294,  -291,  -292,    16,   435,  -293,   347,
      14,   104,   104,   136,   347,   104,    19,   362,     1,    61,
     104,   296,     4,   433,     5,   436,    75,   370,   475,   137,
      74,    92,   347,   104,   301,   134,    19,   367,   154,    74,
      68,   104,   104,    60,   104,    74,   104,   104,   348,    68,
      37,    38,   312,   368,    39,   158,   347,   166,    75,   166,
     147,   140,   413,   119,   415,    61,   160,   417,   161,   161,
      37,    38,   378,   171,    39,   170,   367,     7,     8,     9,
     336,   337,   448,   271,   165,   259,   354,    15,   282,   236,
     346,   283,   437,    74,   456,   357,   134,   134,   268,   254,
     359,   134,    12,   158,   134,   134,   134,   355,   268,   104,
     174,   104,   178,   253,   278,   304,   305,    90,    91,   262,
     263,   264,   434,   366,   265,   271,   377,    53,    54,    74,
     258,   379,   380,  -294,    75,   460,    75,   473,   351,   158,
     172,   387,   414,   451,   101,   106,   388,  -291,    54,   236,
     147,   284,  -292,    74,   285,   465,   306,   397,   398,   399,
     400,   389,   363,   158,  -293,     7,     8,     9,   249,   166,
     109,   141,   250,   173,   110,   255,   256,   257,   111,   309,
     409,   443,   310,   410,   383,   112,   427,   347,   381,   347,
     357,   428,   357,   454,   347,   357,   347,   121,   122,   -52,
     113,   307,   412,     7,     8,     9,   330,   331,   236,    10,
     380,   467,    74,   114,   104,   116,   470,   472,   332,   333,
     352,   104,   158,   108,    42,    43,    44,   115,   472,   138,
       8,   139,   117,   288,   327,   328,   329,   338,   339,    75,
     104,   118,   135,   393,   394,   288,    75,   124,   353,   125,
     357,   395,   396,   401,   402,   363,   164,   440,   236,   161,
     271,   169,    74,   272,   -23,   236,   381,   273,   -24,   449,
     236,   357,   158,   261,    74,   455,   280,   174,   281,   372,
     291,   286,   287,   357,   158,   292,   293,   452,   297,   298,
     267,   294,   468,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   135,   135,   126,   302,   104,   135,   308,
     313,   135,   135,   135,   340,   342,   343,   341,   104,   344,
     -51,   127,   128,   129,   373,   121,   360,   299,   300,   385,
     -46,   418,    75,   420,    31,    32,    33,    34,    35,   423,
     347,   430,   438,   236,   432,   441,   411,   442,   326,   447,
     457,   236,   445,   453,   466,    74,   469,   403,   405,   404,
     408,   248,   371,   406,   279,   158,   407,   422,   419,   374,
     123,   384,   375,   424,   126,   429,   471,   130,    42,    43,
      44,   474,   120,   156,   148,   149,   421,   324,   150,   151,
     127,   128,   129,     0,   236,     0,     0,   236,    74,     0,
     267,    74,     0,    31,    32,    33,    34,    35,   158,   236,
     267,   158,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,   236,     0,     0,     0,    74,   236,
     236,     0,     0,    74,    74,     0,     0,     0,   158,     0,
       0,   236,  -114,   158,   158,    74,   130,    42,    43,    44,
       0,     0,     0,     0,     0,   158,   390,   391,   392,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,    17,    18,    19,   180,    20,
     181,   182,     0,   183,   184,   185,   186,   187,   188,     0,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,   189,    97,    39,    98,   190,   191,   192,
     193,   194,   195,   196,   197,     0,     0,     0,   198,   199,
       0,   103,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,     0,    45,     0,    12,     0,     0,     0,   146,
     152,   153,     0,   155,   157,   159,     0,     0,    53,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
     103,   107,     0,   146,     0,   155,   159,     0,     0,     0,
       0,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,     0,     0,   201,   202,   203,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   349,    17,    18,    19,   180,    20,
     181,   182,     0,   183,   184,   185,   186,   187,   188,   146,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,   189,    97,    39,    98,   190,   191,   192,
     193,   194,   195,   196,   197,     0,     0,     0,   198,   199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,     0,    45,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,     0,     0,   201,   202,   203,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   431,    17,    18,    19,   180,    20,
     181,   182,     0,   183,   184,   185,   186,   187,   188,     0,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,   189,    97,    39,    98,   190,   191,   192,
     193,   194,   195,   196,   197,     0,     0,     0,   198,   199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    17,    18,    19,     0,    93,
       0,     0,   200,    19,     0,     0,     0,   201,   202,   203,
     204,    21,    94,    95,    24,    96,    26,    27,    28,    29,
      30,     0,   205,   206,   207,    31,    32,    33,    34,    35,
      36,    37,    38,     0,     0,    39,     0,    37,    38,     0,
      97,    39,    98,   190,   191,   192,   193,   194,   195,   196,
     197,     0,     0,     0,   198,   199,     0,     0,     0,    17,
      18,    19,     0,    93,     0,     0,     0,    99,   100,    42,
      43,    44,     0,     0,     0,    21,    94,    95,    24,    96,
      26,    27,    28,    29,    30,     0,     0,     0,    53,    31,
      32,    33,    34,    35,    36,    37,    38,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    99,   100,    42,    43,    44,     0,     0,   200,     0,
       0,     0,     0,   201,   202,   203,   204,     0,     0,     0,
       0,     0,    53,     0,   277,     0,     0,     0,     0,   356,
     450,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    17,
      18,    19,   180,    20,   181,   182,     0,   183,   184,   185,
     186,   187,   188,   458,   459,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     0,     0,     0,   369,    31,
      32,    33,    34,    35,    36,    37,    38,   189,    97,    39,
      98,   190,   191,   192,   193,   194,   195,   196,   197,     0,
       0,     0,   198,   199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
       0,   201,   202,   203,   204,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   206,    17,    18,
      19,   180,    20,   181,   182,     0,   183,   184,   185,   186,
     187,   188,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,    38,   189,    97,    39,    98,
     190,   191,   192,   193,   194,   195,   196,   197,     0,     0,
       0,   198,   199,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,     0,     0,
       0,     0,     0,     0,     0,   200,     0,     0,     0,     0,
     201,   202,   203,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   205,   122,    17,    18,    19,
     180,    20,   181,   182,     0,   183,   184,   185,   186,   187,
     188,     0,     0,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,   189,    97,    39,    98,   190,
     191,   192,   193,   194,   195,   196,   197,     0,     0,     0,
     198,   199,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    17,    18,    19,
       0,    20,     0,     0,   200,     0,     0,     0,     0,   201,
     202,   203,   204,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,   205,   206,     0,    31,    32,    33,
      34,    35,    36,    37,    38,     0,    97,    39,    98,   190,
     191,   192,   193,   194,   195,   196,   197,     0,     0,     0,
     198,   199,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,     0,    45,     0,     0,     0,     0,
       0,     0,     0,    17,    18,    19,     0,    20,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,    54,     0,    31,    32,    33,    34,    35,    36,    37,
      38,     0,     0,    39,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,   201,
     202,   203,   204,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,    40,    41,    42,    43,    44,
       0,    45,     0,    12,     0,     0,     0,     0,     0,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,    17,    18,    19,     0,    20,     0,     0,
      19,     0,     0,     0,     0,     0,     0,    54,     0,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,    55,    56,    31,    32,    33,    34,    35,    36,    37,
      38,     0,     0,    39,    37,    38,     0,    97,    39,    98,
     190,   191,   192,   193,   194,   195,   196,   197,     0,     0,
      57,   198,   199,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
       0,    45,     0,     0,     0,     0,     0,     0,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    37,    38,     0,
      97,    39,    98,   190,   191,   192,   193,   194,   195,   196,
     197,     0,     0,     0,   198,   199,     0,    54,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,     0,     0,     0,     0,
     201,   202,   203,   204,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,   356,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    18,    19,     0,    93,     0,     0,   200,     0,
       0,     0,     0,   201,   202,   203,   204,    21,    94,    95,
      24,    96,    26,    27,    28,    29,    30,     0,   295,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,     0,
      97,    39,    98,   190,   191,   192,   193,   194,   195,   196,
     197,     0,     0,     0,   198,   199,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,   100,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    53,    97,    39,    98,   190,   191,
     192,   193,   194,   195,   196,   197,     0,     0,     0,   198,
     199,     0,     0,    19,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,     0,     0,     0,    19,     0,     0,     0,   200,     0,
       0,     0,     0,   201,   202,   203,   204,    37,    38,     0,
      97,    39,    98,   190,   191,   192,   193,   194,   195,   196,
     197,     0,     0,     0,   198,   199,     0,     0,    37,    38,
      54,    97,    39,    98,   190,   191,   192,   193,   194,   195,
     196,   197,     0,     0,     0,   198,   199,     0,     0,    19,
       0,     0,     0,   200,     0,     0,   266,     0,   201,   202,
     203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,   311,    54,    97,    39,    98,   190,
     191,   192,   193,   194,   195,   196,   197,     0,     0,     0,
     198,   199,     0,     0,     0,     0,    54,     0,   200,     0,
       0,   361,     0,   201,   202,   203,   204,     0,     0,     0,
       0,     0,    17,    18,    19,     0,    93,     0,     0,   200,
       0,     0,     0,     0,   201,   202,   203,   204,    21,    94,
      95,    24,    96,    26,    27,    28,    29,    30,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
       0,    54,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,   201,
     202,   203,   204,     0,    99,   100,    42,    43,    44,     0,
      17,    18,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    21,    94,    95,    24,
      96,    26,    27,    28,    29,    30,     0,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    54,     0,     0,    97,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,    18,     0,     0,   142,     0,
       0,     0,    99,   100,    42,    43,    44,     0,     0,     0,
      21,   143,   144,    24,   145,    26,    27,    28,    29,    30,
       0,     0,     0,    53,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      17,    18,     0,     0,    93,     0,    99,   100,    42,    43,
      44,     0,     0,     0,     0,     0,    21,    94,    95,    24,
      96,    26,    27,    28,    29,    30,     0,    53,     0,     0,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    17,    18,     0,     0,    20,     0,
       0,     0,    99,   100,    42,    43,    44,     0,     0,     0,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       0,     0,     0,    53,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    99,   100,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56
};

static const yytype_int16 yycheck[] =
{
      13,    91,    40,    41,    13,   182,    58,    59,   161,   140,
      17,    18,    17,    18,    13,   241,    63,    13,     4,    42,
      43,    44,   167,    44,    44,    44,    12,   144,    44,   144,
       6,    69,    70,   144,   144,    73,     5,   271,    82,    13,
      78,   187,    48,   158,     0,   162,    59,   281,   158,   160,
      59,    37,   144,    91,   200,    64,     5,   144,    71,    68,
      59,    99,   100,    59,   102,    74,   104,   105,   160,    68,
      39,    40,   216,   160,    43,    74,   144,   167,    91,   169,
      68,    67,   354,    59,   356,    59,    74,   359,   142,   142,
      39,    40,   160,    38,    43,   108,   144,    42,    43,    44,
     152,   153,   430,   142,    90,   159,   159,    86,   141,   122,
     157,   144,   160,   122,   442,   259,   125,   126,   271,   132,
     159,   130,    83,   122,   133,   134,   135,   258,   281,   167,
     116,   169,   118,   132,   279,    56,    57,    85,   161,   160,
     160,   160,   414,   274,   160,   142,   292,    96,   117,   158,
     136,   297,   298,    44,   167,   162,   169,   162,   384,   158,
     105,   307,   159,   435,    40,    41,   310,    44,   117,   182,
     158,   141,    44,   182,   144,   447,    97,   334,   335,   336,
     337,   325,   272,   182,    44,    42,    43,    44,   126,   279,
      86,    67,   130,   138,    86,   133,   134,   135,    86,   141,
     346,   427,   144,   347,   141,    86,   141,   144,   298,   144,
     354,   141,   356,   141,   144,   359,   144,   160,   161,   140,
      86,   142,   353,    42,    43,    44,   145,   146,   241,    86,
     376,   457,   241,    86,   272,   140,   462,   463,    54,    55,
     253,   279,   241,    45,    77,    78,    79,    86,   474,    42,
      43,    44,     5,   430,   149,   150,   151,    60,    61,   272,
     298,   140,    64,   330,   331,   442,   279,   141,   254,   144,
     414,   332,   333,   338,   339,   365,    44,   423,   291,   142,
     142,   161,   291,   161,   140,   298,   376,    86,   140,   433,
     303,   435,   291,   140,   303,   441,   160,   283,   159,   285,
     140,   160,   160,   447,   303,   140,   160,   438,   140,   140,
     161,   160,   458,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,   125,   126,     4,   162,   365,   130,   141,
     140,   133,   134,   135,   154,   156,    62,   155,   376,    64,
     140,    20,    21,    22,    41,   160,   143,   198,   199,    53,
     141,   143,   365,   162,    33,    34,    35,    36,    37,   140,
     144,   141,    44,   376,   143,   160,   352,   141,   219,   159,
      10,   384,   161,   160,   160,   384,   158,   340,   342,   341,
     345,   125,   283,   343,   169,   384,   344,   367,   363,   291,
      61,   303,   291,   376,     4,   381,   462,    76,    77,    78,
      79,   464,    59,    72,    68,    68,   365,   159,    68,    68,
      20,    21,    22,    -1,   427,    -1,    -1,   430,   427,    -1,
     271,   430,    -1,    33,    34,    35,    36,    37,   427,   442,
     281,   430,    -1,   442,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   442,   457,    -1,    -1,    -1,   457,   462,
     463,    -1,    -1,   462,   463,    -1,    -1,    -1,   457,    -1,
      -1,   474,   141,   462,   463,   474,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,   474,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    -1,    -1,    -1,    68,
      69,    70,    -1,    72,    73,    74,    -1,    -1,    96,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      99,   100,    -1,   102,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,   161,   162,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,   158,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,   161,   162,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,     3,     4,     5,    -1,     7,
      -1,    -1,   140,     5,    -1,    -1,    -1,   145,   146,   147,
     148,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,   160,   161,   162,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    -1,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    96,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    -1,    -1,   140,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    96,    -1,   162,    -1,    -1,    -1,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,   162,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,   161,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,
     145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,   161,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,     3,     4,     5,
      -1,     7,    -1,    -1,   140,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,   160,   161,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,   117,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    -1,   131,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,   131,   132,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
     160,    56,    57,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    -1,   117,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,
     145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,   140,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,   160,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    96,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      57,    -1,    -1,     5,    -1,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,    -1,    -1,     5,    -1,    -1,    -1,   140,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    39,    40,
     117,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,     5,
      -1,    -1,    -1,   140,    -1,    -1,   143,    -1,   145,   146,
     147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,   117,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,   117,    -1,   140,    -1,
      -1,   143,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,   140,
      -1,    -1,    -1,    -1,   145,   146,   147,   148,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,   117,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,    -1,    75,    76,    77,    78,    79,    -1,
       3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,   117,    -1,    -1,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    96,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
       3,     4,    -1,    -1,     7,    -1,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    96,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,     3,     4,    -1,    -1,     7,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    96,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    82,   164,   166,    48,     0,   168,    42,    43,    44,
      86,   169,    83,   165,   170,    86,   169,     3,     4,     5,
       7,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    33,    34,    35,    36,    37,    38,    39,    40,    43,
      75,    76,    77,    78,    79,    81,    89,    90,    91,    92,
      93,    94,    95,    96,   117,   131,   132,   160,   167,   171,
     201,   202,   203,   204,   205,   211,   212,   213,   214,   218,
     220,   221,   222,   223,   224,   226,   227,   228,   229,   230,
     261,   262,   263,   264,   265,   269,   270,   271,   272,   273,
      85,   161,   169,     7,    20,    21,    23,    42,    44,    75,
      76,   172,   214,   221,   222,   224,   172,   221,   229,    86,
      86,    86,    86,    86,    86,    86,   140,     5,   140,   170,
     261,   160,   161,   243,   141,   144,     4,    20,    21,    22,
      76,   207,   208,   209,   224,   229,   144,   160,    42,    44,
     169,   172,     7,    20,    21,    23,   221,   263,   269,   270,
     271,   272,   221,   221,   226,   221,   265,   221,   214,   221,
     263,   142,   225,   221,    44,   169,   213,   231,   232,   161,
     226,    38,   105,   138,   169,   215,   216,   217,   169,   219,
       6,     8,     9,    11,    12,    13,    14,    15,    16,    41,
      45,    46,    47,    48,    49,    50,    51,    52,    56,    57,
     140,   145,   146,   147,   148,   160,   161,   162,   172,   173,
     174,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   199,   201,   202,   226,   237,   238,   239,
     240,   244,   245,   246,   249,   255,   259,   260,   207,   208,
     208,   206,   210,   214,   226,   208,   208,   208,   169,   159,
     225,   140,   160,   160,   160,   160,   143,   183,   196,   200,
     226,   142,   161,    86,   169,   233,   234,   162,   232,   231,
     160,   159,   141,   144,   141,   144,   160,   160,   239,   242,
     243,   140,   140,   160,   160,   160,   199,   140,   140,   183,
     183,   199,   162,   241,    56,    57,    97,   142,   141,   141,
     144,    40,   197,   140,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,   159,   198,   183,   149,   150,   151,
     145,   146,    54,    55,    58,    59,   152,   153,    60,    61,
     154,   155,   156,    62,    64,    63,   157,   144,   160,   162,
     170,   238,   226,   169,   159,   225,   161,   197,   235,   159,
     143,   143,   200,   213,   267,   268,   225,   144,   160,   162,
     200,   216,   169,    41,   237,   245,   256,   199,   160,   199,
     199,   213,   248,   141,   244,    53,   175,   199,   197,   197,
     183,   183,   183,   185,   185,   186,   186,   187,   187,   187,
     187,   188,   188,   189,   190,   191,   192,   193,   194,   199,
     197,   169,   225,   235,   159,   235,   236,   235,   143,   233,
     162,   267,   234,   140,   248,   257,   258,   141,   141,   169,
     141,   162,   143,   158,   235,   144,   162,   160,    44,   266,
     199,   160,   141,   238,   247,   161,   250,   159,   242,   197,
     162,   235,   225,   160,   141,   199,   242,    10,    17,    18,
     162,   251,   252,   253,   254,   235,   160,   238,   199,   158,
     238,   251,   238,   162,   253,   158
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   163,   165,   164,   166,   166,   166,   167,   167,   167,
     167,   167,   167,   167,   168,   168,   169,   169,   169,   170,
     171,   171,   171,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   174,   174,   174,   174,   174,
     174,   175,   176,   177,   178,   178,   179,   179,   180,   180,
     181,   182,   182,   183,   183,   183,   183,   184,   184,   184,
     184,   185,   185,   185,   185,   186,   186,   186,   187,   187,
     187,   188,   188,   188,   188,   188,   189,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   199,   199,   200,   201,
     201,   201,   201,   202,   203,   203,   204,   204,   205,   206,
     206,   206,   207,   207,   208,   208,   208,   208,   208,   208,
     209,   209,   209,   210,   211,   211,   211,   211,   211,   212,
     212,   212,   212,   212,   212,   212,   213,   213,   214,   215,
     215,   216,   216,   216,   217,   217,   217,   218,   218,   219,
     219,   220,   220,   220,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   222,   222,   222,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   224,   224,   224,   224,   224,   225,
     225,   225,   225,   226,   226,   227,   227,   227,   228,   228,
     228,   229,   229,   229,   230,   230,   231,   231,   232,   233,
     233,   234,   234,   235,   235,   235,   236,   236,   237,   238,
     238,   239,   239,   239,   239,   239,   239,   239,   240,   241,
     240,   242,   242,   243,   243,   244,   244,   244,   245,   245,
     246,   247,   247,   248,   248,   249,   250,   250,   251,   251,
     252,   252,   253,   253,   254,   254,   255,   255,   255,   256,
     256,   257,   257,   258,   258,   259,   259,   259,   259,   259,
     260,   261,   261,   261,   261,   261,   262,   263,   263,   263,
     264,   265,   265,   265,   265,   265,   266,   266,   266,   267,
     267,   268,   269,   269,   270,   270,   271,   271,   272,   272,
     273,   273,   273,   273
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     4,     2,     2,     2,
       2,     2,     2,     2,     0,     2,     1,     1,     1,     5,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     4,     1,     3,     2,
       2,     1,     1,     1,     2,     2,     2,     1,     2,     3,
       2,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       2,     4,     1,     2,     1,     1,     2,     3,     3,     2,
       3,     3,     2,     2,     0,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     4,     6,     5,     1,
       2,     3,     5,     4,     2,     2,     1,     2,     4,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     4,     1,     2,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     5,     4,     1,     2,     3,     1,
       3,     1,     2,     1,     3,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       4,     1,     1,     2,     3,     1,     2,     2,     1,     2,
       5,     3,     1,     1,     4,     5,     2,     3,     3,     2,
       1,     2,     2,     2,     1,     2,     5,     7,     6,     1,
       1,     1,     0,     2,     3,     2,     2,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       7,     1,     1,     1,     1,     2,     0,     1,     2,     1,
       2,     3,     2,     3,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1
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
        yyerror (&yylloc, state, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, state); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (state);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, state);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, struct _mesa_glsl_parse_state *state)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), state);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, state); \
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct _mesa_glsl_parse_state *state)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (state);
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
yyparse (struct _mesa_glsl_parse_state *state)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 89 "glsl_parser.yy"
{
   yylloc.first_line = 1;
   yylloc.first_column = 1;
   yylloc.last_line = 1;
   yylloc.last_column = 1;
   yylloc.source = 0;
   yylloc.path = NULL;
}

#line 2690 "glsl_parser.tab.cc"

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, state);
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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 295 "glsl_parser.yy"
   {
      _mesa_glsl_initialize_types(state);
   }
#line 2905 "glsl_parser.tab.cc"
    break;

  case 3: /* translation_unit: version_statement extension_statement_list $@1 external_declaration_list  */
#line 299 "glsl_parser.yy"
   {
      delete state->symbols;
      state->symbols = new(ralloc_parent(state)) glsl_symbol_table;
      if (state->es_shader) {
         if (state->stage == MESA_SHADER_FRAGMENT) {
            state->symbols->add_default_precision_qualifier("int", ast_precision_medium);
         } else {
            state->symbols->add_default_precision_qualifier("float", ast_precision_high);
            state->symbols->add_default_precision_qualifier("int", ast_precision_high);
         }
         state->symbols->add_default_precision_qualifier("sampler2D", ast_precision_low);
         state->symbols->add_default_precision_qualifier("samplerExternalOES", ast_precision_low);
         state->symbols->add_default_precision_qualifier("samplerCube", ast_precision_low);
         state->symbols->add_default_precision_qualifier("atomic_uint", ast_precision_high);
      }
      _mesa_glsl_initialize_types(state);
   }
#line 2927 "glsl_parser.tab.cc"
    break;

  case 5: /* version_statement: VERSION_TOK INTCONSTANT EOL  */
#line 321 "glsl_parser.yy"
   {
      state->process_version_directive(&(yylsp[-1]), (yyvsp[-1].n), NULL);
      if (state->error) {
         YYERROR;
      }
   }
#line 2938 "glsl_parser.tab.cc"
    break;

  case 6: /* version_statement: VERSION_TOK INTCONSTANT any_identifier EOL  */
#line 328 "glsl_parser.yy"
   {
      state->process_version_directive(&(yylsp[-2]), (yyvsp[-2].n), (yyvsp[-1].identifier));
      if (state->error) {
         YYERROR;
      }
   }
#line 2949 "glsl_parser.tab.cc"
    break;

  case 7: /* pragma_statement: PRAGMA_DEBUG_ON EOL  */
#line 337 "glsl_parser.yy"
                       { (yyval.node) = NULL; }
#line 2955 "glsl_parser.tab.cc"
    break;

  case 8: /* pragma_statement: PRAGMA_DEBUG_OFF EOL  */
#line 338 "glsl_parser.yy"
                          { (yyval.node) = NULL; }
#line 2961 "glsl_parser.tab.cc"
    break;

  case 9: /* pragma_statement: PRAGMA_OPTIMIZE_ON EOL  */
#line 339 "glsl_parser.yy"
                            { (yyval.node) = NULL; }
#line 2967 "glsl_parser.tab.cc"
    break;

  case 10: /* pragma_statement: PRAGMA_OPTIMIZE_OFF EOL  */
#line 340 "glsl_parser.yy"
                             { (yyval.node) = NULL; }
#line 2973 "glsl_parser.tab.cc"
    break;

  case 11: /* pragma_statement: PRAGMA_INVARIANT_ALL EOL  */
#line 342 "glsl_parser.yy"
   {
      /* Pragma invariant(all) cannot be used in a fragment shader.
       *
       * Page 27 of the GLSL 1.20 spec, Page 53 of the GLSL ES 3.00 spec:
       *
       *     "It is an error to use this pragma in a fragment shader."
       */
      if (state->is_version(120, 300) &&
          state->stage == MESA_SHADER_FRAGMENT) {
         _mesa_glsl_error(& (yylsp[-1]), state,
                          "pragma `invariant(all)' cannot be used "
                          "in a fragment shader.");
      } else if (!state->is_version(120, 100)) {
         _mesa_glsl_warning(& (yylsp[-1]), state,
                            "pragma `invariant(all)' not supported in %s "
                            "(GLSL ES 1.00 or GLSL 1.20 required)",
                            state->get_version_string());
      } else {
         state->all_invariant = true;
      }

      (yyval.node) = NULL;
   }
#line 3001 "glsl_parser.tab.cc"
    break;

  case 12: /* pragma_statement: PRAGMA_WARNING_ON EOL  */
#line 366 "glsl_parser.yy"
   {
      linear_ctx *mem_ctx = state->linalloc;
      (yyval.node) = new(mem_ctx) ast_warnings_toggle(true);
   }
#line 3010 "glsl_parser.tab.cc"
    break;

  case 13: /* pragma_statement: PRAGMA_WARNING_OFF EOL  */
#line 371 "glsl_parser.yy"
   {
      linear_ctx *mem_ctx = state->linalloc;
      (yyval.node) = new(mem_ctx) ast_warnings_toggle(false);
   }
#line 3019 "glsl_parser.tab.cc"
    break;

  case 19: /* extension_statement: EXTENSION any_identifier COLON any_identifier EOL  */
#line 390 "glsl_parser.yy"
   {
      if (!_mesa_glsl_process_extension((yyvsp[-3].identifier), & (yylsp[-3]), (yyvsp[-1].identifier), & (yylsp[-1]), state)) {
         YYERROR;
      }
   }
#line 3029 "glsl_parser.tab.cc"
    break;

  case 20: /* external_declaration_list: external_declaration  */
#line 399 "glsl_parser.yy"
   {
      /* FINISHME: The NULL test is required because pragmas are set to
       * FINISHME: NULL. (See production rule for external_declaration.)
       */
      if ((yyvsp[0].node) != NULL)
         state->translation_unit.push_tail(& (yyvsp[0].node)->link);
   }
#line 3041 "glsl_parser.tab.cc"
    break;

  case 21: /* external_declaration_list: external_declaration_list external_declaration  */
#line 407 "glsl_parser.yy"
   {
      /* FINISHME: The NULL test is required because pragmas are set to
       * FINISHME: NULL. (See production rule for external_declaration.)
       */
      if ((yyvsp[0].node) != NULL)
         state->translation_unit.push_tail(& (yyvsp[0].node)->link);
   }
#line 3053 "glsl_parser.tab.cc"
    break;

  case 22: /* external_declaration_list: external_declaration_list extension_statement  */
#line 414 "glsl_parser.yy"
                                                   {
      if (!state->allow_extension_directive_midshader) {
         _mesa_glsl_error(& (yylsp[0]), state,
                          "#extension directive is not allowed "
                          "in the middle of a shader");
         YYERROR;
      }
   }
#line 3066 "glsl_parser.tab.cc"
    break;

  case 25: /* primary_expression: variable_identifier  */
#line 431 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_identifier, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.identifier = (yyvsp[0].identifier);
   }
#line 3077 "glsl_parser.tab.cc"
    break;

  case 26: /* primary_expression: INTCONSTANT  */
#line 438 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_int_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.int_constant = (yyvsp[0].n);
   }
#line 3088 "glsl_parser.tab.cc"
    break;

  case 27: /* primary_expression: UINTCONSTANT  */
#line 445 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_uint_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.uint_constant = (yyvsp[0].n);
   }
#line 3099 "glsl_parser.tab.cc"
    break;

  case 28: /* primary_expression: INT64CONSTANT  */
#line 452 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_int64_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.int64_constant = (yyvsp[0].n64);
   }
#line 3110 "glsl_parser.tab.cc"
    break;

  case 29: /* primary_expression: UINT64CONSTANT  */
#line 459 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_uint64_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.uint64_constant = (yyvsp[0].n64);
   }
#line 3121 "glsl_parser.tab.cc"
    break;

  case 30: /* primary_expression: FLOAT16CONSTANT  */
#line 466 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_float16_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.float16_constant = (yyvsp[0].real);
   }
#line 3132 "glsl_parser.tab.cc"
    break;

  case 31: /* primary_expression: FLOATCONSTANT  */
#line 473 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_float_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.float_constant = (yyvsp[0].real);
   }
#line 3143 "glsl_parser.tab.cc"
    break;

  case 32: /* primary_expression: DOUBLECONSTANT  */
#line 480 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_double_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.double_constant = (yyvsp[0].dreal);
   }
#line 3154 "glsl_parser.tab.cc"
    break;

  case 33: /* primary_expression: BOOLCONSTANT  */
#line 487 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_bool_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.bool_constant = (yyvsp[0].n);
   }
#line 3165 "glsl_parser.tab.cc"
    break;

  case 34: /* primary_expression: '(' expression ')'  */
#line 494 "glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
   }
#line 3173 "glsl_parser.tab.cc"
    break;

  case 36: /* postfix_expression: postfix_expression '[' integer_expression ']'  */
#line 502 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_array_index, (yyvsp[-3].expression), (yyvsp[-1].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[-3]), (yylsp[0]));
   }
#line 3183 "glsl_parser.tab.cc"
    break;

  case 37: /* postfix_expression: function_call  */
#line 508 "glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[0].expression);
   }
#line 3191 "glsl_parser.tab.cc"
    break;

  case 38: /* postfix_expression: postfix_expression DOT_TOK FIELD_SELECTION  */
#line 512 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_field_selection, (yyvsp[-2].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
      (yyval.expression)->primary_expression.identifier = (yyvsp[0].identifier);
   }
#line 3202 "glsl_parser.tab.cc"
    break;

  case 39: /* postfix_expression: postfix_expression INC_OP  */
#line 519 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_post_inc, (yyvsp[-1].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 3212 "glsl_parser.tab.cc"
    break;

  case 40: /* postfix_expression: postfix_expression DEC_OP  */
#line 525 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_post_dec, (yyvsp[-1].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 3222 "glsl_parser.tab.cc"
    break;

  case 48: /* function_call_header_with_parameters: function_call_header assignment_expression  */
#line 556 "glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
      (yyval.expression)->set_location((yylsp[-1]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3232 "glsl_parser.tab.cc"
    break;

  case 49: /* function_call_header_with_parameters: function_call_header_with_parameters ',' assignment_expression  */
#line 562 "glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-2].expression);
      (yyval.expression)->set_location((yylsp[-2]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3242 "glsl_parser.tab.cc"
    break;

  case 51: /* function_identifier: type_specifier  */
#line 578 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_function_expression((yyvsp[0].type_specifier));
      (yyval.expression)->set_location((yylsp[0]));
      }
#line 3252 "glsl_parser.tab.cc"
    break;

  case 52: /* function_identifier: postfix_expression  */
#line 584 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_function_expression((yyvsp[0].expression));
      (yyval.expression)->set_location((yylsp[0]));
      }
#line 3262 "glsl_parser.tab.cc"
    break;

  case 54: /* unary_expression: INC_OP unary_expression  */
#line 599 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_pre_inc, (yyvsp[0].expression), NULL, NULL);
      (yyval.expression)->set_location((yylsp[-1]));
   }
#line 3272 "glsl_parser.tab.cc"
    break;

  case 55: /* unary_expression: DEC_OP unary_expression  */
#line 605 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_pre_dec, (yyvsp[0].expression), NULL, NULL);
      (yyval.expression)->set_location((yylsp[-1]));
   }
#line 3282 "glsl_parser.tab.cc"
    break;

  case 56: /* unary_expression: unary_operator unary_expression  */
#line 611 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression((yyvsp[-1].n), (yyvsp[0].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 3292 "glsl_parser.tab.cc"
    break;

  case 57: /* unary_operator: '+'  */
#line 620 "glsl_parser.yy"
         { (yyval.n) = ast_plus; }
#line 3298 "glsl_parser.tab.cc"
    break;

  case 58: /* unary_operator: '-'  */
#line 621 "glsl_parser.yy"
         { (yyval.n) = ast_neg; }
#line 3304 "glsl_parser.tab.cc"
    break;

  case 59: /* unary_operator: '!'  */
#line 622 "glsl_parser.yy"
         { (yyval.n) = ast_logic_not; }
#line 3310 "glsl_parser.tab.cc"
    break;

  case 60: /* unary_operator: '~'  */
#line 623 "glsl_parser.yy"
         { (yyval.n) = ast_bit_not; }
#line 3316 "glsl_parser.tab.cc"
    break;

  case 62: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 629 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_mul, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3326 "glsl_parser.tab.cc"
    break;

  case 63: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 635 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_div, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3336 "glsl_parser.tab.cc"
    break;

  case 64: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 641 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_mod, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3346 "glsl_parser.tab.cc"
    break;

  case 66: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 651 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_add, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3356 "glsl_parser.tab.cc"
    break;

  case 67: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 657 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_sub, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3366 "glsl_parser.tab.cc"
    break;

  case 69: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 667 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_lshift, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3376 "glsl_parser.tab.cc"
    break;

  case 70: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 673 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_rshift, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3386 "glsl_parser.tab.cc"
    break;

  case 72: /* relational_expression: relational_expression '<' shift_expression  */
#line 683 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_less, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3396 "glsl_parser.tab.cc"
    break;

  case 73: /* relational_expression: relational_expression '>' shift_expression  */
#line 689 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_greater, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3406 "glsl_parser.tab.cc"
    break;

  case 74: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 695 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_lequal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3416 "glsl_parser.tab.cc"
    break;

  case 75: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 701 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_gequal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3426 "glsl_parser.tab.cc"
    break;

  case 77: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 711 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_equal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3436 "glsl_parser.tab.cc"
    break;

  case 78: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 717 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_nequal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3446 "glsl_parser.tab.cc"
    break;

  case 80: /* and_expression: and_expression '&' equality_expression  */
#line 727 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_and, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3456 "glsl_parser.tab.cc"
    break;

  case 82: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 737 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_xor, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3466 "glsl_parser.tab.cc"
    break;

  case 84: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 747 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_or, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3476 "glsl_parser.tab.cc"
    break;

  case 86: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 757 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_and, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3486 "glsl_parser.tab.cc"
    break;

  case 88: /* logical_xor_expression: logical_xor_expression XOR_OP logical_and_expression  */
#line 767 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_xor, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3496 "glsl_parser.tab.cc"
    break;

  case 90: /* logical_or_expression: logical_or_expression OR_OP logical_xor_expression  */
#line 777 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_or, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3506 "glsl_parser.tab.cc"
    break;

  case 92: /* conditional_expression: logical_or_expression '?' expression ':' assignment_expression  */
#line 787 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_conditional, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-4]), (yylsp[0]));
   }
#line 3516 "glsl_parser.tab.cc"
    break;

  case 94: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 797 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression((yyvsp[-1].n), (yyvsp[-2].expression), (yyvsp[0].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3526 "glsl_parser.tab.cc"
    break;

  case 95: /* assignment_operator: '='  */
#line 805 "glsl_parser.yy"
                      { (yyval.n) = ast_assign; }
#line 3532 "glsl_parser.tab.cc"
    break;

  case 96: /* assignment_operator: MUL_ASSIGN  */
#line 806 "glsl_parser.yy"
                      { (yyval.n) = ast_mul_assign; }
#line 3538 "glsl_parser.tab.cc"
    break;

  case 97: /* assignment_operator: DIV_ASSIGN  */
#line 807 "glsl_parser.yy"
                      { (yyval.n) = ast_div_assign; }
#line 3544 "glsl_parser.tab.cc"
    break;

  case 98: /* assignment_operator: MOD_ASSIGN  */
#line 808 "glsl_parser.yy"
                      { (yyval.n) = ast_mod_assign; }
#line 3550 "glsl_parser.tab.cc"
    break;

  case 99: /* assignment_operator: ADD_ASSIGN  */
#line 809 "glsl_parser.yy"
                      { (yyval.n) = ast_add_assign; }
#line 3556 "glsl_parser.tab.cc"
    break;

  case 100: /* assignment_operator: SUB_ASSIGN  */
#line 810 "glsl_parser.yy"
                      { (yyval.n) = ast_sub_assign; }
#line 3562 "glsl_parser.tab.cc"
    break;

  case 101: /* assignment_operator: LEFT_ASSIGN  */
#line 811 "glsl_parser.yy"
                      { (yyval.n) = ast_ls_assign; }
#line 3568 "glsl_parser.tab.cc"
    break;

  case 102: /* assignment_operator: RIGHT_ASSIGN  */
#line 812 "glsl_parser.yy"
                      { (yyval.n) = ast_rs_assign; }
#line 3574 "glsl_parser.tab.cc"
    break;

  case 103: /* assignment_operator: AND_ASSIGN  */
#line 813 "glsl_parser.yy"
                      { (yyval.n) = ast_and_assign; }
#line 3580 "glsl_parser.tab.cc"
    break;

  case 104: /* assignment_operator: XOR_ASSIGN  */
#line 814 "glsl_parser.yy"
                      { (yyval.n) = ast_xor_assign; }
#line 3586 "glsl_parser.tab.cc"
    break;

  case 105: /* assignment_operator: OR_ASSIGN  */
#line 815 "glsl_parser.yy"
                      { (yyval.n) = ast_or_assign; }
#line 3592 "glsl_parser.tab.cc"
    break;

  case 106: /* expression: assignment_expression  */
#line 820 "glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[0].expression);
   }
#line 3600 "glsl_parser.tab.cc"
    break;

  case 107: /* expression: expression ',' assignment_expression  */
#line 824 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      if ((yyvsp[-2].expression)->oper != ast_sequence) {
         (yyval.expression) = new(ctx) ast_expression(ast_sequence, NULL, NULL, NULL);
         (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
         (yyval.expression)->expressions.push_tail(& (yyvsp[-2].expression)->link);
      } else {
         (yyval.expression) = (yyvsp[-2].expression);
      }

      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3617 "glsl_parser.tab.cc"
    break;

  case 109: /* declaration: function_prototype ';'  */
#line 844 "glsl_parser.yy"
   {
      state->symbols->pop_scope();
      (yyval.node) = (yyvsp[-1].function);
   }
#line 3626 "glsl_parser.tab.cc"
    break;

  case 110: /* declaration: init_declarator_list ';'  */
#line 849 "glsl_parser.yy"
   {
      (yyval.node) = (yyvsp[-1].declarator_list);
   }
#line 3634 "glsl_parser.tab.cc"
    break;

  case 111: /* declaration: PRECISION precision_qualifier type_specifier ';'  */
#line 853 "glsl_parser.yy"
   {
      (yyvsp[-1].type_specifier)->default_precision = (yyvsp[-2].n);
      (yyval.node) = (yyvsp[-1].type_specifier);
   }
#line 3643 "glsl_parser.tab.cc"
    break;

  case 112: /* declaration: interface_block  */
#line 858 "glsl_parser.yy"
   {
      ast_interface_block *block = (ast_interface_block *) (yyvsp[0].node);
      if (block->layout.has_layout() || block->layout.has_memory()) {
         if (!block->default_layout.merge_qualifier(& (yylsp[0]), state, block->layout, false)) {
            YYERROR;
         }
      }
      block->layout = block->default_layout;
      if (!block->layout.push_to_global(& (yylsp[0]), state)) {
         YYERROR;
      }
      (yyval.node) = (yyvsp[0].node);
   }
#line 3661 "glsl_parser.tab.cc"
    break;

  case 116: /* function_header_with_parameters: function_header parameter_declaration  */
#line 884 "glsl_parser.yy"
   {
      (yyval.function) = (yyvsp[-1].function);
      (yyval.function)->parameters.push_tail(& (yyvsp[0].parameter_declarator)->link);
   }
#line 3670 "glsl_parser.tab.cc"
    break;

  case 117: /* function_header_with_parameters: function_header_with_parameters ',' parameter_declaration  */
#line 889 "glsl_parser.yy"
   {
      (yyval.function) = (yyvsp[-2].function);
      (yyval.function)->parameters.push_tail(& (yyvsp[0].parameter_declarator)->link);
   }
#line 3679 "glsl_parser.tab.cc"
    break;

  case 118: /* function_header: fully_specified_type variable_identifier '('  */
#line 897 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.function) = new(ctx) ast_function();
      (yyval.function)->set_location((yylsp[-1]));
      (yyval.function)->return_type = (yyvsp[-2].fully_specified_type);
      (yyval.function)->identifier = (yyvsp[-1].identifier);

      if ((yyvsp[-2].fully_specified_type)->qualifier.is_subroutine_decl()) {
         /* add type for IDENTIFIER search */
         state->symbols->add_type((yyvsp[-1].identifier), glsl_subroutine_type((yyvsp[-1].identifier)));
      } else
         state->symbols->add_function(new(state) ir_function((yyvsp[-1].identifier)));
      state->symbols->push_scope();
   }
#line 3698 "glsl_parser.tab.cc"
    break;

  case 119: /* parameter_declarator: type_specifier any_identifier  */
#line 915 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location((yylsp[-1]));
      (yyval.parameter_declarator)->type->specifier = (yyvsp[-1].type_specifier);
      (yyval.parameter_declarator)->identifier = (yyvsp[0].identifier);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[0].identifier), ir_var_auto));
   }
#line 3713 "glsl_parser.tab.cc"
    break;

  case 120: /* parameter_declarator: layout_qualifier type_specifier any_identifier  */
#line 926 "glsl_parser.yy"
   {
      _mesa_glsl_error(&(yylsp[-2]), state, "is is not allowed on function parameter");
      YYERROR;
   }
#line 3722 "glsl_parser.tab.cc"
    break;

  case 121: /* parameter_declarator: type_specifier any_identifier array_specifier  */
#line 931 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location_range((yylsp[-2]), (yylsp[0]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location((yylsp[-2]));
      (yyval.parameter_declarator)->type->specifier = (yyvsp[-2].type_specifier);
      (yyval.parameter_declarator)->identifier = (yyvsp[-1].identifier);
      (yyval.parameter_declarator)->array_specifier = (yyvsp[0].array_specifier);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-1].identifier), ir_var_auto));
   }
#line 3738 "glsl_parser.tab.cc"
    break;

  case 122: /* parameter_declaration: parameter_qualifier parameter_declarator  */
#line 946 "glsl_parser.yy"
   {
      (yyval.parameter_declarator) = (yyvsp[0].parameter_declarator);
      (yyval.parameter_declarator)->type->qualifier = (yyvsp[-1].type_qualifier);
      if (!(yyval.parameter_declarator)->type->qualifier.push_to_global(& (yylsp[-1]), state)) {
         YYERROR;
      }
   }
#line 3750 "glsl_parser.tab.cc"
    break;

  case 123: /* parameter_declaration: parameter_qualifier parameter_type_specifier  */
#line 954 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location((yylsp[0]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.parameter_declarator)->type->qualifier = (yyvsp[-1].type_qualifier);
      if (!(yyval.parameter_declarator)->type->qualifier.push_to_global(& (yylsp[-1]), state)) {
         YYERROR;
      }
      (yyval.parameter_declarator)->type->specifier = (yyvsp[0].type_specifier);
   }
#line 3767 "glsl_parser.tab.cc"
    break;

  case 124: /* parameter_qualifier: %empty  */
#line 970 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
   }
#line 3775 "glsl_parser.tab.cc"
    break;

  case 125: /* parameter_qualifier: CONST_TOK parameter_qualifier  */
#line 974 "glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.constant)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate const qualifier");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.constant = 1;
   }
#line 3787 "glsl_parser.tab.cc"
    break;

  case 126: /* parameter_qualifier: PRECISE parameter_qualifier  */
#line 982 "glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate precise qualifier");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.precise = 1;
   }
#line 3799 "glsl_parser.tab.cc"
    break;

  case 127: /* parameter_qualifier: parameter_direction_qualifier parameter_qualifier  */
#line 990 "glsl_parser.yy"
   {
      if (((yyvsp[-1].type_qualifier).flags.q.in || (yyvsp[-1].type_qualifier).flags.q.out) && ((yyvsp[0].type_qualifier).flags.q.in || (yyvsp[0].type_qualifier).flags.q.out))
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate in/out/inout qualifier");

      if (!state->has_420pack_or_es31() && (yyvsp[0].type_qualifier).flags.q.constant)
         _mesa_glsl_error(&(yylsp[-1]), state, "in/out/inout must come after const "
                                      "or precise");

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier), false);
   }
#line 3815 "glsl_parser.tab.cc"
    break;

  case 128: /* parameter_qualifier: precision_qualifier parameter_qualifier  */
#line 1002 "glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).precision != ast_precision_none)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate precision qualifier");

      if (!state->has_420pack_or_es31() &&
          (yyvsp[0].type_qualifier).flags.i != 0)
         _mesa_glsl_error(&(yylsp[-1]), state, "precision qualifiers must come last");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).precision = (yyvsp[-1].n);
   }
#line 3831 "glsl_parser.tab.cc"
    break;

  case 129: /* parameter_qualifier: memory_qualifier parameter_qualifier  */
#line 1014 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier), false);
   }
#line 3840 "glsl_parser.tab.cc"
    break;

  case 130: /* parameter_direction_qualifier: IN_TOK  */
#line 1021 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
   }
#line 3849 "glsl_parser.tab.cc"
    break;

  case 131: /* parameter_direction_qualifier: OUT_TOK  */
#line 1026 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 3858 "glsl_parser.tab.cc"
    break;

  case 132: /* parameter_direction_qualifier: INOUT_TOK  */
#line 1031 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 3868 "glsl_parser.tab.cc"
    break;

  case 135: /* init_declarator_list: init_declarator_list ',' any_identifier  */
#line 1045 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = (yyvsp[-2].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[0].identifier), ir_var_auto));
   }
#line 3882 "glsl_parser.tab.cc"
    break;

  case 136: /* init_declarator_list: init_declarator_list ',' any_identifier array_specifier  */
#line 1055 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-1].identifier), (yyvsp[0].array_specifier), NULL);
      decl->set_location_range((yylsp[-1]), (yylsp[0]));

      (yyval.declarator_list) = (yyvsp[-3].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-1].identifier), ir_var_auto));
   }
#line 3896 "glsl_parser.tab.cc"
    break;

  case 137: /* init_declarator_list: init_declarator_list ',' any_identifier array_specifier '=' initializer  */
#line 1065 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-3].identifier), (yyvsp[-2].array_specifier), (yyvsp[0].expression));
      decl->set_location_range((yylsp[-3]), (yylsp[-2]));

      (yyval.declarator_list) = (yyvsp[-5].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-3].identifier), ir_var_auto));
   }
#line 3910 "glsl_parser.tab.cc"
    break;

  case 138: /* init_declarator_list: init_declarator_list ',' any_identifier '=' initializer  */
#line 1075 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-2].identifier), NULL, (yyvsp[0].expression));
      decl->set_location((yylsp[-2]));

      (yyval.declarator_list) = (yyvsp[-4].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-2].identifier), ir_var_auto));
   }
#line 3924 "glsl_parser.tab.cc"
    break;

  case 139: /* single_declaration: fully_specified_type  */
#line 1089 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      /* Empty declaration list is valid. */
      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[0].fully_specified_type));
      (yyval.declarator_list)->set_location((yylsp[0]));
   }
#line 3935 "glsl_parser.tab.cc"
    break;

  case 140: /* single_declaration: fully_specified_type any_identifier  */
#line 1096 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-1].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[0].identifier), ir_var_auto));
   }
#line 3950 "glsl_parser.tab.cc"
    break;

  case 141: /* single_declaration: fully_specified_type any_identifier array_specifier  */
#line 1107 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-1].identifier), (yyvsp[0].array_specifier), NULL);
      decl->set_location_range((yylsp[-1]), (yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-2].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-2]), (yylsp[0]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-1].identifier), ir_var_auto));
   }
#line 3965 "glsl_parser.tab.cc"
    break;

  case 142: /* single_declaration: fully_specified_type any_identifier array_specifier '=' initializer  */
#line 1118 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-3].identifier), (yyvsp[-2].array_specifier), (yyvsp[0].expression));
      decl->set_location_range((yylsp[-3]), (yylsp[-2]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-4].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-4]), (yylsp[-2]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-3].identifier), ir_var_auto));
   }
#line 3980 "glsl_parser.tab.cc"
    break;

  case 143: /* single_declaration: fully_specified_type any_identifier '=' initializer  */
#line 1129 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-2].identifier), NULL, (yyvsp[0].expression));
      decl->set_location((yylsp[-2]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-3].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-3]), (yylsp[-2]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-2].identifier), ir_var_auto));
   }
#line 3995 "glsl_parser.tab.cc"
    break;

  case 144: /* single_declaration: INVARIANT variable_identifier  */
#line 1140 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list(NULL);
      (yyval.declarator_list)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.declarator_list)->invariant = true;

      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4011 "glsl_parser.tab.cc"
    break;

  case 145: /* single_declaration: PRECISE variable_identifier  */
#line 1152 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list(NULL);
      (yyval.declarator_list)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.declarator_list)->precise = true;

      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4027 "glsl_parser.tab.cc"
    break;

  case 146: /* fully_specified_type: type_specifier  */
#line 1167 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
      (yyval.fully_specified_type)->set_location((yylsp[0]));
      (yyval.fully_specified_type)->specifier = (yyvsp[0].type_specifier);
   }
#line 4038 "glsl_parser.tab.cc"
    break;

  case 147: /* fully_specified_type: type_qualifier type_specifier  */
#line 1174 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
      (yyval.fully_specified_type)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.fully_specified_type)->qualifier = (yyvsp[-1].type_qualifier);
      if (!(yyval.fully_specified_type)->qualifier.push_to_global(& (yylsp[-1]), state)) {
         YYERROR;
      }
      (yyval.fully_specified_type)->specifier = (yyvsp[0].type_specifier);
      if ((yyval.fully_specified_type)->specifier->structure != NULL &&
          (yyval.fully_specified_type)->specifier->structure->is_declaration) {
            (yyval.fully_specified_type)->specifier->structure->layout = &(yyval.fully_specified_type)->qualifier;
      }
   }
#line 4057 "glsl_parser.tab.cc"
    break;

  case 148: /* layout_qualifier: LAYOUT_TOK '(' layout_qualifier_id_list ')'  */
#line 1192 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
   }
#line 4065 "glsl_parser.tab.cc"
    break;

  case 150: /* layout_qualifier_id_list: layout_qualifier_id_list ',' layout_qualifier_id  */
#line 1200 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-2].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[0]), state, (yyvsp[0].type_qualifier), true)) {
         YYERROR;
      }
   }
#line 4076 "glsl_parser.tab.cc"
    break;

  case 151: /* layout_qualifier_id: any_identifier  */
#line 1210 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));

      /* Layout qualifiers for ARB_fragment_coord_conventions. */
      if (!(yyval.type_qualifier).flags.i && (state->ARB_fragment_coord_conventions_enable ||
                          state->is_version(150, 0))) {
         if (match_layout_qualifier((yyvsp[0].identifier), "origin_upper_left", state) == 0) {
            (yyval.type_qualifier).flags.q.origin_upper_left = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "pixel_center_integer",
                                           state) == 0) {
            (yyval.type_qualifier).flags.q.pixel_center_integer = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->ARB_fragment_coord_conventions_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_ARB_fragment_coord_conventions layout "
                               "identifier `%s' used", (yyvsp[0].identifier));
         }
      }

      /* Layout qualifiers for AMD/ARB_conservative_depth. */
      if (!(yyval.type_qualifier).flags.i &&
          (state->AMD_conservative_depth_enable ||
           state->ARB_conservative_depth_enable ||
           state->is_version(420, 0))) {
         if (match_layout_qualifier((yyvsp[0].identifier), "depth_any", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_type = 1;
            (yyval.type_qualifier).depth_type = ast_depth_any;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "depth_greater", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_type = 1;
            (yyval.type_qualifier).depth_type = ast_depth_greater;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "depth_less", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_type = 1;
            (yyval.type_qualifier).depth_type = ast_depth_less;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "depth_unchanged",
                                           state) == 0) {
            (yyval.type_qualifier).flags.q.depth_type = 1;
            (yyval.type_qualifier).depth_type = ast_depth_unchanged;
         }

         if ((yyval.type_qualifier).flags.i && state->AMD_conservative_depth_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_AMD_conservative_depth "
                               "layout qualifier `%s' is used", (yyvsp[0].identifier));
         }
         if ((yyval.type_qualifier).flags.i && state->ARB_conservative_depth_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_ARB_conservative_depth "
                               "layout qualifier `%s' is used", (yyvsp[0].identifier));
         }
      }

      /* See also interface_block_layout_qualifier. */
      if (!(yyval.type_qualifier).flags.i && state->has_uniform_buffer_objects()) {
         if (match_layout_qualifier((yyvsp[0].identifier), "std140", state) == 0) {
            (yyval.type_qualifier).flags.q.std140 = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "shared", state) == 0) {
            (yyval.type_qualifier).flags.q.shared = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "std430", state) == 0) {
            (yyval.type_qualifier).flags.q.std430 = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "column_major", state) == 0) {
            (yyval.type_qualifier).flags.q.column_major = 1;
         /* "row_major" is a reserved word in GLSL 1.30+. Its token is parsed
          * below in the interface_block_layout_qualifier rule.
          *
          * It is not a reserved word in GLSL ES 3.00, so it's handled here as
          * an identifier.
          *
          * Also, this takes care of alternate capitalizations of
          * "row_major" (which is necessary because layout qualifiers
          * are case-insensitive in desktop GLSL).
          */
         } else if (match_layout_qualifier((yyvsp[0].identifier), "row_major", state) == 0) {
            (yyval.type_qualifier).flags.q.row_major = 1;
         /* "packed" is a reserved word in GLSL, and its token is
          * parsed below in the interface_block_layout_qualifier rule.
          * However, we must take care of alternate capitalizations of
          * "packed", because layout qualifiers are case-insensitive
          * in desktop GLSL.
          */
         } else if (match_layout_qualifier((yyvsp[0].identifier), "packed", state) == 0) {
           (yyval.type_qualifier).flags.q.packed = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->ARB_uniform_buffer_object_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "#version 140 / GL_ARB_uniform_buffer_object "
                               "layout qualifier `%s' is used", (yyvsp[0].identifier));
         }
      }

      /* Layout qualifiers for GLSL 1.50 geometry shaders. */
      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            GLenum e;
         } map[] = {
                 { "points", GL_POINTS },
                 { "lines", GL_LINES },
                 { "lines_adjacency", GL_LINES_ADJACENCY },
                 { "line_strip", GL_LINE_STRIP },
                 { "triangles", GL_TRIANGLES },
                 { "triangles_adjacency", GL_TRIANGLES_ADJACENCY },
                 { "triangle_strip", GL_TRIANGLE_STRIP },
         };
         for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
            if (match_layout_qualifier((yyvsp[0].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.prim_type = 1;
               (yyval.type_qualifier).prim_type = map[i].e;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i && !state->has_geometry_shader() &&
             !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[0]), state, "#version 150 layout "
                             "qualifier `%s' used", (yyvsp[0].identifier));
         }
      }

      /* Layout qualifiers for ARB_shader_image_load_store. */
      if (state->has_shader_image_load_store()) {
         if (!(yyval.type_qualifier).flags.i) {
            static const struct {
               const char *name;
               enum pipe_format format;
               glsl_base_type base_type;
               /** Minimum desktop GLSL version required for the image
                * format.  Use 130 if already present in the original
                * ARB extension.
                */
               unsigned required_glsl;
               /** Minimum GLSL ES version required for the image format. */
               unsigned required_essl;
               /* NV_image_formats */
               bool nv_image_formats;
               bool ext_qualifiers;
            } map[] = {
               { "rgba32f", PIPE_FORMAT_R32G32B32A32_FLOAT, GLSL_TYPE_FLOAT, 130, 310, false, false },
               { "rgba16f", PIPE_FORMAT_R16G16B16A16_FLOAT, GLSL_TYPE_FLOAT, 130, 310, false, false },
               { "rg32f", PIPE_FORMAT_R32G32_FLOAT, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "rg16f", PIPE_FORMAT_R16G16_FLOAT, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "r11f_g11f_b10f", PIPE_FORMAT_R11G11B10_FLOAT, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "r32f", PIPE_FORMAT_R32_FLOAT, GLSL_TYPE_FLOAT, 130, 310, false, false },
               { "r16f", PIPE_FORMAT_R16_FLOAT, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "rgba32ui", PIPE_FORMAT_R32G32B32A32_UINT, GLSL_TYPE_UINT, 130, 310, false, false },
               { "rgba16ui", PIPE_FORMAT_R16G16B16A16_UINT, GLSL_TYPE_UINT, 130, 310, false, false },
               { "rgb10_a2ui", PIPE_FORMAT_R10G10B10A2_UINT, GLSL_TYPE_UINT, 130, 0, true, false },
               { "rgba8ui", PIPE_FORMAT_R8G8B8A8_UINT, GLSL_TYPE_UINT, 130, 310, false, false },
               { "rg32ui", PIPE_FORMAT_R32G32_UINT, GLSL_TYPE_UINT, 130, 0, true, false },
               { "rg16ui", PIPE_FORMAT_R16G16_UINT, GLSL_TYPE_UINT, 130, 0, true, false },
               { "rg8ui", PIPE_FORMAT_R8G8_UINT, GLSL_TYPE_UINT, 130, 0, true, false },
               { "r32ui", PIPE_FORMAT_R32_UINT, GLSL_TYPE_UINT, 130, 310, false, false },
               { "r16ui", PIPE_FORMAT_R16_UINT, GLSL_TYPE_UINT, 130, 0, true, false },
               { "r8ui", PIPE_FORMAT_R8_UINT, GLSL_TYPE_UINT, 130, 0, true, false },
               { "rgba32i", PIPE_FORMAT_R32G32B32A32_SINT, GLSL_TYPE_INT, 130, 310, false, false },
               { "rgba16i", PIPE_FORMAT_R16G16B16A16_SINT, GLSL_TYPE_INT, 130, 310, false, false },
               { "rgba8i", PIPE_FORMAT_R8G8B8A8_SINT, GLSL_TYPE_INT, 130, 310, false, false },
               { "rg32i", PIPE_FORMAT_R32G32_SINT, GLSL_TYPE_INT, 130, 0, true, false },
               { "rg16i", PIPE_FORMAT_R16G16_SINT, GLSL_TYPE_INT, 130, 0, true, false },
               { "rg8i", PIPE_FORMAT_R8G8_SINT, GLSL_TYPE_INT, 130, 0, true, false },
               { "r32i", PIPE_FORMAT_R32_SINT, GLSL_TYPE_INT, 130, 310, false, false },
               { "r16i", PIPE_FORMAT_R16_SINT, GLSL_TYPE_INT, 130, 0, true, false },
               { "r8i", PIPE_FORMAT_R8_SINT, GLSL_TYPE_INT, 130, 0, true, false },
               { "rgba16", PIPE_FORMAT_R16G16B16A16_UNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "rgb10_a2", PIPE_FORMAT_R10G10B10A2_UNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "rgba8", PIPE_FORMAT_R8G8B8A8_UNORM, GLSL_TYPE_FLOAT, 130, 310, false, false },
               { "rg16", PIPE_FORMAT_R16G16_UNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "rg8", PIPE_FORMAT_R8G8_UNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "r16", PIPE_FORMAT_R16_UNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "r8", PIPE_FORMAT_R8_UNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "rgba16_snorm", PIPE_FORMAT_R16G16B16A16_SNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "rgba8_snorm", PIPE_FORMAT_R8G8B8A8_SNORM, GLSL_TYPE_FLOAT, 130, 310, false, false },
               { "rg16_snorm", PIPE_FORMAT_R16G16_SNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "rg8_snorm", PIPE_FORMAT_R8G8_SNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "r16_snorm", PIPE_FORMAT_R16_SNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },
               { "r8_snorm", PIPE_FORMAT_R8_SNORM, GLSL_TYPE_FLOAT, 130, 0, true, false },

               /* From GL_EXT_shader_image_load_store: */
               /* base_type is incorrect but it'll be patched later when we know
                * the variable type. See ast_to_hir.cpp */
               { "size1x8", PIPE_FORMAT_R8_SINT, GLSL_TYPE_VOID, 130, 0, false, true },
               { "size1x16", PIPE_FORMAT_R16_SINT, GLSL_TYPE_VOID, 130, 0, false, true },
               { "size1x32", PIPE_FORMAT_R32_SINT, GLSL_TYPE_VOID, 130, 0, false, true },
               { "size2x32", PIPE_FORMAT_R32G32_SINT, GLSL_TYPE_VOID, 130, 0, false, true },
               { "size4x32", PIPE_FORMAT_R32G32B32A32_SINT, GLSL_TYPE_VOID, 130, 0, false, true },
            };

            for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
               if ((state->is_version(map[i].required_glsl,
                                      map[i].required_essl) ||
                    (state->NV_image_formats_enable &&
                     map[i].nv_image_formats)) &&
                   match_layout_qualifier((yyvsp[0].identifier), map[i].name, state) == 0) {
                  /* Skip ARB_shader_image_load_store qualifiers if not enabled */
                  if (!map[i].ext_qualifiers && !(state->ARB_shader_image_load_store_enable ||
                                                  state->is_version(420, 310))) {
                     continue;
                  }
                  /* Skip EXT_shader_image_load_store qualifiers if not enabled */
                  if (map[i].ext_qualifiers && !state->EXT_shader_image_load_store_enable) {
                     continue;
                  }
                  (yyval.type_qualifier).flags.q.explicit_image_format = 1;
                  (yyval.type_qualifier).image_format = map[i].format;
                  (yyval.type_qualifier).image_base_type = map[i].base_type;
                  break;
               }
            }
         }
      }

      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[0].identifier), "early_fragment_tests", state) == 0) {
            /* From section 4.4.1.3 of the GLSL 4.50 specification
             * (Fragment Shader Inputs):
             *
             *  "Fragment shaders also allow the following layout
             *   qualifier on in only (not with variable declarations)
             *     layout-qualifier-id
             *        early_fragment_tests
             *   [...]"
             */
            if (state->stage != MESA_SHADER_FRAGMENT) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "early_fragment_tests layout qualifier only "
                                "valid in fragment shaders");
            }

            (yyval.type_qualifier).flags.q.early_fragment_tests = 1;
         }

         if (match_layout_qualifier((yyvsp[0].identifier), "inner_coverage", state) == 0) {
            if (state->stage != MESA_SHADER_FRAGMENT) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "inner_coverage layout qualifier only "
                                "valid in fragment shaders");
            }

            if (state->INTEL_conservative_rasterization_enable) {
               (yyval.type_qualifier).flags.q.inner_coverage = 1;
            } else {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "inner_coverage layout qualifier present, "
                                "but the INTEL_conservative_rasterization extension "
                                "is not enabled.");
            }
         }

         if (match_layout_qualifier((yyvsp[0].identifier), "post_depth_coverage", state) == 0) {
            if (state->stage != MESA_SHADER_FRAGMENT) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "post_depth_coverage layout qualifier only "
                                "valid in fragment shaders");
            }

            if (state->ARB_post_depth_coverage_enable ||
                state->INTEL_conservative_rasterization_enable) {
               (yyval.type_qualifier).flags.q.post_depth_coverage = 1;
            } else {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "post_depth_coverage layout qualifier present, "
                                "but the GL_ARB_post_depth_coverage extension "
                                "is not enabled.");
            }
         }

         if ((yyval.type_qualifier).flags.q.post_depth_coverage && (yyval.type_qualifier).flags.q.inner_coverage) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "post_depth_coverage & inner_coverage layout qualifiers "
                             "are mutually exclusive");
         }
      }

      const bool pixel_interlock_ordered = match_layout_qualifier((yyvsp[0].identifier),
         "pixel_interlock_ordered", state) == 0;
      const bool pixel_interlock_unordered = match_layout_qualifier((yyvsp[0].identifier),
         "pixel_interlock_unordered", state) == 0;
      const bool sample_interlock_ordered = match_layout_qualifier((yyvsp[0].identifier),
         "sample_interlock_ordered", state) == 0;
      const bool sample_interlock_unordered = match_layout_qualifier((yyvsp[0].identifier),
         "sample_interlock_unordered", state) == 0;

      if (pixel_interlock_ordered + pixel_interlock_unordered +
          sample_interlock_ordered + sample_interlock_unordered > 0 &&
          state->stage != MESA_SHADER_FRAGMENT) {
         _mesa_glsl_error(& (yylsp[0]), state, "interlock layout qualifiers: "
                          "pixel_interlock_ordered, pixel_interlock_unordered, "
                          "sample_interlock_ordered and sample_interlock_unordered, "
                          "only valid in fragment shader input layout declaration.");
      } else if (pixel_interlock_ordered + pixel_interlock_unordered +
                 sample_interlock_ordered + sample_interlock_unordered > 0 &&
                 !state->ARB_fragment_shader_interlock_enable &&
                 !state->NV_fragment_shader_interlock_enable) {
         _mesa_glsl_error(& (yylsp[0]), state,
                          "interlock layout qualifier present, but the "
                          "GL_ARB_fragment_shader_interlock or "
                          "GL_NV_fragment_shader_interlock extension is not "
                          "enabled.");
      } else {
         (yyval.type_qualifier).flags.q.pixel_interlock_ordered = pixel_interlock_ordered;
         (yyval.type_qualifier).flags.q.pixel_interlock_unordered = pixel_interlock_unordered;
         (yyval.type_qualifier).flags.q.sample_interlock_ordered = sample_interlock_ordered;
         (yyval.type_qualifier).flags.q.sample_interlock_unordered = sample_interlock_unordered;
      }

      /* Layout qualifiers for tessellation evaluation shaders. */
      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            GLenum e;
         } map[] = {
                 /* triangles already parsed by gs-specific code */
                 { "quads", GL_QUADS },
                 { "isolines", GL_ISOLINES },
         };
         for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
            if (match_layout_qualifier((yyvsp[0].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.prim_type = 1;
               (yyval.type_qualifier).prim_type = map[i].e;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i && !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "primitive mode qualifier `%s' requires "
                             "GLSL 4.00 or ARB_tessellation_shader", (yyvsp[0].identifier));
         }
      }
      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            enum gl_tess_spacing e;
         } map[] = {
                 { "equal_spacing", TESS_SPACING_EQUAL },
                 { "fractional_odd_spacing", TESS_SPACING_FRACTIONAL_ODD },
                 { "fractional_even_spacing", TESS_SPACING_FRACTIONAL_EVEN },
         };
         for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
            if (match_layout_qualifier((yyvsp[0].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.vertex_spacing = 1;
               (yyval.type_qualifier).vertex_spacing = map[i].e;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i && !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "vertex spacing qualifier `%s' requires "
                             "GLSL 4.00 or ARB_tessellation_shader", (yyvsp[0].identifier));
         }
      }
      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[0].identifier), "cw", state) == 0) {
            (yyval.type_qualifier).flags.q.ordering = 1;
            (yyval.type_qualifier).ordering = GL_CW;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "ccw", state) == 0) {
            (yyval.type_qualifier).flags.q.ordering = 1;
            (yyval.type_qualifier).ordering = GL_CCW;
         }

         if ((yyval.type_qualifier).flags.i && !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "ordering qualifier `%s' requires "
                             "GLSL 4.00 or ARB_tessellation_shader", (yyvsp[0].identifier));
         }
      }
      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[0].identifier), "point_mode", state) == 0) {
            (yyval.type_qualifier).flags.q.point_mode = 1;
            (yyval.type_qualifier).point_mode = true;
         }

         if ((yyval.type_qualifier).flags.i && !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "qualifier `point_mode' requires "
                             "GLSL 4.00 or ARB_tessellation_shader");
         }
      }

      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            uint32_t mask;
         } map[] = {
                 { "blend_support_multiply",       BITFIELD_BIT(BLEND_MULTIPLY) },
                 { "blend_support_screen",         BITFIELD_BIT(BLEND_SCREEN) },
                 { "blend_support_overlay",        BITFIELD_BIT(BLEND_OVERLAY) },
                 { "blend_support_darken",         BITFIELD_BIT(BLEND_DARKEN) },
                 { "blend_support_lighten",        BITFIELD_BIT(BLEND_LIGHTEN) },
                 { "blend_support_colordodge",     BITFIELD_BIT(BLEND_COLORDODGE) },
                 { "blend_support_colorburn",      BITFIELD_BIT(BLEND_COLORBURN) },
                 { "blend_support_hardlight",      BITFIELD_BIT(BLEND_HARDLIGHT) },
                 { "blend_support_softlight",      BITFIELD_BIT(BLEND_SOFTLIGHT) },
                 { "blend_support_difference",     BITFIELD_BIT(BLEND_DIFFERENCE) },
                 { "blend_support_exclusion",      BITFIELD_BIT(BLEND_EXCLUSION) },
                 { "blend_support_hsl_hue",        BITFIELD_BIT(BLEND_HSL_HUE) },
                 { "blend_support_hsl_saturation", BITFIELD_BIT(BLEND_HSL_SATURATION) },
                 { "blend_support_hsl_color",      BITFIELD_BIT(BLEND_HSL_COLOR) },
                 { "blend_support_hsl_luminosity", BITFIELD_BIT(BLEND_HSL_LUMINOSITY) },
                 { "blend_support_all_equations",  (1u << (BLEND_HSL_LUMINOSITY + 1)) - 2 },
         };
         for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
            if (match_layout_qualifier((yyvsp[0].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.blend_support = 1;
               state->fs_blend_support |= map[i].mask;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i &&
             !state->KHR_blend_equation_advanced_enable &&
             !state->is_version(0, 320)) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "advanced blending layout qualifiers require "
                             "ESSL 3.20 or KHR_blend_equation_advanced");
         }

         if ((yyval.type_qualifier).flags.i && state->stage != MESA_SHADER_FRAGMENT) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "advanced blending layout qualifiers only "
                             "valid in fragment shaders");
         }
      }

      /* Layout qualifiers for ARB_compute_variable_group_size. */
      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[0].identifier), "local_size_variable", state) == 0) {
            (yyval.type_qualifier).flags.q.local_size_variable = 1;
         }

         if ((yyval.type_qualifier).flags.i && !state->ARB_compute_variable_group_size_enable) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "qualifier `local_size_variable` requires "
                             "ARB_compute_variable_group_size");
         }
      }

      /* Layout qualifiers for ARB_bindless_texture. */
      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[0].identifier), "bindless_sampler", state) == 0)
            (yyval.type_qualifier).flags.q.bindless_sampler = 1;
         if (match_layout_qualifier((yyvsp[0].identifier), "bound_sampler", state) == 0)
            (yyval.type_qualifier).flags.q.bound_sampler = 1;

         if (state->has_shader_image_load_store()) {
            if (match_layout_qualifier((yyvsp[0].identifier), "bindless_image", state) == 0)
               (yyval.type_qualifier).flags.q.bindless_image = 1;
            if (match_layout_qualifier((yyvsp[0].identifier), "bound_image", state) == 0)
               (yyval.type_qualifier).flags.q.bound_image = 1;
         }

         if ((yyval.type_qualifier).flags.i && !state->has_bindless()) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "qualifier `%s` requires "
                             "ARB_bindless_texture", (yyvsp[0].identifier));
         }
      }

      if (!(yyval.type_qualifier).flags.i &&
          state->EXT_shader_framebuffer_fetch_non_coherent_enable) {
         if (match_layout_qualifier((yyvsp[0].identifier), "noncoherent", state) == 0)
            (yyval.type_qualifier).flags.q.non_coherent = 1;
      }

      // Layout qualifiers for NV_compute_shader_derivatives.
      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[0].identifier), "derivative_group_quadsNV", state) == 0) {
            (yyval.type_qualifier).flags.q.derivative_group = 1;
            (yyval.type_qualifier).derivative_group = DERIVATIVE_GROUP_QUADS;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "derivative_group_linearNV", state) == 0) {
            (yyval.type_qualifier).flags.q.derivative_group = 1;
            (yyval.type_qualifier).derivative_group = DERIVATIVE_GROUP_LINEAR;
         }

         if ((yyval.type_qualifier).flags.i) {
            if (!state->has_compute_shader()) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "qualifier `%s' requires "
                                "a compute shader", (yyvsp[0].identifier));
            }

            if (!state->NV_compute_shader_derivatives_enable) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "qualifier `%s' requires "
                                "NV_compute_shader_derivatives", (yyvsp[0].identifier));
            }

            if (state->NV_compute_shader_derivatives_warn) {
               _mesa_glsl_warning(& (yylsp[0]), state,
                                  "NV_compute_shader_derivatives layout "
                                  "qualifier `%s' used", (yyvsp[0].identifier));
            }
         }
      }

      /* Layout qualifier for NV_viewport_array2. */
      if (!(yyval.type_qualifier).flags.i && state->stage != MESA_SHADER_FRAGMENT) {
         if (match_layout_qualifier((yyvsp[0].identifier), "viewport_relative", state) == 0) {
            (yyval.type_qualifier).flags.q.viewport_relative = 1;
         }

         if ((yyval.type_qualifier).flags.i && !state->NV_viewport_array2_enable) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "qualifier `%s' requires "
                             "GL_NV_viewport_array2", (yyvsp[0].identifier));
         }

         if ((yyval.type_qualifier).flags.i && state->NV_viewport_array2_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_NV_viewport_array2 layout "
                               "identifier `%s' used", (yyvsp[0].identifier));
         }
      }

      if (!(yyval.type_qualifier).flags.i) {
         _mesa_glsl_error(& (yylsp[0]), state, "unrecognized layout identifier "
                          "`%s'", (yyvsp[0].identifier));
         YYERROR;
      }
   }
#line 4603 "glsl_parser.tab.cc"
    break;

  case 152: /* layout_qualifier_id: any_identifier '=' constant_expression  */
#line 1733 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      linear_ctx *ctx = state->linalloc;

      if ((yyvsp[0].expression)->oper != ast_int_constant &&
          (yyvsp[0].expression)->oper != ast_uint_constant &&
          !state->has_enhanced_layouts()) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "compile-time constant expressions require "
                          "GLSL 4.40 or ARB_enhanced_layouts");
      }

      if (match_layout_qualifier("align", (yyvsp[-2].identifier), state) == 0) {
         if (!state->has_enhanced_layouts()) {
            _mesa_glsl_error(& (yylsp[-2]), state,
                             "align qualifier requires "
                             "GLSL 4.40 or ARB_enhanced_layouts");
         } else {
            (yyval.type_qualifier).flags.q.explicit_align = 1;
            (yyval.type_qualifier).align = (yyvsp[0].expression);
         }
      }

      if (match_layout_qualifier("location", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_location = 1;

         if ((yyval.type_qualifier).flags.q.attribute == 1 &&
             state->ARB_explicit_attrib_location_warn) {
            _mesa_glsl_warning(& (yylsp[-2]), state,
                               "GL_ARB_explicit_attrib_location layout "
                               "identifier `%s' used", (yyvsp[-2].identifier));
         }
         (yyval.type_qualifier).location = (yyvsp[0].expression);
      }

      if (match_layout_qualifier("num_views", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_numviews = 1;
         (yyval.type_qualifier).num_views = (yyvsp[0].expression);
      }

      if (match_layout_qualifier("component", (yyvsp[-2].identifier), state) == 0) {
         if (!state->has_enhanced_layouts()) {
            _mesa_glsl_error(& (yylsp[-2]), state,
                             "component qualifier requires "
                             "GLSL 4.40 or ARB_enhanced_layouts");
         } else {
            (yyval.type_qualifier).flags.q.explicit_component = 1;
            (yyval.type_qualifier).component = (yyvsp[0].expression);
         }
      }

      if (match_layout_qualifier("index", (yyvsp[-2].identifier), state) == 0) {
         if (state->es_shader && !state->EXT_blend_func_extended_enable) {
            _mesa_glsl_error(& (yylsp[0]), state, "index layout qualifier requires EXT_blend_func_extended");
            YYERROR;
         }

         (yyval.type_qualifier).flags.q.explicit_index = 1;
         (yyval.type_qualifier).index = (yyvsp[0].expression);
      }

      if ((state->has_420pack_or_es31() ||
           state->has_atomic_counters() ||
           state->has_shader_storage_buffer_objects()) &&
          match_layout_qualifier("binding", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_binding = 1;
         (yyval.type_qualifier).binding = (yyvsp[0].expression);
      }

      if ((state->has_atomic_counters() ||
           state->has_enhanced_layouts()) &&
          match_layout_qualifier("offset", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_offset = 1;
         (yyval.type_qualifier).offset = (yyvsp[0].expression);
      }

      if (match_layout_qualifier("max_vertices", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.max_vertices = 1;
         (yyval.type_qualifier).max_vertices = new(ctx) ast_layout_expression((yylsp[-2]), (yyvsp[0].expression));
         if (!state->has_geometry_shader()) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "#version 150 max_vertices qualifier "
                             "specified");
         }
      }

      if (state->stage == MESA_SHADER_GEOMETRY) {
         if (match_layout_qualifier("stream", (yyvsp[-2].identifier), state) == 0 &&
             state->check_explicit_attrib_stream_allowed(& (yylsp[0]))) {
            (yyval.type_qualifier).flags.q.stream = 1;
            (yyval.type_qualifier).flags.q.explicit_stream = 1;
            (yyval.type_qualifier).stream = (yyvsp[0].expression);
         }
      }

      if (state->has_enhanced_layouts()) {
         if (match_layout_qualifier("xfb_buffer", (yyvsp[-2].identifier), state) == 0) {
            (yyval.type_qualifier).flags.q.xfb_buffer = 1;
            (yyval.type_qualifier).flags.q.explicit_xfb_buffer = 1;
            (yyval.type_qualifier).xfb_buffer = (yyvsp[0].expression);
         }

         if (match_layout_qualifier("xfb_offset", (yyvsp[-2].identifier), state) == 0) {
            (yyval.type_qualifier).flags.q.explicit_xfb_offset = 1;
            (yyval.type_qualifier).offset = (yyvsp[0].expression);
         }

         if (match_layout_qualifier("xfb_stride", (yyvsp[-2].identifier), state) == 0) {
            (yyval.type_qualifier).flags.q.xfb_stride = 1;
            (yyval.type_qualifier).flags.q.explicit_xfb_stride = 1;
            (yyval.type_qualifier).xfb_stride = (yyvsp[0].expression);
         }
      }

      static const char * const local_size_qualifiers[3] = {
         "local_size_x",
         "local_size_y",
         "local_size_z",
      };
      for (int i = 0; i < 3; i++) {
         if (match_layout_qualifier(local_size_qualifiers[i], (yyvsp[-2].identifier),
                                    state) == 0) {
            if (!state->has_compute_shader()) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "%s qualifier requires GLSL 4.30 or "
                                "GLSL ES 3.10 or ARB_compute_shader",
                                local_size_qualifiers[i]);
               YYERROR;
            } else {
               (yyval.type_qualifier).flags.q.local_size |= (1 << i);
               (yyval.type_qualifier).local_size[i] = new(ctx) ast_layout_expression((yylsp[-2]), (yyvsp[0].expression));
            }
            break;
         }
      }

      if (match_layout_qualifier("invocations", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.invocations = 1;
         (yyval.type_qualifier).invocations = new(ctx) ast_layout_expression((yylsp[-2]), (yyvsp[0].expression));
         if (!state->is_version(400, 320) &&
             !state->ARB_gpu_shader5_enable &&
             !state->OES_geometry_shader_enable &&
             !state->EXT_geometry_shader_enable) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "GL_ARB_gpu_shader5 invocations "
                             "qualifier specified");
         }
      }

      /* Layout qualifiers for tessellation control shaders. */
      if (match_layout_qualifier("vertices", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.vertices = 1;
         (yyval.type_qualifier).vertices = new(ctx) ast_layout_expression((yylsp[-2]), (yyvsp[0].expression));
         if (!state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[-2]), state,
                             "vertices qualifier requires GLSL 4.00 or "
                             "ARB_tessellation_shader");
         }
      }

      /* If the identifier didn't match any known layout identifiers,
       * emit an error.
       */
      if (!(yyval.type_qualifier).flags.i) {
         _mesa_glsl_error(& (yylsp[-2]), state, "unrecognized layout identifier "
                          "`%s'", (yyvsp[-2].identifier));
         YYERROR;
      }
   }
#line 4777 "glsl_parser.tab.cc"
    break;

  case 153: /* layout_qualifier_id: interface_block_layout_qualifier  */
#line 1903 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      /* Layout qualifiers for ARB_uniform_buffer_object. */
      if ((yyval.type_qualifier).flags.q.uniform && !state->has_uniform_buffer_objects()) {
         _mesa_glsl_error(& (yylsp[0]), state,
                          "#version 140 / GL_ARB_uniform_buffer_object "
                          "layout qualifier `uniform' is used");
      } else if ((yyval.type_qualifier).flags.q.uniform && state->ARB_uniform_buffer_object_warn) {
         _mesa_glsl_warning(& (yylsp[0]), state,
                            "#version 140 / GL_ARB_uniform_buffer_object "
                            "layout qualifier `uniform' is used");
      }
   }
#line 4795 "glsl_parser.tab.cc"
    break;

  case 154: /* interface_block_layout_qualifier: ROW_MAJOR  */
#line 1929 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.row_major = 1;
   }
#line 4804 "glsl_parser.tab.cc"
    break;

  case 155: /* interface_block_layout_qualifier: PACKED_TOK  */
#line 1934 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.packed = 1;
   }
#line 4813 "glsl_parser.tab.cc"
    break;

  case 156: /* interface_block_layout_qualifier: SHARED  */
#line 1939 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.shared = 1;
   }
#line 4822 "glsl_parser.tab.cc"
    break;

  case 157: /* subroutine_qualifier: SUBROUTINE  */
#line 1947 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.subroutine = 1;
   }
#line 4831 "glsl_parser.tab.cc"
    break;

  case 158: /* subroutine_qualifier: SUBROUTINE '(' subroutine_type_list ')'  */
#line 1952 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.subroutine = 1;
      (yyval.type_qualifier).subroutine_list = (yyvsp[-1].subroutine_list);
   }
#line 4841 "glsl_parser.tab.cc"
    break;

  case 159: /* subroutine_type_list: any_identifier  */
#line 1961 "glsl_parser.yy"
   {
        linear_ctx *ctx = state->linalloc;
        ast_declaration *decl = new(ctx)  ast_declaration((yyvsp[0].identifier), NULL, NULL);
        decl->set_location((yylsp[0]));

        (yyval.subroutine_list) = new(ctx) ast_subroutine_list();
        (yyval.subroutine_list)->declarations.push_tail(&decl->link);
   }
#line 4854 "glsl_parser.tab.cc"
    break;

  case 160: /* subroutine_type_list: subroutine_type_list ',' any_identifier  */
#line 1970 "glsl_parser.yy"
   {
        linear_ctx *ctx = state->linalloc;
        ast_declaration *decl = new(ctx)  ast_declaration((yyvsp[0].identifier), NULL, NULL);
        decl->set_location((yylsp[0]));

        (yyval.subroutine_list) = (yyvsp[-2].subroutine_list);
        (yyval.subroutine_list)->declarations.push_tail(&decl->link);
   }
#line 4867 "glsl_parser.tab.cc"
    break;

  case 161: /* interpolation_qualifier: SMOOTH  */
#line 1982 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.smooth = 1;
   }
#line 4876 "glsl_parser.tab.cc"
    break;

  case 162: /* interpolation_qualifier: FLAT  */
#line 1987 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.flat = 1;
   }
#line 4885 "glsl_parser.tab.cc"
    break;

  case 163: /* interpolation_qualifier: NOPERSPECTIVE  */
#line 1992 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.noperspective = 1;
   }
#line 4894 "glsl_parser.tab.cc"
    break;

  case 164: /* type_qualifier: INVARIANT  */
#line 2001 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.invariant = 1;
   }
#line 4903 "glsl_parser.tab.cc"
    break;

  case 165: /* type_qualifier: PRECISE  */
#line 2006 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.precise = 1;
   }
#line 4912 "glsl_parser.tab.cc"
    break;

  case 172: /* type_qualifier: precision_qualifier  */
#line 2017 "glsl_parser.yy"
   {
      memset(&(yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).precision = (yyvsp[0].n);
   }
#line 4921 "glsl_parser.tab.cc"
    break;

  case 173: /* type_qualifier: PRECISE type_qualifier  */
#line 2035 "glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate \"precise\" qualifier");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.precise = 1;
   }
#line 4933 "glsl_parser.tab.cc"
    break;

  case 174: /* type_qualifier: INVARIANT type_qualifier  */
#line 2043 "glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.invariant)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate \"invariant\" qualifier");

      if (!state->has_420pack_or_es31() && (yyvsp[0].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[-1]), state,
                          "\"invariant\" must come after \"precise\"");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.invariant = 1;

      /* GLSL ES 3.00 spec, section 4.6.1 "The Invariant Qualifier":
       *
       * "Only variables output from a shader can be candidates for invariance.
       * This includes user-defined output variables and the built-in output
       * variables. As only outputs can be declared as invariant, an invariant
       * output from one shader stage will still match an input of a subsequent
       * stage without the input being declared as invariant."
       *
       * On the desktop side, this text first appears in GLSL 4.20.
       */
      if (state->is_version(420, 300) && (yyval.type_qualifier).flags.q.in)
         _mesa_glsl_error(&(yylsp[-1]), state, "invariant qualifiers cannot be used with shader inputs");
   }
#line 4962 "glsl_parser.tab.cc"
    break;

  case 175: /* type_qualifier: interpolation_qualifier type_qualifier  */
#line 2068 "glsl_parser.yy"
   {
      /* Section 4.3 of the GLSL 1.40 specification states:
       * "...qualified with one of these interpolation qualifiers"
       *
       * GLSL 1.30 claims to allow "one or more", but insists that:
       * "These interpolation qualifiers may only precede the qualifiers in,
       *  centroid in, out, or centroid out in a declaration."
       *
       * ...which means that e.g. smooth can't precede smooth, so there can be
       * only one after all, and the 1.40 text is a clarification, not a change.
       */
      if ((yyvsp[0].type_qualifier).has_interpolation())
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate interpolation qualifier");

      if (!state->has_420pack_or_es31() &&
          ((yyvsp[0].type_qualifier).flags.q.precise || (yyvsp[0].type_qualifier).flags.q.invariant)) {
         _mesa_glsl_error(&(yylsp[-1]), state, "interpolation qualifiers must come "
                          "after \"precise\" or \"invariant\"");
      }

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier), false);
   }
#line 4990 "glsl_parser.tab.cc"
    break;

  case 176: /* type_qualifier: layout_qualifier type_qualifier  */
#line 2092 "glsl_parser.yy"
   {
      /* In the absence of ARB_shading_language_420pack, layout qualifiers may
       * appear no later than auxiliary storage qualifiers. There is no
       * particularly clear spec language mandating this, but in all examples
       * the layout qualifier precedes the storage qualifier.
       *
       * We allow combinations of layout with interpolation, invariant or
       * precise qualifiers since these are useful in ARB_separate_shader_objects.
       * There is no clear spec guidance on this either.
       */
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(& (yylsp[-1]), state, (yyvsp[0].type_qualifier), false, (yyvsp[0].type_qualifier).has_layout());
   }
#line 5008 "glsl_parser.tab.cc"
    break;

  case 177: /* type_qualifier: subroutine_qualifier type_qualifier  */
#line 2106 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier), false);
   }
#line 5017 "glsl_parser.tab.cc"
    break;

  case 178: /* type_qualifier: auxiliary_storage_qualifier type_qualifier  */
#line 2111 "glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).has_auxiliary_storage()) {
         _mesa_glsl_error(&(yylsp[-1]), state,
                          "duplicate auxiliary storage qualifier (centroid or sample)");
      }

      if ((!state->has_420pack_or_es31() && !state->EXT_gpu_shader4_enable) &&
          ((yyvsp[0].type_qualifier).flags.q.precise || (yyvsp[0].type_qualifier).flags.q.invariant ||
           (yyvsp[0].type_qualifier).has_interpolation() || (yyvsp[0].type_qualifier).has_layout())) {
         _mesa_glsl_error(&(yylsp[-1]), state, "auxiliary storage qualifiers must come "
                          "just before storage qualifiers");
      }
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier), false);
   }
#line 5037 "glsl_parser.tab.cc"
    break;

  case 179: /* type_qualifier: storage_qualifier type_qualifier  */
#line 2127 "glsl_parser.yy"
   {
      /* Section 4.3 of the GLSL 1.20 specification states:
       * "Variable declarations may have a storage qualifier specified..."
       *  1.30 clarifies this to "may have one storage qualifier".
       *
       * GL_EXT_gpu_shader4 allows "varying out" in fragment shaders.
       */
      if ((yyvsp[0].type_qualifier).has_storage() &&
          (!state->EXT_gpu_shader4_enable ||
           state->stage != MESA_SHADER_FRAGMENT ||
           !(yyvsp[-1].type_qualifier).flags.q.varying || !(yyvsp[0].type_qualifier).flags.q.out))
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate storage qualifier");

      if (!state->has_420pack_or_es31() &&
          ((yyvsp[0].type_qualifier).flags.q.precise || (yyvsp[0].type_qualifier).flags.q.invariant || (yyvsp[0].type_qualifier).has_interpolation() ||
           (yyvsp[0].type_qualifier).has_layout() || (yyvsp[0].type_qualifier).has_auxiliary_storage())) {
         _mesa_glsl_error(&(yylsp[-1]), state, "storage qualifiers must come after "
                          "precise, invariant, interpolation, layout and auxiliary "
                          "storage qualifiers");
      }

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier), false);
   }
#line 5066 "glsl_parser.tab.cc"
    break;

  case 180: /* type_qualifier: precision_qualifier type_qualifier  */
#line 2152 "glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).precision != ast_precision_none)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate precision qualifier");

      if (!(state->has_420pack_or_es31()) &&
          (yyvsp[0].type_qualifier).flags.i != 0)
         _mesa_glsl_error(&(yylsp[-1]), state, "precision qualifiers must come last");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).precision = (yyvsp[-1].n);
   }
#line 5082 "glsl_parser.tab.cc"
    break;

  case 181: /* type_qualifier: memory_qualifier type_qualifier  */
#line 2164 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier), false);
   }
#line 5091 "glsl_parser.tab.cc"
    break;

  case 182: /* auxiliary_storage_qualifier: CENTROID  */
#line 2172 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.centroid = 1;
   }
#line 5100 "glsl_parser.tab.cc"
    break;

  case 183: /* auxiliary_storage_qualifier: SAMPLE  */
#line 2177 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.sample = 1;
   }
#line 5109 "glsl_parser.tab.cc"
    break;

  case 184: /* auxiliary_storage_qualifier: PATCH  */
#line 2182 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.patch = 1;
   }
#line 5118 "glsl_parser.tab.cc"
    break;

  case 185: /* storage_qualifier: CONST_TOK  */
#line 2189 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.constant = 1;
   }
#line 5127 "glsl_parser.tab.cc"
    break;

  case 186: /* storage_qualifier: ATTRIBUTE  */
#line 2194 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.attribute = 1;
   }
#line 5136 "glsl_parser.tab.cc"
    break;

  case 187: /* storage_qualifier: VARYING  */
#line 2199 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.varying = 1;
   }
#line 5145 "glsl_parser.tab.cc"
    break;

  case 188: /* storage_qualifier: IN_TOK  */
#line 2204 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
   }
#line 5154 "glsl_parser.tab.cc"
    break;

  case 189: /* storage_qualifier: OUT_TOK  */
#line 2209 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.out = 1;

      if (state->stage == MESA_SHADER_GEOMETRY &&
          state->has_explicit_attrib_stream()) {
         /* Section 4.3.8.2 (Output Layout Qualifiers) of the GLSL 4.00
          * spec says:
          *
          *     "If the block or variable is declared with the stream
          *     identifier, it is associated with the specified stream;
          *     otherwise, it is associated with the current default stream."
          */
          (yyval.type_qualifier).flags.q.stream = 1;
          (yyval.type_qualifier).flags.q.explicit_stream = 0;
          (yyval.type_qualifier).stream = state->out_qualifier->stream;
      }

      if (state->has_enhanced_layouts() && state->exts->ARB_transform_feedback3) {
          (yyval.type_qualifier).flags.q.xfb_buffer = 1;
          (yyval.type_qualifier).flags.q.explicit_xfb_buffer = 0;
          (yyval.type_qualifier).xfb_buffer = state->out_qualifier->xfb_buffer;
      }
   }
#line 5183 "glsl_parser.tab.cc"
    break;

  case 190: /* storage_qualifier: INOUT_TOK  */
#line 2234 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
      (yyval.type_qualifier).flags.q.out = 1;

      if (!state->has_framebuffer_fetch() ||
          !state->is_version(130, 300) ||
          state->stage != MESA_SHADER_FRAGMENT)
         _mesa_glsl_error(&(yylsp[0]), state, "A single interface variable cannot be "
                          "declared as both input and output");
   }
#line 5199 "glsl_parser.tab.cc"
    break;

  case 191: /* storage_qualifier: UNIFORM  */
#line 2246 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.uniform = 1;
   }
#line 5208 "glsl_parser.tab.cc"
    break;

  case 192: /* storage_qualifier: BUFFER  */
#line 2251 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.buffer = 1;
   }
#line 5217 "glsl_parser.tab.cc"
    break;

  case 193: /* storage_qualifier: SHARED  */
#line 2256 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.shared_storage = 1;
   }
#line 5226 "glsl_parser.tab.cc"
    break;

  case 194: /* memory_qualifier: COHERENT  */
#line 2264 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.coherent = 1;
   }
#line 5235 "glsl_parser.tab.cc"
    break;

  case 195: /* memory_qualifier: VOLATILE  */
#line 2269 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q._volatile = 1;
   }
#line 5244 "glsl_parser.tab.cc"
    break;

  case 196: /* memory_qualifier: RESTRICT  */
#line 2274 "glsl_parser.yy"
   {
      STATIC_ASSERT(sizeof((yyval.type_qualifier).flags.q) <= sizeof((yyval.type_qualifier).flags.i));
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.restrict_flag = 1;
   }
#line 5254 "glsl_parser.tab.cc"
    break;

  case 197: /* memory_qualifier: READONLY  */
#line 2280 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.read_only = 1;
   }
#line 5263 "glsl_parser.tab.cc"
    break;

  case 198: /* memory_qualifier: WRITEONLY  */
#line 2285 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.write_only = 1;
   }
#line 5272 "glsl_parser.tab.cc"
    break;

  case 199: /* array_specifier: '[' ']'  */
#line 2293 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.array_specifier) = new(ctx) ast_array_specifier((yylsp[-1]), new(ctx) ast_expression(
                                                  ast_unsized_array_dim, NULL,
                                                  NULL, NULL));
      (yyval.array_specifier)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 5284 "glsl_parser.tab.cc"
    break;

  case 200: /* array_specifier: '[' constant_expression ']'  */
#line 2301 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.array_specifier) = new(ctx) ast_array_specifier((yylsp[-2]), (yyvsp[-1].expression));
      (yyval.array_specifier)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 5294 "glsl_parser.tab.cc"
    break;

  case 201: /* array_specifier: array_specifier '[' ']'  */
#line 2307 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.array_specifier) = (yyvsp[-2].array_specifier);

      if (state->check_arrays_of_arrays_allowed(& (yylsp[-2]))) {
         (yyval.array_specifier)->add_dimension(new(ctx) ast_expression(ast_unsized_array_dim, NULL,
                                                   NULL, NULL));
      }
   }
#line 5308 "glsl_parser.tab.cc"
    break;

  case 202: /* array_specifier: array_specifier '[' constant_expression ']'  */
#line 2317 "glsl_parser.yy"
   {
      (yyval.array_specifier) = (yyvsp[-3].array_specifier);

      if (state->check_arrays_of_arrays_allowed(& (yylsp[-3]))) {
         (yyval.array_specifier)->add_dimension((yyvsp[-1].expression));
      }
   }
#line 5320 "glsl_parser.tab.cc"
    break;

  case 204: /* type_specifier: type_specifier_nonarray array_specifier  */
#line 2329 "glsl_parser.yy"
   {
      (yyval.type_specifier) = (yyvsp[-1].type_specifier);
      (yyval.type_specifier)->array_specifier = (yyvsp[0].array_specifier);
   }
#line 5329 "glsl_parser.tab.cc"
    break;

  case 205: /* type_specifier_nonarray: basic_type_specifier_nonarray  */
#line 2337 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[0].type));
      (yyval.type_specifier)->set_location((yylsp[0]));
   }
#line 5339 "glsl_parser.tab.cc"
    break;

  case 206: /* type_specifier_nonarray: struct_specifier  */
#line 2343 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[0].struct_specifier));
      (yyval.type_specifier)->set_location((yylsp[0]));
   }
#line 5349 "glsl_parser.tab.cc"
    break;

  case 207: /* type_specifier_nonarray: TYPE_IDENTIFIER  */
#line 2349 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[0].identifier));
      (yyval.type_specifier)->set_location((yylsp[0]));
   }
#line 5359 "glsl_parser.tab.cc"
    break;

  case 208: /* basic_type_specifier_nonarray: VOID_TOK  */
#line 2357 "glsl_parser.yy"
                            { (yyval.type) = &glsl_type_builtin_void; }
#line 5365 "glsl_parser.tab.cc"
    break;

  case 209: /* basic_type_specifier_nonarray: BASIC_TYPE_TOK  */
#line 2358 "glsl_parser.yy"
                            { (yyval.type) = (yyvsp[0].type); }
#line 5371 "glsl_parser.tab.cc"
    break;

  case 210: /* basic_type_specifier_nonarray: UNSIGNED BASIC_TYPE_TOK  */
#line 2360 "glsl_parser.yy"
   {
      if ((yyvsp[0].type) == &glsl_type_builtin_int) {
         (yyval.type) = &glsl_type_builtin_uint;
      } else {
         _mesa_glsl_error(&(yylsp[-1]), state,
                          "\"unsigned\" is only allowed before \"int\"");
      }
   }
#line 5384 "glsl_parser.tab.cc"
    break;

  case 211: /* precision_qualifier: HIGHP  */
#line 2372 "glsl_parser.yy"
   {
      state->check_precision_qualifiers_allowed(&(yylsp[0]));
      (yyval.n) = ast_precision_high;
   }
#line 5393 "glsl_parser.tab.cc"
    break;

  case 212: /* precision_qualifier: MEDIUMP  */
#line 2377 "glsl_parser.yy"
   {
      state->check_precision_qualifiers_allowed(&(yylsp[0]));
      (yyval.n) = ast_precision_medium;
   }
#line 5402 "glsl_parser.tab.cc"
    break;

  case 213: /* precision_qualifier: LOWP  */
#line 2382 "glsl_parser.yy"
   {
      state->check_precision_qualifiers_allowed(&(yylsp[0]));
      (yyval.n) = ast_precision_low;
   }
#line 5411 "glsl_parser.tab.cc"
    break;

  case 214: /* struct_specifier: STRUCT any_identifier '{' struct_declaration_list '}'  */
#line 2390 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.struct_specifier) = new(ctx) ast_struct_specifier((yyvsp[-3].identifier), (yyvsp[-1].declarator_list));
      (yyval.struct_specifier)->set_location_range((yylsp[-3]), (yylsp[0]));
      state->symbols->add_type((yyvsp[-3].identifier), &glsl_type_builtin_void);
   }
#line 5422 "glsl_parser.tab.cc"
    break;

  case 215: /* struct_specifier: STRUCT '{' struct_declaration_list '}'  */
#line 2397 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;

      /* All anonymous structs have the same name. This simplifies matching of
       * globals whose type is an unnamed struct.
       *
       * It also avoids a memory leak when the same shader is compiled over and
       * over again.
       */
      (yyval.struct_specifier) = new(ctx) ast_struct_specifier("#anon_struct", (yyvsp[-1].declarator_list));

      (yyval.struct_specifier)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 5440 "glsl_parser.tab.cc"
    break;

  case 216: /* struct_declaration_list: struct_declaration  */
#line 2414 "glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[0].declarator_list);
      (yyvsp[0].declarator_list)->link.self_link();
   }
#line 5449 "glsl_parser.tab.cc"
    break;

  case 217: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 2419 "glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[-1].declarator_list);
      (yyval.declarator_list)->link.insert_before(& (yyvsp[0].declarator_list)->link);
   }
#line 5458 "glsl_parser.tab.cc"
    break;

  case 218: /* struct_declaration: fully_specified_type struct_declarator_list ';'  */
#line 2427 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_fully_specified_type *const type = (yyvsp[-2].fully_specified_type);
      type->set_location((yylsp[-2]));

      if (state->has_bindless()) {
         ast_type_qualifier input_layout_mask;

         /* Allow to declare qualifiers for images. */
         input_layout_mask.flags.i = 0;
         input_layout_mask.flags.q.coherent = 1;
         input_layout_mask.flags.q._volatile = 1;
         input_layout_mask.flags.q.restrict_flag = 1;
         input_layout_mask.flags.q.read_only = 1;
         input_layout_mask.flags.q.write_only = 1;
         input_layout_mask.flags.q.explicit_image_format = 1;

         if ((type->qualifier.flags.i & ~input_layout_mask.flags.i) != 0) {
            _mesa_glsl_error(&(yylsp[-2]), state,
                             "only precision and image qualifiers may be "
                             "applied to structure members");
         }
      } else {
         if (type->qualifier.flags.i != 0)
            _mesa_glsl_error(&(yylsp[-2]), state,
                             "only precision qualifiers may be applied to "
                             "structure members");
      }

      (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
      (yyval.declarator_list)->set_location((yylsp[-1]));

      (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[-1].declaration)->link);
   }
#line 5497 "glsl_parser.tab.cc"
    break;

  case 219: /* struct_declarator_list: struct_declarator  */
#line 2465 "glsl_parser.yy"
   {
      (yyval.declaration) = (yyvsp[0].declaration);
      (yyvsp[0].declaration)->link.self_link();
   }
#line 5506 "glsl_parser.tab.cc"
    break;

  case 220: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 2470 "glsl_parser.yy"
   {
      (yyval.declaration) = (yyvsp[-2].declaration);
      (yyval.declaration)->link.insert_before(& (yyvsp[0].declaration)->link);
   }
#line 5515 "glsl_parser.tab.cc"
    break;

  case 221: /* struct_declarator: any_identifier  */
#line 2478 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.declaration) = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      (yyval.declaration)->set_location((yylsp[0]));
   }
#line 5525 "glsl_parser.tab.cc"
    break;

  case 222: /* struct_declarator: any_identifier array_specifier  */
#line 2484 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.declaration) = new(ctx) ast_declaration((yyvsp[-1].identifier), (yyvsp[0].array_specifier), NULL);
      (yyval.declaration)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 5535 "glsl_parser.tab.cc"
    break;

  case 224: /* initializer: '{' initializer_list '}'  */
#line 2494 "glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
   }
#line 5543 "glsl_parser.tab.cc"
    break;

  case 225: /* initializer: '{' initializer_list ',' '}'  */
#line 2498 "glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-2].expression);
   }
#line 5551 "glsl_parser.tab.cc"
    break;

  case 226: /* initializer_list: initializer  */
#line 2505 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_aggregate_initializer();
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 5562 "glsl_parser.tab.cc"
    break;

  case 227: /* initializer_list: initializer_list ',' initializer  */
#line 2512 "glsl_parser.yy"
   {
      (yyvsp[-2].expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 5570 "glsl_parser.tab.cc"
    break;

  case 229: /* statement: compound_statement  */
#line 2524 "glsl_parser.yy"
                             { (yyval.node) = (ast_node *) (yyvsp[0].compound_statement); }
#line 5576 "glsl_parser.tab.cc"
    break;

  case 238: /* compound_statement: '{' '}'  */
#line 2540 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(true, NULL);
      (yyval.compound_statement)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 5586 "glsl_parser.tab.cc"
    break;

  case 239: /* $@2: %empty  */
#line 2546 "glsl_parser.yy"
   {
      state->symbols->push_scope();
   }
#line 5594 "glsl_parser.tab.cc"
    break;

  case 240: /* compound_statement: '{' $@2 statement_list '}'  */
#line 2550 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(true, (yyvsp[-1].node));
      (yyval.compound_statement)->set_location_range((yylsp[-3]), (yylsp[0]));
      state->symbols->pop_scope();
   }
#line 5605 "glsl_parser.tab.cc"
    break;

  case 241: /* statement_no_new_scope: compound_statement_no_new_scope  */
#line 2559 "glsl_parser.yy"
                                   { (yyval.node) = (ast_node *) (yyvsp[0].compound_statement); }
#line 5611 "glsl_parser.tab.cc"
    break;

  case 243: /* compound_statement_no_new_scope: '{' '}'  */
#line 2565 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(false, NULL);
      (yyval.compound_statement)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 5621 "glsl_parser.tab.cc"
    break;

  case 244: /* compound_statement_no_new_scope: '{' statement_list '}'  */
#line 2571 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(false, (yyvsp[-1].node));
      (yyval.compound_statement)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 5631 "glsl_parser.tab.cc"
    break;

  case 245: /* statement_list: statement  */
#line 2580 "glsl_parser.yy"
   {
      if ((yyvsp[0].node) == NULL) {
         _mesa_glsl_error(& (yylsp[0]), state, "<nil> statement");
         assert((yyvsp[0].node) != NULL);
      }

      (yyval.node) = (yyvsp[0].node);
      (yyval.node)->link.self_link();
   }
#line 5645 "glsl_parser.tab.cc"
    break;

  case 246: /* statement_list: statement_list statement  */
#line 2590 "glsl_parser.yy"
   {
      if ((yyvsp[0].node) == NULL) {
         _mesa_glsl_error(& (yylsp[0]), state, "<nil> statement");
         assert((yyvsp[0].node) != NULL);
      }
      (yyval.node) = (yyvsp[-1].node);
      (yyval.node)->link.insert_before(& (yyvsp[0].node)->link);
   }
#line 5658 "glsl_parser.tab.cc"
    break;

  case 247: /* statement_list: statement_list extension_statement  */
#line 2599 "glsl_parser.yy"
   {
      if (!state->allow_extension_directive_midshader) {
         _mesa_glsl_error(& (yylsp[-1]), state,
                          "#extension directive is not allowed "
                          "in the middle of a shader");
         YYERROR;
      }
   }
#line 5671 "glsl_parser.tab.cc"
    break;

  case 248: /* expression_statement: ';'  */
#line 2611 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_expression_statement(NULL);
      (yyval.node)->set_location((yylsp[0]));
   }
#line 5681 "glsl_parser.tab.cc"
    break;

  case 249: /* expression_statement: expression ';'  */
#line 2617 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_expression_statement((yyvsp[-1].expression));
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 5691 "glsl_parser.tab.cc"
    break;

  case 250: /* selection_statement: IF '(' expression ')' selection_rest_statement  */
#line 2626 "glsl_parser.yy"
   {
      (yyval.node) = new(state->linalloc) ast_selection_statement((yyvsp[-2].expression), (yyvsp[0].selection_rest_statement).then_statement,
                                                        (yyvsp[0].selection_rest_statement).else_statement);
      (yyval.node)->set_location_range((yylsp[-4]), (yylsp[0]));
   }
#line 5701 "glsl_parser.tab.cc"
    break;

  case 251: /* selection_rest_statement: statement ELSE statement  */
#line 2635 "glsl_parser.yy"
   {
      (yyval.selection_rest_statement).then_statement = (yyvsp[-2].node);
      (yyval.selection_rest_statement).else_statement = (yyvsp[0].node);
   }
#line 5710 "glsl_parser.tab.cc"
    break;

  case 252: /* selection_rest_statement: statement  */
#line 2640 "glsl_parser.yy"
   {
      (yyval.selection_rest_statement).then_statement = (yyvsp[0].node);
      (yyval.selection_rest_statement).else_statement = NULL;
   }
#line 5719 "glsl_parser.tab.cc"
    break;

  case 253: /* condition: expression  */
#line 2648 "glsl_parser.yy"
   {
      (yyval.node) = (ast_node *) (yyvsp[0].expression);
   }
#line 5727 "glsl_parser.tab.cc"
    break;

  case 254: /* condition: fully_specified_type any_identifier '=' initializer  */
#line 2652 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-2].identifier), NULL, (yyvsp[0].expression));
      ast_declarator_list *declarator = new(ctx) ast_declarator_list((yyvsp[-3].fully_specified_type));
      decl->set_location_range((yylsp[-2]), (yylsp[0]));
      declarator->set_location((yylsp[-3]));

      declarator->declarations.push_tail(&decl->link);
      (yyval.node) = declarator;
   }
#line 5742 "glsl_parser.tab.cc"
    break;

  case 255: /* switch_statement: SWITCH '(' expression ')' switch_body  */
#line 2670 "glsl_parser.yy"
   {
      (yyval.node) = new(state->linalloc) ast_switch_statement((yyvsp[-2].expression), (yyvsp[0].switch_body));
      (yyval.node)->set_location_range((yylsp[-4]), (yylsp[0]));
   }
#line 5751 "glsl_parser.tab.cc"
    break;

  case 256: /* switch_body: '{' '}'  */
#line 2678 "glsl_parser.yy"
   {
      (yyval.switch_body) = new(state->linalloc) ast_switch_body(NULL);
      (yyval.switch_body)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 5760 "glsl_parser.tab.cc"
    break;

  case 257: /* switch_body: '{' case_statement_list '}'  */
#line 2683 "glsl_parser.yy"
   {
      (yyval.switch_body) = new(state->linalloc) ast_switch_body((yyvsp[-1].case_statement_list));
      (yyval.switch_body)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 5769 "glsl_parser.tab.cc"
    break;

  case 258: /* case_label: CASE expression ':'  */
#line 2691 "glsl_parser.yy"
   {
      (yyval.case_label) = new(state->linalloc) ast_case_label((yyvsp[-1].expression));
      (yyval.case_label)->set_location((yylsp[-1]));
   }
#line 5778 "glsl_parser.tab.cc"
    break;

  case 259: /* case_label: DEFAULT ':'  */
#line 2696 "glsl_parser.yy"
   {
      (yyval.case_label) = new(state->linalloc) ast_case_label(NULL);
      (yyval.case_label)->set_location((yylsp[0]));
   }
#line 5787 "glsl_parser.tab.cc"
    break;

  case 260: /* case_label_list: case_label  */
#line 2704 "glsl_parser.yy"
   {
      ast_case_label_list *labels = new(state->linalloc) ast_case_label_list();

      labels->labels.push_tail(& (yyvsp[0].case_label)->link);
      (yyval.case_label_list) = labels;
      (yyval.case_label_list)->set_location((yylsp[0]));
   }
#line 5799 "glsl_parser.tab.cc"
    break;

  case 261: /* case_label_list: case_label_list case_label  */
#line 2712 "glsl_parser.yy"
   {
      (yyval.case_label_list) = (yyvsp[-1].case_label_list);
      (yyval.case_label_list)->labels.push_tail(& (yyvsp[0].case_label)->link);
   }
#line 5808 "glsl_parser.tab.cc"
    break;

  case 262: /* case_statement: case_label_list statement  */
#line 2720 "glsl_parser.yy"
   {
      ast_case_statement *stmts = new(state->linalloc) ast_case_statement((yyvsp[-1].case_label_list));
      stmts->set_location((yylsp[0]));

      stmts->stmts.push_tail(& (yyvsp[0].node)->link);
      (yyval.case_statement) = stmts;
   }
#line 5820 "glsl_parser.tab.cc"
    break;

  case 263: /* case_statement: case_statement statement  */
#line 2728 "glsl_parser.yy"
   {
      (yyval.case_statement) = (yyvsp[-1].case_statement);
      (yyval.case_statement)->stmts.push_tail(& (yyvsp[0].node)->link);
   }
#line 5829 "glsl_parser.tab.cc"
    break;

  case 264: /* case_statement_list: case_statement  */
#line 2736 "glsl_parser.yy"
   {
      ast_case_statement_list *cases= new(state->linalloc) ast_case_statement_list();
      cases->set_location((yylsp[0]));

      cases->cases.push_tail(& (yyvsp[0].case_statement)->link);
      (yyval.case_statement_list) = cases;
   }
#line 5841 "glsl_parser.tab.cc"
    break;

  case 265: /* case_statement_list: case_statement_list case_statement  */
#line 2744 "glsl_parser.yy"
   {
      (yyval.case_statement_list) = (yyvsp[-1].case_statement_list);
      (yyval.case_statement_list)->cases.push_tail(& (yyvsp[0].case_statement)->link);
   }
#line 5850 "glsl_parser.tab.cc"
    break;

  case 266: /* iteration_statement: WHILE '(' condition ')' statement_no_new_scope  */
#line 2752 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_while,
                                            NULL, (yyvsp[-2].node), NULL, (yyvsp[0].node));
      (yyval.node)->set_location_range((yylsp[-4]), (yylsp[-1]));
   }
#line 5861 "glsl_parser.tab.cc"
    break;

  case 267: /* iteration_statement: DO statement_no_new_scope WHILE '(' expression ')' ';'  */
#line 2759 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_do_while,
                                            NULL, (yyvsp[-2].expression), NULL, (yyvsp[-5].node));
      (yyval.node)->set_location_range((yylsp[-6]), (yylsp[-1]));
   }
#line 5872 "glsl_parser.tab.cc"
    break;

  case 268: /* iteration_statement: FOR '(' for_init_statement for_rest_statement ')' statement_no_new_scope  */
#line 2766 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_for,
                                            (yyvsp[-3].node), (yyvsp[-2].for_rest_statement).cond, (yyvsp[-2].for_rest_statement).rest, (yyvsp[0].node));
      (yyval.node)->set_location_range((yylsp[-5]), (yylsp[0]));
   }
#line 5883 "glsl_parser.tab.cc"
    break;

  case 272: /* conditionopt: %empty  */
#line 2782 "glsl_parser.yy"
   {
      (yyval.node) = NULL;
   }
#line 5891 "glsl_parser.tab.cc"
    break;

  case 273: /* for_rest_statement: conditionopt ';'  */
#line 2789 "glsl_parser.yy"
   {
      (yyval.for_rest_statement).cond = (yyvsp[-1].node);
      (yyval.for_rest_statement).rest = NULL;
   }
#line 5900 "glsl_parser.tab.cc"
    break;

  case 274: /* for_rest_statement: conditionopt ';' expression  */
#line 2794 "glsl_parser.yy"
   {
      (yyval.for_rest_statement).cond = (yyvsp[-2].node);
      (yyval.for_rest_statement).rest = (yyvsp[0].expression);
   }
#line 5909 "glsl_parser.tab.cc"
    break;

  case 275: /* jump_statement: CONTINUE ';'  */
#line 2803 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_continue, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 5919 "glsl_parser.tab.cc"
    break;

  case 276: /* jump_statement: BREAK ';'  */
#line 2809 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_break, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 5929 "glsl_parser.tab.cc"
    break;

  case 277: /* jump_statement: RETURN ';'  */
#line 2815 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 5939 "glsl_parser.tab.cc"
    break;

  case 278: /* jump_statement: RETURN expression ';'  */
#line 2821 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, (yyvsp[-1].expression));
      (yyval.node)->set_location_range((yylsp[-2]), (yylsp[-1]));
   }
#line 5949 "glsl_parser.tab.cc"
    break;

  case 279: /* jump_statement: DISCARD ';'  */
#line 2827 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_discard, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 5959 "glsl_parser.tab.cc"
    break;

  case 280: /* demote_statement: DEMOTE ';'  */
#line 2836 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_demote_statement();
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 5969 "glsl_parser.tab.cc"
    break;

  case 281: /* external_declaration: function_definition  */
#line 2844 "glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].function_definition); }
#line 5975 "glsl_parser.tab.cc"
    break;

  case 282: /* external_declaration: declaration  */
#line 2845 "glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].node); }
#line 5981 "glsl_parser.tab.cc"
    break;

  case 283: /* external_declaration: pragma_statement  */
#line 2846 "glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].node); }
#line 5987 "glsl_parser.tab.cc"
    break;

  case 284: /* external_declaration: layout_defaults  */
#line 2847 "glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].node); }
#line 5993 "glsl_parser.tab.cc"
    break;

  case 285: /* external_declaration: ';'  */
#line 2848 "glsl_parser.yy"
                            { (yyval.node) = NULL; }
#line 5999 "glsl_parser.tab.cc"
    break;

  case 286: /* function_definition: function_prototype compound_statement_no_new_scope  */
#line 2853 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      (yyval.function_definition) = new(ctx) ast_function_definition();
      (yyval.function_definition)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.function_definition)->prototype = (yyvsp[-1].function);
      (yyval.function_definition)->body = (yyvsp[0].compound_statement);

      state->symbols->pop_scope();
   }
#line 6013 "glsl_parser.tab.cc"
    break;

  case 287: /* interface_block: basic_interface_block  */
#line 2867 "glsl_parser.yy"
   {
      (yyval.node) = (yyvsp[0].interface_block);
   }
#line 6021 "glsl_parser.tab.cc"
    break;

  case 288: /* interface_block: layout_qualifier interface_block  */
#line 2871 "glsl_parser.yy"
   {
      ast_interface_block *block = (ast_interface_block *) (yyvsp[0].node);

      if (!(yyvsp[-1].type_qualifier).merge_qualifier(& (yylsp[-1]), state, block->layout, false,
                              block->layout.has_layout())) {
         YYERROR;
      }

      block->layout = (yyvsp[-1].type_qualifier);

      (yyval.node) = block;
   }
#line 6038 "glsl_parser.tab.cc"
    break;

  case 289: /* interface_block: memory_qualifier interface_block  */
#line 2884 "glsl_parser.yy"
   {
      ast_interface_block *block = (ast_interface_block *)(yyvsp[0].node);

      if (!block->default_layout.flags.q.buffer) {
            _mesa_glsl_error(& (yylsp[-1]), state,
                             "memory qualifiers can only be used in the "
                             "declaration of shader storage blocks");
      }
      if (!(yyvsp[-1].type_qualifier).merge_qualifier(& (yylsp[-1]), state, block->layout, false)) {
         YYERROR;
      }
      block->layout = (yyvsp[-1].type_qualifier);
      (yyval.node) = block;
   }
#line 6057 "glsl_parser.tab.cc"
    break;

  case 290: /* basic_interface_block: interface_qualifier NEW_IDENTIFIER '{' member_list '}' instance_name_opt ';'  */
#line 2902 "glsl_parser.yy"
   {
      ast_interface_block *const block = (yyvsp[-1].interface_block);

      if ((yyvsp[-6].type_qualifier).flags.q.uniform) {
         block->default_layout = *state->default_uniform_qualifier;
      } else if ((yyvsp[-6].type_qualifier).flags.q.buffer) {
         block->default_layout = *state->default_shader_storage_qualifier;
      }
      block->block_name = (yyvsp[-5].identifier);
      block->declarations.push_degenerate_list_at_head(& (yyvsp[-3].declarator_list)->link);

      _mesa_ast_process_interface_block(& (yylsp[-6]), state, block, (yyvsp[-6].type_qualifier));

      (yyval.interface_block) = block;
   }
#line 6077 "glsl_parser.tab.cc"
    break;

  case 291: /* interface_qualifier: IN_TOK  */
#line 2921 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
   }
#line 6086 "glsl_parser.tab.cc"
    break;

  case 292: /* interface_qualifier: OUT_TOK  */
#line 2926 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 6095 "glsl_parser.tab.cc"
    break;

  case 293: /* interface_qualifier: UNIFORM  */
#line 2931 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.uniform = 1;
   }
#line 6104 "glsl_parser.tab.cc"
    break;

  case 294: /* interface_qualifier: BUFFER  */
#line 2936 "glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.buffer = 1;
   }
#line 6113 "glsl_parser.tab.cc"
    break;

  case 295: /* interface_qualifier: auxiliary_storage_qualifier interface_qualifier  */
#line 2941 "glsl_parser.yy"
   {
      if (!(yyvsp[-1].type_qualifier).flags.q.patch) {
         _mesa_glsl_error(&(yylsp[-1]), state, "invalid interface qualifier");
      }
      if ((yyvsp[0].type_qualifier).has_auxiliary_storage()) {
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate patch qualifier");
      }
      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.patch = 1;
   }
#line 6128 "glsl_parser.tab.cc"
    break;

  case 296: /* instance_name_opt: %empty  */
#line 2955 "glsl_parser.yy"
   {
      (yyval.interface_block) = new(state->linalloc) ast_interface_block(NULL, NULL);
   }
#line 6136 "glsl_parser.tab.cc"
    break;

  case 297: /* instance_name_opt: NEW_IDENTIFIER  */
#line 2959 "glsl_parser.yy"
   {
      (yyval.interface_block) = new(state->linalloc) ast_interface_block((yyvsp[0].identifier), NULL);
      (yyval.interface_block)->set_location((yylsp[0]));
   }
#line 6145 "glsl_parser.tab.cc"
    break;

  case 298: /* instance_name_opt: NEW_IDENTIFIER array_specifier  */
#line 2964 "glsl_parser.yy"
   {
      (yyval.interface_block) = new(state->linalloc) ast_interface_block((yyvsp[-1].identifier), (yyvsp[0].array_specifier));
      (yyval.interface_block)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 6154 "glsl_parser.tab.cc"
    break;

  case 299: /* member_list: member_declaration  */
#line 2972 "glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[0].declarator_list);
      (yyvsp[0].declarator_list)->link.self_link();
   }
#line 6163 "glsl_parser.tab.cc"
    break;

  case 300: /* member_list: member_declaration member_list  */
#line 2977 "glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[-1].declarator_list);
      (yyvsp[0].declarator_list)->link.insert_before(& (yyval.declarator_list)->link);
   }
#line 6172 "glsl_parser.tab.cc"
    break;

  case 301: /* member_declaration: fully_specified_type struct_declarator_list ';'  */
#line 2985 "glsl_parser.yy"
   {
      linear_ctx *ctx = state->linalloc;
      ast_fully_specified_type *type = (yyvsp[-2].fully_specified_type);
      type->set_location((yylsp[-2]));

      if (type->qualifier.flags.q.attribute) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "keyword 'attribute' cannot be used with "
                          "interface block member");
      } else if (type->qualifier.flags.q.varying) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "keyword 'varying' cannot be used with "
                          "interface block member");
      }

      (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
      (yyval.declarator_list)->set_location((yylsp[-1]));

      (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[-1].declaration)->link);
   }
#line 6197 "glsl_parser.tab.cc"
    break;

  case 302: /* layout_uniform_defaults: layout_qualifier layout_uniform_defaults  */
#line 3009 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[-1]), state, (yyvsp[0].type_qualifier), false, true)) {
         YYERROR;
      }
   }
#line 6208 "glsl_parser.tab.cc"
    break;

  case 304: /* layout_buffer_defaults: layout_qualifier layout_buffer_defaults  */
#line 3020 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[-1]), state, (yyvsp[0].type_qualifier), false, true)) {
         YYERROR;
      }
   }
#line 6219 "glsl_parser.tab.cc"
    break;

  case 306: /* layout_in_defaults: layout_qualifier layout_in_defaults  */
#line 3031 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[-1]), state, (yyvsp[0].type_qualifier), false, true)) {
         YYERROR;
      }
      if (!(yyval.type_qualifier).validate_in_qualifier(& (yylsp[-1]), state)) {
         YYERROR;
      }
   }
#line 6233 "glsl_parser.tab.cc"
    break;

  case 307: /* layout_in_defaults: layout_qualifier IN_TOK ';'  */
#line 3041 "glsl_parser.yy"
   {
      if (!(yyvsp[-2].type_qualifier).validate_in_qualifier(& (yylsp[-2]), state)) {
         YYERROR;
      }
   }
#line 6243 "glsl_parser.tab.cc"
    break;

  case 308: /* layout_out_defaults: layout_qualifier layout_out_defaults  */
#line 3050 "glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[-1]), state, (yyvsp[0].type_qualifier), false, true)) {
         YYERROR;
      }
      if (!(yyval.type_qualifier).validate_out_qualifier(& (yylsp[-1]), state)) {
         YYERROR;
      }
   }
#line 6257 "glsl_parser.tab.cc"
    break;

  case 309: /* layout_out_defaults: layout_qualifier OUT_TOK ';'  */
#line 3060 "glsl_parser.yy"
   {
      if (!(yyvsp[-2].type_qualifier).validate_out_qualifier(& (yylsp[-2]), state)) {
         YYERROR;
      }
   }
#line 6267 "glsl_parser.tab.cc"
    break;

  case 310: /* layout_defaults: layout_uniform_defaults  */
#line 3069 "glsl_parser.yy"
   {
      (yyval.node) = NULL;
      if (!state->default_uniform_qualifier->
             merge_qualifier(& (yylsp[0]), state, (yyvsp[0].type_qualifier), false)) {
         YYERROR;
      }
      if (!state->default_uniform_qualifier->
             push_to_global(& (yylsp[0]), state)) {
         YYERROR;
      }
   }
#line 6283 "glsl_parser.tab.cc"
    break;

  case 311: /* layout_defaults: layout_buffer_defaults  */
#line 3081 "glsl_parser.yy"
   {
      (yyval.node) = NULL;
      if (!state->default_shader_storage_qualifier->
             merge_qualifier(& (yylsp[0]), state, (yyvsp[0].type_qualifier), false)) {
         YYERROR;
      }
      if (!state->default_shader_storage_qualifier->
             push_to_global(& (yylsp[0]), state)) {
         YYERROR;
      }

      /* From the GLSL 4.50 spec, section 4.4.5:
       *
       *     "It is a compile-time error to specify the binding identifier for
       *     the global scope or for block member declarations."
       */
      if (state->default_shader_storage_qualifier->flags.q.explicit_binding) {
         _mesa_glsl_error(& (yylsp[0]), state,
                          "binding qualifier cannot be set for default layout");
      }
   }
#line 6309 "glsl_parser.tab.cc"
    break;

  case 312: /* layout_defaults: layout_in_defaults  */
#line 3103 "glsl_parser.yy"
   {
      (yyval.node) = NULL;
      if (!(yyvsp[0].type_qualifier).merge_into_in_qualifier(& (yylsp[0]), state, (yyval.node))) {
         YYERROR;
      }
      if (!state->in_qualifier->push_to_global(& (yylsp[0]), state)) {
         YYERROR;
      }
   }
#line 6323 "glsl_parser.tab.cc"
    break;

  case 313: /* layout_defaults: layout_out_defaults  */
#line 3113 "glsl_parser.yy"
   {
      (yyval.node) = NULL;
      if (!(yyvsp[0].type_qualifier).merge_into_out_qualifier(& (yylsp[0]), state, (yyval.node))) {
         YYERROR;
      }
      if (!state->out_qualifier->push_to_global(& (yylsp[0]), state)) {
         YYERROR;
      }

      (void)yynerrs;
   }
#line 6339 "glsl_parser.tab.cc"
    break;


#line 6343 "glsl_parser.tab.cc"

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
  *++yylsp = yyloc;

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, state, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
                      yytoken, &yylval, &yylloc, state);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, state, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, state);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, state);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

