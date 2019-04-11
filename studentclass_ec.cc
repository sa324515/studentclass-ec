/*
 *        File: student-class.cc
 *      Author: Sam Adams
 *        Date: April 10, 2019
 * Description: Student structure example with vectors.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Student {
public:
    //output
    void output(Student s);

    //getters or accessors
    int getId();
    string getName();
    double getScore();

    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

private:
    int id;  //id must be >= 0
    string name;
    double score; //>= 0, -1 default
}; //semicolon is important


// function prototypes
// void printStudent(const Student &st);
// void inputStudent(Student &st);

int main(int argc, char const *argv[]) {

    Student s;
    s.setId(123);
    s.setName("Sam");
    s.setScore(100);
    s.output(s);



    return 0;
}  // main

int Student::getId() {
    return id;
}

void Student::setId(int newId) {
    if (newId >= 0)
    {
        id = newId;
    }
}

string Student::getName(){
    return name;
}

void Student::setName(string newName){
    name = newName;
}

double Student::getScore(){
    return score;
}

void Student::setScore(double newScore){
    if(newScore >= 0){
        score = newScore;
    }
}

void Student::output(Student s){
    cout << "ID: " << s.getId() << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Score: " << s.getScore() << endl;
}
