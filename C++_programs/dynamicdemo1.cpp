#include<iostream>
using namespace std;

int main()
{
    int length=0;
    int *Arr=NULL;

    cout<<"enter the number of elemnts :\n";
    cin>>length;
//step 1:Allocate the memory

    Arr=new int[length];
    if(Arr == NULL)
    {
        cout<<"unable to allocate :\n";
    }
 //step:2   use the memory

 //step3:Deallocate the memory
 delete [] Arr;

  
    return 0;
}