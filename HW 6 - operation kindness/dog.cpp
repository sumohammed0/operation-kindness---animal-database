//  dog.cpp
//  Safa Mohammed & Pranavi Kanderi
//  04/20/2022
//  Change Log : 04/21 - added ability to read values from csv file
//               04/22 - made animal class and introduction routine
//               04/23 - fixed some ide issues
//               04/25 - added cat class and dog class, set default values, sorted into vectors, printed cat and dog reports
//               04/27 - added ability to record cat and dog number, printed other animals report and nbr of animal report



#include "dog.hpp"
#include "animal.hpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int Dog::NbrOfDogs = 0;

void Dog::setDogNumber() {
    DogNumber = NbrOfDogs;
}

void Dog::Introduction() {
    Animal::Introduction();
    cout << "I am dog number " << DogNumber << endl;
}
