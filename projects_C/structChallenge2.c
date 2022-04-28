#include <stdlib.h>
#include <stdio.h>
struct item{
    char  *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct  item *i);
void printItem(struct item *i);

int main (void){
    struct item itm;
    struct item *pItem = NULL;

    pItem = &itm;

    pItem->itemName = malloc(sizeof(char)*30);
    if(pItem== NULL){
        printf("Memory allocation failed");
        exit(1);
    }

    //readItem
    readItem(pItem);

    //printItem
    printItem(pItem);

    free(pItem->itemName);

    return 0;
}

void readItem(struct item *i){
    printf("Enter the product name: ");
    scanf("%s", i->itemName);
    printf("Enter the Price: ");
    scanf("%f", &i->price); //When scanf, then %i->price, printf time, i->price
    printf("Enter the quantity: ");
    scanf("%d", &i->quantity);
    i->amount = i->price * i->quantity;
}

void printItem(struct item *i){
    printf("\n\nItem Name: %s\n", i->itemName);
    printf("Price: %.2f\n", i->price);
    printf("Quantity: %d\n", i->quantity);
    printf("Amount: %.2f\n", i->amount);
}
