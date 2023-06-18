#include <locale.h>
#include <math.h>
#include <stdio.h>

void adicao() {
  float n1, n2;
  printf("\nDigite um número : ");
  scanf("%f", &n1);
  printf("\nDigite um número : ");
  scanf("%f", &n2);
  printf("\n%.1f + %.1f = %.1f\n", n1, n2, n1 + n2);
}
void subtracao() {
  float n1, n2;
  printf("\nDigite um número : ");
  scanf("%f", &n1);
  printf("\nDigite um número : ");
  scanf("%f", &n2);
  printf("\n%.1f - %.1f = %.1f\n", n1, n2, n1 - n2);
}
void multiplicacao() {
  float n1, n2;
  printf("\nDigite um número : ");
  scanf("%f", &n1);
  printf("\nDigite um número : ");
  scanf("%f", &n2);
  printf("\n%.2f x %.2f = %.2f\n", n1, n2, n1 * n2);
}
void divisao() {
  float n1, n2;
  printf("\nDigite um número : ");
  scanf("%f", &n1);
  printf("\nDigite um número : ");
  scanf("%f", &n2);
  if (n2 == 0)
    printf("\nNão existe divisão por 0\n");
  else
    printf("\n%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
}
void raiz() {
  float n, r, x;
  printf("\nVocê quer calcular a raiz quadrada ou cúbica? (2/3) \n");
  scanf("%f", &r);
  if (r == 2) {
    printf("\nInsira o número : ");
    scanf("%f", &n);
    if (n < 0)
      printf("\nNão existe raiz quadrada de número negativo\n");
    else {
      x = sqrt(n);
      printf("\nA raiz quadrada de %.1f = %.1f\n", n, x);
    }
  }
  if (r == 3) {
    printf("\nInsira o número : ");
    scanf("%f", &n);
    if (n < 0)
      printf("\nNão existe raiz quadrada de número negativo\n");
    else {
      x = cbrt(n);
      printf("\nA raiz quadrada de %.1f = %.1f\n", n, x);
    }
  }
}
void potenciacao() {
  float n, n1;
  int p, x;
  printf("\nQual potência você quer calcular? \n");
  scanf("%d", &p);
  printf("\nDigite o número : ");
  scanf("%f", &n);
  n1 = n;
  for (x = 0; x < p - 1; x++) {
    n1 *= n;
  }
  printf("\n%.1f elevado a %d = %.1f\n", n, p, n1);
}
void fatorial() {
  int n, x, r=1;
  printf("\nDigite o número : ");
  scanf("%d", &n);
  if (n <= 0)
  printf("\nNão existe fatorial de 0 e de número negativo\n");
  else {
  for (x = 1; x <= n; x++) {
    r *= x;
  }
  printf("\nO fatorial de %d = %d\n", n, r);
}
}

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int o;
  char r;
  do {
    printf("----------------------------------------");
    printf("\n| Qual operação você deseja realizar ?  |");
    printf("\n----------------------------------------");
    printf("\n1 - Adição ");
    printf("\n2 - Subtração ");
    printf("\n3 - Multiplicação ");
    printf("\n4 - Divisão ");
    printf("\n5 - Raiz quadrada/Cúbica ");
    printf("\n6 - Potenciação ");
    printf("\n7 - Fatorial \n");
    printf("----------------------------------------\n");
    scanf("%d", &o);
    switch (o) {
    case 1:
      adicao();
      break;
    case 2:
      subtracao();
      break;

    case 3:
      multiplicacao();
      break;

    case 4:
      divisao();
      break;

    case 5:
      raiz();
      break;

    case 6:
      potenciacao();
      break;

    case 7:
      fatorial();
      break;

      default :
      printf("\nDigite um número de 1 a 7 de acordo com a operação que você deseja\n");
      break;
    }
    setbuf(stdin, NULL);
    printf("\nVocê deseja voltar para a tela das operações? (s/n)\n");
    scanf("%c", &r);

  } while (r == 's');
  return 0;
}