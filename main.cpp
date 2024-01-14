#include "Photon.h"
#include "Electron.h"
#include "PhotoelectricMaterial.h"
#include <iostream>
int main() {
    double photonFrequency;
    double workFunction;
    std::cout << "Enter the frequency of the incident photon (in Hz): ";
    std::cin >> photonFrequency;
    std::cout << "Enter the work function of the material (in eV): ";
    std::cin >> workFunction;
    Photon incidentPhoton(photonFrequency);
    PhotoelectricMaterial material(workFunction);
    Electron emittedElectron;
    if (material.interact(incidentPhoton)) {
        emittedElectron.absorbPhoton(incidentPhoton, material.getWorkFunction());
        std::cout << "Kinetic energy of emitted electron: " << emittedElectron.getKineticEnergy() << " J\n";
    } else {
        std::cout << "Photon did not interact with the material.\n";
    }
    return 0;
}
