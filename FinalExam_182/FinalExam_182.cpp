#include <iostream>
#include <string>

using namespace std;

class Node {
public:
	string nama;
	int jumlah;
	string tipe;
	Node* next;
	Node* prev;
};

class ManajemenProduk {
private:
	Node* head;
public:
	ManajemenProduk() {
		head = NULL;
	}
	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;

		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cin >> jumlah;
		cin.ignore();
		cout << "Tipe Produk : ";
		getline(cin, tipe);
		cin.ignore();

		Node* newNode = new Node();
		newNode->nama = nama; 
		newNode->jumlah = jumlah; 
		newNode->tipe = tipe; 
		newNode->next = NULL;
		newNode->prev;

		if (head = NULL) {
			head = newNode;
			return;
		}
		else {
			Node* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
			current->next = newNode;
		}
		cout << "Produk berhasil ditambahkan!" << endl;
	}

	void tampilkanSemuaProduk() {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan," << endl;
		}
		else {
			Node* current = head;
			while (current != NULL) {
				cout << "Produk" << current->nama << endl;
				cout << "Jumlah" << current->jumlah << endl;
				cout << "Tipe" << current->tipe << endl;
				cout << endl;
				current = current->next;
			}
		}
	}

	void cariProdukByNama() {
		cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			Node* current = head;

			int posisi = 0;

			while (current != NULL) {
				posisi++;
				cout << "Nama Produk" << targetNama << "DITEMUKAN" << endl;
			}
			if (current == NULL) {
				cout << "Nama Produk" << targetNama << "TIDAK DITEMUKAN" << endl;
			}
		}
	}

	void algorithmaSortByJumlahProduk() {
		if (head == NULL || head->next == NULL) {
			return;
		}
		Node* current;
		Node* last = NULL;

		current = head;

	}
};

int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan; 
		cin.ignore();
		switch (pilihan) { 
		case 1:
			manajemenProduk.tambahProduk();
			break;
		case 2:
			manajemenProduk.tampilkanSemuaProduk(); 
			break;
		case 3:
			manajemenProduk.cariProdukByNama(); 
			break;
		case 4:
			manajemenProduk.algorithmaSortByJumlahProduk(); 
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

// 2. Single Linkedlist, Circular Queues, Stack
// 3. data yang pertama masuk 
// 4. 
// 5. a. ada 5 level / kedalaman
//    b. Inorder Traversal : yaitu dengan mengunjungi subtree bagian kiri kemudian root dan terakhir mengunjungi right child