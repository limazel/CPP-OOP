#include <iostream>

class Silah {
    public:
        std::string isim;
        int mermiKapasitesi;
};

class Ak47 : public Silah {
    public:
        bool seriTek;
        int kayisUzunlugu;
        bool durbun;

        void atesEt() {
            std::cout << "Ateş ediliyor!" << std::endl;
        }
};

class Pistol : public Silah {
    public:
        int kurmaKoluDeseni;

        void atesEt() {
            std::cout << "Ateş ediliyor!" << std::endl;
        }
};

class M1 : public Silah {
    public:
        bool seriTek;
        int kayisUzunlugu;
        int kurmaPozisyonu;

        void atesEt() {
            std::cout << "Ateş ediliyor!" << std::endl;
        }


};

int main() {

    Ak47 ak47;
    ak47.isim = "Yeni Nesil AK-47";

    return 0;
}