#pragma once
#include <string>
#include "FIO.h"
#include "Date.h"
using namespace std;

class Person {
public:
    FIO name;
    Date dateOfBirth;
    string pathToPhoto;

    Person(){}
    Person(FIO name, Date dateOfBirth, string pathToPhoto){
        this->name=name;
        this->dateOfBirth=dateOfBirth;
        this->pathToPhoto=pathToPhoto;
    }
};


