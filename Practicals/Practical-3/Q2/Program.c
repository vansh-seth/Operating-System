#include<stdio.h>
int main () 
{ 
  fork(); 
  printf("a"); 
  fork(); 
  printf("b"); 
  return 0; 
}
/*
Output:
aabbbb
*/
