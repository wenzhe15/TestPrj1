#include <stdio.h>

void main(void)
{
  int i, j;
  for(i=0; i<100; i++)
  {
    j += i+1; 
  }
  printf("The j is: %d", j);
}
