#include<iostream>

using namespace std;


class Base    //8
{
    int i,j;

    void fun()
    {
        cout<<"Inside base fun\n";
    }

};

class Derived:public Base //12
{
    public:
    int x;

    void gun()
    {
        cout<<"inside Derived gun\n";
    }
};


int main()
{
        Base bobj;
        
        Derived dobj;




        cout<<"size of Base class object:"<<sizeof(bobj)<<"\n";
          cout<<"size of derived class object:"<<sizeof(dobj)<<"\n";




    return 0;
}