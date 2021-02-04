#include <iostream>
#include <string>
#include <vector>
int rpn(std::string expr);
std::vector<std::string> split(std::string s);
int get_number(std::string s);
int main()
{
    std::string x = "122 123 + 124 125 -";
    //int b = rpn(x);
    //std::cout << b;
    std::vector<std::string> c = split(x);
    for (int i = 0; i < c.size(); i++){
    std::cout << "Siamo nella posizione " << i <<"Stampo la stringa contenuta in questa posizione " << std::endl;
        std::cout << c[i] << std::endl;
    }
}

int rpn(std::string s)
{
    return 0;
}

int get_number(std::string s)
{
    int i = 0;
    char c = s[i];
    int num;
    int numero;
    while (c >= '0' <= '9' && i < (s.length()))
    {

        c = s[i];
        num = c - '0';
        numero = (numero * 10) + num;

        i++;
    }
    return numero;
}

std::vector<std::string> split(std::string s)
{
    int i = 0;
    int pos_iniziale = 0;
    int lunghezza_substr = 0;

    std::vector<std::string> v;
    while (i <= s.length())
    {
        std::cout << "giro" << std::endl;
        std::cout << "Questa è la posizione iniziale da cui fa partire la substring " << pos_iniziale << std::endl;
        
        int z = 0;
        char c = s[i];
      if(c == ' '){
      pos_iniziale += 1;
      }


        while (c!= ' ' && i <= (s.length()))
        {
            z++;
            lunghezza_substr++;
            i++;
            c = s[i];
        }
       if(lunghezza_substr != 0){
           std::cout << "lunghezza substr prima di aggiungerla  " << lunghezza_substr << std::endl;
        std::string a = s.substr(pos_iniziale, lunghezza_substr);
        v.push_back(a);
        pos_iniziale += z+1;
        lunghezza_substr = 0;
       }
        i++;
    }
    return v;
}