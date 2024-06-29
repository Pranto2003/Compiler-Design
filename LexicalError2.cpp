#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, temp;
    string statement;

    cout << "Enter the statement:";
    getline(cin, statement);

    cout << "The entered statement was: " << statement << endl;

    if (statement[0] == '0' || statement[0] == '1' || statement[0] == '2' ||
        statement[0] == '3' || statement[0] == '4' || statement[0] == '5' ||
        statement[0] == '6' || statement[0] == '7' || statement[0] == '8' ||
        statement[0] == '9')
    {
        cout << "Lexical error: statement cannot start with a digit." << endl;
        return 0;
    }
    else
    {
        cout << statement[0];
    }

    for (i = 1; i < statement.length(); i++)
    {
        if (statement[i] == '=')
        {
            break;
        }
        cout << statement[i];
    }

    cout << endl;
    cout << statement[i] << endl;

    temp = i;

    if (statement[temp + 1] == '0' || statement[temp + 1] == '1' ||
        statement[temp + 1] == '2' || statement[temp + 1] == '3' ||
        statement[temp + 1] == '4' || statement[temp + 1] == '5' ||
        statement[temp + 1] == '6' || statement[temp + 1] == '7' ||
        statement[temp + 1] == '8' || statement[temp + 1] == '9')
    {
        cout << "Lexical error: invalid character after '='." << endl;
        return 0;
    }
    else
    {
        cout << statement[temp + 1];
    }

    for (i = temp + 2; i < statement.length(); i++)
    {
        if (statement[i] == '+')
        {
            break;
        }
        cout << statement[i];
    }

    cout << endl;
    cout << statement[i] << endl;

    temp = i;

    if (statement[temp + 1] == '0' || statement[temp + 1] == '1' ||
        statement[temp + 1] == '2' || statement[temp + 1] == '3' ||
        statement[temp + 1] == '4' || statement[temp + 1] == '5' ||
        statement[temp + 1] == '6' || statement[temp + 1] == '7' ||
        statement[temp + 1] == '8' || statement[temp + 1] == '9')
    {
        cout << "Lexical error: invalid character after '+'." << endl;
        return 0;
    }
    else
    {
        cout << statement[temp + 1];
    }

    for (i = temp + 2; i < statement.length(); i++)
    {
        if (statement[i] == ';')
        {
            break;
        }
        cout << statement[i];
    }

    cout << endl;
    cout << statement[i] << endl;

    cout << "Token: " << statement[0] << endl;
    cout << "Token: =" << endl;
    cout << "Token: " << statement[temp - 1] << endl;
    cout << "Token: +" << endl;
    cout << "Token: " << statement[temp + 1] << endl;
    cout << "Token: ;" << endl;

    return 0;
}
