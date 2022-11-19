// pyforall - Universal Python Bindings
// Copyright (C) 2022 Kristoffer A. Wright

/**
 * builtin.h
 * 
 * Defines built-in functions.
*/

#include "value.h"

PY_Value PY_builtin_abs(
    PY_Value x);

PY_Value PY_builtin_aiter(
    PY_Value async_iterable);

PY_Value PY_builtin_any(
    PY_Value iterable);

PY_Value PY_builtin_ascii(
    PY_Value object);

PY_Value PY_builtin_bin(
    PY_Value x);

PY_Value PY_builtin_bool(
    PY_Value x);

PY_Value PY_builtin_bytearray(
    PY_Value source,
    PY_Value encoding,
    PY_Value errors);

PY_Value PY_builtin_bytes(
    PY_Value source,
    PY_Value encoding,
    PY_Value errors);

PY_Value PY_builtin_callable(
    PY_Value object);

PY_Value PY_builtin_classmethod(
    PY_Value _class,
    PY_Value method);

PY_Value PY_builtin_compile(
    PY_Value source,
    PY_Value filename,
    PY_Value mode,
    PY_Value flags,
    PY_Value dont_inherit,
    PY_Value optimize);

PY_Value PY_builtin_complex(
    PY_Value real,
    PY_Value imag);

PY_Value PY_builtin_complex_from_str(
    PY_Value string);

PY_Value PY_builtin_delattr(
    PY_Value object,
    PY_Value name);

// TODO Complete builtin.h