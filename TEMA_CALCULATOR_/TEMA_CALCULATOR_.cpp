#include <iostream>
#include "string"

// Aici avem 2 variabile globale
 int intNumber_01_, intNumber_02_;


 // Aici avem o functie pe care o apelam unde avem nevoie pentru a nu scrie bucata de code de prea multe ori
void CE_REGISTER_NUMBERS_() // CE_ = Custom Event 
{
    std::cout << "Introduceti primul numar: ";   std::cin >> intNumber_01_;
    std::cout << "Introduceti al doilea numar: ";   std::cin >> intNumber_02_;

}


int main()
{
    // Aici avem 3 variabile locale
    int intOperatie_;
    int intCalcul_;
    bool bVerificare;

    // Descrierea programului si instructiunile
    std::cout << "Acesta este un calculator" << std::endl << std::endl;

    std::cout << " 1. Adunare" << std::endl;
    std::cout << " 2. Scadere" << std::endl;
    std::cout << " 3. Inmultire" << std::endl;
    std::cout << " 4. Impartire" << std::endl;
    std::cout << " 5. Procentaj (A% din B)" << std::endl;
    std::cout << " 6. Vreificare A < B" << std::endl;
    std::cout << " 7. Vreificare A > B" << std::endl;
    std::cout << " 8. Vreificare A <= B" << std::endl;
    std::cout << " 9. Vreificare A >= B" << std::endl;
    std::cout << "10. Vreificare A == B" << std::endl;
    std::cout << "11. Vreificare A != B" << std::endl;
    std::cout << "12. Adunare cu 1" << std::endl;
    std::cout << "13. Scadere cu 1" << std::endl << std::endl;

    std::cout << "Introduceti cifra corespunzatoare operatiei dorite: ";
    std::cin >> intOperatie_; // Introducem cifra corespunzatoare operatiei dorite
    std::cout << std::endl;
    
    // Daca intOperatie_ este egal cu o cifra de la 1 la 13 va face o operatie corespunzatoare instructiunilor de mai sus
    // Daca intOperatie_ nu este egal cu o cifra de la 1 la 13 programul se va repornii

    if (intOperatie_ == 1) {
        std::cout << " 1. Adunare" << std::endl;
        CE_REGISTER_NUMBERS_(); // Apelam functia de mai sus pentru a initializa intNumber_01_ si intNumber_02_
        intCalcul_ = intNumber_01_ + intNumber_02_; // Setam ce calcul va executa programul
        std::cout << "Rezultatul este: " << intCalcul_ << std::endl << std::endl; // Printam rezultatul
    }
    else if (intOperatie_ == 2) {
        std::cout << " 2. Scadere" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = intNumber_01_ - intNumber_02_;
        std::cout << "Rezultatul este: " << intCalcul_ << std::endl << std::endl;
    }
    else if (intOperatie_ == 3) {
        std::cout << " 3. Inmultire" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = intNumber_01_ * intNumber_02_;
        std::cout << "Rezultatul este: " << intCalcul_ << std::endl << std::endl;
    }
    else if (intOperatie_ == 4) {
        std::cout << " 4. Impartire" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = intNumber_01_ / intNumber_02_;
        std::cout << "Rezultatul este: " << intCalcul_ << std::endl << std::endl;
    }
    else if (intOperatie_ == 5) {
        std::cout << " 5. Procentaj (A% din B)" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = (intNumber_01_ * intNumber_02_) / 100;
        std::cout << "Rezultatul este: " << intCalcul_ << std::endl << std::endl;
    }

    // Pentru a nu printa 0 sau 1 folosim  "std::boolalpha"  asa va aparea true sau false 
    else if (intOperatie_ == 6) {
        std::cout << " 6. Vreificare A < B" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = intNumber_01_ < intNumber_02_;
        bVerificare = intCalcul_;
        std::cout << "Rezultatul este: " << std::boolalpha << bVerificare << std::endl << std::endl;
    }
    else if (intOperatie_ == 7) {
        std::cout << " 7. Vreificare A > B" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = intNumber_01_ > intNumber_02_;
        bVerificare = intCalcul_;
        std::cout << "Rezultatul este: " << std::boolalpha << bVerificare << std::endl << std::endl;
    }
    else if (intOperatie_ == 8) {
        std::cout << " 8. Vreificare A <= B" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = intNumber_01_ <= intNumber_02_;
        bVerificare = intCalcul_;
        std::cout << "Rezultatul este: " << std::boolalpha << bVerificare << std::endl << std::endl;
    }
    else if (intOperatie_ == 9) {
        std::cout << " 9. Vreificare A >= B" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = intNumber_01_ >= intNumber_02_;
        bVerificare = intCalcul_;
        std::cout << "Rezultatul este: " << std::boolalpha << bVerificare << std::endl << std::endl;
    }
    else if (intOperatie_ == 10) {
        std::cout << "10. Vreificare A == B" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = intNumber_01_ == intNumber_02_;
        bVerificare = intCalcul_;
        std::cout << "Rezultatul este: " << std::boolalpha << bVerificare << std::endl << std::endl;
    }
    else if (intOperatie_ == 11) {
        std::cout << "11. Vreificare A != B" << std::endl;
        CE_REGISTER_NUMBERS_();
        intCalcul_ = intNumber_01_ != intNumber_02_;
        bVerificare = intCalcul_;
        std::cout << "Rezultatul este: " << std::boolalpha << bVerificare << std::endl << std::endl;
    }
    else if (intOperatie_ == 12) {
        std::cout << "12. Adunare cu 1" << std::endl;
        CE_REGISTER_NUMBERS_();
        intNumber_01_ = ++intNumber_01_;
        intNumber_02_ = ++intNumber_02_;
        std::cout << "Rezultatul este: " << std::endl;
        std::cout << "1. " << intNumber_01_ << std::endl;
        std::cout << "2. " << intNumber_02_ << std::endl << std::endl;
    }
    else if (intOperatie_ == 13) {
        std::cout << "13. Scadere cu 1" << std::endl;
        CE_REGISTER_NUMBERS_();
        intNumber_01_ = --intNumber_01_;
        intNumber_02_ = --intNumber_02_;
        std::cout << "Rezultatul este: " << std::endl;
        std::cout << "1. " << intNumber_01_ << std::endl;
        std::cout << "2. " << intNumber_02_ << std::endl << std::endl;
    }
    // Daca intOperatie_ nu este egal cu o cifra de la 1 la 13 va executa codul de mai jos
    else {
        std::cout << "Eroare ! Numarul introdus nu corespunde listei de mai sus." << std::endl;
        std::cout << "Incearca din nou." << std::endl << std::endl;
        main(); // Resetam programul
    }

    return 0;
}
