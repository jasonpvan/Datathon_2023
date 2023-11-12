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
        for(int i=0; i< mat.size(); ++i){
                if(mat[i][3]=="Kids"){
                    met.push_back(mat[i]);
            }
        }
    }
    else if(Kid_Adult == "Adult"){
        //Solo deja las opciones con Adult
        for(int i=0; i<mat.size(); ++i){
                if(mat[i][3]=="Adult"){
                    met.push_back(mat[i]);
            }
        }
    }
}

void Sex(vector<vector<string> >mat,vector<vector<string> >&mm){
    //Preguntas para eliminar elementos de la matriz
    string Women_Man;
    cout << "Women or Man? ";
    cin >> Women_Man;
    if (Women_Man == "Man"){
        //Solo deja las opciones con Adult
        for(int i=0; i<mat.size(); ++i){
                if(mat[i][2]=="Male"){
                    mm.push_back(mat[i]);
            }
        }
    }
    else if(Women_Man == "Women"){
        //Solo deja las opciones con Adult
        for(int i=0; i<mat.size(); ++i){
                if(mat[i][2]=="Female"){
                    mm.push_back(mat[i]);
            }
        }
    }
}

void color(vector<vector<string> >mat,vector<vector<string> >&mmm){
    string Color;
    cout<<"Calid/Neutral/Cold? ";
    cin>>Color;
    if (Color == "Calid"){
            //Solo deja las opciones con Adult
            for(int i=0; i<mat.size(); ++i){
                    if(mat[i][1] == "ORANGE" || mat[i][1] == "RED" || mat[i][1] == "YELLOW" || mat[i][1] == "PINK"){
                        mmm.push_back(mat[i]);
                }
            }
        }
    else if (Color == "Neutral"){
            //Solo deja las opciones con Adult
            for(int i=0; i<mat.size(); ++i){
                    if(mat[i][1] == "White" || mat[i][1]== "GREY" || mat[i][1]=="BROWN"){
                        mmm.push_back(mat[i]);
                }
            }
        }
    else{
            //Solo deja las opciones con Adult
            for(int i = 0; i < mat.size(); ++i){
                    if(mat[i][1] == "PURPLE" || mat[i][1]=="GREEN" || mat[i][1]=="BLUE"){
                        mmm.push_back(mat[i]);
                }
            }
        }
}

int main(){
    //Llegeix la matriu de les peces de roba
    string Comodin;
    ifstream Data("PRODUCTO_DATA_BUENO.txt");
    vector<vector<string> > mat(9222, vector<string>(7));
    vector<vector<string> >meta;
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
    color(age,meta);
    cout << meta.size() << endl;

}


