#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        if (n <= 2) {
            // No valid triplet is possible for n <= 2
            std::cout << "NO" << std::endl;
        } else {
            // Find three numbers that sum up to n and are not divisible by 3
            int x, y, z;
            if (n % 3 == 0) {
                // If n is divisible by 3, choose (n-1)/2, (n-1)/2, 1
                x = (n - 1) / 2;
                y = (n - 1) / 2;
                z = 1;
            } else {
                // If n is not divisible by 3, choose n-2, 1, 1
                x = n - 2;
                y = 1;
                z = 1;
            }

            // Output the result
            std::cout << "YES" << std::endl;
            std::cout << x << " " << y << " " << z << std::endl;
        }
    }

    return 0;
}
