#include <iostream>
#include <cstdlib>
#include <ctime>

void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int key = arr[i];
    int j = i - 1;

    // Move os elementos maiores que a chave para frente
    while (j >= 0 && arr[j] < key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }

    arr[j + 1] = key;
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

  // Preencher o array em ordem decrescente (pior caso)
  for (int i = 0; i < num_samples; i++)
  {
    samples[i] = num_samples - i;
  }

  // Tamanho do array
  int n = sizeof(samples) / sizeof(samples[0]);

  // Ordenar o array (pior caso)
  insertionSort(samples, n);

  // Imprimir o array ordenado
  std::cout << "Worst Case - Insertion Sorted array: ";
  for (int i = 0; i < n; i++)
    std::cout << samples[i] << " ";
  std::cout << std::endl;

  return 0;
}
