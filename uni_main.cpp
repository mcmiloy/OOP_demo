#include "uni.hpp"
#include <string>
#include <vector>
#include <iostream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

// Kompilieren: g++ uni_main.cpp uni.cpp

int main(){
    Person emilio("Emilio", "x", "MI");
    Angestellter nathalie("Nathalie", "y", "MI", 1234);
    Studi sunna("Sunna", "z", "MI", 15829);
    emilio.print_me();
    emilio.atmen();
    nathalie.print_me();
    nathalie.bewerten();
    sunna.studieren();

    return 0;
}