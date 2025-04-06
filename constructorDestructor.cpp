#include <iostream>

class Payment {
    public:
        float tutar;

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

        void pay() {
            std::cout << "Ödeme yapıldı" << std::endl;
        }
};

int main() {
    Payment pay;
    pay.tutar = 100;
    pay.paraBirimi = "USD";
    pay.pay();

    return 0;
}