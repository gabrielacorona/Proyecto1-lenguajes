#include <iostream>
#include <string>

using namespace std;

class Scanner{
    
public:
    Scanner();
    Scanner(string line);
   // void validate();
    
private:
    string oper;
    string regist;
    string registTwo;
    string type;
};
Scanner::Scanner(){
    oper = "";
    regist = "";
    registTwo = "";
}
Scanner::Scanner(string line){
    int pos = (int)line.find(" ");
    oper = line.substr(0, pos);
    cout << "Oper: " << oper << endl;;
    
    int posTwo = (int)line.find(" ", pos+1);
    regist = line.substr(pos+1, posTwo-3);
    cout << "Regist: " << regist << endl;;
    
    registTwo = line.substr(posTwo+1);
    cout << "Regist Dos: " << registTwo << endl;;
}

//void Scanner::validate(){

//}
