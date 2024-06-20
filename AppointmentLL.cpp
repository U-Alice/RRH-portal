//
// Created by User on 20/06/2024.
//

#include "AppointmentLL.h"

AppointmentLL::AppointmentLL() : appointment_id(0), doctor_id(0), patient_id(0), next(NULL) {}

// Parameterized constructor

AppointmentLL::AppointmentLL(int appointment_id, int patient_id,int doctor_id, string appointment_date) {
    this->appointment_id = appointment_id;
    this->patient_id = patient_id;
    this->doctor_id = doctor_id;
    this->appointment_date = appointment_date;
    this->next = NULL;
}

int AppointmentLL::getId() const { return appointment_id; }
void AppointmentLL::setId(int id) { this->appointment_id = id; }

int AppointmentLL::getPatient() const { return patient_id; }
void AppointmentLL::setPatient(int id) { this->patient_id = id; }

int AppointmentLL::getDoctor() const { return doctor_id; }
void AppointmentLL::setDoctor(int id) { this->doctor_id = id; }

string AppointmentLL::getDate() const { return appointment_date; }
void AppointmentLL::setDate(const string& appointment_date) { this->appointment_date = appointment_date; }



void AppointmentLL::printData() const {
    cout << "Appointment ID " << appointment_id << "," << "Patient Id: " << patient_id << "," << "Doctor ID: " << doctor_id << "," << "DATE: " << appointment_date << "\n";
}