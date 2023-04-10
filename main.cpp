#include <iostream>
#include "Student.h"
#include "Group.h"

int main() {
    const int groupOrganizers = 2;
    unsigned sizeOfGroup = 0;

    Group gameDevs = Group("Game Developers", 21);
    Student students[groupOrganizers] = {
        Student("Michel", "Maven", 21, "F67231", "Graphic Designer"),
        Student("George", "Gregory", 35, "F15231", "Game Developer"),
    };

    Student leo("Leonardo", "Lenson", 19, "F15231", "Marketing");
    leo.generateIdea(
        "Tower Defense Game",
        "A game where you build towers and prevent waves from reaching a certain point",
        "./gd.docx",
        "Strategy Game",
        15
    );

    sizeOfGroup = sizeof(students) / sizeof(students[0]);
    // Creators of the group
    gameDevs.assignMembersToGroup(students, sizeOfGroup);
    // Newcoming member
    gameDevs.assignMemberToGroup(leo);

    std::cout << "Average Age Of Students In Group: " << gameDevs.getGroupAverageAge() << std::endl;
    std::cout << "Spots left in the group: " << gameDevs.getGroupFreeSpots() << " / " << gameDevs.getMaxMembersCapacity() << std::endl;

    leo.getIdea()->printOut();

    return 0;
}
