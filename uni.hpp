#ifndef UNI_HPP
#define UNI_HPP

#include <string>
#include <vector>
#include <iostream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Person {
    private:
        string name;
        string addresse;
        string fb;
    public:
        Person(string, string, string);
        string get_name();
        void set_name(string);
        virtual ~Person();
        void atmen();
        void print_me();
};


class Angestellter : public Person {
    private:
        int gehalt;
    public:
        Angestellter(string, string, string, int);
        ~Angestellter();
        void bewerten();
        void print_me();
};

class Studi : public Person {
    private:
        int mn;
    public:
        Studi(string, string, string, int);
        void studieren();
        int zahlen_addieren(int, int);
};

#endif