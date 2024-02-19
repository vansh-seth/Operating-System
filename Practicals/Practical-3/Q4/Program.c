#include <stdio.h> 
void main() 
{ 
  fork(); 
  fork(); 
  printf("Hello \n"); 
  fork(); 
  printf("welcome\n"); 
}

/*
Output:
hello
hello
hello
hello
welcome
welcome
welcome
welcome
welcome
welcome
welcome
welcome
*/
