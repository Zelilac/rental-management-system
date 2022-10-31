#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void add();   //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();

void setcolor(int ForgC)
{ WORD wColor;
HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;

if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
{
	wColor=(csbi.wAttributes & 0xB0)+(ForgC & 0x0B);
//	SetConsoleTextAttributes(hStdOut,wColor);
	SetConsoleTextAttribute(hStdOut,wColor);

}
}

void login()
{

	int a=0,i=0;
    char uname[100],c=' ';
    char pword[100],code[100];
    char user[100]="admin";
    char pass[100]="haaa";
    do
 {
	system("cls");

	printf("....###....########..##.....##.####.##....##....##........#######...######...####.##....##.\n");
    printf("...##.##...##.....##.###...###..##..###...##....##.......##.....##.##....##...##..###...##.\n");
    printf("..##...##..##.....##.####.####..##..####..##....##.......##.....##.##.........##..####..##.\n");
    printf(".##.....##.##.....##.##.###.##..##..##.##.##....##.......##.....##.##...####..##..##.##.##.\n");
    printf(".#########.##.....##.##.....##..##..##..####....##.......##.....##.##....##...##..##..####.\n");
    printf(".##.....##.##.....##.##.....##..##..##...###....##.......##.....##.##....##...##..##...###.\n");
    printf(".##.....##.########..##.....##.####.##....##....########..#######...######...####.##....##.\n");
    printf("\n");
    printf("\nUSERNAME:\n");
	scanf("%s", &uname);
	printf("\nPASSWORD:\n");
	while(i<10)
	{
	    pword[i]=getch(); // MENYEMBUNYIKAN INPUTAN PASSWORD
	    c=pword[i];
	    if(c==13) break;
	    else printf("*"); // PRINT '*' UNTUK TAMPILAN PASSWORD
	    i++;
	}
	pword[i]='\0';
	i=0;
    if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
        printf("\nWELCOME ADMIN! LOGIN BERHASIL");
        Sleep(2000);
        break;
	}
	else
	{
		printf("\nMaaf Login Gagal!\nUsername / Password yang anda masukkan salah");
		a++;
		getch();
	}


 }
	while(a<=2);
	if (a>2)
    {
		printf("\nLOOKS LIKE YOU'RE NOT ADMIN!. GET OUT!");
		getch();
		Sleep(2000);
		exit(0);
    }
		system("cls");
}

struct CustomerDetails   // DEKLARASI STRUKTUR
{
	char IDpesanan[100];
	char name[200];
	char alamat[250];
	char NoTelp[150];
	char kamera[150];
	char email[200];
	char WaktuSewa[100];
	char TglSewa[100];
}s;

int main(){     // FUNGSI UTAMA
	int i=0;

	char customername;
	char choice;

	system("cls");   // UNTUK MEMBERSIHKAN LAYAR
	setcolor(7);
	printf(".##......##.########.##........######...#######..##.....##.########\n");
    printf(".##..##..##.##.......##.......##....##.##.....##.###...###.##......\n");
    printf(".##..##..##.##.......##.......##.......##.....##.####.####.##......\n");
    printf(".##..##..##.######...##.......##.......##.....##.##.###.##.######..\n");
    printf(".##..##..##.##.......##.......##.......##.....##.##.....##.##......\n");
    printf(".##..##..##.##.......##.......##....##.##.....##.##.....##.##......\n");
    printf("..###..###..########.########..######...#######..##.....##.########\n");
    printf("\n");
	printf("....###....########..##.....##.####.##....##\n");
    printf("...##.##...##.....##.###...###..##..###...##\n");
    printf("..##...##..##.....##.####.####..##..####..##\n");
    printf(".##.....##.##.....##.##.###.##..##..##.##.##\n");
    printf(".#########.##.....##.##.....##..##..##..####\n");
    printf(".##.....##.##.....##.##.....##..##..##...###\n");
    printf(".##.....##.########..##.....##.####.##....##\n");
    printf("\n");
	printf(".##....##....###....##.....##.########.########.....###....##....##.########..######..####....###...\n");
    printf(".##...##....##.##...###...###.##.......##.....##...##.##...###...##.##.......##....##..##....##.##..\n");
    printf(".##..##....##...##..####.####.##.......##.....##..##...##..####..##.##.......##........##...##...##.\n");
    printf(".#####....##.....##.##.###.##.######...########..##.....##.##.##.##.######....######...##..##.....##\n");
    printf(".##..##...#########.##.....##.##.......##...##...#########.##..####.##.............##..##..#########\n");
    printf(".##...##..##.....##.##.....##.##.......##....##..##.....##.##...###.##.......##....##..##..##.....##\n");
    printf(".##....##.##.....##.##.....##.########.##.....##.##.....##.##....##.########..######..####.##.....##\n");
    printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\n<MUHAMMAD ZAINUDDIN>\n");
	    for(i=0;i<80;i++)
		printf("-");
	printf(" \nPress any key to continue:\n");

	getch();
    system("cls");
    login();
    system("cls");
	while (1)      // LOOP
	{
		system("cls");
		setcolor(7);
        for(i=0;i<90;i++)
		printf(".");
		printf("\n");
		printf(".##.....##.########.##....##.##.....##....##.....##.########....###....##.....##....###...\n");
		printf(".###...###.##.......###...##.##.....##....##.....##....##......##.##...###...###...##.##..\n");
		printf(".####.####.##.......####..##.##.....##....##.....##....##.....##...##..####.####..##...##.\n");
		printf(".##.###.##.######...##.##.##.##.....##....##.....##....##....##.....##.##.###.##.##.....##\n");
		printf(".##.###.##.######...##.##.##.##.....##....##.....##....##....##.....##.##.###.##.##.....##\n");
		printf(".##.....##.##.......##...###.##.....##....##.....##....##....##.....##.##.....##.##.....##\n");
		printf(".##.....##.########.##....##..#######......#######.....##....##.....##.##.....##.##.....##\n");
		for(i=0;i<90;i++)
		printf(".");
		printf("\n\n");
		setcolor(7);
		printf("PILIHAN :");
		printf("\n");
		printf("\nPRESS [1] -> Input Data Customer");
		printf("\n.....................................");
		printf("\nPRESS [2] -> Lihat Data Customer");
		printf("\n.....................................");
		printf("\nPRESS [3] -> Hapus Data Customer");
		printf("\n.....................................");
		printf("\nPRESS [4] -> Cari Data Customer");
		printf("\n.....................................");
		printf("\nPRESS [5] -> Exit");
		printf("\n.....................................");
		printf("\n\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\n<MUHAMMAD ZAINUDDIN>\n");
	    for(i=0;i<80;i++)
		printf("-");

		choice=getche();
		choice=toupper(choice);
		switch(choice)           // SWITCH
		{
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				system("cls");
				printf(".########.##.....##....###....##....##.##....##....##....##..#######..##.....##\n");
                printf("....##....##.....##...##.##...###...##.##...##......##..##..##.....##.##.....##\n");
                printf("....##....##.....##..##...##..####..##.##..##........####...##.....##.##.....##\n");
                printf("....##....#########.##.....##.##.##.##.#####..........##....##.....##.##.....##\n");
                printf("....##....##.....##.#########.##..####.##..##.........##....##.....##.##.....##\n");
                printf("....##....##.....##.##.....##.##...###.##...##........##....##.....##.##.....##\n");
                printf("....##....##.....##.##.....##.##....##.##....##.......##.....#######...#######.\n\n");
                printf("....###....########..##.....##.####.##....##   \n");
                printf("...##.##...##.....##.###...###..##..###...##   \n");
                printf("..##...##..##.....##.####.####..##..####..##   \n");
                printf(".##.....##.##.....##.##.###.##..##..##.##.##   \n");
                printf(".#########.##.....##.##.....##..##..##..####   \n");
                printf(".##.....##.##.....##.##.....##..##..##...###   \n");
                printf(".##.....##.########..##.....##.####.##....##     ");
				printf("\nKAMU TELAH BEKERJA DENGAN BAIK");
				Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("\nINPUTAN SALAH");
				printf("\nPress any key to continue");
				getch();
		}
	}
}

void add()
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+"); // MEMBUKA FILE
	if(f==0)
	{   f=fopen("add.txt","w+"); // MEMBUAT FILE JIKA TIDAK ADA FILE UNTUK DATA
		system("cls");
		getch();

	}
	while(1)
	{
		system("cls");
		printf("\nEnter Customer Details:");
		printf("\n*******************************");
		printf("\nID PESANAN                :\n");
		scanf("\n%s",s.IDpesanan);
		fflush(stdin);
		printf("\nNAMA PENYEWA              :\n");
		gets(s.name);
		printf("\nALAMAT PENYEWA            :\n");
		gets(s.alamat);
		printf("\nNO. TELP                  :\n");
		gets(s.NoTelp);
		printf("\nKAMERA YANG DISEWA        :\n");
		gets(s.kamera);
		printf("\nEMAIL                     :\n");
		gets(s.email);
		printf("\nWAKTU SEWA('x'Hari)       :\n");
		gets(s.WaktuSewa);
		printf("\nTANGGAL SEWA(dd\\mm\\yyyy):\n");
		gets(s.TglSewa);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 DATA CUSTOMER BERHASIL DIREKAM!");
		printf("\n Press esc key to exit,  Enter tombol lainnya untuk menambahkan detail lain:");
		test=getche();
		if(test==27)
			break;

	}
	fclose(f);
}

void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL) // MEMBUKA FILE UNTUK DIBACA SAJA
		exit(0);
	system("cls");
	while(fread(&s,sizeof(s),1,f)==1)
	{
	    for(i=0;i<60;i++)
		printf("\xdc");
		printf("\nID PESANAN   :\t%s\n",s.IDpesanan);
		printf("NAMA PENYEWA :\t%s\n",s.name);
		printf("ADDRESS      :\t%s\n",s.alamat);
		printf("NO.TELP      :\t%s\n",s.NoTelp);
		printf("Kamera       :\t%s\n",s.kamera);
		printf("HARI(SEWA)   :\t%s\n",s.WaktuSewa);
		printf("TANGGAL SEWA :\t%s\n",s.TglSewa);
		for(i=0;i<60;i++)
		printf("\xdc");
		printf("\n\n");
	}
	printf("\n");
	fclose(f);
	getch();
}

void delete1()
{
	FILE *f,*t;
	int i=1;
	char IDpesanan[20];
	if((t=fopen("temp.txt","w"))==NULL)     // 'w' mencari file, jika tidak ada file akan dibuat
	exit(0);                               // NULL JIKA TIDAK BISA DIBUKA
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Input ID Pesanan untuk dihapus dari Database: \n");
	fflush(stdin);
	scanf("%s",IDpesanan);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.IDpesanan,IDpesanan)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{
		printf("\nID PESANAN CUSTOMER TIDAK DITEMUKAN!");
		getch();
		fclose(f);
		fclose(t);
		return 0;
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nDATA CUSTOMER BERHASIL DIHAPUS!");
	fclose(f);
	fclose(t);
	getch();
}

void search()
{
system("cls");
	FILE *f;
	char IDpesanan[20];
	int flag=1;
	f=fopen("add.txt","r+");
	int i=1;
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter ID Pesanan Customer untuk dicari: \n");
	scanf("%s", IDpesanan);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.IDpesanan,IDpesanan)==0)
        {
			flag=0;
			printf("\nDATA DITEMUKAN\n");
            for(i=0;i<60;i++)
            printf("\xdc");
			printf("\nID PESANAN   :\t%s",s.IDpesanan);
			printf("\nNAMA PENYEWA :\t%s",s.name);
			printf("\nALAMAT       :\t%s",s.alamat);
			printf("\nNo. TELP     :\t%s",s.NoTelp);
			printf("\nKAMERA       :\t%s",s.kamera);
			printf("\nEMAIL        :\t%s",s.email);
			printf("\nHARI(SEWA)   :\t%s",s.WaktuSewa);
			printf("\nTANGGAL SEWA :\t%s",s.TglSewa);
			flag=0;
			printf("\n");
			for(i=0;i<60;i++)
            printf("\xdc");
			break;
		}
	}
	if(flag==1){
		printf("\nID PESANAN YANG DICARI TIDAK DITEMUKAN!");
	}
	getch();
	fclose(f);
}

