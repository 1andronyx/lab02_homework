#include <iostream>
#include <string>

int main() {
    std::string username;

    // Запрашиваем имя пользователя
    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, username);

    // Выводим приветствие с именем пользователя
    std::cout << "Hello world from " << username << std::endl;

    return 0;
}
