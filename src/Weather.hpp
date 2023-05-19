#pragma once
#include "WeatherType.hpp"
#include "WeatherObserver.hpp"
#include "Logger.hpp"
#include <vector>
#include <memory>
#include <random>
#include <Publisher.hpp>

class Weather : public Publisher<WeatherObserver>
{
    WeatherType currentWeather;

public:
    Weather()
    {
        currentWeather = WeatherType::SUNNY;
    }

    /**
     * Makes time pass for weather.
     */
    void timePasses()
    {
        currentWeather = WeatherType(rand() % 2);
        LOGGER("The weather changed to %s", currentWeather.getDescription().c_str());
        notifyObservers();
    }

    void notifyObserver(WeatherObserver& obs) override
    {
        obs.update(currentWeather);
    }
};