#include <iostream>
#include <ctime>

using namespace std;

int numeroSecreto(){
    srand (time (NULL)); 
    const int numeroSecreto = rand ()%10;

    std::cout << "A letra secreta eh " << numeroSecreto << std::endl;
}