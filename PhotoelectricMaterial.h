#ifndef PHOTOELECTRIC_MATERIAL_H
#define PHOTOELECTRIC_MATERIAL_H
#include "Photon.h"
class PhotoelectricMaterial {
private:
    double workFunction;
public:
    PhotoelectricMaterial(double workFunction);
    double getWorkFunction() const;
    bool interact(const Photon& photon) const;
};
#endif
