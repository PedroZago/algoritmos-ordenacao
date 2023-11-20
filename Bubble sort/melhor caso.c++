#include <iostream>
#include <cstdlib>
#include <ctime>

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        // Troca os elementos se estiverem fora de ordem
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{
  // Número de amostras
  const int num_samples = 100000;

  // Array para armazenar as amostras
  int samples[num_samples];

  // Preencher o array em ordem crescente
  for (int i = 0; i < num_samples; i++)
  {
    samples[i] = i;
  }

  // Tamanho do array
  int n = sizeof(samples) / sizeof(samples[0]);

  // Ordenar o array
  bubbleSort(samples, n);

  // Imprimir o array ordenado
  std::cout << "Bubble Sorted array: ";
  for (int i = 0; i < n; i++)
    std::cout << samples[i] << " ";
  std::cout << std::endl;

  return 0;
}
