#include "../src/ceptr.h"

void testParseIf() {
    _w_sys_new(INTEGER_NOUN,"AGE");
    _w_sys_new(BOOLEAN_NOUN,"FINISHED");
    T *t = _t_parse("(FLOW:IF (FINISHED:TRUE) (AGE:1)(INTEGER:2))");
    spec_is_equal(_t_children(t),3);
    spec_is_equal(_t_noun(t),FLOW_NOUN);
    spec_is_equal(*(int *)_t_surface(t),F_IF);
    T *t1 = _t_get_child(t,1);
    spec_is_equal(_t_noun(t1),BOOLEAN_NOUN);
    spec_is_equal(*(int *)_t_surface(t1),TRUE_VALUE);
    T *t2 = _t_get_child(t,2);
    spec_is_equal(_t_noun(t2),INTEGER_NOUN);
    spec_is_equal(*(int *)_t_surface(t2),1);
    T *t3 = _t_get_child(t,3);
    spec_is_equal(_t_noun(t3),INTEGER_NOUN);
    spec_is_equal(*(int *)_t_surface(t3),2);
    _t_free(t);
}

void testParseCstring() {
    T *t = _t_parse("(CSTRING:\"test \\\"string\")");
    spec_is_equal(_t_noun(t),CSTRING_NOUN);
    spec_is_str_equal((char *)_t_surface(t),"test \"string");
    _t_free(t);

    t = _t_parse("(CSTRING:\"\")");
    spec_is_equal(_t_noun(t),CSTRING_NOUN);
    spec_is_str_equal((char *)_t_surface(t),"");
    _t_free(t);
}

void testParse() {
    sys_defs_init();
    testParseIf();
    testParseCstring();
    sys_defs_free();
}
