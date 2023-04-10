//
// Created by Christian Vasilev on 9.04.23.
//

#include "Game.h"
#include "Student.h"
#include <iostream>

/**
 * Overload the << operator to print out the info of the Student.
 *
 * @return std::ostream&
 */
std::ostream& operator<<(std::ostream& stream, Student& student) {
    stream << "Leader name: " << student.getFullName() << std::endl;
    stream << "Leader Role: " << student.getRole() << std::endl;

    return stream;
}

Game::Game(std::string name, std::string description, std::string gameDesignDocumentLocation, std::string genre, unsigned ageRestriction)
    : Idea(name, description, gameDesignDocumentLocation) {
    this->genre = genre;
    this->ageRestriction = ageRestriction;
}

Game::Game() {};

/**
 * Print out details for the idea of the person
 *
 * @return int
 */
int Game::printOut() {
    std::cout << "=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-" << std::endl;
    Idea::printOut();

    std::cout << "Genre: " << this->genre << std::endl;
    std::cout << "Age Restriction: " << this->ageRestriction << std::endl;

    std::cout << "=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-" << std::endl;

    std::cout << this->getLeader() << std::endl;
}

/**
 * Set the age restriction of the game idea
 *
 * @return Game
 */
Game Game::setAgeRestriction(unsigned age) {
    this->ageRestriction = age;

    return *this;
}

/**
 * Get the age restriction of the game idea
 *
 * @return unsigned
 */
unsigned Game::getAgeRestriction() {
    return this->ageRestriction;
}
