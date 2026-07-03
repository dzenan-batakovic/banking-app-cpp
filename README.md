# Banking sistem
> **Zadnje ažurirano:** 03.07.2026 | **Verzija:** v1.0.0

Banking sistem je programiran u C++ programskom jeziku. Njegova svrha je bila vježbati na pointerima i Object-Oriented-Programmingu (OOP) kroz nešto što nije dosadno. Projekt je odličan kako zaa početnike tako i za ozbiljnije programere koji programiraju u C++ programskom jeziku.

# Značajke (Features)
* Kreiranje novog računa
* Deposit/polog novca na bankovni račun
* Withdraw/podizanje novca sa bankovnog računa
* Izpisak svih računa

## Korištene Tehnologije
* **Jezik:** C++
* **Alati:** Visual Studio Code
* **Pakiranje:** Samo GCC/G++

# Ostalo
* Ovo je prva verzija koja će u budućnosti vjerovatno dobiti par popravaka u samom stilu i izgledu aplikacije.



## Kako Pokrenuti Projekat
Da bi ste projekt pokrenuli potreban vam je samo C++ kompajler (MinGW ili GCC). Bez kompajlera nećete moći kod pretvoriti u .exe (executable).

# Kloniranje repozitorija
git clone https://github.com/dzenan-batakovic/banking-app-cpp.git

# Ulazak u mapu
cd banking-app-cpp

# Kompajler komanda
g++ *.cpp -o "Banka.exe" -static -static-libgcc -static-libstdc++