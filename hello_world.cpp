#include <iostream>
#include <string>

int main() {
    std::string username;

    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, username);

    std::cout << "Hello world from " << username <<std::endl;

    return 0;
}
