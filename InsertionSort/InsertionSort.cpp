// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
void InsertionSort(int M[], int n);

int main()
{
	int M[50];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	NhapMang(M, n);
	cout << "\nMang sau khi nhap: \n";
	XuatMang(M, n);
	InsertionSort(M, n);
	cout << "\nMang sau khi sap xep: \n";
	XuatMang(M, n);
	return 0;
}

void NhapMang(int M[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		M[i] = rand() % 100 ;
	}
}

void XuatMang(int M[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << M[i] << "\t";
	}
}

void InsertionSort(int M[], int n)
{
	int x; // luu tam gia tri chen
	int position = 0; // luu vi tri can chen
	for (int i = 1; i < n; i++)
	{
		x = M[i]; // luu tam gia tri can chen
		position = i; // cho vi tri bang gia tri i
		//while (M[position-1] > x && position > 0) // sap xep tang dan
		while (M[position - 1] < x && position > 0) // sap xep giam dan
		{
			M[position] = M[position - 1]; // chen vi tri sau voi gia tri cua vi tri truoc
			position--;
		}
		M[position] = x; // vi tri can chen se gan gia tri x
	}
}
