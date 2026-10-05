#include "fantasy_dragon.hpp"

// Define FantasyDragon's methods here

FantasyDragon::FantasyDragon(const std::string& name, std::size_t age, std::size_t size)
    : Dragon(name, age, size) {}

void FantasyDragon::Eat(std::list<Food>& food)
{
    for (auto it = food.begin(); it != food.end(); )
    {
        if (it->type == People || it->type == PeopleFood)
        {
            std::cout << "Fantasy dragon ate: " << it->name << std::endl;
            ++size_;
            it = food.erase(it);
        }
        else
        {
            ++it;
        }
    }
}

void FantasyDragon::Hoard(std::list<Treasure>& treasures)
{
    for (auto it = treasures.begin(); it != treasures.end(); )
    {
        if (it->type == Jewellery)
        {
            std::cout << "Fantasy dragon received: " << it->name << std::endl;
            this->treasures_.push_back(*it);
            it = treasures.erase(it);
        }
        else
        {
            ++it;
        }
    }
}