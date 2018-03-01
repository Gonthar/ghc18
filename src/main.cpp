#include <iostream>
#include "RidePlanner.h"

int main() {
    long long score = 0;

    RidePlanner::GetInstance().ReadFromStdin();
    RidePlanner& rp = RidePlanner::GetInstance();

    rp.PrintResult();
    std::cout << "\n" << "score: " << score << "\n";
    return 0;
}