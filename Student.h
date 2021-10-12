#include<cstring>
using namespace std;

class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  
  private:
  int studentId;
  char name[20];
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
  public:
  void assignDetails(int pStdID,char pName[20]);
  void display();


};
