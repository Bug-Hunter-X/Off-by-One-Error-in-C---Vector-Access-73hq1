std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i <= myVector.size(); ++i) { // <= instead of < 
  std::cout << myVector[i] << " ";
}

//This will cause a segmentation fault because you are accessing the element at index 5, which is out of bounds.