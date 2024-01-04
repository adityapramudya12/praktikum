#include "perhitungan.h"
using namespace std;

const double phi_07746 = 3.14;

double luas_kubus(double s_07746) {
    return 6 * s_07746 * s_07746;
}

double volume_kubus(double s_07746) {
    return s_07746 * s_07746 * s_07746;
}

double luas_balok(double p_07746, double l_07746, double t_07746) {
    return 2 * (p_07746 * l_07746 + p_07746 * t_07746 + l_07746 * t_07746);
}

double volume_balok(double p_07746, double l_07746, double t_07746) {
    return p_07746 * l_07746 * t_07746;
}

double luas_tabung(double j_07746, double t_07746) {
    double la_07746 = phi_07746 * j_07746 * j_07746;
    double ls_07746 = 2 * phi_07746 * j_07746 * t_07746;
    return 2 * la_07746 + ls_07746;
}

double volume_tabung(double j_07746, double t_07746) {
    return phi_07746 * j_07746 * j_07746 * t_07746;
}
