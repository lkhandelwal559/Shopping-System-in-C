#include <stdio.h>
#include <string.h>

int main() {
    static int totalCost;
    float TOTAL;
    int i, j, choice, c = 1, a[9], cost[9];

    for (i = 0; i < 9; i++)
        a[i] = 0;

    char str[100];
    char items[4][100] = {
        "WHEAT 1 KG",
        "RICE 1 KG",
        "SUGAR 1 KG",
        "CLARIFIED BUTTER 1 KG"};

    printf("******************PROGRAMMER'S BLOCK******************\n");
    printf("MADE BY Love Khandelwal FROM INDIA \n");
    printf("just implemenation of the programming language learned ");

    printf("Please Enter Your Name\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the newline character

    printf("Hello %s, Welcome to our Online Shopping.\n", str);
    printf("\n************************** SECURITY CODE TO ACCESS BANKING SERVICE IS 1520*************************************\n");

    do {
        // C is 1 by default
        if (c == 1) {
            printf("Enter\n1 - SHOPPING STORE\n2 - BANKING OPTION\n3 - HELP OPTION\n - CLICK ANY OTHER KEY TO EXIT\n");
            scanf("%d", &choice);

            switch (choice) {
            case 1: {
                int SHOPPINGCHOICE;
                printf("Enter\n1 - WHEAT-Rs.20\n2 - RICE - Rs.100\n3 - SUGAR - Rs.40\n4 - CLARIFIED BUTTER - Rs.500\n5-PRESS ANY OTHER KEY TO EXIT\n");
                printf("All prices are of each commodity per kilogram");
                scanf("%d", &SHOPPINGCHOICE);

                cost[0] = 20;
                cost[1] = 100;
                cost[2] = 40;
                cost[3] = 500;

                switch (SHOPPINGCHOICE) {
                case 1: {
                    int num;
                    printf("You chose WHEAT COSTING Rs.20 RUPEES PER KG. ARE you sure to buy. If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);

                    if (num == 1) {
                        a[0]++;
                        totalCost += 20;
                        TOTAL = totalCost + (0.13 * totalCost);
                    }

                    printf("Your Cost in Cart is %f\n", TOTAL);
                    break;
                }
                case 2: {
                    int num;
                    printf("You chose RICE COSTING Rs.100 PER KG. Are you sure to buy. If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);

                    if (num == 1) {
                        a[1]++;
                        totalCost += 100;
                        TOTAL = totalCost + (0.13 * totalCost);
                    }

                    printf("Your Cost in Cart is %f\n", TOTAL);
                    break;
                }
                case 3: {
                    int num;
                    printf("You chose SUGAR COSTING Rs.40 PER KG. Are you sure to buy. If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);

                    if (num == 1) {
                        a[2]++;
                        totalCost += 40;
                        TOTAL = totalCost + (0.13 * totalCost);
                    }

                    printf("Your Cost in Cart is %f\n", TOTAL);
                    break;
                }
                case 4: {
                    int num;
                    printf("You chose CLARIFIED BUTTER COSTING Rs.500 PER KG. Are you sure to buy. If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);

                    if (num == 1) {
                        a[3]++;
                        totalCost += 500;
                        TOTAL = totalCost + (0.13 * totalCost);
                    }

                    TOTAL = totalCost + (0.13 * totalCost);
                    printf("Your Cost in Cart is %f\n", TOTAL);
                    break;
                }

                default: {
                    printf("Exit from SHOPPING STORE\n");
                    break;
                }
                }
                break;
            }

            printf("Total Cost\t\t\t\t\t%f\n", TOTAL);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
            scanf("%d", &c);
        }

        case 2: {
            float amount = 1000, deposit;
            int choice, pin, k;
            char transaction = 'y';

            printf("\n************************** SECURITY CODE TO ACCESS BANKING SERVICE IS 1520*************************************\n");

            while (pin != 1520) {
                printf("ENTER YOUR SECRET PIN NUMBER:");
                scanf("%d", &pin);

                if (pin != 1520)
                    printf("PLEASE ENTER VALID PASSWORD\n");
            }

            do {
                printf("********Welcome to Bankingsystem********\n");
                printf("1. Check Balance\n");

                printf("2. Deposit Cash\n");
                printf("3. Payment\n");
                printf("4. Quit\n");
                printf("******************?**************************?*\n\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                case 1:
                    printf("\n YOUR BALANCE IN Rs : %f ", amount);
                    break;

                case 2:
                    printf("\n ENTER THE AMOUNT TO DEPOSIT");
                    scanf("%f", &deposit);
                    amount = amount + deposit;
                    printf("YOUR BALANCE IS %f", amount);
                    break;

                case 3:
                    if (TOTAL > amount) {
                        printf("less balance increase the deposit");
                        break;
                    } else {
                        amount = amount - TOTAL;
                        printf("YOUR PAYMENT IS DONE AND BALANCE AMOUNT IN YOUR ACCOUNT IS %f", amount);
                        break;
                    }

                    break;

                case 4:
                    printf("\n THANK U USING BANKING SERVICE\n");
                    break;

                default:
                    printf("\n INVALID CHOICE");
                }

                printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSACTION?(y/n): \n");
                fflush(stdin);
                scanf(" %c", &transaction);
                if (transaction == 'n' || transaction == 'N')
                    k = 1;
            } while (!k);

            printf("\n\n THANKS FOR USING BANKING SERVICES\n\n");
        }
        case 3:
            printf("\n********HELP CENTER***********\n");
            printf("FOLLOW THE FOLLOWING STEP TO OPERATE");
            printf("\n\n1-enter your name\n2-choose from the given option to enter the required part\n3-follow the step inside the particular specific
