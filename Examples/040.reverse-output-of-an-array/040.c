//运行不成功
#include "stdio.h"
#include "conio.h"
#define N 5
main()
{
  int a[N]={9,6,5,4,1},i,temp;
  printf("\n original array:\n");
  for(i=0;i<N;i++)
    printf("%4d",a);
  for(i=0;i<N/2;i++)
  {
    temp=a;
    a=a[N-i-1];
    a[N-i-1]=temp;
  }
  printf("\n sorted array:\n");
  for(i=0;i<N;i++)
    printf("%4d",a);
  getch();
}
