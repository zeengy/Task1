// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

bool firstCondition(int number) {
    if (number >= 1000 && number <= 9999) {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = (number / 100) % 10;
        int d = number / 1000;

        return (a != b && a != c && a != d && b != c && b != d && c != d);
    }
    return false;
}

bool secondCondition(int number) {
    return (number % 10 == 3 || number % 10 == 6 || number % 10 == 9);
}

bool thirdCondition(int number) {
    if (number >= 100 && number <= 999) {
        int a = number % 10;
        int b = (number / 10) % 10;
        int c = (number / 100) % 10;

        return (a == 0 || b == 0 || c == 0);
    }
    return false;
}

int main() {
    int numbers[5];

    for (int i = 0; i < 5; ++i) {
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 5; ++i) {
        int currentNumber = numbers[i];

        if (firstCondition(currentNumber)) {
            std::cout << currentNumber << "Виконується перша умова\n";
        }
        else if (secondCondition(currentNumber)) {
            std::cout << currentNumber << " Виконується друга умова\n";
        }
        else if (thirdCondition(currentNumber)) {
            std::cout << currentNumber << " Виконується третя умова\n";
        }
        else {
            std::cout << currentNumber << " Не виконується жодна з умов\n";
        }
    }

    return 0;
}
