/**************************
 *Kenny Nguyen                    *
 *CPSC 2310 Spring 2020.          *
 *Due Date:   2/15/20             *
 *Instructor:  Dr. Yvon Feaster   *
 *Lab Time:    5:30PM             *
**************************/




#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "functions.h"



int main(int argc, char *argv[]) {


  //Checks if the user has the appropriate number of arguments
  checkNumArgs(argc);

  unsigned int a = atoi(argv[1]);
  unsigned int b = atoi(argv[2]);


  //Checks if the two user input numbers are within the bounds of uint8_t
  while(!withinBounds(&a, &b)) {}

  inplace_swap(&a, &b);

  printf("   |  Binary   |   Hexadecimal  |    Decimal  |\n");
  printf("-----------------------------------------------\n");
  printf("a: | ");
  decimaltobinary(a);
  printf("  |       0x%X     |      %u    |\n", a, a);
  printf("-----------------------------------------------\n");
  printf("b: | ");
  decimaltobinary(b);
  printf("  |       0x%X     |      %u    |\n", b, b);
  printf("-----------------------------------------------\n");







  return 0;
}
