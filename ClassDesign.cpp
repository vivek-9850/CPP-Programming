#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iLength;

    public:
        Array(int Size)
        {
            iLength = Size;
            Arr = new int[iLength];
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the elements : "<<"\n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        ~Array()
        {
            delete []Arr;
        }
        void Display()
        {
            int iCnt = 0;
            cout<<"Element of the array : "<<"\n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
        }
};

int main()
{
    Array aobj(5);
    aobj.Accept();
    aobj.Display();

    return 0;
}
