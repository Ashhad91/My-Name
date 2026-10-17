#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

int main()
{
    //  A 
    for(int i=2,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=2,j=2;i<=6;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=6,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=2,j=5;i<=6;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }


    // S
    for(int i=8,j=2;i<=12;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=8,j=2;j<=5;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=8,j=5;i<=12;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=12,j=5;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=8,j=8;i<=12;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }


    // H
    for(int i=14,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=18,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=14,j=5;i<=18;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }


    // H
    for(int i=20,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=24,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=20,j=5;i<=24;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }


    // A
    for(int i=26,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=26,j=2;i<=30;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=30,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=26,j=5;i<=30;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }


    // D
    for(int i=32,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=32,j=2;i<=36;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=36,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=32,j=8;i<=36;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    // ASHHAD completed


    

    getch();
    return 0;
}
