#include <string>

class funcionario {
private:
	std::string nome;
	float salario;
public:
	funcionario() {};
	funcionario(std::string ch, float sal) {
		this->nome = ch;
		this->salario = sal;
	}
	funcionario* gravarColaborador();
	std::string getNome();
	float getSalario();
};