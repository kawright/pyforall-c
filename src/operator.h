// pyforall - Universal Python Bindings
// Copyright (C) 2022 Kristoffer A. Wright

/**
 * operator.h
 * 
 * Functions for Python operators
*/

#include "value.h"

/*
================================================================================
Arithmetic
================================================================================
*/

PY_Value PY_op_plus(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_dash(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_star(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_double_star(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_slash(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_double_slash(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_percent(
    PY_Value left, 
    PY_Value right);

/*
================================================================================
Assignment
================================================================================
*/

PY_Value PY_op_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_plus_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_dash_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_star_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_slash_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_percent_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_double_slash_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_double_star_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_ampersand_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_pipe_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_caret_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_double_right_angle(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_double_left_angle(
    PY_Value left, 
    PY_Value right);

/*
================================================================================
Comparison
================================================================================
*/

PY_Value PY_op_equal_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_equal_bang_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_right_angle(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_right_angle_equal(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_left_angle_equal(
    PY_Value left, 
    PY_Value right);


/*
================================================================================
Logic
================================================================================
*/

PY_Value PY_op_and(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_or(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_not(
    PY_Value value);

/*
================================================================================
Identity
================================================================================
*/

PY_Value PY_op_is(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_is_not(
    PY_Value left, 
    PY_Value right);

/*
================================================================================
Membership
================================================================================
*/

PY_Value PY_op_in(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_not_in(
    PY_Value left, 
    PY_Value right);

/*
================================================================================
Bitwise
================================================================================
*/

PY_Value PY_op_ampersand(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_pipe(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_caret(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_tilde(
    PY_Value value);

PY_Value PY_op_double_left_angle(
    PY_Value value);

PY_Value PY_op_double_right_angle(
    PY_Value left, 
    PY_Value right);

PY_Value PY_op_double_left_angle(
    PY_Value left, 
    PY_Value right);