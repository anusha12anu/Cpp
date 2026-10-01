#include<iostream>
using namespace std;
class demo
{
    private:
    int a;
    public:
    void accept();
    void display();
};
void demo::accept()
{
    cout<<"Enter number: "<<endl;
    cin>>a;
}
void demo::display()
{
    cout<<"Number is "<<a;
}
int main()
{
    demo d;
    d.accept();
    d.display();
    return 0;
}
