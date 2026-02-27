#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: NELEMENTS nincs sehol deklarálva. Valószínűleg az N_ELEMENTS akart lenni.
    int *b = new int[NELEMENTS];

    // HIBA: Szöveget nem aposztróffal, hanem idézőjelekkel írunk.
    // HIBA: A sor végéről hiányzik a pontosvessző.
    std::cout << '1-100 ertekek duplazasa'

    // HIBA: A for ciklus nincs rendesen megadva (hiányzik a feltétel és a léptetés).
    for (int i = 0;)
    {
        // PROBLÉMA: i nem változik, szóval ha ez lefutna, végtelen ciklus lenne.
        b[i] = i * 2;
    }

    // HIBA: A ciklus feltétele csak "i". Mivel i = 0-ról indul, ez a ciklus egyszer sem fut le.
    for (int i = 0; i; i++)
    {
        // HIBA: Hiányzik a pontosvessző.
        // PROBLÉMA: Csak a szöveget írja ki, de magát az értéket (b[i]) nem.
        std::cout << "Ertek:"
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    // HIBA: Az atlag változó nincs inicializálva (szemét értékről indul).
    int atlag;

    // HIBA: A for fejében vessző van a ; helyett: (i < N_ELEMENTS, i++) nem jó.
    // HIBA: A ciklus fejéből hiányzik a léptetés logikusan, így eleve nem helyes a szintaxis.
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA: Hiányzik a pontosvessző.
        // PROBLÉMA: atlag nincs lenullázva, így ez hibás/értelmetlen eredményt ad.
        atlag += b[i]
    }

    // PROBLÉMA: Ha atlag eleve rossz értékről indul, az osztás után is rossz lesz az eredmény.
    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    // HIBA: memóriaszivárgás.
    return 0;
}

