/* Bir elektrik daðýtým þirketi müþterilerinden kullandýklarý elektrik miktarýna göre ücret almaktadýr. 
Kullanýcýnýn girdiði aylýk elektrik tüketimi (kWh) deðerine göre fatura aþaðýdaki
tarifeye göre hesaplanacaktýr:
Ýlk 100 kWh › 1.5 TL
100–300 kWh arasý › 2 TL
300 kWh üstü › 3 TL
Ayrýca her müþteriden 65 TL sabit abonelik ücreti alýnmaktadýr.
Buna göre kullanýcýnýn girdiði toplam elektrik tüketimine göre aylýk
elektrik faturasýný hesaplayan ve sonucu ekrana yazdýran C programýný yazýnýz.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	float kWh,FaturaTutari;
	float abonelikUcreti=65;
	
	printf("aylik elektrik tüketim (kWh) mikatinizi giriniz: ");
	scanf("%f",&kWh);
	
	if (kWh<=100){
		FaturaTutari=kWh*1.5 + abonelikUcreti;
		printf("aylýk elektrik faturasý tutari:%f\n",FaturaTutari);
	}else if ( kWh<=300){
		FaturaTutari=kWh*2 + abonelikUcreti;
		printf("aylýk elektrik faturasý tutari:%f\n",FaturaTutari);}
	else if (kWh>300){
		FaturaTutari=kWh*3 + abonelikUcreti;
		printf("aylýk elektrik faturasý tutari:%f\n",FaturaTutari);
		}
		
	return 0;

}
