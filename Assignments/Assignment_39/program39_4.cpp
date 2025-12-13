#include <iostream>
using namespace std;

void Display()
{
    static char iCnt = 'A';

    if(iCnt<='F')
    {
        cout<<iCnt<<"\t";
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}