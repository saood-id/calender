#include<iostream>
using namespace std;
int main()
{
    int date,month,year,y1,y2,y3,e;
    cin>>date>>month>>year;
    int y=year-1;
    y1=y/100;//19
    y2=y%100;//46
    y3=y2/4;//11
    int total=y2+y3+(19*5);
    e=total%7;
    cout<<e;
    return 0;

}