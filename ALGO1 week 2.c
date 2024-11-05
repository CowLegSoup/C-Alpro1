#include <stdio.h>

int main(){
    char nama[] = "Efraim Melvyn Rafelino Lahai";
    char kota[] = "Surabaya";
    char Tanggallahir[] = "5-10-2005";
    char kelamin = 'L';
    float Tinggi = 178.5;
    float Berat = 70.65;

    printf("Nama\t\t: %s\n", nama);
    printf("Kota\t\t: %s\n", kota);
    printf("Tanggal Lahir\t: %s\n", Tanggallahir);
    printf("Kelamin\t\t: %c\n", kelamin);
    printf("Tinggi Badan\t: %.1f\n", Tinggi);
    printf("Berat Badan\t: %.2f\n", Berat);
    return 0;
}