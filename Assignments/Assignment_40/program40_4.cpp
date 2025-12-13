#include <iostream>
using namespace std;

void Display(char iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    Display(iNo - 1);       //imp
    cout<<char('A' + iNo - 1)<<"\t";
}


int main()
{
    int iValue = 0;;

    cout<<"Enter the number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}