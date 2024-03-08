//FATTO AL VOLO SENZA COMPILAZIONE PUO' CONTENERE ERRORI 

#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();


int main(){

	char scelta = '\0';
	menu();
	do{
        scanf(" %c", &scelta);

        switch(scelta)
        {
            case 'A': case 'a':
                    moltiplica();
                    break;
            case 'B': case 'b':
                    dividi();
                    break;
            case 'C': case 'c':
                    ins_string();
                    break;
            case 'D': case 'd':
                    exit(0);
                    break;
            default:
                    printf("Inserito un valore non consentito!! Bye Bye!");
                    exit(1);
        }
	}while(scelta != 'D' && scelta != 'd');

    return 0;
}


void menu(){

	printf("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf("Come posso aiutarti?\n");
	printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nD >> Esci dal programma\n");

}


void moltiplica(){

	short int  a = 0 ,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:\n");
	scanf ("%hd", &a);
	scanf ("%hd", &b);

	int prodotto = (int) a*b;

	printf ("Il prodotto tra %hd e %hd e': %d\n", a,b,prodotto);

}


void dividi ()
{
    int  a = 0 ,b = 0;
    printf ("Inserisci il numeratore:\n");
    scanf ("%d", &a);
    printf ("Inserisci il denominatore:\n");
    int sentinel = 0; //variabile sentinella
    do{
        if(sentinel != 0){
            printf ("Il denominatore deve essere diverso da zero! Reinserisci:\n");
        }
        scanf ("%d", &b);
        sentinel++;
    }while(b == 0);


    float divisione = (float) a/b;

    printf ("La divisione tra %d e %d e': %f\n", a,b,divisione);
}





void ins_string ()
{
    char stringa[10] = {'\0'};
    printf ("Inserisci la stringa:\n");
    scanf ("%9s", &stringa);
}
