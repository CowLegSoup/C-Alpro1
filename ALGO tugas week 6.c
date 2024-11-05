// Program Tugas ke-1
// #include <stdio.h>

// int main(){
//     int nilai[5][3] = {
//         {75, 63, 53},
//         {87, 98, 100},
//         {53, 16, 75},
//         {98, 68, 64},
//         {97, 90, 89},
//     };
//     int jumlah, max = 0,min = 100,i ,j;
//     int baris = sizeof(nilai) / sizeof(nilai[0]);
//     int kolom = sizeof(nilai[0]) / sizeof(nilai[0][0]);
//     int total = sizeof(nilai) / sizeof(nilai[0][0]);
//     printf("Baris Array: %d\n", baris);
//     printf("Kolom Array: %d\n", kolom);
//     printf("Total Data\n");

//     for (int i=0; i<baris ; i++){
//         printf("Mahasiswa ke-%d:\t",(i+1));
//         for ( j = 0; j < kolom; j++)
//         {
//             printf("%d\t", nilai[i][j]);
//             jumlah += nilai [i][j];
//             if (nilai [i][j] < min)
//             {
//                 min = nilai [i][j];
//             }
//             if (nilai [i][j] > max)
//             {
//                 max = nilai [i][j];
//             }
//         }
//         printf("\n");
//     }
//     float rata = (float)jumlah / total;
//     printf("\nRata-rata: %.2f", rata);
//     printf("\nNilai tertinggi: %d", max);
//     printf("\nNilai terendah: %d", min);
// }


// Program Tugas ke 2
#include <stdio.h>

int main(){
    float mahasiswa1[] = {0,1,2,3};
    float mahasiswa2[] = {100,90,82,69};
    float mahasiswa3[] = {90,60,73,76};
    float mahasiswa4[] = {100,100,100,100};
    float mahasiswa5[] = {70,100,55,98};
    float mahasiswa[5][4] = {
        {100,70,91,80},
        {100,90,82,69},
        {90,60,73,76},
        {80,80,64,87},
        {70,100,55,98},
    };
    char nama[5][20] = {"Calpin", "Garuda", "Kelpin", "Raph", "Wahyu"};
    int jumlah, i, j;
    float na;
    int baris = sizeof(mahasiswa)/sizeof(mahasiswa[0]);
    int kolom = sizeof(mahasiswa[0])/sizeof(mahasiswa[0][0]);
    int kolomN = sizeof(nama[0])/sizeof(nama[0][0]);
    int total = sizeof(mahasiswa)/sizeof(mahasiswa[0][0]);

    printf("No\tNama\tAbsen\tTugas\tPraktik\tUjian\tNA\tStatus\n");
    for ( i = 0; i < baris; i++)
    {
        printf("%d\t%s\t",(i+1),nama[i]);
        na = 0;
        for (j = 0; j < kolom; j++)
        {
            printf("%.f\t", mahasiswa[i][j]);
            if (j==0)
            {
                na += mahasiswa[i][j]*0.1;
            }
            else if (j==1)
            {
                na += mahasiswa[i][j]*0.2;
            }
            else if (j==2)
            {
                na += mahasiswa[i][j]*0.3;
            }
            else if (j==3)
            {
                na += mahasiswa[i][j]*0.4;
            }
        }
    printf("%.2f\t", na);
    if (na>=70)
    {
        printf("Lulus");
    }
    else{
        printf("Tidak");
    }
    printf("\n");
    }
}