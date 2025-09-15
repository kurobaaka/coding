#include <iostream>
#include <cmath>

    double Prikol(double x) {
        if (x <= -1 || x >= 1) {
            std::cout << "number is invalid" << std::endl;
            return 0;
        }
        return -log(1 -x);
    };
    int main() {   
    double x;
    std::cout << "write x ";
    std::cin >> x;
    double res = Prikol(x);
    std::cout << "result: " << res << std::endl;
    }

    // std::log10(1-x)
