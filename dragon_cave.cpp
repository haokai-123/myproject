#include "dragon_cave.hpp"

// Define DragonCave's methods here
DragonCave::DragonCave() {}

DragonCave::~DragonCave()
{
    for (Dragon* it : dragons_)
    {
        delete it;
    }
}

const std::list<Dragon*>& DragonCave::GetDragons() const
{
    return dragons_;
}

void DragonCave::Accommodate(Dragon* dragon)
{
    dragons_.push_back(dragon);
}

void DragonCave::Evict(const std::string& name)
{
    for (auto it = dragons_.begin(); it != dragons_.end(); ++it)
    {
        if ((*it)->GetName() == name)
        {
            dragons_.erase(it);
            return;
        }
    }
}

std::ostream& operator<<(std::ostream& os, const DragonCave& cave)
{
    os << "DragonCave dwellers:\n\n";

    const std::list<Dragon*>& list = cave.GetDragons();

    for (auto it = list.begin(); it != list.end(); ++it)
    {
        if (it != list.begin())
        {
            os << "\n";
        }
        os << **it;
    }

    return os;
}

