#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void Sex(vector<vector<string>>mat){
    //Preguntas para eliminar elementos de la matriz
    string Male_Female_Unisex;
    cout << "Male or female?";
    cin >> Male_Female_Unisex;
    for(int i=0; i<10; i++){
        for (int g=0; g<7;g++){
            cout<< mat[i][g]<<" ";
        }
    cout<<endl;
    }
    if (Male_Female_Unisex == "Male"){
        //Solo deja las opciones con Male y Unisex
        cout << "Hola";
    } else {
        cout << "Adiós";
        //Solo deja las opciones con Female y Unisex
    }
}

int main(){
    //Legeix la matriu de les peces de roba
    string Comodin;
    ifstream Data("PRODUCTO_DATA_BUENO.txt");
    vector<vector<string> > mat(10, vector<string>(7));
    for(int i=0; i<10; i++){
        for (int g=0; g<7;g++){
            Data>>Comodin;
            mat[i][g]=Comodin;
            //cout<< mat[i][g]<<" ";
        }
    cout<<endl;
    }
    Sex(mat);
    //Fa una purga dels gustos de la persona
    
    
}



