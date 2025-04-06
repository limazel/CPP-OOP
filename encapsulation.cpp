#include <iostream>
// arada aracı olduğu zaman yapmak istediğimiz işlemi başkası yaptığı zaman kapsülleme kullanılır


class Payment {
    private:
        float tutar;
    public:

        std::string paraBirimi;

        std::string hashCode = "1234567890";

        Payment() {
            tutar = 1.2;
            paraBirimi = "TL";
            std::cout << "Yapıcı çalıştı" << std::endl;
        }

        Payment(bool f, std::string p) {
            tutar = 1.2;
            paraBirimi = p;
            std::cout << "Yapıcı çalıştı" << std::endl;
        }

        ~Payment() {
            std::cout << "Yıkıcı çalıştı" << std::endl;
        }

        void setTutar(float t) {
            if (t > 0) {
                tutar = t;
            } else {
                std::cout << "Tutar negatif olamaz!" << std::endl;
            }
        }

        void pay() {
            std::cout << "Ödeme yapıldı" << std::endl;
        }
};

int main() {
    Payment pay;
    pay.setTutar(100.5);
    pay.paraBirimi = "USD";
    pay.pay();

    return 0;
}