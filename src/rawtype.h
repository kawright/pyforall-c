// pyforall - Universal Python Bindings
// Copyright (C) 2022 Kristoffer A. Wright

/**
 * rawtype.h
 * 
 * Defines an interface between C types and Python types.
*/

#include "value.h"


/*
================================================================================
Load operations
================================================================================
*/

PY_Value PY_load_int_from_short(
    short value);

PY_Value PY_load_int_from_int(
    int value);

PY_Value PY_load_int_from_long(
    long value);

PY_Value PY_load_float_from_float(
    float value);

PY_Value PY_load_float_from_double(
    double value);

PY_Value PY_load_float_from_long_double(
    long double value); 

PY_Value PY_load_str_from_chars(
    char* value);

PY_Value PY_load_bytes_from_chars(
    char* value);

PY_Value PY_load_None();

PY_Value PY_load_True();

PY_Value PY_load_False();

/*
================================================================================
Dump operations
================================================================================
*/

short PY_dump_short_from_int(
    PY_Value value);

int PY_dump_int_from_int(
    PY_Value value);

long PY_dump_long_from_int(
    PY_Value value);

float PY_dump_float_from_float(
    PY_Value value);

double PY_dump_double_from_float(
    PY_Value value);

long double PY_dump_long_double_from_float(
    PY_Value value);

char* PY_dump_chars_from_str(
    PY_Value value);

char* PY_dump_chars_from_bytes(
    PY_Value value);

/*
================================================================================
Boolean tests
================================================================================
*/

int PY_value_is_true(
    PY_Value value);

int PY_value_is_truthy(
    PY_Value value);

int PY_value_is_false(
    PY_Value value);

int PY_value_is_falsy(
    PY_Value value);

/*
================================================================================
Delete operations
================================================================================
*/

void PY_delete(
    PY_Value value);
