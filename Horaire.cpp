#include "Horaire.h"

// Constructeur de la classe Horaire
Horaire::Horaire(const std::string& filiere, const std::string& heure, const std::string& matiere, const std::string& professeur, const std::string& salle)
    : f(filiere), heure(heure), matiere(matiere), professeur(professeur), salle(salle) {}

// Méthode pour afficher l'horaire
void Horaire::afficher(std::string filiere, std::string jour) const {
    std::transform(filiere.begin(), filiere.end(), filiere.begin(), ::toupper);
    if (f == filiere) {
        std::cout << std::left
                  << std::setw(18) << "| " + f
                  << std::setw(18) << "| " + jour
                  << std::setw(18) << "| " + heure
                  << std::setw(40) << "| " + matiere
                  << std::setw(15) << "| " + professeur
                  << std::setw(15) << "| " + salle << std::endl;
    }
}
