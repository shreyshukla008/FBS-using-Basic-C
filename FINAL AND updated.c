#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <math.h>


// Login Page Pattern //
void pattern()
{
    printf("\n\n");
for(int i=0;i<=19;i++){
    for(int j=1;j<=45;j++){

        if(i<=8){
            if(j <= 25+i && j >= 25-i)
            printf("* ");
            else
            printf("  ");
        }
        else if(i<=13){
            if(j <= 25+8 && j >= 25-8)
            printf("* ");
            else
            printf("  ");
        }
        if(i<=19 && i >13){
            if(j <= 33 && j >= 17)
            printf("* ");
            else if(j <= 20+(i-10) && j >= 24-(i-10)*2 )
            printf("* * ");
            else
            printf("  ");
        }
    }
    printf("\n");
}
    printf("         -------------------------------------------------------------------------------\n");
    printf("                                  XXX FLIGHT BOOKING SYSTEM XXX                         \n");
    printf("         -------------------------------------------------------------------------------\n");



}

void welcome()
{
    printf("--------------------------------------------------------------------------------\n");
    printf("                         WELCOME TO FLIGHT BOOKING SYSTEM                       \n");
    printf("--------------------------------------------------------------------------------\n");
}

void thank()
{
    printf("--------------------------------------------------------------------------------\n");
    printf("                                    THANK YOU                                  \n");
    printf("-------------------------------------------------------------------------------\n");
}

// Available Flights //

void header()
{
printf("\nCode     Flight         Price(ECO)   Price(BS)     Seating Cap(ECO)    Seating Cap(BS)    Available Seats(ECO)    Available Seats(BS)\n");
}

void option1()
{
printf("\nCode   Flight            Price(ECO)    Price(BS)     Seating Cap(ECO)    Seating Cap(BS)    Available Seats(ECO)    Available Seats(BS)\n");     
printf("1.      Delhi To Indore      3,000          15,000             100               25                   50                      15\n");                   
printf("2.      Delhi To Kanpur      4,000          20,000             100               25                   55                      18\n");
printf("3.      Delhi To Vizag       6,500          32,500             100               25                   52                      13\n");
}

void option2()
{
printf("\nCode    Flight           Price(ECO)    Price(BS)     Seating Cap(ECO)    Seating Cap(BS)    Available Seats(ECO)    Available Seats(BS)\n"); 
printf("4.      Mumbai To Delhi       4,500         22,500             100               25                   50                      11\n");
printf("5.      Mumbai To Chennai     7,000         35,000             100               25                   53                      14\n");
printf("6.      Mumbai To Kolkata     6,500         32,500             100               25                   51                      15\n");
}

void option3()
{
printf("\nCode      Flight          Price(ECO)    Price(BS)     Seating Cap(ECO)    Seating Cap(BS)    Available Seats(ECO)    Available Seats(BS)\n");
printf("7.      Delhi To Abu Dhabi    10,000         50,000             250              50                    120                      25\n");
printf("8.      Delhi To New York     35,500        175,000             250              50                    130                      30\n");
printf("9.      Delhi To Singapore    22,500        112,500             250              50                    125                      28\n");
}

void option4()
{
printf("\nCode       Flight           Price(ECO)    Price(BS)     Seating Cap(ECO)    Seating Cap(BS)    Available Seats(ECO)    Available Seats(BS)\n");   
printf("10.    Mumbai To Washington    30,000        150,000              250              50                    140                      21\n");
printf("11.    Mumbai To California    32,500        162,500              250              50                    120                      23\n");
printf("12.    Mumbai To Las Vegas     35,000        175,000              250              50                    105                      28\n");
} 

struct flight
{
int ticket;
int price;
int class;
int factor;
int food;
char name[50];
int age;

};

int main()
{
struct flight book[10];
int trip;
int date;
int date2;
int a;
int x;
int total_price[10];
float total;
int month;
int check = 0;

printf("\n\n");
welcome();
printf("\n\n");

// Login Page //

    char username[50];
    char password[50];
    char enter;
    printf("\n\n");
    printf("Enter username: ");
    fgets(username,50,stdin);
    printf("\n");
    printf("Enter password: ");
    fgets(password,50,stdin);
    printf("\n\n");

    printf("                            Press ENTER to CONTINUE                              ");
    scanf("%c" , &enter);

pattern();
printf("\n\n");

// Flight Details //

printf("\nDate : DD - MM - 2023\n");

printf("\nEnter Date(DD): ");
scanf("%d", &date);
printf("\nEnter Month(MM): ");
scanf("%d", &month);

printf("\nBook for : \n 1. INTERNATIONAL TRIP \n 2. DOMESTIC TRIP \n");
scanf("%d", &trip);

// Flight Options //

switch (trip)
{
case 2:
{

if (((date % 2 == 0) && (month % 2 == 0)) || ((date % 2 != 0) && (month % 2 != 0)))
{

printf("\n Avilable Flights for %d - %d - 2023\n",date,month);
option1();
printf("\n How many tickets will you get: \n");
scanf("%d", &x);

// Booking Details //

for (a=1; a<=x; a++)
{
printf("\n       ENTER BOOKING DETAILS FOR PASSENGER %d\n",a);
printf("\nEnter name of passenger: \t");
fflush(stdin);
fgets(book[a].name,50,stdin);
printf("\nEnter age of passsenger: \t");
scanf("%d",&book[a].age);
printf("\n Enter flight code for passenger : \n");
scanf("%d", &book[a].ticket);
printf("\n Please select food preference : \n1. Vegetarian Food\n2. Non Vegetarian Food\n3. Not   \n");
scanf("%d", &book[a].food);
printf("\n Please select mode of travelling : \n1. BUSINESS CLASS\n2. ECONOMY CLASS \n");
scanf("%d", &book[a].class);
if(book[a].class == 1){
    book [a].factor = 5;
}
else if(book[a].class == 2){
    book [a].factor = 1;
}
else 
printf("INVALID INPUT!");

if(book[a].ticket == 1)
{
    book[a].price = 3000;
}
if(book[a].ticket == 2)
{
    book[a].price = 4000;
}
if(book[a].ticket == 3)
{
    book[a].price = 6500;
}
if(book[a].ticket == 4)
{
    book[a].price = 4500;
}
if(book[a].ticket == 5)
{
    book[a].price = 7000;
}
if(book[a].ticket == 6)
{
    book[a].price = 6500;
}
if(book[a].ticket == 7)
{
    book[a].price = 10000;
}
if(book[a].ticket == 8)
{
    book[a].price = 35500;
}
if(book[a].ticket == 9)
{
    book[a].price = 22500;
}
if(book[a].ticket == 10)
{
    book[a].price = 30000;
}
if(book[a].ticket == 11)
{
    book[a].price = 32500;
}
if(book[a].ticket == 12)
{
    book[a].price = 35000;
}
}
break;
}

else if ((month > 12) || (date > 31))
{
    printf("INVALID ENTRY!");
    break;
}

else  
{

printf("\n Avilable Flights for %d - %d - 2023\n",date,month);
option2();
printf("\n How many tickets will you get: \n");
scanf("%d", &x);

// Booking Details //

for (a=1; a<=x; a++)
{
printf("\n       ENTER BOOKING DETAILS FOR PASSENGER %d\n",a);
printf("\nEnter name of passenger: \t");
fflush(stdin);
fgets(book[a].name,50,stdin);
printf("Enter age of passsenger: \t");
scanf("%d",&book[a].age);
printf("\n Enter flight code for passenger : \n");
scanf("%d", &book[a].ticket);
printf("\n Please select food preference : \n1. Vegetarian Food\n2. Non Vegetarian Food\n3. Not   \n");
scanf("%d", &book[a].food);
printf("\n Please select mode of travelling : \n1. BUSINESS CLASS\n2. ECONOMY CLASS \n");
scanf("%d", &book[a].class);
if(book[a].class == 1){
    book [a].factor = 5;
}
else if(book[a].class == 2){
    book [a].factor = 1;
}
else 
printf("INVALID INPUT!");

if(book[a].ticket == 1)
{
    book[a].price = 3000;
}
if(book[a].ticket == 2)
{
    book[a].price = 4000;
}
if(book[a].ticket == 3)
{
    book[a].price = 6500;
}
if(book[a].ticket == 4)
{
    book[a].price = 4500;
}
if(book[a].ticket == 5)
{
    book[a].price = 7000;
}
if(book[a].ticket == 6)
{
    book[a].price = 6500;
}
if(book[a].ticket == 7)
{
    book[a].price = 10000;
}
if(book[a].ticket == 8)
{
    book[a].price = 35500;
}
if(book[a].ticket == 9)
{
    book[a].price = 22500;
}
if(book[a].ticket == 10)
{
    book[a].price = 30000;
}
if(book[a].ticket == 11)
{
    book[a].price = 32500;
}
if(book[a].ticket == 12)
{
    book[a].price = 35000;
}
}
break;
}
}

case 1:
{

if (((date % 2 == 0) && (month % 2 == 0)) || ((date % 2 != 0) && (month % 2 != 0)))
{

printf("\n Avilable Flights for %d - %d - 2023\n",date,month);
option3();
printf("\n How many tickets will you get: \n");
scanf("%d", &x);

// Booking Details //

for (a=1; a<=x; a++)
{
printf("\n       ENTER BOOKING DETAILS FOR PASSENGER %d\n",a);
printf("\n Enter name of passenger: \t");
fflush(stdin);
fgets(book[a].name,50,stdin);
printf("\nEnter age of passsenger: \t");
scanf("%d",&book[a].age);
printf("\n Enter flight code for passenger : \n");
scanf("%d", &book[a].ticket);
printf("\n Please select food preference : \n1. Vegetarian Food\n2. Non Vegetarian Food\n3. Not   \n");
scanf("%d", &book[a].food);
printf("\n Please select mode of travelling : \n1. BUSINESS CLASS\n2. ECONOMY CLASS \n");
scanf("%d", &book[a].class);
if(book[a].class == 1){
    book [a].factor = 5;
}
else if(book[a].class == 2){
    book [a].factor = 1;
}
else 
printf("INVALID INPUT!");

if(book[a].ticket == 1)
{
    book[a].price = 3000;
}
if(book[a].ticket == 2)
{
    book[a].price = 4000;
}
if(book[a].ticket == 3)
{
    book[a].price = 6500;
}
if(book[a].ticket == 4)
{
    book[a].price = 4500;
}
if(book[a].ticket == 5)
{
    book[a].price = 7000;
}
if(book[a].ticket == 6)
{
    book[a].price = 6500;
}
if(book[a].ticket == 7)
{
    book[a].price = 10000;
}
if(book[a].ticket == 8)
{
    book[a].price = 35500;
}
if(book[a].ticket == 9)
{
    book[a].price = 22500;
}
if(book[a].ticket == 10)
{
    book[a].price = 30000;
}
if(book[a].ticket == 11)
{
    book[a].price = 32500;
}
if(book[a].ticket == 12)
{
    book[a].price = 35000;
}
}
break;
}

else if ((month > 12) || (date > 31))
{
    printf("INVALID ENTRY!");
    break;
}

else  
{

printf("\n Avilable Flights for %d - %d - 2023\n",date,month);
option4();
printf("\n How many tickets will you get: \n");
scanf("%d", &x);

// Booking Details //

for (a=1; a<=x; a++)
{
printf("\n       ENTER BOOKING DETAILS FOR PASSENGER %d\n",a);
printf("\nEnter name of passenger: \t");
fflush(stdin);
fgets(book[a].name,50,stdin);
printf("\nEnter age of passsenger: \t");
scanf("%d",&book[a].age);
printf("\n Enter flight code for passenger : \n");
scanf("%d", &book[a].ticket);
printf("\n Please select food preference : \n1. Vegetarian Food\n2. Non Vegetarian Food\n3. Not   \n");
scanf("%d", &book[a].food);
printf("\n Please select mode of travelling : \n1. BUSINESS CLASS\n2. ECONOMY CLASS \n");
scanf("%d", &book[a].class);
if(book[a].class == 1){
    book [a].factor = 5;
}
else if(book[a].class == 2){
    book [a].factor = 1;
}
else 
printf("INVALID INPUT!");

if(book[a].ticket == 1)
{
    book[a].price = 3000;
}
if(book[a].ticket == 2)
{
    book[a].price = 4000;
}
if(book[a].ticket == 3)
{
    book[a].price = 6500;
}
if(book[a].ticket == 4)
{
    book[a].price = 4500;
}
if(book[a].ticket == 5)
{
    book[a].price = 7000;
}
if(book[a].ticket == 6)
{
    book[a].price = 6500;
}
if(book[a].ticket == 7)
{
    book[a].price = 10000;
}
if(book[a].ticket == 8)
{
    book[a].price = 35500;
}
if(book[a].ticket == 9)
{
    book[a].price = 22500;
}
if(book[a].ticket == 10)
{
    book[a].price = 30000;
}
if(book[a].ticket == 11)
{
    book[a].price = 32500;
}
if(book[a].ticket == 12)
{
    book[a].price = 35000;
}
}
break;
}
}
default:
break;
}

// Confirmation Page //

printf("\n\n");
printf("To continue booking CONFIRM PASSWORD \n");
printf("\nLOGGED IN AS :\t");
puts(username);
char confirm_password[50];

// Condition for Correct Password //

for(int i = 0;check != 1 ; i++){
printf("\nConfirm Password : ");
fflush(stdin);
fgets(confirm_password,50,stdin);
if (strcmp(password,confirm_password) == 0)
{

// Summary //

check = 1;
printf("\n");
printf("\n--------------------------------------------------------------------------------\n");
printf("                               ---Summary---                                       ");
printf("\n--------------------------------------------------------------------------------\n");
printf("\nAccount Name: ");
puts(username);
printf("\nDate of Journey : %d - %d - 2023",date,month);

for (a=1; a<=x; a++)
{
total_price[a] = (book[a].price)*(book[a].factor);
printf("\n                                                                \n");
printf("\n                   [ Details of Ticket no. %d ]                             \n", a);
printf("\nName of passenger: \t       ");
puts(book[a].name);
printf("Age of passenger: \t        %d",book[a].age);
printf("\nFlight no. :                    %d", (book[a].ticket*1000)+(book[a].ticket*7)+book[a].ticket+2);
printf("\nMode of Booking :            ");
if(book[a].class == 1)
    printf("   BUSINESS CLASS");
if(book[a].class == 2)
    printf("   ECONOMY CLASS");
printf("\nFood Preference:                ");
if(book[a].food == 1)
{
    printf("Vegetarian Food");
}
else if(book[a].food == 2)
{
    printf("Non-Vegetarian Food");
}
else if(book[a].food == 3)
{
    printf("None");
}
    printf("\n--------------------------------------------");
if(book[a].food == 1)
{
    printf("\nTotal Price for passenger %d:    %d\n",a, total_price[a] + 1000);
}
else if(book[a].food == 2)
{
    printf("\nTotal Price for passenger %d:    %d\n",a, total_price[a] + 1500);
}
else if(book[a].food == 3)
{
    printf("\nTotal Price for passenger %d:    %d\n",a, total_price[a] );
}
    printf("--------------------------------------------\n");

if(book[a].food == 1 )
{
    printf("     \n*Additional 1,000 is charged for opting Vegetarian food services* ");
}
else if(book[a].food == 2 )
{
    printf("     \n*Additional 1,500 is charged for opting Non Vegetarian food services* ");
}
if(book[a].class == 1 &&  trip == 1)
{
    printf("     \n*Additional charge for weight over 7kg + 64kg (Business+Internatonal)* \n");
}
else if(book[a].class == 1 &&  trip == 2)
{
    printf("     \n*Additional charge for weight over 7kg + 30kg (Business+Domestic)* \n");
}
else if(book[a].class == 2 &&  trip == 1)
{
    printf("     \n*Additional charge for weight over 7kg + 30kg (Economy+Internatonal)* \n");
}
else if(book[a].class == 2 &&  trip == 2)
{
    printf("     \n*Additional charge for weight over 7kg + 30kg (Economy+Domestic)* \n");
}
else
    printf("\n\n");

printf("\n");
}
printf("\n\n");
printf("\nCheck travel guidelines and baggage information below:");
printf("\n*** Wearing masks/face covers is no longer mandatory. However, all travellers\n    are advised to wear them, in view of the threat posed by COVID-19.");
printf("\n*** Carry no more than 1 check-in baggage and 1 hand baggage per passenger. \n    If violated, airline may levy extra charges");
printf("\n*** Ensure web check-in and obtain a boarding pass.");
printf("\n*** Carry RTPCR report for international travels.");
printf("\n*** Carry identity card (aadhar card , passport)\n");

thank();

}

// Condition for incorrect password //

else
{
    printf("\n");
    printf("\nSORRY! can't get you HIGHER........ INCORRECT PASSWORD!\n");
    printf("\nHow you want to proceed:\n");
    printf("1. Retry   \n");
    printf("2. Give up! \n ");
    int temp;
    scanf("%d", &temp);
    if(temp == 1)
        check = 0;
    else if(temp == 2)
        check = 1;
    else
        printf("\nInvalid entry!\n");
}

}

return 0;
}
