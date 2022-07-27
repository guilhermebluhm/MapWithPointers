#include <iostream>
#include "Funcionario.h"

funcionario* funcionario::gravarColaborador() {

	std::cout << "nome colaborador: ";
	std::cin.ignore();
	std::getline(std::cin, this->nome);
	std::cout << "salario: ";
	std::cin >> this->salario;
	return new funcionario(this->nome, this->salario);

}

std::string funcionario::getNome() {
	return this->nome;
}

float funcionario::getSalario() {
	return this->salario;
}