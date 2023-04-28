// CheckGradeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadGrade(int &Grade)
{
    cout << "Enter the Grade Please \n";
    cin >> Grade;
}

void CheckGrade(int Grade)
{
    int Range = 60;
    ReadGrade(Grade);
    if (Grade > Range)
       cout << "The Grade is :  beggier than " << Range <<endl;
    else if (Grade == 60)
        cout << "The Grade is : equal " << Range << endl;
    else
        cout << "The Grade is : Lower than " << Range <<endl;

}

void CheckNumber(int Number)
{
    cout << "Enter the Number Please :";
    cin >> Number;

    if (Number % 2 == 0)
        cout << "\nThis Number is Even" << endl;
    else
        cout << "\nThis Number is Odd" << endl;
    
}

void CheckPositiveNumber(int num)
{
    cout << "Enter NUmber : ";
    cin >> num;

    if (num >= 0)
        cout << "\nIs A positive Number" << endl;
    else
        cout << "\nIs A Negative NUmber" << endl;
}

int main()
{
    int Data = 0;
    
    CheckPositiveNumber(Data);


   return 0;
}
