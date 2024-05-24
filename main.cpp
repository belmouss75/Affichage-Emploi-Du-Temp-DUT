#include <iostream>
#include <string>
#include "Filiere.h"
#include "EmploiDuTemps.h"
using namespace std;
void afficherMenu() {
   cout
        << "1. Ajouter une filière\n"
        << "2. Afficher les filières\n"
        << "3. Ajouter un cours\n"
        << "4. Afficher l'emploi du temps\n"
        << "5. Quitter\n";
    cout << "Entrez votre choix : ";
}
 int main() {
    Filiere filiere;
    EmploiDuTemps timetable;
    string prof,day,start_time,end_time,subject,salle,Filierename;
    int choice = 0;
  while (choice != 5){
          cout << string(106, '-') << endl;
          afficherMenu();
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
 
