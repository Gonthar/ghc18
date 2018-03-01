//
// Created by maciek on 01.03.18.
//

#include "RidePlanner.h"
#include <iostream>

void RidePlanner::ReadFromStdin()
{
    int a, b, x, y, s, f;

    std::cin >> rows >> columns >> vehiclesCount >> ridesCount >> bonus >> time;



    for (int i = 0; i < vehiclesCount; ++i) {
        Vehicles.emplace_back(std::vector<int>());
    }

    for (int i = 0; i < ridesCount; ++i) {
        std::cin >> a >> b >> x >> y >> s >> f;
        Rides.push_back(std::make_shared<Ride>(a, b, x, y, s, f));
    }
}

void RidePlanner::PrintResult() {

    for (int i = 0; i < vehiclesCount; i++) {
        std::cout << Vehicles[i].size() << " ";
        for (int j = 0; j < Vehicles[i].size(); j++) {
            std::cout << Vehicles[i][j] << " ";
        }
        std::cout << "\n";
    }
}

