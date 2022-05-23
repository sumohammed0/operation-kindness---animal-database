//  HW 6 - operation kindness
//  Safa Mohammed & Pranavi Kanderi
//  04/20/2022
//  main.cpp
//  Change Log : 04/21 - added ability to read values from csv file
//               04/22 - made animal class and introduction routine
//               04/23 - fixed some ide issues
//               04/25 - added cat class and dog class, set default values, sorted into vectors, printed cat and dog reports
//               04/27 - added ability to record cat and dog number, printed other animals report and nbr of animal report

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"

using namespace std;

void reportData (vector <Animal>allAnimals, vector <Cat>allCats, vector <Dog>allDogs, vector <Animal>adoptableAnimals, vector <Animal>otherAnimals) {
    
    Animal testObject;
    Cat CatTest;
    Dog DogTest;
    
    cout << "Report 1: There are " << testObject.GetNumberOfAnimals() << " total animals" << endl << endl;
    cout << "There are " << CatTest.GetNumberOfCats() << " total cats" << endl;
    cout << "There are " << DogTest.GetNumberOfDogs() << " total dogs" << endl;
    cout << "There are " << testObject.GetNumberOfAnimals() -  CatTest.GetNumberOfCats() - DogTest.GetNumberOfDogs() << " other animals" << endl;
    
    cout << endl;
    
    cout << "Report 2: All cats report: " << endl << endl;
    
    for (int i = 0; i < allCats.size(); i++) {
        allCats[i].Introduction();
        cout << endl;
    }

    cout << "Report 3: All Dogs report: " << endl << endl;
    
    for (int i = 0; i < allDogs.size(); i++) {
        allDogs[i].Introduction();
        cout << endl;
    }

    cout << "Report 4: All other animals report: " << endl << endl;
         
    for (int i = 0; i < otherAnimals.size(); i++ ) {
        otherAnimals[i].Introduction();
        cout << endl;
    }

    cout << "Report 5: Adoptable animals report: " << endl << endl;
    cout << "There are "<< adoptableAnimals.size() <<" adoptable animals." << endl;
    for (int i = 0; i < adoptableAnimals.size(); i++) {
        adoptableAnimals[i].Introduction();
        cout << endl;
    }
          
}

int main() {
    vector <Animal>allAnimals;
    vector <Cat>allCats;
    vector <Dog>allDogs;
    vector <Animal>adoptableAnimals;
    vector <Animal>otherAnimals;
    
    string fileName;
    string line;
    
    ifstream inputFile;
    inputFile.open("Animal Shelter Data-05.csv");
    
    // valid file test
    if (inputFile.fail()) {
        cout << "File failed to open" << endl;
        return 0;
    }
    
    getline(inputFile, line); // ignores the first line
    
    // read data from file
    while (getline(inputFile, line)) {
        // set default values if not there
        string animalType = "" , name = "" , breed = "" , color = "" , health = "" , sound = "", ageString = "" , weightString = "";
        int age = -1, weight = -1;
        
        // read until comma
        stringstream ss(line);
        getline(ss, animalType, ',');
        getline(ss, name, ',');
        getline(ss, ageString, ',');
        // convert to integer
        if (ageString != "")
            age = stoi(ageString);

        getline(ss, weightString, ',');
        // convert to integer
        if (weightString != "")
           weight = stoi(weightString);
    
        getline(ss, breed, ',');
        getline(ss, color, ',');
        getline(ss, health, ',');
        getline(ss, sound, ',');
        
        // cout << age << ", " << weight << endl;  (used for testing)
        
        // for each line read process and create the appropriate corressponding object
        if (animalType == "cat") {
            Cat C1(animalType, name, age, weight, breed, color, health, sound);
            allCats.push_back(C1);
            allAnimals.push_back(C1);
            
            if (C1.getHealth() == "good") {
                adoptableAnimals.push_back(C1);
            }
        }
             
        else if (animalType != "cat" && animalType != "dog") {
            Animal A1(animalType, name, age, weight, breed, color, health, sound);
            otherAnimals.push_back(A1);
            allAnimals.push_back(A1);
            
            if (A1.getHealth() == "good") {
                adoptableAnimals.push_back(A1);
            }
        }
              
        else if (animalType == "dog") {
            Dog D1(animalType, name, age, weight, breed, color, health, sound);
            allDogs.push_back(D1);
            allAnimals.push_back(D1);
            
            if (D1.getHealth() == "good") {
                adoptableAnimals.push_back(D1);
            }
        }
              
        else {
            Animal A1(animalType, name, age, weight, breed, color, health, sound);
            allAnimals.push_back(A1);
             
            if (A1.getHealth() == "good") {
                adoptableAnimals.push_back(A1);
            }
        }
    }
    
// Reports
    reportData (allAnimals, allCats, allDogs, adoptableAnimals, otherAnimals);
    inputFile.close();
          
    return 0;
}
