#include <iostream>
#include <string>

class Ex {
    private: 
        std::string message;
    public:
        Ex(std::string message) {
            this->message = message;
        }

        std::string yaz() {
            return this->message;
        }
};

double bolme(int a, int b) {
    try
    {
        if (b<1)
        {
            throw -1;
        }
        if (a<1)
        {
            throw Ex("Merhaba");
        }

        return a/b;
        
        
    }catch(int err)
    {
       std::cout << err << "Bir sayi sifira bolunemez" << std::endl;
    } catch (bool) {
        std::cout << "Bir hata olustu" << std::endl;
    }
    
}
