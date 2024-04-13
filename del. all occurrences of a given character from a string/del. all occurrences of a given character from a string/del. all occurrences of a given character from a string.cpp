#include <iostream>
#include <string>
using namespace std;

string removeChar(string str, char ch)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ch)
        {
            result += str[i];
        }
    }
    return result;
}

int main()
{
    setlocale(LC_ALL, "ru");
    string str = "hello world";
    char ch = 'o';

    string result = removeChar(str, ch);

    cout << "Изначальня строка: " << str << endl;
    cout << "Строка после удаления '" << ch << "': " << result << endl;

    return 0;
}