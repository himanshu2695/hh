#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
//#include<iostream.h>
int main(void)
{     clrscr();
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int a[10];
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "../bgi");

   int x1,y1,p1,p2,c;
    float w=0;
   printf("\nEnter constant x & power & y & power ");

 //  cout<<"\npower of x and y";
   scanf("%d",&x1);
   scanf("%d",&p1);
   scanf("%d",&y1);
   scanf("%d",&p2);
   printf("\nEnter constant ");
   scanf("%d",&c);

   printf("\nEquation is ");
    printf("%dX%d + %dY%d = %d",x1,p1,y1,p2,c);
    for(int i=0;i<5;i++)
    {

    w=(c-(x1*i*p1))/y1*p2;
    a[i]=w;
    printf("\n%d %f",i,w);
    printf("\n");

   }



  for(i=0;i<5;i++)
   {
    line(i+350,i+350,a[i]+350,w+350);
   }








   /* clean up */
   getch();
   closegraph();
   return 0;
}
