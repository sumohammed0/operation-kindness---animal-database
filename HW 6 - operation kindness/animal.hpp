//  animal.hpp
//  HW 6 - operation kindness
//  Safa Mohammed & Pranavi Kanderi
//  04/20/2022
//  Change Log : 04/21 - added ability to read values from csv file
//               04/22 - made animal class and introduction routine
//               04/23 - fixed some ide issues
//               04/25 - added cat class and dog class, set default values, sorted into vectors, printed cat and dog reports
//               04/27 - added ability to record cat and dog number, printed other animals report and nbr of animal report


#ifndef animal_hpp
#define animal_hpp

#include <string>
#include <stdio.h>

using namespace std;

class Animal {
private:
    string Type;
    string Name;
    int Age;
    int Weight;
    string Breed;
    string Color;
    string Health;
    string Sound;
    static int NbrOfAnimals;
    int AnimalNumber;

public:
    // default constructor
    Animal() {
        Type = "";
        Name = "";
        Age = -1;
        Weight = -1;
        Breed = "";
        Color = "";
        Health = "";
        Sound = "";
    }
    
    // set constructor
    Animal(string type, string name, int age, int weight, string breed, string color, string health, string sound) {
        Type = type;
        Name = name;
        Age = age;
        Weight = weight;
        Breed = breed;
        Color = color;
        Health = health;
        Sound = sound;
        NbrOfAnimals++;
        setAnimalNumber();
        
        //set default values
        if (Sound == "" || Sound == "\r") {
            setSound ("unknown");
        }
        
        if (Breed == "") {
            setBreed("Unknown");
        }
        
        if (Type == "") {
            setType("Unknown");
        }
        
        if (Name == "") {
            setName("Unknown");
        }
        
        if (Color == "") {
            setColor("Unknown");
        }
        
        if (Health == "") {
            setHealth("Unknown");
        }
        
        
    }
    
    
// mutators or setters
    void setBreed(string b)  {Breed = b;}
    void setSound (string s) {Sound = s;}
    void setName (string s) {Name = s;}
    void setColor (string s) {Color = s;}
    void setHealth (string s) {Health = s;}
    void setType (string s) {Type = s;}
    
// accessors or getters
    string getType() {return Type;}
    string getName() {return Name;}
    string getBreed() {return Breed;}
    string getColor() {return Color;}
    string getHealth() {return Health;}
    string getSound() {return Sound;}
    int GetAnimalNbr() {return AnimalNumber;}
    int GetNumberOfAnimals() {return NbrOfAnimals;}
    
// functions
    virtual void setAnimalNumber();
    void Introduction();
    
};

#endif /* animal_hpp */
