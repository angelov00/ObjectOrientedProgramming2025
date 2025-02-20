#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_

#include <cstring>
#include <iostream>

struct Employee {
    char name[50];
    char position[50];
    double salary;
    int workExperience;

    Employee() : salary(0.0), workExperience(0) {
        name[0] = '\0';
        position[0] = '\0';
    }
    
    Employee(const char* n, const char* pos, double sal, int exp)
        : salary(sal), workExperience(exp)
    {
        std::strncpy(name, n, 49);
        name[49] = '\0';
        std::strncpy(position, pos, 49);
        position[49] = '\0';
    }

    double calculateBonus() const {
        return salary * ((workExperience + 1) / 100.0);
    }

    void print() const {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Position: " << position << std::endl;
        std::cout << "Salary: " << salary << std::endl;
        std::cout << "Work Experience: " << workExperience << " years" << std::endl;
        std::cout << "Annual Bonus: " << calculateBonus() << std::endl;
    }
};

#endif EMPLOYEE_HPP_