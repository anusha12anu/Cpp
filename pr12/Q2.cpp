#include<iostream>
using namespace std;
class demo
{
    public:
    void display()
    {
        cout<<"This is demo";
    }
};
int main()
{
    demo d,*ptr;
    ptr=&d;
    ptr->display();
    return 0;
}
