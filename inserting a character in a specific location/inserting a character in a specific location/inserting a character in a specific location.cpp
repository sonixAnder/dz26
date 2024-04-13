#include <iostream>
#include <string>
using namespace std;

string insertCharAtIndex(string str, char character, int index)
{
    if (index < 0 || index >= str.length())
    {
        return str;
    }

    str.insert(index, 1, character);
    return str;
}

int main()
{
    setlocale(LC_ALL, "ru");
    string str = "Hello, world!";
    char character;
    int index;

    cout << "Изначальная строка: " << str <<endl;
    cout << "-------------------------------------" << endl;
    cout << "Введите символ, который хотите добавить: " << endl;
    cin >> character;

    cout << "Введите индекс, куда хотите поставить символ: " << endl;
    cin >> index;

    string result = insertCharAtIndex(str, character, index);
    cout << "Результат: " << result << endl;
    return 0;
}