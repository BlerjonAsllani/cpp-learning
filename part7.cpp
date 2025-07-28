#include <iostream>

int main() {

    //double x = (int) 3.14;
    //std::cout << x << '\n';

    //char x = 100;
    //std::cout << (char) 126 << '\n';

    int correct = 9;
    int questions = 10;
    double score = (double) correct / questions * 100;
    std::cout << "Score: " << score << '%' << '\n';
}