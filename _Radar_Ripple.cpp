
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
void circle_maker_s(float radius,int h,int k)
{int x,y;
    for(int i=360;i>=1;i--)
  { x=h+radius*cos(i*(3.14/180));
      y=k+radius*sin(i*(3.14/180));

     {
      sleep(50);
      gotoRowCol(x*0.5,y);
      cout << " ";
     }
    }
}



int main()
{int a=1;
float radius;


while(a!=0)
{
 for( radius=2;radius<23;radius+=2)
{
    circle_maker(radius,22,22);

}
sleep(50);
for( radius=22;radius>1;radius-=2)
{
    circle_maker_s(radius,22,22);

  sleep(50);

}
}

getch();
return 0;
}
