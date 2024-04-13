#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string str;

    cout << "Введите строку: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
        {
            str[i] = '!';
        }
    }
    cout << "Результат замены символов '.' на '!': " << str << endl;
    return 0;
}