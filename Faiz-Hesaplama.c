/* Bir banka müþterilerine yatýrdýklarý paraya göre yýllýk faiz uygulamaktadýr.
 Kullanýcýnýn bankaya yatýrdýðý para miktarý kullanýcýdan alýnacaktýr.
Faiz oranlarý:
Para Miktarý	Faiz
0 – 10.000 TL	%5
10.000 – 50.000 TL	%7
50.000 TL üstü	%10
Program:
Kullanýcýnýn yatýrdýðý parayý alacaktýr.Faiz oranýna göre 1 yýl sonunda elde edeceði 
toplam para miktarýný hesaplayacaktýr . Sonucu ekrana yazdýracaktýr.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float yatirilanPara,toplamPara;
	
	printf("lütfen bankaya yatiracaðiniz para tutarini giriniz:");
	scanf("%f",&yatirilanPara);
	
	if(0<yatirilanPara && yatirilanPara<100){
		toplamPara=yatirilanPara + yatirilanPara*0.05;
		printf("bankadaki toplam paraniz:%f",toplamPara);
	}else if(10000<yatirilanPara && yatirilanPara<50000){
		toplamPara=yatirilanPara + yatirilanPara*0.07;
		printf("bankadaki toplam paraniz:%f",toplamPara);
	}else if(yatirilanPara<50000){
		toplamPara=yatirilanPara + yatirilanPara*0.1;
		printf("bankadaki toplam paraniz:%f",toplamPara);
	}
	return 0;
}

