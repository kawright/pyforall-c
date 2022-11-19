// pyforall - Universal Python Bindings
// Copyright (C) 2022 Kristoffer A. Wright

/**
 * PY_str.h
 * 
 * Defines methods for `str` instances.
*/

#include "PY_value.h"

PY_Value PY_str_capitalize(
    PY_Value self);

PY_Value PY_str_casefold(
    PY_Value self);

PY_Value PY_str_center(
    PY_Value self, 
    PY_Value width,
    PY_Value fillchar);

PY_Value PY_str_count(
    PY_Value instance, 
    PY_Value sub, 
    PY_Value start, 
    PY_Value end);

PY_Value PY_str_encode(
    PY_Value self, 
    PY_Value encoding, 
    PY_Value strict);

PY_Value PY_str_endswith(
    PY_Value self, 
    PY_Value start, 
    PY_Value end);

PY_Value PY_str_expandtabs(
    PY_Value self, 
    PY_Value tabsize);

PY_Value PY_str_find(
    PY_Value self, 
    PY_Value sub, 
    PY_Value start, 
    PY_Value end);

PY_Value PY_str_format(
    PY_Value self, 
    PY_Value args, 
    PY_Value kwargs);

PY_Value PY_str_format_map(
    PY_Value self, 
    PY_Value mapping);

PY_Value PY_str_index(
    PY_Value self, 
    PY_Value start, 
    PY_Value end);

PY_Value PY_str_isalnum(
    PY_Value self);

PY_Value PY_str_isalpha(
    PY_Value self);

PY_Value PY_str_isascii(
    PY_Value self);

PY_Value PY_str_isdecimal(
    PY_Value self);

PY_Value PY_str_isdigit(
    PY_Value self);

PY_Value PY_str_isidentifier(
    PY_Value self);

PY_Value PY_str_islower(
    PY_Value self);

PY_Value PY_str_isnumeric(
    PY_Value self);

PY_Value PY_str_isprintable(
    PY_Value self);

PY_Value PY_str_isspace(
    PY_Value self);

PY_Value PY_str_istitle(
    PY_Value self);

PY_Value PY_str_isupper(
    PY_Value self);

PY_Value PY_str_join(
    PY_Value self);

PY_Value PY_str_ljust(
    PY_Value self);

PY_Value PY_str_rjust(
    PY_Value self);

PY_Value PY_str_lower(
    PY_Value self);

PY_Value PY_str_lstrip(
    PY_Value self,
    PY_Value chars);

PY_Value PY_str_maketrans(
    PY_Value x,
    PY_Value y,
    PY_Value z);

PY_Value PY_str_partition(
    PY_Value self,
    PY_Value sep);

PY_Value PY_str_removeprefix(
    PY_Value self,
    PY_Value prefix);

PY_Value PY_str_removesuffix(
    PY_Value self,
    PY_Value suffix);

PY_Value PY_str_replace(
    PY_Value self,
    PY_Value old,
    PY_Value _new,
    PY_Value count);

PY_Value PY_str_rfind(
    PY_Value self,
    PY_Value sub,
    PY_Value start,
    PY_Value end);

PY_Value PY_str_rindex(
    PY_Value self,
    PY_Value sub,
    PY_Value start,
    PY_Value end);

PY_Value PY_str_rjust(
    PY_Value self,
    PY_Value width,
    PY_Value fillchar);

PY_Value PY_str_rsplit(
    PY_Value self,
    PY_Value sep,
    PY_Value maxsplit);

PY_Value PY_str_rstrip(
    PY_Value self,
    PY_Value chars);

PY_Value PY_str_split(
    PY_Value self,
    PY_Value sep,
    PY_Value maxsplit);

PY_Value PY_str_splitlines(
    PY_Value self,
    PY_Value keepends);

PY_Value PY_str_startswith(
    PY_Value self,
    PY_Value prefix,
    PY_Value start,
    PY_Value end);

PY_Value PY_str_strip(
    PY_Value self,
    PY_Value strip);

PY_Value PY_str_swapcase(
    PY_Value self);

PY_Value PY_str_title(
    PY_Value self);

PY_Value PY_str_translate(
    PY_Value self,
    PY_Value table);

PY_Value PY_str_upper(
    PY_Value self);

PY_Value PY_str_zfill(
    PY_Value self,
    PY_Value width);