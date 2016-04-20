//运行不成功
#include "stdio.h"
#include "conio.h"
/* 如果使用的是TC系列编译器则可能需要添加下句 */
static void dummyfloat(float *x){ float y; dummyfloat(&y);}
main()
{
  float a[3][3],sum=0;
  int i,j;
  printf("please input rectangle element:\n");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%f",&a[j]);
  for(i=0;i<3;i++)
    sum=sum+a;
  printf("duijiaoxian he is %6.2f",sum);
  getch();
}
