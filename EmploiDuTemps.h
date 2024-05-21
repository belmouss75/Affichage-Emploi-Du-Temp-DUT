#ifndef EMPLOIDUTEMPS_H
#define EMPLOIDUTEMPS_H

#include "Horaire.h"
#include <map>
#include <vector>
#include <string>

class EmploiDuTemps {
public:
    void ajouterHoraire(const std::string& jour, const Horaire& horaire);
    void afficher(std::string filiere) const;

private:
    std::map<std::string, std::vector<Horaire>> horaires;
};

#endif // EMPLOIDUTEMPS_H
