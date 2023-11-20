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
    while (j >= 0 && arr[j] > key)
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

  // Preencher o array com números aleatórios
  for (int i = 0; i < num_samples; i++)
  {
    samples[i] = std::rand() % 1000; // Números aleatórios entre 0 e 999
  }

  // Tamanho do array
  int n = sizeof(samples) / sizeof(samples[0]);

  // Ordenar o array
  insertionSort(samples, n);

  // Imprimir o array ordenado
  std::cout << "Insertion Sorted array: ";
  for (int i = 0; i < n; i++)
    std::cout << samples[i] << " ";
  std::cout << std::endl;

  return 0;
}
