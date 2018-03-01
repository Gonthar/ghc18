#include <iostream>
#include "RidePlanner.h"

void writeRides(RidePlanner& rp) {
    for (int i = 0; i < rp.ridesCount; ++i) {
        rp.Vehicles[i % rp.vehiclesCount].emplace_back(i);
    }
}

int main() {
    long long score = 0;

    RidePlanner::GetInstance().ReadFromStdin();
    RidePlanner& rp = RidePlanner::GetInstance();

    writeRides(rp);

    rp.PrintResult();
    std::cout << "\n" << "score: " << score << "\n";
    return 0;
}