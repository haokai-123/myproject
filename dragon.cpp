#include "dragon.hpp"

Dragon::Dragon(const std::string& name, std::size_t age, std::size_t size)
    : name_(name), age_(age), size_(size) {}

const std::string& Dragon::GetName() const
{
    return name_;
}

std::size_t Dragon::GetAge() const
{
    return age_;
}

std::size_t Dragon::GetSize() const
{
    return size_;
}

const std::list<Treasure>& Dragon::GetTreasures() const
{
    return treasures_;
}

std::ostream& operator<<(std::ostream& os, const Dragon& dragon)
{
    os << "Dragon named: " << dragon.GetName()
       << ", age: " << dragon.GetAge()
       << ", size: " << dragon.GetSize() << "\n";
    os << "Treasures:\n";
    for (const Treasure& t : dragon.GetTreasures())
    {
        os << t.name << "\n";
    }
    return os;
}
