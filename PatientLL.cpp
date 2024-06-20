//
// Created by User on 20/06/2024.
//

#include "PatientLL.h"
#include <iostream>

using namespace std;

// Default constructor

PatientLL::PatientLL() : patient_id(0), next(NULL) {}

// Parameterized constructor

PatientLL::PatientLL(int patient_id, string name, string dob, string gender) {
    this->patient_id = patient_id;
    this->name = name;
    this->dob = dob;
    this->gender = gender;
    this->next = NULL;
}

int PatientLL::getId() const { return patient_id; }
void PatientLL::setId(int id) { this->patient_id = id; }

string PatientLL::getName() const { return name; }
void PatientLL::setName(const string& name) { this->name = name; }

string PatientLL::getDateOfBirth() const { return dob; }
void PatientLL::setDateOfBirth(const string& dateOfBirth) { this->dob = dateOfBirth; }

string PatientLL::getGender() const { return gender; }
void PatientLL::setGender(const string& gender) { this->gender = gender; }



void PatientLL::printData() const {
    cout << "Patient ID " << this->getId() << "," << "Name: " << this->getName() << "," << "DOB: " << this->getDateOfBirth() << "," << "Gender: " << this->getGender() << "\n";
}







