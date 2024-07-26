#include<stdio.h>
#include<malloc.h>
#include <stdlib.h>
int main(void) {
  
  int* arr[3];
  
  for (int row = 0; row < 3; row++) {
    arr[row] = (int*)malloc(4 * sizeof(int));
  }
  
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 4; col++) {
      arr[row][col] = row * 4 + col + 1;
    }
  }
  
  
  return 0;
}
