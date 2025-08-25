#include <iostream>
#include <string>

using namespace std;

string rps(const string& player1, const string& player2){
    if (player1 == player2){
    return "Draw!";
}

if ((player1 == "scissors" && player2 == "paper") ||
    (player1 == "paper" && player2 == "rock") ||
    (player1 == "rock" && player2 == "scissors")) {
        return "Player 1 won!";
    } else {
        return "Player 2 won!";
    }
}
