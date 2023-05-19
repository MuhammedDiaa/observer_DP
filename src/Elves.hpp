#pragma once
#include "WeatherObserver.hpp"
#include "WindObserver.hpp"
#include "Logger.hpp"

class Elves : public WeatherObserver , public WindObserver
{
public:
  void update(WeatherType currentWeather) override
  {
    LOGGER("The elves are facing %s weather now", currentWeather.getDescription().c_str());
    // specific elves behaviour
  }

  void update(size_t currentWindSpeed) override
  {
    LOGGER("The elves are observing wind speed: %lu", currentWindSpeed);
    // specific orcs behaviour
  }
};
