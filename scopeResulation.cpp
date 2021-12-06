#include<iostream>
#include<conio.h>
using namespace std;
int x = 10;
void display()
{
    cout<<"x value is : "<< x <<endl;
}
int main()
{
    int x = 50;
    cout<<"x value is : "<< :: x <<endl;
    display();
    getch();
}
