#include "../headers/Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Foo");

    zombie->announce();
    delete zombie;
    randomChump("Loo");

    return (0);
}