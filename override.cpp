#include <iostream>

class Silah {
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;

        Silah() {
            std::cout << "Silah yapıcı çağrıldı!" << std::endl;
        }


        void atesEt() {
            std::cout << "Ateş ediliyor!" << std::endl;
        }
};

class Ak47 : public Silah {
    public:
        bool seriTek;
        int kayisUzunlugu;
        bool durbun;

        void atesEt() {
            Silah::atesEt(); // Silah sınıfının atesEt() fonksiyonunu çağır
            // Kendi atesEt() fonksiyonunu ekle
            std::cout << "Ateş ediliyor!" << std::endl;
        }

        Ak47() {
            std::cout << "AK-47 yapıcı çağrıldı!" << std::endl;
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
    ak47.atesEt();


    return 0;
}