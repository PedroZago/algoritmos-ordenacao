#include <iostream>
#include <cstdlib>
#include <ctime>

void heapify(int arr[], int n, int i)
{
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

  if (largest != i)
  {
    std::swap(arr[i], arr[largest]);

    heapify(arr, n, largest);
  }
}

void heapSort(int arr[], int n)
{
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  for (int i = n - 1; i > 0; i--)
  {
    std::swap(arr[0], arr[i]);
    heapify(arr, i, 0);
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

  // Preencher o array com números em ordem crescente (pior caso)
  for (int i = 0; i < num_samples; i++)
  {
    samples[i] = i;
  }

  // Tamanho do array
  int n = sizeof(samples) / sizeof(samples[0]);

  // Ordenar o array
  heapSort(samples, n);

  // Imprimir o array ordenado
  std::cout << "Worst Case - Heap Sorted array: ";
  for (int i = 0; i < n; i++)
    std::cout << samples[i] << " ";
  std::cout << std::endl;

  return 0;
}
