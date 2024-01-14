#include "Electron.h"
#include "Photon.h"
#include <iostream>
#include <cmath>
Electron::Electron() : kineticEnergy(0.0) {}
double Electron::getKineticEnergy() const {
    return kineticEnergy;
}
void Electron::absorbPhoton(const Photon& photon, double workFunction) {
    double energy = 6.626e-34 * photon.getFrequency();  // Planck's constant * frequency
    if (energy > workFunction) {
        kineticEnergy = energy - workFunction;
        std::cout << "Photoelectric effect simulated successfully.\n";
    } else {
        std::cout << "Photon does not have enough energy to overcome the work function.\n";
    }
}
