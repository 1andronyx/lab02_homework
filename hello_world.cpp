#include <iostream>
#include <string>
using namespace std;
int main() {
    string username;

    cout << "Введите ваше имя: ";
    getline(std::cin, username);

    cout << "Hello world from " << username <<endl;

    return 0;
}
