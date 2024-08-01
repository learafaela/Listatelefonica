#include <iostream> // Biblioteca para entrada e saída de dados em C++

// Função para adicionar produtos ao estoque
void adicionarUsuario(std::string usuarios[], std::string telefones[], int tamanho, std::string usuario, std::string telefone)
{
    usuarios[tamanho] = usuario;   // Adiciona o produto ao final do array de produtos
    telefones[tamanho] = telefone; // Adiciona a quantidade correspondente ao produto
}

// Função para exibir o estoque atual
void exibirUsuario(std::string usuarios[], std::string telefones [],int tamanho, std::string usuario,std::string telefone)
{
    std::cout << "Usuario atual:\n"; // Exibe cabeçalho
    int i = 0;
     while (i < tamanho && usuarios[i] != usuario)
    {
        i++;
    }
    if (i <tamanho) {
        std::cout << "Contato:" << usuario << "telefone:"<< telefone <<std::endl;
    }
}

int main()
{
    const int maxusuarios = 100;       // Define o tamanho máximo do array de produtos
    std::string usuarios[maxusuarios]; // Array para armazenar os produtos
    std::string telefones[maxusuarios];// Array para armazenar as quantidades disponíveis
    int tamanho = 0;                   // Variável para controlar o tamanho atual dos arrays

    // Adiciona produtos inicialmente ao estoque
    adicionarUsuario(usuarios, telefones, tamanho, "Coringa", "111-111");
    tamanho++;
     adicionarUsuario(usuarios, telefones, tamanho, "Duas-Caras", "999-99");
    tamanho++;
    adicionarUsuario(usuarios, telefones, tamanho, "Superman", "666-66");
    tamanho++;

    // Simula algumas vendas
    exibirUsuario(usuarios,telefones,tamanho, "Coringa","111-111");
    exibirUsuario(usuarios,telefones,tamanho, "Duas-Caras","999-99");
    exibirUsuario(usuarios,telefones,tamanho, "Superman","666-66");

    return 0;
}