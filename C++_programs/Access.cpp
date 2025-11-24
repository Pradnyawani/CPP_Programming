#include<iostream>

using namespace std;


class Base
{
    public:
     int i;

     private:
      int j;

      protected:
      int k;

      public:
      Base()
      {
        i=10;j=20;k=30;

      }

        void fun()        
    {
        cout<<i<<"\n"; //Allowed
        cout<<j<<"\n"; //Allowed
        cout<<k<<"\n"; //Allowed
    }

  

};

class Derived:public Base
{
    public:
    void Display()
    {
        cout<<i<<"\n";  //Allowed
        cout<<j<<"\n";  //error
        cout<<k<<"\n";  //Allowed
    }

    
};


int main()
{
        Base bobj;
        
        Derived dobj;

      cout<<bobj.i<<"\n"; //Allowed
      cout<<bobj.j<<"\n"; //errror
      cout<<bobj.k<<"\n"; //error

      cout<<dobj.i<<"\n";  //Allowed
      cout<<dobj.j<<"\n";  //error
      cout<<dobj.k<<"\n"; //error  only accesable in class not in other than

      dobj.fun();     //Allowed

      dobj.Display(); //Allowed
      


    return 0;
}