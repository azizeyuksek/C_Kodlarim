/* Çarpým tablosu yapýmý*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1, number;

    printf("Bir sayi giriniz (1-10 arasi): ");
    scanf("%d",& number); 

    
    if (number < 1 || number > 10) {
        printf("Lutfen sadece 1 ile 10 arasinda bir sayi giriniz!\n");
        return 0;
    }

    printf("\n--- %d Sayisinin Carpim Tablosu ---\n", number);

    while (i <= 10) {
        printf("%d * %d = %d\n", number, i, number * i);
        i++;
    }

    system("pause"); // windowsta Ekranýn hemen kapanmamasý için kullanabiliriz(isteðe baðlý)
    return 0;
}
