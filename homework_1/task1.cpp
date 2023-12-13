#include <iostream>
#include <cmath>
#define EPS 0.000001

int main(){

    double N, x, y, calc_rad;
    std::cout << "Please enter size of figure N: " << std::endl;
    std::cin >> N;
    std::cout << "Please enter coordinate x: " << std::endl;
    std::cin >> x;
    std::cout << "Please enter coordinate y: " << std::endl;
    std::cin >> y;

    // First and Third quadrant
    if ((x > 0 && y > 0) || (x < 0 && y < 0))
    {
        N = fabs(N);
        x = fabs(x);
        y = fabs(y);
        if (x > N && y > N){
            std::cout << "Outside" << std::endl;
        }
        if (x < N && y < N){
            std::cout << "Inside" << std::endl;
        }
        if (x == N){
            if (y <= N){
                std::cout << "At the line" << std::endl;
            } else {
                std::cout << "Outside" << std::endl;
            }
        }
        if (y == N){
            if (x <= N){
                std::cout << "At the line" << std::endl;
            } else {
                std::cout << "Outside" << std::endl;
            }
        }
    }

    // Second and Forth quadrant
    if ((x < 0 && y > 0) || (x > 0 && y < 0))
    {
        N = fabs(N);
        x = fabs(x);
        y = fabs(y);
        calc_rad = sqrt((x*x)+(y*y));
        std::cout << "Radius: " << calc_rad << std::endl;
        if(calc_rad > N){
            std::cout << "Outside" << std::endl;
        } else if(abs(calc_rad - N) <= EPS){
            std::cout << "At the line" << std::endl;
        } else {
            std::cout << "Inside" << std::endl;
        }
    }

    return 0;
}