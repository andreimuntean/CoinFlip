#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(21);

    unsigned int heads = 0;
    unsigned int tails = 0;
    unsigned int consecutive_heads = 0;
    unsigned int consecutive_heads_max = 0;
    unsigned int consecutive_tails = 0;
    unsigned int consecutive_tails_max = 0;
    unsigned long long i = 0;

    while (consecutive_heads_max != 16 && consecutive_tails_max != 16)//for (i = 1;  i <= 1000000000;  ++i)
    {
        ++i;
        if (rand() % 2 == 0)
        {
            ++heads;
            ++consecutive_heads;
            if (consecutive_tails > consecutive_tails_max)
                consecutive_tails_max = consecutive_tails;
            consecutive_tails = 0;
        }
        else
        {
            ++tails;
            ++consecutive_tails;
            if (consecutive_heads > consecutive_heads_max)
                consecutive_heads_max = consecutive_heads;
            consecutive_heads = 0;
        }
    }
    cout << "In " << i-1 << " iterations there have been:";
    cout << endl << "  " << heads << " heads";
    cout << endl << "  " << tails << " tails";
    cout << endl << endl << "The maximum number of consecutive heads was " << consecutive_heads_max;
    cout << endl << "The maximum number of consecutive tails was " << consecutive_tails_max << endl;

    return 0;
}
