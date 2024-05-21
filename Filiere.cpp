#include "Filiere.h"

// Constructeur de la classe Filiere
Filiere::Filiere() {}

// Ajouter une filière au vecteur
void Filiere::ajouterFiliere(std::string nom) {
    std::transform(nom.begin(), nom.end(), nom.begin(), ::toupper);
    filieres.push_back(nom);
}

// Retourner le vecteur des filières
std::vector<std::string> Filiere::obtenirFilieres() {
    return filieres;
}

// Vérifier si une filière existe
bool Filiere::estFilierePresente(std::string filiere) {
    std::transform(filiere.begin(), filiere.end(), filiere.begin(), ::toupper);
    for (const std::string& f : filieres) {
        if (f == filiere) return true;
    }
    return false;
}

// Vérifier si le vecteur des filières est vide
bool Filiere::vide() {
    if (filieres.empty()) {
        std::cout << "Veuillez d'abord ajouter une filière !!" << std::endl;
        return true;
    }
    return false;
}

// Afficher les filières
void Filiere::afficherFilieres() {
    std::cout << std::left << std::setw(18) << "Filières" << std::endl;
    std::cout << std::string(106, '-') << std::endl;
    for (const std::string& filiere : filieres) {
        std::cout << std::left << std::setw(18) << filiere << std::endl;
    }
}
