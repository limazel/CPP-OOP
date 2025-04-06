#include <iostream>
// fonksiyonun içeriğindeki herşey çağırıldıktan sonra silinir. Parametrelerde bellekten silinir.
// fakat static varsa program kapatılana kadar silinmez.
// static değişkenler fonksiyonun içeriğinde tanımlanırsa, her çağırıldığında bir önceki değeri hatırlar.
// static dediğimiz değişken kafasına göre takılır.
// hem oluşturulan nesne üzerinden hem de sınıf üzerinden erişilebilir.


class Kitap {
    public:
        static int adet;

        Kitap() {
            adet++;
        }

        static int getAdet() {
            return adet;
        }
};

int main() {
    Kitap kitap1;
    Kitap kitap2;
    Kitap kitap3;

    std::cout << "Toplam kitap sayisi: " << Kitap::getAdet() << std::endl;

    return 0;
}