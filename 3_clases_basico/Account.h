#include <string>

class Account {
    private:
        std::string name;    
    public:
        void setName(std::string accountName) {
            name = accountName;
        }

        std::string getName() const {
            return name;
        }

};