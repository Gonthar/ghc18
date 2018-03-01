//
// Created by maciek on 01.03.18.
//

#include "Ride.h"

Ride::Ride(int startRow, int startColumn, int endRow, int endColumn, int earliestStart, int latestFinish) {
    this->startRow = startRow;
    this->endRow = endRow;
    this->startColumn = startColumn;
    this->endColumn = endColumn;
    this->earliestStart = earliestStart;
    this->latestFinish = latestFinish;
}