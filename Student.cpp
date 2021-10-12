#include "Student.h"
using namespace std;
#include<cstring>
#include <iostream>

// Assign studentId and name
void Student::assignDetails(int pStdID,char pName[20]) {
  studentId=pStdID;
  strcpy(name,pName);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID: "<<studentId  <<endl;
  cout<<"Student name:"<<name;
  
}
