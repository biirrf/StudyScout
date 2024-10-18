#include <iostream>
using namespace std;

struct Student
{
    int ID;
    string Name;
    string Email;
    int Number;
};

void ShowResult(Student student)
{
    // showing the details
    cout << "\nStudent Details:\n";
    cout << "ID: " << student.ID << endl;
    cout << "Name: " << student.Name << endl;
    cout << "Email: " << student.Email << endl;
    cout << "Number: " << student.Number << endl;
}

int main()
{
    Student student1;

    int ID;
    cin >> student1.ID;

    string name;
    cin >> student1.Name;

    string email;
    string email;

    int number;
    cin >> student1.Number;

    ShowResult(student1);
}