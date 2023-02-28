#include <iostream>

void nivelJogo(){
    std::cout << "Escolha o nivel que deseja jogar. " << std::endl;
    std::cout << "(F) para jogar no facil, (M) para jogar no medio e (D) para dificil" << std::endl;
    char responda;
    std::cin >> responda;

    int numeroTentativas;

    if (responda == 'S' || responda == 's'){
        numeroTentativas = 15;
    }
    else if (responda == 'M' || responda == 'm'){
        numeroTentativas = 10;
    }
    else if (responda == 'D' || responda == 'd'){
        numeroTentativas = 5;
    }
}
