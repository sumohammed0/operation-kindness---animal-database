//  cat.cpp
//  Safa Mohammed & Pranavi Kanderi
//  04/20/2022
//  Change Log : 04/21 - added ability to read values from csv file
//               04/22 - made animal class and introduction routine
//               04/23 - fixed some ide issues
//               04/25 - added cat class and dog class, set default values, sorted into vectors, printed cat and dog reports
//               04/27 - added ability to record cat and dog number, printed other animals report and nbr of animal report


#include "cat.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include "animal.hpp"

using namespace std;
// initialize NbrOfCats to zero
int Cat::NbrOfCats = 0;

void Cat::setCatNumber() {
    CatNumber = NbrOfCats;
}

// inherit introduction from parent class and added to it for cat class
void Cat::Introduction() {
    Animal::Introduction();
    cout << "I am cat number " << CatNumber << endl;
}

