#include<stdio.h>
#include<sodium.h>
#include <stdlib.h>
#include <string.h>   
#include <errno.h>   

/*
@author: Isah R i Adnan D.
@date: 24.6.2025
@name: File encryptor/decryptor
@description: Encrypts/Decrypts file of files in folder
*/

//program ce moci da enkriptuje i dekriptuje fajlove 
//moci ce da enkriptuje i dekriptuje kako pojedinacne fajlove tako i fajlove u folderu 
//unijet ce se kljuc koji ce koristiti da enkripciju i dekripciju

// -e argument ce biti za enkripciju -d za dekripciju fajla ili fajlova
// -k za prosljedjivanje kljuca 

//ako se enkriptuje folder tj sadrzaj foldera, fajlovi ce po defaultu imati nastavak _e i (1)(2)...(n) 
//pa ce ime fajla biti ime_e(1) itd...


//tri argumenta jer prvi je ime programa i dva fajla, 
//prvi fajl kako se zove i drugi fajl kako ce se zvati nakon enkripcije
//------------------------------------------------------------------------------------------------------
int opt, mode = -1;
char *hexkey = NULL;

//dovrseno 
void print_usage(const char *prog) {
    fprintf(stderr,
        "Upotreba 1: %s -e|-d -k <hex_ključ> <ulaz> <izlaz>\n"
        "Upotreba 2: %s -e|-d -k <hex_ključ> f <ulaz>\n"
        "  -e            enkriptuj\n"
        "  -d            dekriptuj\n"
        "  -f            dekriptuj\n"
        "  -k <hex>      64-znakovni heksadecimalni ključ (32 bajta)\n",
        prog, prog);
}


//TODO uraditi funkciju koja ce sa ucitane putanje uzeti fajl ucitati ga binarno.
unsigned char *ucitaj_fajl(const char *putanja, size_t *velicina) {
    return 'a';
}

int main(int argc, char *argv[]){

    if (sodium_init() < 0) {
        printf("Test");
    return 1;
    }

    print_usage("neki tekst");


    return 0;
}

