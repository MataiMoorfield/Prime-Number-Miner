#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    int num = 1;

    while (true) {
        if (isPrime(num)) {
            std::cout << num << " ";
            std::cout.flush(); // Flush the output buffer to ensure immediate printing
        }
        ++num;
    }

    return 0;
}
