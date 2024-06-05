#include <stdio.h>

typedef struct BankCard_Name_Expiry_Pan {
   char name[100];
   int expiryMonth[100];
   int expiryYear[100];
   int pan[100];
}info;

void getCardHolderName(){
info card;
printf("Please Enter your Card Name \n");
scanf("%s",card.name);
}
void getCardExpiryDate(){
info card;
printf("Please Enter it's expiry month \n");
scanf("%d",card.expiryMonth);
printf("Please Enter it's expiry year \n");
scanf("%d",card.expiryYear);
}

void getCardPan(){
info card;
printf("Please Enter pan number \n");
scanf("%d",card.pan);
}