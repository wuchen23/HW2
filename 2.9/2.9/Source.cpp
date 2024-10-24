#include <stdio.h>

int main() {
    int paycode;
    double weeklypay = 0.0;
    printf("�п�J���u���~��N�X (1-�g�z, 2-���~���u, 3-�������u, 4-�p����u): ");
    scanf_s("%d", &paycode);

    switch (paycode) {
    case 1: { 
        double salary;
        printf("�п�J�g�z���T�w�C�g�~��: ");
        scanf_s("%lf", &salary);
        weeklypay = salary;
        break;
    }
    case 2: {  
        double hourlywage, hours;
        printf("�п�J���~: ");
        scanf_s("%lf", &hourlywage);
        printf("�п�J�u�@�p�ɼ�: ");
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
        printf("�п�J�������u���C�g�P���B: ");
        scanf_s("%lf", &sales);
        weeklypay = 250 + 0.057 * sales;
        break;
    }
    case 4: {  
        double a, payItem;
        printf("�п�J�Ͳ������: ");
        scanf_s("%lf", &a);
        printf("�п�J�C�󪺤u��: ");
        scanf_s("%lf", &payItem);
        weeklypay = a * payItem;
        break;
    }
    default:
        printf("�L�Ī��~��N�X�C\n");
        return 1;
    }
    printf("�ӭ��u���C�g�u�ꬰ: $%.2f\n", weeklypay);
    return 0;
}
