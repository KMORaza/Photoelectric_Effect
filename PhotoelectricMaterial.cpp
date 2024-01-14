#include "PhotoelectricMaterial.h"
#include "Photon.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
PhotoelectricMaterial::PhotoelectricMaterial(double workFunction) : workFunction(workFunction) {
    // Initialize random seed
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}
double PhotoelectricMaterial::getWorkFunction() const {
    return workFunction;
}
bool PhotoelectricMaterial::interact(const Photon& photon) const {
    double probability = std::exp(-(photon.getFrequency() - workFunction) / (0.1 * workFunction));
    double randomValue = static_cast<double>(std::rand()) / RAND_MAX;
    return randomValue < probability;
}
