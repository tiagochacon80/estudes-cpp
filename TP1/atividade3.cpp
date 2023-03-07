#include <iostream> 

using namespace std;

int main(){
	// Neste programa não há entrada do usuário, apenas a impressão
	
	// O laço repete enquanto i*i for menor que 1000
	for(int i = 0; i*i < 1000; i++)
		// Imprime i*i
		cout << i*i << " ";
		
	return 0;
}
