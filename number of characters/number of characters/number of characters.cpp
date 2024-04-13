#include <iostream>
#include <string>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    string str;
    char ch;
    int count = 0;

    cout << "Введите строку символов: ";
    getline(cin, str);

    cout << "Введите искомый символ: ";
    cin >> ch;

    for (char c : str)
    {
        if (c == ch) 
        {
            count++;
        }
    }

    cout << "Символ '" << ch << "' встречается в строке " << count << " раз." << endl;

    return 0;
}
