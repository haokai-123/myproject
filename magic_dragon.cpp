#include "magic_dragon.hpp"

// Define MagicDragon's methods here
MagicDragon::MagicDragon(const std::string& name, std::size_t age, std::size_t size)
    : Dragon(name, age, size) {}

void MagicDragon::Eat(std::list<Food>& food)
{
    for (auto it = food.begin(); it != food.end(); )
    {
        if (it->type == Herbs)
        {
            std::cout << "Magic dragon ate: " << it->name << std::endl;
            ++size_;
            it = food.erase(it);
        }
        else
        {
            ++it;
        }
    }
}

void MagicDragon::Hoard(std::list<Treasure>& treasures)
{
    for (auto it = treasures.begin(); it != treasures.end(); )
    {
        if (it->type == Potions)
        {
            std::cout << "Magic dragon received: " << it->name << std::endl;
            this->treasures_.push_back(*it);
            it = treasures.erase(it);
        }
        else
        {
            ++it;
        }
    }
}