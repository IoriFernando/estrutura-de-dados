#include <stdio.h>
#include <locale.h>
#include <math.h>


//Tipo de esturura simples 
typedef struct 
{
    float peso; //Em kilogramas
    float altura; //Em metros 
}pesoAltura;

//Cálculo do IMC usando struct peso/(altura)²
int main(){
    
    setlocale(LC_ALL,"portuguese");
    printf("Cálculo do IMC:\n");
    
    pesoAltura pessoa1;

    printf("Defina o peso em kg: ");
    scanf("%f",&pessoa1.peso);
    printf("Defina a altura em metros: ");
    scanf("%f",&pessoa1.altura);


    float imc = pessoa1.peso/(pessoa1.altura*pessoa1.altura);

    printf("O índice de massa corporal (imc) é de: %.2f, sendo classificado como: ", imc);
    if (imc < 18.5)
    {
        printf("subpeso\n");
    }else if (imc >18.5 && imc <=24.9){
        printf("peso normal\n");
    }else if (imc > 24.9 && imc <=29.9){
        printf("sobrepeso\n");
    }else if(imc >= 30){
        printf("obesidade\n");
    }else{
        printf("Dados inválidos\n");
    }
    
    return 0;
}
