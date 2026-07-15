void circle_maker(int radius,int h,int k)
{int x,y;
    for(int i=1;i<=360;i++)
    { x=h+radius*cos(i*3.14/180);
      y=k+radius*sin(i*3.14/180);

     {
      sleep(50);
      gotoRowCol(x*0.5,y);
      cout << "*";
     }
    }
}

void circle_Arc_maker(int radius,int h,int k)
{int x,y;
    for(int i=1;i<=360;i++)
    { x=h+radius*cos(i*3.14/180);
      y=k+radius*sin(i*3.14/180);

      if(x>=h)
     {
      sleep(50);
      gotoRowCol(x*0.5,y);
      cout << "*";
     }
    }
}


int main()
{int radius=17,h=22,k=22;

 circle_maker(radius,h,k);

 radius=5,h=15,k=16;
 circle_maker(radius,h,k);

  radius=5,h=15,k=28;
 circle_maker(radius,h,k);

 radius=5,h=26,k=22;
 circle_Arc_maker(radius,h,k);

 getch();
return 0;
}