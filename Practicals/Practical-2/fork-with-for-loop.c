#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main(void)
{
  int i;
  for (i=0; i < 3; i++) {
    fork();
    printf("%d, %d\n",i,getpid());
  }
  return 0;
}

/*
Output:

0, 11164
1, 11164
2, 11164
2, 11167
0, 11165
1, 11165
2, 11165
2, 11169
1, 11168
2, 11168
1, 11166
2, 11166
2, 11171
2, 11170

*/
