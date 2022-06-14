#include "teacher.h"

Teacher::Teacher(){}

Teacher::Teacher(std::string tn, int s, std::string sub, std::string c){

    this->teacherName = tn;
    this->semester = s;
    this->subject = sub;
    this->comment = c;
}

void Teacher::set_teacherName(std::string tn){
    this->teacherName = tn;
}


void Teacher::set_semester(int s){
    this->semester = s;
}


void Teacher::set_subject(std::string sub){
    this->subject = sub;
}


void Teacher::set_comment(std::string c){
    this->comment = c;
}
