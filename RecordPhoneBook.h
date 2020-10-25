#pragma once

#include <vector>
#include <string>
#include "Phone.h"
#include "Address.h"
#include "Person.h"

using namespace std;

class RecordPhoneBook {
public:
    Person person;
    vector<Phone> phones;
    vector<Address> addresses;
    string group;

    RecordPhoneBook(){}
    RecordPhoneBook(Person person,vector<Phone> phones, vector<Address> addresses, string group){
        this->phones=phones;
        this->addresses=addresses;
        this->phones=phones;
        this->group=group;
    }
};

