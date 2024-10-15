#include <iostream>
#include <iomanip> 
#include <sstream>
#include <vector>

using namespace std;

int main() {
    vector<int> dados; 
    int colunas = 0;

    cout << "Informe os dados: ";
    string input;
    getline(cin, input);
    
    istringstream string(input);
    int num;
    while (string >> num) {
        dados.push_back(num);
    }

    int tamanho = dados.size();

    cout << endl;

    // Exibe os dados informados
    cout << "Dados: [";
    for (int i = 0; i < tamanho; i++) {
        cout << dados[i];
        if (i < tamanho - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl << endl;

    // Retira o total de linhas
    cout << "* Total de linhas: " << tamanho << endl;

    // Retira o total de colunas
    for (int i = 0; i < tamanho; i++) {
        if (dados[i] > colunas) {
            colunas = dados[i];
        }
    }
    cout << "* Total de colunas: " << colunas << endl;

    cout << "\n";

    // Parte de cima do Histograma Horizontal
    cout << "Histograma Horizontal:";
    cout << "\n";
    for (int i = 0; i < tamanho; i++) {
        cout << setw(2) << i + 1 << " | ";  
        for (int j = 0; j < dados[i]; j++) {
            cout << "* "; 
        }
        cout << endl;
    }

    // Parte de baixo do Histograma Horizontal
    cout << "   + ";
    for (int i = 0; i < colunas; i++) {
        cout << "_ ";
    }
    cout << endl;

    cout << "   ";  
    for (int i = 0; i < colunas + 1; i++) {
        cout << setw(1) << i << " "; 
    }
    cout << endl;

    return 0;
}
