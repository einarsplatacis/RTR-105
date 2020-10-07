
#include <stdio.h>
#include <stdlib.h>
#define A 11 //Konstantes nozīmēšana (nevar mainīt)

void main()
 {
int a = 10;
// 1.darbība - RAMā tiek atvēlēta vieta viena char datu tipa mainīgā 
//glabāšanā. Šī vieta ir viennozīmīgi saķēdēta ar identifikātoru "a"
//(bet vietai ir arī adrese). Saskaņā ar char datu tipu, vietas izmērs
// - 1 baits.
//2. darbība - vērtības piešķiršana; a = 10 - vērtības piešķiršana
// a -> 0000 1010
printf("Mainīgā a vērtība: %ld\n", sizeof(a)); // baitu skaits mainīgajam
a = 125;
//Maina mainīgā vērtību.
printf("Mainīgā a vērtība: %d\n", A);
char mans_mainiigais = 45;
//jaizmanto mneimoniskie nosaukumi - nosaukums atspoguļo mainīgā jēgu.
a = 0x10; //var arī definēt heksadecimālos skaitļus
printf("Cienījamais lietotāj, lūdzu, ievadi burtu:")
scanf("%c",&a)
printf("Cienījamais lietotāj, tu esi ievadījis simbolu: %c\n",a)
double d = 3.4;
printf("Float attēlo ar: %.2f\n",d);
 }
