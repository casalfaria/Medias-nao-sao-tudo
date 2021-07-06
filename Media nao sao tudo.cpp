// Media nao sao tudo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "Funcoes.h"


int main()
{
    //Funcao de distribuicao de probabilidade normal
    double x,mean, std_dev;
    std::cout << "Insira o valor da media e desvio padrao de seus dados: " << std::endl;
    std::cin >> mean >> std_dev;
    x = 12;

    std::cout << "A probabilidade do ponto x ocorrer na distribuicao normal e "  << normal_distribution_pdf(x,mean,std_dev) << std::endl;





    //Funcao de distribuicao de probabilidade normal padrao
    std::cout << "A probabilidade do ponto x ocorrer na distribuicao normal padrao e " << normal_distribution_std(x) << std::endl;

    return 0;
}
