#include <iostream>
#include "fruit.hpp"

size_t Fruit::getPrice() const
{
    if (time_elapsed_ >= expiry_date_)
    {
        return 0;
    }
    return static_cast<size_t>(basePrice_ * ((float)(expiry_date_ - time_elapsed_)) / expiry_date_);
}

Cargo &Fruit::operator--()
{
    if (time_elapsed_ == 0)
    {
        time_elapsed_ = 0;
        std::cout << "Fruit is expired!";
    }
    else
    {
        time_elapsed_ - 1 ;
    }
    return *this;
}

Cargo &Fruit::operator+=(size_t amount)
{
    amount_ += amount;
    return *this;
}

Cargo &Fruit::operator-=(size_t amount)
{

    if (amount_ < amount)
    {
        amount_ = 0;
    }
    else
    {
        amount_ -= amount;
    }
    return *this;
}

bool Fruit::operator==(const Cargo& other) const {
 
    try {
        const Fruit& other_fruit = dynamic_cast<const Fruit&>(other);
        return Cargo::operator==(other) && expiry_date_ == other_fruit.expiry_date_;
    } catch (std::bad_cast&) {
            return false;
    }
}