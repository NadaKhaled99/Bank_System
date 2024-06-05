#include <stdio.h>
#include "card.h"
#include "Terminal.h"
#include "server.h"
int checkfn() {
if(check==1){
    printf("Valid Account \n");
}
else{
    check=check;
}
}

int main()
{
while(1){
getCardHolderName();
getCardExpiryDate();
getCardPan();
getTransactionData();
isCardExpired();
getTransactionAmount();
setMaxAmount();
checkfn();
isBelowMaxAmount();
isAmountAvailable();
isValidAccount();
saveTransaction();


}
return 0;
}



