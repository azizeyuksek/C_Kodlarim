/*Problem: Kombinasyon Hesaplama

Kullanýcýdan iki sayý al: n ve r . Bu sayýlara göre kombinasyonu hesapla:
C(n,r)= n!/ (n-r)!r!
Kurallar:
n>=r olmalý (deðilse uyarý ver)
Faktöriyel hesabýný sen yap (döngüyle ya da fonksiyonla)
Sonucu ekrana yazdýr.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,r,i,factorialN=1,factorialR=1,factorialNR=1, kombinasyon;
	printf("n sayýsýný giriniz:");
	scanf("%d",&n);
	printf("r sayýsýný giriniz:");
	scanf("%d",&r);
	
	if(n<r){
		printf("hata! lutfen n>=r olacak þekilde sayi giriniz.");
		return 0;
	}
	
	for(i=1;i<=n;i++){
		factorialN*=i;
	}
				
	for(i=1;i<=r;i++){
		factorialR*=i;
	}
	
	for(i=1;i<=(n-r);i++){
		factorialNR*=i;
	}
	
	kombinasyon=factorialN/ (factorialNR*factorialR) ;
	printf(" kombinasyon sonucu:%d",kombinasyon);
	
	
	return 0;
}
