#include <torch/torch.h>
#include <iostream>



int main() {
  torch::Tensor mytensor = torch::rand({2, 3});  // random tensor of 2 rows, 3 columns
  std::cout << mytensor << std::endl;

  return 0;
}