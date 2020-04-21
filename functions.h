/**************************
 *Kenny Nguyen                    *
 *CPSC 2310 Spring 2020.          *
 *Due Date:   2/15/20             *
 *Instructor:  Dr. Yvon Feaster   *
 *Lab Time:    5:30PM             *
**************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>




/* Parameters: int argc = number of arguments passed in at runtime
  Return: void
  This function checks the number of arguments passed in by the user
  and closes the program with an error message if not correct

*/
void checkNumArgs(int argc);


/* Parameters: x - first number, y - second number
  Return: True if both numbers are within bounds, False otherwise
  This function checks if the user put in valid integers for the paramters

*/
bool withinBounds(unsigned int *x, unsigned int *y);


/* Parameters: x - Number to convert to binary
  This function prints a binary representation of X

*/
void decimaltobinary(unsigned int x);



/* Parameters: x - 8 bit Unsigned integer pointer, y - 8 bit
  Unsigned integer pointer
  Return: void
  This function swaps x and y without a temporary variable, prints each step
*/
void inplace_swap(unsigned int *x, unsigned int *y);

#endif
