//
// Created by Christian Vasilev on 9.04.23.
//

#ifndef SCHOOLGROUPS_GROUP_H
#define SCHOOLGROUPS_GROUP_H

#include "Student.h"
#include <string>


class Group {
public:
    Group();
    Group(std::string name, unsigned maxMembersCapacity);
    ~Group();

    bool assignMemberToGroup(Student member);
    bool assignMembersToGroup(Student* member, unsigned sizeOfGroup);
    int getGroupAverageAge();
    int getGroupFreeSpots() const;
    int getMaxMembersCapacity() const;
private:
    std::string name;
    unsigned maxMembersCapacity;
    unsigned currentMembersCount = 0;
    Student* members;
};


#endif //SCHOOLGROUPS_GROUP_H
