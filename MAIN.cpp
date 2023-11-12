#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

vector<string> Primera_peca(vector<vector<string> >mat,vector<vector<string> >&met,int y){
    int k1 = 0;
    for(int i = 0; i < mat.size(); ++i){
            if(mat[i][6] == "Shirt" or mat[i][6]== "Sweater" or mat[i][6]== "Top" or mat[i][6]== "Blouse" or mat[i][6]== "T-Shirt" or mat[i][6]== "Cardigan" or mat[i][6]== "Polo" or mat[i][6]== "Sweatshirt"){
                met.push_back(mat[i]);
                ++k1;
            }

    }
    srand(time(NULL)+y);
    int n = (rand() % k1);
    cout << "Top ";
    vector<string> res = met[n];
    for(int i = 0; i < 8; ++i){
        cout <<met[n][i]<<" ";
    }
    cout<<endl;
    return res;
}

vector<string> Parte_inferior(vector<vector<string> >mat,vector<vector<string> >&met,int y){
    int k5 = 0;
    for(int i = 0; i < mat.size(); ++i){
            if(mat[i][6] == "Trousers" or mat[i][6]== "Jeans" or mat[i][6]== "Skirt" or mat[i][6]== "Shorts" or mat[i][6]== "Leggins" or mat[i][6]== "Bermudas" or mat[i][6]== "Joggers" or mat[i][6]== "Skort"){
                met.push_back(mat[i]);
                ++k5;
            }

    }
    srand(time(NULL)+y);
    int n5 = (rand() % k5);
    cout << "Bottom ";
    vector<string> res = met[n5];
    for(int i = 0; i < 8; ++i){
        cout <<met[n5][i]<<" ";
    }
    cout<<endl;
    return res;
}

vector<string> Shoes(vector<vector<string> >mat,vector<vector<string> >&met,int y){
    int k2 = 0;
    for(int i = 0; i < mat.size(); ++i){
            if(mat[i][6] == "Shoes" or mat[i][6] == "Ankle_Boots" or mat[i][6] == "Boots" or mat[i][6] == "Trainers" or mat[i][6] == "Slippers" or mat[i][6] == "Clogs"){
                 met.push_back(mat[i]);
                ++k2;
            }

    }
    srand(time(NULL)+y);
    int n2 = (rand() % k2);
    cout << "Shoes ";
    vector<string> res = met[n2];
    for(int i = 0; i < 8; ++i){
        cout <<met[n2][i]<<" ";
    }
    cout<<endl;
    return res;
}

vector<string> Outwear(vector<vector<string> >mat,vector<vector<string> >&met,int y){
    int k3 = 0;
    for(int i = 0; i < mat.size(); ++i){ //a = Longitud met despues de Age, Sex, Colour
            if(mat[i][6] == "Jacket" or mat[i][6]== "Coat" or mat[i][6]== "Blazer" or mat[i][6]== "Vest" or mat[i][6]== "Outer_vest"){
                met.push_back(mat[i]);
                ++k3;
            }

    }
    srand(time(NULL)+y);
    int n3 = (rand() % k3);
    cout << "Outwear ";
    vector<string> res = met[n3];
    for(int i = 0; i < 8; ++i){
        cout <<met[n3][i]<<" ";
    }
    cout<<endl;
    return res;
}

vector<string> Accessories(vector<vector<string> >mat,vector<vector<string> >&met, int y){
    int k4 = 0;
    for(int i = 0; i < mat.size(); ++i){ //a = Longitud met despues de Age, Sex, Colour
            if(mat[i][6] == "Sunglasses" or mat[i][6]== "Belt" or mat[i][6]== "Umbrella" or mat[i][6]== "Hat"){
                met.push_back(mat[i]);
                ++k4;
            }

    }
    srand(time(NULL)+y);
    int n4 = (rand() % k4);
    cout << "Accessories ";
    vector<string> res = met[n4];
    for(int i = 0; i < 8; ++i){
        cout <<met[n4][i]<<" ";
    }
   cout <<endl;
   return res;
}

void Age(vector<vector<string> >mat,vector<vector<string> >&met){
    //Preguntas para eliminar elementos de la matriz
    string Kid_Adult;
    cout << "Kid or Adult? ";
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
    ifstream Data("P_ducto.txt");
    ofstream Datax("Fotos_Fuera.txt");
    vector<vector<string> > mat(9222, vector<string>(8));
    vector<vector<string> >meta;
    vector<vector<string> >sex;
    vector<vector<string> >age;

    for(int i=0; i<9222; ++i){
        for (int g=0; g<8;++g){
            Data>>Comodin;
            mat[i][g]=Comodin;
            //cout<< mat[i][g]<<" ";
        }
    }
    Sex(mat,sex);
    Age(sex,age);
    color(age,meta);
    int n;
    cout<<"Numero de outfits: ";
    cin>> n;
    for(int i=0;i<n;++i){
        vector<vector<string> >R1;
        vector<vector<string> >R2;
        vector<vector<string> >R3;
        vector<vector<string> >R4;
        vector<vector<string> >R5;
        cout<<" Outfit number: "<<i+1<<endl;
        vector<string> res_1 = Primera_peca(meta,R1,i);
        vector<string> res_2 = Parte_inferior(meta,R2,i);
        vector<string> res_3 = Shoes(meta,R3,i);
        vector<string> res_4 = Outwear(meta,R4,i);
        vector<string> res_5 = Accessories(meta,R5,i);
        cout<<endl;
        Datax<<res_1[7]<<endl;
        Datax<<res_2[7]<<endl;
        Datax<<res_3[7]<<endl;
        Datax<<res_4[7]<<endl;
        Datax<<res_5[7]<<endl;
    }
}


