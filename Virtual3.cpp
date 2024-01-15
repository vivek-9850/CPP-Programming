#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()  //defination
        {
            cout<<"Inside Base fun\n";
        }
        void Gun()  //defination
        {
            cout<<"Inside Base Gun\n";
        }
        void Sun()  //defination
        {
            cout<<"Inside Base sun\n";
        }
        void Run()  //defination
        {
            cout<<"Inside Base run\n";
        }
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()  //Redefination
        {
            cout<<"Inside derived gun\n";
        }
        void Run()  //Redefination
        {
            cout<<"Inside derived run\n";
        }
};

int main()
{
    Base *bp = new Derived; 
    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();

    return 0;
}
