/*PROGRAM MAX_MIN_AVERAGE*/
// menampilkan nilai maksimum, minimum, dan rata-rata dari sekumpulan bilangan
#include <stdio.h>

main()
{
	/*DEKLARASI*/
	int n, i, A[100];				//n, i pencacah & A[] array
	int min, maks, sum, average;	//variabel pengolah instruksi
	char opsi;						//variabel mengulang program
	do
	{
		/*DESKRIPSI*/
		system("cls");								//membersihkan layar
		printf("PROGRAM MAX, MIN, AVERAGE\n\n");	//judul program
		printf("Berapa banyak angka? ");
		scanf("%i", &n);							//masukkan nilai
		
		for(i=0; i<n; i++)							//untuk mengisi nilai
		{
			printf("Angka ke-%i : ", i+1);
			scanf("%i", &A[i]);
		}
		
		min=A[0];									//inisialisasi min
		maks=A[0];									//inisialisasi maks
		sum=A[0];									//inisialisasi sum
		for(i=1; i<n; i++)							//perulangan untuk mengecek
		{
			if(A[i]<min)							//syarat min terpenuhi
			{
				min=A[i];							//nilai min berubah
			}
			if(A[i]>maks)							//syarat maks terpenuhi
			{
				maks=A[i];							//nilai maks berubah
			}
			sum=sum+A[i];							//jumlah untuk diolah jadi rata2
		}
		average=sum/n;								//rumus rata2
		
		printf("\n\nNilai Maksimum\t: %i", maks);	//nilai maks
		printf("\nNilai Minimum\t: %i", min);		//nilai min
		printf("\nNilai Average\t: %i", average);	//nilai average
		
		printf("\n\nUlangi lagi[Y/T]? "); scanf("%s", &opsi);
	}
	while(opsi=='Y'||opsi=='y');					// y untuk mengulangi
}
