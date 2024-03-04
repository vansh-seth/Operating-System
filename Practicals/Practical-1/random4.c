#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(void) 
{ 
  int i; 
  srand(time(NULL)); 
  for (i = 1; i <= 10; i++) 
  { 
    printf("%10d", 1 + (rand() % 6)); 
    if (i % 5 == 0) 
    { 
      printf("\n");
    } 
  }
}
/*
1st output:

4 4 3 6 6 
2 6 4 3 3

2nd output:

2 6 3 4 3 
3 5 4 5 6
*/
