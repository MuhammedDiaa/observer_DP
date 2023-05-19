#pragma once
#include <string>



class WeatherType
{
    size_t enum_val;
public:
    static constexpr size_t SUNNY = 0;
    static constexpr size_t RAINY = 1;
    WeatherType() : enum_val(SUNNY)
    {
        
    }
    WeatherType(size_t val) : enum_val(val)
    {
        
    }
    std::string getDescription()
    {
        switch(enum_val)
        {
            case SUNNY:
                return "SUNNY";
            case RAINY:
                return "RAINY";
        }
        return "";
    }

    operator size_t() const
    {
        return enum_val;
    }

    
};