// Wyklad zadanie 99 butelek.cpp : 
//

#include <iostream>

int main()
{
    int liczbabutelek;    

    do
    {
    std::cout << "Podaj, od ilu butelek zaczynamy spiewac. Zakres to 1-99:\n";
    std::cin >> liczbabutelek;
    if (liczbabutelek < 1 || liczbabutelek > 99)
    {
        std::cout << "Nie podales liczby z zakresu 1-99. Sprobuj jeszcze raz.\n";
    }
    }     while (liczbabutelek < 1 || liczbabutelek > 99);
       

    for (int i = liczbabutelek; i > 0; i--)
    {
        std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer. Take one down, pass it around, " << i - 1 << " bottles of beer on the wall...\n";

        
    }     
     
            std::cout << "No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall...\n";
           
    
    return 0;

}

