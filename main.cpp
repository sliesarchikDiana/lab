#include "Blockbuster.h"
#include "SciFi.h"
#include "RomCom.h"
//------------------------------------------------//
int main() {
    Blockbuster avengers("Avengers: Endgame", 181, 356000000, "Russo", "Superheroes save the planet");
    SciFi alien("Alien", 117, 11000000, "Ridley Scott", "A spaceship crew is stalked by an alien");
    RomCom sweetHomeAlabama("Sweet Home Alabama", 108, 30000000, "Andy Tennant", "A woman must choose between two loves.");
//------------------------------------------------//
    avengers.displayInfo();
    alien.displayInfo();
    sweetHomeAlabama.displayInfo();

    return 0;
}
