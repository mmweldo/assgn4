#Variables
CC=g++
CFLAGS=-c -Wall
#MakeFile
all: assgn

assgn: driver.o course.o student.o person.o
	$(CC) CpscCourseMain.o CpscCourse.o Student.o Person.o -o assgn
	rm *o

driver.o: CpscCourseMain.cpp
	$(CC) $(CFLAGS) CpscCourseMain.cpp

course.o: CpscCourse.cpp
	$(CC) $(CFLAGS) CpscCourse.cpp

student.o: Student.cpp
	$(CC) $(CFLAGS) Student.cpp

person.o: Person.cpp
	$(CC) $(CFLAGS) Person.cpp

#in case it fails to auto clean
clean:
	rm *o
