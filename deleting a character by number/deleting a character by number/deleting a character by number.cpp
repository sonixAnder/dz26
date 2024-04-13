#include <iostream>
#include <string>
using namespace std;

string deleteCharacterAtIndex(const string& str, int index)
{
    if (index < 0 || index >= str.length())
    {
        cout << "Некорректный индекс, возвращаю исходную строку" << endl;
        return str; // если индекс некорректный, возвращаем исходную строку
    }

    return str.substr(0, index) + str.substr(index + 1); //substr() — функция, которая используется для извлечения подстроки из заданной строки
}

int main()
{
    setlocale(LC_ALL, "ru");
    string str = "Hello, world!";
    int index;

    cout << "Изначальная строка: " << str << endl;
    cout << "------------------------------------" << endl;
    cout << "Введите индекс буквы, котрую хотите убрать: " << endl;
    cin >> index;

    string result = deleteCharacterAtIndex(str, index);
    cout << "Строка после удаления символа с индексом " << index << ": " << result << endl;

    return 0;
}
