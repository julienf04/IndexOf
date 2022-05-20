#include <iostream>
using namespace std;

int IndexOf(string s, string toSearch);

int IndexOf(string s, string toSearch)
{
    const int sLength = s.length();
    const int toSearchLength = toSearch.length();
    const int notExist = -1;
    if (toSearchLength > sLength)
        return notExist;


    for (int i = 0, currentOccurrence = 0; i <= (currentOccurrence == 0 ? (sLength - toSearchLength) : (sLength)); i++)
    {
        if (currentOccurrence < toSearchLength)
            if (s[i] == toSearch[currentOccurrence])
                currentOccurrence++;
            else
                currentOccurrence = 0;
        else
            return i - toSearchLength;
    }
    return notExist;
}

int main()
{
    string s = "Hola como estan todos me llamo julian jaja";
    string toSearch = "ola como estan todos me llamo julian jaja";

    int index = IndexOf(s, toSearch);
    cout << index << endl;

    system("pause");
}