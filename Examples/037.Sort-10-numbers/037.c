//运行不成功
#include "stdio.h"
#include "conio.h"
#define N 10
main()
{
  int i,j,min,tem,a[N];
  /*input data*/
  printf("please input ten num:\n");
  for(i=0;i<N;i++)
  {
    printf("a[%d]=",i);
    scanf("%d",&a);
  }
  printf("\n");
  for(i=0;i<N;i++)
    printf("%5d",a);
  printf("\n");
  /*sort ten num*/
  for(i=0;i<N-1;i++)
  {
    min=i;
    for(j=i+1;j<N;j++)
      if(a[min]>a[j])
        min=j;
    tem=a;
    a=a[min];
    a[min]=tem;
  }
  /*output data*/
  printf("After sorted \n");
  for(i=0;i<N;i++)
  printf("%5d",a);
  getch();
}
