#include <iostream>
#define maxsize 5 //menentukan ukuran dari stack

using namespace std;

struct paket
{
    char jenisBarang[30];
    char kota[30];
    int berat;
};

paket kirim[maxsize];

//inisialisasi stack dengan posisi 0
int top=1;

//prosedur untuk menentukan apakah stack sudah penuh atau belum
bool isFull()
{
    if (top>maxsize)
        return true;
    else
        return false;
}

//prosedur untuk menentukan apakah stack sudah kosong atau belum
bool isEmpty()
{
    if (top==1)
        return true;
    else
        return false;
}

//prosedur untuk memasukkan data ke dalam stack
void push(int x)
{
    if(isFull())
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        cout << "Inputkan jenis barang: "; cin >> kirim[x].jenisBarang;
        cout << "Inputkan berat: "; cin >> kirim[x].berat;
        cout << "Inputkan kota tujuan: "; cin >> kirim[x].kota;
        top++;
    }
    cout << endl;
}

//prosedur untuk meneluarkan data dari dalam stack
void pop(int x)
{
    if(isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Data terakhir yang dihapus adalah" << endl;
        cout << kirim[x].jenisBarang;
        cout << kirim[x].berat << " kg ";
        cout << kirim[x].kota;
        top--;
    }
    cout << endl;
}

//prosedur untuk melihat data yang sudah masuk ke dalam stack
void display(int x)
{
    cout << "Daftar paket yang dikirim: " << endl;
    for(int i=1; i<x; i++)
    {
        cout << kirim[i].jenisBarang << " ";
        cout << kirim[i].berat << " ";
        cout << kirim[i].kota << endl;
    }
    cout << endl;
}

//prosedur untuk menampilkan data di posisi stack paling atas
void displayTop()
{
    cout << "Top: ";
    cout << kirim[top-1].jenisBarang << " " << kirim[top-1].berat << " ";
    cout << kirim[top-1].kota << endl;
}

//prosedur untuk melihat berapa data yang ada di dalam stack
void stackSize()
{
    cout << "Size dari stack adalah: " << top-1 << endl;
}


int main()
{
    int select;

    do
    {
        cout << "\n";
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cout<<"1.PUSH  2.POP  3.DISPLAY  4.ISFULL  5.ISEMPTY  6.TOP  7.SIZE  8.EXIT "<<endl;
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cin >> select;
        if(select==1)
        {
            push(top);
        }
        else if(select==2)
        {
            pop(top-1);
        }
        else if(select==3)
        {
            display(top);
        }
        else if(select==4)
        {
            if(isFull())
            {
                cout << "Stack sudah penuh" << endl;
            }
            else
            {
                cout << "Stack belum penuh, anda dapat melakukan push" << endl;
            }
        }
        else if(select==5)
        {
            if(isEmpty())
            {
                cout << "Stack sudah kosong" << endl;
            }
            else
            {
                cout << "Stack belum kosong anda dapat melakukan pop " << endl;
            }
        }
        else if(select==6)
        {
            displayTop();
        }
        else if(select==7)
        {
            stackSize();
        }
    }
    while(select!=8);
    return 0;
}
