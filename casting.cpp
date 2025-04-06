#include <iostream>

class Silah {
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;

        Silah() {
            std::cout << "Silah yapıcı çağrıldı!" << std::endl;
        }
};

class Ak47 : public Silah {
    public:
        bool seriTek;
        int kayisUzunlugu;
        bool durbun;

        void atesEt() {
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

void test(Ak47& ak47, Ak47* ak47Ptr) {
    Ak47* ak47Ptr2 = new Ak47();
    Ak47& ak47Ref = *ak47Ptr2;
}

void goster(Silah* silahPtr) {
    std::cout << silahPtr->isim << std::endl;
}

int main() {

    Ak47 ak47;
    ak47.isim = "Yeni Nesil AK-47";

    goster(&ak47);

    Pistol pistol;
    pistol.isim = "Yeni Nesil Pistol";

    goster(&pistol);

    M1 m1;
    m1.isim = "Yeni Nesil M1";

    goster(&m1);
   
    return 0;
}