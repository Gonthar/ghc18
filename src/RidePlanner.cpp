//
// Created by maciek on 01.03.18.
//

#include "RidePlanner.h"
#include <iostream>

void RidePlanner::ReadFromStdin()
{
    int a, b, x, y, s, f;

    std::cin >> rows >> columns >> vehiclesCount >> rides >> bonus >> time;



    for (int i = 0; i < rides; ++i) {
        std::cin >> a >> b >> x >> y >> s >> f;
        Rides.push_back(std::shared_ptr<Ride>(new Ride(a, b, x, y, s, f)));
    }
//
//    for (int i = 0; i < VideosCount; ++i)
//    {
//        std::cin >> size;
//        Videos.push_back(std::shared_ptr<Video>(new Video(i, size)));
//    }
//
//    for (int i = 0; i < EndpointsCount; ++i) {
//        std::cin >> latency >> size;
//        std::shared_ptr<Endpoint> endpoint(new Endpoint(latency));
//
//        for (int j = 0; j < size; ++j)
//        {
//            std::cin >> cacheId >> latency;
//            endpoint->AddCacheConnection(cacheId, latency);
//            Caches[cacheId]->AddEndpoint();
//        }
//        Endpoints.push_back(std::move(endpoint));
//    }
//
//    for (int i = 0; i < RequestsCount; ++i)
//    {
//        std::cin >> videoId >> endpointId >> requests;
//        Endpoints[endpointId]->AddRequest(videoId, requests);
//        Videos[videoId]->AddEndpointWhichAsksFor(endpointId, requests);
//    }
//

}

void RidePlanner::PrintResult() {

    std::cout << "ppp" << "\n";

//    int count = 0;
//    for (int i = 0; i < CacheCount; ++i) {
//        if (!Caches[i]->videos.empty())
//            count++;
//    }
//    std::cout << count << "\n";
//    for (int i = 0; i < CacheCount; ++i) {
//        if (Caches[i]->videos.empty())
//            continue;
//        std::cout << i;
//        for (int video : Caches[i]->videos)
//            std::cout << " " << Videos[video]->number;
//        std::cout << "\n";
//    }
}

