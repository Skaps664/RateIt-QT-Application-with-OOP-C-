#ifndef MAININFO_H
#define MAININFO_H
#include <string>


class mainInfo
{
protected:

    std::string firstName;
    std::string lastName;
    int age;
    std::string institute;

public:
    mainInfo();

    mainInfo(std::string fn, std::string ln, int a, std::string i);

    void set_firstName(std::string fn);
    void set_lastName(std::string ln);
    void set_age(int a);
    void set_institute(std::string i);
};

#endif // MAININFO_H
