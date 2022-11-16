#include <stdio.h>
#include <string.h>
#include <conio.h>
char ad[20][20],sad[20][20],ara[20];
int i,no[20],kac,devam[20],j;
float vize[20],final[20],tpl[20],ort[20];
char ce;
main()
{
printf("kac ogrenci kayit yapacak: ");
      scanf("%d",&kac);
      for(i=1; i<=kac; i++)
      {
               printf("%d. ogrencinin no: ",i);
               scanf("%d",&no[i]);
               
               printf("%d. Ogrecinin Adi: ",i);
               scanf("%s",&ad[i]);
               printf("%d. ogrencinin soyadi: ",i);
               scanf("%s",&sad[i]);
               
               printf("%d. Ogrencinin Devamsizlik: ",i);
               scanf("%d",&devam[i]);
               
               printf("%d. ogrencinin vize notu: ",i);
               scanf("%f",&vize[i]);
               
               printf("%d. ogrencinin final notu: ",i);
               scanf("%f",&final[i]);
               
               tpl[i]=vize[i]*0.4+final[i]*0.6;
               ort[i]=tpl[i];
      }
      for(i=1; i<=kac; i++)
      {
                printf("----------------------- \n");
                printf("%d. Ogrecinin Adi: %s",i,ad[i]);
                printf("\n");
               
                printf("%d. Ogrecinin Soyadi: %s",i,sad[i]);
                printf("\n");
                
                printf("%d. Ogrecinin No: %d",i,no[i]);
                printf("\n");
                 
                printf("%d. Ogrencinin Devamsizligi: %d",i,devam[i]);
                printf("\n");
                 
                printf("%d. Ogrencinin Vize: %.2f",i,vize[i]);
                printf("\n");
                 
                printf("%d. Ogrencinin Final: %.2f",i,final[i]);
                printf("\n");
                 
                printf("%d. Ogrecinin Ortalama: %.2f",i,ort[i]);
                printf("\n");
                  
                  if(devam[i]>=16)
                  printf("durumu: Devamsizliktan Kaldi\n");
                  else if(ort[i]<=44)
                  printf("durumu: kaldi\n");
                  else if(ort[i]<=54)
                  printf("durumu: gecer\n");
                  else if(ort[i]<=69)
                  printf("durumu: orta\n");
                  else if(ort[i]<=84)
                  printf("durumu: iyi\n");
                  else if(ort[i]<=100)
                  printf("durumu: pekiyi\n");
                 FILE *dosya;
                 dosya=fopen("ogrenci.txt","a");
                 fprintf(dosya,"Adi:%s \n",ad[i]);
                 fprintf(dosya,"Soyadi:%s \n",sad[i]);
                 fprintf(dosya,"No:%d \n",no[i]);
                 fprintf(dosya,"Devamsizlik:%d \n",devam[i]);
                 fprintf(dosya,"Vize Notu:%.2f \n",vize[i]);
                 fprintf(dosya,"Final Notu:%.2f \n",final[i]);
                 fprintf(dosya,"Ortalamasi: %.2f\n",ort[i]);
                 fprintf(dosya,"\n-------------------------------\n");
                 fclose(dosya);
       }
          printf("Aramak icin e'ye basiniz degilse h =");
          scanf("%s",&ce);
      while(ce=='e')
      {
            j=0;
            printf("Aradigin ismi gir muhterem :");
            scanf("%s",ara);
            printf("\n");
        
        for(i=0;i<5;i++) 
        if(strcmp(ara,ad[i])==0)
           {
                j=1;
                printf("Adi : %s Numarasi \n:%d\n",ad[i],no[i]);
           }
           if(j==0)
                printf("Aradigin isim bulunamadi hemserim duzgun yaz..\n\n");
                printf("Aramaya devam edecenni? (e / h)");
                ce=getche();
                printf("\n\n");
        }
      
      
      getch();
      return 0;
}
