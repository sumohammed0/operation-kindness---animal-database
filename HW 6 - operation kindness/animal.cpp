//  animal.cpp
//  Safa Mohammed & Pranavi Kanderi
//  04/20/2022
//  Change Log : 04/21 - added ability to read values from csv file
//               04/22 - made animal class and introduction routine
//               04/23 - fixed some ide issues
//               04/25 - added cat class and dog class, set default values, sorted into vectors, printed cat and dog reports
//               04/27 - added ability to record cat and dog number, printed other animals report and nbr of animal report


#include "animal.hpp"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// initialize to zero
int Animal::NbrOfAnimals = 0;

void Animal::setAnimalNumber() {
    AnimalNumber = NbrOfAnimals;
}

// introduce the animal
void Animal::Introduction() {
    cout << "My name is " << Name << endl;
    cout << "I am a(an) " << Type << endl;
    cout << "I am " << Age << " years old." << endl;
    cout << "I weigh " << Weight << " pounds."<< endl;
    cout << "Breed: " << Breed << endl;
    cout << "My color is " << Color << endl;
    cout << "Health: " << Health << endl;
    cout << "I make the sound " << Sound << endl;
    cout << "I am animal number " << AnimalNumber << endl;
}

