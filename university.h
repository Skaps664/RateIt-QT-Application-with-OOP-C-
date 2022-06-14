#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
#include "maininfo.h"


class University: public mainInfo
{
private:

    std::string uniName;
    int semester;
    std::string department;
    std::string comment;

public:

    University();

    University(std::string u, int s, std::string d, std::string c);

    void set_uniName(std::string u);
    void set_semester(int s);
    void set_department(std::string d);
    void set_comment(std::string c);

};

#endif // UNIVERSITY_H
