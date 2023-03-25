#include <stdio.h>
int main()
{
    char name[50];
    int phone_number;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int sugar;
    int coffee;
    int tea;
    int rice;
    int wheat;

    int pepsi;
    int sprit;
    int coke;
    int mojitos;
    int thumbs_up;

    int total;
    int cosmetics_total;
    int beverage_total;
    int grocery_total;

    printf("-------------------------------\n");
    printf("BILLING SYSTEM\n");
    printf("-------------------------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : ");
    scanf("%s", &name);
    printf("Customer Number : ");
    scanf("%d", &phone_number);
    printf("Customer id : ");
    scanf("%d", &customer_id);

    printf("-------------------------------\n");
    printf("Cosmetics\n\n");
    printf("body_soap(birr 10) :");
    scanf("%d",&body_soap);
    printf("hair_cream(birr 25) :");
    scanf("%d",&hair_cream);
    printf("hair_spray(birr 50) :");
    scanf("%d",&hair_spray);
    printf("body_spray(birr 50) :");
    scanf("%d",&body_spray);

    printf("-------------------------------\n");
    printf("groceries\n\n");
    printf("sugar(birr 100) :");
    scanf("%d",&sugar);
    printf("tea(birr 50 ) :");
    scanf("%d",&tea);
    printf("coffee(birr 150)");
    scanf("%d",&coffee);
    printf("rice(birr 15) :");
    scanf("%d",&rice);
    printf("wheat(birr 160) :");
    scanf("%d",&wheat);

 printf("-------------------------------\n");
    printf("beverages\n\n");
    printf("pepsi(birr 30) :");
    scanf("%d",&pepsi);
    printf("coke(birr 30) :");
    scanf("%d",&coke);
    printf("mojitos(birr 25) :");
    scanf("%d",&mojitos);
    printf("sprit(birr 35) :");
    scanf("%d",&sprit);
    printf("thumbs up(birr 35) :");
    scanf("%d",&thumbs_up);

    printf("-------------------------------\n");
    int boso;
    int hs;
    int hc;
    int bosp;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    cosmetics_total = boso + hc + hs + bosp;

    printf("body soap :");
    printf("%d birr\n", boso);
    printf("hair cream :");
    printf("%d birr\n",hc);
    printf("hair spray :");
    printf("%d birr\n ", hs);
    printf("body spray :");
    printf("%d birr\n", bosp);
    printf("cosmetics total :");
    printf("%d birr\n",cosmetics_total);

    printf("-------------------------------\n");
    int s,r,t,c,w;
    s = 100 * sugar;
    r = 15 * rice;
    t = 50 * tea;
    c = 150 * coffee;
    w = 160 * wheat;
    grocery_total = s + r + t + c + w;

    printf("sugar : ");
    printf("%d birr\n",s);
    printf("rice : ");
    printf("%d birr\n",r);
    printf("tea : ");
    printf("%d birr\n",t);
    printf("coffee : ");
    printf("%d birr\n",c);
    printf("wheat : ");
    printf("%d birr\n",w);

    printf("-------------------------------\n");
    int pep;
    int cok;
    int spr;
    int moj;
    int thu;


        pep = 30 * pepsi;
        cok = 30 * coke;
        spr = 35 * sprit;
        moj = 25 * mojitos;
        thu = 35 * thumbs_up;
        beverage_total = pep + cok + spr + moj + thu;

        printf("pepsi : ");
        printf("%d birr\n", pep);
        printf("coke : ");
        printf("%d birr\n", cok);
        printf("sprit : ");
        printf("%d birr\n", spr);
        printf("mojitos : ");
        printf("%d birr\n", moj);
        printf("thumbs up : ");
        printf("%d birr\n", thu);
        printf("Total beverage price : ");
        printf("%d birr\n", beverage_total);

        printf("-------------------------------\n");
         total = grocery_total + beverage_total + cosmetics_total;

        printf ("Total Amount : ");
        printf("%d birr\n",total);

        printf("-------------------------------\n");
        printf("----------------------------------------------------------------------------\n");

        printf("SALANUR SUPERMARKET\n");

        printf("Customer Name : ");
        printf("%s", name);
        printf("Customer Number : ");
        printf("%d", phone_number);
        printf("Customer id : ");
        printf("%d\n\n", customer_id);

        printf("Product Name                               Quantity                                   price\n\n");
        printf("Body soap                                  %d                                         %d\n",body_soap,boso);
        printf("Hair Cream                                 %d                                         %d\n",hair_cream,hc);
        printf("Hair Spray                                 %d                                         %d\n",hair_spray,hs);
        printf("body Spray                                 %d                                         %d\n",body_soap,bosp);
        printf("Sugar                                      %d                                         %d\n",body_soap,s);
        printf("Tea                                        %d                                         %d\n",tea,t);
        printf("Coffee                                     %d                                         %d\n",coffee,c);
        printf("Rice                                       %d                                         %d\n",rice,r);
        printf("wheat                                      %d                                         %d\n",wheat,w);
        printf("Pepsi                                      %d                                         %d\n",pepsi,pep);
        printf("Sprit                                      %d                                         %d\n",sprit,spr);
        printf("Coke                                       %d                                         %d\n",coke,cok);
        printf("Mojitos                                    %d                                         %d\n",mojitos,moj);
        printf("Thumbs up                                  %d                                         %d\n",thumbs_up,thu);


        printf("Grocery Total Price : %d\n\n", grocery_total);
        printf("Beverage Total Price : %d\n\n", beverage_total);
        printf("Cosmetics Total Price : %d\n\n", cosmetics_total);
        printf("Total Price : %d\n\n", total);

        printf("----------------------------------------------------------------------------\n");

        








        
















}