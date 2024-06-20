cmake_minimum_required(VERSION 3.28)
project(NE)

set(CMAKE_CXX_STANDARD 17)

add_executable(NE main.cpp
        PatientLL.h
        PatientLL.cpp
        ManageLists.h
        ManageLists.cpp
        DoctorLL.h
        DoctorLL.cpp
        AppointmentLL.h
        AppointmentLL.cpp)
