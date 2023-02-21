#include <iostream> 

using namespace std;

int main(){
	int numero;
	
	// La�o de valida��o da entrada. Este la�o repete indefinidamente
	// mas ser� quebrado quando o usuario entrar uma entrada VALIDA
	while(true) {
		// Imprime mensagem
		cout << "Numero: ";
		// Le um numero da entrada padrao
		cin >> numero;
		
		// Se o numero for menor que 0 OU maior que 10
		if(numero < 1 || numero > 10)
			// Imprime mensagem de entrada invalida
			cout << endl << "Numero invalido. Entre um numero entre 0 e 10." << endl << endl;
		// Caso contrario
		else
			// Quebra o la�o while;
			break;
	}
	
	cout << endl << "TABUADA DO " << numero << ":" << endl;
	// Faz um la�o para i = 1, ..., 10.
	for(int i = 1; i <= 10; i++)
		// Imprime a linha que corresponde � multiplica��o do numero por i
		cout << numero << " x " << i << " = " << i * numero << endl;
	
	
	return 0;
}
