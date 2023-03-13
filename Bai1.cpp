#include <iostream>
using namespace std;
 
 class Employee{
    string Name;
    string idNumber;
    string Deparment;
    string Position;
 public:

 Employee(string name,string idnumber,string deparment,string position){
    this->Name = name;
    this->idNumber = idnumber;
    this->Deparment= deparment;
    this->Position= position;


 }

 
 Employee(string name, string idnumber){
    this->Name = name;
    this->idNumber = idnumber;

 }
 Employee(){
    this->Name = "";
    this->Deparment= "";
    this->idNumber = "";
    this->Position = "";
 }
 
 string getName(){
    return this->Name;

 }
 void setName(string name){
    this->Name = name;

 }
 string getidNumber(){
    return this->idNumber;

 }
 void setidNumber(string idnumber){
    this->idNumber = idnumber;


 }
 string getDeparment(){
    return Deparment;
 }
 void setDeparment(string deparment){
    this->Deparment = deparment;

 }
 string getPosition(){
    return Position;

 }
 void setPosition(string position){
    this->Position = position;

 }
 void display(){
        cout << this->Name << " - " << this->idNumber << "-" << this->Deparment << "-" << this->Position<< endl;


 }
 };
 int main (){
    Employee no1("Susan","0175","loading","done");
     Employee no2("Lyli","0375","uploadting","done");
     no1.display();
     no2.display();
return 0;
 }
