//
// Created by maciek on 01.03.18.
//

#ifndef GHC18_GOOGLEFACTORY_H
#define GHC18_GOOGLEFACTORY_H

#include "Ride.h"
#include <string>
#include <bits/shared_ptr.h>
#include <vector>

class RidePlanner {
public:
    int rows;
    int columns;
    int vehiclesCount;
    int ridesCount;
    int bonus;
    int time;

    std::vector<std::shared_ptr<Ride> > Rides;
    std::vector<std::vector<int> > Vehicles;

    void ReadFromStdin();
    void PrintResult();
    static RidePlanner& GetInstance()
    {
        static RidePlanner instance;
        return instance;
    }

};

#endif //GHC18_GOOGLEFACTORY_H
