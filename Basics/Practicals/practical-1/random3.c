#include <stdio.h>
#include <stdlib.h>  
int main() 
{
  int i; 
  unsigned seed; 
  printf("Enter seed: "); 
  scanf("%u", &seed); 
  rand(seed); 
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
Here are 3 different runs of the program: 

Enter seed:3 
1 3 1 2 6 
4 3 2 2 1 

Enter seed:200 
2 1 5 6 1
2 2 5 3 5 
Enter seed:3 

1 3 1 2 6
4 3 2 2 1
*/
