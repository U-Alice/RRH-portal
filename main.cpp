#include <iostream>
#include <limits>
#include <string>

#include "DoctorLL.h"
#include "ManageLists.h"
#include "PatientLL.h"
#include "AppointmentLL.h"

using namespace std;

void display_patients(PatientLL* head) {
    cout << "PATIENTS\n------------------\n";

    // Check if the list is empty
    if (head == NULL) {
        cout << "No patients found.\n";
        return;
    }

    // Traverse the list and print patient data
    while (head != NULL) {
        head->printData();
        head = head->next;
    }
}

void display_doctors(DoctorLL* head) {
    cout << "DOCTORS\n-------------------\n";

    // Check if the list is empty
    if (head == NULL) {
        cout << "No doctors found.\n";
        return;
    }

    // Traverse the list and print doctor data
    while (head != NULL) {
        head->printData();
        head = head->next;
    }
}

void display_appointments(AppointmentLL* head) {
    cout << "APPOINTMENTS\n------------------\n";

    // Check if the list is empty
    if (head == NULL) {
        cout << "No appointments found.\n";
        return;
    }

    // Traverse the list and print appointment data
    while (head != NULL) {
        head->printData();
        head = head->next;
    }
}

PatientLL* register_patient(PatientLL* head) {
    cout << "PATIENT REGISTRATION\n------------------------\n";
    int id;
    string name, dob, gender;

    id:
        cout << "ID: ";
        cin >> id;
        if(ManageLists::patientExists(head,id)) {
            cout << "Id already registered, please change!\n";
            goto id;
        }


    cout << "NAME: ";
    cin >> name;
    cout << "DoB: ";
    cin >> dob;
    cout << "Gender: ";
    cin >> gender;

    PatientLL* patient = new PatientLL(id, name, dob, gender);
    head = ManageLists::addPatient(head, patient);
    return head;
}

DoctorLL* register_doctor(DoctorLL* head) {
    cout << "DOCTOR REGISTRATION\n------------------------\n";
    int id;
    string name, specialization;

    id:
        cout << "ID: ";
    cin >> id;
    if(ManageLists::doctorExists(head,id)) {
        cout << "Id already registered, please change! \n";
        goto id;
    }

    cout << "NAME: ";
    cin >> name;
    cout << "Specialization: ";
    cin >> specialization;

    DoctorLL* doctor = new DoctorLL(id, name, specialization);
    head = ManageLists::addDoctor(head, doctor);
    return head;
}

AppointmentLL* register_appointment(DoctorLL* doctor_ll, PatientLL* patient_ll, AppointmentLL* head) {
    cout << "APPOINTMENT REGISTRATION\n------------------------\n";
    int appointment_id, patient_id, doctor_id;
    string appointment_date;


    id:
        cout << "ID: ";
        cin >> appointment_id;
    if(ManageLists::appointmentExists(head,appointment_id)) {
        cout << "Id already registered, please change \n";
        goto id;
    }




    check:
        cout << "P_ID: ";
        cin >> patient_id;
        if(!ManageLists::patientExists(patient_ll,patient_id)) {
            cout << "Patient Id not registered, please change\n";
            goto check;
        }

    check2:
        cout << "D_ID: ";
        cin >> doctor_id;
        if(!ManageLists::doctorExists(doctor_ll,doctor_id)) {
            cout << "Doctor Id not registered, please change\n";
            goto check2;
        }

    cout << "DATE: ";
    cin >> appointment_date;

    AppointmentLL* appointment = new AppointmentLL(appointment_id, patient_id, doctor_id, appointment_date);
    head = ManageLists::addAppointment(head, appointment);
    return head;
}

int main() {
    // Intro and Menu display
    bool done = false;
    PatientLL* patient_ll = NULL;
    DoctorLL* doctor_ll = NULL;
    AppointmentLL* appointment_ll = NULL;
    cout << "*******************Welcome To RRH Portal*******************" << endl << endl;
    while (!done) {

        cout << "Menu:\n1. Register a Patient\n2. Register a Doctor\n3. Register an appointment\n4. Display Patients\n5. Display Doctors\n6. Display Appointments\n7. Exit\n";

        int action;


        cout << "Enter your choice: ";
        cin >> action;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (action) {
            case 1:
                patient_ll = register_patient(patient_ll);
                break;
            case 2:
                doctor_ll = register_doctor(doctor_ll);
                break;
            case 3:
                appointment_ll = register_appointment(doctor_ll,patient_ll, appointment_ll);
                break;
            case 4:
                display_patients(patient_ll);
                break;
            case 5:
                display_doctors(doctor_ll);
                break;
            case 6:
                display_appointments(appointment_ll);
                break;
            case 7:
                cout << "**********THANK YOU FOR USING RHH PORTAL, see you!!**********\n";
                done = true;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
    return 0;
}
