//
// Created by maciek on 01.03.18.
//

#ifndef GHC18_RIDE_H
#define GHC18_RIDE_H

#include <memory>


class Ride {
public:
    int startRow;
    int startColumn;
    int endRow;
    int endColumn;
    int earliestStart;
    int latestFinish;

    Ride(int, int, int, int, int, int);
};


#endif //GHC18_RIDE_H
