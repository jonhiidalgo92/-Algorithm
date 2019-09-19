#include <iostream>

using namespace std;



class Algoritmos
{
    public:

    void MenorArreglo(int m[], int n)
    {
        int actual = m[0];
        for(int i = 1; i < n-1 ; i++)
        {
            if(actual > m[i])
            {
                actual = m[i];
            }
        }
    cout<<actual<<endl;
    }
};

int main()
{
    int vect[] = {78,2,9,4,1,6,34,2,9};
    int j= sizeof(vect)/sizeof(int);

    Algoritmos *algo = new Algoritmos();


    //ENCONTRANDO EL VALOR MAS PEQUEÑO
    algo->MenorArreglo(vect,j);

    return 0;
}
