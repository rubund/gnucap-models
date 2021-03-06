/**** BSIM4.2.0, Released by Xuemei Xi 04/06/2001 ****/

/**********
 * Copyright 2000 Regents of the University of California. All rights reserved.
 * File: b4getic.c of BSIM4.2.0.
 * Authors: Weidong Liu, Xuemei Xi, Kanyu M. Cao, Xiaodong Jin, Chenming Hu.
 * Project Director: Prof. Chenming Hu.
 *
 * Modified by Xuemei Xi, 04/06/2001.
 **********/

#include "spice.h"
#include <stdio.h>
#include "cktdefs.h"
#include "bsim4def.h"
#include "sperror.h"
#include "suffix.h"


int
BSIM4getic(inModel,ckt)
GENmodel *inModel;
CKTcircuit *ckt;
{
BSIM4model *model = (BSIM4model*)inModel;
BSIM4instance *here;

    for (; model ; model = model->BSIM4nextModel) 
    {    for (here = model->BSIM4instances; here; here = here->BSIM4nextInstance)
	 {    if (!here->BSIM4icVDSGiven) 
	      {   here->BSIM4icVDS = *(ckt->CKTrhs + here->BSIM4dNode) 
				   - *(ckt->CKTrhs + here->BSIM4sNode);
              }
              if (!here->BSIM4icVGSGiven) 
	      {   here->BSIM4icVGS = *(ckt->CKTrhs + here->BSIM4gNodeExt) 
				   - *(ckt->CKTrhs + here->BSIM4sNode);
              }
              if(!here->BSIM4icVBSGiven)
              {  here->BSIM4icVBS = *(ckt->CKTrhs + here->BSIM4bNode)
                                  - *(ckt->CKTrhs + here->BSIM4sNode);
              }
         }
    }
    return(OK);
}
