#include <iostream>

// Abstraction Soyut sınıfların amacı nesne oluşturmak değildir. Nesneleri yönetmektir.
// Soyut sınıf olması için en az bir tane saf sanal fonksiyon olmalıdır.
// Gövdesiz method barındırır.
// Değişken alabilir.
// İçerisinde değişken yok ise interface sınıfı olur.
// Soyut sınıflardan nesne oluşturulamaz.

class Hayvan {
    public:
    virtual void sesCal() = 0;
};

class Kopek : public Hayvan {
    public:
        void sesCal() {
            std::cout << "Hav hav" << std::endl;
        }
};

class Kedi  : public Hayvan {
    public:
        void sesCal() {
            std::cout << "Miyav miyav" << std::endl;
        }
};

class Ordek  : public Hayvan {
    public:
        void sesCal() {
            std::cout << "Vak Vak" << std::endl;
        }
};

void tumSesCal(Hayvan* hPtr) {
    hPtr->sesCal();
}

int main() {
    Kopek kopek;
    Kedi kedi;
    Ordek ordek;
    tumSesCal(&kopek);
    tumSesCal(&kedi);
    tumSesCal(&ordek);
}