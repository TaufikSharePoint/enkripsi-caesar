# Sistem Kriptografi Caesar - Algoritma Kriptografi Klasik 

## Pendahuluan
### Sejarah
Sebelum terciptanya komputer atau peralatan komputasi modern, telah terdapat aktifitas kriptografi di masa lalu yang operasionalnya dengan menggunakan media *paper and pencil* atau secara manual, hal ini disebut dengan sistem kriptografi klasik. Membahas terkait kriptografi klasik, maka ditak terlepas dari sejarah kriptografi itu sendiri. Terdapat sejumlah sistem kriptografi klasik yang berhasil diketahui dan diidentifikasi hingga saat ini, namun sistem kriptografi tersebut sudah tidak digunakan lagi dengan alasan tingkat keamanan.

### Alasan mempelajari Kriptografi Klasik
Sistem kriptografi klasik memang sudah tidak digunakan lagi pada masa sekarang, namun terdapat beberapa alasan mengapa sistem kriptografi klasik masih perlu untuk dipelajari hingga hari ini, berikut adalah alasan tersebut :
 - Memberikan pemahaman terkait komsep dasar kriptografi
 - Dasar dari sistem kriptografi modern
 - Untuk memahami berbagai potensi pada sistem kriptografi

### Pembagian Kriptografi Klasik
Sistem kriptografi klasik dapat dikelompokkan menjadi dua kelompok, berikut adalah pengelompokan tersebut :
 - Sistem kriptografi substitusi
 - Sistem kriptografi transposisi

---

## Sistem Kriptografi Caesar
### Sejarah
>Membahas terkait kriptografi klasik, maka ditak terlepas dari sejarah kriptografi itu sendiri.

Nama Caesar diambil dari Julius Caesar, yang menurut buku Suetonius, Caesar menggunakan sandi ini dengan geseran tiga. Hal ini ditujukan untuk mengirim pesan yang mengandung rahasia atau taktik militer. Keponakan Caesar, Augustus juga menggunakan skema kriptografi Caesar, tetapi dengan geseran satu ke kanan, dengan sedikit perbedaan. Juga terdapat bukti bahwa Julius Caesar juga menggunakan sistem yang lebih rumit. Penulis Aulus Gellius, merujuk pada sebuah risalah (yang sekarang hilang).

### Teori
Sistem kriptografi caesar adalah salah satu teknik enkripsi paling sederhana dan paling terkenal. Sandi ini termasuk sandi substitusi dimana setiap huruf pada teks terang (_plaintext_) digantikan oleh huruf lain yang memiliki selisih posisi tertentu dalam alfabet. 

![image](https://user-images.githubusercontent.com/117842809/201686128-5606dcca-7476-436b-bdef-6b7b95d898b5.png)
 
Sumber Gambar : [geeksforgeeks.org](https://www.geeksforgeeks.org/caesar-cipher-in-cryptography/)

Sistem kriptografi Caesar mengganti setiap huruf di teks terang (_plaintext_) dengan huruf yang berselisih angka tertentu dalam alfabet. Contoh ini menggunakan geseran tiga, sehingga huruf B di plaintext menjadi E di teks tersandi (_ciphertext_).

### Program
Pada program dalam repository ini, sistem kriptografi caesar dibangun dengan menggunakan Bahasa Pemrograman C. Program ini dibangun dengan Struktur Fungsi Enkripsi, Fungsi Dekripsi, dan Main. Hal ini membuat program ini dapat digunakan sesuai dengan kebutuhan pengguna baik untuk enkripsi maupun dekripsi.

### Penggunaan Program
 - contoh compile dengan GCC : `sudo gcc -o e_d_caesarfile  e_d_caesarfile.c`
 - `-e`  : adalah aksi untuk melakukan enkripsi data pada file
 - `-d`  : adalah aksi untuk melakukan dekripsi data pada file
 - `--h` : adalah aksi untuk menampilkan bantuan
 - contoh penggunaan : `sudo ./e_d_caesarfile [aksi] [lokasi file]`
 - - contoh penggunaan : `sudo ./e_d_caesarfile --h`
 - contoh penggunaan : `sudo ./e_d_caesarfile -e /home/ubuntu/file.txt`
 - contoh penggunaan : `sudo ./e_d_caesarfile -d /home/ubuntu/file.txt`
