#include <iostream>
#include <cstdlib>
#include <ctime>

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min_index])
      {
        min_index = j;
      }
    }

    // Troca o elemento mínimo encontrado com o primeiro elemento não ordenado
    int temp = arr[min_index];
    arr[min_index] = arr[i];
    arr[i] = temp;
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

  // Preencher o array em ordem crescente (melhor caso)
  for (int i = 0; i < num_samples; i++)
  {
    samples[i] = i;
  }

  // Tamanho do array
  int n = sizeof(samples) / sizeof(samples[0]);

  // Ordenar o array (melhor caso)
  selectionSort(samples, n);

  // Imprimir o array ordenado
  std::cout << "Best Case - Selection Sorted array: ";
  for (int i = 0; i < n; i++)
    std::cout << samples[i] << " ";
  std::cout << std::endl;

  return 0;
}