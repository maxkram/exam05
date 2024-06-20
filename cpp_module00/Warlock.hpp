// #pragma once

// #include <iostream>

// class Warlock {
//     private:
//         // private data members
//         std::string name;
//         std::string title;
//         // default constructor 
//         Warlock();
//         // copy constructor
//         Warlock(Warlock const &other);
//         // assignment operator
//         Warlock &operator=(Warlock const &other);
//     public:
//         // constructor
//         Warlock(std::string const &name, std::string const &title);
//         // destructor
//         ~Warlock();
//         // accessors
//         std::string const &getName() const;
//         std::string const &getTitle() const;
//         // mutator
//         void setTitle(std::string const &title);

//         void introduce() const;
// };
#pragma once
#include <iostream>
class Warlock {
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(std::string const &title);
        void introduce() const;
};