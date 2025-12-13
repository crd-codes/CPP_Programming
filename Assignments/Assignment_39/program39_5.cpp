#include <iostream>
using namespace std;

void Display()
{
    static char iCnt = 'a';

    if(iCnt<='f')
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