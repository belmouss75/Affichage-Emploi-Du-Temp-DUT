#ifndef HORAIRE_H
#define HORAIRE_H

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

class Horaire {
public:
    Horaire(const std::string& filiere, const std::string& heure, const std::string& matiere, const std::string& professeur, const std::string& salle);

    void afficher(std::string filiere, std::string jour) const;

private:
    std::string f;
    std::string heure;
    std::string matiere;
    std::string professeur;
    std::string salle;
};

#endif // HORAIRE_H
