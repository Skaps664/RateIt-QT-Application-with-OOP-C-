#include "hostel.h"
#include <string>


Hostel::Hostel(){}

Hostel::Hostel(std::string hn, float t, std::string hl, std::string c){

    this->hostelLocation = hl;
    this->hostelName = hn;
    this->comment = c;
    this->timeSpent = t;
}

void Hostel::set_hostleName(std::string hn){
    this->hostelName = hn;
}


void Hostel::set_timeSpent(int t){
    this->timeSpent = t;
}


void Hostel::set_hostelLocation(std::string hl){
    this->hostelLocation = hl;
}


void Hostel::set_comment(std::string c){
    this->comment = c;
}

