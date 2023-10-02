#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Excercise 2
  // Implement your code below...
  int biggestNum=0;
  for(int i=0; i<size;i++){
    assert(numbers[i]!=0);
    if(numbers[i]>biggestNum){
      biggestNum=numbers[i];
    }
  }
  return biggestNum;
}

#ifndef TEST

int main() {

	return 0;
}

#endif
