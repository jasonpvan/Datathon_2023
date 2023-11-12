#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <vector>
using namespace std;

void Primera_peca(vector<vector<string> >&mat,vector<vector<string> >&met){
    int k1 = 0, a1 = 3;
    for(int i = 0; i < a; ++i){ //a = Longitud met despues de Age, Sex, Colour
            if(mat[i][6] == "Shirt" or mat[i][6]== "Sweater" or mat[i][6]== "Top" or mat[i][6]== "Blouse" or mat[i][6]== "T-Shirt" or mat[i][6]== "Cardigan" or mat[i][6]== "Polo" or mat[i][6]== "Sweatshirt"){
                met.push_back(mat[i]);
                ++k1;
            }
                    
    }
    srand(time(NULL));
    int n = (rand() % k1);
    cout << "Peça de roba Main";
    for(int i = 0; i < 7; ++i){
        cout <<met[n][i];
    }
}

void Shoes(vector<vector<string> >&mat,vector<vector<string> >&met){
    int k2 = 0, a2 = 3;
    for(int i = 0; i < a; ++i){ //a = Longitud met despues de Age, Sex, Colour
            if(mat[i][6] == "Shoes" or mat[i][6]== "ankle_boots" or mat[i][6]== "boots" or mat[i][6]== "trainers" or mat[i][6]== "Slippers" or mat[i][6]== "Clogs"){
                met.push_back(mat[i]);
                ++k2;
            }
                    
    }
    srand(time(NULL));
    int n = (rand() % k2);
    cout << "Shoes";
    for(int i = 0; i < 7; ++i){
        cout <<met[n][i];
    }
}

void Outwear(vector<vector<string> >&mat,vector<vector<string> >&met){
    int k3 = 0, a3 = 3;
    for(int i = 0; i < a3; ++i){ //a = Longitud met despues de Age, Sex, Colour
            if(mat[i][6] == "Jacket" or mat[i][6]== "Coat" or mat[i][6]== "Blazer" or mat[i][6]== "Vest" or mat[i][6]== "Outer_vest"){
                met.push_back(mat[i]);
                ++k3;
            }
                    
    }
    srand(time(NULL));
    int n = (rand() % k3);
    cout << "Outwear";
    for(int i = 0; i < 7; ++i){
        cout <<met[n][i];
    }
}

void Accessories(vector<vector<string> >&mat,vector<vector<string> >&met){
    int k4 = 0, a4 = 3;
    for(int i = 0; i < a4; ++i){ //a = Longitud met despues de Age, Sex, Colour
            if(mat[i][6] == "Sunglasses" or mat[i][6]== "Belt" or mat[i][6]== "Umbrella" or mat[i][6]== "Hat"){
                met.push_back(mat[i]);
                ++k4;
            }
                    
    }
    srand(time(NULL));
    int n = (rand() % k4);
    cout << "Accessories";
    for(int i = 0; i < 7; ++i){
        cout <<met[n][i];
    }
}

int main(){
    //Legeix la matriu de les peces de roba
    string Comodin;
    int tamaño = 0, tamaño2 = 0;
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
    Primera_peca(sex,age);
    Shoes(sex,age);
    Outwear(sex,age);
    Accessories(sex,age);
}