#include "stdio.h"
#include "conio.h"
main()
{
 int score;
 char grade;
 printf("please input a score\n");
 scanf("%d",&score);
 grade=score>=90?'A':(score>=60?'B':'C');
 printf("%d belongs to %c",score,grade);
 getch();
 return 0;
}
