/* girilen ayýn kaç günden oluþtuðunu bulma*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int ay;

    printf("****** AY GUN SAYISI HESAPLAYICI ******\n");
    printf("1-12 arasinda bir ay numarasi giriniz: ");
    scanf("%d",& ay);

    switch(ay) {
        case 1: // Ocak
        case 3: // Mart
        case 5: // Mayis
        case 7: // Temmuz
        case 8: // Agustos
        case 10: // Ekim
        case 12: // Aralik
            printf("Girdiginiz ay 31 gunden olusur.\n");
            break;

        
        case 4: // Nisan
        case 6: // Haziran
        case 9: // Eylul
        case 11: // Kasim
            printf("Girdiginiz ay 30 gunden olusur.\n");
            break;

        case 2:
            printf("Subat ayi normalde 28 artik yillarda 29 gunden olusur.\n");
            break;

        default:
            printf("Lutfen  gecerli bir sayi giriniz!\n");
    }
    return 0;
}
