//
// Created by User on 20/06/2024.
//

#ifndef MANAGELISTS_H
#define MANAGELISTS_H
#include "AppointmentLL.h"
#include "DoctorLL.h"
#include "PatientLL.h"


class ManageLists {
public:
    static PatientLL* addPatient( PatientLL *head,  PatientLL* patient) ;
    static void displayPatients (PatientLL *head);

    static DoctorLL* addDoctor( DoctorLL *head,  DoctorLL* patient) ;
    static void displayDoctors (DoctorLL *head);

    static AppointmentLL* addAppointment( AppointmentLL *head,  AppointmentLL* patient) ;
    static void displayAppointments(AppointmentLL *head);

    static bool patientExists(PatientLL* head, int patientId);
    static bool doctorExists(DoctorLL* head, int doctorId);
    static bool appointmentExists(AppointmentLL* head, int appointmentId);

};



#endif //MANAGELISTS_H
