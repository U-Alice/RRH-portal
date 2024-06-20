//
// Created by User on 20/06/2024.
//

#ifndef PATIENTLL_H
#define PATIENTLL_H
#include <iostream>
using namespace std;

class PatientLL {

// private fields

private:
    int patient_id;
    string name;
    string dob;
    string gender;

public:
    //default constructor

    PatientLL();

    //parameterized constructor

    PatientLL(int patient_id, string name, string dob, string gender);

    // public getters and setters

    int getId() const;
    void setId(int id);

    string getName() const;
    void setName(const string& name);

    string getDateOfBirth() const;
    void setDateOfBirth(const string& dateOfBirth);

    string getGender() const;
    void setGender(const string& name);

    // next patient node

    PatientLL* next;

    void printData() const;


};



#endif //PATIENTSLL_H
