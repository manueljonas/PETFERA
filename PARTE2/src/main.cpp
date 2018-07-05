#include<iostream>
#include"funcoes_gerais.h"

using namespace std;

int main(int argc, char *argv[]){
	if(argc>1){
		cout << argv[1] << endl;
		consulta(argv[1],"animais.csv");
	}
	return 0;
}
