#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm>
#include <map>

void BracketCount(std::string& str) {
    int bracket_count = 0;
    int counter = 0;
    std::map<int, int> map;
    int Key = 0, Val = 0;
    std::cout << "Введите строку: ";
    std::getline(std::cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            Key = i;
        }
        if (str[i] == ')') {
            Val = i;
            map.insert(std::pair<int, int>(Key, Val));
        }
    }
    for (auto it = map.begin(); it != map.end(); it++) {
        bracket_count = (it->second) - ((it->first) + 1);
        std::cout << "Количество элементов в скобке : " << bracket_count << std::endl;
        counter++;
    }
    std::cout << "Количество пар скобок : " << counter << std::endl;
    std::cout << std::endl;

}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string str;
    BracketCount(str);



  
}