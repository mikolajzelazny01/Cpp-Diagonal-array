#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

class Table {
    private:
        int tab[10][10];
    public:
        void Read_Data();
        void Process_Data();
        void Show_Table();
};

void Table::Read_Data() {
    srand(time(NULL));
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if (i == j) {
                tab[i][j] = rand()%10;
                //cout << "wylosowana liczba: " << tab[i][j];
            } else {
                tab[i][j] = 0;
            }
        }
    }
}

void Table::Process_Data() {
    int sum;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if (i == j) {
                sum = sum + tab[i][j];
            }
        }
    }
    cout << endl << endl << "Sum: " << sum << endl << endl;
}

void Table::Show_Table() {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout << tab[i][j] << " "; 
        }
        cout << endl;
    }
}

int main()
{
    Table t1;
    t1.Read_Data();
    
    t1.Process_Data();
    
    cout <<"\n\n";
    t1.Show_Table();

    return 0;
}
