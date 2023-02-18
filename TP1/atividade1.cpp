// Incluindo a de stream de entrada e sa�da (in-out stream)
#include <iostream> 

// Incluindo a de stream de entrada e sa�da (in-out stream)
#include <iomanip>
 
// Normalmente, para acessar as fun��es padr�o do C++, utilizamos
// o espa�o de nome std. Por exemplo: std::cout. Para evitar escrever
// std sempre, inclu�mos a linha abaixo:
using namespace std;

// Fun��o principal
int main(){
	// Vari�vel para armazenar o valor que ser� lido futuramente. O tipo
	// float � utilizado em n�meros que podem ser decimais (com v�rgula)
	float valor;
	
	// cout (character output) � a forma de imprimir caracteres no console
	cout << "Valor em dolares canadenses: ";
	
	// cin (character input) � a forma de receber caracteres do console
	cin >> valor;
	
	// Calculamos os diferentes valores em euro
	float euro1 = valor / 1.35;
	float euro2 = valor / 1.40;
	float euro3 = valor / 1.60;
	
	// Agora vamos come�ar a imprimir a tabela. O comando endl (end line)
	// quebra a linha ap�s a impress�o.
	//
	// fixed << setprecision(2) faz com que os float sejam impressos com 8 casas decimais
	//
	// setw(14) faz com que a impress�o do float ocupe 14 caracteres, alinhando � direita,
	// assim, se o numero impresso tiver menos de 14 caracteres, os caracteresrestantes s�o
	// preenchidos com espa�os vazios
	//
	cout << fixed << setprecision(2);
	cout << "+----------------+----------------+----------------+----------------+" << endl;
	cout << "|     Dolares    |      Euro      |      Euro      |      Euro      |" << endl;
	cout << "|   Canadenses   | (cotacao 1.35) | (cotacao 1.40) | (cotacao 1.60) |" << endl;
	cout << "+----------------+----------------+----------------+----------------+" << endl;
	
	// Aqui imprime a linha com os valores. Note que a quebra de linha ocorre apenas no fim
	// 
	cout << "| " << setw(14) << valor << " ";
	cout << "| " << setw(14) << euro1 << " ";
	cout << "| " << setw(14) << euro2 << " ";
	cout << "| " << setw(14) << euro3 << " |" << endl;
	
	cout << "+----------------+----------------+----------------+----------------+" << endl;
	
	// Return 0 retorna o valor 0 na saida do programa. 0 � o valor padr�o para se retornar
	return 0;	
}
