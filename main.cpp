#include <iostream>
#include <random>
#include <time.h>
#include <math.h>
#include <vector>
#include <fstream>
#include <string>

using namespace std;


void voteClassique(){

    // Déclaration des variables
    vector <float> tabResultats (4);

    string ligne;
    string votes;

    vector <string> tabNotesJeux1;
    vector <string> tabNotesJeux2;
    vector <string> tabNotesJeux3;
    vector <string> tabNotesJeux4;



    while (true) {
        getline(cin,ligne);
        if(cin.eof())break;
        getline(cin,ligne);
        getline(cin,votes);
        tabNotesJeux1.push_back(votes);
        getline(cin,votes);
        tabNotesJeux2.push_back(votes);
        getline(cin,votes);
        tabNotesJeux3.push_back(votes);
        getline(cin,votes);
        tabNotesJeux4.push_back(votes);
    }

    float ResultatJeux1 = 0;
    float ResultatJeux2 = 0;
    float ResultatJeux3 = 0;
    float ResultatJeux4 = 0;

    // Boucle 'for' permettant de voter nbrVotants fois aléatoirement
    for(unsigned int i = 0; i < tabNotesJeux1.size(); i++){
        if(tabNotesJeux1[i] == "1"){
            ResultatJeux1 += 1;
      } else if (tabNotesJeux1[i] == "2"){
            ResultatJeux1 += 2;
      } else if (tabNotesJeux1[i] == "3"){
            ResultatJeux1 += 3;
      } else if (tabNotesJeux1[i] == "4"){
            ResultatJeux1 += 4;
      } else if(tabNotesJeux1[i] == "5"){
            ResultatJeux1 += 5;
      }
    }
    for(unsigned int i = 0; i < tabNotesJeux2.size(); i++){
        if(tabNotesJeux2[i] == "1"){
            ResultatJeux2 += 1;
      } else if (tabNotesJeux2[i] == "2"){
            ResultatJeux2 += 2;
      } else if (tabNotesJeux2[i] == "3"){
            ResultatJeux2 += 3;
      } else if (tabNotesJeux2[i] == "4"){
            ResultatJeux2 += 4;
      } else if (tabNotesJeux2[i] == "5"){
            ResultatJeux2 += 5;
      }
    }
    for(unsigned int i = 0; i < tabNotesJeux3.size(); i++){
        if(tabNotesJeux3[i] == "1"){
            ResultatJeux3 += 1;
      } else if (tabNotesJeux3[i] == "2"){
            ResultatJeux3 += 2;
      } else if (tabNotesJeux3[i] == "3"){
            ResultatJeux3 += 3;
      } else if (tabNotesJeux3[i] == "4"){
            ResultatJeux3 += 4;
      } else if (tabNotesJeux3[i] == "5"){
            ResultatJeux3 += 5;
      }
    }
    for(unsigned int i = 0; i < tabNotesJeux4.size(); i++){
        if(tabNotesJeux4[i] == "1"){
            ResultatJeux4 += 1;
      } else if (tabNotesJeux4[i] == "2"){
            ResultatJeux4 += 2;
      } else if (tabNotesJeux4[i] == "3"){
            ResultatJeux4 += 3;
      } else if (tabNotesJeux4[i] == "4"){
            ResultatJeux4 += 4;
      } else if (tabNotesJeux4[i] == "5"){
            ResultatJeux4 += 5;
      }
    }

    float noteJeux1;
    float noteJeux2;
    float noteJeux3;
    float noteJeux4;

    noteJeux1 = ResultatJeux1 / tabNotesJeux1.size();
    noteJeux2 = ResultatJeux2 / tabNotesJeux2.size();
    noteJeux3 = ResultatJeux3 / tabNotesJeux3.size();
    noteJeux4 = ResultatJeux4 / tabNotesJeux4.size();

    tabResultats[0] = noteJeux1;
    tabResultats[1] = noteJeux2;
    tabResultats[2] = noteJeux3;
    tabResultats[3] = noteJeux4;

    float max = 0;
    float numero = 0;
    for(unsigned int i = 0; i < tabResultats.size(); i++){
        if(tabResultats[i] > max){
            max = tabResultats[i];
            numero = i;
        }
    }

    string gagnant;
    if(numero == 0){
        gagnant = "Counter strike (aka CS GO)" ;
    }
    else if(numero == 1){
        gagnant = "Street Fighter II";
    }
    else if(numero == 2){
        gagnant = "Civilization VI : ";
    }
    else if(numero == 3){
        gagnant = "Mario Kart : ";
    }

    // Affichage des résultats
    cout << "Résultat du vote :"
         << endl << "Counter strike (aka CS GO) qui a recu une note totale de " << tabResultats[0] << "/5"
         << endl << "Street Fighter II qui a recu une note totale de " << tabResultats[1] << "/5"
         << endl << "Civilization VI qui a recu une note totale de " << tabResultats[2] << "/5"
         << endl << "Mario Kart qui a recu une note totale de " << tabResultats[3] << "/5"
         << endl << "--------------------"
         <<endl;
     cout << "Le gagnant est " << gagnant << " avec une note de " << max << "/5" << endl;

}


int main()
{
    voteClassique();
    return 0;
}
