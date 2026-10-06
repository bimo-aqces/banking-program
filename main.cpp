#include <iostream>
#include <cmath>

double tabungan_total;

double setorTabungan(double nilai_setor);
double ambilTabungan(double jumlah_uang);
void lihatTabungan();

int main(){
    std::cout << "selamat datang di bank\n";
    bool retry = false;
    do
    {

        int pilihan_user;
        std::cout << "(1) setor tabungan\n(2) ambil tabungan\n(3) lihat tabungan\n";
        std::cin >> pilihan_user;

        switch (pilihan_user)
        {
        case 1:
            double nilai_setor;

            std::cout << "masukkan nilai setor tabungan: ";
            std::cin >> nilai_setor;
            setorTabungan(nilai_setor);
            std::cout << "setoran " << nilai_setor << " berhasil, sekarang tabungan anda: " << tabungan_total << '\n';
            break;

        case 2:
            double jumlah_uang;

            std::cout << "masukkan nilai pengambulan: ";
            std::cin >> jumlah_uang;
            ambilTabungan(jumlah_uang);
            std::cout << "pengambilan " << jumlah_uang << " berhasil, sekarang tabungan anda: " << tabungan_total << '\n';

            break;

        case 3:
            lihatTabungan();

            break;
        }

        std::cout << "retry transaksi? (1 = yes, 0 = no)";
        std::cin >> retry;
    } while (retry == 1);

    std::cout << "silakan kembali lagi";
    return 0;
}

double setorTabungan(double nilai_setor){
    tabungan_total += nilai_setor;
    return tabungan_total;
}

double ambilTabungan(double jumlah_uang){
    tabungan_total -= jumlah_uang;
    return tabungan_total;
}

void lihatTabungan(){
    std::cout << tabungan_total << '\n';
}