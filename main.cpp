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
              case 2:
                if(!filiere.vide())filiere.afficherFilieres();
                break;
              case 3:
                    if (!filiere.vide())
                    {
                      do {
                          cout << "Entrez le nom de la filière : ";
                          cin >> Filierename;
                          if (!filiere.estFilierePresente(Filierename)) cout << "Filière non trouvée !!" << endl;
                      } while (!filiere.estFilierePresente(Filierename));
                      cout << "Entrez le jour : ";
                      cin >> day;
                      cout << "Entrez l'heure de début (HH:MM) : ";
                      cin >> start_time;
                      cout << "Entrez l'heure de fin (HH:MM) : ";
                      cin >> end_time;
                      cout << "Entrez le sujet : ";
                      cin >> subject;
                      cout << "Entrez le nom du professeur : ";
                      cin >> prof;
                      cout << "Entrez le nom de la salle : ";
                      cin >> salle;
                      timetable.ajouterHoraire(day, Horaire(Filierename, start_time + " - " + end_time, subject, "Pr-" + prof, salle));

                    }
                    break;
          }

  }


    return 0;
 }
 
