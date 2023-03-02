/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         cligen_parseparse
#define yylex           cligen_parselex
#define yyerror         cligen_parseerror
#define yydebug         cligen_parsedebug
#define yynerrs         cligen_parsenerrs
#define yylval          cligen_parselval
#define yychar          cligen_parsechar


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

#include "cligen_parse.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MY_EOF = 3,                     /* MY_EOF  */
  YYSYMBOL_V_RANGE = 4,                    /* V_RANGE  */
  YYSYMBOL_V_LENGTH = 5,                   /* V_LENGTH  */
  YYSYMBOL_V_CHOICE = 6,                   /* V_CHOICE  */
  YYSYMBOL_V_KEYWORD = 7,                  /* V_KEYWORD  */
  YYSYMBOL_V_REGEXP = 8,                   /* V_REGEXP  */
  YYSYMBOL_V_FRACTION_DIGITS = 9,          /* V_FRACTION_DIGITS  */
  YYSYMBOL_V_SHOW = 10,                    /* V_SHOW  */
  YYSYMBOL_V_TREENAME = 11,                /* V_TREENAME  */
  YYSYMBOL_V_TRANSLATE = 12,               /* V_TRANSLATE  */
  YYSYMBOL_V_PREFERENCE = 13,              /* V_PREFERENCE  */
  YYSYMBOL_DOUBLEPARENT = 14,              /* DOUBLEPARENT  */
  YYSYMBOL_DQ = 15,                        /* DQ  */
  YYSYMBOL_DQP = 16,                       /* DQP  */
  YYSYMBOL_PDQ = 17,                       /* PDQ  */
  YYSYMBOL_SETS = 18,                      /* SETS  */
  YYSYMBOL_NAME = 19,                      /* NAME  */
  YYSYMBOL_NUMBER = 20,                    /* NUMBER  */
  YYSYMBOL_DECIMAL = 21,                   /* DECIMAL  */
  YYSYMBOL_CHARS = 22,                     /* CHARS  */
  YYSYMBOL_HELPSTR = 23,                   /* HELPSTR  */
  YYSYMBOL_24_ = 24,                       /* ';'  */
  YYSYMBOL_25_ = 25,                       /* ','  */
  YYSYMBOL_26_ = 26,                       /* '{'  */
  YYSYMBOL_27_ = 27,                       /* '}'  */
  YYSYMBOL_28_ = 28,                       /* '='  */
  YYSYMBOL_29_ = 29,                       /* '('  */
  YYSYMBOL_30_ = 30,                       /* ')'  */
  YYSYMBOL_31_ = 31,                       /* '|'  */
  YYSYMBOL_32_ = 32,                       /* '['  */
  YYSYMBOL_33_ = 33,                       /* ']'  */
  YYSYMBOL_34_n_ = 34,                     /* '\n'  */
  YYSYMBOL_35_ = 35,                       /* '@'  */
  YYSYMBOL_36_ = 36,                       /* '<'  */
  YYSYMBOL_37_ = 37,                       /* '>'  */
  YYSYMBOL_38_ = 38,                       /* ':'  */
  YYSYMBOL_39_ = 39,                       /* ' '  */
  YYSYMBOL_40_ = 40,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_file = 42,                      /* file  */
  YYSYMBOL_lines = 43,                     /* lines  */
  YYSYMBOL_line = 44,                      /* line  */
  YYSYMBOL_line1 = 45,                     /* line1  */
  YYSYMBOL_preline = 46,                   /* preline  */
  YYSYMBOL_line2 = 47,                     /* line2  */
  YYSYMBOL_48_1 = 48,                      /* $@1  */
  YYSYMBOL_49_2 = 49,                      /* $@2  */
  YYSYMBOL_options = 50,                   /* options  */
  YYSYMBOL_option = 51,                    /* option  */
  YYSYMBOL_assignment = 52,                /* assignment  */
  YYSYMBOL_flag = 53,                      /* flag  */
  YYSYMBOL_callback = 54,                  /* callback  */
  YYSYMBOL_55_3 = 55,                      /* $@3  */
  YYSYMBOL_arglist = 56,                   /* arglist  */
  YYSYMBOL_arglist1 = 57,                  /* arglist1  */
  YYSYMBOL_arg = 58,                       /* arg  */
  YYSYMBOL_arg1 = 59,                      /* arg1  */
  YYSYMBOL_typecast = 60,                  /* typecast  */
  YYSYMBOL_decltop = 61,                   /* decltop  */
  YYSYMBOL_decllist = 62,                  /* decllist  */
  YYSYMBOL_63_4 = 63,                      /* $@4  */
  YYSYMBOL_declcomp = 64,                  /* declcomp  */
  YYSYMBOL_65_5 = 65,                      /* $@5  */
  YYSYMBOL_66_6 = 66,                      /* $@6  */
  YYSYMBOL_67_7 = 67,                      /* $@7  */
  YYSYMBOL_decl = 68,                      /* decl  */
  YYSYMBOL_helpstring = 69,                /* helpstring  */
  YYSYMBOL_helpstring1 = 70,               /* helpstring1  */
  YYSYMBOL_cmd = 71,                       /* cmd  */
  YYSYMBOL_72_8 = 72,                      /* $@8  */
  YYSYMBOL_variable = 73,                  /* variable  */
  YYSYMBOL_74_9 = 74,                      /* $@9  */
  YYSYMBOL_75_10 = 75,                     /* $@10  */
  YYSYMBOL_keypairs = 76,                  /* keypairs  */
  YYSYMBOL_numdec = 77,                    /* numdec  */
  YYSYMBOL_keypair = 78,                   /* keypair  */
  YYSYMBOL_exparglist = 79,                /* exparglist  */
  YYSYMBOL_exparg = 80,                    /* exparg  */
  YYSYMBOL_choices = 81,                   /* choices  */
  YYSYMBOL_charseq = 82                    /* charseq  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */

/* Here starts user C-code */

/* typecast macro */
#define _CY ((cligen_yacc *)_cy)

#define _YYERROR(msg) { cligen_parseerror(_CY, (msg)); YYERROR; }

/* add _cy to error paramaters */
#define YY_(msgid) msgid

#include "cligen_config.h"

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <net/if.h>

#include "cligen_buf.h"
#include "cligen_cv.h"
#include "cligen_cvec.h"
#include "cligen_parsetree.h"
#include "cligen_pt_head.h"
#include "cligen_callback.h"
#include "cligen_object.h"
#include "cligen_syntax.h"
#include "cligen_handle.h"
    //#include "cligen_util.h"
#include "cligen_parse.h"

static int debug = 0;

/* Enable for debugging, steals some cycles otherwise */
#if 0
#define _PARSE_DEBUG(s) fprintf(stderr, s "\n")
#else
#define _PARSE_DEBUG(s)
#endif

extern int cligen_parseget_lineno  (void);

int
cligen_parse_debug(int d)
{
    debug = d;
    return 0;
}

/*! CLIGEN parse error routine
 * Also called from yacc generated code *
 * @param[in]  cy  CLIgen yacc parse struct
 */
void cligen_parseerror(void *_cy,
                       char *s)
{
    cligen_yacc *cy = (cligen_yacc *)_cy;

    fprintf(stderr, "%s:%d: Error: %s: at or before: '%s'\n",
            cy->cy_name,
            cy->cy_linenum ,
            s,
            cligen_parsetext);
    return;
}

#define cligen_parseerror1(cy, s) cligen_parseerror(cy, s)

/*! Create a CLIgen variable (cv) and store it in the current variable object
 * Note that only one such cv can be stored.
 * @param[in]  cy  CLIgen yacc parse struct
 */
static cg_var *
create_cv(cligen_yacc *cy,
          char        *type,
          char        *str)
{
    cg_var   *cv = NULL;

    if ((cv = cv_new(CGV_STRING)) == NULL){
        fprintf(stderr, "malloc: %s\n", strerror(errno));
        goto done;
    }
    if (type){
        if (cv_type_set(cv, cv_str2type(type)) == CGV_ERR){
            fprintf(stderr, "%s:%d: error: No such type: %s\n",
                    cy->cy_name, cy->cy_linenum, type);
            cv_free(cv); cv = NULL;
            goto done;
        }
    }
    if (cv_parse(str, cv) < 0){ /* parse str into cgv */
        cv_free(cv); cv = NULL;
        goto done;
    }
  done:
    return cv;
}

/*!
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
cgy_flag(cligen_yacc *cy,
         char        *var)
{
    struct cgy_stack    *cs = cy->cy_stack;
    cg_var              *cv;
    int                  retval = -1;

    if (debug)
        fprintf(stderr, "%s: %s 1\n", __FUNCTION__, var);
    if (cs){ /* XXX: why cs? */
        if (cy->cy_cvec == NULL){
            if ((cy->cy_cvec = cvec_new(0)) == NULL){
                fprintf(stderr, "%s: cvec_new:%s\n", __FUNCTION__, strerror(errno));
                goto done;
            }
        }
        if ((cv = cvec_add(cy->cy_cvec, CGV_INT32)) == NULL){
            fprintf(stderr, "%s: realloc:%s\n", __FUNCTION__, strerror(errno));
            goto done;
        }
        cv_name_set(cv, var);
        cv_int32_set(cv, 1);
    }
    retval = 0;
  done:
    return retval;
}

/*! Set a new treename. In fact registers the previous tree and creates a new .
 * Note that one could have used an assignment: treename = <name>; for this but
 * I decided to create special syntax for this so that assignments can use any
 * variable names.
 * @param[in]  cy   CLIgen yacc parse struct
 * @param[in]  name Name of tree
 */
static int
cgy_treename(cligen_yacc *cy,
             char        *name)
{
    cg_obj          *co = NULL;
    cg_obj          *cot;
    struct cgy_list *cl;
    int              retval = -1;
    int              i;
    parse_tree      *pt;
    pt_head         *ph;

    /* Get the first object */
    for (cl=cy->cy_list; cl; cl = cl->cl_next){
        co = cl->cl_obj;
        break;
    }
    /* Get the top object */
    cot = co_top(co); /* co and cot can be same object */
    pt = co_pt_get(cot);
    /* If anything parsed */
    if (pt_len_get(pt) > 0){
        /* 2. Add the old parse-tree with old name*/
        for (i=0; i<pt_len_get(pt); i++){
            if ((co=pt_vec_i_get(pt, i)) != NULL)
                co_up_set(co, NULL);
        }
        if ((ph = cligen_ph_add(cy->cy_handle, cy->cy_treename)) == NULL)
            goto done;
        if (cligen_ph_parsetree_set(ph, pt) < 0)
            goto done;
        /* 3. Create new parse-tree XXX */
        if ((pt = pt_new()) == NULL)
            goto done;
        co_pt_clear(cot);
        co_pt_set(cot, pt);
    }

    /* 4. Set the new name */
    if (cy->cy_treename)
        free(cy->cy_treename);
    if ((cy->cy_treename = strdup(name)) == NULL){
        fprintf(stderr, "%s: strdup: %s\n", __FUNCTION__, strerror(errno));
        goto done;
    }
    retval = 0;
 done:
    return retval;
}

/*! Variable assignment
 * Only string type supported for now
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
cgy_assignment(cligen_yacc *cy,
               char        *var,
               char        *val)
{
    struct cgy_stack *cs = cy->cy_stack;
    int              retval = -1;
    cg_var          *cv;
    char            *treename_keyword;
    cligen_handle    h = cy->cy_handle;

    if (cs == NULL){
        errno = EINVAL;
        goto done;
    }
    if (debug)
        fprintf(stderr, "%s: %s=%s\n", __FUNCTION__, var, val);

    if (cs->cs_next != NULL){ /* local */
        if (cy->cy_cvec == NULL)
            if ((cy->cy_cvec = cvec_new(0)) == NULL){
                fprintf(stderr, "%s: cvec_new:%s\n", __FUNCTION__, strerror(errno));
                goto done;
            }
        if ((cv = cvec_add(cy->cy_cvec, CGV_STRING)) == NULL){
            fprintf(stderr, "%s: realloc:%s\n", __FUNCTION__, strerror(errno));
            goto done;
        }
        cv_name_set(cv, var);
        if (cv_parse(val, cv) < 0)
            goto done;
    }
    else{ /* global */
        treename_keyword = cligen_treename_keyword(h); /* typically: "treename" */
        if (strcmp(var, treename_keyword) == 0){
            if (cgy_treename(cy, val) < 0)
                goto done;
        }
        else {
            if ((cv = cvec_add(cy->cy_globals, CGV_STRING)) == NULL){
                fprintf(stderr, "%s: realloc:%s\n", __FUNCTION__, strerror(errno));
                goto done;
            }
            cv_name_set(cv, var);
            if (cv_parse(val, cv) < 0)  /* May be wrong type */
                goto done;
        }
    }
    retval = 0;
 done:
    return retval;
}

/*!
 * @param[in]  cy  CLIgen yacc parse struct
 */
int
cgy_callback(cligen_yacc *cy,
             char        *cb_str)
{
    struct cgy_stack *cs = cy->cy_stack;
    cg_callback      *cc, **ccp;

    if (debug)
        fprintf(stderr, "%s: %s\n", __FUNCTION__, cb_str);
    if (cs == NULL)
        return 0;
    ccp = &cy->cy_callbacks;
    while (*ccp != NULL)
        ccp = &((*ccp)->cc_next);
    if ((cc = malloc(sizeof(*cc))) == NULL){
        fprintf(stderr, "%s: malloc: %s\n", __FUNCTION__, strerror(errno));
        cligen_parseerror1(cy, "Allocating cligen callback");
        return -1;
    }
    memset(cc, 0, sizeof(*cc));
    cc->cc_fn_str = cb_str;
    *ccp = cc;
    return 0;
}

/*! Create a callback argument  and store it in the current callback
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
cgy_callback_arg(cligen_yacc *cy,
                 char        *type,
                 char        *arg)
{
    int          retval = -1;
    cg_callback *cc;
    cg_callback *cclast;
    cg_var      *cv = NULL;

    cclast = NULL;
    for (cc=cy->cy_callbacks; cc; cc = co_callback_next(cc))
        cclast = cc;
    if (cclast){
        if ((cv = create_cv(cy, type, arg)) == NULL)
            goto done;
        if (cclast->cc_cvec)
            cvec_append_var(cclast->cc_cvec, cv);
        else
            cclast->cc_cvec = cvec_from_var(cv);
    }
    retval = 0;
  done:
    if (cv)
        cv_free(cv);
    return retval;
}

/*!
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
expand_arg(cligen_yacc *cy,
           char        *arg)
{
   int      retval = -1;
    cg_var *cv = NULL;

    if ((cv = create_cv(cy, "string", arg)) == NULL)
        goto done;
    if (cy->cy_var->co_expand_fn_vec)
        cvec_append_var(cy->cy_var->co_expand_fn_vec, cv);
    else
        cy->cy_var->co_expand_fn_vec = cvec_from_var(cv);
    retval = 0;
  done:
    if (cv)
        cv_free(cv);
    return retval;
}

/*!
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
expand_fn(cligen_yacc *cy,
          char        *fn)
{
    cy->cy_var->co_expand_fn_str = fn;
    return 0;
}

static int
cg_translate(cligen_yacc *cy,
             char        *fn)
{
    cy->cy_var->co_translate_fn_str = fn;
    return 0;
}

static int
cg_preference(cligen_yacc *cy,
              char        *pref)
{
    cg_obj *yv;
    char   *reason = NULL;

    if ((yv = cy->cy_var) == NULL){
        fprintf(stderr, "No var obj");
        return -1;
    }
    if (parse_uint16(pref, &yv->co_preference, &reason) != 1){
        cligen_parseerror1(cy, reason);
        return -1;
    }
    return 0;
}

static int
cgy_list_push(cg_obj           *co,
              struct cgy_list **cl0)
{
    struct cgy_list *cl;

    if (debug)
        fprintf(stderr, "%s\n", __FUNCTION__);
    if ((cl = malloc(sizeof(*cl))) == NULL) {
        fprintf(stderr, "%s: malloc: %s\n", __FUNCTION__, strerror(errno));
        return -1;
    }
    cl->cl_next = *cl0;
    cl->cl_obj = co;
    *cl0 = cl;
    return 0;
}

/*! Delete whole list
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
cgy_list_delete(struct cgy_list **cl0)
{
    struct cgy_list *cl;

    while ((cl = *cl0) != NULL){
        *cl0 = cl->cl_next;
        free(cl);
    }
    return 0;
}

/*! Create new tmp variable cligen object
 * It must be filled in by later functions.
 * The reason is, the variable must be completely parsed by successive syntax
 * (eg <type:> stuff) and we cant insert it into the object tree until that is done.
 * And completed by the '_post' function
 * @param[in]  cy  CLIgen yacc parse struct
 * @retval tmp variable object
 * @see cgy_var_post
 */
static cg_obj *
cgy_var_create(cligen_yacc *cy)
{
    cg_obj *co;

    /* Create unassigned variable object */
    if ((co = cov_new(CGV_ERR, NULL)) == NULL){
        fprintf(stderr, "%s: malloc: %s\n", __FUNCTION__, strerror(errno));
        cligen_parseerror1(cy, "Allocating cligen object");
        return NULL;
    }
    if (cy->cy_optional){
        co_flags_set(co, CO_FLAGS_OPTION);
    }
    if (debug)
        fprintf(stderr, "%s: pre\n", __FUNCTION__);
    return co;
}

/*! Set name and type on a (previously created) variable
 * @param[in]  cy  CLIgen yacc parse struct
 * @see cgy_var_create
 */
static int
cgy_var_name_type(cligen_yacc *cy,
                  char        *name,
                  char        *type)
{
    cy->cy_var->co_command = name;
    if ((cy->cy_var->co_vtype = cv_str2type(type)) == CGV_ERR){
        cligen_parseerror1(cy, "Invalid type");
        fprintf(stderr, "%s: Invalid type: %s\n", __FUNCTION__, type);
        return -1;
    }
    return 0;
}

/*! Complete variable cligen object after parsing is complete,
 * And insert it into object hierarchies.
 * That is, insert a variable in each hieracrhy.
 * @param[in]  cy  CLIgen yacc parse struct
 * @retval 0 on OK
 * @retval -1 on error
 */
static int
cgy_var_post(cligen_yacc *cy)
{
    struct cgy_list *cl;
    cg_obj          *coc = NULL; /* variable copy object */
    cg_obj          *coparent; /* parent */
    cg_obj          *co;  /* new obj/sister */
    cg_obj          *coy = cy->cy_var;

#if 0
    if (coy->co_vtype == CGV_ERR) /* unassigned */
        coy->co_vtype = cv_str2type(coy->co_command);
#endif
    if (debug)
        fprintf(stderr, "%s: cmd:%s vtype:%d\n", __FUNCTION__,
                coy->co_command,
                coy->co_vtype );
    if (coy->co_vtype == CGV_ERR){
        cligen_parseerror1(cy, "Wrong or unassigned variable type");
        return -1;
    }
#if 0 /* XXX dont really know what i am doing but variables dont behave nice in choice */
    if (cy->cy_opt){     /* get coparent from stack */
        if (cy->cy_stack == NULL){
            fprintf(stderr, "Option allowed only within () or []\n");
            return -1;
        }
        cl = cy->cy_stack->cs_list;
    }
    else
#endif
        cl = cy->cy_list;
    for (; cl; cl = cl->cl_next){
        coparent = cl->cl_obj;
        if (cl->cl_next){
            if (co_copy(coy, coparent, 0x0, &coc) < 0) /* duplicate coy to coc */
                return -1;
        }
        else
            coc = coy; /* Dont copy if last in list */
        co_up_set(coc, coparent);
        if ((co = co_insert(co_pt_get(coparent), coc)) == NULL) /* coc may be deleted */
            return -1;
        cl->cl_obj = co;
    }
    return 0;
}

/*! Create a new command object.
 * Actually, create a new for every tree in the list
 * and replace the old with the new object.
 * @param[in]  cy  CLIgen yacc parse struct
 * @param[in]  cmd the command string
 * @retval     0   OK
 * @retval    -1   Error
 */
static int
cgy_cmd(cligen_yacc *cy,
        char        *cmd)
{
    struct cgy_list *cl;
    cg_obj          *cop; /* parent */
    cg_obj          *conew; /* new obj */
    cg_obj          *co; /* new/sister */

    for (cl=cy->cy_list; cl; cl = cl->cl_next){
        cop = cl->cl_obj;
        if (debug)
            fprintf(stderr, "%s: %s parent:%s\n",
                    __FUNCTION__, cmd, cop->co_command);
        if ((conew = co_new(cmd, cop)) == NULL) {
            cligen_parseerror1(cy, "Allocating cligen object");
            return -1;
        }
        if ((co = co_insert(co_pt_get(cop), conew)) == NULL)  /* co_new may be deleted */
            return -1;
        if (cy->cy_optional){
            co_flags_set(co, CO_FLAGS_OPTION);
        }
        cl->cl_obj = co; /* Replace parent in cgy_list */
    }
    return 0;
}

/*! Create a REFERENCE node that references another tree.
 * This is evaluated in runtime by pt_expand().
 * @param[in]  cy  CLIgen yacc parse struct
 * @see also db2tree() in clicon/apps/cli_main.c on how to create such a tree
 * @see pt_expand_treeref()/pt_callback_reference() how it is expanded
 */
static int
cgy_reference(cligen_yacc *cy,
              char        *name,
              cvec        *cvv)
{
    int              retval = -1;
    struct cgy_list *cl;
    cg_obj          *cop;   /* parent */
    cg_obj          *cot;   /* tree */

    for (cl=cy->cy_list; cl; cl = cl->cl_next){
        /* Add a treeref 'stub' which is expanded in pt_expand to a sub-tree */
        cop = cl->cl_obj;
        if ((cot = co_new(name, cop)) == NULL) {
            cligen_parseerror1(cy, "Allocating cligen object");
            goto done;
        }
        cot->co_type = CO_REFERENCE;

        if (cvv){
            if (cot->co_cvec)
                cvec_free(cot->co_cvec);
            if ((cot->co_cvec = cvec_dup(cvv)) == NULL)
                goto done;
        }
        if ((cot = co_insert(co_pt_get(cop), cot)) == NULL)  /* cot may be deleted */
            goto done;
        /* Replace parent in cgy_list: not allowed after ref?
           but only way to add callbacks to it.
        */
        if (cy->cy_optional){
            co_flags_set(cot, CO_FLAGS_OPTION);
        }
        cl->cl_obj = cot;
    }
    retval = 0;
 done:
    return retval;
}

/*! Add one line of helpstr
 *
 * @param[in]  cy       CLIgen yacc parse struct
 * @param[in]  merge    OK to merge
 * @param[in]  helpstr  Malloced help string, stripped of spaces, consumed here
 */
static int
cgy_helpstring(cligen_yacc *cy,
               int          merge,
               char        *helpstr)
{
    int              retval = -1;
    struct cgy_list *cl;
    cg_obj          *co;

    if (helpstr == NULL){
        errno = EINVAL;
        goto done;
    }
    for (cl = cy->cy_list; cl; cl = cl->cl_next){
        co = cl->cl_obj;
        if (co->co_helpstring){
            if (merge){
                if ((co->co_helpstring = realloc(co->co_helpstring,
                                                 strlen(co->co_helpstring) + strlen(helpstr) + 2)) == NULL){
                    cligen_parseerror1(cy, "Allocating helpstr");
                    goto done;
                }
                strcat(co->co_helpstring, "\n");
                strcat(co->co_helpstring, helpstr);
            }
        }
        else
            if ((co->co_helpstring = strdup(helpstr)) == NULL){
                cligen_parseerror1(cy, "Allocating helpstr");
                goto done;
            }
    }
    free(helpstr);
    retval = 0;
 done:
    return retval;
 }

/*! Append a new choice option to a choice variable string
 * @param[in]  cy   CLIgen yacc parse struct
 * @param[in]  str  Accumulated choice string on the form: "a|..|z"
 * @param[in]  app  Choice option to append
 * @retval     s    New string created by appending: "<str>|<app>"
 * This is just string manipulation, the complete string is linked into CLIgen structs by upper rule
 * Note that this is variable choice. There is also command choice, eg [a|b] which is different.
 */
static char *
cgy_var_choice_append(cligen_yacc *cy,
                      char        *str,
                      char        *app)
{
    int len;
    char *s;

    len = strlen(str)+strlen(app) + 2;
    if ((s = realloc(str, len)) == NULL) {
        fprintf(stderr, "%s: realloc: %s\n", __FUNCTION__, strerror(errno));
        return NULL;
    }
    strncat(s, "|", len-1);
    strncat(s, app, len-1);
    return s;
}

/*! Post-processing of commands, eg at ';':
 *  a cmd;<--
 * But only if parsing succesful.
 * 1. Add callback and args to every list
 * 2. Add empty child unless already empty child
 * @param[in]  cy  CLIgen yacc parse struct
 * @note co_callback_copy takes cycles, ca 50%
 */
int
cgy_terminal(cligen_yacc *cy)
{
    struct cgy_list *cl;
    cg_obj          *co;
    int              i;
    cg_callback    **ccp;
    int              retval = -1;
    parse_tree      *ptc;
    cg_obj          *coi;

    for (cl = cy->cy_list; cl; cl = cl->cl_next){
        co  = cl->cl_obj;
        if (cy->cy_callbacks){ /* callbacks */
            ccp = &co->co_callbacks;
            while (*ccp != NULL)
                ccp = &((*ccp)->cc_next);
#if 1 /* Optimization: dont copy the last element */
            if (cl->cl_next == NULL)
                *ccp = cy->cy_callbacks;
            else
#endif
            if (co_callback_copy(cy->cy_callbacks, ccp) < 0)
                goto done;
        }
        /* variables: special case "hide" */
        if (cy->cy_cvec){
            if (cvec_find(cy->cy_cvec, "hide") != NULL)
                co_flags_set(co, CO_FLAGS_HIDE);
            /* generic variables */
            if (co->co_cvec)
                cvec_free(co->co_cvec);
            if ((co->co_cvec = cvec_dup(cy->cy_cvec)) == NULL){ /* this leaks */
                fprintf(stderr, "%s: cvec_dup: %s\n", __FUNCTION__, strerror(errno));
                goto done;
            }
        }
        /* misc */
        if ((ptc = co_pt_get(co)) != NULL){
            for (i=0; i<pt_len_get(ptc); i++){
                if (pt_vec_i_get(ptc, i) == NULL)
                    break;
            }
            if (i == pt_len_get(ptc)){ /* Insert empty child if ';' */
                if ((coi = co_new(NULL, co)) == NULL) {
                    cligen_parseerror1(cy, "Allocating cligen object");
                    return -1;
                }
                coi->co_type = CO_EMPTY;
                co_insert(co_pt_get(co), coi);
            }
        }
        else{ /* Should never reach here? */
            co_insert(co_pt_get(co), NULL);
        }
    }
    /* cleanup */
#if 1 /* Optimization: dont copy first */
    if ((cl = cy->cy_list) != NULL)
        cy->cy_callbacks = NULL;
    else
#endif
        if (cy->cy_callbacks)
            co_callbacks_free(&cy->cy_callbacks);
    if (cy->cy_cvec){
        cvec_free(cy->cy_cvec);
        cy->cy_cvec = NULL;
    }
    retval = 0;
  done:
    return retval;
}

/*! Take the whole cgy_list and push it to the stack
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
ctx_push(cligen_yacc *cy,
         int          sets)
{
    struct cgy_list  *cl;
    struct cgy_stack *cs;
    cg_obj           *co;

    if (debug)
        fprintf(stderr, "%s\n", __FUNCTION__);
    /* Create new stack element */
    if ((cs = malloc(sizeof(*cs))) == NULL) {
        fprintf(stderr, "%s: malloc: %s\n", __FUNCTION__, strerror(errno));
        return -1;
    }
    memset(cs, 0, sizeof(*cs));
    cs->cs_next = cy->cy_stack;
    cy->cy_stack = cs; /* Push the new stack element */
    for (cl = cy->cy_list; cl; cl = cl->cl_next){
        co = cl->cl_obj;
        if (cvec_find(cy->cy_cvec, "hide") != NULL)
            co_flags_set(co, CO_FLAGS_HIDE);
        if (sets)
            co_sets_set(co, 1);
        if (cgy_list_push(co, &cs->cs_list) < 0)
            return -1;
    }
    return 0;
}

/*! Peek context from stack and replace the object list with it
 * Typically done in a command choice, eg "(c1|c2)" at c2.
 * Dont pop context
 * @param[in]  cy  CLIgen yacc parse struct
 * @see ctx_peek_swap2
 */
static int
ctx_peek_swap(cligen_yacc *cy)
{
    struct cgy_stack *cs;
    struct cgy_list  *cl;
    cg_obj           *co;

    if (debug)
        fprintf(stderr, "%s\n", __FUNCTION__);
    if ((cs = cy->cy_stack) == NULL){
#if 1
        cligen_parseerror1(cy, "No surrounding () or []");
        return -1; /* e.g a|b instead of (a|b) */
#else
        cgy_list_delete(&cy->cy_list);
        return 0;
#endif
    }
    for (cl = cy->cy_list; cl; cl = cl->cl_next){
        co = cl->cl_obj;
        if (cgy_list_push(co, &cs->cs_saved) < 0)
            return -1;
    }
    cgy_list_delete(&cy->cy_list);
    for (cl = cs->cs_list; cl; cl = cl->cl_next){
        co = cl->cl_obj;
        if (cgy_list_push(co, &cy->cy_list) < 0)
            return -1;
    }
    return 0;
}

/*! Peek context from stack and replace the object list with it
 * Typically done in a command choice, eg "(c1|c2)" at c2.
 * Dont pop context
 * @param[in]  cy  CLIgen yacc parse struct
 * @see ctx_peek_swap
 */
static int
ctx_peek_swap2(cligen_yacc *cy)
{
    struct cgy_stack *cs;
    struct cgy_list  *cl;
    cg_obj           *co;

    if (debug)
        fprintf(stderr, "%s\n", __FUNCTION__);
    if ((cs = cy->cy_stack) == NULL){
#if 1
        cligen_parseerror1(cy, "No surrounding () or []");
        return -1; /* e.g a|b instead of (a|b) */
#else
        cgy_list_delete(&cy->cy_list);
        return 0;
#endif
    }
    cgy_list_delete(&cy->cy_list);
    for (cl = cs->cs_list; cl; cl = cl->cl_next){
        co = cl->cl_obj;
        if (cgy_list_push(co, &cy->cy_list) < 0)
            return -1;
    }
    return 0;
}

static int
delete_stack_element(struct cgy_stack *cs)
{
    cgy_list_delete(&cs->cs_list);
    cgy_list_delete(&cs->cs_saved);
    free(cs);

    return 0;
}

/*! Pop context from stack and add it to object list
 * Done after an option, eg "cmd [opt]"
 * "cmd <push> [opt] <pop>". At pop, all objects saved at push
 * are added to the object list.
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
ctx_pop_add(cligen_yacc *cy)
{
    struct cgy_stack *cs;
    struct cgy_list  *cl;
    cg_obj           *co;

    if (debug)
        fprintf(stderr, "%s\n", __FUNCTION__);
    if ((cs = cy->cy_stack) == NULL){
        fprintf(stderr, "%s: cgy_stack empty\n", __FUNCTION__);
        return -1; /* shouldnt happen */
    }
    cy->cy_stack = cs->cs_next;
    /* We could have saved some heap work by moving the cs_list,... */
    for (cl = cs->cs_list; cl; cl = cl->cl_next){
        co = cl->cl_obj;
        if (cgy_list_push(co, &cy->cy_list) < 0)
            return -1;
    }
    for (cl = cs->cs_saved; cl; cl = cl->cl_next){
        co = cl->cl_obj;
        if (cgy_list_push(co, &cy->cy_list) < 0)
            return -1;
    }
    delete_stack_element(cs);
    return 0;
}

/*! Pop context from stack and discard it.
 * Typically done after a grouping, eg "cmd (opt1|opt2)"
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
ctx_pop(cligen_yacc *cy)
{
    struct cgy_stack *cs;
    struct cgy_list  *cl;
    cg_obj           *co;

    if (debug)
        fprintf(stderr, "%s\n", __FUNCTION__);
    if ((cs = cy->cy_stack) == NULL){
        fprintf(stderr, "%s: cgy_stack empty\n", __FUNCTION__);
        return -1; /* shouldnt happen */
    }
    cy->cy_stack = cs->cs_next;
    for (cl = cs->cs_saved; cl; cl = cl->cl_next){
        co = cl->cl_obj;
        if (cgy_list_push(co, &cy->cy_list) < 0)
            return -1;
    }
    delete_stack_element(cs);
    return 0;
}

/*!
 * @param[in]  cy  CLIgen yacc parse struct
 */
static int
cg_regexp(cligen_yacc *cy,
          char        *rx,
          int          invert)
{
    int     retval = -1;
    cg_var *cv;

    if (cy->cy_var->co_regex == NULL &&
        (cy->cy_var->co_regex = cvec_new(0)) == NULL)
        goto done;
    if ((cv = cvec_add(cy->cy_var->co_regex, CGV_STRING)) == NULL)
        goto done;
    if (invert)
        cv_flag_set(cv, V_INVERT);
    cv_string_set(cv, rx);
    if (cy->cy_var->co_vtype != CGV_STRING && cy->cy_var->co_vtype != CGV_REST)
        cy->cy_var->co_vtype = CGV_STRING;
    retval = 0;
 done:
    return retval;
}

/*! Given an optional min and a max, create low and upper bounds on cv values
 *
 * @param[in]  cy      CLIgen yacc parse struct
 * @param[in]  lowstr  low bound of interval (can be NULL)
 * @param[in]  uppstr  upper bound of interval
 * @param[in]  yv      The CLIgen syntax object
 * @param[in]  cvtype  Type of variable
 * Supported for ints, decimal64 and strings.
 *  <x:int length[min:max]> or <x:int length[max]>
 * @note: decimal64 fraction-digits must be given before range:
 *   <x:decimal64 fraction-digits:4 range[20.0]>
 * if you want any other fraction-digit than 2
 */
static int
cg_range_create(cligen_yacc *cy,
                char        *lowstr,
                char        *uppstr,
                cg_obj      *yv,
                enum cv_type cvtype)
{
    int     retval = -1;
    char   *reason = NULL;
    cg_var *cv1 = NULL;
    cg_var *cv2 = NULL;
    int     cvret;

    /* First create low bound cv */
    if ((cv1 = cv_new(cvtype)) == NULL){
        fprintf(stderr, "cv_new %s\n", strerror(errno));
        goto done;
    }
    if (cv_name_set(cv1, "range_low") == NULL){
        fprintf(stderr, "cv_name_set %s\n", strerror(errno));
        goto done;
    }
    if (lowstr == NULL){
        cv_type_set(cv1, CGV_EMPTY);
    }
    else{
        if (yv->co_vtype == CGV_DEC64) /* XXX: Seems misplaced? / too specific */
            cv_dec64_n_set(cv1, yv->co_dec64_n);
        if ((cvret = cv_parse1(lowstr, cv1, &reason)) < 0){
            fprintf(stderr, "cv_parse1 %s\n", strerror(errno));
            goto done;
        }
        if (cvret == 0){ /* parsing failed */
            cligen_parseerror1(cy, reason);
            free(reason);
            goto done;
        }
    }
    /* Then append it to the lowbound cvec, create if NULL */
    if (yv->co_rangecvv_low == NULL){
        if ((yv->co_rangecvv_low = cvec_from_var(cv1)) == NULL)
            goto done;
    }
    else if (cvec_append_var(yv->co_rangecvv_low, cv1) < 0)
        goto done;

    /* Then create upper bound cv */
    if ((cv2 = cv_new(cvtype)) == NULL){
        fprintf(stderr, "cv_new %s\n", strerror(errno));
        goto done;
    }
    if (cv_name_set(cv2, "range_high") == NULL){
        fprintf(stderr, "cv_name_set %s\n", strerror(errno));
        goto done;
    }
    if (yv->co_vtype == CGV_DEC64) /* XXX: Seems misplaced? / too specific */
        cv_dec64_n_set(cv2, yv->co_dec64_n);
    if ((cvret = cv_parse1(uppstr, cv2, &reason)) < 0){
        fprintf(stderr, "cv_parse1 %s\n", strerror(errno));
        goto done;
    }
    if (cvret == 0){ /* parsing failed */
        cligen_parseerror1(cy, reason);
        free(reason);
        goto done;
    }

    /* Append it to the upper bound cvec, create if NULL */
    if (yv->co_rangecvv_upp == NULL){
        if ((yv->co_rangecvv_upp = cvec_from_var(cv2)) == NULL)
            goto done;
    }
    else if (cvec_append_var(yv->co_rangecvv_upp, cv2) < 0)
        goto done;

    /* Then increment range vector length */
    yv->co_rangelen++;
    retval = 0;
  done:
    if (cv1)
        cv_free(cv1);
    if (cv2)
        cv_free(cv2);
    return retval;
}

/*! A length statement has been parsed. Create length/range cv
 *
 * @param[in]  cy      CLIgen yacc parse struct
 * @param[in]  lowstr  low bound of interval (can be NULL)
 * @param[in]  uppstr  upper bound of interval
 * Examples:
 * <x:string length[min:max]>  <x:string length[max]>
 *  @note that the co_range structure fields are re-used for string length restrictions.
 *   but the range type is uint64, not depending on cv type as int:s
 * @see cg_range
 */
static int
cg_length(cligen_yacc *cy,
          char        *lowstr,
          char        *uppstr)
{
    cg_obj *yv;

    if ((yv = cy->cy_var) == NULL){
        fprintf(stderr, "No var obj");
        return -1;
    }
    return cg_range_create(cy, lowstr, uppstr, yv, CGV_UINT64);
}

/*! A range statement has been parsed. Create range cv
 * @param[in]  cy      CLIgen yacc parse struct
 * @param[in]  lowstr  low bound of interval (can be NULL)
 * @param[in]  uppstr  upper bound of interval
 * Examples:
 * <x:int32 range[min:max]>  <x:int32 range[max]>
 * @see cg_length
 */
static int
cg_range(cligen_yacc *cy,
         char        *lowstr,
         char        *uppstr)
{
    cg_obj *yv;

    if ((yv = cy->cy_var) == NULL){
        fprintf(stderr, "No var obj");
        return -1;
    }
    return cg_range_create(cy, lowstr, uppstr, yv, yv->co_vtype);
}

/*!
 * @param[in]  cy  CLIgen yacc parse struct
 */
 static int
cg_dec64_n(cligen_yacc *cy,
           char        *fraction_digits)
{
    cg_obj *yv;
    char   *reason = NULL;

    if ((yv = cy->cy_var) == NULL){
        fprintf(stderr, "No var obj");
        return -1;
    }
    if (parse_uint8(fraction_digits, &yv->co_dec64_n, NULL) != 1){
        cligen_parseerror1(cy, reason);
        return -1;
    }
    return 0;
}

/*!
 * @param[in]  cy  CLIgen yacc parse struct
 */
int
cgy_init(cligen_yacc *cy,
         cg_obj      *co_top)
{
    if (debug)
        fprintf(stderr, "%s\n", __FUNCTION__);
    /* Add top-level object */
    if (cgy_list_push(co_top, &cy->cy_list) < 0)
        return -1;
    if (ctx_push(cy, 0) < 0)
        return -1;
    return 0;
}

/*!
 * @param[in]  cy  CLIgen yacc parse struct
 */
int
cgy_exit(cligen_yacc *cy)
{
    struct cgy_stack *cs;

    if (debug)
        fprintf(stderr, "%s\n", __FUNCTION__);

    cy->cy_var = NULL;
    cgy_list_delete(&cy->cy_list);
    if((cs = cy->cy_stack) != NULL){
        delete_stack_element(cs);
#if 0
        fprintf(stderr, "%s:%d: error: lacking () or [] at or before: '%s'\n",
                cy->cy_name,
                cy->cy_linenum,
                cy->cy_parse_string
            );
        return -1;
#endif
    }
    return 0;
}




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
typedef yytype_uint8 yy_state_t;

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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   202

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   278


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
      34,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    39,    40,     2,     2,     2,     2,     2,     2,
      29,    30,     2,     2,    25,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    24,
      36,    28,    37,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,    31,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,  1225,  1225,  1228,  1229,  1232,  1233,  1236,  1237,  1240,
    1241,  1244,  1249,  1249,  1259,  1258,  1269,  1270,  1273,  1274,
    1275,  1278,  1283,  1287,  1287,  1292,  1293,  1296,  1297,  1300,
    1307,  1308,  1309,  1312,  1313,  1316,  1317,  1320,  1322,  1322,
    1326,  1326,  1329,  1330,  1329,  1332,  1335,  1336,  1337,  1340,
    1345,  1352,  1359,  1367,  1369,  1371,  1371,  1375,  1376,  1377,
    1377,  1379,  1379,  1383,  1384,  1387,  1388,  1391,  1392,  1393,
    1396,  1399,  1402,  1405,  1408,  1411,  1414,  1415,  1419,  1420,
    1421,  1422,  1425,  1426,  1429,  1430,  1433,  1440,  1441,  1442,
    1443,  1444,  1445,  1446,  1449,  1457
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
  "\"end of file\"", "error", "\"invalid token\"", "MY_EOF", "V_RANGE",
  "V_LENGTH", "V_CHOICE", "V_KEYWORD", "V_REGEXP", "V_FRACTION_DIGITS",
  "V_SHOW", "V_TREENAME", "V_TRANSLATE", "V_PREFERENCE", "DOUBLEPARENT",
  "DQ", "DQP", "PDQ", "SETS", "NAME", "NUMBER", "DECIMAL", "CHARS",
  "HELPSTR", "';'", "','", "'{'", "'}'", "'='", "'('", "')'", "'|'", "'['",
  "']'", "'\\n'", "'@'", "'<'", "'>'", "':'", "' '", "'!'", "$accept",
  "file", "lines", "line", "line1", "preline", "line2", "$@1", "$@2",
  "options", "option", "assignment", "flag", "callback", "$@3", "arglist",
  "arglist1", "arg", "arg1", "typecast", "decltop", "decllist", "$@4",
  "declcomp", "$@5", "$@6", "$@7", "decl", "helpstring", "helpstring1",
  "cmd", "$@8", "variable", "$@9", "$@10", "keypairs", "numdec", "keypair",
  "exparglist", "exparg", "choices", "charseq", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    59,    44,   123,   125,    61,    40,
      41,   124,    91,    93,    10,    64,    60,    62,    58,    32,
      33
};
#endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-27)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -115,    10,    12,  -115,  -115,   -16,  -115,  -115,    24,  -115,
    -115,    16,    31,  -115,  -115,  -115,    47,    62,    73,    73,
    -115,    76,  -115,  -115,  -115,    -1,    79,  -115,  -115,  -115,
    -115,  -115,  -115,    19,    99,    39,    53,    40,    91,  -115,
      78,    27,  -115,  -115,  -115,  -115,    73,  -115,  -115,  -115,
     -13,   119,  -115,    58,  -115,  -115,    82,  -115,  -115,  -115,
     114,    79,  -115,  -115,    -3,  -115,   121,  -115,  -115,  -115,
    -115,   109,   106,    64,    74,  -115,  -115,   119,  -115,   117,
     122,   115,   112,   123,   124,   125,   126,   127,   116,   128,
    -115,  -115,   132,   129,   130,  -115,    -6,   106,   120,   133,
    -115,  -115,  -115,   135,   137,   -10,   138,    46,   141,   148,
      -7,   106,   139,  -115,   142,    72,  -115,  -115,   128,  -115,
    -115,     1,    21,   118,  -115,    99,   131,  -115,    99,  -115,
     143,  -115,    75,  -115,    -6,    51,  -115,  -115,  -115,  -115,
    -115,   102,  -115,   120,  -115,   150,  -115,  -115,  -115,   105,
      99,   107,   144,  -115,   108,  -115,    -9,  -115,  -115,   140,
     145,  -115,   111,  -115,  -115,  -115,  -115,  -115,  -115,  -115
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,     2,    53,    40,    42,     0,    55,
       3,     0,     0,    35,    36,    45,    46,     0,     0,     0,
      54,     0,     6,    10,    53,    11,     0,     9,    38,     5,
      12,     7,    37,     0,     0,     0,     0,    57,     0,    14,
      22,     0,    17,    20,    19,    18,     0,     4,    48,    52,
       0,    50,    95,     0,    41,    43,     0,    59,    56,     4,
       0,     0,     8,    39,     0,    47,     0,    51,    21,    94,
      44,    58,     0,     0,    34,    16,    13,    49,    61,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    60,
      63,    15,     0,     0,    25,    28,     0,     0,     0,     0,
      89,    88,    90,    76,     0,     0,     0,     0,     0,     0,
      34,     0,     0,    24,    34,     0,    32,    29,    62,    65,
      66,     0,     0,     0,    77,     0,     0,    75,     0,    69,
       0,    81,     0,    67,     0,     0,    83,    64,    33,    27,
      30,     0,    72,     0,    74,     0,    92,    91,    93,     0,
       0,     0,     0,    84,     0,    86,    34,    68,    31,     0,
       0,    78,     0,    70,    80,    85,    82,    71,    73,    79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,   -40,  -115,  -115,   151,   134,  -115,  -115,  -115,
      86,   -24,  -115,  -115,  -115,  -115,  -115,    38,    23,  -110,
     113,  -115,  -115,    -8,  -115,  -115,  -115,  -115,  -115,   136,
    -115,  -115,  -115,  -115,  -115,    80,    36,    69,  -115,    25,
    -115,  -114
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    10,    29,    30,    31,    47,    59,    41,
      42,    11,    44,    45,    60,    93,    94,    95,   117,    96,
      12,    13,    46,    14,    18,    19,    70,    15,    50,    51,
      16,    21,    38,    72,    97,    89,   121,    90,   135,   136,
     103,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     134,   141,    43,    65,    32,   125,   132,    64,   132,   115,
       3,   149,    17,   116,   151,     4,     5,    23,   154,    73,
      92,    66,    92,   133,    76,    27,     6,    32,    32,     7,
     126,     5,     8,     9,   142,    48,   162,    43,    63,   143,
      22,     6,    49,    20,     7,    23,   134,     8,     9,    23,
      24,    25,    61,    27,   144,    25,    26,    27,    24,   145,
       6,   128,    28,     7,    33,   129,     8,     9,     6,    54,
      28,     7,    24,    68,     8,     9,   156,    34,    56,    57,
      69,   157,     6,     5,    28,     7,    55,   140,     8,     9,
     153,    91,    24,     6,    52,    37,     7,    52,    40,     8,
       9,    71,     6,    92,   -26,     7,    17,   -23,     8,     9,
      79,    80,    81,    82,    83,    84,    85,   158,    86,    87,
     161,    52,   163,   165,    69,    88,   169,    69,    58,    69,
      69,    35,    36,    69,   100,   101,   102,   146,   147,   148,
     119,   120,    67,    74,    49,   110,   150,    75,    78,    98,
     104,   112,   139,   122,    99,   114,   124,   155,   127,   113,
     130,   105,   106,   107,   108,   109,   123,   111,   131,   138,
     160,    92,   152,   167,   164,    62,    39,   118,   168,   159,
     137,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77
};

static const yytype_int16 yycheck[] =
{
     110,   115,    26,    16,    12,    15,    15,    47,    15,    15,
       0,   125,    28,    19,   128,     3,    19,    18,   132,    59,
      29,    34,    29,    30,    27,    26,    29,    35,    36,    32,
      40,    19,    35,    36,    33,    16,   150,    61,    46,    38,
      24,    29,    23,    19,    32,    18,   156,    35,    36,    18,
      19,    24,    25,    26,    33,    24,    25,    26,    19,    38,
      29,    15,    31,    32,    17,    19,    35,    36,    29,    30,
      31,    32,    19,    15,    35,    36,    25,    15,    38,    39,
      22,    30,    29,    19,    31,    32,    33,    15,    35,    36,
      15,    27,    19,    29,    22,    19,    32,    22,    19,    35,
      36,    19,    29,    29,    30,    32,    28,    29,    35,    36,
       4,     5,     6,     7,     8,     9,    10,    15,    12,    13,
      15,    22,    15,    15,    22,    19,    15,    22,    37,    22,
      22,    18,    19,    22,    19,    20,    21,    19,    20,    21,
      20,    21,    23,    29,    23,    29,    15,    61,    39,    32,
      38,    19,   114,    20,    32,    25,    19,   134,    20,    30,
      19,    38,    38,    38,    38,    38,    31,    39,    20,    30,
      20,    29,    29,    33,    30,    41,    25,    97,    33,   143,
     111,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    43,     0,     3,    19,    29,    32,    35,    36,
      44,    52,    61,    62,    64,    68,    71,    28,    65,    66,
      19,    72,    24,    18,    19,    24,    25,    26,    31,    45,
      46,    47,    64,    17,    15,    61,    61,    19,    73,    46,
      19,    50,    51,    52,    53,    54,    63,    48,    16,    23,
      69,    70,    22,    82,    30,    33,    38,    39,    37,    49,
      55,    25,    47,    64,    43,    16,    34,    23,    15,    22,
      67,    19,    74,    43,    29,    51,    27,    70,    39,     4,
       5,     6,     7,     8,     9,    10,    12,    13,    19,    76,
      78,    27,    29,    56,    57,    58,    60,    75,    32,    32,
      19,    20,    21,    81,    38,    38,    38,    38,    38,    38,
      29,    39,    19,    30,    25,    15,    19,    59,    76,    20,
      21,    77,    20,    31,    19,    15,    40,    20,    15,    19,
      19,    20,    15,    30,    60,    79,    80,    78,    30,    58,
      15,    82,    33,    38,    33,    38,    19,    20,    21,    82,
      15,    82,    29,    15,    82,    59,    25,    30,    15,    77,
      20,    15,    82,    15,    30,    15,    80,    33,    33,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    47,    48,    47,    49,    47,    50,    50,    51,    51,
      51,    52,    53,    55,    54,    56,    56,    57,    57,    58,
      59,    59,    59,    60,    60,    61,    61,    62,    63,    62,
      65,    64,    66,    67,    64,    64,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    71,    73,    73,    74,
      73,    75,    73,    76,    76,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     2,     1,     3,     1,
       1,     1,     0,     4,     0,     5,     3,     1,     1,     1,
       1,     5,     1,     0,     5,     1,     0,     3,     1,     2,
       2,     3,     1,     3,     0,     1,     1,     2,     0,     4,
       0,     4,     0,     0,     5,     1,     1,     4,     3,     3,
       1,     2,     1,     1,     2,     0,     4,     1,     3,     0,
       4,     0,     6,     1,     3,     1,     1,     3,     4,     3,
       5,     6,     4,     6,     4,     3,     2,     3,     5,     6,
       5,     3,     3,     1,     2,     3,     2,     0,     1,     1,
       1,     3,     3,     3,     2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
        yyerror (_cy, YY_("syntax error: cannot back up")); \
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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, _cy); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void *_cy)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (_cy);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void *_cy)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, _cy);
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
                 int yyrule, void *_cy)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], _cy);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, _cy); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, void *_cy)
{
  YY_USE (yyvaluep);
  YY_USE (_cy);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *_cy)
{
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
      yychar = yylex (_cy);
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
  case 2: /* file: lines MY_EOF  */
                          {_PARSE_DEBUG("file->lines"); YYACCEPT;}
    break;

  case 3: /* lines: lines line  */
                          { _PARSE_DEBUG("lines->lines line"); }
    break;

  case 4: /* lines: %empty  */
                          { _PARSE_DEBUG("lines->"); }
    break;

  case 5: /* line: decltop line1  */
                             { _PARSE_DEBUG("line->decltop line1"); }
    break;

  case 6: /* line: assignment ';'  */
                             { _PARSE_DEBUG("line->assignment ;"); }
    break;

  case 7: /* line1: line2  */
                                 { _PARSE_DEBUG("line1->line2"); }
    break;

  case 8: /* line1: ',' options line2  */
                                 { _PARSE_DEBUG("line1->',' options line2"); }
    break;

  case 9: /* preline: '{'  */
                   { (yyval.intval) = 0; }
    break;

  case 10: /* preline: SETS  */
                   { (yyval.intval) = 1; }
    break;

  case 11: /* line2: ';'  */
                  {
                    _PARSE_DEBUG("line2->';'");
                    if (cgy_terminal(_cy) < 0) _YYERROR("line2");
                    if (ctx_peek_swap2(_cy) < 0) _YYERROR("line2");
                  }
    break;

  case 12: /* $@1: %empty  */
                      {
                      if (ctx_push(_cy, (yyvsp[0].intval)) < 0) _YYERROR("line2");
                  }
    break;

  case 13: /* line2: preline $@1 lines '}'  */
                  {
                    _PARSE_DEBUG("line2->'{' lines '}'");
                    if (ctx_pop(_cy) < 0) _YYERROR("line2");
                    if (ctx_peek_swap2(_cy) < 0) _YYERROR("line2");
                 }
    break;

  case 14: /* $@2: %empty  */
                      {
                    if (cgy_terminal(_cy) < 0) _YYERROR("line2");
                    if (ctx_push(_cy, (yyvsp[0].intval)) < 0) _YYERROR("line2");
                  }
    break;

  case 15: /* line2: ';' preline $@2 lines '}'  */
                  { _PARSE_DEBUG("line2->';' '{' lines '}'");
                    if (ctx_pop(_cy) < 0) _YYERROR("line2");
                    if (ctx_peek_swap2(_cy) < 0) _YYERROR("line2"); }
    break;

  case 16: /* options: options ',' option  */
                                 {_PARSE_DEBUG("options->options , option");}
    break;

  case 17: /* options: option  */
                                 {_PARSE_DEBUG("options->option");}
    break;

  case 18: /* option: callback  */
                                 { _PARSE_DEBUG("option->callback");}
    break;

  case 19: /* option: flag  */
                                 { _PARSE_DEBUG("option->flag");}
    break;

  case 20: /* option: assignment  */
                                 { _PARSE_DEBUG("option->assignment");}
    break;

  case 21: /* assignment: NAME '=' DQ charseq DQ  */
                                 {_PARSE_DEBUG("assignment->\" charseq \"");
                                  cgy_assignment(_cy, (yyvsp[-4].string),(yyvsp[-1].string));free((yyvsp[-4].string)); free((yyvsp[-1].string));}
    break;

  case 22: /* flag: NAME  */
                                 { _PARSE_DEBUG("flag->NAME");
                                   cgy_flag(_cy, (yyvsp[0].string));free((yyvsp[0].string));}
    break;

  case 23: /* $@3: %empty  */
                                 { _PARSE_DEBUG("callback->NAME ( arglist )");
                                   if (cgy_callback(_cy, (yyvsp[0].string)) < 0) _YYERROR("callback");}
    break;

  case 29: /* arg: typecast arg1  */
                            {
                    if ((yyvsp[0].string) && cgy_callback_arg(_cy, (yyvsp[-1].string), (yyvsp[0].string)) < 0) _YYERROR("arg");
                    if ((yyvsp[-1].string) != NULL) free((yyvsp[-1].string));
                    if ((yyvsp[0].string) != NULL) free((yyvsp[0].string));
              }
    break;

  case 30: /* arg1: DQ DQ  */
                    { (yyval.string)=NULL; }
    break;

  case 31: /* arg1: DQ charseq DQ  */
                            { (yyval.string)=(yyvsp[-1].string); }
    break;

  case 32: /* arg1: NAME  */
                    { (yyval.string)=(yyvsp[0].string); }
    break;

  case 33: /* typecast: '(' NAME ')'  */
                           { (yyval.string) = (yyvsp[-1].string); }
    break;

  case 34: /* typecast: %empty  */
              { (yyval.string) = NULL; }
    break;

  case 35: /* decltop: decllist  */
                        { _PARSE_DEBUG("decltop->decllist");}
    break;

  case 36: /* decltop: declcomp  */
                        { _PARSE_DEBUG("decltop->declcomp");}
    break;

  case 37: /* decllist: decltop declcomp  */
                        { _PARSE_DEBUG("decllist->decltop declcomp");}
    break;

  case 38: /* $@4: %empty  */
                          { if (ctx_peek_swap(_cy) < 0) _YYERROR("decllist");}
    break;

  case 39: /* decllist: decltop '|' $@4 declcomp  */
                        { _PARSE_DEBUG("decllist->decltop | declcomp");}
    break;

  case 40: /* $@5: %empty  */
                  { if (ctx_push(_cy, 0) < 0) _YYERROR("declcomp"); }
    break;

  case 41: /* declcomp: '(' $@5 decltop ')'  */
                           { if (ctx_pop(_cy) < 0) _YYERROR("declcomp");
                                     _PARSE_DEBUG("declcomp->(decltop)");}
    break;

  case 42: /* $@6: %empty  */
                  {_CY->cy_optional++; if (ctx_push(_cy, 0) < 0) _YYERROR("declcomp"); }
    break;

  case 43: /* $@7: %empty  */
                            { _CY->cy_optional--; if (ctx_pop_add(_cy) < 0) _YYERROR("declcomp"); }
    break;

  case 44: /* declcomp: '[' $@6 decltop ']' $@7  */
                                                                                                     {
                                     _PARSE_DEBUG("declcomp->[decltop]");}
    break;

  case 45: /* declcomp: decl  */
                                   { _PARSE_DEBUG("declcomp->decl");}
    break;

  case 46: /* decl: cmd  */
                                  { _PARSE_DEBUG("decl->cmd");}
    break;

  case 47: /* decl: cmd PDQ helpstring DQP  */
                                     { _PARSE_DEBUG("decl->cmd (\" helpstring \")");}
    break;

  case 48: /* decl: cmd PDQ DQP  */
                                  { _PARSE_DEBUG("decl->cmd (\"\")");}
    break;

  case 49: /* helpstring: helpstring '\n' helpstring1  */
              {
                  _PARSE_DEBUG("helpstring -> helpstring helpstring1");
                  if (cgy_helpstring(_cy, 1, (yyvsp[0].string)) < 0) _YYERROR("helpstring");
              }
    break;

  case 50: /* helpstring: helpstring1  */
               {
                   _PARSE_DEBUG("helpstring -> helpstring1");
                   if (cgy_helpstring(_cy, 0, (yyvsp[0].string)) < 0) _YYERROR("helpstring");
               }
    break;

  case 51: /* helpstring1: helpstring1 HELPSTR  */
              {
                  size_t len = strlen((yyvsp[-1].string));
                  _PARSE_DEBUG("helpstring1 -> helpstring1 HELPSTR");
                  if (((yyval.string) = realloc((yyvsp[-1].string), len+strlen((yyvsp[0].string)) +1)) == NULL) _YYERROR("cmd");
                  sprintf((yyval.string)+len, "%s", (yyvsp[0].string));
              }
    break;

  case 52: /* helpstring1: HELPSTR  */
               {
                  _PARSE_DEBUG("helpstring1 -> HELPSTR");
                   if (((yyval.string)=strdup((yyvsp[0].string))) == NULL) _YYERROR("helpstring1");
               }
    break;

  case 53: /* cmd: NAME  */
                             { _PARSE_DEBUG("cmd->NAME");
                               if (cgy_cmd(_cy, (yyvsp[0].string)) < 0) _YYERROR("cmd"); free((yyvsp[0].string)); }
    break;

  case 54: /* cmd: '@' NAME  */
                             { _PARSE_DEBUG("cmd->@NAME");
                               if (cgy_reference(_cy, (yyvsp[0].string), NULL) < 0) _YYERROR("cmd"); free((yyvsp[0].string)); }
    break;

  case 55: /* $@8: %empty  */
                             { if ((_CY->cy_var = cgy_var_create(_CY)) == NULL) _YYERROR("cmd"); }
    break;

  case 56: /* cmd: '<' $@8 variable '>'  */
                             { if (cgy_var_post(_cy) < 0) _YYERROR("cmd"); }
    break;

  case 57: /* variable: NAME  */
                            { if (cgy_var_name_type(_cy, (yyvsp[0].string), (yyvsp[0].string))<0) _YYERROR("variable"); }
    break;

  case 58: /* variable: NAME ':' NAME  */
                            { if (cgy_var_name_type(_cy, (yyvsp[-2].string), (yyvsp[0].string))<0) _YYERROR("variable"); free((yyvsp[0].string)); }
    break;

  case 59: /* $@9: %empty  */
                            { if (cgy_var_name_type(_cy, (yyvsp[-1].string), (yyvsp[-1].string)) < 0) _YYERROR("variable"); }
    break;

  case 61: /* $@10: %empty  */
                                { if (cgy_var_name_type(_cy, (yyvsp[-3].string), (yyvsp[-1].string)) < 0) _YYERROR("variable"); free((yyvsp[-1].string)); }
    break;

  case 65: /* numdec: NUMBER  */
                     { (yyval.string) = (yyvsp[0].string); }
    break;

  case 67: /* keypair: NAME '(' ')'  */
                           { expand_fn(_cy, (yyvsp[-2].string)); }
    break;

  case 68: /* keypair: NAME '(' exparglist ')'  */
                                      { expand_fn(_cy, (yyvsp[-3].string)); }
    break;

  case 69: /* keypair: V_SHOW ':' NAME  */
                              {
                 _CY->cy_var->co_show = (yyvsp[0].string);
              }
    break;

  case 70: /* keypair: V_SHOW ':' DQ charseq DQ  */
                                       {
                 _CY->cy_var->co_show = (yyvsp[-1].string);
              }
    break;

  case 71: /* keypair: V_RANGE '[' numdec ':' numdec ']'  */
                                                {
                if (cg_range(_cy, (yyvsp[-3].string), (yyvsp[-1].string)) < 0) _YYERROR("keypair"); free((yyvsp[-3].string)); free((yyvsp[-1].string));
              }
    break;

  case 72: /* keypair: V_RANGE '[' numdec ']'  */
                                     {
                if (cg_range(_cy, NULL, (yyvsp[-1].string)) < 0) _YYERROR("keypair"); free((yyvsp[-1].string));
              }
    break;

  case 73: /* keypair: V_LENGTH '[' NUMBER ':' NUMBER ']'  */
                                                 {
                if (cg_length(_cy, (yyvsp[-3].string), (yyvsp[-1].string)) < 0) _YYERROR("keypair"); free((yyvsp[-3].string)); free((yyvsp[-1].string));
              }
    break;

  case 74: /* keypair: V_LENGTH '[' NUMBER ']'  */
                                      {
                if (cg_length(_cy, NULL, (yyvsp[-1].string)) < 0) _YYERROR("keypair"); free((yyvsp[-1].string));
              }
    break;

  case 75: /* keypair: V_FRACTION_DIGITS ':' NUMBER  */
                                           {
                if (cg_dec64_n(_cy, (yyvsp[0].string)) < 0) _YYERROR("keypair"); free((yyvsp[0].string));
              }
    break;

  case 76: /* keypair: V_CHOICE choices  */
                               { _CY->cy_var->co_choice = (yyvsp[0].string); }
    break;

  case 77: /* keypair: V_KEYWORD ':' NAME  */
                                 {
                _CY->cy_var->co_keyword = (yyvsp[0].string);
                _CY->cy_var->co_vtype=CGV_STRING;
              }
    break;

  case 78: /* keypair: V_REGEXP ':' DQ charseq DQ  */
                                          { if (cg_regexp(_cy, (yyvsp[-1].string), 0) < 0) _YYERROR("keypair"); free((yyvsp[-1].string)); }
    break;

  case 79: /* keypair: V_REGEXP ':' '!' DQ charseq DQ  */
                                               { if (cg_regexp(_cy, (yyvsp[-1].string), 1) < 0) _YYERROR("keypair"); free((yyvsp[-1].string));}
    break;

  case 80: /* keypair: V_TRANSLATE ':' NAME '(' ')'  */
                                           { cg_translate(_cy, (yyvsp[-2].string)); }
    break;

  case 81: /* keypair: V_PREFERENCE ':' NUMBER  */
                                      { cg_preference(_cy, (yyvsp[0].string)); free((yyvsp[0].string)); }
    break;

  case 85: /* exparg: DQ charseq DQ  */
                           { expand_arg(_cy, (yyvsp[-1].string)); free((yyvsp[-1].string)); }
    break;

  case 86: /* exparg: typecast arg1  */
                           {
                    if ((yyvsp[0].string) && cgy_callback_arg(_cy, (yyvsp[-1].string), (yyvsp[0].string)) < 0) _YYERROR("exparg");
                    if ((yyvsp[-1].string)) free((yyvsp[-1].string));
                    if ((yyvsp[0].string)) free((yyvsp[0].string));
              }
    break;

  case 87: /* choices: %empty  */
              { (yyval.string) = NULL;}
    break;

  case 88: /* choices: NUMBER  */
                     { (yyval.string) = (yyvsp[0].string);}
    break;

  case 89: /* choices: NAME  */
                   { (yyval.string) = (yyvsp[0].string);}
    break;

  case 90: /* choices: DECIMAL  */
                      { (yyval.string) = (yyvsp[0].string);}
    break;

  case 91: /* choices: choices '|' NUMBER  */
                                  { (yyval.string) = cgy_var_choice_append(_cy, (yyvsp[-2].string), (yyvsp[0].string)); free((yyvsp[0].string));}
    break;

  case 92: /* choices: choices '|' NAME  */
                                  { (yyval.string) = cgy_var_choice_append(_cy, (yyvsp[-2].string), (yyvsp[0].string)); free((yyvsp[0].string));}
    break;

  case 93: /* choices: choices '|' DECIMAL  */
                                  { (yyval.string) = cgy_var_choice_append(_cy, (yyvsp[-2].string), (yyvsp[0].string)); free((yyvsp[0].string));}
    break;

  case 94: /* charseq: charseq CHARS  */
              {
                  int len = strlen((yyvsp[-1].string));
                  _PARSE_DEBUG("charseq->charseq CHARS");
                  (yyval.string) = realloc((yyvsp[-1].string), len+strlen((yyvsp[0].string)) +1);
                  sprintf((yyval.string)+len, "%s", (yyvsp[0].string));
                  free((yyvsp[0].string));
                 }
    break;

  case 95: /* charseq: CHARS  */
                   {_PARSE_DEBUG("charseq->CHARS");
                    (yyval.string)=(yyvsp[0].string);}
    break;



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
      yyerror (_cy, YY_("syntax error"));
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
                      yytoken, &yylval, _cy);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, _cy);
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (_cy, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, _cy);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, _cy);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

