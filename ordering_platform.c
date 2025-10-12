#include<stdio.h> // Include the standard input-output library for basic input and output functions.
#include<ctype.h> // Include the character type library for character-related functions.
#include<string.h>

int order_menu(); // Function for the progress in this code.
int display_menu(); // Functon to display the menu.
int display_submenu(int main_menu); // Function to display the submenu to order.

int main () {
    char username[7];
    char password[7]; // To make an input for the user.
    printf("\n=========================================================================\n");
    printf("|\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t   ~~~~~~~~~~~~~Hello!~~~~~~~~~~~~~\t\t\t|\n|\t   Welcome to W.A.Y KFC Traditional Ordering Platform\t\t!\n");
    printf("|\t\t\t\t\t\t\t\t\t|\n");
    printf("=========================================================================\n\n");
    do // Use do since if the user enter the wrong input, it can loop back to the question.
    {
    printf("<Staff login>\n"); 
    printf("Username : "); // Ask the user to enter the username.
    scanf("%s", &username); // Receive the user input.
    printf("Password : "); // Ask the user to enter the password.
    scanf("%s", &password); // Receive the user input.
    printf("\n");

    if (strcmp(username, "545611") != 0 || strcmp(password, "202309") != 0){
        printf("Invalid username or password!\n~~Please retry~~\n\n");
    } 
    if (strcmp(username, "545611") == 0 && strcmp(password, "202309") == 0) {
        printf("You successfully login!\n\n");
    } 
    

    } while (strcmp(username, "545611") != 0 || strcmp(password,"202309")!=0); // If the user enter incorrect answer then it will loop back to the question.

    int choices;
    float choice; // In order to let the user input for their choice.
    do
    {
        while(1) {
            choice = 0;
            printf("\nPick these options:\n");
            printf("1. Menu\n");
            printf("2. Order menu\n");
            printf("3. Exit\n");
            printf("Pick between (1, 2 or 3) : ");
            scanf("%f", &choice);
            while(getchar() != '\n');
            if (choice != 1 && choice != 2 && choice != 3) { // Check if choice not true and not enter 1 2 3 then print error message and it loop back to the option.
                printf("\nIncorrect choice!\nPlease enter 1,2 or 3.\n\n");
                continue;
            }
            break;
        }

        printf("\n");

        choices = choice;

        switch (choices) { // Use switch to handle a lot of different cases.
            case 1: // If user enter 1 then proceed to display menu part.
                display_menu();
                break;
            case 2: // If user enter 2 then proceed to order menu part.
                if (!order_menu()) {   // If order_menu return false then it will exit the program.
                    return 0;
                }
                break;
            case 3: // If user enter 3, then it will display the message and exit the program.
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("|Thank you for using W.A.Y KFC Traditional Ordering Platform|\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("\n");
                return 0;
            default :  // If user enter other than 1, 2, or 3, then it will print out the error message.
                printf("Incorrect choice!\nPlease enter 1,2 or 3.\n\n");
        }

    } while (1); // This is a infinite loop to make the program keep running until manually stopped.

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("|Thank you for using W.A.Y KFC Traditional Ordering Platform|\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    return 0; // The program is completed and will display thank you messages to the user and ends with zero errors.
}

int display_menu() { // This function is to display the menu along with the prices.
    // Print head of menu.
    printf("\t\t\t<<<<<<Menu>>>>>>\n");
    printf("-----------------------------------------------------------------\n");

    // Showing the various main menu part along with the menu and prices.
    printf("|\tMain Menu\t|\t   Menu\t\t|    Price(RM)\t|\n");
    printf("-----------------------------------------------------------------\n");

    // Limited Time Only part.
    printf("|\t\t\t|Banana Chocolate\t|     7.50\t|\n");
    printf("|   Limited Time Only\t|Crispy Meal\t\t|     26.50\t|\n");
    printf("|\t\t\t|Golden Matcha Balls\t|     9.50\t|\n");
    
    // Family Buckets part.
    printf("-----------------------------------------------------------------\n");
    printf("|\t\t\t|5 Pieces Combo\t\t|     42.00\t|\n");
    printf("|    Family Buckets\t|9 Pieces Combo\t\t|     68.00\t|\n");
    printf("|\t\t\t|15 Pieces Combo\t|     99.00\t|\n");
    printf("-----------------------------------------------------------------\n");
    
    // Box Meals part.
    printf("|\t\t\t|Zinger Box\t\t|     21.00\t|\n");
    printf("|\tBox Meals\t|Snacker Box\t\t|     12.00\t|\n");
    printf("|\t\t\t|Classic Box\t\t|     17.50\t|\n");
    printf("-----------------------------------------------------------------\n");
    
    // Chicken part.
    printf("|\t\t\t|Snack Plate\t\t|     18.00\t|\n");
    printf("|\t Chicken\t|Dinner Plate\t\t|     22.50\t|\n");
    printf("|\t\t\t|15 Pieces Chicken\t|     91.00\t|\n");
    printf("-----------------------------------------------------------------\n");
    
    // Twister and Burger part.
    printf("|\t\t\t|Classic Colonel\t|     8.50\t|\n");
    printf("|  Twister and Burger\t|Stacker Zinger\t\t|     18.90\t|\n");
    printf("|\t\t\t|Cheezy Zinger\t\t|     20.50\t|\n");
    printf("-----------------------------------------------------------------\n");
    
    // Tenders and Nuggets part.
    printf("|  Tenders and Nuggets\t|Nuggets 6 Pieces\t|     10.50\t|\n");
    printf("|\t\t\t|Nuggets 9 Pieces\t|     14.50\t|\n");
    printf("-----------------------------------------------------------------\n");
    
    // Kids Meal part.
    printf("|\t\t\t|Kid Meal Set A \t|     12.99\t|\n");
    printf("|\tKids Meal\t|Kid Meal Set A\t\t|     12.99\t|\n");
    printf("|\t\t\t|Kid Meal Set C \t|     12.99\t|\n");
    printf("-----------------------------------------------------------------\n");
    
    // Beverages part.
    printf("|\t\t\t|Coca Cola \t\t|     4.70\t|\n");
    printf("|\tBeverages\t|White Coffee\t\t|     5.70\t|\n");
    printf("|\t\t\t|Milo \t\t\t|     6.80\t|\n");
    printf("-----------------------------------------------------------------\n");
    printf("\n\n"); // Add more new line for better readabilquantities.
}

int display_submenu(int main_menu) {
    printf("\n\t\t~~~~~~~~~~~~~~~Submenu~~~~~~~~~~~~~~~\n"); // display submenu header.

    switch (main_menu) { // Use switch to show options and prices in a submenu based on the chosen main menu category, where it represent various foods and drinks. 
        
        // 1st category : Limited Time Only.
        case 1 :
            // Display options and prices for Limited Time Only.
            printf("--------------------------------------------------------------------------\n");
            printf("a). Banana Chocolate\t\t\t<< RM 7.50 >>\n");
            printf("b). Crispy Meal\t\t\t\t<< RM 26.50 >>\n");
            printf("c). Golden Matcha Balls\t\t\t<< RM 9.50 >>\n");
            printf("--------------------------------------------------------------------------\n");
            break;

        // 2nd category : Family Buckets.
        case 2 :
            // Display options and prices for Family Buckets.
            printf("--------------------------------------------------------------------------\n");
            printf("a). 5 Pieces Combo\t\t\t<< RM 42.00 >>\n");
            printf("b). 9 Pieces Combo\t\t\t<< RM 68.00 >>\n");
            printf("c). 15 Pieces Combo\t\t\t<< RM 99.00 >>\n");
            printf("--------------------------------------------------------------------------\n");
            break;

        // 3rd category : Box Meals.
        case 3 :
            // Display options and prices for Box Meals.
            printf("--------------------------------------------------------------------------\n");
            printf("a). Zinger Box\t\t\t<< RM 21.00 >>\n");
            printf("b). Snacker Box\t\t\t<< RM 12.00 >>\n");
            printf("c). Classic Box\t\t\t<< RM 17.50 >>\n");
            printf("--------------------------------------------------------------------------\n");
            break;

        // 4th category : Chicken.
        case 4 :
            // Display options and prices for Chicken.    
            printf("--------------------------------------------------------------------------\n");
            printf("a). Snake Plate\t\t\t<< RM 18.00 >>\n");
            printf("b). Dinner Plate\t\t<< RM 22.50 >>\n");
            printf("c). 15 Pieces Chicken\t\t<< RM 91.00 >>\n");
            printf("--------------------------------------------------------------------------\n");
            break;

        // 5th category : Twister and Burger.
        case 5 :
            // Display options and prices for Twister and Burger.
            printf("--------------------------------------------------------------------------\n");
            printf("a). Classic Colonel\t\t\t<< RM 8.50 >>\n");
            printf("b). Stacker Zinger\t\t\t<< RM 18.90 >>\n");
            printf("c). Cheezy Zinger\t\t\t<< RM 20.50 >>\n");
            printf("--------------------------------------------------------------------------\n");
            break;

        // 6th category : Tenders and Nuggets.
        case 6 :
            // Display options and prices for Tenders and Nuggets.
            printf("--------------------------------------------------------------------------\n");
            printf("a). Nuggets 6 Pieces\t\t\t<< RM 10.50 >>\n");
            printf("b). Nuggets 9 Pieces\t\t\t<< RM 14.50 >>\n");
            printf("-------------------------------------------------------------------------\n");
            break;

        // 7th category : Kids Meal.
        case 7 :
            // Display options and prices for Kids Meal.
            printf("--------------------------------------------------------------------------\n");
            printf("a). Kid Meal Set A\t\t\t<< RM 12.99 >>\n");
            printf("b). Kid Meal Set B\t\t\t<< RM 12.99 >>\n");
            printf("c). Kid Meal Set C\t\t\t<< RM 12.99 >>\n");
            printf("--------------------------------------------------------------------------\n");
            break;

        // 8th category : Beverages.
        case 8 :
            // Display options and prices for Beverages.
            printf("--------------------------------------------------------------------------\n");
            printf("a). Coca Cola\t\t\t<< RM 4.70 >>\n");
            printf("b). White Coffee\t\t<< RM 5.70 >>\n");
            printf("c). Milo\t\t\t<< RM 6.80 >>\n");
            printf("--------------------------------------------------------------------------\n");
            break;
        
        default : // For invalid menu choice.
            printf("Wrong choice! Please enter between '1-8'!\n");
    }

    printf("0. Go back to main menu/finish order\n"); // Option to go back to the main menu.
    printf("--------------------------------------------------------------------------\n");

}


int order_menu() { // Initializing variables for the order menu.
    int main_menus;
    float main_menu; // Variable for main menu choices.
    char sub_menu; // Variable for sub menu choices.
    int quantities;
    float quantity; // Variable for quantities of sub menu to be ordered.
    float total_price = 0.0; // Variable to keep track the overall cost of the order.
    int max = 0; // In order to limit the number of sub menu to order.
    int is_True = 1, is_Check =0, is_payment = 1; // In order to help manage the process of picking tems to order.
    char ordered_items[5][50];  // An array to store names of ordered items with maximum of 5 items with 50 character each.
    int ordered_quantities[5]; // An array to store numbers of quantitites ordered items. 
    float ordered_prices[5]; // An array to store the prices of ordered items.

    while(max<5) { // Loop that let the user to order sub menu with maximum of 5 items.
        main_menu=0;
        // Displaying the main menu options.
        printf("\n\n\t\t\t\t<<<<<<Order Menu>>>>>>\t\t\t\t\n");
        printf("1. Limited Time Only\n");
        printf("2. Family Buckets\n");
        printf("3. Box Meals\n");
        printf("4. Chicken\n");
        printf("5. Twister and Burger\n");
        printf("6. Tenders and Nuggets\n");
        printf("7. Kid Meal\n");
        printf("8. Beverages\n");
        printf("0. Finish Order\n");
        printf("\nPick between ['1-8'] or ['0'] finish order : ");
        
        // To ensure the user enters a correct menu choice from 1-8 or 0.
        while(scanf("%f", &main_menu)!=1){
            printf("Please pick between ['1-8'] or ['0'] finish order : ");
            scanf("%*s");
        }
        while((getchar()) != '\n');

        if(main_menu>=0 && main_menu<=8);

        main_menus = main_menu;

        printf("\n\n"); // Add new lines for better readabilquantities.

        if (main_menus == 0) { 
            break; // If the user input 0 then it will exit the loop and finish the order.
        }

        if (main_menus < 0 || main_menus > 8 || (main_menu-main_menus)!= 0) { // 
            printf("Invalid choice...Please input between '1-8' or 0"); // Display an invalid main menu choice message.
            continue; // Return back to the start of the loop to input the right choice.
        }
        is_True = 1;
        do {
            display_submenu(main_menus); // Show the sub menu in order for the user to pick ehich they want to order.
            printf("Note: To complete your order, enter [0] for the main menu.\n");
            printf("\nChoose [a/b/c] to add an item or [0] for the main menu [only accept the first alphabet] : ");
            // To read a single character from the user and space before %c is to consume any whitespace characters left in the input buffer, and makesuring accurate character input.
            scanf(" %c", &sub_menu);
            sub_menu = tolower(sub_menu); // if the user input with uppercase then it will automatically convert into lowercase.
            while(getchar()!='\n');

            if (sub_menu == '0') {
                break; // If the user pick 0 then i will exit the loop and go back to the main menu.
            } else if(sub_menu != 'a' && sub_menu != 'b' && sub_menu != 'c' && sub_menu != '0') { // This is to check if scanf fails to read an integer or if the input quantities is negative.
                printf("\nInvalid choice! Please retry order again.\n"); // Display a message for incorrect sub menu choice.
                is_Check = 0;
            } else {
                if (max < 5) {
                    while (1)  {
                        printf("Quantity :");
                        while (scanf(" %f", &quantity)!= 1) {
                            printf("Enter positive number quantities : ");
                            scanf("%*s");
                            break;
                        }
                        quantities = quantity;
                        if (quantity<0 || (quantity-quantities)!= 0) {
                            printf("Incorrect input\n");
                        }
                        else {
                            is_Check = 1;
                            break;
                        }
                    }

                } else {
                    is_True = 0; // If the maximum order has reached the limit, the process of ordering item will stop. 
                }
            }

            switch (main_menus) {
                case 1 : // If user select first choice from main menu.
                    switch (sub_menu) {
                        case 'a' : // If user select a from sub menu.
                            total_price += quantities* 7.50; // Update total price based on quantities and item price.
                            printf("[%d]-->Banana Chocolate-------------<<RM %.2f>>\n\n", quantities, quantities*7.50);
                            sprintf(ordered_items[max], "[%d] -------> |Banana Chocolate|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 7.50; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'b' : // If user select b from sub menu.
                            total_price += quantities * 26.50; // Update total price based on quantities and item price.
                            printf("[%d]-->Crispy Meal-------------<<RM %.2f>>\n\n",quantities, quantities*26.50);
                            sprintf(ordered_items[max], "[%d] -------> |Crispy Meal|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 26.50; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'c' : // If user select c from sub menu.
                            total_price += quantities * 9.50; // Update total price based on quantities and item price.
                            printf("[%d]-->Golden Matcha Balls-------------<<RM %.2f>>\n\n",quantities, quantities*9.50);
                            sprintf(ordered_items[max], "[%d] -------> |Golden Matcha Balls|", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 9.50; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        default :
                            break;
                    }
                    break;

                case 2 :

                    switch (sub_menu) {
                        case 'a' :
                            total_price += quantities * 42.00; // Update total price based on quantities and item price.
                            printf("[%d]-->5 Pieces Combo-------------<<RM %.2f>>\n\n", quantities, quantities*42.00);
                            sprintf(ordered_items[max], "[%d] -------> |5 Pieces Combo|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 42.00; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'b' :
                            total_price += quantities * 68.00; // Update total price based on quantities and item price.
                            printf("[%d]-->9 Pieces Combo-------------<<RM %.2f>>\n\n",quantities, quantities*68.00);
                            sprintf(ordered_items[max], "[%d] -------> |9 Pieces Combo|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 68.00; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'c' :
                            total_price += quantities * 99.00; // Update total price based on quantities and item price.
                            printf("[%d]-->15 Pieces Combos-------------<<RM %.2f>>\n\n",quantities, quantities*99.00);
                            sprintf(ordered_items[max], "[%d] -------> |15 Pieces Combo|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 99.00; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        default :
                            break;
                    }
                    break;

                case 3 :

                    switch (sub_menu) {
                        case 'a' :
                            total_price += quantities * 21.00; // Update total price based on quantities and item price.
                            printf("[%d]-->Zinger Box-------------<<RM %.2f>>\n\n", quantities, quantities*21.00);
                            sprintf(ordered_items[max], "[%d] -------> |Zinger Box|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 21.00; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'b' :
                            total_price += quantities * 12.00; // Update total price based on quantities and item price.
                            printf("[%d]-->Snacker Box-------------<<RM %.2f>>\n\n",quantities, quantities*12.00);
                            sprintf(ordered_items[max], "[%d] -------> |Snacker Box|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 12.00; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'c' :
                            total_price += quantities * 17.50; // Update total price based on quantities and item price.
                            printf("[%d]-->Classic Box-------------<<RM %.2f>>\n\n",quantities, quantities*17.50);
                            sprintf(ordered_items[max], "[%d] -------> |Classic Box|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 17.50; // Store the total price for the ordered item.
                            is_True = 0;
                            break; 
                        default :
                            break;
                    }
                    break;

                case 4 :

                    switch (sub_menu) {
                        case 'a' :
                            total_price += quantities * 18.00; // Update total price based on quantities and item price.
                            printf("[%d]-->Snake Plate-------------<<RM %.2f>>\n\n", quantities, quantities*18.00);
                            sprintf(ordered_items[max], "[%d] -------> |Snake Plate|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 18.00; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'b' :
                            total_price += quantities * 22.50; // Update total price based on quantities and item price.
                            printf("[%d]-->Dinner Plate-------------<<RM %.2f>>\n\n",quantities, quantities*22.50);
                            sprintf(ordered_items[max], "[%d] -------> |Dinner Plate|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 22.50; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'c' :
                            total_price += quantities * 91.00; // Update total price based on quantities and item price.
                            printf("[%d]-->15 Pieces Chicken-------------<<RM %.2f>>\n\n",quantities, quantities*91.00);
                            sprintf(ordered_items[max], "[%d] -------> |15 Pieces Chicken|", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 91.00; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        default :
                            break;
                    }
                    break;

                case 5 :

                    switch (sub_menu) {
                        case 'a' :
                            total_price += quantities * 8.50; // Update total price based on quantities and item price.
                            printf("[%d]-->Classic Colonel-------------<<RM %.2f>>\n\n", quantities, quantities*8.50);
                            sprintf(ordered_items[max], "[%d] -------> |Classic Colonel|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 8.50; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'b' :
                            total_price += quantities * 18.90; // Update total price based on quantities and item price.
                            printf("[%d]-->Stacker Zinger-------------<<RM %.2f>>\n\n",quantities, quantities*18.90);
                            sprintf(ordered_items[max], "[%d] -------> |Stacker Zinger|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 18.90; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'c' :
                            total_price += quantities * 20.50; // Update total price based on quantities and item price.
                            printf("[%d]-->Cheezy Zinger-------------<<RM %.2f>>\n\n",quantities, quantities*20.50);
                            sprintf(ordered_items[max], "[%d] -------> |Cheezy Zinger|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 20.50; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        default :
                            break;
                    }
                    break;

                case 6 :

                    switch (sub_menu) {
                        case 'a' :
                            total_price += quantities * 10.50; // Update total price based on quantities and item price.
                            printf("[%d]-->Nuggets 6 Pieces-------------<<RM %.2f>>\n\n", quantities, quantities*10.50);
                            sprintf(ordered_items[max], "[%d] -------> |Nuggets 6 Pieces|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 10.50; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'b' :
                            total_price += quantities * 14.50; // Update total price based on quantities and item price.
                            printf("[%d]-->Nuggets 9 Pieces-------------<<RM %.2f>>\n\n",quantities, quantities*14.50);
                            sprintf(ordered_items[max], "[%d] -------> |Nuggets 9 Pieces|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 14.50; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        default :
                            break;
                    }
                    break;

                case 7 :

                    switch (sub_menu) {
                        case 'a' :
                            total_price += quantities * 12.99; // Update total price based on quantities and item price.
                            printf("[%d]-->Kid Meal Set A-------------<<RM %.2f>>\n\n", quantities, quantities*12.99);
                            sprintf(ordered_items[max], "[%d] -------> |Kid Meal Set A|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 12.99; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'b' :
                            total_price += quantities * 12.99; // Update total price based on quantities and item price.
                            printf("[%d]-->Kid Meal Set B-------------<<RM %.2f>>\n\n",quantities, quantities*12.99);
                            sprintf(ordered_items[max], "[%d] -------> |Kid Meal Set B|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 12.99; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'c' :
                            total_price += quantities * 12.99; // Update total price based on quantities and item price.
                            printf("[%d]-->Kid Meal Set C-------------<<RM %.2f>>\n\n",quantities, quantities*12.99);
                            sprintf(ordered_items[max], "[%d] -------> |Kid Meal Set C|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 12.99; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        default :
                            break;
                    }
                    break;

                case 8 :

                    switch (sub_menu) {
                        case 'a' :
                            total_price += quantities * 4.70; // Update total price based on quantities and item price.
                            printf("[%d]-->Coca Cola-------------<<RM %.2f>>\n\n", quantities, quantities*4.70);
                            sprintf(ordered_items[max], "[%d] -------> |Coca Cola|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 4.70; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                       case 'b' :
                            total_price += quantities * 5.70; // Update total price based on quantities and item price.
                            printf("[%d]-->White Coffee-------------<<RM %.2f>>\n\n",quantities, quantities*5.70);
                            sprintf(ordered_items[max], "[%d] -------> |White Coffee|\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 5.70; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        case 'c' :
                            total_price += quantities * 6.80; // Update total price based on quantities and item price.
                            printf("[%d]-->Milo-------------<<RM %.2f>>\n\n",quantities, quantities*6.80);
                            sprintf(ordered_items[max], "[%d] -------> |Milo|\t\t", quantities); // Display order details and format the order string.
                            ordered_quantities[max] = quantities; // Save the quantities for future reference.
                            ordered_prices[max] = quantities * 6.80; // Store the total price for the ordered item.
                            is_True = 0;
                            break;
                        default :
                            break;
                    }
                    break;

                case 0 : // To print the error message for invalid choice.
                    printf("Incorrect choice! Please try again.\n");
                    break;

                default : // To print a message for any other invalid selection.
                    printf("Invalid selection.\n");

                    break;
            }
            while(is_Check){
                if(max<5){
                    max++;
                    break;   
                } else {
                    break;
                }
            }

            if (max == 5) { // To check if the maximum order limit 5 items has been reached.
                is_True = 0; // End the ordering process by setting is_True = 0.
                break;
            }

        } while(is_True); // Continue ordering while is_True is True.
    }

    printf("\n\t\t-----------Receipt-----------\n\n"); // Print the header for the receipt.
    for (int i = 0; i<max; i++) { // Go through each ordered item and show its information.
        printf("==========================================================\n");
        printf("||\t%s\t\t||\n||\t\t\t\t******<<RM %.2f>>\t||\n", ordered_items[i], ordered_prices[i]);
    }

    printf("==========================================================\n");
    printf("||\t\t\t  ||Total Price --> [RM %.2f] ||\n", total_price); // Display the total price of the ordered items.
    printf("==========================================================\n");


    int order_again; // Variable to store the user's choice for ordering again.

    while(total_price == 0.0){ // Loop to handle if the user didn't order anything.
        printf("You didn't order anything.");
        printf("\n\nDo you want to order again?\nType '1' for yes and '0' for no : "); // Ask the user if they want to order again or no.
        scanf("%d", &order_again);

       
    if (order_again != 1) { // If the user choose not to order again then if will display thank you message.
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("|Thank you for using W.A.Y KFC Traditional Ordering Platform|\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\n");
        return 0;
   
    }

    return 1; // Show that the user intends to place another order.
    }

    float money_received; // Variable to store the amount of money received.
    printf("Enter money received : RM "); // Ask user to input the amount money to pay.
    while (scanf("%f", &money_received) != 1) { // It will keep repeating until the user the valid float.
        printf("Enter the amount of money to pay : RM "); // Ask again if the input is not a valid float.
        scanf("%*s"); // Clear the input buffer.
    }

    float balance; // Variable to calculate the balance.
    balance = money_received - total_price; // Calculate the balance by subtracting the total price from the money received.

    while (balance < 0) { // If the balance is negative, meaning the money is not enough.
        printf("\nThe money is not enough. Please give the right amount.\n");
        printf("Enter money received : RM "); //Prompt for new input.
        scanf("%f", &money_received); // Update the money received.
        while((getchar() !='\n'));
        balance = money_received - total_price; // Recalculate the balance.
    }

    printf("Balance : RM %0.2f", balance); // Display the remaining balance.  

    while(1) {
        printf("\n\nDo you want to order again?\nType '1' for yes and '0' for no : "); // Ask user if they still want to order again or no.
        while(scanf("%d", &order_again)!= 1){
            printf("Invalid input");
            printf("\n\nDo you want to order again?\nType '1' for yes and '0' for no : ");
            scanf("%*s", &order_again);
        }

        if (order_again == 0) { // If the user doesn't want to order again.
            printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("|Thank you for using W.A.Y KFC Traditional Ordering Platform|\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\n");
            return 0; // End the program.
        } else if (order_again == 1){
            return 1; // Indicate that the user wants to order again by returning 1.
        } else {
            printf("Incorrect input");
        }

    }    

}