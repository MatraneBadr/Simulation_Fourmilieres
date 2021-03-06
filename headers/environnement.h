#ifndef ENVIRONNEMENT_H
#define ENVIRONNEMENT_H

#include <vector>
#include "cellule.h"
#include "fourmisGuerriere.h"
#include "fourmiliere.h"
#include "nourriture.h"
#include "obstacle.h"
class Environnement
{
private:
    /* data */
    int nbreObstacle;
    int nbreNourriture;
    int largeur;
    int hauteur;
    int tauxPheromone;
    std::vector<std::vector<Cellule> > terrain;
    std::vector<Nourriture> nourritures;
    std::vector<Obstacle> obstacles;
    std::vector<FourmisGuerriere> fourmis;
public:
    Environnement();
    Environnement(int nbreO, int nbreN, int l, int h, int tauxPhero);
    ~Environnement();
    int getNbreObstacle() const { return nbreObstacle;}
    void setNbreObstacle(int nbreO) {nbreObstacle=nbreO;}
    int getNbreNourriture() const { return nbreNourriture;}
    void setNbreNourriture(int nbreN) {nbreNourriture=nbreN;}
    int getLargeur() const { return largeur;}
    std::vector<std::vector<Cellule> >  getTerrain() const { return terrain;}
    void setLargeur(int l) {largeur=l;}
    int getHauteur() const { return hauteur;}
    void setHauteur(int h) {hauteur=h;}
    int getTauxPheromone() const { return tauxPheromone;}
    void setTauxPheromone(int tauxPhero) {tauxPheromone=tauxPhero;}
    void affiche(int x,int y);
    void insereNewFourmiliere(int x, int y, int pm, int nm, int n);
    void initObstacleNourriture(bool cellulesSontLibres);
    bool contientNourriture(int x,int y);
    bool contientObstacle(int x,int y);
    void initTerrain();
    void initObstacle();
    void initNourriture();
    Cellule& getCellule(int x, int y);
    Cellule& getCelluleLibre(int x, int y);

};
#endif