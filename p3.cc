#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void Age(vector<vector<string> >mat,vector<vector<string> >&met){
    //Preguntas para eliminar elementos de la matriz
    string Kid_Adult;
    cout << "Kid o Adult? ";
    cin >> Kid_Adult;
    if (Kid_Adult == "Kid"){
        //Solo deja las opciones con Adult
        for(int i=0; i<9222; ++i){
                if(mat[i][3]=="Kids"){
                    met.push_back(mat[i]);
            }
        }
    }
    else if(Kid_Adult == "Adult"){
        //Solo deja las opciones con Adult
        for(int i=0; i<9222; ++i){
                if(mat[i][3]=="Adult"){
                    met.push_back(mat[i]);
            }
        }
    }
}

void Sex(vector<vector<string> >mat,vector<vector<string> >&met){
    //Preguntas para eliminar elementos de la matriz
    string Women_Man;
    cout << "Women or Man? ";
    cin >> Women_Man;
    if (Women_Man == "Man"){
        //Solo deja las opciones con Adult
        for(int i=0; i<9222; ++i){
                if(mat[i][2]=="Male"){
                    met.push_back(mat[i]);
            }
        }
        cout<<met.size();
    }
    else if(Women_Man == "Women"){
        //Solo deja las opciones con Adult
        for(int i=0; i<9222; ++i){
                if(mat[i][2]=="Female"){
                    met.push_back(mat[i]);
            }
        }
    }
}

int main(){
    //Legeix la matriu de les peces de roba
    string Comodin;
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
    Sex(mat,sex);
    Age(sex,age);
}



