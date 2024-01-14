#ifndef ELECTRON_H
#define ELECTRON_H
#include "Photon.h"
class Electron {
private:
    double kineticEnergy;
public:
    Electron();
    double getKineticEnergy() const;
    void absorbPhoton(const Photon& photon, double workFunction);
};
#endif
