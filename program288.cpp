#include<iostream>
using namespace std;

void Auto_Demo()
{
    auto i = 1;      //static storage class 
    cout<<"auto_demo : "<<i<<"\n";
    i++;
}

int main()
{
    auto_demo();
    auto_demo();
    auto_demo();
    auto_demo();
     
    return 0;
}