#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand( time(NULL) );

  printf("First array...\n");
  int int_array[10];
  
  for (int i = 0; i < 9; i++){
    int_array[i] = rand();
  }
  int_array[9] = 0;
  
  for (int i = 0; i < 10; i++)
    printf("Int at index %d of int_array is... %d\n", i, int_array[i]);

  printf("\nPopulating second array using only pointers...\n");
  int rev_array[10];
  int *ap = int_array;
  int *rp = rev_array;
  
  for (int i = 0; i < 10; i++){
    *(rp + i) = *(ap + (9 - i));
    printf("Int at index %d of rev_array is... %d\n", i, *(rp + i));
  }
}
    

  
  
    
