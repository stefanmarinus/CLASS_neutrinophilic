/* majoron-neutrino -- start */
double gamma_inc(int i, double x){
    double EulerGamma   = 0.57721566490153286061;
    if ( x > 0 && x <= 3){
        if (i == 0){
            return -EulerGamma + x - pow(x,2)/4. + pow(x,3)/18. - pow(x,4)/96. + pow(x,5)/600. - pow(x,6)/4320. + 
                    pow(x,7)/35280. - pow(x,8)/322560. + pow(x,9)/3.26592e6 - pow(x,10)/3.6288e7 - log(x);
        }
    }
    else if (x > 3 && x <= 5){
        if (i == 0){
            return 5.834520601770782e-16*(1.953423349544101e15 + 
                    x*(-3.428034992406528e15 + x*(3.10675979108352e15 + 
                    x*(-1.86890407903232e15 + x*(8.1081553158144e14 + 
                    x*(-2.62341545951232e14 + 
                    x*(6.4069535760384e13 + 
                    x*(-1.179453800448e13 + 
                    x*(1.61440792128e12 + 
                    x*(-1.5955022336e11 + x*(1.0773749184e10 + x*(-4.45303488e8 + 8.505425e6*x)))
                    )))))))));
        }
    }
    else if (x >5 && x<= 7){
        if (i == 0){
            return 4.9295369251460016e-17*(1.491648552304358e16 + 
                    x*(-2.0335317733195776e16 + x*(1.3575920980672512e16 + 
                    x*(-5.7939737923584e15 + x*(1.74089006289792e15 + 
                    x*(-3.84429314193408e14 + 
                    x*(6.3520555456512e13 + 
                    x*(-7.870384963584e12 + 
                    x*(7.227829422e11 + 
                    x*(-4.783185792e10 + x*(2.160054864e9 + x*(-5.9658336e7 + 760997.*x))))))))))
                    ));

        }
    }
    else if (x>7 && x <= 50){
        if (i == 0){
            return (-362880 + x*(40320 + x*(-5040 + x*(720 + x*(-120 + x*(24 + x*(-6 + x*(2 + (-1 + x)*x))))))))/
                    (pow(_E_,x)*pow(x,10));
        }
    }
    else{
        return 0;
    }
}
/* majoron-neutrino -- end */