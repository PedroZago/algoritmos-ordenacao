#include <iostream>
#include <cstdlib>
#include <ctime>

void improvedBubbleSort(int arr[], int n)
{
  bool swapped;
  for (int i = 0; i < n - 1; i++)
  {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        // Troca os elementos se estiverem fora de ordem
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }

    // Se nenhum elemento foi trocado, o array está ordenado
    if (!swapped)
      break;
  }
}

int main()
{
  // Número de amostras
  const int num_samples = 1000;

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
  improvedBubbleSort(samples, n);

  // Imprimir o array ordenado
  std::cout << "Improved Bubble Sorted array (Melhor Caso): ";
  for (int i = 0; i < n; i++)
    std::cout << samples[i] << " ";
  std::cout << std::endl;

  return 0;
}