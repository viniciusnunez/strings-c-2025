#include <stdio.h>   

int main() {
    char nome [10] = "Antonio";

    printf("%s\n," nome);

    //for (int cont = 0;cont <5;cont;cont++) {
    for(int cont = 0 ; nome[cont] != '\0;cont++');
        printf ("%c\n", nome [cont]);
    }
}










int main() {
    char mensagem[20];   
    printf("Digite uma mensagem curta: ");
    //scanf("%s", mensagem)
    //

    scanf("%20s", mensagem);  

    printf("%s\n", mensagem);

    return 0;
}
