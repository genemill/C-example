#include "stdio.h"
#include "conio.h"
main ()
{
 int i,j;
 for(i=0;i<8;i++)
 {
  for(j=0;j<8;j++)
   if((i+j)%2==0)
    printf("%c%c",219,219);/*字符219显示小黑块*/
   else
    printf("  ");/*两个空格显示两个小白块*/
  printf("\n");
 }
 getch();
 return 0;
}
