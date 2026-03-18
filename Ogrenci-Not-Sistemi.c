/*Bir üniversitede öðrencilerin baþarý durumu, vize ve final sýnavý notlarýna göre hesaplanan
aðýrlýklý ortalamaya göre belirlenmektedir. Öðrencinin vize notu ve final notu kullanýcýdan
alýnacaktýr.Ortalama aþaðýdaki formüle göre hesaplanacaktýr:
ortalama = vize * 0.4 + final * 0.6
Hesaplanan ortalamaya göre öðrencinin harf notu aþaðýdaki tabloya göre belirlenecektir:
Ortalama	Harf Notu
90–100	AA
80–89	BA
70–79	BB
60–69	CB
50–59	CC
0–49	FF
Buna göre kullanýcýnýn girdiði vize ve final notlarýný kullanarak ortalamayý
hesaplayan ve öðrencinin harf notunu ekrana yazdýran C programýný yazýnýz.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	float vize,final,ort;
	printf("vize notunu giriniz:");
	scanf("%f",&vize);
	
	printf("final notunu giriniz:");
	scanf("%f",&final);
	
	ort=(vize*0.4 + final*0.6);
	printf("ders ortalamasi:%f",ort);
	
	if (90<ort && ort<100){
		printf("harf notunuz AA dir.");
	}else if(80<ort && ort<89){
		printf("harf notunuz BA dir.");
	}else if(70<ort && ort<79){
		printf("harf notunuz BB dir.");
	}else if(60<ort<69){
		printf("harf notunuz CB dir.");
	}else if(50<ort && ort<59){
		printf("harf notunuz CC dir.");
	}else if(0<ort && ort<49){
		printf("harf notunuz FF dir.");
	}
	return 0;
}

