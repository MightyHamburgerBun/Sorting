#include <iostream>

int main() {
    float numbers[15];
    std::cout << "Input: ";

    for (int i = 0; i < 15; ++i) {
        std::cin >> numbers[i];

        for (int j = i; j > 0; --j) {
            if (numbers[j] > numbers[j - 1]) {
                std::swap(numbers[j], numbers[j - 1]);
            } else {
                break;
            }
        }
    }

    std::cout << "Output: ";
    for (int i = 0; i < 15; ++i) {
        std::cout << numbers[i] << " ";
    }
}