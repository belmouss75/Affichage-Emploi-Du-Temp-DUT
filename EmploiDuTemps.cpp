#include "EmploiDuTemps.h"

// Ajouter un horaire pour un jour spécifique
void EmploiDuTemps::ajouterHoraire(const std::string& jour, const Horaire& horaire) {
    horaires[jour].push_back(horaire);
}

// Afficher l'emploi du temps pour une filière spécifique
void EmploiDuTemps::afficher(std::string filiere) const {
    std::cout << std::left
              << std::setw(18) << "| Filière"
              << std::setw(18) << "| Jour"
              << std::setw(18) << "| Heure"
              << std::setw(40) << "| Matière"
              << std::setw(15) << "| Professeur"
              << std::setw(15) << "| Salle" << std::endl;
    std::cout << std::string(116, '-') << std::endl;

    for (const auto& [jour, horairesJour] : horaires) {
        for (const auto& horaire : horairesJour) {
            horaire.afficher(filiere, jour);
        }
    }
}
