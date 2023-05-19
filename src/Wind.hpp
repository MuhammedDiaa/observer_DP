#pragma once
#include "WindObserver.hpp"
#include "Logger.hpp"
#include <vector>
#include <memory>
#include <random>
#include <Publisher.hpp>

class Wind : public Publisher<WindObserver>
{
    size_t currentWindSpeed;

public:
    Wind() : currentWindSpeed(0) {}

    void timePasses()
    {
        currentWindSpeed = rand();
        LOGGER("The wind speed changed to %lu", currentWindSpeed);
        notifyObservers();
    }

    void notifyObserver(WindObserver &obs) override
    {
        obs.update(currentWindSpeed);
    }
};