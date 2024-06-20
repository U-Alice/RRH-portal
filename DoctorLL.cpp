//
// Created by User on 20/06/2024.
//

#include "DoctorLL.h"
#include <iostream>
using namespace std;

DoctorLL::DoctorLL() : doctor_id(0), next(NULL) {}

// Parameterized constructor

DoctorLL::DoctorLL(int doctor_id, string name, string specialization) {
    this->doctor_id = doctor_id;
    this->name = name;
    this->specialization = specialization;
    this->next = NULL;
}

int DoctorLL::getId() const { return doctor_id; }
void DoctorLL::setId(int id) { this->doctor_id = id; }

string DoctorLL::getName() const { return name; }
void DoctorLL::setName(const string& name) { this->name = name; }

string DoctorLL::getSpecialization() const { return specialization; }
void DoctorLL::setSpecialization(const string& specialization) { this->specialization = specialization; }



void DoctorLL::printData() const {
    cout << "Patient ID " << doctor_id << "," << "Name: " << name << "," << "Specialization: " << specialization << "\n";
}