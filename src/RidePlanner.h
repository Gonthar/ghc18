//
// Created by maciek on 01.03.18.
//

#ifndef GHC18_GOOGLEFACTORY_H
#define GHC18_GOOGLEFACTORY_H

#include <string>

class RidePlanner {
public:
    std::string DataString;

//        std::vector<std::shared_ptr<Video> > Videos;
//        std::vector<std::shared_ptr<Endpoint> > Endpoints;
//        std::vector<std::shared_ptr<Cache> > Caches;

    void ReadFromStdin();
    void PrintResult();
    static RidePlanner& GetInstance()
    {
        static RidePlanner instance;
        return instance;
    }

};

#endif //GHC18_GOOGLEFACTORY_H
