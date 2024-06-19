#include <iostream>
using namespace std;


    
    int main(){
    char tablero[6][7];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            tablero[i][j] = ' ';
        }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout<< "| " <<  tablero[i][j] << " ";
            
        }
        cout <<"|\n";
    }
    for (int j = 0; j < 7; ++j) {
        cout << "----";
    }
        cout << "-\n";
    for (int j = 0; j < 7; ++j) {
        cout << "  " << j + 1 << " ";
    }
        cout << "\n";

    }
    }