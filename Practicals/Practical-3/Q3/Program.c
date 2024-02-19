#include <stdio.h>
int main() 
{ 
  int i,n ; 
  for(i = 1 ; i<=n ; ++i) 
  { 
    fork(); 
    printf("*");
  } 
}
/*
Output:

*'s will be 2^n 

*/
