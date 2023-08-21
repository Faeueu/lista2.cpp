#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int opc = -1;

    do {
        cout << "1 - Positivo ou negativo\n";
        cout << "2 - Maior numero \n";
        cout << "3 - Masculino, Feminino ou Neutro\n";
        cout << "4 - Menor, Maior e Soma\n";
        cout << "5 - Tabuada de X \n";
        cout << "6 - Numero primo \n";

        cout << "0 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opc;

        if (opc == 1){
            int Num;
            cout << "Digite um numero: ";
            cin >> Num;

            if(Num > 0){
                cout << "Numero positivo";
            }else if(Num < 0){
                cout << "Numero negativo";
            }else{
                cout << "Zero e nulo";
            }
            break;

        }else if(opc == 2){
            float Num1, Num2;
            cout << "Digite o Num1: ";
            cin >> Num1;
            cout << "Digite o Num2: ";
            cin >> Num2;

            if(Num1 > Num2){
                cout << "O maior numero e o " << Num1 << "\n";
            }else if(Num2 > Num1){
                cout << "O maior numero e o " << Num2 << "\n";
            }else{
                cout << "Os numeros sao iguais";
            }
            break;

        }else if(opc == 3){
            char genero;

            cout << "Digite o genero, (M) para masculino, (F) para feminino: ";
            cin >> genero;

            if(genero == 'M' || genero == 'm'){
                cout << "MASCULINO";
            }else if(genero == 'F' || genero == 'f'){
                cout << "FEMININO";
            }else{
                cout << "NEUTRO";
            }
            break;

        }else if(opc == 4){
            float Num1, Num2;
            cout << "Digite o Num1: ";
            cin >> Num1;
            cout << "Digite o Num2: ";
            cin >> Num2;

            if(Num1 > Num2){
                cout << "O maior numero e o " << Num1 << "\n";
                cout << "O menor numero e o " << Num2 << "\n";
            }else if(Num2 > Num1){
                cout << "O maior numero e o " << Num2 << "\n";
                cout << "O menor numero e o " << Num1 << "\n";
            }else{
                cout << "Os numeros sao iguais";
            }

            float soma = Num1 + Num2;
            cout << "a soma e " << soma;
            break;

        }else if(opc == 5){
            int X;
            cout << "Digite um valor para X: ";
            cin >> X;
            cout << "Tabuada do " << X << ": \n";

            for (int i = 1; i <= 10; ++i) {
                cout << X << " x " << i << " = " << X * i << "\n";
            }
            break;

        }else if(opc == 6) {
            int Num;
            bool Primo = true;
            cout << "Digite um numero: ";
            cin >> Num;

            if (Num <= 1) {
                Primo = false;
            } else {
                for (int i = 2; i * i <= Num; ++i) {
                    if (Num % i == 0) {
                        Primo = false;
                        break;
                    }
                }
            }
            if (Primo) {
                cout << Num << " e numero Primo \n";
            } else {
                cout << Num << " nao e numero primo \n";
            }
            break;
        }
    } while (opc != 0);
    return 0;
}