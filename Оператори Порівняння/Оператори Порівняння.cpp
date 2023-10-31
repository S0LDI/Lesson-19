﻿#include <iostream>

class ОсобливiСимволи {
public:
    ОсобливiСимволи(char символ) : символ(символ) {}

    bool operator==(const ОсобливiСимволи& iнший) const {
        return (символ == iнший.символ) || (порiвнювати(символ, iнший.символ));
    }

    bool operator!=(const ОсобливiСимволи& iнший) const {
        return !(*this == iнший);
    }

private:
    char символ;

    
    bool порiвнювати(char символ1, char символ2) const {
        const char укрСимволи[] = { 'О', 'А', 'i', 'Е', 'Н', 'С', 'В', 'Н', 'Р', 'К', 'Р', 'Р', 'А', 'А', 'М', 'Т', 'С', 'А', 'i', 'А', 'А', 'О', 'А', 'О', 'А', 'О', 'А', 'О', 'А' };
        const char англСимволи[] = { 'O', 'A', 'I', 'E', 'H', 'C', 'B', 'K', 'P', 'X', 'T', 'M', 'A', 'E', 'I', 'O', 'U', 'A', 'E' };

        for (int i = 0; i < sizeof(укрСимволи); i++) {
            if (символ1 == укрСимволи[i] && символ2 == англСимволи[i]) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    setlocale(LC_ALL, "ukr");
    char символ1, символ2;

    std::cout << "Введiть перший символ: ";
    std::cin >> символ1;

    std::cout << "Введiть другий символ: ";
    std::cin >> символ2;

    ОсобливiСимволи перший(символ1);
    ОсобливiСимволи другий(символ2);

    if (перший == другий) {
        std::cout << "Символи еквiвалентнi." << std::endl;
    }
    else {
        std::cout << "Символи не еквiвалентнi." << std::endl;
    }

    if (перший != другий) {
        std::cout << "Символи не еквiвалентнi." << std::endl;
    }
    else {
        std::cout << "Символи еквiвалентнi." << std::endl;
    }

    return 0;
}
