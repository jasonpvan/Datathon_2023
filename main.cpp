#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <vector>
using namespace std;

void Primera_peca(vector<vector<string> >mat,vector<vector<string> >&met, int& tamaño){
    int k = 0, a = 3, b = 2;
    for(int i = 0; i < a; ++i){ //a = Longitud met despues de Age, Sex, Colour
            if(mat[i][6] == "Shirt" or mat[i][6]== "Sweater" or mat[i][6]== "Top" or mat[i][6]== "Blouse" or mat[i][6]== "T-Shirt" or mat[i][6]== "Cardigan" or mat[i][6]== "Polo" or mat[i][6]== "Sweatshirt"){
                met.push_back(mat[i]);
                ++k;
            }
                    
    }
    srand(time(NULL));
    int n = (rand() % tamaño);
    cout << "Peça de roba Main";
    for(int i = 0; i < 7; ++i){
        cout <<met[n][i];
    }
}

int main(){
    //Legeix la matriu de les peces de roba
    string Comodin;
    int tamaño = 0;
    ifstream Data("PRODUCTO_DATA_BUENO.txt");
    vector<vector<string> > mat(9222, vector<string>(7));
    vector<vector<string> >sex;
    vector<vector<string> >age;
    for(int i=0; i<9222; ++i){
        for (int g=0; g<7;++g){
            Data>>Comodin;
            mat[i][g]=Comodin;
            //cout<< mat[i][g]<<" ";
        }
    }
    Primera_peca(sex,age,tamaño);
}