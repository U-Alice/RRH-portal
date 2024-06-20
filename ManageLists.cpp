//
// Created by User on 20/06/2024.
//

#include "ManageLists.h"
#include "PatientLL.h"

PatientLL* ManageLists::addPatient( PatientLL* head,  PatientLL* patient) {
    if (head == NULL) {
        head = patient;
    } else {
        PatientLL* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = patient;
    }
    return head;

};


void ManageLists::displayPatients(PatientLL *head) {
    PatientLL* temp = head;
    while (temp != NULL) {
        temp->printData();
        temp = temp->next;
    }
}

DoctorLL* ManageLists::addDoctor( DoctorLL* head,  DoctorLL* patient) {
    if (head == NULL) {
        head = patient;
    } else {
        DoctorLL* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = patient;
    }
    return head;

};

void ManageLists::displayDoctors(DoctorLL *head) {
    DoctorLL* temp = head;
    while (temp != NULL) {
        temp->printData();
        temp = temp->next;
    }
}

AppointmentLL* ManageLists::addAppointment( AppointmentLL* head,  AppointmentLL* patient) {
    if (head == NULL) {
        head = patient;
    } else {
        AppointmentLL* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = patient;
    }
    return head;

};

void ManageLists::displayAppointments(AppointmentLL *head) {
    AppointmentLL* temp = head;
    while (temp != NULL) {
        temp->printData();
        temp = temp->next;
    }
}

// template <typename  T>;
// PatientLL* search_linked_list(PatientLL* head, int id) {
//     while (head != NULL) {
//         if (head->getId() == id) {  // Assuming the node has a getID() method to access its ID
//             return head;
//         }
//         head = head->next;
//     }
//     return NULL;
// }

bool ManageLists::patientExists(PatientLL* head, int patientId) {
    PatientLL* temp = head;
    while (temp != NULL) {
        if (temp->getId() == patientId) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool ManageLists::doctorExists(DoctorLL* head, int doctorId) {
    DoctorLL* temp = head;
    while (temp != NULL) {
        if (temp->getId() == doctorId) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool ManageLists::appointmentExists(AppointmentLL* head, int doctorId) {
    AppointmentLL* temp = head;
    while (temp != NULL) {
        if (temp->getId() == doctorId) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}