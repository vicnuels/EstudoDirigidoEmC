#include <stdio.h>
//Victor Emanuel Sousa 2021 Lima ig: vic_lima.f.q
int main(){
    float F, C;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &F);

    C = ((F - 32) * 5) / 9;

    printf("%f graus Fahrenheit e igual a %f graus Celsius.\n", F, C);

    system("pause");
    return 0;
}
