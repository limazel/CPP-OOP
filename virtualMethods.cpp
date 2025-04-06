#include <iostream>

class Silah {
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;

        virtual void ates() = 0; // Saf sanal fonksiyon
};

class Ak47 : public Silah {
    public:
        bool seriTek;
        int kayisUzunlugu;
        bool durbun;

        void ates() {
            std::cout << "Ateş ediliyor!" << std::endl;
        }

        Ak47() {
            std::cout << "AK-47 yapıcı çağrıldı!" << std::endl;
        }
};

class Pistol : public Silah {
    public:
        int kurmaKoluDeseni;

        void ates() {
            std::cout << "Ateş ediliyor!" << std::endl;
        }
};

class M1 : public Silah {
    public:
        bool seriTek;
        int kayisUzunlugu;
        int kurmaPozisyonu;

        void ates() {
            std::cout << "Ateş ediliyor!" << std::endl;
        }


};

void atesEt(Silah* silahPtr) {
    silahPtr->ates();
}

int main() {

    Ak47 ak47;
    Pistol pistol;
    M1 m1;
    atesEt(&ak47);
    atesEt(&pistol);
    atesEt(&m1);

    return 0;
}