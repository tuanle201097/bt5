// bt5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
int sokilomet;
int sotien;
int tinhtien(int sokilomet, int sotien) {
    if(sokilomet==1)
    {
        printf("Ban phai tra la: %d dong",sotien);

    }
    else if (1 < sokilomet <= 30)
    {
        sotien = sotien + ((sokilomet-1) * 4000);
        printf("Ban phai tra la: %d dong", sotien);
    }
    else if (sokilomet > 30)
    {
        sotien = (sotien + (29 * 4000)) + (sokilomet * 3000);
        printf("Ban phai tra la: %d dong", sotien);
    }
    else
    {

    }
    return sotien;
}

int main()
{
    printf("Nhap so kilomet:");
    scanf_s("%d", &sokilomet);
    tinhtien(sokilomet,5000);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
