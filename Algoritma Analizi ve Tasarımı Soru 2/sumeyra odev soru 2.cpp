#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

// Algoritma Analizi ve Tasarýmý KS-1 2.Ödev
// Boyer-Moore Algorithm
// Sümeyra Sümer
// 5210505067

using namespace std;

const int MAX_CHARS = 256;

// Boyer-Moore algoritmasý
void boyer_moore(string pattern, string text) {
    int m = pattern.length();
    int n = text.length();

    int bad_char[MAX_CHARS];

    // bad character heuristiði
    memset(bad_char, -1, sizeof bad_char);
    for (int i = 0; i < m; i++)
        bad_char[(int) pattern[i]] = i;

    int count = 0;
    int s = 0;
    while (s <= (n - m)) {
        int j = m - 1;

        // sondan baþlayarak pattern ve text karakterlerini karþýlaþtýr
        while (j >= 0 && pattern[j] == text[s + j])
            j--;

        if (j < 0) {
            // pattern bulundu
            count++;
            s += (s + m < n) ? m - bad_char[(int) text[s + m]] : 1;
        } else {
            // pattern bulunamadý, sýçrama boyutunu hesapla
            s += max(1, j - bad_char[(int) text[s + j]]);
        }
    }

    cout << pattern << " kelimesi " << count << " kez geciyor." << endl;
}

int main() {
	
	cout << "Algoritma Analizi ve Tasarimi KS-1 2.Odev" << endl;
	cout << "Boyer-Moore Algorithm" << endl;
	cout << "Sumeyra Sumer" << endl;
	cout << "5210505067" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	
	
    ifstream file("alice_in_wonderland.txt");
    string text;
    string words[5] = {"upon", "sigh", "Dormouse", "jury-box", "swim"};

    // Dosyadan metin oku
    if (file.is_open()) {
        string line;
        while (getline(file, line))
            text += line;
        file.close();
    } else {
        cout << "Dosya acilamadi." << endl;
        return 0;
    }

    // Her kelime için Boyer-Moore algoritmasýný uygula
    for (int i = 0; i < 5; i++)
        boyer_moore(words[i], text);

    return 0;
}

