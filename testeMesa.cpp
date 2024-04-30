#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int att2() {
    int num;

    std::cout << "Digite um número inteiro: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << num << " é par." << std::endl;
    } else {
        std::cout << num << " é ímpar." << std::endl;
    }

    return 0;
}


int att3() {
    float num1, num2;
    char op;

    std::cout << "Digite dois números: ";
    std::cin >> num1 >> num2;

    std::cout << "Escolha a operação (+, -, *, /): ";
    std::cin >> op;

    float resultado;
    switch (op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                std::cout << "Divisão por zero não é permitida." << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Operação inválida." << std::endl;
            return 1;
    }

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}




int att4() {
    int num;

    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> num;

    while (num >= 0) {
        std::cout << num << std::endl;
        num--;
    }

    std::cout << "Fogo!" << std::endl;

    return 0;
}

int att5(){
  int num;

  std::cout << "Digite um número inteiro positivo: ";
  std::cin >> num;

  // Check for non-prime cases (<= 1, even except 2, divisible by 3)
  if (num <= 1 || (num > 2 && num % 2 == 0) || num % 3 == 0) {
    std::cout << num << " não é primo." << std::endl;
  } else {
    // Check for divisibility by 5, 7, 11, ... up to the square root of num
    for (int i = 5; i * i <= num; i += 6) {
      if (num % i == 0 || num % (i + 2) == 0) {
        std::cout << num << " não é primo." << std::endl;
        return 0; // Exit if not prime
      }
    }
    // If no divisibility found, it's prime
    std::cout << num << " é primo." << std::endl;
  }

  return 0;
}


int att6() {
    int num;
    int fatorial = 1;

    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> num;

    for (int i = 1; i <= num; ++i) {
        fatorial *= i;
    }

    std::cout << "O fatorial de " << num << " é: " << fatorial << std::endl;

    return 0;
}


int att7() {
    int a, b;

    std::cout << "Digite dois números: ";
    std::cin >> a >> b;

    std::cout << "Valores antes da troca: a = " << a << ", b = " << b << std::endl;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "Valores após a troca: a = " << a << ", b = " << b << std::endl;

    return 0;
}


int att8() {
    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    std::string reverso = palavra;
    std::reverse(reverso.begin(), reverso.end());

    if (palavra == reverso) {
        std::cout << palavra << " é um palíndromo." << std::endl;
    } else {
        std::cout << palavra << " não é um palíndromo." << std::endl;
    }

    return 0;
}









int main(){
    //att2();
    //att3();
    //att4();
    //att5();
    //att6();
    //att7();
    att8();
    //att9();
    //att10();
    //att11();
    //att12();
    //att13();
    //att14();
}