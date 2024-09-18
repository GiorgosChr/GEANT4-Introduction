#include <iostream>
#include "G4Types.hh"   // G4double etc.
#include "G4ios.hh"     // G4cout etc. Also includes the types
#include "globals.hh"

int main() {
    G4double x = 1.23;

    std::cout << "x = " << x << std::endl;
    G4cout    << "x = " << x << G4endl;

    return 0;
}