#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

void SearchValue()
{
    int LenghtRows = 0;
    int LenghtColumns = 0;

    std::cout << "Enter the length of the rows" << std::endl;
    cin >> LenghtRows;

    std::cout << "Enter the length of the columns" << std::endl;
    cin >> LenghtColumns;

    if (LenghtRows >= 15 && LenghtColumns >= 15) 
    {
        std::cout << "The size of the matrix is very large!!" << std::endl;
        return;
    }

    int Matris[20][20]{};
    
    int SaveIndexRows = 0;
    int SaveIndexColumns = 0;

    int SearchingValue = 0;

    bool bIsFindValue = false;

    srand(time(0));
    
    std::cout << "==================================" << endl;
    
    for (int i = 0; i <= LenghtRows -1; i++)
    {
        for (int j = 0; j <= LenghtColumns -1; j++) 
        {
            Matris[i][j] = 1 + rand() % 20;

            std::cout << setw(3) << Matris[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "==================================" << endl;

    std::cout << "What value do you want to Search? ";
    cin >> SearchingValue;

    std::cout << "==================================" << endl;
    
    for (int i = 0; i <= LenghtRows - 1; i++)                                                                                                                                                                                                                                   
    {
        for (int j = 0; j <= LenghtColumns -1; j++)
        {
            if (SearchingValue == Matris[i][j])
            {
                SaveIndexRows = i + 1;
                SaveIndexColumns = j + 1;

                bIsFindValue = true;

                if (bIsFindValue)
                {
                    std::cout << SearchingValue << " was found in the row " << SaveIndexRows << " in the column " << SaveIndexColumns;
                    std::cout << std::endl;
                }
            }
        }
    }

    if (!bIsFindValue)
    {
        std::cout << "Value not found!" << std::endl;
    }
}

int main()
{
    SearchValue();

    return 0;
}

