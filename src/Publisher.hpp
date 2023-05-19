#pragma once
#include <memory>
#include <vector>

template<typename ObserverInterface>
class Publisher
{
public:
    Publisher() = default;

    void addObserver(std::shared_ptr<ObserverInterface> obs)
    {
        observers.push_back(obs);
    }

    void removeObserver(std::shared_ptr<ObserverInterface> obs)
    {
        //observers.erase(obs);
    }

    void notifyObservers()
    {
        for (auto &obs : observers)
        {
            notifyObserver(*obs); 
        }
    }

    virtual void notifyObserver(ObserverInterface& obs) = 0;
    
private:
    std::vector<std::shared_ptr<ObserverInterface>> observers;
};
