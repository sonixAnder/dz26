#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    string inputString;

    // Запрос у пользователя ввода строки
    cout << "Введите строку: ";
    getline(cin, inputString);

    int letterCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    // Подсчет количества букв, цифр и остальных символов в строке
    for (char c : inputString)
    {
        if (isalpha(c))
        {
            letterCount++;
        }
        else if (isdigit(c))
        {
            digitCount++;
        }
        else
        {
            otherCount++;
        }
    }

    // Вывод результатов
    cout << "Количество букв: " << letterCount << endl;
    cout << "Количество цифр: " << digitCount << endl;
    cout << "Количество других символов: " << otherCount << endl;

    return 0;
}
