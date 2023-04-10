//
// Created by Christian Vasilev on 9.04.23.
//

#ifndef SCHOOLGROUPS_GAME_H
#define SCHOOLGROUPS_GAME_H

#include "Idea.h"
#include <string>

class Game : public Idea {
public:
    Game();
    Game(std::string name, std::string description, std::string gameDesignDocumentLocation, std::string genre, unsigned ageRestriction);

    unsigned getAgeRestriction();
    Game setAgeRestriction(unsigned);

    int printOut();
private:
    std::string genre;
    unsigned ageRestriction;
};


#endif //SCHOOLGROUPS_GAME_H
