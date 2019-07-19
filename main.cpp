#include<iostream>
#include<fstream>
#include<windows.h>
#include<dos.h>
#include<stdio.h>
#include<cstdlib>
#include<string>
#include<conio.h>
using namespace std;
COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
gotoxy(40,1);cout<<"MODI CANTEEN";
    gotoxy(40,2);cout<<"-----------------"<<endl<<endl;
    cout<<"-------------BTREE DISPLAY OF NODES-----------"<<endl;
    cout<<"key[0]=mohana"<<endl;
    cout<<"key[1]=aditi"<<endl;
    cout<<"key[2]=jayy"<<endl;
    cout<<"key[3]=ramm"<<endl;
    system("title CANTEEN MANAGEMENT SYSYTEM");
    system("color 71");
    return 0;
}
