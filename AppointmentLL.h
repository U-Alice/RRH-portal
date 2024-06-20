//
// Created by User on 20/06/2024.
//

#ifndef APPOINTMENTLL_H
#define APPOINTMENTLL_H
#include <iostream>
using namespace std;



class AppointmentLL {
private:
    int appointment_id;
    int patient_id;
    int doctor_id;
    string appointment_date;

public:
    //default constructor

    AppointmentLL();

    //parameterized constructor

    AppointmentLL(int appointment_id, int patient_id, int doctor_id, string appointment_date);

    // public getters and setters

    int getId() const;
    void setId(int id);

    int getPatient() const;
    void setPatient(const int patient_id);

    int getDoctor() const;
    void setDoctor(const int doctor_id);

    string getDate() const;
    void setDate(const string& date);

    // next patient node

    AppointmentLL* next;

    void printData() const;
};



#endif //APPOINTMENTLL_H
