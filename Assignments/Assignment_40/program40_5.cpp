#include <iostream>
using namespace std;

void Display(char iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    cout<<char('A' + iNo - 1)<<"\t";
    Display(iNo - 1);       //imp
}


int main()
{
    int iValue = 0;;

    cout<<"Enter the number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}