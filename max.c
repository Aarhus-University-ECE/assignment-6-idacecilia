#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Excercise 2
  // Implement your code below...
  int biggestNum=numbers[0]; //we start by initializing our biggest number to the first number
  assert(size>0); //check precondition
  for(int i=0; i<size;i++){ //loop through array
    if(numbers[i]>biggestNum){ //if initialization is higher
      biggestNum=numbers[i]; //set value to the new number
    }
  }
  return biggestNum; //return highest number
}

#ifndef TEST

int main() {
  int numbers[] = {0,0,0,0,0,0,0};
  printf("%d",max(numbers, -1));
	return 0;
}

#endif
