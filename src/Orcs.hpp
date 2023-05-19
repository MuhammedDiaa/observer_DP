#pragma once
#include "WeatherObserver.hpp"
#include "WindObserver.hpp"
#include "Logger.hpp"

class Orcs : public WeatherObserver, public WindObserver
{
public:
  void update(WeatherType currentWeather) override
  {
    LOGGER("The orcs are facing %s weather now", currentWeather.getDescription().c_str());
    // specific orcs behaviour
  }

  void update(size_t currentWindSpeed) override
  {
    LOGGER("The orcs are observing wind speed: %lu", currentWindSpeed);
    // specific orcs behaviour
  }
};
