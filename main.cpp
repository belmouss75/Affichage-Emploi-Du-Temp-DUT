#include <iostream>
#include <string>
#include "Filiere.h"
#include "EmploiDuTemps.h"
using namespace std;
void printMenu() {
    cout
    << "1. Add Filiere\n"
    << "2. Display Filieres\n"
    << "3. Add Class\n"
    << "4. Display Timetable\n"
    << "5. Exit\n";
        cout << "Enter Choice!:";
}

 int main() {
    Filiere filiere;
    EmploiDuTemps timetable;
    string prof,day,start_time,end_time,subject,salle,Filierename;
    int choice = 0;
  while (choice != 5){
          cout << string(106, '-') << endl;
          printMenu();
          cin >> choice;
          switch (choice)
          {
              case 1:
                  cout << "Enter Filiere Name: ";
                  cin >> Filierename;
                  filiere.ajouterFiliere(Filierename);
                  break;
              
          }

  }


    return 0;
 }
 
