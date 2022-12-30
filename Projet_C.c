#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct DATE
{
int JOUR;
int MOIS;
int ANNEE;
} date;
typedef struct PRODUIT
{
int NUM;
char MARQUE[20];
char MODELE[20];
char DESCRIPTION[40];
char FOURNISSEUR[20];
int PRIX;
int Q;
date DATE_D_ACHAT;
} PRODUIT;
int main()
{
printf(
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"
"* *           *   *           *   *           *   *           *   *           *   *     *\n"
"*   *       *       *       *       *       *       *       *       *       *       *   *\n"
"*     *   *           *   *           *   *           *   *           *   *           * *\n" 
"*       *               *               *               *               *               *\n"
"*     *   *           *   *           *   *           *   *           *   *           * *\n"
"*   *       *       *       *       *       *       *       *       *       *       *   *\n"
"* *           *   *           *   *           *   *           *   *           *   *     *\n"
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf(
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"
"*                                                                                       *\n"
"*  ********  ******  ******  ******  ******     ***     **    **       ******   ******  *\n"
"*  **        **      **        **      **     **   **   ***   **       **   **  **      *\n"
"*  **  ****  ******  ******    **      **    **     **  ** ** **       **   **  ******  *\n"
"*  **    **  **          **    **      **     **   **   **  ****       **   **  **      *\n"
"*  ********  ******  ******    **    ******     ***     **   ***       ******   ******  *\n"
"*                                                                                       *\n"
"*                                                                                       *\n"
"*                      ******  ******     ***     *******  **  ***                      *\n"
"*                      **        **     **   **   **       *****                        *\n"
"*                      ******    **    **     **  **       ***                          *\n"
"*                          **    **     **   **   **       *****                        *\n"
"*                      ******    **       ***     *******  **  ***                      *\n"
"*                                                                                       *\n"
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf(
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"
"* *           *   *           *   *           *   *           *   *           *   *     *\n"
"*   *       *       *       *       *       *       *       *       *       *       *   *\n"
"*     *   *           *   *           *   *           *   *           *   *           * *\n" 
"*       *               *               *               *               *               *\n"
"*     *   *           *   *           *   *           *   *           *   *           * *\n"
"*   *       *       *       *       *       *       *       *       *       *       *   *\n"
"* *           *   *           *   *           *   *           *   *           *   *     *\n"
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
char ch1[10];
printf("\n"
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf("       ENTER 'ENG' TO SELECT ENGLISH / SAISIR 'FRA' POUR SELECTIONNER LE FRANCAIS\n");
printf(
"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf(
"                                 * * * * * * * *                                                 \n"
"                                 * ENG  /  FRA *                                                 \n"
"                                 * * * * * * * *                                                 \n");
gets(ch1);
if (( strcmp(ch1,"FRA") == 0 )||(strcmp(ch1,"fra") == 0)){
PRODUIT P[100];
const int TNUM[10]={1,2,3,4,5,6,7,8,9,10};
const char* TMARQUE[10]= { "Samsung", "LG", "TCL", "Huawei","Oppo","Apple","Sharp","Vega","Lenovo","Toshiba" };
const char* TMODELE[10]= { "SM895", "L447", "T870", "P90","RENO8","11PRO","S112","V87","IDEAPAD3","SATELLITE6" };
const char* TDESCRIPTION[10]= { "TV 65 Pouces 4K", "TV 55 Pouces FHD", "TV 50 Pouces FHD", "Smartphone 64GB 4GB 5000mAh","Smartphone 128GB 6GB 4500mAh",
"Smartphone 64GB 3GB 3800mAh ","TV 60 Pouces 4K","Tablet 32GB 2GB 7000mAh","Laptop I3-10th 512GB SSD 8GB","Laptop I7-12th 1TB HDD 16GB" };	
const char* TFOURNISSEUR[10]= { "STA ELECTRONICS", "MD IMPORT", "STA ELECTRONICS", "STA ELECTRONICS","MD IMPORT","MD IMPORT","TECHNO LTD","HITECH SARL","TECHNO LTD","TECHNO LTD" };
const int TPRIX[10]={3499,3149,1895,899,1259,3495,2299,399,1149,2489};
const int TQ[10]={5,8,10,30,25,12,18,45,24,21};
const int TDATEJ[10]={20,01,10,14,31,12,05,25,23,19};
const int TDATEM[10]={05,04,11,02,01,07,11,03,10,11};
const int TDATEA[10]={2021,2021,2022,2022,2021,2022,2022,2021,2022,2022};
int k;
for(k=0;k<10;k++){
	P[k].NUM=TNUM[k];
	memcpy(P[k].MARQUE, TMARQUE[k], 20);
	memcpy(P[k].MODELE, TMODELE[k], 20);
	memcpy(P[k].DESCRIPTION, TDESCRIPTION[k], 40);
	memcpy(P[k].FOURNISSEUR, TFOURNISSEUR[k], 20);
	P[k].PRIX=TPRIX[k];
	P[k].Q=TQ[k];
	P[k].DATE_D_ACHAT.JOUR=TDATEJ[k];
	P[k].DATE_D_ACHAT.MOIS=TDATEM[k];
	P[k].DATE_D_ACHAT.ANNEE=TDATEA[k];
}
int CPT = 10;
int trouve=0;
int choix = 0, i = 0, j = 0;
char MARQUE[20];
char MODELE[20];
char reponse;
char ch[10];
while(choix != 6)
{
do
{
printf("\n* GESTION DE STOCK *\n");
printf("\n* 1 *\tAjouter un produit");
printf("\n* 2 *\tModifier les caracteristiques d'un produit");
printf("\n* 3 *\tSupprimer un prdouit");
printf("\n* 4 *\tRechercher un produit");
printf("\n* 5 *\tAfficher tous les produits dans le stock");
printf("\n* 6 *\tQuitter le programme");
printf("\n\nSaisissez votre choix : ");
fflush(stdin);
choix=atoi(gets(ch));
} while( (choix<1)||(choix>6) );
switch(choix)
{
case 1 :
{
system("cls");
printf("\nAJOUT D'UN NOUVEAU PRODUIT \n\n");
P[CPT].NUM = CPT + 1;
printf("Numero : %d\n", P[CPT].NUM);
printf("Marque : ");
fflush(stdin);
gets(P[CPT].MARQUE);
printf("Modele : ");
fflush(stdin);
gets(P[CPT].MODELE);
printf("Description : ");
fflush(stdin);
gets(P[CPT].DESCRIPTION);
printf("Fournisseur : ");
fflush(stdin);
gets(P[CPT].FOURNISSEUR);
printf("Prix : ");
scanf("%d", &P[CPT].PRIX);
printf("Quantite achetee : ");
scanf("%d", &P[CPT].Q);
printf("Date de l'achat : ");
scanf("%d%d%d",&P[CPT].DATE_D_ACHAT.JOUR,
&P[CPT].DATE_D_ACHAT.MOIS,&P[CPT].DATE_D_ACHAT.ANNEE);
printf("\nOPERATION D'AJOUT EFFECTUEE !");
CPT++;
getch();
break;
}
case 2 :
{
system("cls");
printf("\nMODIFICATION DES CHARACTERISTIQUES D'UN PRODUIT\n\n");
printf("Marque : ");
fflush(stdin);
gets(MARQUE);
printf("Modele : ");
fflush(stdin);
gets(MODELE);
trouve = 0;
for(i=0 ; i<CPT ; i++)
{
if (( strcmp(P[i].MARQUE,MARQUE) == 0 )&&(strcmp(P[i].MODELE,MODELE) == 0))
{
trouve = 1;
printf("\nAnciennes caracteristiques de %s %s : %s\n", P[i].MARQUE,P[i].MODELE,
P[i].DESCRIPTION);
printf("\nFournisseur : %s",P[i].FOURNISSEUR);
printf("\nPrix : %d", P[i].PRIX);
printf("\nQuantite : %d", P[i].Q);
printf("\nDate de l'achat : %d/%d/%d\n",
P[i].DATE_D_ACHAT.JOUR, P[i].DATE_D_ACHAT.MOIS, P[i].DATE_D_ACHAT.ANNEE);
printf("\nNouvelles caracteristiques de %s %s : %s\n", P[i].MARQUE,P[i].MODELE,
P[i].DESCRIPTION);
printf("Fournisseur : ");
fflush(stdin);
gets(P[i].FOURNISSEUR);
printf("\nPrix : ");
scanf("%d", &P[i].PRIX);
printf("Quantite : ");
scanf("%d", &P[i].Q);
printf("Date d'achat : ");
scanf("%d %d %d", &P[i].DATE_D_ACHAT.JOUR,
&P[i].DATE_D_ACHAT.MOIS, &P[i].DATE_D_ACHAT.ANNEE);
printf("\nModification effectuee !");
}
}
if (trouve == 0)
printf("\nAucun produit correspondant !");
getch();
break;
}
case 3 :
{
system("cls");
printf("\nSUPPRESSION D'UN PRODUIT \n\n");
printf("Marque : ");
fflush(stdin);
gets(MARQUE);
printf("Modele : ");
fflush(stdin);
gets(MODELE);
trouve = 0;
for(i=0 ; i<CPT ; i++)
{
if (( strcmp(P[i].MARQUE, MARQUE) == 0 )&&(strcmp(P[i].MODELE, MODELE) == 0))
{
trouve = 1;
printf("\nVoulez vous reellement supprimer %s : %s de votre stock (O/N) ?\n", P[i].MARQUE, P[i].DESCRIPTION);
fflush(stdin);
reponse = getchar();
if( (reponse == 'o') || (reponse == 'O') )
{
for (j=i;j<CPT;j++)
{
P[j]=P[j+1];
P[j].NUM=P[j].NUM-1;
}
CPT--;
printf("\nSuppression du produit effectuee avec succes !");
}
}
}
if (trouve == 0)
printf("\nAucun produit correspondant !");
getch();
break;
}
case 4 :
{
system("cls");
printf("\nRECHERCHE D'UN PRODUIT \n\n");
printf("Marque : ");
fflush(stdin);
gets(MARQUE);
printf("Modele : ");
fflush(stdin);
gets(MODELE);
trouve = 0;
for(i=0 ; i<CPT ; i++)
{
if (( strcmp(P[i].MARQUE, MARQUE) == 0 )&&( strcmp(P[i].MODELE, MODELE) == 0 ))
{
trouve = 1;
printf("\nCaractersitiques de %s %s : %s\n", P[i].MARQUE,P[i].MODELE,
P[i].DESCRIPTION);
printf("\nFournisseur : %s",P[i].FOURNISSEUR);
printf("\nPrix : %d", P[i].PRIX);
printf("\nQuantite : %d", P[i].Q);
printf("\nDate de l'achat : %d/%d/%d",
P[i].DATE_D_ACHAT.JOUR, P[i].DATE_D_ACHAT.MOIS, P[i].DATE_D_ACHAT.ANNEE);
}
}
if (trouve == 0)
printf("\nAucun produit correspondant !");
getch();
break;
}
case 5 :
{
system("cls");
printf("\nLISTE DES PRODUITS DANS LE STOCK \n");
printf("\nNUM |MARQUE              |MODELE              |DESCRIPTION                             |FOURNISSEUR         |PRIX      |QUANTITE |DATE DE L'ACHAT ");
printf("\n----+--------------------+--------------------+----------------------------------------+--------------------+----------+---------+---------------\n");
for(i=0 ; i<CPT ; i++)
printf("%-4d|%-20s|%-20s|%-40s|%-20s|%-10d|%-10d|%2d-%2d-%4d\n",
P[i].NUM, P[i].MARQUE,P[i].MODELE, P[i].DESCRIPTION,P[i].FOURNISSEUR, P[i].PRIX, P[i].Q,
P[i].DATE_D_ACHAT.JOUR, P[i].DATE_D_ACHAT.MOIS, P[i].DATE_D_ACHAT.ANNEE);
getch();
break;
}
}
}}
if((strcmp(ch1,"ENG")==0)||(strcmp(ch1,"eng")==0)){
PRODUIT P[100];
const int TNUM[10]={1,2,3,4,5,6,7,8,9,10};
const char* TMARQUE[10]= { "Samsung", "LG", "TCL", "Huawei","Oppo","Apple","Sharp","Vega","Lenovo","Toshiba" };
const char* TMODELE[10]= { "SM895", "L447", "T870", "P90","RENO8","11PRO","S112","V87","IDEAPAD3","SATELLITE6" };
const char* TDESCRIPTION[10]= { "TV 65 Pouces 4K", "TV 55 Pouces FHD", "TV 50 Pouces FHD", "Smartphone 64GB 4GB 5000mAh","Smartphone 128GB 6GB 4500mAh",
"Smartphone 64GB 3GB 3800mAh ","TV 60 Pouces 4K","Tablet 32GB 2GB 7000mAh","Laptop I3-10th 512GB SSD 8GB","Laptop I7-12th 1TB HDD 16GB" };	
const char* TFOURNISSEUR[10]= { "STA ELECTRONICS", "MD IMPORT", "STA ELECTRONICS", "STA ELECTRONICS","MD IMPORT","MD IMPORT","TECHNO LTD","HITECH SARL","TECHNO LTD","TECHNO LTD" };
const int TPRIX[10]={3499,3149,1895,899,1259,3495,2299,399,1149,2489};
const int TQ[10]={5,8,10,30,25,12,18,45,24,21};
const int TDATEJ[10]={20,01,10,14,31,12,05,25,23,19};
const int TDATEM[10]={05,04,11,02,01,07,11,03,10,11};
const int TDATEA[10]={2021,2021,2022,2022,2021,2022,2022,2021,2022,2022};
int k;
for(k=0;k<10;k++){
	P[k].NUM=TNUM[k];
	memcpy(P[k].MARQUE, TMARQUE[k], 20);
	memcpy(P[k].MODELE, TMODELE[k], 20);
	memcpy(P[k].DESCRIPTION, TDESCRIPTION[k], 40);
	memcpy(P[k].FOURNISSEUR, TFOURNISSEUR[k], 20);
	P[k].PRIX=TPRIX[k];
	P[k].Q=TQ[k];
	P[k].DATE_D_ACHAT.JOUR=TDATEJ[k];
	P[k].DATE_D_ACHAT.MOIS=TDATEM[k];
	P[k].DATE_D_ACHAT.ANNEE=TDATEA[k];
}
int CPT = 10;
int trouve=0;
int choix = 0, i = 0, j = 0;
char MARQUE[20];
char MODELE[20];
char reponse;
char ch[10];
while(choix != 6)
{
do
{
printf("\nINVENTORY MANAGEMENT\n");
printf("\n* 1 *\tAdd a product");
printf("\n* 2 *\tEdit the charachteristics of a product");
printf("\n* 3 *\tDelete a product");
printf("\n* 4 *\tSearch a product");
printf("\n* 5 *\tDisplay all the products in the inventory ");
printf("\n* 6 *\tExit the program");
printf("\n\nChoose an option : ");
fflush(stdin);
choix=atoi(gets(ch));
} while( (choix<1)||(choix>6) );
switch(choix)
{
case 1 :
{
system("cls");
printf("\nADD A NEW PRODUCT TO THE INVENTORY \n\n");
P[CPT].NUM = CPT + 1;
printf("Number : %d\n", P[CPT].NUM);
printf("Brand : ");
fflush(stdin);
gets(P[CPT].MARQUE);
printf("Model : ");
fflush(stdin);
gets(P[CPT].MODELE);
printf("Description : ");
fflush(stdin);
gets(P[CPT].DESCRIPTION);
printf("Supplier : ");
fflush(stdin);
gets(P[CPT].FOURNISSEUR);
printf("Price : ");
scanf("%d", &P[CPT].PRIX);
printf("Purchased quantity : ");
scanf("%d", &P[CPT].Q);
printf("Date of the purchase : ");
scanf("%d%d%d",&P[CPT].DATE_D_ACHAT.JOUR,
&P[CPT].DATE_D_ACHAT.MOIS,&P[CPT].DATE_D_ACHAT.ANNEE);
printf("\nPRODUCT ADDED SUCCESSFULLY !");
CPT++;
getch();
break;
}
case 2 :
{
system("cls");
printf("\nEDITING THE CHARACTERISTICS OF AN EXISTING PRODUCT \n\n");
printf("Brand : ");
fflush(stdin);
gets(MARQUE);
printf("Model : ");
fflush(stdin);
gets(MODELE);
trouve = 0;
for(i=0 ; i<CPT ; i++)
{
if (( strcmp(P[i].MARQUE,MARQUE) == 0 )&&(strcmp(P[i].MODELE,MODELE) == 0))
{
trouve = 1;
printf("\nOld characteristics %s %s : %s\n", P[i].MARQUE,P[i].MODELE,
P[i].DESCRIPTION);
printf("\nSupplier : %s",P[i].FOURNISSEUR);
printf("\nPrice : %d", P[i].PRIX);
printf("\nPurchased quantity : %d", P[i].Q);
printf("\nDate of the purchase : : %d/%d/%d\n",
P[i].DATE_D_ACHAT.JOUR, P[i].DATE_D_ACHAT.MOIS, P[i].DATE_D_ACHAT.ANNEE);
printf("\nNew characteristics de %s %s : %s\n", P[i].MARQUE,P[i].MARQUE,
P[i].DESCRIPTION);
printf("Supplier : ");
fflush(stdin);
gets(P[i].FOURNISSEUR);
printf("\nPrice : ");
scanf("%d", &P[i].PRIX);
printf("Purchased quantity : ");
scanf("%d", &P[i].Q);
printf("Date of the purchase : ");
scanf("%d %d %d", &P[i].DATE_D_ACHAT.JOUR,
&P[i].DATE_D_ACHAT.MOIS, &P[i].DATE_D_ACHAT.ANNEE);
printf("\nEDITED SUCCESSFULLY !");
}
}
if (trouve == 0)
printf("\nNo product found !");
getch();
break;
}
case 3 :
{
system("cls");
printf("\nDELETING A PRODUCT \n\n");
printf("Brand : ");
fflush(stdin);
gets(MARQUE);
printf("Model : ");
fflush(stdin);
gets(MODELE);
trouve = 0;
for(i=0 ; i<CPT ; i++)
{
if (( strcmp(P[i].MARQUE,MARQUE) == 0 )&&(strcmp(P[i].MODELE,MODELE) == 0))
{
trouve = 1;
printf("\nAre you sure about deleting this product (Y/N) ?\n", P[i].MARQUE, P[i].DESCRIPTION);
fflush(stdin);
reponse = getchar();
if( (reponse == 'y') || (reponse == 'Y') )
{
for (j=i;j<CPT;j++)
{
P[j]=P[j+1];
P[j].NUM=P[j].NUM-1;
}
CPT--;
printf("\nDeleted successfully !");
}
}
}
if (trouve == 0)
printf("\nNo product found !");
getch();
break;
}
case 4 :
{
system("cls");
printf("\nSEARCH A PRODUCT \n\n");
printf("Brand : ");
fflush(stdin);
gets(MARQUE);
printf("Model : ");
fflush(stdin);
gets(MODELE);
trouve = 0;
for(i=0 ; i<CPT ; i++)
{
if (( strcmp(P[i].MARQUE,MARQUE) == 0 )&&(strcmp(P[i].MODELE,MODELE) == 0))
{
trouve = 1;
printf("\nCharacteristics of %s %s : %s\n", P[i].MARQUE,P[i].MODELE,
P[i].DESCRIPTION);
printf("\nSupplier : %s",P[i].FOURNISSEUR);
printf("\nPrice : %d", P[i].PRIX);
printf("\nPurchased Quantity : %d", P[i].Q);
printf("\nDate of the purchase : %d/%d/%d",
P[i].DATE_D_ACHAT.JOUR, P[i].DATE_D_ACHAT.MOIS, P[i].DATE_D_ACHAT.ANNEE);
}
}
if (trouve == 0)
printf("\nNo product found !");
getch();
break;
}
case 5 :
{
system("cls");
printf("\nLIST OF THE PRODUCTS IN THE INVENTORY \n");
printf("\nNUMBER |BRAND               |MODEL               |DESCRIPTION                             |SUPPLIER            |PRICE     |QUANTITY |DATE OF PURCHASE ");
printf("\n-------+--------------------+--------------------+----------------------------------------+--------------------+----------+---------+---------------\n");
for(i=0 ; i<CPT ; i++)
printf("%-7d|%-20s|%-20s|%-40s|%-20s|%-10d|%-10d|%2d-%2d-%4d\n",
P[i].NUM, P[i].MARQUE,P[i].MODELE, P[i].DESCRIPTION,P[i].FOURNISSEUR, P[i].PRIX, P[i].Q,
P[i].DATE_D_ACHAT.JOUR, P[i].DATE_D_ACHAT.MOIS, P[i].DATE_D_ACHAT.ANNEE);
getch();
break;
}
}
}
}
if(!((( strcmp(ch1,"FRA") == 0 )||(strcmp(ch1,"fra") == 0))||((strcmp(ch1,"ENG")==0)||(strcmp(ch1,"eng")==0)))){
	printf("\n    WRONG INPUT ! / ENTREE INCORRECTE ! \n");
	printf("\n    PLEASE CHOOSE AN OPTION BETWEEN FRENCH AND ENGLISH / VEUILLEZ CHOISIR ENTRE LE FRANCAIS ET L'ANGLAIS \n");
	printf("\n    PLEASE RESTART THE PROGRAM / VEUILLEZ REDEMARRER LE PROGRAMME \n");
}
}
