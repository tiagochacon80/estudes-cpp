// Incluindo a de stream de entrada e saída (in-out stream)
#include <iostream> 

// Incluindo a de stream de entrada e saída (in-out stream)
#include <iomanip>
 
// Normalmente, para acessar as funções padrão do C++, utilizamos
// o espaço de nome std. Por exemplo: std::cout. Para evitar escrever
// std sempre, incluímos a linha abaixo:
using namespace std;

// Função principal
int main(){
	// Variável para armazenar o valor que será lido futuramente. O tipo
	// float é utilizado em números que podem ser decimais (com vírgula)
	float valor;
	
	// cout (character output) é a forma de imprimir caracteres no console
	cout << "Valor em dolares canadenses: ";
	
	// cin (character input) é a forma de receber caracteres do console
	cin >> valor;
	
	// Calculamos os diferentes valores em euro
	float euro1 = valor / 1.35;
	float euro2 = valor / 1.40;
	float euro3 = valor / 1.60;
	
	// Agora vamos começar a imprimir a tabela. O comando endl (end line)
	// quebra a linha após a impressão.
	//
	// fixed << setprecision(2) faz com que os float sejam impressos com 8 casas decimais
	//
	// setw(14) faz com que a impressão do float ocupe 14 caracteres, alinhando à direita,
	// assim, se o numero impresso tiver menos de 14 caracteres, os caracteresrestantes são
	// preenchidos com espaços vazios
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
	
	// Return 0 retorna o valor 0 na saida do programa. 0 é o valor padrão para se retornar
	return 0;	
}
