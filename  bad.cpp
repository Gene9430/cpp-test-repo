#include <iostream>
#include <cstdint>
#include <limits>

//  std::uint64_t GetFibonacci(unsigned int n) { // Òàê äåëàòü ÍÅËÜÇß!!!
//      if (n == 0 || n == 1)
//          return n;
//      else
//          return GetFibonacci(n-1) + GetFibonacci(n-2);
//}

std::uint64_t GetFibonacci(unsigned int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    std::uint64_t prev = 0; // F(0)
    std::uint64_t curr = 1; // F(1)
    for (unsigned int i = 2; i <= n; ++i) {
        std::uint64_t next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << GetFibonacci(n) << std::endl;
}