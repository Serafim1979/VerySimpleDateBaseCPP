#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;

char name[10][80];
char phone[10][20];
float hours[10];
float wage[10];

int menu();
void input();
void report();

int main()
{
    int choice;
    do
    {
        choice = menu();

        switch(choice)
        {
            case 0: break;
            case 1: input();
            break;
            case 2: report();
            breakdefault: cout << "Try again" << endl;
        }
    }while(choice != 0);

    return 0;
}
/////////////////////////////////////////////////
int menu()
{
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Input information" << endl;
    cout << "2. Report" << endl;
    cout << "\nYour choice: ";
    cin >> choice;
    return choice;
}
/////////////////////////////////////////////////
void input()
{
    int i;
    char tmp[80];
    for(i = 0; i < 10; i++)
    {
        cout << "Enter last name: ";
        cin >> name[i];
        cout << "Enter phone number: ";
        cin >> phone[i];
        cout << "Enter the number of hours worked: ";
        cin >> hours[i];
        cout << "Enter the salary: " << endl;
        cin >> wage[i];
    }
}
/////////////////////////////////////////////////
void report()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        cout << name[i] << ' ' << phone[i] << endl;
        cout << "Salary per week: " << wage[i] * hours[i] << endl;
    }
}

