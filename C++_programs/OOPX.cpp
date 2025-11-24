#include<iostream>

using namespace std;

class Arithmatic
{
    public:
    int iNo1;
    int  iNo2;

    Arithmatic()
    {
        cout<<"inside default constructor\n";
        iNo1=0;
        iNo2=0;

    }

    Arithmatic(int A,int B)
    {
        cout<<"inside parametrised constructor\n";
        iNo1=A;
        iNo2=B;
    }
 
    int Addition()
{
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;
}

int substraction()
{
    int iAns=0;
    iAns=iNo1-iNo2;
    return iAns;
}
};

int main()
{
    Arithmatic aobj1(11,10);
    Arithmatic aoj2();

    int iRet=0;

    iRet=aobj1.Addition();
    cout<<"Addition is:"<<iRet<<"\n";

    iRet=aobj1.substraction();
    cout<<"substraction is:"<<iRet<<"\n";
}
