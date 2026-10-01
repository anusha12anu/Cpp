#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    char name[20];
    public:
    void accept()
    {
        cout<<"Enter name and roll number of Student"<<endl;
        cin>>name>>roll;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<roll;
    }
};
int main()
{
    student s,*ptr;
    ptr=&s;
    ptr->accept();
    ptr->display();
    return 0;
}
