 #include<stdio.h>

int main(){
	int pilihan;
	float num1,num2,num3,hasil;
	
	printf("===== calculator sederhana =====\n");
	printf("1.penjumlahan tiga angka\n");
	printf("2.perkalian tiga angka\n");
	printf("3.pembagian tiga angka\n");
	printf("4.operasi campuran\n");
	printf("pilih opsi (1-4:)\n");
	scanf("%d",& pilihan);
	
	if(pilihan == 1){ 
		printf("Masukkan angka pertama: ");
		scanf("%f", &num1);
		printf("Masukkan angka kedua: ");
		scanf("%f", &num2);
		printf("masukkan angka ketiga");
		scanf("%f", &num3);
		hasil = num1 + num2 + num3 ;
		printf("Hasil perjumlahan: %.2f\n",hasil);
	} else if (pilihan == 2){
		printf("Masukkan angka pertama: ");
		scanf("%f", &num1);
		printf("Masukkan angka kedua: ");
		scanf("%f", &num2);
		printf("masukkan angka ketiga");
		scanf("%f", &num3);
		hasil = num1 * num2 * num3 ;
		printf("Hasil perkalian: %.2f\n",hasil);
	}else if(pilihan == 3){
		printf("Masukkan angka pertama: ");
		scanf("%f", &num1);
		printf("Masukkan angka kedua: ");
		scanf("%f", &num2);
		printf("masukkan angka ketiga");
		scanf("%f", & num3); 
		hasil = num1 * num2 * num3 ;
		printf("Hasil pembagian: %.2f",hasil);
	}else if(pilihan == 4){
		printf("Masukkan angka pertama: ");
		scanf("%f", &num1);
		printf("Masukkan angka kedua: ");
		scanf("%f", &num2);
		printf("masukkan angka ketiga:");
		scanf("%f", &num3);
		hasil = num1 / num2 + num3 ;
		printf("Hasil operasi campuran: %.2f",hasil);
	}else {
		printf("error");
	}
	return 0;
}
