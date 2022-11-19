// pyforall - Universal Python Bindings
// Copyright (C) 2022 Kristoffer A. Wright

/**
 * globalerr.h
 * 
 * Defines global error handling operations.
*/

#include "value.h"

/*
================================================================================
Raised exception operations
================================================================================
*/

PY_Value PY_get_raised();

void PY_set_raised(
    PY_Value value);