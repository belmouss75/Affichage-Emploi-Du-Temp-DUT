#ifndef FILIERE_H
#define FILIERE_H

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>

class Filiere {
private:
    std::vector<std::string> filieres; // Vecteur pour stocker les noms des filières

public:
    Filiere();

    void ajouterFiliere(std::string nom);
    std::vector<std::string> obtenirFilieres();
    bool estFilierePresente(std::string filiere);
    bool vide();
    void afficherFilieres();
};

#endif // FILIERE_H
