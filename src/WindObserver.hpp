#pragma once


// interface class
// observer base
class WindObserver {
public:
  virtual void update(size_t windSpeed) = 0;
};

