std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i < myVector.size(); ++i) { // Corrected condition
  std::cout << myVector[i] << " ";
}

//Or, even better, use iterators:
for (int& num : myVector) {
  std::cout << num << " ";
}

std::cout << std::endl; // Add a newline at the end