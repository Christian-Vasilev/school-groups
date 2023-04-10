//
// Created by Christian Vasilev on 9.04.23.
//

#include "Idea.h"
#include <iostream>

Idea::Idea() {

}

Idea::Idea(std::string name, std::string description, std::string gameDesignDocumentLocation)
    : name(name), description(description), gameDesignDocumentLocation(gameDesignDocumentLocation) {};


/**
 * Assign a leader to the group
 *
 * @return Idea
 */
Idea Idea::assignLeader(Student* student) {
    this->leader = student;

    return *this;
}

/**
 * Retrieve the leader of the group
 *
 * @return Student&
 */
Student& Idea::getLeader() {
    return *this->leader;
}

/**
 * Print out details for the idea of the person
 *
 * @return int
 */
int Idea::printOut() {
    std::cout << "Title: " << this->name << std::endl;
    std::cout << "Description: " << this->description << std::endl;
    std::cout << "Design Document: " << this->gameDesignDocumentLocation << std::endl;

    return 0;
}
