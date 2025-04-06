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

int main() {

    Ak47 ak47;
    ak47.isim = "Yeni Nesil AK-47";
    ak47.renk = "Red";

    Ak47* ak47Ptr = &ak47;
    ak47Ptr->mermiKapasitesi = 30;
    ak47Ptr->seriTek = true;

    Ak47& ak47Ref = ak47;
    ak47Ref.kayisUzunlugu = 100;

    test(ak47, &ak47);
    std::cout << "AK-47 Bilgileri:" << std::endl;

    return 0;
}