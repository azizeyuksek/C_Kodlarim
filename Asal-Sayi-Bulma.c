/* Kullanýcý tarafýndan girilen sayýya kadar olan tüm asal sayýlarý ekrana yazdýrma */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int limit, sayi, i, asal;

    printf("Hangi sayiya kadar olan asallari gormek istersin?: ");
    scanf("%d", &limit);

    
    for (sayi = 2; sayi <= limit; sayi++) {
        asal = 1; // Her yeni sayý için önce "asaldýr" kabul ediyoruz

        for (i = 2; i * i <= sayi; i++) {
            if (sayi % i == 0) {
                asal = 0; 
                break;
            }
        }

        if (asal == 1) {
            printf("%d ", sayi);
        }
    }
    return 0;
}
