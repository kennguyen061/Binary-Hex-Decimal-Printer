/**************************
 *Kenny Nguyen                    *
 *CPSC 2310 Spring 2020.          *
 *Due Date:   2/15/20             *
 *Instructor:  Dr. Yvon Feaster   *
 *Lab Time:    5:30PM             *
**************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


void checkNumArgs(int argc) {

  //If there are less than or more than 3 arguments entered
  if(argc != 3) {
    //Prints error message to user
    printf("Incorrect number of parameters, please try again.\n");
    //Exits the program
    exit(0);
  }

}

bool withinBounds(unsigned int *x, unsigned int *y) {

  //Returns true if both integers are in the 0-255 range
  if((*x >= 0 && *x <= 255) && (*y >= 0 && *y <= 255)) {
    return true;
  }

  //Otherwise
  else {

    //Forces the user to input a new x value
    if((*x >= 0 && *x <= 255) == false) {
      printf("Error, please enter an X value between 0 and 255:\n");
      scanf("%u", x);
    }

    //Forces the user to input a new y valueee
    if((*y >= 0 && *y <= 255) == false) {
      printf("Error, please enter a Y value between 0 and 255:\n");
      scanf("%u", y);
    }
    //Returns false
    return false;
  }

}

void decimaltobinary(unsigned int x) {

  //8 bits will be used, the mask will then be 1000 0000 after left shift
  unsigned int mask = 1u << (7);

  //a while loop that stops when the mask moves all the way to the right
  while(mask > 0) {
    //If the current binary value matches with 1, 1 is printed
    if((x & mask)) {
      printf("1");
    }

    //Otherwise 0 is printed
    else {
      printf("0");
    }

    //Shifts the 1 in the mask to the right by 1 position afterwards
    mask = mask >> 1;
  }


}



void inplace_swap(unsigned int *x, unsigned int *y) {
  *y = *x ^ *y; /*Step 1*/
  printf("Value of A at Step 1: ");
  decimaltobinary(*x);
  printf("\n");
  printf("Value of B at Step 1: ");
  decimaltobinary(*y);
  printf("\n");
  printf("\n");


  *x = *x ^ *y; /*Step 2*/
  printf("Value of A at Step 2: ");
  decimaltobinary(*x);
  printf("\n");
  printf("Value of B at Step 2: ");
  decimaltobinary(*y);
  printf("\n");
  printf("\n");


  *y = *x ^ *y; /*Step 3*/
  printf("Value of A at Step 3: ");
  decimaltobinary(*x);
  printf("\n");
  printf("Value of B at Step 3: ");
  decimaltobinary(*y);
  printf("\n");
  printf("\n");

}
