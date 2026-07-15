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


void upper_tri(int num, int extra,int tri2)
{
    for(int a=tri2;a<num;a++)
    {
       gotoRowCol(extra,a);
        cout << "*";
    }

}
void lower_tri(int num,int tri2)
{
    for(int c=num;c>tri2;c--)
    {
       gotoRowCol(num,c-1);
        cout << "*";
    }

}
void lower_tri_s(int num,int tri3)
{
    for(int c=num;c>tri3+4;c--)
    {
       gotoRowCol(num-1,c-3);
        cout << " ";
    }

}

void upper_tri2(int temp4, int extra2,int tri4)
{
    for(int a=tri4+3;a<temp4-3;a++)
    {  sleep(500);
       gotoRowCol(extra2+2,a);
        cout << " ";
    }

}

void lower_tri2(int num,int tri5)
{
    for(int c=num;c>tri5+4;c--)
    {  sleep(500);
       gotoRowCol(num-1,c-4);
        cout << "*";
    }

}

int main()
{int extra =3,num,tri1=1,tri2=1,tri3=1,tri4=1,tri5=4,temp1,temp2,temp3,temp4,extra2=3,temp5,temp6,b=1;

num=20;
temp1=num;
temp2=num;
temp3=num;
temp4=num;
temp5=num;
temp6=num;
  for(int i=1;i<num-1;i++)
    {gotoRowCol(4,b);
    cout << " ";
    upper_tri(num,extra,tri1);
    extra++;
    tri1++;
    num--;
    b++;
    }
b=8;
     for(int i=1;i<temp1;i++)
     {gotoRowCol(4,b);
    cout << " ";
        lower_tri(temp1,tri2);
        extra++;
        tri2++;
        temp1--;
        b++;
     }

     for(int i=1;i<temp2-1;i++)
     {
        lower_tri_s(temp2,tri3);
        tri3++;
        temp2--;
     }
     gotoRowCol(1,0);
     cout << "Enter a chacter to start Animation ";
     getch();

int a=(temp6/2);

for(int i=1;i<temp4-1;i++)
    {

        if(a>4&&a<14)
     {
      gotoRowCol(a+2,temp6/2);
    cout << "*";
    sleep(5000);
    gotoRowCol(a+2,temp6/2);
     cout << " ";

     sleep(500);
      gotoRowCol(a+1,temp6/2);
    cout << "*";
    sleep(5000);
    gotoRowCol(a+1,temp6/2);
     cout << " ";

     sleep(500);
      gotoRowCol(a+3,temp6/2);
    cout << "*";
    sleep(5000);
    gotoRowCol(a+3,temp6/2);
     cout << " ";}

    upper_tri2(temp4,extra2,tri4);
    lower_tri2(temp5,tri5);

if(a>4&&a<14)
     {
    gotoRowCol(a+1,temp6/2);
    cout << "*";
    sleep(5000);
    gotoRowCol(a+1,temp6/2);
     cout << " ";
     sleep(500);
      gotoRowCol(a+2,temp6/2);
    cout << "*";
    sleep(5000);
    gotoRowCol(a+2,temp6/2);
     cout << " ";

     sleep(500);
      gotoRowCol(a+1,temp6/2);
    cout << "*";
    sleep(500);
    gotoRowCol(a+1,temp6/2);
     cout << " ";

     sleep(5000);
      gotoRowCol(a+3,temp6/2);
    cout << "*";
    sleep(5000);
    gotoRowCol(a+2,temp6/2);
     cout << " ";

     sleep(500);
      gotoRowCol(a+1,temp6/2);
    cout << "*";
    sleep(5000);
    gotoRowCol(a+1,temp6/2);
     cout << " ";

     sleep(5000);
      gotoRowCol(a+3,temp6/2);
    cout << "*";
    sleep(500);
    gotoRowCol(a+3,temp6/2);
     cout << " ";

     sleep(5000);
     gotoRowCol(a+1,temp6/2);
    cout << "*";
    sleep(500);
      gotoRowCol(a+1,temp6/2);
    cout << " ";

     gotoRowCol(a+1,temp6/2);
    cout << "*";
    sleep(5000);
    gotoRowCol(a+1,temp6/2);
     cout << " ";

     sleep(500);
     gotoRowCol(a+2,temp6/2);
    cout << "*";
    sleep(500);

     gotoRowCol(a+2,temp6/2);
    cout << " ";
    sleep(5000);

    gotoRowCol(a+3,temp6/2);
    cout << "*";

    gotoRowCol(a+1,temp6/2);
    cout << "*";
    sleep(5000);
    gotoRowCol(a+1,temp6/2);
     cout << " ";
}


     a++;
     tri5++;
    temp5--;
    extra2++;
    tri4++;
    temp4--;
    }

  getch();
return 0;
}

