#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence;
    string word = "";
    cout << "Enter the sentence :" << endl;
    getline(cin, sentence);
    cout << "The entered sentence is :" << sentence << endl;
    cout << endl;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == '+' || sentence[i] == '-' || sentence[i] == '=' || sentence[i] == '*' || sentence[i] == '/' || sentence[i] == ';')
        {
            if (!word.empty())
            {
                cout << word << endl;
                word = "";
            }
            cout << sentence[i] << endl;
        }
        else if (sentence[i] == ' ')
        {
        }
        else
        {
            word += sentence[i];
        }
    }

    return 0;
}