#pragma once
#include "WeatherObserver.hpp"
#include "WindObserver.hpp"
#include "Logger.hpp"

class Hobbits : public WeatherObserver , public WindObserver
{
public:
    void update(WeatherType currentWeather) override
    {
        LOGGER("The hobbits are facing %s weather now", currentWeather.getDescription().c_str());
        // specfic Hobbits behaviour..............
    }

    void update(size_t currentWindSpeed) override {
    LOGGER("The Hobbits are observing wind speed: %lu", currentWindSpeed);
    // specific orcs behaviour
    }

    // ....
    // ...
    // ....
};