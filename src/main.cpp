#include <iostream>
#include "GoogleFactory.h"

int main() {
    long long score = 0;

    GoogleFactory::GetInstance().ReadFromStdin();
    GoogleFactory& gf = GoogleFactory::GetInstance();

    gf.PrintResult();
    std::cout << "\n" << "score: " << score << "\n";
    return 0;
}