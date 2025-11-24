#include <stdio.h>
#define MAX 50   // maximum number of investments

// Structure to store one investment
struct Investment {
    char name[50];
    float amount;
};

int main() {
    struct Investment portfolio[MAX];
    int count = 0;
    int choice;
    
    while (1) {
        printf("\n--- Investment Portfolio ---\n");
        printf("1. Add investment\n");
        printf("2. View portfolio\n");
        printf("3. Total value\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < MAX) {
                printf("Enter investment name: ");
                scanf("%s", portfolio[count].name);
                printf("Enter amount invested: ");
                scanf("%f", &portfolio[count].amount);
                count++;
                printf("Investment added!\n");
            } else {
                printf("Portfolio full!\n");
            }
        }
        else if (choice == 2) {
            printf("\nYour Investments:\n");
            for (int i = 0; i < count; i++) {
                printf("%d. %s - $%.2f\n", i+1,
                       portfolio[i].name,
                       portfolio[i].amount);
            }
        }
        else if (choice == 3) {
            float total = 0;
            for (int i = 0; i < count; i++) {
                total += portfolio[i].amount;
            }
            printf("\nTotal Portfolio Value: $%.2f\n", total);
        }
        else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}