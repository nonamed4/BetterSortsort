#include <iostream>

int smallesti(int list[], int size);
int biggesti(int list[], int size);

int main()
{
    int a;
    int list[] = {46, 84, 122, 6384, 31762, 2, 5, -3, 55, 2};
    int size = sizeof(list)/sizeof(list[0]);
    int sorted[size];
    std::cout << list[smallesti(list, size)] << '\n';
    std::cout << list[biggesti(list, size)] << '\n';
    for (int i = 0; i < size; i++)
    {
        a = list[smallesti(list, size)];
        sorted[i] = a;
        list[smallesti(list, size)] = list[biggesti(list, size)]+1;
    }
    for (int element : sorted)
    {
        std::cout << element << '\n';
    }
    
    return 0;
}

int smallesti(int list[], int size)
{
    int smallest = 0;
    for (int i = 1; i < size; i++)
    {
       if (list[i] < list[smallest])
       {
          smallest = i;
       }
        
    }
    return smallest;
}

int biggesti(int list[], int size)
{
    int biggest = 0;
    for (int i = 1; i < size; i++)
    {
       if (list[i] > list[biggest])
       {
          biggest = i;
       }
        
    }
    return biggest;
}