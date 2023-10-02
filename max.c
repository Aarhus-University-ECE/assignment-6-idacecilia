#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Excercise 2
  // Implement your code below...
  int biggestNum=numbers[0];
  assert(size>0);
  for(int i=0; i<size;i++){
    if(numbers[i]>biggestNum){
      biggestNum=numbers[i];
    }
  }
  return biggestNum;
}

#ifndef TEST

int main() {
  int numbers[] = {0,0,0,0,0,0,0};
  printf("%d",max(numbers, -1));
	return 0;
}

#endif
