#include <stdio.h>

// Define Constants for unit prices and tax rate (8.25%)
#define TV_PRICE 400.00
#define VCR_PRICE 220.00
#define REMOTE_CONTROLLER_PRICE 35.20
#define CD_PLAYER_PRICE 300.00
#define TAPE_RECORDER_PRICE 150.00
#define SALES_TAX_RATE 0.0825

int main() {
    // Variables to store quantities using integer
    int tvQuantity;
    int vcrQuantity;
    int remoteQuantity;
    int cdQuantity;
    int tapeRecorderQuantity;

    // Variables to store total prices using floating point variable
    double tvTotal;
    double vcrTotal;
    double remoteTotal;
    double cdTotal;
    double tapeRecorderTotal;

    // Variables for subtotal, tax, and total bill using floating point variable
    double subtotal;
    double tax;
    double totalBill;

    // Prompt user for quantity of each item sold
    printf("How Many TVs Were Sold? ");
    scanf("%d", &tvQuantity);

    printf("How Many VCRs Were Sold? ");
    scanf("%d", &vcrQuantity);

    printf("How Many Remote Controllers Were Sold? ");
    scanf("%d", &remoteQuantity);

    printf("How Many CDs Were Sold? ");
    scanf("%d", &cdQuantity);

    printf("How Many Tape Recorders Were Sold? ");
    scanf("%d", &tapeRecorderQuantity);

    // Calculate the total price for each item sold
    tvTotal = TV_PRICE * tvQuantity;
    vcrTotal = VCR_PRICE * vcrQuantity;
    remoteTotal = REMOTE_CONTROLLER_PRICE * remoteQuantity;
    cdTotal = CD_PLAYER_PRICE * cdQuantity;
    tapeRecorderTotal = TAPE_RECORDER_PRICE * tapeRecorderQuantity;

    // Calculate subtotal
    subtotal = tvTotal + vcrTotal + remoteTotal + cdTotal + tapeRecorderTotal;

    // Calculate tax amount
    tax = subtotal * SALES_TAX_RATE;

    // Calculate total bill amount
    totalBill = subtotal + tax;

    // Display the bill-use /t as tab for spacing and format/use long floating point
    printf("\nBill Summary:\n");
    printf("------------------------------\n");
    printf("Item\t\t\tQuantity\tTotal Price\n");
    printf("------------------------------\n");
    printf("TV\t\t\t%d\t\t$%.2lf\n", tvQuantity, tvTotal);
    printf("VCR\t\t\t%d\t\t$%.2lf\n", vcrQuantity, vcrTotal);
    printf("Remote Controller\t%d\t\t$%.2lf\n", remoteQuantity, remoteTotal);
    printf("CD Player\t\t%d\t\t$%.2lf\n", cdQuantity, cdTotal);
    printf("Tape Recorder\t\t%d\t\t$%.2lf\n", tapeRecorderQuantity, tapeRecorderTotal);
    printf("------------------------------\n");
    printf("Subtotal\t\t\t\t$%.2lf\n", subtotal);
    printf("Tax (%.2lf%%)\t\t\t\t$%.2lf\n", SALES_TAX_RATE * 100, tax);
    printf("Total Bill\t\t\t\t$%.2lf\n", totalBill);


}

