#include "university.h"

University::University() {}

University::University(std::string u, int s, std::string d, std::string c){

    this->uniName = u;
    this->semester = s;
    this->department = d;
    this->comment = c;
}

void University::set_uniName(std::string u){
    this->uniName = u;
}


void University::set_semester(int s){
    this->semester = s;
}


void University::set_department(std::string d){
    this->department = d;
}


void University::set_comment(std::string c){
    this->comment = c;
}
