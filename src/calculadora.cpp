#include <iostream>

using namespace std;

float sumar(int num1, int num2){
return num1 + num2;
}

float restar(int num1, int num2){
    return num1 - num2;
}
float multiplicar(int num1, int num2){
    return num1 * num2;
}

void dividir(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
    } else {
        cout << "Division: " << static_cast<float>(num1) / num2 << endl;
    }
}

int main(){
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "Suma: " << sumar(a, b) << endl;
    cout << "Resta: " << restar(a, b) << endl;
    cout << "Multiplicacion: " << multiplicar(a, b) << endl;
    dividir(a,b);
    return 0;
}