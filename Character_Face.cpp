#include<iostream>
#include<windows.h>
using namespace std;
#include<conio.h>
#include<math.h>
#include <stdlib.h>

void gotoRowCol(int rpos, int cpos)
{
int xpos=cpos, ypos = rpos;
COORD scrn;
HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
scrn.X = cpos;
scrn.Y = rpos;
SetConsoleCursorPosition(hOuput, scrn);
}
void sleep(int m)
{
 for(int j=0;j<m*21000;j++)
 {
 }
}


void circle_maker(float radius,int h,int k)
{int x,y;
    for(int i=1;i<=360;i++)
  { x=h+radius*cos(i*(3.14/180));
      y=k+radius*sin(i*(3.14/180));

     {
      sleep(50);
      gotoRowCol(x*0.5,y);
      cout << "*";
     }
    }
}

void circle_Arc_maker(int radius,int h,int k)
{float x,y;
    for(int i=1;i<=360;i++)
    { x=h+radius*cos(i*(3.14/180));
      y=k+radius*sin(i*(3.14/180));

      if(x<=h)
     {
      sleep(50);
      gotoRowCol(x*0.5,y);
      cout << "*";
     } }
}


int main()
{int h=27,k=27;
 float radius=22;


 circle_maker(radius,h,k);

 radius=5,h=17,k=20;
 circle_maker(radius,h,k);

  radius=5,h=17,k=33;
 circle_maker(radius,h,k);

 radius=6.5,h=17,k=20;
 circle_Arc_maker(radius,h,k);

 radius=6.5,h=17,k=33;
 circle_Arc_maker(radius,h,k);


 radius=2.5,h=28,k=27;
 circle_maker(radius,h,k);


 int a=20;
 for(int i=0;i<=10;i++)
 {   gotoRowCol(18,a);
     cout << "*";
     a++;
 }
 a=18;
 for(int j=1;j<=2;j++)
 {
      gotoRowCol(a,30);
     cout << "*";
     a++;
 }
 a=30;
  for(int i=1;i<=10;i++)
 {   gotoRowCol(20,a);
     cout << "*";
     a--;
 }
 a=20;
 for(int j=1;j<=2;j++)
 {
      gotoRowCol(a,20);
     cout << "*";
     a--;}

 getch();

return 0;


}



