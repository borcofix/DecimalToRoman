
#include<stdio.h>

void onune_yaz(char c1,char c2);
void sonuna_yaz(char c,int n);

char dizi[1000];
int i=0;

int main(){

    int j;
    long int sayi;
   
    printf("Roma rakamina cevirmek istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
   
    if(sayi <= 0){
         printf("Gecersiz sayi girdiniz. ");
         return 0;
    }

    while(sayi != 0){

         if(sayi >= 1000){
             sonuna_yaz('M',sayi/1000);
             sayi = sayi - (sayi/1000) * 1000;
         }
         else if(sayi >=500){
             if(sayi < 900) {
                
				 sonuna_yaz('D',sayi/500);
				 
                 sayi = sayi - (sayi/500) * 500;
             }
             else{
                 onune_yaz('C','M');
                 sayi = sayi - 900;
             }
         }
         else if(sayi >=100){
             if(sayi < 400){
                 sonuna_yaz('C',sayi/100);
                 sayi = sayi - (sayi/100) * 100;
             }
             else{
                 onune_yaz('L','D');
                 sayi = sayi - 400;
             }
         }
         else if(sayi >=50){
             if(sayi < 90){
                 sonuna_yaz('L',sayi/50);
                 sayi = sayi - (sayi/50) * 50;
             }
             else{
                 onune_yaz('X','C');
                 sayi = sayi - 90;
             }
         }
         else if(sayi >=10){
             if(sayi < 40){
                 sonuna_yaz('X',sayi/10);
                 sayi = sayi - (sayi/10) * 10;
             }
             else{
                 onune_yaz('X','L');
                 sayi = sayi - 40;
             }
         }
         else if(sayi >=5){
             if(sayi < 9){
                 sonuna_yaz('V',sayi/5);
                 sayi = sayi - (sayi/5) * 5;
             }
             else{
                 onune_yaz('I','X');
                 sayi = sayi - 9;
             }
         }
         else if(sayi >=1){
             if(sayi < 4){
                 sonuna_yaz('I',sayi/1);
                 sayi = sayi - (sayi/1) * 1;
             }
             else{
                 onune_yaz('I','V');
                 sayi = sayi - 4;
             }
         }
    }

    printf("Girdiginiz sayinin roma rakamlarindaki karsiligi : ");
    for(j=0;j<i;j++)
         printf("%c",dizi[j]);

	getch();
    return 0;

}

void onune_yaz(char c1,char c2){
    dizi[i++] = c1;
    dizi[i++] = c2;
}

void sonuna_yaz(char c,int n){
    int j;
    for(j=0;j<n;j++)
         dizi[i++] = c;
   
}
