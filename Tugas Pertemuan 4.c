#include <stdio.h>
#include <string.h>

int main(){

}

    // char username[11];  
    // char password[11];  

    // printf("Masukkan Username: ");
    // if (fgets(username, sizeof(username), stdin) == NULL) {
    //     printf("Error reading username.\n");
    //     return 1;  
    // }
    // size_t len = strlen(username);
    // if (len > 0 && username[len - 1] == '\n') {
    //     username[len - 1] = '\0';
    // }

    // int ch;
    // while ((ch = getchar()) != '\n' && ch != EOF);

    // printf("Masukkan Password: ");
    // if (scanf("%10s", password) != 1) {
    //     printf("Error reading password.\n");
    //     return 1;
    // }

    // printf("\nUsername anda: %s\n", username);
    // printf("Password anda: ");
    // for (int i = 0; password[i] != '\0'; i++) {
    //     putchar('*');
    // }
    // putchar('\n');

    // return 0;



    // float angka;
    // printf("Masukkan angka: ");
    // scanf("%f", &angka);

    // if ((int)angka==angka)
    // {
    //     if ((int)angka%2==0)
    //     {
    //     printf("Angka tersebut adalah genap.");
    //     }
    //     else
    //     {
    //     printf("Angka tersebut adalah ganjil.");
    //     }
    // }
    // else
    // {
    //     printf("Angka tersebut harus merupakan bilangan bulat.");
    // }
    // return 0;







// int angka, i, x = 1;
//     printf("Masukkan angka: ");
//     scanf("%d", &angka);

//     if (angka <= 1)
//     {
//         printf("Angka tersebut bukan merupakan bilangan prima");
//     }
//     else if (angka==2)
//     {
//         printf("Angka tersebut merupakan bilangan prima");
//         return 0;
//     }
//     for (i = 2; i <= sqrt(angka); i++)
//     {
//         if (angka%i==0)
//         {
//             x = 0;
//             break;
//         }
//     }
//     if (x == 0)
//     {
//         printf("Angka tersebut bukan merupakan bilangan prima.");
//     }
//     else if (x == 1)
//     {
//         printf("Angka tersebut merupakan bilangan prima.");
//     }


 





    //int hari;
    // printf("1. Minggu\n2. Senin\n3. Selasa\n4. Rabu\n5. Kamis\n6. Jumat\n7. Sabtu\nPilih hari dengan memasukkan angka: ");
    // scanf("%d", &hari);

    // if (hari == 1)
    // {
    //     printf("Hari Minggu");
    // }
    // else if (hari == 2)
    // {
    //     printf("Hari Senin");
    // }
    // else if (hari == 3)
    // {
    //     printf("Hari Selasa");
    // }
    // else if (hari == 4)
    // {
    //     printf("Hari Rabu");
    // }
    // else if (hari == 5)
    // {
    //     printf("Hari Kamis");
    // }
    // else if (hari == 6)
    // {
    //     printf("Hari Jumat");
    // }
    // else
    // {
    //     printf("Input harus merupakan angka antara 1 hingga 7.");
    // }





// const char* getGrade(double nilai) {
// if (nilai >= 81 && nilai <= 100) {
// return "A";
// } else if (nilai >= 76 && nilai < 81) {
// return "A-";
// } else if (nilai >= 71 && nilai < 76) {
// return "B";
// } else if (nilai >= 66 && nilai < 71) {
// return "B-";
// } else if (nilai >= 56 && nilai < 66) {
// return "C";
// } else if (nilai >= 46 && nilai < 56) {
// return "D";
// } else if (nilai >= 0 && nilai < 46) {
// return "E";
// } else {
// return "X";
// }
// }
// double getIPS(double nilai) {
// if (nilai >= 81 && nilai <= 100) {
// return 4.0;
// } else if (nilai >= 76 && nilai < 81) {
// return 3.5;
// } else if (nilai >= 71 && nilai < 76) {
// return 3.0;
// } else if (nilai >= 66 && nilai < 71) {
// return 2.5;
// } else if (nilai >= 56 && nilai < 66) {
// return 2.0;
// } else if (nilai >= 46 && nilai < 56) {
// return 1.0;
// } else if (nilai >= 0 && nilai < 46) {
// return 0.0;
// } else {
// return -1.0;
// }
// }
// int main() {
// double nilai;
// printf("Masukkan nilai: ");
// scanf("%lf", &nilai);
// double ips = getIPS(nilai);
// const char* grade = getGrade(nilai);
// if (ips >= 0) {
// printf("IPS: %.2f\n", ips);
// printf("Grade: %s\n", grade);
// } else {
// printf("Nilai harus diantara 0 hingga 100.");
// }
// return 0;