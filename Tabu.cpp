#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


 int main()
 {
 	int yaz,yas,sayi,i,x,secim2,secim3,secim4,secim5,secim6,secim7,secim8,secim9,secim10,toplam=0,puan=0,pas=3;
 	char ad[10],soyad[10],kelime[1000][1000];
 	printf("Oyuncunun adi=  \n");
 	scanf("%s",&ad);
 	printf("Oyuncunun soyadi= \n");
 	scanf("%s",&soyad);
 	printf("Yasinizi girin>>>=");
 	scanf("%d",&yas);
 	if(yas<=18)
 	 {
 	 	printf("18 yasindan kucuklar oynayamaz !!!!!"); goto bitti;
	  }
 	printf("\n");
 	FILE*puan_durumu;
 	puan_durumu=fopen("puan.txt","w");
 	FILE*soru1;
    soru1=fopen("soru1.txt","r");
    FILE*soru2;
    soru2=fopen("soru2.txt","r");
    FILE*soru3;
    soru3=fopen("soru3.txt","r");
     FILE*soru4;
    soru4=fopen("soru4.txt","r");
    FILE*soru5;
    soru5=fopen("soru5.txt","r");
    FILE*soru6;
    soru6=fopen("soru6.txt","r");
    FILE*soru7;
    soru7=fopen("soru7.txt","r");
    FILE*soru8;
    soru8=fopen("soru8.txt","r");
    FILE*soru9;
    soru9=fopen("soru9.txt","r");
    FILE*soru10;
    soru10=fopen("soru10.txt","r");

 	     printf("*********TABU OYUNU***********\n\n");
 	       printf("---------HOSGELDINIZ----------\n");
 	     
 	    printf("Yapmak istediginiz islemi seciniz>>>\n>>");
 	     printf("Oyuna baslamak icin     ----1 yaz\n>>");
 	       printf("Oyun Kurallari icin     ----2 yaz\n>>");
 	        printf("Cikmak icin             ----3 yaz\n=");baslangic:
 	          scanf("%d",&yaz);
 	        switch(yaz)
 	          {
 	          	pas=3;
 	          	case 1:
 	          		{
					{
					
 	          	 printf("Oyun baslamistir....!!!!\n\n");
 	               
 	               
 	              while(!feof(soru1))
                    {
                         fscanf(soru1,"%s",&kelime[i]);
                         	printf("\t\t\t%s\n",kelime[i]);
                             	i++;
										  } 
			        printf("Secim>>");
				    scanf("%d",&x); 
			        
                      if(x==1)
                       {
                       	puan++;
                       	goto soru2;
					   }
                          if(x==2)
                          {
                          	printf("1 tabu yaptiniz -1 puan eklenecek\n");
                          	
							  puan--;
                          	goto soru2;
						  }
						   if(x==3)
						    {
						    	pas--;
						    	goto soru2;
	}
// ilk switch sonu 1.soru sonu
					soru2:
						printf("******SORU 2******\n\n");
						  printf("kalan pas sayisi=%d\n",pas);
 	          	   	   	 while(!feof(soru2))
                    {
                        fscanf(soru2,"%s",&kelime[i]);
                    	   printf("\t\t\t%s\n",kelime[i]);
                    	     i++;
					  }
 	                 printf("\nSecim>>");
				       scanf("%d",&secim2);
				        if(secim2==1)
				          {
				          	puan++;
                       	     goto soru3;
						  }
						  if(secim2==2)
						   {
						   	puan--;
                          	goto soru3;
						   }
				            if(secim2==3 )
						    {
						    	pas--;
						    	goto soru3;
							}
							
				//2.soru sonu..
				   soru3:   
				    printf("******SORU 3******\n\n");
				      printf("kalan pas sayisi=%d\n",pas);
 	          	   	   	    while(!feof(soru3))
                    {
                          fscanf(soru3,"%s",&kelime[i]);
                    	   printf("\t\t\t%s\n",kelime[i]);
                    	     i++;
			}
			printf("\nSecim>>");
				    scanf("%d",&secim3);
				if(secim3==1)
                       {
                       	puan++;
                       	goto soru4;
					   }
                          if(secim3==2)
                          {
                          	
                          	puan--;
                          	
                          	goto soru4;
						  }
						   if(secim3==3)
						    {
						    	pas--;
						    	goto soru4;
			}
				
				soru4: 
				     printf("******SORU 4******\n\n");
			         	printf("kalan pas sayisi=%d\n",pas);
				while(!feof(soru4))
                    {
                    	fscanf(soru4,"%s",&kelime[i]);
                         	printf("\t\t\t%s\n",kelime[i]);
                            	i++;
					  }
 	        gelburaya:  printf("\nSecim>>");
				           scanf("%d",&secim4);
				        if(secim4==1)
				          {
				          	puan++;
                       	goto soru5;
						  }
						  
						  if(secim4==2)
						   {
						   	puan--;
                          	goto soru5;
						   }
				            if(secim4==3 && pas>0 && pas<=3)
						    {
						    	pas--;
						    	goto soru5;
							}
							else
							{
							printf("Soruyu gecemezsin pas hakkin bitmis..!!!!");goto gelburaya;
							}
						
				  soru5:
				     	printf("******SORU 5******\n\n");
				  	     printf("kalan pas sayisi=%d\n",pas);
				  	while(!feof(soru5))
                    {
                         fscanf(soru5,"%s",&kelime[i]);
                    	   printf("\t\t\t%s\n",kelime[i]);
                    	     i++;
					  }
 	         gelburaya0: printf("\nSecim>>");
				           scanf("%d",&secim5);
				        if(secim4==1)
				          {
				          	puan++;
                       	goto soru6;
						  }
						  
						  if(secim4==2)
						   {
						   	puan--;
                          	goto soru6;
						   }
				            if(secim4==3 && pas>0 && pas<=3)
						    {
						    	pas--;
						    	goto soru6;
							}
							else
							{
								printf("Soruyu gecemezsin pas hakkin bitmis..!!!!");goto gelburaya0;
							}
				  	 
				  	 soru6:
				  	 	
						printf("******SORU 6******\n\n");
						 printf("kalan pas sayisi=%d\n",pas);
				  	while(!feof(soru6))
                    {
                        fscanf(soru6,"%s",&kelime[i]);
                    	  printf("\t\t\t%s\n",kelime[i]);
                    	   i++;
					  }
 	       gelburaya1:   printf("\nSecim>>");
				          scanf("%d",&secim6);
				        if(secim6==1)
				          {
				          	puan++;
                       	goto soru7;
						  }
						  
						  if(secim6==2)
						   {
						   	puan--;
                          	goto soru7;
						   }
				            if(secim6==3 && pas>0 && pas<=3)
						    {
						    	pas--;
						    	goto soru7;
							}
							else
							{
								printf("Soruyu gecemezsin pas hakkin bitmis..!!!!");goto gelburaya1;
							}
					soru7:
							
						printf("******SORU 7******\n\n");
						  printf("kalan pas sayisi=%d\n",pas);
				  	while(!feof(soru7))
                    {
                         fscanf(soru7,"%s",&kelime[i]);
                    	   printf("\t\t\t%s\n",kelime[i]);
                    	     i++;
					  }
 	        gelburaya2:  printf("\nSecim>>");
				          scanf("%d",&secim7);
				           if(secim7==1)
				          {
				          	puan++;
                       	goto soru8;
						  }
						  
						  if(secim7==2)
						   {
						   	puan--;
                          	goto soru8;
						   }
				            if(secim7==3 && pas>0 && pas<=3)
						    {
						    	pas--;
						    	goto soru8;
							}
							else
							{
								printf("Soruyu gecemezsin pas hakkin bitmis..!!!!");goto gelburaya2;
							}
						soru8:
								{
						printf("******SORU 8******\n\n");
						  printf("kalan pas sayisi=%d\n",pas);
				  	while(!feof(soru8))
                    {
                        fscanf(soru8,"%s",&kelime[i]);
                    	   printf("\t\t\t%s\n",kelime[i]);
                    	      i++;
					  }
 	         gelburaya3: printf("\nSecim>>");
				          scanf("%d",&secim8);
				        if(secim8==1)
				          {
				          	puan++;
                       	goto soru9;
						  }
						  
						  if(secim8==2)
						   {
						   	puan--;
                          	goto soru9;
						   }
				            if(secim8==3 && pas>0 && pas<=3)
						    {
						    	pas--;
						    	goto soru9;
							}
							else
							{
								printf("Soruyu gecemezsin pas hakkin bitmis..!!!!");goto gelburaya3;
							}
					soru9:
							{
						printf("******SORU 9******\n\n");
						 printf("kalan pas sayisi=%d\n",pas);
				  	while(!feof(soru9))
                    {
                        fscanf(soru9,"%s",&kelime[i]);
                    	  printf("\t\t\t%s\n",kelime[i]);
                    	i++;
					  }
 	       gelburaya4:   printf("\nSecim>>");
				          scanf("%d",&secim9);
				        if(secim9==1)
				          {
				          	puan++;
                       	goto soru10;
						  }
						  
						  if(secim9==2)
						   {
						   	puan--;
                          	goto soru10;
						   }
				            if(secim9==3 && pas>0 && pas<=3)
						    {
						    	pas--;
						    	goto soru10;
							}
							else
							{
								printf("Soruyu gecemezsin pas hakkin bitmis..!!!!");goto gelburaya4;
							}
							soru10:
									{
						printf("******SORU 10******\n\n");
						printf("kalan pas sayisi=%d\n",pas);
				  	while(!feof(soru10))
                    {
                        fscanf(soru10,"%s",&kelime[i]);
                    	  printf("\t\t\t%s\n",kelime[i]);
                    	   i++;
					  }
 	           tekrar:  printf("\nSecim>>");
				    scanf("%d",&secim10);
				        if(secim10==1)
				          {
				          	puan++;
                    
						  }
						  
						  if(secim10==2)
						   {
						   	puan--;
                          
						   }
				            if(secim10==3 && pas!=0)
						    {
						    	printf("Son  soru pas diyemezsin!!!\n\n\n!");goto tekrar;
							}
							
							
							}
				  
			
		}
		
		      printf("PUANINIZ TXT. DOSYASINA YAZILMISTIR\n\n");
				toplam=puan;
				 printf("Oyuncunun Adi-Soyadi:%s %s\tOyuncunun yasi:%d\tToplam puani=%d \n\n",ad,soyad,yas,toplam);
				  fprintf(puan_durumu,"Oyuncunun Adi-Soyadi:%s %s\tOyuncunun yasi:%d\tToplam puani=%d \n\n",ad,soyad,yas,toplam);
				break;
				}
				
				
			
 	          	case 2:
 	          	{
					   	printf("Oyun KURALLARI---------------\n");
 	          		
 	          		printf("1.Kural=Oyuncunun yaninda karsi takimdan birisi bulunmak zorunda!\n");
 	          		 printf("2.Kural=Oyuncu yukarda yazan kelimeyi ingilizcesi dahil soyleyemez..\nAnlatmasi gerekir!\n");
 	          		  printf("3.Kural=Oyuncu El isareti kas goz isaretleri yasaktir\n");
 	          		   printf("4.Kural=Oyuncu Yasakli kelimeleri kullanmamalidir!\n");
 	          		    printf("5.Kural=Eger yasakli kelimeleri, anlattigi kisi soylerse Oyuncuda soyleyebilir..\n");
 	          		     printf("6.Kural=Her oyuncunun 3 defa pas hakki vardir\n");
 	          		      printf("Oyuna girmek icin lutfen 1 yaziniz..! Cikmak icin 3 yaziniz...");
 	          		       goto baslangic;
 	          	           break;       }
				case 3:
					{
					
					goto bitis;
 	                 }
 	    }
			   }
			   bitis1:
			   	{
			printf("SON SORU PAS OLDUGU ICIN OYUN BITTI..\n");
			   	printf("PUANINIZ TXT. DOSYASINA YAZILMISTIR\n\n");
				   toplam=puan;
				     printf("Oyuncunun Adi-Soyadi:%s %s\tOyuncunun yasi:%d\tToplam puani=%d \n\n",ad,soyad,yas,toplam);
				       fprintf(puan_durumu,"Oyuncunun Adi-Soyadi:%s %s\tOyuncunun yasi:%d\tToplam puani=%d \n\n",ad,soyad,yas,toplam);
			   	         getch();
		                        	}
			   bitis:
		{
			printf("Oyununu Kapatmak icin bir tusa basiniz..");
			   	printf("PUANINIZ TXT. DOSYASINA YAZILMISTIR\n\n");
				  toplam=puan;
				    printf("Oyuncunun Adi-Soyadi:%s %s\tOyuncunun yasi:%d\tToplam puani=%d \n\n",ad,soyad,yas,toplam);
				     fprintf(puan_durumu,"Oyuncunun Adi-Soyadi:%s %s\tOyuncunun yasi:%d\tToplam puani=%d \n\n",ad,soyad,yas,toplam);
			           getch();
			          
					   
			          
		} 
		
 	 }
 	 
 	 bitti:
	  getch();
 }
 	     
 	
 	
 	
 	
 	
 	
 	
 

