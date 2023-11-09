#include <iostream>

int simple_string_hash(std::string word){
    int size = 0;
    for(int i = 0; i < word.length(); i++){
        size += static_cast<int>(word[i]);
    }
    return size;
}

int main() {
    std::string word;

    while (true) {
        std::cout << "Введите строку: ";
        std::cin >> word;
        std::cout << "Наивный хэш строки " << word << " = " << simple_string_hash(word) << "\n";
        if(word == "exit") break;
    }
    return 0;
}
