#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main()
{
    int casos;
    string in;
    string nombre;
    cin >> casos;
    
    for(int i = 0; i < casos; i++){
        cin >> in >> nombre;
        cout <<"Hola, " << nombre << "." << endl;
    }
        
    return 0;
}
