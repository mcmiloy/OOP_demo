#include "uni.hpp"


Person::Person(string name, string addresse, std::string fb){
    this->name = name;
    this->addresse = addresse;
    this->fb = fb;
}

Person::~Person(){
    cout << this->name << " gibt's nicht mehr" << endl;
}

void Person::atmen(){
    cout << "Tief Luft holen." << endl;
}

string Person::get_name(){
    return this->name;
}

void Person::set_name(string new_name){
    cout << "Your old name was: " << this->name << endl;
    this->name = new_name;
    cout << "You are now called: " << this->name << endl;
}

void Person::print_me(){
    cout << "Ich heisse " << this->name
        << ", ich wohne in " << this->addresse
        << ", ich bin am Fachbereich " << this->fb << endl;
}

Angestellter::Angestellter(string name, string addresse, string fb, int gehalt) :
    Person::Person(name, addresse, fb){
    this->gehalt = gehalt;
}

Angestellter::~Angestellter(){
    cout << this->get_name() << " hat gekuendigt" << endl;
}

void Angestellter::bewerten(){
    cout << "Du hast eine gute Note!" << endl;
}

void Angestellter::print_me(){
        Person::print_me();
        cout << "Ich verdiene " << this->gehalt << " Euro" << endl;
}

Studi::Studi(string name, string addresse, string fb, int mn) : 
    Person::Person(name, addresse, fb){
        this->mn = mn;
}

void Studi::studieren(){
    cout << "Gruebel gruebel" << endl;
}

int Studi::zahlen_addieren(int a, int b){
    return a + b;
}