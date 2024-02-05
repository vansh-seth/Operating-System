#include <stdio.h> 
#include <stdlib.h> 
int main()
{
  int f1 = 0; /* frequency 1 */
  int f2 = 0; /* frequency 2 */
  int f3 = 0; /* frequency 3 */
  int f4 = 0; /* frequency 4 */
  int f5 = 0; /* frequency 5 */
  int f6 = 0; /* frequency 6 */
  int rolls; // from 1 to 6000
  int face; // die faces 1 to 6
  for (rolls = 1; rolls<=6000; rolls++)
    {
      face = 1+ rand()%6;

      switch(face)
        {
          case 1:
            ++f1;
            break;
          case 2:
            ++f2
            break;
          case 3:
            ++f3
            break;
          case 4:
            ++f4
            break;
          case 5:
            ++f5
            break;
          case 6:
            ++f6
            break;
        }
    }
  printf("%s%13s\n","Face","Frequency");
  printf("1%d\n", f1);
  printf("2%d\n", f2);
  printf("3%d\n", f3);
  printf("4%d\n", f4);
  printf("5%d\n", f5);
  printf("6%d\n", f6);
}

/*
output:
Face   Frequency 
1         980 
2         993 
3        1030  
4        1009 
5        1002 
6         986
*/
