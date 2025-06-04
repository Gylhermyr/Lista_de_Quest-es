//Questão 28

/*#include <stdio.h>

int main() {
    float valor_gasto;
    int cod = 0;
    printf("Qual o valor gasto por você? \n");  
    scanf("%f", &valor_gasto);
    printf("Digite o número que deseja realizar a forma de pagamento\n 1: A vista com desconto de 10%%?\n 2: Parcelado em 2 vezes sem juros?\n 3: Parcelado em 3 até 10 vezes com 3%% de juros?(apenas para compras acima de 100). \n");
    scanf("%d", &cod);
    if(cod == 3 && valor_gasto < 100){
        printf("Não permitimos que valores menores que 100 sejam parcelado em 3 vezes ou acima.");
    }
    if(cod<1 || cod>3){
        printf("Não existe essa opção de pagamento.");
    }
    if(cod == 1){
        float total_gasto = (valor_gasto * 0.90);
        printf("Sua compra deu R$%3.2f. \n", total_gasto);
    }
    if(cod == 2){
        float total_gasto = valor_gasto / 2;
        printf("Sua compra deu R$%3.2f durante 2 meses. \n", total_gasto);
    }
    if(cod == 3 && valor_gasto >= 100){
        int mes = 0;
        printf("Quantos meses deseja parcelar? \n");
        scanf("%d", &mes);
        if(mes<=3 || mes>=10){
            printf("Não é possivel parcelar por essa quantidade de meses. \n");
        }
        else{
            float valor_indice_juros = 0.03;
            float total_gasto = ((valor_gasto * valor_indice_juros) * mes) +
            valor_gasto;
            float valor_mes = total_gasto / mes;
            printf("Sua compra deu R$%3.2f, ficando %3.2f durante %d meses. \n",
                total_gasto, valor_mes, mes);
        }
    }
    return 0;
}*/

//Questão 34

/*#include <stdio.h>

int main() {
    int telefone = 0, idade = 0;
    char nome[100], endereco[100];
    printf("Fale seu nome(Não use espaço) \n");
    scanf("%s", &nome);
    printf("Fale sua idade \n");
    scanf("%d", &idade);
    printf("Fale seu endereço(Não use espaço) \n");
    scanf("%s", &endereco);
    printf("Fale seu telefone(Não use espaço) \n");
    scanf("%d", &telefone);
    printf ("Meu nome é %s, tenho %d anos e moro em %s. Meu número de telefone é %d.", nome, idade, endereco, telefone);
    return 0;
}*/
