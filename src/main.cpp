#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <csetjmp>
#include "Weather.hpp"
#include "Wind.hpp"
#include "Orcs.hpp"
#include "Hobbits.hpp"
#include "Elves.hpp"

int main()
{
    Weather weather;
    Wind wind;
    std::shared_ptr<Orcs> orc = std::make_shared<Orcs>();
    std::shared_ptr<Hobbits> hobbit = std::make_shared<Hobbits>();
    std::shared_ptr<Elves> elves = std::make_shared<Elves>();

    weather.addObserver(orc);
    weather.addObserver(hobbit);
    weather.addObserver(elves);

    wind.addObserver(orc);
    wind.addObserver(hobbit);
    wind.addObserver(elves);

    weather.timePasses();
    wind.timePasses();
    weather.timePasses();
    wind.timePasses();
    return 0;
}













double my_sqrt(double x) {
    
    auto is_good_enough = [x](double guess) -> bool {
        constexpr double epsilon = 0.0000001;
        return std::abs((guess * guess) - x) < epsilon; // check if guess^2 is almost equal to x
    };

    auto improve_guess = [x](double guess) -> double  {
        const double quotient = x / guess;
        const double average = (quotient + guess) / 2;
        return average;
    };

    double guess = x / 2;  // our initial guess is half the original number
    while (true) {
        if (is_good_enough(guess)) break;
        guess = improve_guess(guess);
    }
    return guess;
}