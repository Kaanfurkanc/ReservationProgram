#include <stdio.h>
int main()
{
        int region,city,hotel,p,f;
        int dinner,day,express,tour,price,cevap,answer,a;
        
        printf("** Welcome KFCYLDZ TOUR **\n");
        printf("*************\n");
        printf("We are be honoured that arrange your holiday\n\n");
        printf("Please chose the region you want to go:\n");
        
        printf("-----Regions-----\n");
        printf("1-Cappadocia Region\n");
        printf("2-Mediterraean and Aegean Region\n");
        printf("3-Marmara Region\n");
        scanf("%d",&region);

            switch(region)
            {
                case 1:
                printf("-----Cappadocia Region-----\n");
                printf("-----URGUP-----\n");
                printf("Please chose the hotel you want to stay:\n");
                printf("-----Hotels-----\n");
                printf("1-Yildiz Hotel\n");
                printf("2-Royal Cave Hotel\n");
                printf("3-Dere Suites\n");
                scanf("%d",&hotel);
                        switch(hotel)
                        {
                        case 1:
                        printf("Welcome Yildiz Hotel");
                        printf("How many people will stay :");
                        scanf("%d",&p);
                        price=(p*100);
                        printf("single room price 100$-(include breakfast)-\n");
                        printf("How many day will you stay in hotel?\n");
                        scanf("%d",&day);
                        
                            if(day==1)
                            {
                                price  =100*p;
                            }
                            else if(day>1)
                            {
                                price=(day*price);
                            }
                            int dinner,cevap;
                            
                            printf("would you like to dinner?\n");
                            printf("1-yes\n");
                            printf("2-no\n");
                            scanf("%d",&cevap);
                            
                            if(cevap==1)
                            {
                                price=price+(day*50*p);
                            }
                            else if(cevap==2)
                            {
                                price=price;
                            }
                            printf("Would you like to express for your transport?\n");
                            int answer,express;
                        
                            printf("1-yes\n");
                            printf("2-no\n");
                            scanf("%d",&answer);
                        
                            if(answer==1)
                            {
                                price=price+(p*50);
                            }
                            else if(answer==2)
                            {
                                price=price;
                            }
                            int a;
                        
                            printf("Would you like to take a tour of the region one day?\n");
                            printf("1-yes\n");
                            printf("2-no\n");
                            scanf("%d",&a);
                            
                            if(a==1)
                            {
                                price=price+(p*100);
                            }
                            else if(a==2)
                            {
                                 break;
                            }
                            break;
                        case 2:
                        printf("2-Royal Cave Hotel\n");
                        printf("How many people will stay :\n");
                        scanf("%d",&p);
                        price=(p*150);
                        printf("single room price 150$-(include breakfast)-\n");
                        printf("How many day will you stay in hotel?\n");
                        scanf("%d",&day);
                           
                            if(day==1)
                            {
                                price=150*p;
                            }
                            else if(day>1)
                            {
                                price=(day*price);
                            }
                        
                        printf("would you like to dinner?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&cevap);
                            if(cevap==1)
                            {
                                price=price+(day*50*p);
                            }
                            else if(cevap==2)
                            {
                                price=price;
                            }
                        printf("Would you like to express for your transport?\n"); printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&answer);
                        
                            if(answer==1)
                            {
                                price=price+(p*50);
                            }
                            else if(answer==2)
                            {
                                price=price;
                            }
                        printf("Would you like to take a tour of the region one day?\n"); printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&a);
                            if(a==1)
                            {
                                price=price+(p*100);
                            }
                            else if(a==2)
                            {
                                break;
                            }
                                break;
                        case 3:
                        printf("3-Dere Suites\n");
                        printf("How many people will stay :\n");
                        scanf("%d",&p);
                        price=(p*250);
                        printf("single room price 250$-(include breakfast)-\n");
                        printf("How many day will you stay in hotel?\n");
                        scanf("%d",&day);
                            if(day==1)
                            {
                                price=250*p;
                            }
                            else if(day>1)
                            {
                                price=(day*price);
                            }
                        printf("would you like to dinner?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&cevap);
                            if(cevap==1)
                            {
                                price=price+(day*100*p);
                            }
                            else if(cevap==2)
                            {
                                price=price;
                            }
                        printf("Would you like to express for your transport?\n"); printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&answer);
                            if(answer==1)
                            {
                                price=price+(p*50);
                            }
                            else if(answer==2)
                            {
                                price=price;
                            }
                        printf("Would you like to take a tour of the region one day?\n"); printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&a);
                            if(a==1)
                            {
                                price=price+(p*100);
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            break;
                        }
                        break;
                case 2:
                printf("2-Mediterraean and Aegean Region\n");
                printf("-----IZMIR-----\n");
                printf("Please chose the hotel you want to stay:\n");
                printf("-----Hotels-----\n");
                printf("1-Double three by Hilton \n");
                printf("2-Bornova Hotel\n");
                printf("3-Zeniva Hotel\n");
                scanf("%d",&hotel);
                        switch(hotel)
                        {
                        case 1:
                        printf("Welcome to Double three by Hilton");
                        printf("How many people will stay :");
                        scanf("%d",&p); price=(p*500);
                        printf("single room price 500$-(include breakfast)-\n");
                        printf("How many day will you stay in hotel?\n");
                        scanf("%d",&day);
                            if(day==1)
                            {
                                price=500*p;
                            }
                            else if(day>1)
                            {
                            price=(day*price);
                            }
                            int dinner,cevap;
                        
                        printf("would you like to dinner?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&cevap);
                            if(cevap==1)
                            {   
                                price=price+(day*200*p);
                            }
                            else if(cevap==2)
                            {
                                price=price;
                            }
                        printf("Would you like to express for your transport?\n");
                        int answer,express;
                        
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&answer);
                            if(answer==1)
                            {
                                price=price+(p*100);
                            }
                            else if(answer==2)
                            {
                                price=price;
                            }
                        int a;
                        printf("Would you like to take a tour of the region one day?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&a);
                            if(a==1)
                            {
                                price=price+(p*100);
                            }
                            else if(a==2)
                            {
                                break;
                            }
                                break;
                        case 2:
                        printf("2-Bornova Hotel\n");
                        printf("How many people will stay :\n");
                        scanf("%d",&p);
                        price=(p*200);
                        printf("single room price 200$-(include breakfast)-\n");
                        printf("How many day will you stay in hotel?\n");
                        scanf("%d",&day);
                            if(day==1)
                            {
                                price=200*p;
                            }
                            else if(day>1)
                            {
                                price=(day*price);
                            } 
                        printf("would you like to dinner?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&cevap);
                            if(cevap==1)
                            {
                                price=price+(day*75*p);
                            }
                            else if(cevap==2)
                            {
                                price=price;
                            }
                        printf("Would you like to express for your transport?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&answer);
                            if(answer==1)
                            {
                                price=price+(p*50);
                            }
                            else if(answer==2)
                            {
                                price=price;
                            }
                        printf("Would you like to take a tour of the region one day?\n"); printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&a);
                            if(a==1)
                            {
                                price=price+(p*100);
                            }
                            else if(a==2)
                            {
                                break;
                            }
                                break;
                        case 3:
                        printf("3-Zeniva Hotel\n");
                        printf("How many people will stay :\n");
                        scanf("%d",&p);
                        price=(p*70);
                        printf("single room price 70$-(include breakfast)-\n");
                        printf("How many day will you stay in hotel?\n");
                        scanf("%d",&day);
                            if(day==1)
                            {
                                price=70*p;
                            }
                            else if(day>1)
                            {
                                price=(day*price);
                            }
                        printf("would you like to dinner?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&cevap);
                            if(cevap==1)
                            {
                                price=price+(day*30*p);
                            }
                            else if(cevap==2)
                            {
                                price=price;
                            }
                        printf("Would you like to express for your transport?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&answer);
                            if(answer==1)
                            {
                                price=price+(p*50);
                            }
                            else if(answer==2)
                            {
                                price=price;
                            }
                        printf("Would you like to take a tour of the region one day?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&a);
                        
                            if(a==1)
                            {
                                price=price+(p*60);
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            break;
                        }
                        break;
                case 3:
                printf("3-Marmara Region\n");
                printf("-----ISTANBUL-----\n");
                printf("Please chose the hotel you want to stay:\n");
                printf("-----Hotels-----\n");
                printf("1-Legacy Ottoman Hotel\n");
                printf("2-The Marmara Pera\n");
                printf("3-Four Seasons Hotel\n");
                scanf("%d",&hotel);
                        switch(hotel)
                        {
                        case 1:
                        printf("Welcome to Legacy Ottoman Hotel");
                        printf("How many people will stay :");
                        scanf("%d",&p);
                        price=(p*300);
                        printf("single room price 300$-(include breakfast)-\n");
                        printf("How many day will you stay in hotel?\n");
                        scanf("%d",&day);
                        
                            if(day==1)
                            {
                                price=300*p;
                            }
                            else if(day>1)
                            {
                                price=(day*price);
                            }
                        int dinner,cevap;
                        printf("would you like to dinner?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&cevap);
                        
                            if(cevap==1)
                            {
                                price=price+(day*100*p);
                            }
                            else if(cevap==2)
                            {
                                price=price;
                            
                            }
                        printf("Would you like to express for your transport?\n");
                        int answer,express;
                        
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&answer);
                            if(answer==1)
                            {
                                price=price+(p*75);
                            }
                            else if(answer==2)
                            {
                                price=price;
                            }
                        int a;
                        
                        printf("Would you like to take a tour of the region one day?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&a);
                            if(a==1)
                            {
                                price=price+(p*100);
                            }
                            else if(a==2)
                            {
                                break;
                            }
                                break;
                        case 2:
                        printf("2-The Marmara Pera Hotel\n");
                        printf("How many people will stay :\n");
                        scanf("%d",&p);
                        price=(p*400);
                        printf("single room price 400$-(include breakfast)-\n");
                        printf("How many day will you stay in hotel?\n");
                        scanf("%d",&day);
                        
                            if(day==1)
                            {
                                price=400*p;
                            }
                            else if(day>1)
                            {
                                price=(day*price);
                            }
                        printf("would you like to dinner?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&cevap);
                        
                            if(cevap==1)
                            {
                                price=price+(day*125*p);
                            }
                            else if(cevap==2)
                            {
                                price=price;
                            }
                        printf("Would you like to express for your transport?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&answer);
                            if(answer==1)
                            {
                                price=price+(p*150);
                            }
                            else if(answer==2)
                            {
                                price=price;
                            }
                        printf("Would you like to take a tour of the region one day?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&a);
                            if(a==1)
                            {
                                price=price+(p*150);
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            break;
                        case 3:
                        printf("3-Four Seasons Hotel\n");
                        printf("How many people will stay :\n");
                        scanf("%d",&p);
                        price=(p*700);
                        printf("single room price 700$-(include breakfast)-\n");
                        printf("How many day will you stay in hotel?\n");
                        scanf("%d",&day);
                            if(day==1)
                            {
                                price=700*p;
                            }
                            else if(day>1)
                            {
                                price=(day*price);
                            }
                        printf("would you like to dinner?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&cevap);
                            if(cevap==1)
                            {
                                price=price+(day*150*p);
                            }
                            else if(cevap==2)
                            {
                                price=price;
                            }
                        printf("Would you like to express for your transport?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&answer);
                        
                            if(answer==1)
                            {
                                price=price+(p*125);
                            }
                            else if(answer==2)
                            {
                                price=price;
                            }
                        printf("Would you like to take a tour of the region one day?\n");
                        printf("1-yes\n");
                        printf("2-no\n");
                        scanf("%d",&a);
                        
                            if(a==1)
                            {
                                price=price+(p*200);
                            }
                            else if(a==2)
                            {
                                break;
                            }
                        break;
                        }
                        break;
            }
                        
                        printf("Total price %d\n",price);
                        printf("Do you confirm ?\n\n1.Yes\n\n2.No\n");
                        scanf("%d",&f);
                        
                        if(f==1){
                            printf("Your reservation is confirmed .\n Thank you for choosing us.\n Have a niye holiday :)");
                        }
                        else{
                            printf("Your reservation is not confirmed !");
                        }
                        return (0);
                        }
