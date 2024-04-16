#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void inputHadir();
void inputNilai();
void nilaiPoin();
float validasiInput();
float validasiHadir();
void grading();
void keluar();


void inputHadir(){
	float hadir;
	
	//Input Jumlah Kehadiran
	system("cls");
	system("Color 70");
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("|	   Oleh Kelompok 03	 	|\n");
	printf("=========================================\n");
	printf("\n\t1. Jumlah Kehadiran\n");
	printf("\t\tMasukan jumlah kehadiran (max. 15): ");
	hadir = validasiHadir();
	
	system("cls");
	
}
	
void inputNilai(){
	float tugas1, tugas2, tugas3, quiz, uts, uas;
		
	//Input Nilai Tugas 1
	system("cls");
	system("Color 70");
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("\n\n\t2. Nilai Tugas Pertama\n");
	printf("\t\tMasukan nilai tugas ke-1: ");
	tugas1 = validasiInput();
	
	//Input Nilai Tugas 2
	printf("\n\n\t   Nilai Tugas Kedua\n");
	printf("\t\tMasukan nilai tugas ke-2: ");
	tugas2=validasiInput();
	
	//Input Nilai Tugas 3
	printf("\n\n\t\t Nilai Tugas Ketiga\n");
	printf("\t\tMasukan nilai tugas ke-3: ");
	tugas3=validasiInput();
	
	
	system("cls");

	//Input Nilai Quiz
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("\n\n\t3. Nilai Quiz\n");
	printf("\t\tMasukan nilai quiz: ");
	quiz=validasiInput();
	
	system("cls");

	//Input Nilai UTS
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("\n\n\t4. Nilai Ujian Tengah Semester\n");
	printf("\t\tMasukan nilai UTS: ");
	uts=validasiInput();
	
	system("cls");

	//Input Nilai UAS
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("\n\n\t5. Nilai Ujian Akhir Semester\n");
	printf("\t\tMasukan nilai UAS: ");
	uas=validasiInput();
	
	system("cls");
	printf("\n\t\tSemua nilai berhasil diinput, tunggu sebentar\n\t\t\t\t");
	sleep(1);
	
}

void nilaiPoin (){
	float hadir, nhadir;
	float tugas1, tugas2, tugas3, ntugas, sumTugas;
	float quiz, nquiz;
	float uts, nuts;
	float uas, nuas;
	float totalPoin;
	
	sumTugas = tugas1 + tugas2 + tugas3;
	
    nhadir = hadir * 5 / 100;
    ntugas = sumTugas * 20 / 100;
    nquiz = quiz * 15 / 100;
    nuts = uts * 30 / 100;
    nuas = uas * 30 / 100;
    
    totalPoin = 0;
    totalPoin = (nhadir + ntugas + nquiz + nuts + nuas);
    
    printf("Nilai hadir : %.2f", nhadir);
    printf("Nilai tugas : %.2f", ntugas);
    printf("Nilai quiz : %.2f", nquiz);
    printf("Nilai UTS : %.2f", nuts);
    printf("Nilai UAS : %.2f", nuas);    
    printf("Total Nilai : %.2f", totalPoin);
    
}


void grading(){
	float totalPoin;
	
	system("cls");
	system("Color 70");
	if (totalPoin >= 80){
		printf ("\n\tGrade yang diterima adalah A");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 80 && totalPoin >= 75){
		printf ("\n\tGrade yang diterima adalah B+");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 75 && totalPoin >= 65){
		printf ("\n\tGrade yang diterima adalah B");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}	
	else if (totalPoin < 65 && totalPoin >= 60){
		printf ("\n\tGrade yang diterima adalah C+");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 60 && totalPoin >= 55){
		printf ("\n\tGrade yang diterima adalah C");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 55 && totalPoin >= 50){
		printf ("\n\tGrade yang diterima adalah D+");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 50 && totalPoin >= 45){
		printf ("\n\tGrade yang diterima adalah D");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 45){
		printf ("\n\tGrade yang diterima adalah E");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
	}
	sleep(5);
	
}

void akhirUlang(){
	int akhir;
	
	system("color 70");
	printf("\n\nApakah yang anda ingin lakukan setelah ini?\n\n");
	printf(" 1. Mulai\n");
	printf(" 2. Keluar\n");
	printf("\nMasukan pilihan menu: ");
	akhir = validasi1();
	
	switch(akhir){
		case 1:
			inputHadir();
			break;
		case 2:
			keluar();
			break;	
	}
}

int validasi1(){
    int bilangan;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan<0){
        system("Color 70");
		printf("\n\t---Input salah!---\n");
        printf("\n\tUlang masukan yang benar : ");
        fflush(stdin);
    }
	else{
        return bilangan;
    }
}

float validasiInput(){
    float bilangan;
    char huruf;
    scanf("%f%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan < 0 || bilangan > 100){
        system("Color 70");
		printf("\n\t---Input salah!---\n");
        printf("\n\tUlang masukan yang benar : ");
        fflush(stdin);
        validasiInput();
    }
	else{
        return bilangan;
    }
}

float validasiHadir(){
    float bilangan;
    char huruf;
    scanf("%f%c", &bilangan,&huruf);
    if(huruf != '\n'){
        system("Color 70");
		printf("\n\t---Input salah!---\n");
        printf("\n\tUlang masukan yang benar : ");
        fflush(stdin);
        validasiHadir();
    }
    else if(bilangan < 0 || bilangan > 15){
    	system("Color 70");
        printf("\n\t---Nilai yang dimasukkan tidak tepat!---\n");
        printf("\n\tUlang masukan yang benar : ");
        fflush(stdin);
        validasiHadir();
    }
    else if(bilangan == 0 || bilangan<0){
        system("Color 70");
		printf("\n\tNilai anda otomatis E\n");
		sleep(1);
        keluar();
    }
	else{
        return bilangan;
    }
}

void keluar(){
	system("cls");
	system("Color 70");
	printf("\n\tTerima kasih, sampai jumpa lagi!\n");
	exit(0);
}

void mulai(){
	int mulai;
	
	system("Color 70");
	printf("=========================================\n");
	printf("|	   Program Nilai Akhir	 	|\n");
	printf("=========================================\n");
	printf("|	   Oleh Kelompok 03	 	|\n");
	printf("=========================================\n");
	printf("               1. Mulai\n");
	printf("               2. Keluar\n");
	
	ulang:
	printf("\n         Masukan pilihan menu: ");
	mulai=validasi1();
	
	switch(mulai){
		case 1:
			inputHadir();
			break;
		case 2:
			keluar();
			break;	
		default:
			printf("---Masukkan salah!---\n\n");
			goto ulang;
			break;
	}
	
	inputHadir();
	inputNilai();
	nilaiPoin();
	grading();
	akhirUlang();
		
}

int main(){
	mulai();
	
	return 0;
}
