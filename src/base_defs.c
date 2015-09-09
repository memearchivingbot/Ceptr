/**
 * @ingroup def
 *
 * @file base_defs.c
 * @brief auto-generated system definitions
 *
 * NOTE: this file is auto-generated by base_defs.pl
 *
 * @copyright Copyright (C) 2013-2015, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 */

#include "base_defs.h"
#include "sys_defs.h"
#include "def.h"

void base_defs() {
  sT(SYS_CONTEXT,BIT,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,INTEGER,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,FLOAT,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,CHAR,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,CSTRING,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SYMBOL,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,ENUM,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,TREE_PATH,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,XADDR,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,LIST,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SURFACE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,TREE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,RECEPTOR,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,PROCESS,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,STRUCTURE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SCAPE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SEMTREX,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,STREAM,1,NULL_SYMBOL);
  sY(SYS_CONTEXT,DEFINITIONS,LIST);
  sY(SYS_CONTEXT,STRUCTURES,LIST);
  sY(SYS_CONTEXT,STRUCTURE_DEFINITION,TREE);
  sY(SYS_CONTEXT,STRUCTURE_LABEL,CSTRING);
  sY(SYS_CONTEXT,STRUCTURE_PARTS,LIST);
  sY(SYS_CONTEXT,STRUCTURE_PART,SYMBOL);
  sY(SYS_CONTEXT,SYMBOLS,LIST);
  sY(SYS_CONTEXT,SYMBOL_DECLARATION,TREE);
  sY(SYS_CONTEXT,SYMBOL_STRUCTURE,STRUCTURE);
  sY(SYS_CONTEXT,SYMBOL_LABEL,CSTRING);
  sY(SYS_CONTEXT,BOOLEAN,BIT);
  sY(SYS_CONTEXT,SEMTREX_MATCH_PATH,TREE_PATH);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_LITERAL,TREE);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_LITERAL_NOT,TREE);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_SET,LIST);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,SEMTREX_SEQUENCE,LIST);
  sY(SYS_CONTEXT,SEMTREX_OR,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_NOT,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_ANY,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_ZERO_OR_MORE,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_ONE_OR_MORE,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_ZERO_OR_ONE,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_VALUE_LITERAL,TREE);
  sY(SYS_CONTEXT,SEMTREX_VALUE_LITERAL_NOT,TREE);
  sY(SYS_CONTEXT,SEMTREX_VALUE_SET,LIST);
  sY(SYS_CONTEXT,SEMTREX_GROUP,SYMBOL);
  sY(SYS_CONTEXT,SEMTREX_DESCEND,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_WALK,SEMTREX);
  sY(SYS_CONTEXT,SEMTREX_MATCH,INTEGER);
  sY(SYS_CONTEXT,SEMTREX_MATCH_CURSOR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_MATCH_RESULTS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_MATCH_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,SEMTREX_MATCH_SIBLINGS_COUNT,INTEGER);
  sY(SYS_CONTEXT,ASCII_CHAR,CHAR);
  sY(SYS_CONTEXT,ASCII_CHARS,LIST);
  sY(SYS_CONTEXT,RECEPTOR_XADDR,XADDR);
  sY(SYS_CONTEXT,FLUX,LIST);
  sY(SYS_CONTEXT,SCAPE_SPEC,TREE);
  sY(SYS_CONTEXT,ASPECTS,LIST);
  sY(SYS_CONTEXT,ASPECT_DEF,TREE);
  sY(SYS_CONTEXT,ASPECT_TYPE,BIT);
  sY(SYS_CONTEXT,CARRIER,INTEGER);
  sY(SYS_CONTEXT,ASPECT,INTEGER);
  sY(SYS_CONTEXT,SIGNALS,LIST);
  sY(SYS_CONTEXT,SIGNAL,TREE);
  sY(SYS_CONTEXT,ENVELOPE,LIST);
  sY(SYS_CONTEXT,BODY,TREE);
  sY(SYS_CONTEXT,LISTENERS,LIST);
  sY(SYS_CONTEXT,LISTENER,SYMBOL);
  sY(SYS_CONTEXT,EXPECTATION,SEMTREX);
  sY(SYS_CONTEXT,ACTION,PROCESS);
  sY(SYS_CONTEXT,INTERPOLATE_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,PROCESSES,LIST);
  sY(SYS_CONTEXT,PROCESS_CODING,TREE);
  sY(SYS_CONTEXT,PROCESS_NAME,CSTRING);
  sY(SYS_CONTEXT,PROCESS_INTENTION,CSTRING);
  sY(SYS_CONTEXT,INPUT,LIST);
  sY(SYS_CONTEXT,INPUT_SIGNATURE,TREE);
  sY(SYS_CONTEXT,INPUT_LABEL,CSTRING);
  sY(SYS_CONTEXT,SIGNATURE_STRUCTURE,STRUCTURE);
  sY(SYS_CONTEXT,OUTPUT_SIGNATURE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,RUN_TREE,TREE);
  sY(SYS_CONTEXT,PARAM_REF,TREE_PATH);
  sY(SYS_CONTEXT,PARAMS,LIST);
  sY(SYS_CONTEXT,RESULT_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,REDUCTION_ERROR_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,PROTOCOLS,LIST);
  sY(SYS_CONTEXT,SEQUENCES,LIST);
  sY(SYS_CONTEXT,STEP_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,STEPS,LIST);
  sT(SYS_CONTEXT,SEQUENCE,1,STEP_SYMBOL);
  sT(SYS_CONTEXT,PROTOCOL_STEP,3,EXPECTATION,PARAMS,ACTION);
  sY(SYS_CONTEXT,INTERACTIONS,LIST);
  sY(SYS_CONTEXT,INTERACTION,LIST);
  sY(SYS_CONTEXT,STEP,CSTRING);
  sY(SYS_CONTEXT,RESPONSE_STEPS,LIST);
  sT(SYS_CONTEXT,PROTOCOL,2,STEPS,SEQUENCES);
  sY(SYS_CONTEXT,SCAPES,LIST);
  sY(SYS_CONTEXT,VM_HOST_RECEPTOR,RECEPTOR);
  sY(SYS_CONTEXT,CLOCK_RECEPTOR,RECEPTOR);
  sY(SYS_CONTEXT,COMPOSITORY,RECEPTOR);
  sY(SYS_CONTEXT,MANIFEST,TREE);
  sY(SYS_CONTEXT,MANIFEST_PAIR,LIST);
  sY(SYS_CONTEXT,MANIFEST_LABEL,CSTRING);
  sY(SYS_CONTEXT,MANIFEST_SPEC,SYMBOL);
  sY(SYS_CONTEXT,RECEPTOR_PACKAGE,TREE);
  sY(SYS_CONTEXT,RECEPTOR_IDENTIFIER,INTEGER);
  sY(SYS_CONTEXT,INSTALLED_RECEPTOR,TREE);
  sY(SYS_CONTEXT,ACTIVE_RECEPTORS,LIST);
  sY(SYS_CONTEXT,PENDING_SIGNALS,LIST);
  sY(SYS_CONTEXT,BINDINGS,TREE);
  sY(SYS_CONTEXT,BINDING_PAIR,LIST);
  sY(SYS_CONTEXT,YEAR,INTEGER);
  sY(SYS_CONTEXT,MONTH,INTEGER);
  sY(SYS_CONTEXT,DAY,INTEGER);
  sY(SYS_CONTEXT,HOUR,INTEGER);
  sY(SYS_CONTEXT,MINUTE,INTEGER);
  sY(SYS_CONTEXT,SECOND,INTEGER);
  sT(SYS_CONTEXT,DATE,3,YEAR,MONTH,DAY);
  sT(SYS_CONTEXT,TIME,3,HOUR,MINUTE,SECOND);
  sY(SYS_CONTEXT,TODAY,DATE);
  sY(SYS_CONTEXT,NOW,TIME);
  sT(SYS_CONTEXT,TIMESTAMP,2,TODAY,NOW);
  sY(SYS_CONTEXT,TICK,TIMESTAMP);
  sY(SYS_CONTEXT,ERROR_LOCATION,TREE_PATH);
  sT(SYS_CONTEXT,REDUCTION_ERROR,1,ERROR_LOCATION);
  sY(SYS_CONTEXT,ZERO_DIVIDE_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,TOO_FEW_PARAMS_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,TOO_MANY_PARAMS_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,SIGNATURE_MISMATCH_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,NOT_A_PROCESS_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,NOT_IN_SIGNAL_CONTEXT_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,INCOMPATIBLE_TYPE_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,UNIX_ERRNO_ERR,REDUCTION_ERROR);
  sP(SYS_CONTEXT,NOOP,"no-op",0,0);
  sP(SYS_CONTEXT,IF,"if",0,0);
  sP(SYS_CONTEXT,ADD_INT,"addition",0,0);
  sP(SYS_CONTEXT,SUB_INT,"subtract",0,0);
  sP(SYS_CONTEXT,MULT_INT,"multiply",0,0);
  sP(SYS_CONTEXT,DIV_INT,"divide",0,0);
  sP(SYS_CONTEXT,MOD_INT,"modulo",0,0);
  sP(SYS_CONTEXT,EQ_INT,"test equality",0,0);
  sP(SYS_CONTEXT,LT_INT,"test less than",0,0);
  sP(SYS_CONTEXT,GT_INT,"test greater than",0,0);
  sP(SYS_CONTEXT,LTE_INT,"test less than or equal",0,0);
  sP(SYS_CONTEXT,GTE_INT,"test greater than or equal",0,0);
  sP(SYS_CONTEXT,CONCAT_STR,"concatinate strings",0,0);
  sP(SYS_CONTEXT,RESPOND,"respond to signal",0,0);
  sP(SYS_CONTEXT,SEND,"send a signal",0,0);
  sP(SYS_CONTEXT,EXPECT_ACT,"block run tree until expectation met and then act",0,0);
  sP(SYS_CONTEXT,QUOTE,"quote a process so that it can be passed as a value",0,0);
  sP(SYS_CONTEXT,INTERPOLATE_FROM_MATCH,"interploate match result in place",0,0);
  sP(SYS_CONTEXT,RAISE,"raise reduction error",0,0);
  sP(SYS_CONTEXT,STREAM_READ,"read from a stream",0,0);
  sP(SYS_CONTEXT,STREAM_WRITE,"write to a stream",0,0);
  sP(SYS_CONTEXT,STREAM_AVAILABLE,"check a stream for data availability",0,0);
  sP(SYS_CONTEXT,REPLICATE,"replicate process",0,0);
  sY(SYS_CONTEXT,STX_TOKENS,LIST);
  sY(SYS_CONTEXT,STX_SL,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_OP,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_CP,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_SET,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_OS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_CS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_LABEL,CSTRING);
  sY(SYS_CONTEXT,STX_OG,CSTRING);
  sY(SYS_CONTEXT,STX_CG,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_EQ,CSTRING);
  sY(SYS_CONTEXT,STX_NEQ,CSTRING);
  sY(SYS_CONTEXT,STX_WALK,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_STAR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_PLUS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_Q,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_OR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_COMMA,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_EXCEPT,CSTRING);
  sY(SYS_CONTEXT,STX_NOT,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_VAL_S,CSTRING);
  sY(SYS_CONTEXT,STX_VAL_C,CHAR);
  sY(SYS_CONTEXT,STX_VAL_I,INTEGER);
  sY(SYS_CONTEXT,STX_VAL_F,FLOAT);
  sY(SYS_CONTEXT,STX_SIBS,LIST);
  sY(SYS_CONTEXT,STX_CHILD,TREE);
  sY(SYS_CONTEXT,STX_POSTFIX,TREE);
  sY(SYS_CONTEXT,TREE_DELTA_PATH,TREE_PATH);
  sY(SYS_CONTEXT,TREE_DELTA_VALUE,TREE);
  sY(SYS_CONTEXT,TREE_DELTA_COUNT,INTEGER);
  sT(SYS_CONTEXT,TREE_DELTA,3,TREE_DELTA_PATH,TREE_DELTA_VALUE,TREE_DELTA_COUNT);
  sY(SYS_CONTEXT,TREE_DELTA_ADD,TREE_DELTA);
  sY(SYS_CONTEXT,TREE_DELTA_REPLACE,TREE_DELTA);
  sY(LOCAL_CONTEXT,LINE,CSTRING);
  sY(TEST_CONTEXT,TEST_INT_SYMBOL,INTEGER);
  sY(TEST_CONTEXT,TEST_INT_SYMBOL2,INTEGER);
  sY(TEST_CONTEXT,TEST_FLOAT_SYMBOL,FLOAT);
  sY(TEST_CONTEXT,TEST_STR_SYMBOL,CSTRING);
  sY(TEST_CONTEXT,TEST_TREE_SYMBOL,TREE);
  sY(TEST_CONTEXT,TEST_TREE_SYMBOL2,TREE);
  sY(TEST_CONTEXT,TEST_STREAM_SYMBOL,STREAM);
  sY(TEST_CONTEXT,TEST_NAME_SYMBOL,CSTRING);
  sY(TEST_CONTEXT,TEST_RECEPTOR_SYMBOL,RECEPTOR);
  sY(TEST_CONTEXT,TEST_ALPHABETIZE_SCAPE_SYMBOL,SCAPE);
}
