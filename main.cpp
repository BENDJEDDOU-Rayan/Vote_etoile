#include <iostream>
#include <random>
#include <time.h>
#include <math.h>
#include <vector>

using namespace std;

void vote(){
    // Déclaration des variables
    unsigned choix_1 = 0;
    unsigned choix_1_note = 0;
    vector<int> tableau_note_choix_1;
    float choix_1_total;
    unsigned choix_2 = 0;
    unsigned choix_2_note = 0;
    vector<int> tableau_note_choix_2;
    float choix_2_total;
    unsigned choix_3 = 0;
    unsigned choix_3_note = 0;
    vector<int> tableau_note_choix_3;
    float choix_3_total;
    unsigned choix_4 = 0;
    unsigned choix_4_note = 0;
    vector<int> tableau_note_choix_4;
    float choix_4_total;
    unsigned tirage;

    // Affichage des choix de vote
    cout << "Quel est le meilleur jeu vidéo parmi :"
             << endl << "1. Counter strike (aka CS GO)"
             << endl << "2. Street Fighter II"
             << endl << "3. Civilization VI"
             << endl << "4. Mario Kart";

    // Initialisation du générateur de nombre
    srand(time(NULL));

    // Boucle 'for' permettant de voter 113 fois aléatoirement
    for(int i = 0; i < 113; ++i){
        tirage = 1 + rand() % 5; // Tirer un nombre aléatoirement entre 1 et 4
        if(tirage == 1){
            ++choix_1;
            choix_1_note = 1 + rand() % 6;
            tableau_note_choix_1.push_back(choix_1_note);
        } else if (tirage == 2){
            ++choix_2;
            choix_2_note = 1 + rand() % 6;
            tableau_note_choix_2.push_back(choix_2_note);
        } else if (tirage == 3){
            ++choix_3;
            choix_3_note = 1 + rand() % 6;
            tableau_note_choix_3.push_back(choix_3_note);
        } else if (tirage == 4){
            ++choix_4;
            choix_4_note = 1 + rand() % 6;
            tableau_note_choix_4.push_back(choix_4_note);
        }
    }
    // Calcul de la moyenne de chaque réponse
    float moyenne_choix_1;
    float moyenne_choix_2;
    float moyenne_choix_3;
    float moyenne_choix_4;
    for(unsigned i = 0; i < tableau_note_choix_1.size(); ++i){
        choix_1_total = choix_1_total + tableau_note_choix_1[i];
        moyenne_choix_1 = choix_1_total / tableau_note_choix_1.size();
    }
    for(unsigned i = 0; i < tableau_note_choix_2.size(); ++i){
        choix_2_total = choix_2_total + tableau_note_choix_2[i];
        moyenne_choix_2 = choix_2_total / tableau_note_choix_2.size();
    }
    for(unsigned i = 0; i < tableau_note_choix_3.size(); ++i){
        choix_3_total = choix_3_total + tableau_note_choix_3[i];
        moyenne_choix_3 = choix_3_total / tableau_note_choix_3.size();
    }
    for(unsigned i = 0; i < tableau_note_choix_4.size(); ++i){
        choix_4_total = choix_4_total + tableau_note_choix_4[i];
        moyenne_choix_4 = choix_4_total / tableau_note_choix_4.size();
    }
    // Affichage des résultats du vote
    cout << endl << "--------------------"
         << endl << "Résultat du vote :"
         << endl << "1. Counter strike (aka CS GO) : " << roundf(moyenne_choix_1 * 100) / 100 << "/5"
         << endl << "2. Street Fighter II : " << roundf(moyenne_choix_2 * 100) / 100 << "/5"
         << endl << "3. Civilization VI : " << roundf(moyenne_choix_3 * 100) / 100 << "/5"
         << endl << "4. Mario Kart : " << roundf(moyenne_choix_4 * 100) / 100 << "/5"
         << endl << "--------------------" << endl;
    // Séléction du gagnant
    if(moyenne_choix_1 >= moyenne_choix_2 && moyenne_choix_1 >= moyenne_choix_3 && moyenne_choix_1 >= moyenne_choix_4){
        cout << "Counter strike a la meilleur note (" << roundf(moyenne_choix_1 * 100) / 100 << "/5)" << endl;
    }
    if(moyenne_choix_2 >= moyenne_choix_1 && moyenne_choix_2 >= moyenne_choix_3 && moyenne_choix_2 >= moyenne_choix_4){
        cout << "Street Fighter II a la meilleur note (" << roundf(moyenne_choix_2 * 100) / 100 << "/5)" << endl;
    }
    if(moyenne_choix_3 >= moyenne_choix_2 && moyenne_choix_3 >= moyenne_choix_1 && moyenne_choix_3 >= moyenne_choix_4){
        cout << "Civilization VI a la meilleur note (" << roundf(moyenne_choix_3 * 100) / 100 << "/5)" << endl;
    }
    if(moyenne_choix_4 >= moyenne_choix_3 && moyenne_choix_4 >= moyenne_choix_2 && moyenne_choix_4 >= moyenne_choix_1){
        cout << "Mario Kart a la meilleur note (" << roundf(moyenne_choix_4 * 100) / 100 << "/5)" << endl;
    }
}

int main()
{
    vote();
    return 0;
}
