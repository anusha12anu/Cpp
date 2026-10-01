#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    public:
    void accept()
    {
        cout<<"Enter employee ID"<<endl;
        cin>>id;
    }
    void display()
    {
        cout<<"Employee ID: "<<id<<endl;
    }
};
int main()
{
    employee e,*ptr;
    ptr=&e;
    ptr->accept();
    ptr->display();
    return 0;
}
