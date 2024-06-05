#include <stdio.h>

int account_pan[3]={1457689789765478,1648568559747363,1487363524253746};
int account_balance[3]={2000,8060,9300};
int account_index;
int check;
float maxAmount;
int NewBalance;
int isValidAccount(){
  info card;  
  for(int i=0;i<3;i++){
  if (*card.pan==account_pan[i]){
  printf("Account pan number is valid.\n");
  account_index=i;
  check=0;
  break;
  }
  else{
     check =1;
      
  }
  }
    
    return(account_index);
    return(check);
   
}


int isAmountAvailable(){


if (transectionAmount <= account_balance[account_index]){
    printf("Transaction Accepted \n");
}
else{
    printf("Declined , Insuffecient funds \n"); 
   
}
return (transectionAmount);
}


int saveTransaction(){

NewBalance =  account_balance[account_index] - transectionAmount;
printf("Transaction saved ,your balance is updated\n" ); 

return 0;
}

int setMaxAmount(){
return maxAmount=4000;
}
int isBelowMaxAmount(){
if (transectionAmount <= maxAmount){
    printf("Declined Amount Exceeding Limit \n");
   
}
else if(transectionAmount > maxAmount) {
   printf("Accepted Amount below Limit \n"); ;
}
}