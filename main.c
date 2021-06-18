#include <stdio.h>

struct article
{
    char* name;
    int price;
};

struct person {
    char* nom;
    int age;
    char* prenom;
};


int main()
{
    struct article art1, art2;
    art1.name = "coffee";
    art1.price = 200;

    art2.name = "formage";
    art2.price = 30;

    struct person p1, p2;

    p1.age = 20;
    p1.nom = "aymen";
    p1.prenom = "karrouche";

    p2.nom = "raouf";
    p2.age = 12;
    p2.prenom = "karrouche";

    printf("Article 1: - name : %s, price: %d\n",art1.name, art1.price);
    printf("Article 2: - name : %s, price: %d\n",art2.name, art2.price);

    printf("Person 1: - name : %s, prenom: %s, age: %d\n",p1.nom, p1.prenom, p1.age);
    printf("Person 2: - name : %s, prenom: %s, age: %d\n",p2.nom, p2.prenom, p2.age);

    return 0;
}
