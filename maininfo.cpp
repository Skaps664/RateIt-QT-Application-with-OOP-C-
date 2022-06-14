#include "maininfo.h"
#include <string>
#include "QMessageBox"
#include "QFile"


mainInfo::mainInfo(){}
mainInfo::mainInfo(std::string fn, std::string ln, int a, std::string i){

    this->age = a;
    this->firstName = fn;
    this->lastName = ln;
    this->institute = i;
}

void mainInfo::set_firstName(std::string fn){
    this->firstName= fn;
}


void mainInfo::set_lastName(std::string ln){
    this->lastName = ln;
}


void mainInfo::set_age(int a){
    this->age = a;
}


void mainInfo::set_institute(std::string i){
    this->institute = i;
}

