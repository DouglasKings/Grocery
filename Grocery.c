#include <stdio.h>
#include <stdlib.h>

int main() {

    int initial_amount = 100000;
    char *myarray_items[8] = {"tomato", "onions", "green pepper", "carrots", "ginger", "garlic", "turmeric", "chilli"};
    double myarray_items_quantity[8] = {2, 2.5, 3, 1.5, 1, 4, 2, 1}; // Use double for quantities
    int myarray_items_price[8] = {5000, 1500, 2000, 3000, 6000, 500, 6000, 500}; // Prices remain integers

    // Calculate totals
    double total_tomato = (myarray_items_price[0]*myarray_items_quantity[0]);
    double total_onions = (myarray_items_price[1]*myarray_items_quantity[1]);
    double total_greenpepper = (myarray_items_price[2]*myarray_items_quantity[2]);
    double total_carrots = (myarray_items_price[3]*myarray_items_quantity[3]);
    double total_ginger = (myarray_items_price[4]*myarray_items_quantity[4]);
    double total_garlic = (myarray_items_price[5]*myarray_items_quantity[5]);
    double total_turmeric = (myarray_items_price[6]*myarray_items_quantity[6]);
    double total_chilli = (myarray_items_price[7]*myarray_items_quantity[7]);

    printf("Your initial amount is: %d\n\n", initial_amount);

    double total_amount = (total_tomato + total_onions + total_greenpepper + total_carrots + total_ginger + total_garlic + total_turmeric + total_chilli);
    printf("The total amount paid for groceries is: %.2f\n\n", total_amount); 

    int balance = (int)(initial_amount - total_amount); // Casting to int for balance
    printf("Your balance is: %d\n\n", balance);

    printf("Below are the items you paid for;\n");

    // Print items with their quantities
    printf("%s: %.2f kg\n", myarray_items[0], myarray_items_quantity[0]); 
    printf("%s: %.2f kg\n", myarray_items[1], myarray_items_quantity[1]);
    printf("%s: %.2f kg\n", myarray_items[2], myarray_items_quantity[2]);
    printf("%s: %.2f kg\n", myarray_items[3], myarray_items_quantity[3]);
    printf("%s: %.2f kg\n", myarray_items[4], myarray_items_quantity[4]);
    printf("%s: %.2f kg\n", myarray_items[5], myarray_items_quantity[5]);
    printf("%s: %.2f kg\n", myarray_items[6], myarray_items_quantity[6]);
    printf("%s: %.2f kg\n", myarray_items[7], myarray_items_quantity[7]);

    return 0;
}