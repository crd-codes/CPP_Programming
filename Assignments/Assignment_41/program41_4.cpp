#include <iostream>
using namespace std;

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }

    return iFact;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = Fact(iValue);

    cout<<"The factorial of number is :"<<iRet;

    return 0;
}