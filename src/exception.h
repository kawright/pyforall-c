// pyforall - Universal Python Bindings
// Copyright (C) 2022 Kristoffer A. Wright

/**
 * exception.h
 * 
 * Defines an interface for Python exceptions.
*/

#include "rawtype.h"

/*
================================================================================
Constructor operations
================================================================================
*/

PY_Value PY_Exception_init(
    PY_Value message);

