#pragma once
#include <memory>
#include <utility>

namespace my{
    class string{
        private:
            char* m_ptr=nullptr;
            std::size_t m_size{};
            std::size_t m_cap{};
            void reallocate(std::size_t new_cap);
        public:
            string();

            string(std::initializer_list<char> init);

            string(const string& other);

            string(string&& other)noexcept;

            string& operator=(const string& other);


            string& operator=(string&& other)noexcept;
              
            void push_back(char c);
    };
}

#include "string.tpp"