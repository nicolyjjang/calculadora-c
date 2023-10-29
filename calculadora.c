
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    char operacao;
    double numero1, numero2, resultado;
    
    //operacao
    printf("Bem-vindo a calculadora!\n");
    printf("Digite a operação que deseja fazer (+,-,*,/): ");
    scanf("%c", &operacao);
    
    //numero 1
    printf("Digite o primeiro número: ");
    scanf("%lf", &numero1);
    
    //numero 2
    printf("Digite o segundo número: ");
    scanf("%lf", &numero2);
    
    //estrutura condicional
    switch(operacao){
        case '+':
            resultado = numero1 + numero2; 
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
        
            if(numero2 == 0){
                printf("Divisão por 0 não é permitida!");
                return 1;
            } else{
                resultado = numero1 / numero2;
            }
            break;
        default:
            printf("Erro: você escrever uma operação inválida");
            return 1;
    }
    
    printf("%.2lf %c %.2lf = %.2lf", numero1, operacao, numero2, resultado);
    
    return 0;
}
