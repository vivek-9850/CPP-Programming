#include<iostream>
using namespace std;

class Hello
{
    public:
        void Display();
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend void Hello::Display();
};

void Hello::Display()
    {
        Demo obj;
        cout<<"value of i : "<<obj.i<<"\n";
        cout<<"value of j : "<<obj.j<<"\n";
        cout<<"value of k : "<<obj.k<<"\n";
    }

int main()
{
    Hello hobj;
    hobj.Display();

    return 0;
}
