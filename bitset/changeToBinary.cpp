#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num = 29;
    std::bitset<8> binary(num);

    std::cout << "Binary representation of " << num << " is: " << binary << "\n";
    return 0;
}
