//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//void inputarr(int arr[10][10], int r, int c) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << "moi ban nhap so cho hang " << i + 1 << " cot " << j + 1 << " : ";
//			cin >> arr[i][j];
//		}
//	}
//}
//
//void outputarr(int arr[10][10], int r, int c) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << setw(3) << arr[i][j];
//		}
//		cout << endl;
//	}
//}
//double avg(int arr[10][10], int r, int c) {
//	int avg = 0;
//	int dem = 0;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			avg+= arr[i][j];
//			dem++;
//		}
//	}
//	avg /= dem;
//	return avg;
//}
//int check1number(int arr[10][10], int r, int c,int number){
//	int dem = 0;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (number == arr[i][j]) {
//				dem++;
//			 }		
//		}
//	}
//	return dem;
//}
//int findrowindex(int arr[10][10], int r, int c, int number) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (number == arr[i][j]) {
//				return i;
//			}
//		}
//	}
//}
//int findculumnindex(int arr[10][10], int r, int c, int number) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (number == arr[i][j]) {
//				return j;
//			}
//		}
//	}
//}
//void swap(int &a, int &b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int tichculumn(int arr[10][10],int r,int numberculumn) {
//	int tich = 1;
//	for (int i = 0; i < r; i++) {
//		tich *= arr[i][numberculumn];
//	}
//	return tich;
//}
//
//int main() {
//	int arr[10][10];
//	int row, culumn;
//	int a;
//	int x, y;
//	int r1=0, r2 = 0, c1 = 0,c2 = 0;
//	int numberculumn;
//	cout << "moi ban nhap so dong" << endl;
//	cin >> row;
//	cout << "moi ban nhap so cot" << endl;
//	cin >> culumn;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < culumn; j++) {
//			cout << "moi ban nhap so cho hang " << i + 1 << " cot " << j + 1 << " : ";
//			cin >> arr[i][j];
//		}
//	}
//	outputarr(arr, row, culumn);
//	cout << "gia tri trung binh cua cac gia tri ban vua nhap la: " << avg(arr, row, culumn) << endl;
//	cout << "moi ban nhap 1 so de kiem tra so luong so do trong mang" << endl;
//	cin >> a;
//	if (check1number(arr, row, culumn, a) != 0) {
//		cout << "so " << a << " xuat hien " << check1number(arr, row, culumn, a) << " lan" << endl;
//	}
//	else {
//		cout << "so " << a << " khong xuat hien lan nao !" << endl;
//	}
//	outputarr(arr, row, culumn);
//	do {
//		cout << "nhap 2 so ban muon doi vi tri tren mang" << endl;
//		cin >> x >> y;
//		if (check1number(arr, row, culumn, x) == 0 || check1number(arr, row, culumn, y) == 0) {
//			cout << "so ban vua nhap khong xuat hien trong mang yeu cau nhap lai !" << endl;
//		}
//	} while (check1number(arr, row, culumn, x) == 0 || check1number(arr, row, culumn, y) == 0);
//	swap(arr[findrowindex(arr, row, culumn, x)][findculumnindex(arr, row, culumn, x)], arr[findrowindex(arr, row, culumn, y)][findculumnindex(arr, row, culumn, y)]);
//	outputarr(arr, row, culumn);
//	cout << "moi ban nhap so cot ban muon tinh tich" << endl;
//	cin >> numberculumn;
//	cout<<"tich cua cot thu "<<numberculumn<<" la " << tichculumn(arr, row, numberculumn - 1);
//	return 0;
//}