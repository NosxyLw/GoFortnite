// fichier préparé par J.Lefèvre, 2025
// travail sur des vecteurs à 2 dimensions représentants des images
// g++ -std=c++14
#include <iostream>
#include <vector>
using namespace std;

// Q.2
void affichage(const vector<vector<unsigned char>> &uneImage){



    for(int i=0 ;i<uneImage.size();i++){
        for(int j=0 ;j< uneImage.size();j++){
            cout << (int)uneImage[i][j]<<"\t";


    }
	// ce sous-programme affiche l’image uneImage
	    cout << endl ;

	// Pour chaque pixel, il affiche l’entier représentant la couleur
}
}

// Q.3
int pixel(const vector<vector<unsigned char>> &uneImage){
	// demande 2 indices à l’utilisateur,
	// et retourne la valeur du pixel correspondant dans uneImage
	int i = 0;
	int j= 0 ;
    int couleur = 256;
    couleur = uneImage[i][j];
	cout<<"donner moi 2 indices"<<endl;
	cin >> j >> i ;



	return(couleur);
}

// Q.4
vector<int> histogramme(const vector<vector<unsigned char>> &uneImage){
	// calcule et retourne l’histogramme des 256 couleurs présentes(ou non) dans uneImage.

	vector<int> histo = histogramme(i) ;
    for(int i=0 ;i<uneImage.size();i++){
        for(int colonne = 0 ; colenne < uneImage


	return(histo);


	}
}
// Q.5
int nbCouleur(const vector<vector<unsigned char>> &uneImage){
	// calcule et retourne le nombre de  couleurs de uneImage.
	vector<int>
	histo = histogramme(uneImage);
	int nbCouleur = -1;

	return( nbCouleur );
}

// Q.6
int couleurFond(const vector<vector<unsigned char>> &uneImage){
	// calcule et retourne la couleur de fond de uneImage.
	vector<int> histo = histogramme(uneImage);
	int couleurF = 256;

	return( couleurF );
}

//Q.7
vector<int> imageCompressee(const vector<vector<unsigned char>> &uneImage){
	// calcule et retourne une compression de l'image uneImage.
	vector<int> imageResultat;

	return( imageResultat );
}

int main( ) {
	//Déclaration des variables
  	int nbl, nbc;
	vector<vector<unsigned char>> image;
	vector<vector<unsigned char>> imageDeBase={{2,3,3,2},{2,2,0,2},{255,255,2,2},{2,255,2,2},{2,2,2,2}};

	//Q.1 Affichage du nombre de lignes et du nombre de colonnes
	cout << "Les dimensions de l'image de base sont :"<<endl;

	nbl = imageDeBase.size();
	nbc = imageDeBase[0].size();

	cout << nbl <<endl;
	cout << nbc <<endl;
	cout <<endl;

	//Q.2 Affichage d'une image
	cout<<"L'image de base est :"<<endl;
	affichage(imageDeBase);

	cout <<endl;

	//Q.3 Test de pixel
	cout << "Test de la fonction d'affichage de Pixel"<<endl;

	//Q.4 Calcul puis Affichage de l'histogramme


	//Q.6 Nombre dee Couleur
	cout << "Le nombre de couleurs dans l'image de base est "<<nbCouleur(imageDeBase)<<endl;

	//Q.6 Couleur de fond
	cout << "La couleur de fond de l'image est "<<couleurFond(imageDeBase)<<endl;


	return 0;
}
