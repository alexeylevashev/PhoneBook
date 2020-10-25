#pragma once
#include <string>
using namespace std;

class Address {
public:
    string type;
    string country;
    string city;
    string street;
    string house;

    Address() {}
    Address(string type, string country, string city, string street, string house) {
        this->type = type;
        this->city = city;
        this->country = country;
        this->street = street;
        this->house = house;
    }
};



