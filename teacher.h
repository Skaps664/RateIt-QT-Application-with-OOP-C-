#ifndef TEACHER_H
#define TEACHER_H
#include <string>
#include "maininfo.h"

class Teacher: public mainInfo
{
private:

    std::string teacherName;
    int semester;
    std::string subject;
    std::string comment;

public:
    Teacher();

    Teacher(std::string tn, int s, std::string sub, std::string c);

    void set_teacherName(std::string tn);
    void set_semester(int s);
    void set_subject(std::string sub);
    void set_comment(std::string c);

};

#endif // TEACHER_H
