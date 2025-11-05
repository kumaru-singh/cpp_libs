#include <iostream>
#include <bitset>

int main() {
    std::bitset<8> bits("10110101"); // 8-bit binary

    std::cout << "Bitset: " << bits << "\n";       // 10110101
    std::cout << "Number of set bits: " << bits.count() << "\n"; // 5

    return 0;
}

