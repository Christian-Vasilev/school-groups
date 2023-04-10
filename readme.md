# School Groups.
> This is a project where Students can participate in different groups,
> generate ideas and find people to work with.


## Class structure

### Student
```
The student class is responsible for holding the information
about each student and the idea that he has. For the sake of 
simplicity each student can generate only one idea.
```


#### Tasks

- [x] Use getters for the Student information;
- [x] Generate ideas;
- [x] Retrieve the ideas of the Student;
- [ ] Add types to determine what kind of idea is generated;


---

### Groups
```
The group class is a container holding all the student in different groups.
Each group can have many students, name and capacity.
```


#### Tasks

- [x] Add Students to the groups;
- [x] Get average Students age;
- [x] Get groups free spots;
- [x] Get max members count;
- [ ] Remove members from groups;
- [ ] Ban members from groups;
- [ ] Add groups to Ideas;


---

### Idea
```
The ideas class is a base class responsible for grouping the common logic
for all diversey classes that extends it. It holds the basic information about
the idea. Title, description, document
```


#### Tasks

- [x] Print information about the idea;
- [ ] Add participants to the ideas;
- [ ] List all participants in the idea info;


---

### Game
```
This class is an example of Idea extension. This is a Game Idea. The
class holds different information like: genre and age restriction. It
can also print full information about the game idea.
```

#### Tasks

- [x] Print information about the idea;
- [x] Use operator overloading to get info about the Student;
- [ ] Add more fields of information to the idea type;

---

## Example usages

For creating a group, you can simply add a new group and attach Students to it
by the following code:

```c++
Group gameDevs = Group("Game Developers", 21);
Student students[2] = {
    Student("Michel", "Maven", 21, "F67231", "Graphic Designer"),
    Student("George", "Gregory", 35, "F15231", "Game Developer"),
};

// Gets the size of the group of students
sizeOfGroup = sizeof(students) / sizeof(students[0]);
// Creators of the group
gameDevs.assignMembersToGroup(students, sizeOfGroup);
```

Or you can simply add newcomers to the groups by the following code:

```c++
Student leo("Leonardo", "Lenson", 19, "F15231", "Marketing");
// Newcoming member
gameDevs.assignMemberToGroup(leo);
```

Also if you want to generate idea for a specific Student, you can always use the code below:

```c++
Student leo("Leonardo", "Lenson", 19, "F15231", "Marketing");
leo.generateIdea(
    "Tower Defense Game",
    "A game where you build towers and prevent waves from reaching a certain point",
    "./gd.docx",
    "Strategy Game",
    15
);
```

If you wish to get the average group age, you can always call

```c++
Group gameDevs = Group("Game Developers", 21);

Student students[2] = {
    Student("Michel", "Maven", 21, "F67231", "Graphic Designer"),
    Student("George", "Gregory", 35, "F15231", "Game Developer"),
};

gameDevs.getGroupAverageAge();
```

Same goes if you need the free spots of the group

```c++
Group gameDevs = Group("Game Developers", 21);

Student students[2] = {
    Student("Michel", "Maven", 21, "F67231", "Graphic Designer"),
    Student("George", "Gregory", 35, "F15231", "Game Developer"),
};

gameDevs.getGroupFreeSpots();
```