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

        friend class Test;
};

class Test{
    public:
        void degistir(Payment* paymentPtr) {
            paymentPtr->tutar = 2.5;
        }
};

int main() {
    Payment payment;
    Test test;
    test.degistir(&payment);
    payment.paraBirimi = "USD";
    return 0;
}