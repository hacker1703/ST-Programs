#include <stdio.h>
main()
{
int option, option2;
float eur_sterling, sterling_eur, sterling, sterling_euro;
float eur_krone, krone_eur, krone, krone_euro;
float eur_yen, yen_eur, yen, yen_euro;
float euro_dollar1, euro_dollar2, euro_dollar;
float dollar_eur1, dollar_eur2, dollar_euro;
do
{
printf("Currency Converter\n");
printf("1. Britain\n");
printf("2. Denmark\n");
printf("3. Japan\n");
printf("4. USA\n");
printf("5. Exit Program\n");
printf("Please select an option: ");
scanf("%d", &option);
if (option == 1)
{
printf("If converting from Euro to Sterling, press 1\n");
printf("If converting from Sterling to Euro, press 2\n");
scanf("%d", &option2);
if (option2 == 1)
{
printf("Please enter the amount you wish to convert (Euro to Sterling): ");
scanf("%f", &eur_sterling);
sterling = eur_sterling * 0.70;
printf("%.2f Euro = %.2f Sterling\n\n", eur_sterling, sterling);
}
else if (option2 == 2)
{
printf("Please enter the amount you wish to convert (Sterling to Euro): ");
scanf("%f", &sterling_eur);
sterling_euro = sterling_eur * 1.42;
printf("%.2f Sterling = %.2f Euro\n\n", sterling_eur, sterling_euro);
}
else
{
printf("Error: Invalid Code\n\n");
}
}
else if (option == 2)
{
printf("If converting from Euro to Krone, press 1\n");
printf("If converting from Krone to Euro, press 2\n");
scanf("%d", &option2);
if (option2 == 1)
{
printf("Please enter the amount you wish to convert (Euro to Krone): ");
scanf("%f", &eur_krone);
krone = eur_krone * 7.45;
printf("%.2f Euro = %.2f Krone\n\n", eur_krone, krone);
}
else if (option2 == 2)
{
printf("Please enter the amount you wish to convert (Krone to Euro): ");
scanf("%f", &krone_eur);
krone_euro = krone_eur * 0.13;
printf("%.2f Krone = %.2f Euro\n\n", krone_eur, krone_euro);
}
else
{
printf("Error: Invalid Code\n\n");
}
}
else if (option == 3)
{
printf("If converting from Euro to Yen, press 1\n");
printf("If converting from Yen to Euro, press 2\n");
scanf("%d", &option2);
if (option2 == 1)
{
printf("Please enter the amount you wish to convert (Euro to Yen): ");
scanf("%f", &eur_yen);
yen = eur_yen * 138;
printf("%.2f Euro = %.2f Yen\n\n", eur_yen, yen);
}
else if (option2 == 2)
{
printf("Please enter the amount you wish to convert (Yen to Euro): ");
scanf("%f", &yen_eur);
yen_euro = yen_eur * 0.01;
printf("%.2f Yen = %.2f Euro\n\n", yen_eur, yen_euro);
}
else
{
printf("Error: Invalid Code\n\n");
}
}
else if (option == 4)
{
printf("If converting from Euro to Dollar, press 1\n");
printf("If converting from Dollar to Euro, press 2\n");
scanf("%d", &option2);
if (option2 == 1)
{
printf("Please enter the exchange rate (1 Euro = ? Dollar): ");
scanf("%f", &euro_dollar1);
printf("Please enter the amount you wish to convert (Euro to Dollar): ");
scanf("%f", &euro_dollar2);
euro_dollar = euro_dollar1 * euro_dollar2;
printf("%.2f Euro = %.2f Dollar\n\n", euro_dollar2, euro_dollar);
}
else if (option2 == 2)
{
printf("Please enter the exchange rate (1 Dollar = ? Euro): ");
scanf("%f", &dollar_eur1);
printf("Please enter the amount you wish to convert (Dollar to Euro): ");
scanf("%f", &dollar_eur2);
dollar_euro = dollar_eur1 * dollar_eur2;
printf("%.2f Dollar = %.2f Euro\n\n", dollar_eur2, dollar_euro);
}
else
{
printf("Error: Invalid Code\n\n");
}
}
else if (option == 5)
{
printf("Exit Program\n");
}
else
{
printf("Error: Invalid Code\n\n");
}
}
while (option != 5);
return 0;
}
