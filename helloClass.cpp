#include <iostream>

class Hesapla{
    public:
        int yukseklil;
        int genislik;
        int alan;

        void giris() {
            std::cout << "Yukseklik: " << std::endl;
            std::cin >> yukseklil;

            std::cout << "Genislik: " << std::endl;
            std::cin >> genislik;
        }

        void hesapla() {
            alan = yukseklil * genislik;
            std::cout << "Alan:" << alan << std::endl;
        }
};

int main() {
    Hesapla hesap;
    hesap.giris();
    hesap.hesapla();
}