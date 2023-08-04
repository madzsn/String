#include <iostream>
#include <string>

int main() {
    std::string nome;

    nome = "wanessa";
    std::string sobrenome = "da mata";
    std::string nomeCompleto = nome + " " + sobrenome;

    std::cout << "nome c         ompleto: " << nomeCompleto << std::endl;

    return 0;

}