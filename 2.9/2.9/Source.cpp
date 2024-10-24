#include <stdio.h>

int main() {
    int paycode;
    double weeklypay = 0.0;
    printf("請輸入員工的薪資代碼 (1-經理, 2-時薪員工, 3-佣金員工, 4-計件員工): ");
    scanf_s("%d", &paycode);

    switch (paycode) {
    case 1: { 
        double salary;
        printf("請輸入經理的固定每週薪水: ");
        scanf_s("%lf", &salary);
        weeklypay = salary;
        break;
    }
    case 2: {  
        double hourlywage, hours;
        printf("請輸入時薪: ");
        scanf_s("%lf", &hourlywage);
        printf("請輸入工作小時數: ");
        scanf_s("%lf", &hours);

        if (hours > 40) {
            weeklypay = 40 * hourlywage + (hours - 40) * hourlywage * 1.5;
        }
        else {
            weeklypay = hours * hourlywage;
        }
        break;
    }
    case 3: {  
        double sales;
        printf("請輸入佣金員工的每週銷售額: ");
        scanf_s("%lf", &sales);
        weeklypay = 250 + 0.057 * sales;
        break;
    }
    case 4: {  
        double a, payItem;
        printf("請輸入生產的件數: ");
        scanf_s("%lf", &a);
        printf("請輸入每件的工資: ");
        scanf_s("%lf", &payItem);
        weeklypay = a * payItem;
        break;
    }
    default:
        printf("無效的薪資代碼。\n");
        return 1;
    }
    printf("該員工的每週工資為: $%.2f\n", weeklypay);
    return 0;
}
