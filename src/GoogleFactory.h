//
// Created by maciek on 01.03.18.
//

#ifndef GHC18_GOOGLEFACTORY_H
#define GHC18_GOOGLEFACTORY_H

#include <string>

class GoogleFactory {
public:
    std::string DataString;

//        std::vector<std::shared_ptr<Video> > Videos;
//        std::vector<std::shared_ptr<Endpoint> > Endpoints;
//        std::vector<std::shared_ptr<Cache> > Caches;

    void ReadFromStdin();
    void PrintResult();
    static GoogleFactory& GetInstance()
    {
        static GoogleFactory instance;
        return instance;
    }

};

#endif //GHC18_GOOGLEFACTORY_H
