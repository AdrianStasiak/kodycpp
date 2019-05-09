#include<iostream>
#include<conio.h>

void poczatkowyEkran(int iloscProb)
{

}
bool WpisywaniePINu(int iloscProb)
{
    poczatkowyEkran(iloscProb);
   
    std::cout<<"witam! Prosze podac kod PIN";
    std ::cout<<std:: endl;
    
    std::string PrawidlowyPIN = "1233";
    
    std::string PIN;
    std::cin>>PIN;
    
    if ( PIN==PrawidlowyPIN)
    {
    std::cout<<"kod pin prawidlowy\n Mozesz przejsc dalej\n";
    return true;
    }
    else
    {
        std::cout<<"kod pin nieprawidlowy. Pozostalo prob "<< iloscProb-1<< std::endl<<std::endl;
        return false;
    }
}

int main()
{
    int iloscProb;
    int PoczatkowaProba = 3;
    int MaxProba = 1;
    while(PoczatkowaProba>=MaxProba)
    {
        bool CzyPoprawnyPIN = WpisywaniePINu(PoczatkowaProba);
        std::cin.clear();
        std::cin.ignore();
    
            if (CzyPoprawnyPIN)
            {
                return true; 
            }
            else 
            {
            --PoczatkowaProba;
            }        
    }
    std::cout<< "karta zablokowana";

    return 0;
}