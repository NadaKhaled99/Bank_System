#include <stdio.h>

float transectionAmount;
typedef struct BankCard_Transaction {
   int transactionMonth[100];
   int transactionYear[100];
   
}date;

void getTransactionData(){
date carddates;
printf("Please Enter your Transaction Month \n");
scanf("%d",carddates.transactionMonth);
printf("Please Enter your Transaction Year \n");
scanf("%d",carddates.transactionYear);
}

void isCardExpired(){
date carddates;
info card;

if(*card.expiryYear<*carddates.transactionYear)
{
printf("Declined , Expired card \n");

} 
else if(*card.expiryYear>*carddates.transactionYear)
{
printf("Accepted , valid card \n");
} 
else if(*card.expiryYear=*carddates.transactionYear)
{
    if (*card.expiryMonth<*carddates.transactionMonth){
        printf("Declined , Expired card \n");
       
        
    }
    else if (*card.expiryMonth>=*carddates.transactionMonth){
        printf("Accepted , valid card \n"); 
    }    
}

}

int getTransactionAmount(){
printf("Please Enter Transiction Amount \n");
scanf("%d",transectionAmount);  
    return (transectionAmount);
}