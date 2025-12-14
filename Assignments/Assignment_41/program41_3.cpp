#include <iostream>
using namespace std;

int StrlenX(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrlenX(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    cout<<"Enter your string : ";
    cin>>Arr;

    iRet = StrlenX(Arr);

    cout<<"Number of characters are :"<<iRet;

    return 0;
}