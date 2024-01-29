#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  for (i = 1; i<= 20; i++)
    {
      printf("%d",1+(rand()%6)); /* 1+(rand()%6) gives number between 1 and 6*/

      if (i % 5 == 0 )
      {
        printf("\n");
      }
    }
  
}

/*
gives the output:
2 5 4 2 6
2 5 1 4 2
3 2 3 2 6
5 1 1 5 5
*/
