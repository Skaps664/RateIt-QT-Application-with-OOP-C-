#ifndef HOSTEL_H
#define HOSTEL_H
#include <string>
#include "maininfo.h"



class Hostel: public mainInfo
{
private:

    std::string hostelName;
    float timeSpent; // months
    std::string hostelLocation;
    std::string comment;

public:
    Hostel();

    Hostel(std::string hn, float t, std::string hl, std::string c);

    void set_hostleName(std::string hn);
    void set_timeSpent(int t);
    void set_hostelLocation(std::string hl);
    void set_comment(std::string c);

};

#endif // HOSTEL_H
