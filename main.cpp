#include <iostream>
using namespace std;
void imprimevetor (int *v)
{
  for(int i = 0; i < 5; i++ )
    {
      cout << "i = " << i << endl;
      cout << "v[i] = " << v[i] << endl;
    }
}
int main (int argc, char **argv)
{
  int v[5] = {1,2,3,4,5};
  imprimevetor(v);
}

