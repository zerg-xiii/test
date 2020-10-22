#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main (){
    setlocale (LC_ALL,"Russian");
        cout <<"Содержимое:\n";
    ifstream f;
    f.open ("test.txt");
    while(!f.eof()){
        char *a=new char[30];
        f >> a;
        cout << a;
        delete[]a;
    }
    f.close();
    system("pause");
}
