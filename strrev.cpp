#include <iostream>
#include <stdlib.h>
using namespace std;
char t1[20]="Ala";
char t2[20]=" ma kota";
const char znak='a';
void strcpy(char * , const char *);
int strlen(char * str);
int strcmp2(const char * ,const char *);
int strcat(char *,const char *);
int strrev(const char *,char *);

int main()

{
    char znak;
    strcat(t1,t2);
    strcpy(t2,t1);
    strcmp2(t2,t1);
    cout<<"Podaj znak: ";
    cin>>znak;
    strrev(st,znak);
    cout<<"t1 = " << t1 << " to jest to samo co " << "t2 = " << t2 << endl;

    cout << "dla tablicy t1 = " << strlen(t1) << endl;
    cout << "dla tablicy t2 = " << strlen(t2) << endl;
    if(strcmp2(t1,t2) == 0)
    {
        cout << "ciagi nie sa takie same "<< endl;
    }
    if(strcmp2(t1,t2) == 1)
    {
        cout << "ciagi  sa takie same "<< endl;
    }

    system("pause");
}

void strcpy(char * cel, const char * zrodlo)
{
    while(*cel++=*zrodlo++);
}

int strlen(char *str)
{

    int i = 0;
    while(*str++) i++;
    return i;

}


int strcmp2(const char *t1, const char *t2)
{
    int i = 0;
    while(*t1)
    {
        if(*t1++!=*t2++)return 0;
        i++;
    }
    return 1;

}

int strcat(char * cel, const char *zrodlo)
{
    while(*cel++);
    cel--;
    while(*cel++=*zrodlo++);
}
int strrev(const char * st,char * znak )
{
    int licznik=0;
  while(*st++==*znak)
    licznik++;
    return licznik;

}
