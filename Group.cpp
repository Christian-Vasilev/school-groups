//
// Created by Christian Vasilev on 9.04.23.
//

#include "Group.h"
#include <string>
#include <utility>

Group::Group(std::string name, unsigned maxMembersCapacity) {
    this->name = std::move(name);
    this->maxMembersCapacity = maxMembersCapacity;
    this->members = new Student[maxMembersCapacity];
};

Group::~Group() {
    delete[] members;
}

Group::Group() {}

/**
 * Assing multiple members to group
 *
 * @return bool
 */
bool Group::assignMembersToGroup(Student* member, unsigned sizeOfGroup) {
    bool result = false;

    for (int i = 0; i < sizeOfGroup; i++) {
        result = this->assignMemberToGroup(member[i]);
    }

    return result;
}


/**
 * Assign a single member to a group
 *
 * @return bool
 */
bool Group::assignMemberToGroup(Student member) {
    unsigned newMembersCount = this->currentMembersCount + 1;

    if (newMembersCount <= this->maxMembersCapacity) {
        this->members[currentMembersCount] = std::move(member);
        this->currentMembersCount = newMembersCount;

        return true;
    }

    return false;
}

/**
 * Get average group age
 *
 * @return int
 */
int Group::getGroupAverageAge() {
    unsigned totalAge = 0;

    for (int i = 0; i < this->currentMembersCount; i++) {
        totalAge += this->members[i].getAge();
    }

    return totalAge / this->currentMembersCount;
}

/**
 * Get the group free lots for Students
 *
 * @return int
 */
int Group::getGroupFreeSpots() const {
    return this->maxMembersCapacity - this->currentMembersCount;
}

/**
 * Get the group max capacity
 *
 * @return int
 */
int Group::getMaxMembersCapacity() const {
    return this->maxMembersCapacity;
}
