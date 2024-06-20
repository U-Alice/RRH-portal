//
// Created by User on 20/06/2024.
//

#ifndef DOCTORLL_H
#define DOCTORLL_H
#include <iostream>
using namespace std;

class DoctorLL {

private:
    int doctor_id;
    string name;
    string specialization;

public:
    //default constructor

    DoctorLL();

    //parameterized constructor

    DoctorLL(int doctor_id, string name, string specialization);

    // public getters and setters

    int getId() const;
    void setId(int id);

    string getName() const;
    void setName(const string& name);

    string getSpecialization() const;
    void setSpecialization(const string& specialization);

    // next patient node

    DoctorLL* next;

    void printData() const;
};



#endif //DOCTORLL_H
