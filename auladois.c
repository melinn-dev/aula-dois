#include <stdio.h>// sempre inicialize as variaveis, ou seja, adicione valores.

    int main (){
        int idade = 25;
        int Idade; // as variaveis sao case sensitive, Idade com (I maisculo) nao é  amesma coisa de idade
        int quantidade = 1 ;
        float altura = 1,69 ;
        double peso = 100,50;
        char letra = 'J';
        char nome [4] = "joao";
        Idade = 23; //iniciei a variavel Idade aqui
        idade = 12; // nao é inicialização pois a idade ja foi inciada

    }
/* dados primitivos em c: 
o que vem antes "int, float etc" sao tipos de dados. eles indicam quais tipos
de dados eles podem armazenar. por exemplo:
    int : valores inteiros 2, 3
    float: valores "quebrados, com virgula" 1,5. 2,1 usado para numeros pequenos
    double: mesmo do float, porem como valores maiores
    char: caractere, letra. 
também pode armazenar strings (palavras), mas preciso usar '[]'

'SEMPRE INICIALIZE SUA VARIÁVEL. SEMPRE ATRIBUA VALORES
