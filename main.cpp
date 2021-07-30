#include <iostream>
#define max 5

using namespace std;

class employee{
public:
    string name;
    string code;
    string designation;
    string experience;
    string age;
};

int num = 0;
employee emp[max]; // emp[max] is an array, max meaning - how many employees we can add to system



void inserting()
{
    if(num < max)
    {
        int i = num;
        num++;
        cout << "Enter the Information of the Employee\n";
        cout << "Name:\t\t"; cin >> emp[i].name;
        cout << "Employee ID:\t"; cin >> emp[i].code;
        cout << "Designation:\t";  cin >> emp[i].designation;
        cout << "Experience:\t"; cin >> emp[i].experience;
        cout << "Age:\t\t"; cin >> emp[i].age;
        cout << endl;
    }
    else
        cout << "Employee Table Full";
        system("pause");


}

void deleteIndex(int i)
{
    for (int j = i; j < num -1; j++)
    {
        emp[j].name = emp[j + 1].name;
        emp[j].code = emp[j + 1].code;
        emp[j].designation = emp[j + 1].designation;
        emp[j].experience = emp[j + 1].experience;
        emp[j].age = emp[j + 1].age;
    }
    return;
}
void deleteRecord()
{
    cout << "enter the employee ID to delete Record: ";
    string code; cin >> code;
    for(int i = 0; i < num; i++)
    {
        if(emp[i].code == code)
        {
            deleteIndex(i);
            num--;
            break;
        }
    }
}

void searchRecord()
{
    string code;
    cout << "Enter the Employee ID to Search Record: ";
    cin >> code;
    for(int i = 0; i < num; i++)
    {
        if(emp[i].code == code)
        {
        cout << "Name:\t\t" << emp[i].name << endl;
        cout << "Employee ID:\t" << emp[i].code << endl;
        cout << "Designation:\t" << emp[i].designation << endl;
        cout << "Experience:\t" << emp[i].experience << endl;
        cout << "Age:\t\t" << emp[i].age << endl;
        system("pause");
        break;
        }
    }
}

void showRecord()
{
        cout << "____________________________\n\n";
    for(int i = 0; i < num; i++)
    {
        cout << "Name:\t\t" << emp[i].name << endl;
        cout << "Employee ID:\t" << emp[i].code << endl;
        cout << "Designation:\t" << emp[i].designation << endl;
        cout << "Experience:\t" << emp[i].experience << endl;
        cout << "Age:\t\t" << emp[i].age << endl;
        cout << "____________________________\n\n";

    }
    system("pause");
}

void showMenu()
{
    while(1)
    {
        system("cls");
    cout << "____________________________\n\n";
    cout << " Employee Management System\n";
    cout << "____________________________\n";
    cout << " Availiable Options:\n";
    cout << "-->Insert new Entry    (1)\n";
    cout << "-->Delete Entry        (2)\n";
    cout << "-->Search a Record     (3)\n";
    cout << "-->Show All Records    (4)\n";
    cout << "-->Exit                (5)\n";
    char option;
    cout << "Enter your Choice:      "; cin >> option;
    switch(option)
    {

    case '1':
        inserting();
        break;
    case '2':
        deleteRecord();
        break;
    case '3':
        searchRecord();
        break;
    case '4':
        showRecord();
        break;
    case '5':
        return;
    default:
        cout << "Expected Options are 1/2/3/4/5\n";
    }
    }
}

int main()
{
    showMenu();

    return 0;
}
