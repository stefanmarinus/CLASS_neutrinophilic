/* majoron-neutrino -- start */
double bessel(int i, double x){
  double EulerGamma   = 0.57721566490153286061;
  if (x > 0 && x < 2.5){
    if (i == 1){
      return 1/x + (x*(-1 + 2*EulerGamma - log(4) + 2*log(x)))/4. + 
            (pow(x,5)*(-5 + 3*EulerGamma - log(8) + 3*log(x)))/1152. + 
            (pow(x,3)*(-5 + 4*EulerGamma - 4*log(2) + 4*log(x)))/64. + 
            (pow(x,7)*(-47 + 24*EulerGamma - 24*log(2) + 24*log(x)))/442368. + 
            (pow(x,9)*(-131 + 60*EulerGamma - 60*log(2) + 60*log(x)))/8.84736e7;
    }
    else if (i == 2){
      return -0.5 + 2/pow(x,2) + (pow(x,8)*
            (247 - 120*EulerGamma + 120*log(2) - 120*log(x)))
            /2.21184e7 + (pow(x,6)*
            (43 - 24*EulerGamma + 24*log(2) - 24*log(x)))/
            73728. + (pow(x,10)*
            (34 - 15*EulerGamma + 15*log(2) - 15*log(x)))/
            2.654208e8 + (pow(x,4)*
            (17 - 12*EulerGamma + log(4096) - 12*log(x)))/
            1152. + (pow(x,2)*
            (3 - 4*EulerGamma + log(16) - 4*log(x)))/32.;
    }
    else if (i==3){
      return 8/pow(x,3) - 1/x + x/8. + (pow(x,3)*(-11 + 12*EulerGamma - 12*log(2) + 12*log(x)))/576. + 
            (pow(x,5)*(-37 + 24*EulerGamma - 24*log(2) + 24*log(x)))/18432. + 
            (pow(x,9)*(-257 + 120*EulerGamma - 120*log(2) + 120*log(x)))/2.654208e8 + 
            (pow(x,7)*(-227 + 120*EulerGamma - 120*log(2) + 120*log(x)))/3.6864e6;
    }
    else{
      printf(" >> Bessel function of 4. and higher kind not coded. << \n");
      return 0;
    }  
  }
  else if (x >= 2.5 && x < 150){
    if (i == 1){
      return (sqrt(_PI_/2.)*(468131288625 + 8*x*(-14783093325 + 
            64*x*(66891825 + 8*x*(-2837835 + 
            16*x*(72765 + 8*x*(-4725 + 32*x*(105 + 8*x*(-15 + 16*x*(3 + 8*x))))))))))/
            (1.7179869184e10*pow(_E_,x)*pow(x,9.5));

    }
    else if (i == 2){
      return (sqrt(_PI_/2.)*(-655383804075 + 8*x*(21606059475 + 
              64*x*(-103378275 + 8*x*(4729725 + 
              16*x*(-135135 + 8*x*(10395 + 32*x*(-315 + 8*x*(105 + 16*x*(15 + 8*x))))))))))/
              (1.7179869184e10*pow(_E_,x)*pow(x,9.5));

    }
    else if (i==3){
      return (sqrt(_PI_/2.)*(1159525191825 + 8*x*(-41247931725 + 
            64*x*(218243025 + 8*x*(-11486475 + 
            16*x*(405405 + 8*x*(-45045 + 32*x*(3465 + 8*x*(945 + 16*x*(35 + 8*x))))))))))/
            (1.7179869184e10*pow(_E_,x)*pow(x,9.5));
    }
    else{
      printf(" >> Bessel function of 4. and higher kind not coded. << \n");
      return 0;
    }
  }
  else{
    if ( x < 0. ){
      printf(" >> Bessel function argument is < 0 in bkg. << \n");
      return 0.;
    }
    else{
      return 0.;
    }
  }
}

double polylog(int i, double x){
  double zeta_3 = 1.2020569031595942854;
  x*= -1;
  double y=x;
  if (y > 0 && y < 0.8){
    if (i == 2){
      return -x + pow(x,2)/4. - pow(x,3)/9. + pow(x,4)/16. - pow(x,5)/25. + pow(x,6)/36. - pow(x,7)/49. + 
            pow(x,8)/64. - pow(x,9)/81. + pow(x,10)/100. - pow(x,11)/121. + pow(x,12)/144.;
    }
    else if (i ==3){
      return -x + pow(x,2)/8. - pow(x,3)/27. + pow(x,4)/64. - pow(x,5)/125. + pow(x,6)/216. - 
            pow(x,7)/343. + pow(x,8)/512. - pow(x,9)/729. + pow(x,10)/1000. - pow(x,11)/1331. + 
            pow(x,12)/1728.;
    }
    else if (i==4){
      return -x + pow(x,2)/16. - pow(x,3)/81. + pow(x,4)/256. - pow(x,5)/625. + pow(x,6)/1296. - 
            pow(x,7)/2401. + pow(x,8)/4096. - pow(x,9)/6561. + pow(x,10)/10000. - pow(x,11)/14641. + 
            pow(x,12)/20736.;
    }
    else{
      printf(" >> Polylog function of 5. and higher order not coded. <<\n");
      return 0;
    }
  }
  else if (y >= 0.8 && y<= 1.2){
    if (i == 2){
      return -0.08333333333333333*pow(_PI_,2) + ((-1 + x)*
              (-((-1 + x)*(565654947 + x*(-1984456806 + 
              x*(5098289841 + x*(-9414712412 + 
              x*(12568736810 + x*(-12181117992 + 
              x*(8510284606 + 
              x*(-4185686596 + x*(1377612627 + 25*x*(-10910114 + 983705*x))))))))))) + 
              15360*(-86021 + x*(246619 + x*(-668141 + 
              x*(1364659 + x*(-2065691 + 
              x*(2325157 + x*(-1943723 + 
              7*x*(170371 + 2*x*(-37327 + 3*x*(3691 - 665*x + 55*pow(x,2)))))))))))*
              log(2)))/4.257792e8;

    }
    else if (i==3){
      return -0.08333333333333333*(pow(_PI_,2)*(-1 + x)) + 
            (pow(-1 + x,12)*(270531161 + 17740800*pow(_PI_,2) - 642900480*log(2)))/2.5546752e9 - 
            (pow(-1 + x,11)*(23374351 + 1612800*pow(_PI_,2) - 56686080*log(2)))/2.128896e8 + 
            (pow(-1 + x,10)*(2203321 + 161280*pow(_PI_,2) - 5475072*log(2)))/1.93536e7 - 
            (pow(-1 + x,9)*(42799 + 3360*pow(_PI_,2) - 109584*log(2)))/362880. + 
            (pow(-1 + x,8)*(19655 + 1680*pow(_PI_,2) - 52272*log(2)))/161280. - 
            (pow(-1 + x,7)*(5047 + 480*pow(_PI_,2) - 14112*log(2)))/40320. + 
            (pow(-1 + x,6)*(731 + 80*pow(_PI_,2) - 2192*log(2)))/5760. - 
            (pow(-1 + x,5)*(15 + 2*pow(_PI_,2) - 50*log(2)))/120. + 
            (pow(-1 + x,4)*(11 + 2*pow(_PI_,2) - 44*log(2)))/96. - 
            (pow(-1 + x,3)*(3 + pow(_PI_,2) - 18*log(2)))/36. + 
            (pow(-1 + x,2)*(pow(_PI_,2) - 12*log(2)))/24. - (3*zeta_3)/4.;
    }
    else if (i==4){
      return (-37255680*pow(_PI_,4) + 6*pow(-1 + x,11)*
            (53918563 + 14171520*pow(_PI_,2) - 204057216*log(2) - 43545600*zeta_3) + 
            2640*pow(-1 + x,9)*(112391 + 36528*pow(_PI_,2) - 472496*log(2) - 120960*zeta_3) + 
            95040*pow(-1 + x,7)*(2591 + 1176*pow(_PI_,2) - 12992*log(2) - 4320*zeta_3) + 
            2661120*pow(-1 + x,5)*(57 + 50*pow(_PI_,2) - 420*log(2) - 216*zeta_3) - 
            159667200*pow(-1 + x,2)*(pow(_PI_,2) - 9*zeta_3) + 
            159667200*pow(-1 + x,3)*(pow(_PI_,2) - 4*log(2) - 6*zeta_3) - 2874009600*(-1 + x)*zeta_3 + 
            13305600*pow(-1 + x,4)*(-6 - 11*pow(_PI_,2) + 72*log(2) + 54*zeta_3) + 
            pow(-1 + x,12)*(-331613623 - 80362560*pow(_PI_,2) + 1207343808*log(2) + 239500800*zeta_3) + 
            443520*pow(-1 + x,6)*(-274*pow(_PI_,2) + 15*(-31 + 180*log(2) + 72*zeta_3)) + 
            95040*pow(-1 + x,8)*(-1089*pow(_PI_,2) + 14*(-207 + 938*log(2) + 270*zeta_3)) + 
            264*pow(-1 + x,10)*(-342192*pow(_PI_,2) + 5*(-236543 + 938160*log(2) + 217728*zeta_3)))/
            3.8320128e9;
    }
    else{
      printf(" >> Polylog function of 5. and higher order not coded. << \n");
      return 0;
    }
  }
  else if (y > 1.2){
    if (i==2){
      return (-5336100 + x*(6350400 - 121*x*(63504 + x*(-78400 + 
              9*x*(11025 + 4*x*(-3600 + 49*x*
              (100 + x*(-144 + 25*x*(9 + 4*x*(-4 + 3*x*(3 + 2*x*(-6 + pow(_PI_,2)*x))))))))))))/
              (7.683984e8*pow(x,12)) - pow(log(x),2)/2.;
    }
    else if (i == 3){
      return 1/(1728.*pow(x,12)) - 1/(1331.*pow(x,11)) + 1/(1000.*pow(x,10)) - 1/(729.*pow(x,9)) + 
            1/(512.*pow(x,8)) - 1/(343.*pow(x,7)) + 1/(216.*pow(x,6)) - 1/(125.*pow(x,5)) + 
            1/(64.*pow(x,4)) - 1/(27.*pow(x,3)) + 1/(8.*pow(x,2)) - 1/x - 
            (log(x)*(pow(_PI_,2) + pow(log(x),2)))/6.;
    }
    else if (i==4){
      return (-7*pow(_PI_,4))/360. - 1/(20736.*pow(x,12)) + 1/(14641.*pow(x,11)) - 1/(10000.*pow(x,10)) + 
            1/(6561.*pow(x,9)) - 1/(4096.*pow(x,8)) + 1/(2401.*pow(x,7)) - 1/(1296.*pow(x,6)) + 
            1/(625.*pow(x,5)) - 1/(256.*pow(x,4)) + 1/(81.*pow(x,3)) - 1/(16.*pow(x,2)) + 1/x - 
            (pow(log(x),2)*(2*pow(_PI_,2) + pow(log(x),2)))/24.;
    }
    else{
      printf(" >> Polylog function of 5. and higher order not coded. << \n");
      return 0;
    }
  }
  else{
    printf(" >> Polylog with positive argument in general is complex and not coded. << \n");
    return 0;
  }
}
/* majoron-neutrino -- end */