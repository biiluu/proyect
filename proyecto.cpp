#include <iostream>
using namespace std;


    
    int main(){
    char tablero[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
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
        cout << "HOla";
        

    }
    }