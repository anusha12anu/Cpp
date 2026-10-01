#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr= new int;
    cout<<"Enter a number"<<endl;
    cin>>*ptr;
    cout<<"Number is "<<*ptr;
    delete ptr;
    return 0;
}
