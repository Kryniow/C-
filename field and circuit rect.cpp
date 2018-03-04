#include<iostream>
#include<stdlib.h>
using namespace std;
void rect(int  l, int  w,int * field, int * circuit)
{

    *field=l * w;
    *circuit=2* l + 2* w;

}
int main()
{
    int l,w,field,circuit;
    cout<<"Pls, take a lenght: ";
    cin>>l;
    cout<<"Pls, take a width: ";
    cin>>w;
    rect(l,w,&field,&circuit);
    cout<<field<<endl<<circuit;
    return 0;
}
