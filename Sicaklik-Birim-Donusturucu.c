/*Kullanýcýdan bir Santigrat (°C) deðeri alacaksýn ve bu deðeri hangi birime çevirmek istediðini
soracaksýn.Kurallar:Kullanýcýdan bir sýcaklýk deðeri al (Örn: 25.5 °C).
Ekrana þu menüyü bas:1 - Fahrenheit'a Çevir2 - Kelvin'e Çevir3 - Çýkýþswitch-case yapýsýný 
kullanarak seçime göre hesaplamayý yap:
Fahrenheit Formülü: $F = (C \cdot 1.8) + 32$
Kelvin Formülü: $K = C + 273.15$
Eðer kullanýcý 1 veya 2 dýþýnda bir sayý girerse "Hatalý seçim!" uyarýsý ver.
Sonucu ekrana yazdýrýrken noktadan sonra 2 basamak göster (%.2f).
Kodun sadece bir kez çalýþýp kapanmasýn. Kullanýcý 3 (Çýkýþ) tuþuna basana kadar 
yeni sýcaklýk deðerleri sormaya devam etsin
(Daha önce konuþtuðumuz while döngüsünü hatýrlatýrým ??).*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	float santigrat,fahrenheit,kelvin;
	int choose=0;
	
	printf("lütfen bir santigrat derecesi giriniz:");
	scanf("%f",&santigrat);
	
	while(choose!=3){
		printf("--- Sýcaklýk Dönüþümü ---");
		printf("lutfen bie secim seciniz :(1/2/3)");
		scanf("%d",&choose);
		
		switch(choose){
			case 1:printf("1 - Fahrenheit'a Çevir:");
			       fahrenheit = (santigrat * 1.8) + 32;
			       printf("fahreheit deðeri:%f\n",fahrenheit);
			       break;
			       
			case 2:printf("2 - Kelvin'e Çevir:");
			       kelvin = santigrat + 273.15;
			       printf("kelvin deðeri:%f\n",kelvin);
			       break;
			       
			case 3:printf("3 - Çýkýþ");
			       break;
			       default:printf("hatali seçim yaptiniz!");
			
		}
		
	}

	return 0;
	
}
