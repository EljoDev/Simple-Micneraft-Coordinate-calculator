#include <iostream>

void netherToOverWorld() {
  int x{0};
  int z{0};
  std::cout << "Please send X Coordinates >";
  std::cin >> x;
  std::cout << "Please send Z Coordinates >" ;
  std::cin >> z;
  std::string overX = std::to_string(x*8);
  std::string overZ = std::to_string(z*8);
  std::cout << "Over World Coordinates : " <<  overX << " " << overZ << '\n';
}

void OverWorldToNether() {
  int x{0};
  int z{0};
  std::cout << "Please send X Coordinates >";
  std::cin >> x;
  std::cout << "Please send Z Coordinates >" ;
  std::cin >> z;
  std::string overX = std::to_string(x/8);
  std::string overZ = std::to_string(z/8);
  std::cout << "Nether Coordinates : " <<  overX << " " << overZ << '\n';
}

void world(int worldNumber) {
  switch (worldNumber) {
    case 1:
      netherToOverWorld();
      break;
    case 2:
      OverWorldToNether();
      break;
    default:
      std::cout << "Error : please send 1 or 2" << '\n';
      break;
  }
}


int main() {
  int choice{0};
  std::cout << "If you want to convert nether Coordinate to Over World Coordinate type 1" << '\n';
  std::cout << "If you want to convert Over World Coordinate to nether Coordinate type 2" << '\n';
  std::cin >> choice;
  world(choice);
  return 0;
}
