//
// Created by Christian Vasilev on 9.04.23.
//

#ifndef SCHOOLGROUPS_IDEA_H
#define SCHOOLGROUPS_IDEA_H

#include <string>

class Student;

class Idea {
public:
    Idea();
    Idea(std::string name, std::string description, std::string designDocumentLocation);

    virtual int printOut();
    Idea assignLeader(Student*);
private:
    std::string name;
    std::string description;
    std::string gameDesignDocumentLocation;
protected:
    Student& getLeader();
    Student* leader;
};


#endif //SCHOOLGROUPS_IDEA_H
