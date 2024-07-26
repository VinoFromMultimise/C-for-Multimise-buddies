#include<stdio.h>
#include<malloc.h>
int main() {
  // Dynamically allocate array of pointers
  int** arr = (int**)malloc(3 * sizeof(int*));
  
  // Dynamically allocate a 1D array for each row
  for (int i = 0; i < 3; i++) {
    arr[i] = (int*)malloc(4 * sizeof(int));
  }
  
  // Assign a value to each element
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 4; col++) {
      printf("\n enter a[%d][%d] number:",row, col);
      scanf("%d",&arr[row][col]);
      // arr[row][col] =  row * 4 + col + 1;
    }
  }
  
  
  return 0;
}
