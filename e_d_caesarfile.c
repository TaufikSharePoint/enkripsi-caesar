/*
******************************************************************************************
****************************************PERHATIAN*****************************************
******************************************************************************************
------------------------------------------------------------------------------------------
----File ini dapat digunakan secara luas dengan tujuan untuk Edukasi dan Pembelajaran.----
----Penggunaan diluar Edukasi dan Pembelajaran bukan merupakan tanggung jawab pembuat.----
------------------------------------------------------------------------------------------
******************************************************************************************
******************************************************************************************
------------------------------------------------------------------------------------------
------------------------------------Taufik Share Point------------------------------------
------------------------------------------------------------------------------------------
******************************************************************************************
-------------------------------github.com/TaufikSharePoint--------------------------------
******************************************************************************************
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>

  char teksterang[500];             // digunakan untuk menampung variabel selama proses Enkripsi atau Dekripsi
  char temp;                        // digunakan untuk menampung variabel selama proses Enkripsi atau Dekripsi
  char *aksi;                       // digunakan untuk memilih aksi berupa Enkripsi atau Dekripsi
  char *lokasi;                     // digunakan untuk menunjukkan lokasi file yang akan di Enkripsi atau Dekripsi
  int geser;                        // digunakan untuk menentukan jumlah pergeseran yang digunakan
  FILE *f;                          // digunakan untuk operasi file
  char buffer2[1024];               // digunakan untuk operasi file

void enkripsi()
{
     printf("----------------------------------------------------------------------\n");
     printf("\nEnkripsi Caesar\n");
     printf("\n----------------------------------------------------------------------\n");
     printf("Masukkan pergeseran yang diinginkan [angka]: ");
     scanf("%d", & geser);
     f = fopen(lokasi,"rb");
     fread(buffer2, 1024, 1, f);
     fclose(f);
     strcpy(teksterang,buffer2);

     for (int i = 0; teksterang[i] != '\0'; ++i)
     {
        temp = teksterang[i];
        if (isalnum(temp))
        {
            if (islower(temp)) { temp = (temp - 97 + geser) % 26 + 97; }
            if (isupper(temp)) { temp = (temp - 65 + geser) % 26 + 65; }
            if (isdigit(temp)) { temp = (temp - 48 + geser) % 10 + 48; }
        }
        teksterang[i] = temp;
     }
        f = fopen(lokasi,"wb");
        fprintf(f,"%s", teksterang);
        fclose(f);
}

void dekripsi()
{
     printf("----------------------------------------------------------------------\n");
     printf("\nDekripsi Caesar\n");
     printf("\n----------------------------------------------------------------------\n");
     printf("Masukkan pergeseran yang diinginkan [angka]: ");
     scanf("%d", & geser);
     f = fopen(lokasi,"rb");
     fread(buffer2, 1024, 1, f);
     fclose(f);
     strcpy(teksterang,buffer2);

    for (int i = 0; teksterang[i] != '\0'; ++i)
     {
        temp = teksterang[i];
        if (isalnum(temp))
        {
            if (islower(temp)) { temp = (temp - 97 - geser) % 26 + 97; }
            if (isupper(temp)) { temp = (temp - 65 - geser) % 26 + 65; }
            if (isdigit(temp)) { temp = (temp - 48 - geser) % 10 + 48; }
        }
        teksterang[i] = temp;
     }
        f = fopen(lokasi,"wb");
        fprintf(f,"%s", teksterang);
        fclose(f);
}


int main(int argc, char **argv)

{

 if (argc == 3)
 {
  aksi=argv[1];
  lokasi=argv[2];

   if (strcmp(aksi,"-e") == 0)
    {
      enkripsi();
      return 0;
    }
    else if (strcmp(aksi,"-d") == 0)
    {
      dekripsi();
      return 0;
    }

 }
 else if (strcmp(argv[1],"--h") == 0)
 {
  printf("----------------------------------------------------------------------\n");
  printf("\nPanduan Penggunaan\n");
  printf("\n----------------------------------------------------------------------\n");
  printf("\ncontoh compile dengan GCC : sudo gcc -o e_d_caesarfile  e_d_caesarfile.c\n");
  printf("\n-e : adalah aksi untuk melakukan enkripsi data pada file\n");
  printf("-d : adalah aksi untuk melakukan dekripsi data pada file\n");
  printf("\ncontoh penggunaan : sudo ./e_d_caesarfile [aksi] [lokasi file]\n");
  printf("contoh penggunaan : sudo ./e_d_caesarfile -e /home/ubuntu/file.txt\n");
  printf("contoh penggunaan : sudo ./e_d_caesarfile -d /home/ubuntu/file.txt");
  printf("\n----------------------------------------------------------------------\n");
 }
 else
 {
  printf("\nMasukkan Perintah yang benar / kunjungi Panduan Penggunaan : --h\n");
 }

}
