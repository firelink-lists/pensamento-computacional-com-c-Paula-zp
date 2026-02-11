/**
 * @exercise Lista Básico C++ - Exercício 3
 * @title Array Dinâmico
 * @description Aloque dinamicamente um array de inteiros com capacidade para 100 elementos. Crie uma função que receba o array (ponteiro) e uma variável de tamanho (por referência), peça ao usuário para digitar o tamanho desejado e preencha o array com valores (ex: múltiplos de 10). No main, exiba o array preenchido.
 * @input stdin
 * @output stdout
 * @timeout 1000
 * @test name="Tamanho 5" input="5" expected="0 10 20 30 40"
 * @test name="Tamanho 3" input="3" expected="0 10 20"
 * @test name="Tamanho 1" input="1" expected="0"
 */

#include <iostream>

using namespace std;

void preencher_array(int* array, int& tamanho){
	cin >> tamanho;
	if (tamanho > 100) {
        tamanho = 100;
	}

	if (tamanho < 0) {
        tamanho = 0;
	}

	for (int i = 0; i < tamanho; i++){
		array[i] = i*10;
	}
}

int main() {
    const int CAPACIDADE = 100;
    int* array = new int[CAPACIDADE];
    int tamanho = 0;
    
    preencher_array(array, tamanho);
    
    for (int i = 0; i < tamanho; i++) {
        if (i > 0) cout << " ";
        cout << array[i];
    }
    
    delete[] array;
    
    return 0;
}
