/*Proje: Akýllý ATM Menüsü

Bir banka ATM'si için basit bir iþlem menüsü hazýrlaman gerekiyor. Program þu þekilde çalýþmalý:
Ekrana bir menü basmalý:
1 - Bakiye Görüntüle
2 - Para Yatýr
3 - Para Çek
4 - Kart Ýade
Kullanýcýdan bir seçim (1, 2, 3 veya 4) almalý.

switch-case kullanarak:
1 seçilirse: "Bakiyeniz: 5000 TL" yazmalý.
2 seçilirse: "Yatýrmak istediðiniz tutarý girin:" demeli.
3 seçilirse: "Çekmek istediðiniz tutarý girin:" demeli.
4 seçilirse: "Kartýnýz iade ediliyor, iyi günler!" yazmalý.
Bunlar dýþýnda bir sayý girilirse: "Hatalý seçim yaptýnýz!" uyarýsý vermeli.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	float yatirilanPara,cekilenTutar;
	int choose=0;
	float bakiye=5000;

 while (choose != 4) {
        printf("\n--- ISLEM MENUSU ---\n");
        printf("1-Bakiye Goruntule\n2-Para Yatir\n3-Para Cek\n4-Kart Iade\n");
        printf("Seciminiz: ");
        scanf("%d", &choose);
		   
	switch(choose){
		case 1:printf("1-Bakiye Görüntüle!");
		       printf("Bakiyeniz %f\n ti 'dir.'",bakiye);
		       break;
		
		case 2:printf("2-Bakiye Yatir!");
		       printf("Yatirmak istediðiniz para tutarini giriniz:");
		       scanf("%f",&yatirilanPara);
		       break;
		
		case 3:printf("3 - Para Çek");
		       printf("Çekmek istediðiniz tutarý giriniz:");
		       scanf("%f",&cekilenTutar);
		       break;
		       
		case 4:printf("4 - Kart Ýade");
		       printf("Kartýnýz iade ediliyor, iyi günler!" );
		       break;
	    }
	}
	return 0;
}
