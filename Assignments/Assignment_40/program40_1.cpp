#include <iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        cout<<"*\t";
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;;

    cout<<"Enter the number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}