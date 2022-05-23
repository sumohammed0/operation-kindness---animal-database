//  dog.hpp
//  Safa Mohammed & Pranavi Kanderi
//  04/20/2022
//  Change Log : 04/21 - added ability to read values from csv file
//               04/22 - made animal class and introduction routine
//               04/23 - fixed some ide issues
//               04/25 - added cat class and dog class, set default values, sorted into vectors, printed cat and dog reports
//               04/27 - added ability to record cat and dog number, printed other animals report and nbr of animal report



#ifndef dog_hpp
#define dog_hpp

#include "animal.hpp"
#include <string>
#include <stdio.h>

using namespace std;
class Dog : public Animal {
    
private:
    static int NbrOfDogs;
    int DogNumber;
    
public:
    // default constructor
    Dog () : Animal() {

    }
    
    // set constructor
    Dog (string type, string name, int age , int weight , string breed , string color , string health , string sound) : Animal(type, name, age, weight, breed, color, health, sound) {
        
        // for each dog created increment nbr of class
        NbrOfDogs++;
        setDogNumber();
        
        if (sound == "" || sound == "\r") {
             setSound ("woof");
         }
        
    }
    
    // setters
    void setDogNumber();
    
    // getters
    int GetDogNbr() {return DogNumber;}
    int GetNumberOfDogs() {return NbrOfDogs;}
    
    // functions
    void Introduction();
};

#endif /* dog_hpp */
