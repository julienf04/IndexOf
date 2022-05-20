#include <iostream>
using namespace std;

// Return the zero-based index of the first occurrence of the specified string in the source string
int IndexOf(string source, string toSearch);

int IndexOf(string source, string toSearch)
{
    const int sourceLength = source.length();
    const int toSearchLength = toSearch.length();
    const int notExist = -1;
    if (toSearchLength > sourceLength)
        return notExist;


    for (int i = 0, currentOccurrence = 0; i <= (currentOccurrence == 0 ? (sourceLength - toSearchLength) : (sourceLength)); i++)
    {
        if (currentOccurrence < toSearchLength)
            if (source[i] == toSearch[currentOccurrence])
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
    string source = "Hello! julienf04 here";
    string toSearch = "jul";

    int index = IndexOf(source, toSearch);
    cout << index << endl;

    system("pause");
}