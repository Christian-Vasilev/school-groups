//
// Created by Christian Vasilev on 9.04.23.
//

#include "Student.h"
#include "Game.h"

Student::Student(std::string firstName, std::string lastName, unsigned int age, std::string fNumber, std::string role) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
    this->fNumber = fNumber;
    this->role = role;
}

Student::Student() {

}

/**
 * Return age
 *
 * @return unsigned
 */
unsigned Student::getAge() const {
    return this->age;
}

/**
 * Get the first name of the student
 *
 * @return std::string
 */
std::string Student::getFirstName() const {
    return this->firstName;
}

/**
 * Get the last name of the student
 *
 * @return std::string
 */
std::string Student::getLastName() const {
    return this->lastName;
}

/**
 * Get the Faculty number of the student
 *
 * @return std::string
 */
std::string Student::getFNumber() const {
    return this->fNumber;
}

/**
 * Get the First and Last name of the student concatenated
 *
 * @return std::string
 */
std::string Student::getFullName() const {
    return this->firstName + " " + this->lastName;
}

/**
 * Get the project role of the student
 *
 * @return std::string
 */
std::string Student::getRole() const {
    return this->role;
}

/**
 * Generate the project idea
 *
 * @return Idea*
 */
Idea* Student::generateIdea(std::string name, std::string description, std::string document, std::string genre, unsigned ageRestriction) {
    this->idea = new Game(name, description, document, genre, ageRestriction);
    this->idea->assignLeader(this);

    return this->idea;
}

/**
 * Retrieve the generated idea
 *
 * @return Idea*
 */
Idea* Student::getIdea() const {
    return this->idea;
}
