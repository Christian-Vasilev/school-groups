//
// Created by Christian Vasilev on 9.04.23.
//

#ifndef SCHOOLGROUPS_STUDENT_H
#define SCHOOLGROUPS_STUDENT_H

#include <string>
#include "Idea.h"

class Student {
public:
    Student();
    Student(std::string firstName, std::string lastName, unsigned age, std::string fNumber, std::string role);

    friend std::ostream& operator<<(std::ostream& stream, Student* student);

    std::string getFirstName() const;
    std::string getLastName() const;
    unsigned getAge() const;
    std::string getFNumber() const;
    std::string getFullName() const;
    std::string getRole() const;
    Idea* getIdea() const;
    Idea* generateIdea(std::string name, std::string description, std::string document, std::string genre, unsigned ageRestriction);

private:
    std::string firstName;
    std::string lastName;
    unsigned age;
    std::string fNumber;
    std::string role;
    Idea* idea;
};


#endif //SCHOOLGROUPS_STUDENT_H
