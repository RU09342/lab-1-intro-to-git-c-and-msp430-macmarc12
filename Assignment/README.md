Lab 1: Introduction to C, Git, and the MSP430.

Math Library:
The math library for the MSP430 series is equivocal.

Dependencies:
The library and functions are dependent on the header file (.h) 

Usage:
Once both the header file and source file are included in the same project, you need to call the "Math" function to perform any operations. Math(x, y, operator)

Valid Inputs:
x, y
16-bit integers

operator
Any of (+,-,*,/,%) as characters. If anything that is not these is inserted, Math() will return Null.

Functions:
Add ('+')
x will be added to y and sum will be returned.
Example: Math(4, 2, +)
Returns 6

Subtract ('-')
x will be subtracted from y and answer will be returned.
Example: Math(4, 2, -)
Returns 2

Multiply ('*')
x will be multiplied by y and product will be returned.
Example: Math(4, 2, *)
Returns 8

Divide ('/')
x will be divided by y and quotient will be returned.
Example: Math(4 ,2, /)
Returns 2

Known Errors:
The return value cannot be signed, so it will be unclear whether the answer is positive or negative.