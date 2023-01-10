#include <stdio.h>
#include <stdlib.h>

double kare(double x);
double daire(double x);
double yamuk(double x);
double dikdortgen(double x,double y);
double ucgen(double x , double y );
double karekok(double x);
double us(double x,double y);
int main() {
	char islem;
     double x,pi,y;
   printf("*** MATEMATIK MENUSU UYGULAMASINA HOS GELDINIZ ***\n\n\n");
   printf("ISLEMIZI TUSLAYINIZ:\n\n");
   printf("KARE ALAN VE CEVRE HESAPLAMA : 'k'\n");
   printf("DAIRE ALAN VE CEVRE HESAPLAMA : 's'\n");
   printf("YAMUK ALAN HESAPLAMA: 'y'\n");
   printf("DIKDORTGEN ALAN  VE CEVRE HESAPLAMA: 'd' \n");
   printf("UCGEN ALAN HESAPLAMA: 'u'\n");
   printf("KAREKOK HESAPLAMA: 'c'\n");
   printf("USLU SAYI HESAPLAMA: 'p'\n");
   printf("\n\n");
   printf("ISLEMINIZ: ");
   scanf("%s",&islem);
   
   switch(islem){
   	
   	case'k': kare(x);
   	         break;
   	case 's': daire(x);
   	           break;
   	case'y':  yamuk(x);
   	          break;
   	case'd': dikdortgen(x,y);
   	         break;
	case'u': ucgen(x,y);
	        break;
	case 'c': karekok(x);
	            break;
	case 'p':   us(x,y);
	             break;
	default: printf("Yanlis Komut Kullandiniz\n\n");
	          return main();
	
   }
   
	
	
	
	
	getch ();
}

double kare(double x){
	int islem;
    float cevre,alan;	//x i kenar olarak kullanaca??z
    printf("\n");
	printf("Kenar Uzunlugunu Giriniz:");
	scanf("%lf",&x);
	cevre=4*x;
	alan=x*x;
	printf("\n");
	printf("ALAN DEGERI= %lf\n",alan);
	printf("CEVRE DEGERI= %lf\n",cevre);
	printf("\n");
}

double daire(double x){
	int islem;
	double pi ,alan,cevre; //x i yar??ap olarak kullanaca??z
	printf("\n");
	printf("pi Degerini Giriniz:");
	scanf("%lf",&pi);
	printf("Yaricap Uzunlugunu Giriniz:");
	scanf("%lf",&x);
	alan=pi*x*x;
	cevre=2*pi*x;
	printf("\n");
	printf("Alan Degeri=%lf\n",alan);
	printf("Cevre Degeri= %lf",cevre);
	printf("\n\n");
	printf("Ana Menuye Donmek icin '1' e programi sonlandirmak icin '2'ye basiniz':");
	scanf("%d",&islem);
	switch(islem){
		case 1: return main();
		       break;
		case 2: return 0;
	    
	}	
	
}
double yamuk(double x ){
	int islem;
	double altbn,h,alan;   // x i ?st taban olarak kullanaca??z
	printf("\n");
	printf("Ust Taban Uzunlugunu Giriniz:");
	scanf("%lf",&x);
    printf("Alt Taban Uzunlugunu Giriniz:");
	scanf("%lf",&altbn);
	printf("Yuksekligi Giriniz: ");
	scanf("%lf",&h);
	alan=(altbn+x)*h/2;
	printf("\n");
	printf("Alan Degeri = %lf",alan);
	printf("\n\n");
	printf("Ana Menuye Donmek icin '1' e programi sonlandirmak icin '2'ye basiniz':");
	scanf("%d",&islem);
	switch(islem){
		case 1: return main();
		       break;
		case 2: return 0;
	    
	}		
	
}
double dikdortgen(double x,double y){
	double alan,cevre;
	int islem;
	printf("\n");
	printf("Kisa Kenar Uzunlugunu Giriniz:");
	scanf("%lf",&x);
	printf("Uzun Kenar Uzunlugunu Giriniz:");
	scanf("%lf",&y);
	alan=x*y;
	cevre=2*(x+y);
	printf("\n");
	printf("Alan = %lf\n",alan);
	printf("Cevre = %lf",cevre);
	printf("\n");
	printf("Ana Menuye Donmek icin '1' e programi sonlandirmak icin '2'ye basiniz':");
	scanf("%d",&islem);
	switch(islem){
		case 1: return main();
		       break;
		case 2: return 0;
	    
	}	
	    
		
}
double ucgen(double x , double y){
    double alan;
	int islem;
	printf("\n");
	printf("Taban Degerini Giriniz:");
	scanf("%lf",&x);
	printf("Yukseklik Degerini Giriniz:");
	scanf("%lf",&y);
	alan=x*y/2;
	printf("\n");
	printf("Alan Degeriniz = %lf\n",alan);
	printf("\n\n");
	printf("Ana Menuye Donmek icin '1' e programi sonlandirmak icin '2'ye basiniz':");
	scanf("%d",&islem);
	switch(islem){
		case 1: return main();
		       break;
		case 2: return 0;
	    
	}		
}
double karekok(double x){
	
	double a;
	int islem;
	printf("\n");
	printf("Karekokunu Almak Istediginiz Sayiyi Giriniz:");
	scanf("%lf",&x);
	printf("\n");
	printf("Karekok Degeri= %lf",sqrt(x));
	printf("\n\n");
	printf("Ana Menuye Donmek icin '1' e programi sonlandirmak icin '2'ye basiniz':");
	scanf("%d",&islem);
	switch(islem){
		case 1: return main();
		       break;
		case 2: return 0;
	    
	}			
}
double us(double x , double y){
	 
	 double sonuc;
	 int islem;
	 printf("\n");
	 printf("Taban Degerini Giriniz:");
	 scanf("%lf",&x);
	 printf("Us Degerini Giriniz:");
	 scanf("%lf",&y);
	 sonuc=pow(x,y);
	 printf("\n");
	 printf("Sonuc=%lf",sonuc);
	 printf("\n\n");
	printf("Ana Menuye Donmek icin '1' e programi sonlandirmak icin '2'ye basiniz':");
	scanf("%d",&islem);
	switch(islem){
		case 1: return main();
		       break;
	}			
}



