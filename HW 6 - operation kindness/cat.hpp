//  cat.hpp
//  Safa Mohammed & Pranavi Kanderi
//  04/20/2022
//  Change Log : 04/21 - added ability to read values from csv file
//               04/22 - made animal class and introduction routine
//               04/23 - fixed some ide issues
//               04/25 - added cat class and dog class, set default values, sorted into vectors, printed cat and dog reports
//               04/27 - added ability to record cat and dog number, printed other animals report and nbr of animal report


#ifndef cat_hpp
#define cat_hpp
#include "animal.hpp"
#include <string>
#include <stdio.h>


using namespace std;
class Cat : public Animal {
private:
    static int NbrOfCats;
    int CatNumber;
    
public:
    // default constructor
    Cat () : Animal() {

    }
    
    Cat (string type, string name, int age , int weight , string breed , string color , string health , string sound) : Animal(type, name, age, weight, breed, color, health, sound) {
        
        // for each cat created increment nbr of class
        NbrOfCats++;
        setCatNumber();
        
        // for a cat if there is no sound set to a default cat sound
        if (sound == "" || sound == "\r") {
            setSound ("meowww");
           
       }
        
    }
    
    //setters
    void setCatNumber();
    
    //getters
    int GetCatNbr() {return CatNumber;}
    int GetNumberOfCats() {return NbrOfCats;}
    
    //functions
    void Introduction();
};

#endif /* cat_hpp */
