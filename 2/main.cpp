#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

/*char get_num()
{
    srand(time(nullptr));
    switch (rand()%2)
    {
        case 0: return '0';
        case 1: return '1';
    }
}*/

int main() {
    ofstream pic ("../pic.txt");

    if (pic.is_open())
    {
        cout << "Input range of picture" << endl;
        int height=0, width=0;
        cout << "height: " << endl;
        cin >> height;
        cout << "width: " << endl;
        cin >> width;

        for (int i=0; i < height; i++)
        {
            for (int j=0; j < width; j++)
            {
                switch (rand()%2)
                {
                    case 0: pic << '0' << " "; break;
                    case 1: pic << '1' << " "; break;
                }
            }
            pic << endl;
        }
        pic.close();
    }
    else cout << "File doesn't open" << endl;

}
