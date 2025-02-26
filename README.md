# Heap of Students

## Notes
std::vector<Student *>& students 

## Alogorithm
## Functions
* loadStudents(students vector)
* prtinStudents(students vector)
* showStudents(students vector)
* findStudents(students vector)
* delStudents(students vector)
* menu()

#### loadStudents(students vector)
```
filename = "students.csv"
ifstream file(filename)

while (getline(file, current)):
	stringstream ss(current)
	Student* student new Student()

	while (getline(ss, student, ','):
		students.push_back(&student)

file.close()
```

#### printStudents(students vector)
```
for student in students vector:
	print student
```

#### showStudents(students vector)
```
for student in students vector:
	print lName
	print fName
	print creditHours
```

#### findStudents(students vector)
```
string target
bool notFound = true

getline(cin, target)
for (Student* s: students):
	lName = s->getLastName()
	if (lName.find(target != std::string::npos):
		s-> printStudent()
```

#### delStudent(students vector)

```
for student in students vector:
	delete student
```

#### menu()
```
0) quit
1) show
2) all info
3) sort
4) search

// keep input as a string
input(option)

if 0:
	keepGoing = false
if 1:
	showStudents()
if 2:
	printStudent()
if 3:
	options on how to sort
	sort
if 4:
	search option
```
