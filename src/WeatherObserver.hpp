#pragma once
#include "WeatherType.hpp"


// interface class
// observer base
class WeatherObserver {
public:
  virtual void update(WeatherType currentWeather) = 0;
};

