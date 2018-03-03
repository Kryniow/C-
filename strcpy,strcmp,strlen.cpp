#include <iostream>
using namespace std;

char t1[20] = "ala i ola";
char t2[20];

void strcpy1(char * cel, const char * zrodlo)
{
    while(*cel++=*zrodlo++);
}

int strlen1(char *str)
{

    int i = 0;
    while(*str++) i++;
    return i;

}


int strcmp(const char *t1, const char *t2)
{
    int i = 0;
    while(*t1)
    {
        if(*t1++!=*t2++)return 0;
        i++;
    }
    return 1;

}

main()
{
    strcpy1(t2,t1);
    strcmp(t2,t1);
    cout<<"t1 = " << t1 << " to jest to samo co " << "t2 = " << t2 << endl;

    cout << "dla tablicy t1 = " << strlen1(t1) << endl;
    cout << "dla tablicy t2 = " << strlen1(t2) << endl;
    if(strcmp(t1,t2) == 0)
    {
        cout << "ciagi nie sa takie same "<< endl;
    }
    if(strcmp(t1,t2) == 1)
    {
        cout << "ciagi  sa takie same "<< endl;
    }
}

