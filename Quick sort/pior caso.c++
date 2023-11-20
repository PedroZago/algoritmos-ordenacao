#include <iostream>
#include <cstdlib>
#include <ctime>

int partition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      std::swap(arr[i], arr[j]);
    }
  }

  std::swap(arr[i + 1], arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(arr, low, high);

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main()
{
  // Configuração da semente para geração de números aleatórios
  std::srand(std::time(0));

  // Número de amostras
  const int num_samples = 1000;

  // Array para armazenar as amostras
  int samples[num_samples];

  // Preencher o array em ordem crescente (pior caso)
  for (int i = 0; i < num_samples; i++)
  {
    samples[i] = i;
  }

  // Tamanho do array
  int n = sizeof(samples) / sizeof(samples[0]);

  // Ordenar o array (pior caso)
  quickSort(samples, 0, n - 1);

  // Imprimir o array ordenado
  std::cout << "Worst Case - Quick Sorted array: ";
  for (int i = 0; i < n; i++)
    std::cout << samples[i] << " ";
  std::cout << std::endl;

  return 0;
}