#include <iostream>
using namespace std;

int main()
{
    //declare variables

    string arr[5][3];
    string name;
    string name_check;
    string id;
    string grade;

    //Use for loop and 2d array to input all the stuff and store it

    for (int i = 0; i < 5; i++)
    {
        cout << "Type name: ";
        cin >> name;

        cout << "Type in the id: ";
        cin >> id;

        cout << "Type in the grade: ";
        cin >> grade;

        for (int k = 0; k < 1; k++)
        {
            arr[i][k] = name;
            arr[i][k + 1] = id;
            arr[i][k + 2] = grade;
        }
    }

    //Check info by searching 2d array with the name

    cout << "Enter a name to check: ";
    cin >> name_check;
    for (int l = 0; l < 5; l++)
    {
        if (arr[l][0] == name_check)
        {
            cout << "Name: " << arr[l][0] << endl;
            cout << "ID: " << arr[l][1] << endl;
            cout << "Grade: " << arr[l][2] << endl;
        }
    }
}