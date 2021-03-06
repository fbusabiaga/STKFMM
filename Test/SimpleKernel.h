#ifndef SIMPLEKERNEL_HPP
#define SIMPLEKERNEL_HPP

//                         3           3           3             4/16/9/7
void StokesSLPVel(double * s, double * t, double * f, double * pvel);
void StokesSLPVelGrad(double * s, double * t, double * f, double * pvelGrad);
void StokesSLTraction(double * s, double * t, double * f, double * traction);
void StokesSLPVelLaplacian(double * s, double * t, double * f, double * pvelLaplacian);


//                         3           3           9             4/16/
void StokesDLPVel(double * s, double * t, double * db, double * pvel);
void StokesDLPVelGrad(double * s, double * t, double * db, double * pvelGrad);
void StokesDLTraction(double * s, double * t, double * db, double * traction);
void StokesDLPVelLaplacian(double * s, double * t, double * db, double * pvelLaplacian);


void LaplaceSLPGrad(double * s, double * t, double * q, double * pgrad);
void LaplaceDLPGrad(double * s, double * t, double * db, double * pgrad);


#endif
