#include <iostream>
#include <map>

#include "Funcionario.h";
#define n_iteracoes 3

int main()
{
    std::map<int, funcionario*> mapaFuncionario;
    funcionario* ptr = new funcionario[n_iteracoes];
    for (int i = 0; i < n_iteracoes; i += 1) {
        mapaFuncionario[i] = ptr->gravarColaborador();
    }
    for (auto& v : mapaFuncionario) {
        std::cout << v.first << " - nome: " << std::endl
            << v.second->getNome() << std::endl << "salario = "
            << v.second->getSalario() << std::endl;
    }
    return 0;
}