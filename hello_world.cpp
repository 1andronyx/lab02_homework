#include <iostream>
#include <string>

<<<<<<< HEAD
int main() {
    std::string username;
//внесены изменения, поставлены знаки препинания!:
    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, username);
=======
int
main()
{
  std::string username;

  std::cout << "Введите ваше имя: ";
  std::getline(std::cin, username);
>>>>>>> 5a86806 (Mozilla code style)

  std::cout << "Hello world from " << username << std::endl;

  return 0;
}
