#include <iostream>
#include <string>
#include <exception>

int function(std::string str, int forbidden_length)
{
    if (str.length() == forbidden_length)
    {
        throw "bad_length";
    }
    else
    {
        return str.length();
    }
}

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    std::system("chcp 1251"); // настроить кодировку консоли
    std::system("cls"); // очистить экран

    std::string str_for_user;
    int forbidden_length, calc_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    for (bool i=0; i!=1;)
    {
        std::cout << "Введите слово: ";
        std::cin >> str_for_user;
        try
        {
            std::cout << "Длина слова " << str_for_user << " равна " << function(str_for_user, forbidden_length) << std::endl;
        }
        catch (const char*)
        {
            std::cout << "\nВы ввели слово запретной длины! До свидания\n";
            i = 1;
        }
    }
  return 81;
}
