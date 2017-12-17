#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string answer;
    ifstream inFile;
    char lineno;
    int k = 0, i = 0, sum = 0;
    char a[10] = {'b','a','c','c','a','d','a','b','a','a'};
    inFile.open("qa.txt");
    while (!inFile.eof()){
        while (k < 5)
        {
            getline(inFile, answer);
            cout << answer << endl;
            k++;
        }
        k = 0;
        cout << "Your answer is: ";
        cin >> lineno;
        if(lineno == a[i]){
            cout <<"RIGHT ANSWER! YOU GOT 1 POINT!" << endl << endl;
            sum+=1;
        }
        else cout << "WRONG ANSWER! " << endl << endl;
        i++;
    }
    cout << "Your final score is: "<< sum << "/10";
    inFile.close();
    return 0;
}
