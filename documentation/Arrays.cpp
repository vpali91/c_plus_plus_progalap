#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Tömbökben szinte bármilyen változót tudunk tárolni.
    // Tömböknél létrehozáskor mindig meg kell adnunk az elemeit,
    // vagy azt, hogy hány elemből fog állni. Ez nem változtatható,amíg a memóriában él.

    // üres tömb létrehozása, megadva a méretét:
    int uresTomb[5];

    // tömb létrehozása értékekkel
    int tomb1[] = { 1, 2, 3, 4, 5, 6, 7 };
    // a tömböt így is létrehozhatjuk:
    int tomb2[] = { 3, 4, 7, 2, 9, 10 };

    vector<string> weekDays = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    // tömb kiíratása
    cout << weekDays[0] << ", " << weekDays[1] << ", ... " << endl;
    for (const auto& item : weekDays) {
        cout << "Foreach: " << item << endl;
    }

    // Tömb metódusok
    // tomb1 hossza
    cout << "tomb1.Length: " << sizeof(tomb1) / sizeof(*tomb1) << endl;

    // összehasonlítás
    cout << "tomb1 == tomb2: ";
    if (sizeof(tomb1) == sizeof(tomb2) && equal(begin(tomb1), end(tomb1), begin(tomb2))) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    // 2D tömbök: olyan tömb, ami 2 tagú tömböket tartalmaz
    int tomb2D[][2] = { {1, 3}, {5, 7}, {8, 9} };
    // kiíratás
    cout << tomb2D[1][0] << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << tomb2D[i][j] << ", ";
        }
        cout << endl;
    }
    // 3D tömb létrehozása
    int matrix[3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };

    // Az elemek kiírása
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << matrix[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // dinamikus tömb, azaz vektor
    /*
    A vector egy dinamikusan növekvő tömb implementációja, amely automatikusan kezeli a memóriakezelést, és képes 
    újraalokálni a memóriát, amikor szükséges.
    A vector használatakor a tömb mérete dinamikusan növekszik vagy csökken az elemek hozzáadása vagy eltávolítása során, 
    és a memóriakezelés automatikusan történik. Avector által használt memória azonban nem folyamatos, 
    mint egy hagyományos tömb esetében, hanem az elemek közötti részek lehetnek szabadon állóak a memóriában.
    */

    vector<int> myVector(5); // 5 elemű int típusú vektor
    myVector.push_back(10); // elem hozzáadása a végéhez
    myVector.resize(7); // a vektor méretének növelése 7-re
    myVector[6] = 20; // az utolsó elem értékének beállítása
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " "; // az elemek kiírása
    }
    cout << endl;

    return 0;
}
