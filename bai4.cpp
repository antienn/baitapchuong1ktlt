//#include<iostream>
//
//using namespace std;
//
//int sum (int a[5][6],int row,int culumn,int roworculumn,int number) {
//	int tong = 0;
//	if (roworculumn == 1) {
//		for (int i = 0; i < culumn;i++) {
//			tong+=a[number][i];
//		}
//	}
//	if (roworculumn == 2) {
//		for (int i = 0; i < row; i++) {
//			tong += a[i][number];
//		}
//	}
//	return tong;
//}
//
//
//int main() {
//
//	int a[5][6];
//	int count = 0;
//	int choosenumber;
//	int hang, cot;
//	int roworculumn;
//	int number;
//	bool truee;
//	//input
//	do {
//		cout << "moi ban nhap so hang: ";
//		cin >> hang;
//		cout << endl;
//		cout << "moi ban nhap so cot: ";
//		cin >> cot;
//		cout << endl;
//		if (hang > 5 || hang <= 0 || cot > 6 || cot <= 0) {
//			cout << "loi gioi han bang! toi da 5 hang va 6 cot" << endl;
//		}
//	} while(hang>5||hang<=0||cot>6||cot<=0);
//	//input element arr
//	for (int i = 0; i < hang; i++) {
//		for (int j = 0; j < cot; j++) {
//			cout << "moi ban nhap so cho hang " << i + 1 << " cot " << j + 1 << " : ";
//			cin >> a[i][j];
//			cout << endl;
//		}
//	}
//	//input sum row or culumn number
//	do {
//		truee=false;
//		cout << "1.hang" << endl;
//		cout << "2.cot" << endl;
//		cout << "ban muon dem hang hay cot: " ;
//		cin >> roworculumn;
//		cout << "ban muon tinh dong hay cot so may:" ;
//		cin >> number;
//		number--;
//		if ( (roworculumn == 1&&number<hang)||(roworculumn == 2 && number < cot)) {
//			truee = true;
//		}
//		else {
//			cout << "moi ban nhap lai vi da loi pham vi" << endl;
//		}
//	} while (!truee);
//
//	//output
//	if (roworculumn == 1) {
//		cout << "tong phan tu hang so " << number+1 << " ban vua moi nhap la: " << sum(a, hang, cot, roworculumn, number) << endl;
//	}
//	else {
//		cout << "tong phan tu cot so " << number+1 << " ban vua moi nhap la: " << sum(a, hang, cot, roworculumn, number) << endl;
//	}
//
//	//check one number appear in array
//	cout << "moi ban nhap so ban muon kiem tra" << endl;
//	cin >> choosenumber;
//	cout << "so cua ban muon kiem tra xuat hien o:" << endl;
//	for (int i = 0; i < hang; i++) {
//		for (int j = 0; j < cot; j++) {
//			if (choosenumber == a[i][j]) {
//				count++;
//				cout << "dong " << i << " cot " << j << endl;;
//			}
//		}
//	}
//	if (count == 0) {
//		cout << "so ban muon kiem tra khong xuat hien trong mang" << endl;
//	}
//	else {
//		cout << "tong so lan xuat hien cua so " << choosenumber << " la " << count << " lan" << endl;
//	}
//
//	return 0;
//}