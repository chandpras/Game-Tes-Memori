#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>
#include <conio.h>
#define baris 95
#define kolom 25
using namespace std;

void gotoxy(int x, int y)
{
    COORD batas = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), batas);
}

void box()
{
	for(int i=25;i<=baris;i++){//atas
		gotoxy(i,0);
	    cout<<"_";
	}
	for(int i=25;i<=baris;i++){//bawah
		gotoxy(i,kolom);
	    cout<<"_";
	}
	for(int i=1 ;i<=kolom;i++){//kanan
		gotoxy(25,i);
		cout<<"|";
	}
	for(int i=1; i<= kolom;i++){//kiri
		gotoxy(baris,i);
		cout<<"|";
	}
}

void loading()
{
		for(int a=0; a<2; a++){
	 	box();
	 	gotoxy(52,12);
        cout<< "Harap Tunggu.";
        Sleep(400);
     	gotoxy(52,12);
        cout<< "Harap Tunggu..";
        Sleep(400);
        gotoxy(52,12);
        cout<< "Harap Tunggu...";
        Sleep(400);
        gotoxy(52,12);
        cout<< "Harap Tunggu....";
        Sleep(50);
        system("cls");
        box();
	}
}

void instruksi()
{
	system("cls");
		box();
		gotoxy(28,8);
		cout << "*** INSTRUKSI ***";
		gotoxy(28,9);
		cout << "=================================================================";
		gotoxy(28,10);
		cout << "Saat permainan dimulai, akan ditampilkan sejumlah kombinasi kata";
		gotoxy(28,11);
		cout << "secara acak antara : kanan/kiri/atas/bawah. Kombinasi kata akan";
		gotoxy(28,12);
		cout << "ditampilkan selama waktu yang singkat, kemudian layar akan ";
		gotoxy(28,13);
		cout << "berganti. Kemudian anda akan diberikan kolom jawaban. Tugas anda";
		gotoxy(28,14);
		cout << "adalah memasukkan kebalikan dari kombinasi tersebut (atas=bawah ;";
		gotoxy(28,15);
		cout << "bawah=atas ; kanan=kiri ; kiri=kanan). Jawaban diketik dalam";
		gotoxy(28,16);
		cout << "huruf kecil dan setiap kata dipisahkan oleh garis miring(/)";
		gotoxy(28,18);
		cout << "=================================================================";
		gotoxy(28,19);
		system("pause");
		system("cls");
}

void soal()
{
	int acak_soal;
	string jawaban;
	char pil;
	srand(time(NULL));
	acak_soal = rand() % 7 + 1;
	if(acak_soal==1)
		{
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "kanan/kiri/kiri/atas/bawah/kanan/kanan";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cout << ">> ";
			cin >> jawaban;
			if(jawaban=="kiri/kanan/kanan/bawah/atas/kiri/kiri")
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				soal();
			}else
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,14);
		        cout << ">> ";
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	instruksi();
		        	loading();
		        	soal();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
					system("cls");
				}
			}		
		}else if(acak_soal==2)
		{
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "kiri/atas/bawah/kiri/kanan/kanan/kiri";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cout << ">> ";
			cin >> jawaban;
			if(jawaban=="kanan/bawah/atas/kanan/kiri/kiri/kanan")
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				soal();
			}else
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,14);
		        cout << ">> ";
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	instruksi();
		        	loading();
		        	soal();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
					system("cls");
				}
			}	
		}else if(acak_soal==3)
		{
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "bawah/atas/bawah/kanan/bawah/kiri/atas";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cout << ">> ";
			cin >> jawaban;
			if(jawaban=="atas/bawah/atas/kiri/atas/kanan/bawah")
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				soal();
			}else
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,14);
		        cout << ">> ";
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	instruksi();
		        	loading();
		        	soal();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
					system("cls");
				}
			}
		}else if(acak_soal==4)
		{
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "atas/kiri/bawah/kanan/bawah/atas/bawah";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cout << ">> ";
			cin >> jawaban;
			if(jawaban=="bawah/kanan/atas/kiri/atas/bawah/atas")
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				soal();
			}else
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,14);
		        cout << ">> ";
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	instruksi();
		        	loading();
		        	soal();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
					system("cls");
				}
			}
		}else if(acak_soal==5)
		{
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "kanan/kiri/bawah/kanan/atas/kanan/kiri";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cout << ">> ";
			cin >> jawaban;
			if(jawaban=="kiri/kanan/atas/kiri/bawah/kiri/kanan")
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				soal();
			}else
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,14);
		        cout << ">> ";
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	instruksi();
		        	loading();
		        	soal();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
					system("cls");
				}
			}
		}else if(acak_soal==6)
		{
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "atas/kanan/kiri/kanan/atas/bawah/kiri";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cout << ">> ";
			cin >> jawaban;
			if(jawaban=="bawah/kiri/kanan/kiri/bawah/atas/kanan")
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				soal();
			}else
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,14);
		        cout << ">> ";
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	instruksi();
		        	loading();
		        	soal();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
					system("cls");
				}
			}
		}else if(acak_soal==7)
		{
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "kiri/kanan/atas/kanan/bawah/kiri/atas";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cout << ">> ";
			cin >> jawaban;
			if(jawaban=="kanan/kiri/bawah/kiri/atas/kanan/bawah")
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				soal();
			}else
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,14);
		        cout << ">> ";
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	instruksi();
		        	loading();
		        	soal();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
					system("cls");
				}
			}
		}
}

void menu()
{
		box();
		gotoxy(26,6);
		for(int a=26 ; a<=94 ; a++)
		{cout << "=";}
		gotoxy(26,7);
		cout << "=======================  T E S   M E M O R I  =======================" << endl;
		gotoxy(26,8);
		for(int a=26 ; a<=94 ; a++)
		{cout << "=";}
		gotoxy(45,14);
		system("pause");
		system("cls");
		loading();
		instruksi();
		system("cls");
		loading();
		soal();
}

int main()
{
	box();
	menu();
}
