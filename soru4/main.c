#include <stdio.h>
#include <stdlib.h>

struct ogrenci {
    char ad[50];
    char soyad[50];
    int no;
    char sehir[20];
};

int main() {
    
    struct ogrenci ogrenciler[5] = {
        {"Ahmet", "Yýlmaz", 1234, "Istanbul"},
        {"Mehmet", "Kara", 5678, "Ankara"},
        {"Ayse", "Demir", 91011, "Izmir"},
        {"Fatma", "Ozturk", 121314, "Bursa"},
        {"Ali", "Sahin", 151617, "Antalya"}
    };
    
    
    int i;
    for ( i = 0; i < 5; i++) {
        printf("Ogrenci %d:\n", i+1);
        printf("Ad: %s\n", ogrenciler[i].ad);
        printf("Soyad: %s\n", ogrenciler[i].soyad);
        printf("Numara: %d\n", ogrenciler[i].no);
        printf("Adres: %s\n", ogrenciler[i].sehir);
        printf("\n");
    }
    
    return 0;
}

