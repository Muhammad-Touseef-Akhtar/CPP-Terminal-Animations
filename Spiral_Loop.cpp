
void left_to_right(int num, int i)
{
    for(int a=i;a<=num;a++)
    {  sleep(500);
       gotoRowCol(i,a);
        cout << "*";
 }
}


void top_to_bottom(int num,int i)
{
    for(int b=i;b<num;b++)
    {  sleep(500);
       gotoRowCol(b,num);
        cout << "*";
    }
}


void right_to_left(int num,int i)
{
    for(int c=num;c>i;c--)
    {  sleep(500);
       gotoRowCol(num,c);
        cout << "*";
    }
}


void bottom_to_top(int num,int i)
{
for(int d=num;d>i;d--)
    {  sleep(500);
       gotoRowCol(d,i);
        cout << "*";
    }
}


void left_to_right_s(int num, int i)
{
    for(int a=i;a>num;a--)
    {  sleep(500);
       gotoRowCol(i,a);
        cout << " ";
 }
}


void top_to_bottom_s(int num,int i)
{
    for(int b=i;b>num;b--)
    {  sleep(500);
       gotoRowCol(b,num);
        cout << " ";
    }
}


void right_to_left_s(int num,int i)
{
    for(int c=num;c<=i;c++)
    {  sleep(500);
       gotoRowCol(num,c);
        cout << " ";
    }
}


void bottom_to_top_s(int num,int i)
{
for(int d=num+1;d<i;d++)
    {  sleep(500);
       gotoRowCol(d,i);
        cout << " ";
    }
}


int main()
{int num,temp,a=1;
    cout << "Enter a number = ";
    cin >> num;
    temp=num;

    while(a!=0)

   {num=temp;
    for(int i=1;i<=num;i++)
    {top_to_bottom(num,i);
     right_to_left(num,i);
     bottom_to_top(num,i);
        left_to_right(num,i);



        num--;

   }

num=temp/2;
    for(int i=num+1;i>=1;i--)
    {
        bottom_to_top_s(i,num);
        left_to_right_s(i,num);
        top_to_bottom_s(i,num);
        right_to_left_s(i,num);



num++;
}
   }

return 0;
}