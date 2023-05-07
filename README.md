[![arXiv](https://img.shields.io/badge/arXiv-2305.01692-B31B1B.svg)](http://arxiv.org/abs/2305.01692) [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT) 

CLASS with neutrinos interacting with eV scale bosons
-----------------------------------

Calculates the cosmic evolution of a joined eV scale boson - neutrino system as described in [arXiv:2305.01692](http://arxiv.org/abs/2305.01692).

## Installation


The installation is the same as for the standard CLASS module.



## Documentation


### Input Variables

We only summarize the most important input variables.
A complete list can be found in majoron.ini.

| Variable | Description |
| ------ | ----------- |
| mass_maj | Majoron mass in <img src="https://render.githubusercontent.com/render/math?math=\log_{10}(m_{\phi}/eV)"> . |
| N_nu_maj_int | Integer number of interacting neutrinos. |
| gamma_eff_maj or lambda_maj | Interaction strength of the majoron-neutrino system |
| Neff_nu    | Equivalent to N_ur of class. |
| delta_neff_majoron            |     Sets the initial majoron-to-photon temperature.              |
| gphi  | Internal degrees of freedom of the majoron. |

"gamma_eff_maj" is defined as in eq. (4.4) of 2001.04466.

### Relative Changes to Class v2.10.1

All changes are flagged by 

    /* majoron-neutrino -- start */
    code  
    /* majoron-neutrino -- end */


#### input.c

The complete list of readable input variables and their default values.
The closure condition is modified with the majoron energy density.

#### background.c

The differential equations eqs. for the joined majoron-neutrino fluid are solved around lines 2600 - 2800.
Most importantly the accuracy of the class default ODE solver has to be increased, done around lines 1860 - 1900.
The intitial conditions are fixed around lines 2200 - 2240.
The modification of the hubble parameter is done around lines 480-530.


#### perturbations.c

The perturbations are coded within the ultra relativistic limit.
However, they take the variation of the sound speed and the time dependent equation of state of the majoron into account.
The relevant interaction part is coded in the lines 9000 - 9200.


#### background.h and perturbations.h

Variables are declared.

#### common.h

We define some shared constants to change from natural units to class units.


## Citation

If you use the code, please link this repository, and cite [arXiv:2305.01692](http://arxiv.org/abs/2305.01692).

## Contact

For any type of comments, questions etc. feel free to contact us at <stefan.sandner@ific.uv.es> :otter:.
