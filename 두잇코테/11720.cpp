#include <iostream>

int main() {
    int N = 0;
    std::string numbers;
    int sum = 0;
    std::cin >> N;
    std::cin >> numbers;

    for (int i = 0; i < numbers.length(); i++) {
        sum += numbers[i] - '0';
    }
    std::cout << sum << "\n";
}