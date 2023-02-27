#include <iostream>

void desejaJogar()
{
    std::cout << "Deseja participar do nosso jogo?" << std::endl;
    std::cout << "Se sim digite (S), se nao digite (N)" << std::endl;
    char resposta;
    std::cin >> resposta;

    while (true)
    {
        if (resposta == 'S' || resposta == 's'){
            std::cout << "Legal, vamos iniciar o nosso jogo! " << std::endl;
            break;
        }
        else {
            std::cout << "Ah que pena, nos vemos em uma outra hora entao! " << std::endl;
            std::cout << "Saindoooooooooooooooooooooooooooooooooooooooooo " << std::endl;
            break;
        }
    }
}