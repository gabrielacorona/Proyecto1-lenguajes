/*
To compile, run: "g++ main.cpp -std=c++11 -o main"
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
//#include "Parser.h"
#include "Scanner.h"
//#include "Token.h"

using namespace std;

int main() {
    vector<string> lista;
    string linea = "";
    ifstream myFile;

    myFile.open("archivo.txt");
    do{
        getline(myFile, linea);
        lista.push_back(linea);
    }while ( linea != ";");
   
    myFile.close();
    
    for(int i = 0; i < lista.size(); i++){
        Scanner myScan(lista[i]);
    }
    return 0;
}

