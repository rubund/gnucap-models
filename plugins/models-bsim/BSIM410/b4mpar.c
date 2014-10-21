/**** BSIM4.1.0, Released by Weidong Liu 10/11/2000 ****/

/**********
 * Copyright 2000 Regents of the University of California. All rights reserved.
 * File: b4mpar.c of BSIM4.1.0.
 * Authors: Weidong Liu, Kanyu M. Cao, Xiaodong Jin, Chenming Hu.
 * Project Director: Prof. Chenming Hu.
 *
 * Modified by Weidong Liu, 10/11/2000.
 **********/

#include "spice.h"
#include <stdio.h>
#include "util.h"
#include "bsim4def.h"
#include "ifsim.h"
#include "sperror.h"
#include "suffix.h"
#include "const.h"

int
BSIM4mParam(param,value,inMod)
int param;
IFvalue *value;
GENmodel *inMod;
{
    BSIM4model *mod = (BSIM4model*)inMod;
    switch(param)
    {   case  BSIM4_MOD_MOBMOD :
            mod->BSIM4mobMod = value->iValue;
            mod->BSIM4mobModGiven = TRUE;
            break;
        case  BSIM4_MOD_BINUNIT :
            mod->BSIM4binUnit = value->iValue;
            mod->BSIM4binUnitGiven = TRUE;
            break;
        case  BSIM4_MOD_PARAMCHK :
            mod->BSIM4paramChk = value->iValue;
            mod->BSIM4paramChkGiven = TRUE;
            break;
        case  BSIM4_MOD_CAPMOD :
            mod->BSIM4capMod = value->iValue;
            mod->BSIM4capModGiven = TRUE;
            break;
        case  BSIM4_MOD_DIOMOD :
            mod->BSIM4dioMod = value->iValue;
            mod->BSIM4dioModGiven = TRUE;
            break;
        case  BSIM4_MOD_RDSMOD :
            mod->BSIM4rdsMod = value->iValue;
            mod->BSIM4rdsModGiven = TRUE;
            break;
        case  BSIM4_MOD_TRNQSMOD :
            mod->BSIM4trnqsMod = value->iValue;
            mod->BSIM4trnqsModGiven = TRUE;
            break;
        case  BSIM4_MOD_ACNQSMOD :
            mod->BSIM4acnqsMod = value->iValue;
            mod->BSIM4acnqsModGiven = TRUE;
            break;
        case  BSIM4_MOD_RBODYMOD :
            mod->BSIM4rbodyMod = value->iValue;
            mod->BSIM4rbodyModGiven = TRUE;
            break;
        case  BSIM4_MOD_RGATEMOD :
            mod->BSIM4rgateMod = value->iValue;
            mod->BSIM4rgateModGiven = TRUE;
            break;
        case  BSIM4_MOD_PERMOD :
            mod->BSIM4perMod = value->iValue;
            mod->BSIM4perModGiven = TRUE;
            break;
        case  BSIM4_MOD_GEOMOD :
            mod->BSIM4geoMod = value->iValue;
            mod->BSIM4geoModGiven = TRUE;
            break;
        case  BSIM4_MOD_FNOIMOD :
            mod->BSIM4fnoiMod = value->iValue;
            mod->BSIM4fnoiModGiven = TRUE;
            break;
        case  BSIM4_MOD_TNOIMOD :
            mod->BSIM4tnoiMod = value->iValue;
            mod->BSIM4tnoiModGiven = TRUE;
            break;
        case  BSIM4_MOD_IGCMOD :
            mod->BSIM4igcMod = value->iValue;
            mod->BSIM4igcModGiven = TRUE;
            break;
        case  BSIM4_MOD_IGBMOD :
            mod->BSIM4igbMod = value->iValue;
            mod->BSIM4igbModGiven = TRUE;
            break;
        case  BSIM4_MOD_VERSION :
            mod->BSIM4version = value->sValue;
            mod->BSIM4versionGiven = TRUE;
            break;
        case  BSIM4_MOD_TOXREF :
            mod->BSIM4toxref = value->rValue;
            mod->BSIM4toxrefGiven = TRUE;
            break;
        case  BSIM4_MOD_TOXE :
            mod->BSIM4toxe = value->rValue;
            mod->BSIM4toxeGiven = TRUE;
            break;
        case  BSIM4_MOD_TOXP :
            mod->BSIM4toxp = value->rValue;
            mod->BSIM4toxpGiven = TRUE;
            break;
        case  BSIM4_MOD_TOXM :
            mod->BSIM4toxm = value->rValue;
            mod->BSIM4toxmGiven = TRUE;
            break;
        case  BSIM4_MOD_DTOX :
            mod->BSIM4dtox = value->rValue;
            mod->BSIM4dtoxGiven = TRUE;
            break;
        case  BSIM4_MOD_EPSROX :
            mod->BSIM4epsrox = value->rValue;
            mod->BSIM4epsroxGiven = TRUE;
            break;

        case  BSIM4_MOD_CDSC :
            mod->BSIM4cdsc = value->rValue;
            mod->BSIM4cdscGiven = TRUE;
            break;
        case  BSIM4_MOD_CDSCB :
            mod->BSIM4cdscb = value->rValue;
            mod->BSIM4cdscbGiven = TRUE;
            break;

        case  BSIM4_MOD_CDSCD :
            mod->BSIM4cdscd = value->rValue;
            mod->BSIM4cdscdGiven = TRUE;
            break;

        case  BSIM4_MOD_CIT :
            mod->BSIM4cit = value->rValue;
            mod->BSIM4citGiven = TRUE;
            break;
        case  BSIM4_MOD_NFACTOR :
            mod->BSIM4nfactor = value->rValue;
            mod->BSIM4nfactorGiven = TRUE;
            break;
        case BSIM4_MOD_XJ:
            mod->BSIM4xj = value->rValue;
            mod->BSIM4xjGiven = TRUE;
            break;
        case BSIM4_MOD_VSAT:
            mod->BSIM4vsat = value->rValue;
            mod->BSIM4vsatGiven = TRUE;
            break;
        case BSIM4_MOD_A0:
            mod->BSIM4a0 = value->rValue;
            mod->BSIM4a0Given = TRUE;
            break;
        
        case BSIM4_MOD_AGS:
            mod->BSIM4ags= value->rValue;
            mod->BSIM4agsGiven = TRUE;
            break;
        
        case BSIM4_MOD_A1:
            mod->BSIM4a1 = value->rValue;
            mod->BSIM4a1Given = TRUE;
            break;
        case BSIM4_MOD_A2:
            mod->BSIM4a2 = value->rValue;
            mod->BSIM4a2Given = TRUE;
            break;
        case BSIM4_MOD_AT:
            mod->BSIM4at = value->rValue;
            mod->BSIM4atGiven = TRUE;
            break;
        case BSIM4_MOD_KETA:
            mod->BSIM4keta = value->rValue;
            mod->BSIM4ketaGiven = TRUE;
            break;    
        case BSIM4_MOD_NSUB:
            mod->BSIM4nsub = value->rValue;
            mod->BSIM4nsubGiven = TRUE;
            break;
        case BSIM4_MOD_NDEP:
            mod->BSIM4ndep = value->rValue;
            mod->BSIM4ndepGiven = TRUE;
	    if (mod->BSIM4ndep > 1.0e20)
		mod->BSIM4ndep *= 1.0e-6;
            break;
        case BSIM4_MOD_NSD:
            mod->BSIM4nsd = value->rValue;
            mod->BSIM4nsdGiven = TRUE;
            if (mod->BSIM4nsd > 1.0e23)
                mod->BSIM4nsd *= 1.0e-6;
            break;
        case BSIM4_MOD_NGATE:
            mod->BSIM4ngate = value->rValue;
            mod->BSIM4ngateGiven = TRUE;
	    if (mod->BSIM4ngate > 1.0e23)
		mod->BSIM4ngate *= 1.0e-6;
            break;
        case BSIM4_MOD_GAMMA1:
            mod->BSIM4gamma1 = value->rValue;
            mod->BSIM4gamma1Given = TRUE;
            break;
        case BSIM4_MOD_GAMMA2:
            mod->BSIM4gamma2 = value->rValue;
            mod->BSIM4gamma2Given = TRUE;
            break;
        case BSIM4_MOD_VBX:
            mod->BSIM4vbx = value->rValue;
            mod->BSIM4vbxGiven = TRUE;
            break;
        case BSIM4_MOD_VBM:
            mod->BSIM4vbm = value->rValue;
            mod->BSIM4vbmGiven = TRUE;
            break;
        case BSIM4_MOD_XT:
            mod->BSIM4xt = value->rValue;
            mod->BSIM4xtGiven = TRUE;
            break;
        case  BSIM4_MOD_K1:
            mod->BSIM4k1 = value->rValue;
            mod->BSIM4k1Given = TRUE;
            break;
        case  BSIM4_MOD_KT1:
            mod->BSIM4kt1 = value->rValue;
            mod->BSIM4kt1Given = TRUE;
            break;
        case  BSIM4_MOD_KT1L:
            mod->BSIM4kt1l = value->rValue;
            mod->BSIM4kt1lGiven = TRUE;
            break;
        case  BSIM4_MOD_KT2:
            mod->BSIM4kt2 = value->rValue;
            mod->BSIM4kt2Given = TRUE;
            break;
        case  BSIM4_MOD_K2:
            mod->BSIM4k2 = value->rValue;
            mod->BSIM4k2Given = TRUE;
            break;
        case  BSIM4_MOD_K3:
            mod->BSIM4k3 = value->rValue;
            mod->BSIM4k3Given = TRUE;
            break;
        case  BSIM4_MOD_K3B:
            mod->BSIM4k3b = value->rValue;
            mod->BSIM4k3bGiven = TRUE;
            break;
        case  BSIM4_MOD_LPE0:
            mod->BSIM4lpe0 = value->rValue;
            mod->BSIM4lpe0Given = TRUE;
            break;
        case  BSIM4_MOD_LPEB:
            mod->BSIM4lpeb = value->rValue;
            mod->BSIM4lpebGiven = TRUE;
            break;
        case  BSIM4_MOD_DVTP0:
            mod->BSIM4dvtp0 = value->rValue;
            mod->BSIM4dvtp0Given = TRUE;
            break;
        case  BSIM4_MOD_DVTP1:
            mod->BSIM4dvtp1 = value->rValue;
            mod->BSIM4dvtp1Given = TRUE;
            break;
        case  BSIM4_MOD_W0:
            mod->BSIM4w0 = value->rValue;
            mod->BSIM4w0Given = TRUE;
            break;
        case  BSIM4_MOD_DVT0:               
            mod->BSIM4dvt0 = value->rValue;
            mod->BSIM4dvt0Given = TRUE;
            break;
        case  BSIM4_MOD_DVT1:             
            mod->BSIM4dvt1 = value->rValue;
            mod->BSIM4dvt1Given = TRUE;
            break;
        case  BSIM4_MOD_DVT2:             
            mod->BSIM4dvt2 = value->rValue;
            mod->BSIM4dvt2Given = TRUE;
            break;
        case  BSIM4_MOD_DVT0W:               
            mod->BSIM4dvt0w = value->rValue;
            mod->BSIM4dvt0wGiven = TRUE;
            break;
        case  BSIM4_MOD_DVT1W:             
            mod->BSIM4dvt1w = value->rValue;
            mod->BSIM4dvt1wGiven = TRUE;
            break;
        case  BSIM4_MOD_DVT2W:             
            mod->BSIM4dvt2w = value->rValue;
            mod->BSIM4dvt2wGiven = TRUE;
            break;
        case  BSIM4_MOD_DROUT:             
            mod->BSIM4drout = value->rValue;
            mod->BSIM4droutGiven = TRUE;
            break;
        case  BSIM4_MOD_DSUB:             
            mod->BSIM4dsub = value->rValue;
            mod->BSIM4dsubGiven = TRUE;
            break;
        case BSIM4_MOD_VTH0:
            mod->BSIM4vth0 = value->rValue;
            mod->BSIM4vth0Given = TRUE;
            break;
        case BSIM4_MOD_EU:
            mod->BSIM4eu = value->rValue;
            mod->BSIM4euGiven = TRUE;
            break;
        case BSIM4_MOD_UA:
            mod->BSIM4ua = value->rValue;
            mod->BSIM4uaGiven = TRUE;
            break;
        case BSIM4_MOD_UA1:
            mod->BSIM4ua1 = value->rValue;
            mod->BSIM4ua1Given = TRUE;
            break;
        case BSIM4_MOD_UB:
            mod->BSIM4ub = value->rValue;
            mod->BSIM4ubGiven = TRUE;
            break;
        case BSIM4_MOD_UB1:
            mod->BSIM4ub1 = value->rValue;
            mod->BSIM4ub1Given = TRUE;
            break;
        case BSIM4_MOD_UC:
            mod->BSIM4uc = value->rValue;
            mod->BSIM4ucGiven = TRUE;
            break;
        case BSIM4_MOD_UC1:
            mod->BSIM4uc1 = value->rValue;
            mod->BSIM4uc1Given = TRUE;
            break;
        case  BSIM4_MOD_U0 :
            mod->BSIM4u0 = value->rValue;
            mod->BSIM4u0Given = TRUE;
            break;
        case  BSIM4_MOD_UTE :
            mod->BSIM4ute = value->rValue;
            mod->BSIM4uteGiven = TRUE;
            break;
        case BSIM4_MOD_VOFF:
            mod->BSIM4voff = value->rValue;
            mod->BSIM4voffGiven = TRUE;
            break;
        case BSIM4_MOD_VOFFL:
            mod->BSIM4voffl = value->rValue;
            mod->BSIM4vofflGiven = TRUE;
            break;
        case BSIM4_MOD_MINV:
            mod->BSIM4minv = value->rValue;
            mod->BSIM4minvGiven = TRUE;
            break;
        case BSIM4_MOD_FPROUT:
            mod->BSIM4fprout = value->rValue;
            mod->BSIM4fproutGiven = TRUE;
            break;
        case BSIM4_MOD_PDITS:
            mod->BSIM4pdits = value->rValue;
            mod->BSIM4pditsGiven = TRUE;
            break;
        case BSIM4_MOD_PDITSD:
            mod->BSIM4pditsd = value->rValue;
            mod->BSIM4pditsdGiven = TRUE;
            break;
        case BSIM4_MOD_PDITSL:
            mod->BSIM4pditsl = value->rValue;
            mod->BSIM4pditslGiven = TRUE;
            break;
        case  BSIM4_MOD_DELTA :
            mod->BSIM4delta = value->rValue;
            mod->BSIM4deltaGiven = TRUE;
            break;
        case BSIM4_MOD_RDSW:
            mod->BSIM4rdsw = value->rValue;
            mod->BSIM4rdswGiven = TRUE;
            break;                     
        case BSIM4_MOD_RDSWMIN:
            mod->BSIM4rdswmin = value->rValue;
            mod->BSIM4rdswminGiven = TRUE;
            break;
        case BSIM4_MOD_RDWMIN:
            mod->BSIM4rdwmin = value->rValue;
            mod->BSIM4rdwminGiven = TRUE;
            break;
        case BSIM4_MOD_RSWMIN:
            mod->BSIM4rswmin = value->rValue;
            mod->BSIM4rswminGiven = TRUE;
            break;
        case BSIM4_MOD_RDW:
            mod->BSIM4rdw = value->rValue;
            mod->BSIM4rdwGiven = TRUE;
            break;
        case BSIM4_MOD_RSW:
            mod->BSIM4rsw = value->rValue;
            mod->BSIM4rswGiven = TRUE;
            break;
        case BSIM4_MOD_PRWG:
            mod->BSIM4prwg = value->rValue;
            mod->BSIM4prwgGiven = TRUE;
            break;                     
        case BSIM4_MOD_PRWB:
            mod->BSIM4prwb = value->rValue;
            mod->BSIM4prwbGiven = TRUE;
            break;                     
        case BSIM4_MOD_PRT:
            mod->BSIM4prt = value->rValue;
            mod->BSIM4prtGiven = TRUE;
            break;                     
        case BSIM4_MOD_ETA0:
            mod->BSIM4eta0 = value->rValue;
            mod->BSIM4eta0Given = TRUE;
            break;                 
        case BSIM4_MOD_ETAB:
            mod->BSIM4etab = value->rValue;
            mod->BSIM4etabGiven = TRUE;
            break;                 
        case BSIM4_MOD_PCLM:
            mod->BSIM4pclm = value->rValue;
            mod->BSIM4pclmGiven = TRUE;
            break;                 
        case BSIM4_MOD_PDIBL1:
            mod->BSIM4pdibl1 = value->rValue;
            mod->BSIM4pdibl1Given = TRUE;
            break;                 
        case BSIM4_MOD_PDIBL2:
            mod->BSIM4pdibl2 = value->rValue;
            mod->BSIM4pdibl2Given = TRUE;
            break;                 
        case BSIM4_MOD_PDIBLB:
            mod->BSIM4pdiblb = value->rValue;
            mod->BSIM4pdiblbGiven = TRUE;
            break;                 
        case BSIM4_MOD_PSCBE1:
            mod->BSIM4pscbe1 = value->rValue;
            mod->BSIM4pscbe1Given = TRUE;
            break;                 
        case BSIM4_MOD_PSCBE2:
            mod->BSIM4pscbe2 = value->rValue;
            mod->BSIM4pscbe2Given = TRUE;
            break;                 
        case BSIM4_MOD_PVAG:
            mod->BSIM4pvag = value->rValue;
            mod->BSIM4pvagGiven = TRUE;
            break;                 
        case  BSIM4_MOD_WR :
            mod->BSIM4wr = value->rValue;
            mod->BSIM4wrGiven = TRUE;
            break;
        case  BSIM4_MOD_DWG :
            mod->BSIM4dwg = value->rValue;
            mod->BSIM4dwgGiven = TRUE;
            break;
        case  BSIM4_MOD_DWB :
            mod->BSIM4dwb = value->rValue;
            mod->BSIM4dwbGiven = TRUE;
            break;
        case  BSIM4_MOD_B0 :
            mod->BSIM4b0 = value->rValue;
            mod->BSIM4b0Given = TRUE;
            break;
        case  BSIM4_MOD_B1 :
            mod->BSIM4b1 = value->rValue;
            mod->BSIM4b1Given = TRUE;
            break;
        case  BSIM4_MOD_ALPHA0 :
            mod->BSIM4alpha0 = value->rValue;
            mod->BSIM4alpha0Given = TRUE;
            break;
        case  BSIM4_MOD_ALPHA1 :
            mod->BSIM4alpha1 = value->rValue;
            mod->BSIM4alpha1Given = TRUE;
            break;
        case  BSIM4_MOD_AGIDL :
            mod->BSIM4agidl = value->rValue;
            mod->BSIM4agidlGiven = TRUE;
            break;
        case  BSIM4_MOD_BGIDL :
            mod->BSIM4bgidl = value->rValue;
            mod->BSIM4bgidlGiven = TRUE;
            break;
        case  BSIM4_MOD_CGIDL :
            mod->BSIM4cgidl = value->rValue;
            mod->BSIM4cgidlGiven = TRUE;
            break;
        case  BSIM4_MOD_PHIN :
            mod->BSIM4phin = value->rValue;
            mod->BSIM4phinGiven = TRUE;
            break;
        case  BSIM4_MOD_EGIDL :
            mod->BSIM4egidl = value->rValue;
            mod->BSIM4egidlGiven = TRUE;
            break;
        case  BSIM4_MOD_AIGC :
            mod->BSIM4aigc = value->rValue;
            mod->BSIM4aigcGiven = TRUE;
            break;
        case  BSIM4_MOD_BIGC :
            mod->BSIM4bigc = value->rValue;
            mod->BSIM4bigcGiven = TRUE;
            break;
        case  BSIM4_MOD_CIGC :
            mod->BSIM4cigc = value->rValue;
            mod->BSIM4cigcGiven = TRUE;
            break;
        case  BSIM4_MOD_AIGSD :
            mod->BSIM4aigsd = value->rValue;
            mod->BSIM4aigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_BIGSD :
            mod->BSIM4bigsd = value->rValue;
            mod->BSIM4bigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_CIGSD :
            mod->BSIM4cigsd = value->rValue;
            mod->BSIM4cigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_AIGBACC :
            mod->BSIM4aigbacc = value->rValue;
            mod->BSIM4aigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_BIGBACC :
            mod->BSIM4bigbacc = value->rValue;
            mod->BSIM4bigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_CIGBACC :
            mod->BSIM4cigbacc = value->rValue;
            mod->BSIM4cigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_AIGBINV :
            mod->BSIM4aigbinv = value->rValue;
            mod->BSIM4aigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_BIGBINV :
            mod->BSIM4bigbinv = value->rValue;
            mod->BSIM4bigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_CIGBINV :
            mod->BSIM4cigbinv = value->rValue;
            mod->BSIM4cigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_NIGC :
            mod->BSIM4nigc = value->rValue;
            mod->BSIM4nigcGiven = TRUE;
            break;
        case  BSIM4_MOD_NIGBINV :
            mod->BSIM4nigbinv = value->rValue;
            mod->BSIM4nigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_NIGBACC :
            mod->BSIM4nigbacc = value->rValue;
            mod->BSIM4nigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_NTOX :
            mod->BSIM4ntox = value->rValue;
            mod->BSIM4ntoxGiven = TRUE;
            break;
        case  BSIM4_MOD_EIGBINV :
            mod->BSIM4eigbinv = value->rValue;
            mod->BSIM4eigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_PIGCD :
            mod->BSIM4pigcd = value->rValue;
            mod->BSIM4pigcdGiven = TRUE;
            break;
        case  BSIM4_MOD_POXEDGE :
            mod->BSIM4poxedge = value->rValue;
            mod->BSIM4poxedgeGiven = TRUE;
            break;
        case  BSIM4_MOD_XRCRG1 :
            mod->BSIM4xrcrg1 = value->rValue;
            mod->BSIM4xrcrg1Given = TRUE;
            break;
        case  BSIM4_MOD_TNOIA :
            mod->BSIM4tnoia = value->rValue;
            mod->BSIM4tnoiaGiven = TRUE;
            break;
        case  BSIM4_MOD_TNOIB :
            mod->BSIM4tnoib = value->rValue;
            mod->BSIM4tnoibGiven = TRUE;
            break;
        case  BSIM4_MOD_NTNOI :
            mod->BSIM4ntnoi = value->rValue;
            mod->BSIM4ntnoiGiven = TRUE;
            break;
        case  BSIM4_MOD_XRCRG2 :
            mod->BSIM4xrcrg2 = value->rValue;
            mod->BSIM4xrcrg2Given = TRUE;
            break;
        case  BSIM4_MOD_BETA0 :
            mod->BSIM4beta0 = value->rValue;
            mod->BSIM4beta0Given = TRUE;
            break;
        case  BSIM4_MOD_IJTHDFWD :
            mod->BSIM4ijthdfwd = value->rValue;
            mod->BSIM4ijthdfwdGiven = TRUE;
            break;
        case  BSIM4_MOD_IJTHSFWD :
            mod->BSIM4ijthsfwd = value->rValue;
            mod->BSIM4ijthsfwdGiven = TRUE;
            break;
        case  BSIM4_MOD_IJTHDREV :
            mod->BSIM4ijthdrev = value->rValue;
            mod->BSIM4ijthdrevGiven = TRUE;
            break;
        case  BSIM4_MOD_IJTHSREV :
            mod->BSIM4ijthsrev = value->rValue;
            mod->BSIM4ijthsrevGiven = TRUE;
            break;
        case  BSIM4_MOD_XJBVD :
            mod->BSIM4xjbvd = value->rValue;
            mod->BSIM4xjbvdGiven = TRUE;
            break;
        case  BSIM4_MOD_XJBVS :
            mod->BSIM4xjbvs = value->rValue;
            mod->BSIM4xjbvsGiven = TRUE;
            break;
        case  BSIM4_MOD_BVD :
            mod->BSIM4bvd = value->rValue;
            mod->BSIM4bvdGiven = TRUE;
            break;
        case  BSIM4_MOD_BVS :
            mod->BSIM4bvs = value->rValue;
            mod->BSIM4bvsGiven = TRUE;
            break;
        case  BSIM4_MOD_VFB :
            mod->BSIM4vfb = value->rValue;
            mod->BSIM4vfbGiven = TRUE;
            break;

        case  BSIM4_MOD_GBMIN :
            mod->BSIM4gbmin = value->rValue;
            mod->BSIM4gbminGiven = TRUE;
            break;
        case  BSIM4_MOD_RBDB :
            mod->BSIM4rbdb = value->rValue;
            mod->BSIM4rbdbGiven = TRUE;
            break;
        case  BSIM4_MOD_RBPB :
            mod->BSIM4rbpb = value->rValue;
            mod->BSIM4rbpbGiven = TRUE;
            break;
        case  BSIM4_MOD_RBSB :
            mod->BSIM4rbsb = value->rValue;
            mod->BSIM4rbsbGiven = TRUE;
            break;
        case  BSIM4_MOD_RBPS :
            mod->BSIM4rbps = value->rValue;
            mod->BSIM4rbpsGiven = TRUE;
            break;
        case  BSIM4_MOD_RBPD :
            mod->BSIM4rbpd = value->rValue;
            mod->BSIM4rbpdGiven = TRUE;
            break;

        case  BSIM4_MOD_CGSL :
            mod->BSIM4cgsl = value->rValue;
            mod->BSIM4cgslGiven = TRUE;
            break;
        case  BSIM4_MOD_CGDL :
            mod->BSIM4cgdl = value->rValue;
            mod->BSIM4cgdlGiven = TRUE;
            break;
        case  BSIM4_MOD_CKAPPAS :
            mod->BSIM4ckappas = value->rValue;
            mod->BSIM4ckappasGiven = TRUE;
            break;
        case  BSIM4_MOD_CKAPPAD :
            mod->BSIM4ckappad = value->rValue;
            mod->BSIM4ckappadGiven = TRUE;
            break;
        case  BSIM4_MOD_CF :
            mod->BSIM4cf = value->rValue;
            mod->BSIM4cfGiven = TRUE;
            break;
        case  BSIM4_MOD_CLC :
            mod->BSIM4clc = value->rValue;
            mod->BSIM4clcGiven = TRUE;
            break;
        case  BSIM4_MOD_CLE :
            mod->BSIM4cle = value->rValue;
            mod->BSIM4cleGiven = TRUE;
            break;
        case  BSIM4_MOD_DWC :
            mod->BSIM4dwc = value->rValue;
            mod->BSIM4dwcGiven = TRUE;
            break;
        case  BSIM4_MOD_DLC :
            mod->BSIM4dlc = value->rValue;
            mod->BSIM4dlcGiven = TRUE;
            break;
        case  BSIM4_MOD_DLCIG :
            mod->BSIM4dlcig = value->rValue;
            mod->BSIM4dlcigGiven = TRUE;
            break;
        case  BSIM4_MOD_DWJ :
            mod->BSIM4dwj = value->rValue;
            mod->BSIM4dwjGiven = TRUE;
            break;
        case  BSIM4_MOD_VFBCV :
            mod->BSIM4vfbcv = value->rValue;
            mod->BSIM4vfbcvGiven = TRUE;
            break;
        case  BSIM4_MOD_ACDE :
            mod->BSIM4acde = value->rValue;
            mod->BSIM4acdeGiven = TRUE;
            break;
        case  BSIM4_MOD_MOIN :
            mod->BSIM4moin = value->rValue;
            mod->BSIM4moinGiven = TRUE;
            break;
        case  BSIM4_MOD_NOFF :
            mod->BSIM4noff = value->rValue;
            mod->BSIM4noffGiven = TRUE;
            break;
        case  BSIM4_MOD_VOFFCV :
            mod->BSIM4voffcv = value->rValue;
            mod->BSIM4voffcvGiven = TRUE;
            break;
        case  BSIM4_MOD_DMCG :
            mod->BSIM4dmcg = value->rValue;
            mod->BSIM4dmcgGiven = TRUE;
            break;
        case  BSIM4_MOD_DMCI :
            mod->BSIM4dmci = value->rValue;
            mod->BSIM4dmciGiven = TRUE;
            break;
        case  BSIM4_MOD_DMDG :
            mod->BSIM4dmdg = value->rValue;
            mod->BSIM4dmdgGiven = TRUE;
            break;
        case  BSIM4_MOD_DMCGT :
            mod->BSIM4dmcgt = value->rValue;
            mod->BSIM4dmcgtGiven = TRUE;
            break;
        case  BSIM4_MOD_XGW :
            mod->BSIM4xgw = value->rValue;
            mod->BSIM4xgwGiven = TRUE;
            break;
        case  BSIM4_MOD_XGL :
            mod->BSIM4xgl = value->rValue;
            mod->BSIM4xglGiven = TRUE;
            break;
        case  BSIM4_MOD_RSHG :
            mod->BSIM4rshg = value->rValue;
            mod->BSIM4rshgGiven = TRUE;
            break;
        case  BSIM4_MOD_NGCON :
            mod->BSIM4ngcon = value->rValue;
            mod->BSIM4ngconGiven = TRUE;
            break;
        case  BSIM4_MOD_TCJ :
            mod->BSIM4tcj = value->rValue;
            mod->BSIM4tcjGiven = TRUE;
            break;
        case  BSIM4_MOD_TPB :
            mod->BSIM4tpb = value->rValue;
            mod->BSIM4tpbGiven = TRUE;
            break;
        case  BSIM4_MOD_TCJSW :
            mod->BSIM4tcjsw = value->rValue;
            mod->BSIM4tcjswGiven = TRUE;
            break;
        case  BSIM4_MOD_TPBSW :
            mod->BSIM4tpbsw = value->rValue;
            mod->BSIM4tpbswGiven = TRUE;
            break;
        case  BSIM4_MOD_TCJSWG :
            mod->BSIM4tcjswg = value->rValue;
            mod->BSIM4tcjswgGiven = TRUE;
            break;
        case  BSIM4_MOD_TPBSWG :
            mod->BSIM4tpbswg = value->rValue;
            mod->BSIM4tpbswgGiven = TRUE;
            break;

	/* Length dependence */
        case  BSIM4_MOD_LCDSC :
            mod->BSIM4lcdsc = value->rValue;
            mod->BSIM4lcdscGiven = TRUE;
            break;


        case  BSIM4_MOD_LCDSCB :
            mod->BSIM4lcdscb = value->rValue;
            mod->BSIM4lcdscbGiven = TRUE;
            break;
        case  BSIM4_MOD_LCDSCD :
            mod->BSIM4lcdscd = value->rValue;
            mod->BSIM4lcdscdGiven = TRUE;
            break;
        case  BSIM4_MOD_LCIT :
            mod->BSIM4lcit = value->rValue;
            mod->BSIM4lcitGiven = TRUE;
            break;
        case  BSIM4_MOD_LNFACTOR :
            mod->BSIM4lnfactor = value->rValue;
            mod->BSIM4lnfactorGiven = TRUE;
            break;
        case BSIM4_MOD_LXJ:
            mod->BSIM4lxj = value->rValue;
            mod->BSIM4lxjGiven = TRUE;
            break;
        case BSIM4_MOD_LVSAT:
            mod->BSIM4lvsat = value->rValue;
            mod->BSIM4lvsatGiven = TRUE;
            break;
        
        
        case BSIM4_MOD_LA0:
            mod->BSIM4la0 = value->rValue;
            mod->BSIM4la0Given = TRUE;
            break;
        case BSIM4_MOD_LAGS:
            mod->BSIM4lags = value->rValue;
            mod->BSIM4lagsGiven = TRUE;
            break;
        case BSIM4_MOD_LA1:
            mod->BSIM4la1 = value->rValue;
            mod->BSIM4la1Given = TRUE;
            break;
        case BSIM4_MOD_LA2:
            mod->BSIM4la2 = value->rValue;
            mod->BSIM4la2Given = TRUE;
            break;
        case BSIM4_MOD_LAT:
            mod->BSIM4lat = value->rValue;
            mod->BSIM4latGiven = TRUE;
            break;
        case BSIM4_MOD_LKETA:
            mod->BSIM4lketa = value->rValue;
            mod->BSIM4lketaGiven = TRUE;
            break;    
        case BSIM4_MOD_LNSUB:
            mod->BSIM4lnsub = value->rValue;
            mod->BSIM4lnsubGiven = TRUE;
            break;
        case BSIM4_MOD_LNDEP:
            mod->BSIM4lndep = value->rValue;
            mod->BSIM4lndepGiven = TRUE;
	    if (mod->BSIM4lndep > 1.0e20)
		mod->BSIM4lndep *= 1.0e-6;
            break;
        case BSIM4_MOD_LNSD:
            mod->BSIM4lnsd = value->rValue;
            mod->BSIM4lnsdGiven = TRUE;
            if (mod->BSIM4lnsd > 1.0e23)
                mod->BSIM4lnsd *= 1.0e-6;
            break;
        case BSIM4_MOD_LNGATE:
            mod->BSIM4lngate = value->rValue;
            mod->BSIM4lngateGiven = TRUE;
	    if (mod->BSIM4lngate > 1.0e23)
		mod->BSIM4lngate *= 1.0e-6;
            break;
        case BSIM4_MOD_LGAMMA1:
            mod->BSIM4lgamma1 = value->rValue;
            mod->BSIM4lgamma1Given = TRUE;
            break;
        case BSIM4_MOD_LGAMMA2:
            mod->BSIM4lgamma2 = value->rValue;
            mod->BSIM4lgamma2Given = TRUE;
            break;
        case BSIM4_MOD_LVBX:
            mod->BSIM4lvbx = value->rValue;
            mod->BSIM4lvbxGiven = TRUE;
            break;
        case BSIM4_MOD_LVBM:
            mod->BSIM4lvbm = value->rValue;
            mod->BSIM4lvbmGiven = TRUE;
            break;
        case BSIM4_MOD_LXT:
            mod->BSIM4lxt = value->rValue;
            mod->BSIM4lxtGiven = TRUE;
            break;
        case  BSIM4_MOD_LK1:
            mod->BSIM4lk1 = value->rValue;
            mod->BSIM4lk1Given = TRUE;
            break;
        case  BSIM4_MOD_LKT1:
            mod->BSIM4lkt1 = value->rValue;
            mod->BSIM4lkt1Given = TRUE;
            break;
        case  BSIM4_MOD_LKT1L:
            mod->BSIM4lkt1l = value->rValue;
            mod->BSIM4lkt1lGiven = TRUE;
            break;
        case  BSIM4_MOD_LKT2:
            mod->BSIM4lkt2 = value->rValue;
            mod->BSIM4lkt2Given = TRUE;
            break;
        case  BSIM4_MOD_LK2:
            mod->BSIM4lk2 = value->rValue;
            mod->BSIM4lk2Given = TRUE;
            break;
        case  BSIM4_MOD_LK3:
            mod->BSIM4lk3 = value->rValue;
            mod->BSIM4lk3Given = TRUE;
            break;
        case  BSIM4_MOD_LK3B:
            mod->BSIM4lk3b = value->rValue;
            mod->BSIM4lk3bGiven = TRUE;
            break;
        case  BSIM4_MOD_LLPE0:
            mod->BSIM4llpe0 = value->rValue;
            mod->BSIM4llpe0Given = TRUE;
            break;
        case  BSIM4_MOD_LLPEB:
            mod->BSIM4llpeb = value->rValue;
            mod->BSIM4llpebGiven = TRUE;
            break;
        case  BSIM4_MOD_LDVTP0:
            mod->BSIM4ldvtp0 = value->rValue;
            mod->BSIM4ldvtp0Given = TRUE;
            break;
        case  BSIM4_MOD_LDVTP1:
            mod->BSIM4ldvtp1 = value->rValue;
            mod->BSIM4ldvtp1Given = TRUE;
            break;
        case  BSIM4_MOD_LW0:
            mod->BSIM4lw0 = value->rValue;
            mod->BSIM4lw0Given = TRUE;
            break;
        case  BSIM4_MOD_LDVT0:               
            mod->BSIM4ldvt0 = value->rValue;
            mod->BSIM4ldvt0Given = TRUE;
            break;
        case  BSIM4_MOD_LDVT1:             
            mod->BSIM4ldvt1 = value->rValue;
            mod->BSIM4ldvt1Given = TRUE;
            break;
        case  BSIM4_MOD_LDVT2:             
            mod->BSIM4ldvt2 = value->rValue;
            mod->BSIM4ldvt2Given = TRUE;
            break;
        case  BSIM4_MOD_LDVT0W:               
            mod->BSIM4ldvt0w = value->rValue;
            mod->BSIM4ldvt0wGiven = TRUE;
            break;
        case  BSIM4_MOD_LDVT1W:             
            mod->BSIM4ldvt1w = value->rValue;
            mod->BSIM4ldvt1wGiven = TRUE;
            break;
        case  BSIM4_MOD_LDVT2W:             
            mod->BSIM4ldvt2w = value->rValue;
            mod->BSIM4ldvt2wGiven = TRUE;
            break;
        case  BSIM4_MOD_LDROUT:             
            mod->BSIM4ldrout = value->rValue;
            mod->BSIM4ldroutGiven = TRUE;
            break;
        case  BSIM4_MOD_LDSUB:             
            mod->BSIM4ldsub = value->rValue;
            mod->BSIM4ldsubGiven = TRUE;
            break;
        case BSIM4_MOD_LVTH0:
            mod->BSIM4lvth0 = value->rValue;
            mod->BSIM4lvth0Given = TRUE;
            break;
        case BSIM4_MOD_LUA:
            mod->BSIM4lua = value->rValue;
            mod->BSIM4luaGiven = TRUE;
            break;
        case BSIM4_MOD_LUA1:
            mod->BSIM4lua1 = value->rValue;
            mod->BSIM4lua1Given = TRUE;
            break;
        case BSIM4_MOD_LUB:
            mod->BSIM4lub = value->rValue;
            mod->BSIM4lubGiven = TRUE;
            break;
        case BSIM4_MOD_LUB1:
            mod->BSIM4lub1 = value->rValue;
            mod->BSIM4lub1Given = TRUE;
            break;
        case BSIM4_MOD_LUC:
            mod->BSIM4luc = value->rValue;
            mod->BSIM4lucGiven = TRUE;
            break;
        case BSIM4_MOD_LUC1:
            mod->BSIM4luc1 = value->rValue;
            mod->BSIM4luc1Given = TRUE;
            break;
        case  BSIM4_MOD_LU0 :
            mod->BSIM4lu0 = value->rValue;
            mod->BSIM4lu0Given = TRUE;
            break;
        case  BSIM4_MOD_LUTE :
            mod->BSIM4lute = value->rValue;
            mod->BSIM4luteGiven = TRUE;
            break;
        case BSIM4_MOD_LVOFF:
            mod->BSIM4lvoff = value->rValue;
            mod->BSIM4lvoffGiven = TRUE;
            break;
        case BSIM4_MOD_LMINV:
            mod->BSIM4lminv = value->rValue;
            mod->BSIM4lminvGiven = TRUE;
            break;
        case BSIM4_MOD_LFPROUT:
            mod->BSIM4lfprout = value->rValue;
            mod->BSIM4lfproutGiven = TRUE;
            break;
        case BSIM4_MOD_LPDITS:
            mod->BSIM4lpdits = value->rValue;
            mod->BSIM4lpditsGiven = TRUE;
            break;
        case BSIM4_MOD_LPDITSD:
            mod->BSIM4lpditsd = value->rValue;
            mod->BSIM4lpditsdGiven = TRUE;
            break;
        case  BSIM4_MOD_LDELTA :
            mod->BSIM4ldelta = value->rValue;
            mod->BSIM4ldeltaGiven = TRUE;
            break;
        case BSIM4_MOD_LRDSW:
            mod->BSIM4lrdsw = value->rValue;
            mod->BSIM4lrdswGiven = TRUE;
            break;                     
        case BSIM4_MOD_LRDW:
            mod->BSIM4lrdw = value->rValue;
            mod->BSIM4lrdwGiven = TRUE;
            break;
        case BSIM4_MOD_LRSW:
            mod->BSIM4lrsw = value->rValue;
            mod->BSIM4lrswGiven = TRUE;
            break;
        case BSIM4_MOD_LPRWB:
            mod->BSIM4lprwb = value->rValue;
            mod->BSIM4lprwbGiven = TRUE;
            break;                     
        case BSIM4_MOD_LPRWG:
            mod->BSIM4lprwg = value->rValue;
            mod->BSIM4lprwgGiven = TRUE;
            break;                     
        case BSIM4_MOD_LPRT:
            mod->BSIM4lprt = value->rValue;
            mod->BSIM4lprtGiven = TRUE;
            break;                     
        case BSIM4_MOD_LETA0:
            mod->BSIM4leta0 = value->rValue;
            mod->BSIM4leta0Given = TRUE;
            break;                 
        case BSIM4_MOD_LETAB:
            mod->BSIM4letab = value->rValue;
            mod->BSIM4letabGiven = TRUE;
            break;                 
        case BSIM4_MOD_LPCLM:
            mod->BSIM4lpclm = value->rValue;
            mod->BSIM4lpclmGiven = TRUE;
            break;                 
        case BSIM4_MOD_LPDIBL1:
            mod->BSIM4lpdibl1 = value->rValue;
            mod->BSIM4lpdibl1Given = TRUE;
            break;                 
        case BSIM4_MOD_LPDIBL2:
            mod->BSIM4lpdibl2 = value->rValue;
            mod->BSIM4lpdibl2Given = TRUE;
            break;                 
        case BSIM4_MOD_LPDIBLB:
            mod->BSIM4lpdiblb = value->rValue;
            mod->BSIM4lpdiblbGiven = TRUE;
            break;                 
        case BSIM4_MOD_LPSCBE1:
            mod->BSIM4lpscbe1 = value->rValue;
            mod->BSIM4lpscbe1Given = TRUE;
            break;                 
        case BSIM4_MOD_LPSCBE2:
            mod->BSIM4lpscbe2 = value->rValue;
            mod->BSIM4lpscbe2Given = TRUE;
            break;                 
        case BSIM4_MOD_LPVAG:
            mod->BSIM4lpvag = value->rValue;
            mod->BSIM4lpvagGiven = TRUE;
            break;                 
        case  BSIM4_MOD_LWR :
            mod->BSIM4lwr = value->rValue;
            mod->BSIM4lwrGiven = TRUE;
            break;
        case  BSIM4_MOD_LDWG :
            mod->BSIM4ldwg = value->rValue;
            mod->BSIM4ldwgGiven = TRUE;
            break;
        case  BSIM4_MOD_LDWB :
            mod->BSIM4ldwb = value->rValue;
            mod->BSIM4ldwbGiven = TRUE;
            break;
        case  BSIM4_MOD_LB0 :
            mod->BSIM4lb0 = value->rValue;
            mod->BSIM4lb0Given = TRUE;
            break;
        case  BSIM4_MOD_LB1 :
            mod->BSIM4lb1 = value->rValue;
            mod->BSIM4lb1Given = TRUE;
            break;
        case  BSIM4_MOD_LALPHA0 :
            mod->BSIM4lalpha0 = value->rValue;
            mod->BSIM4lalpha0Given = TRUE;
            break;
        case  BSIM4_MOD_LALPHA1 :
            mod->BSIM4lalpha1 = value->rValue;
            mod->BSIM4lalpha1Given = TRUE;
            break;
        case  BSIM4_MOD_LBETA0 :
            mod->BSIM4lbeta0 = value->rValue;
            mod->BSIM4lbeta0Given = TRUE;
            break;
        case  BSIM4_MOD_LAGIDL :
            mod->BSIM4lagidl = value->rValue;
            mod->BSIM4lagidlGiven = TRUE;
            break;
        case  BSIM4_MOD_LBGIDL :
            mod->BSIM4lbgidl = value->rValue;
            mod->BSIM4lbgidlGiven = TRUE;
            break;
        case  BSIM4_MOD_LCGIDL :
            mod->BSIM4lcgidl = value->rValue;
            mod->BSIM4lcgidlGiven = TRUE;
            break;
        case  BSIM4_MOD_LPHIN :
            mod->BSIM4lphin = value->rValue;
            mod->BSIM4lphinGiven = TRUE;
            break;
        case  BSIM4_MOD_LEGIDL :
            mod->BSIM4legidl = value->rValue;
            mod->BSIM4legidlGiven = TRUE;
            break;
        case  BSIM4_MOD_LAIGC :
            mod->BSIM4laigc = value->rValue;
            mod->BSIM4laigcGiven = TRUE;
            break;
        case  BSIM4_MOD_LBIGC :
            mod->BSIM4lbigc = value->rValue;
            mod->BSIM4lbigcGiven = TRUE;
            break;
        case  BSIM4_MOD_LCIGC :
            mod->BSIM4lcigc = value->rValue;
            mod->BSIM4lcigcGiven = TRUE;
            break;
        case  BSIM4_MOD_LAIGSD :
            mod->BSIM4laigsd = value->rValue;
            mod->BSIM4laigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_LBIGSD :
            mod->BSIM4lbigsd = value->rValue;
            mod->BSIM4lbigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_LCIGSD :
            mod->BSIM4lcigsd = value->rValue;
            mod->BSIM4lcigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_LAIGBACC :
            mod->BSIM4laigbacc = value->rValue;
            mod->BSIM4laigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_LBIGBACC :
            mod->BSIM4lbigbacc = value->rValue;
            mod->BSIM4lbigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_LCIGBACC :
            mod->BSIM4lcigbacc = value->rValue;
            mod->BSIM4lcigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_LAIGBINV :
            mod->BSIM4laigbinv = value->rValue;
            mod->BSIM4laigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_LBIGBINV :
            mod->BSIM4lbigbinv = value->rValue;
            mod->BSIM4lbigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_LCIGBINV :
            mod->BSIM4lcigbinv = value->rValue;
            mod->BSIM4lcigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_LNIGC :
            mod->BSIM4lnigc = value->rValue;
            mod->BSIM4lnigcGiven = TRUE;
            break;
        case  BSIM4_MOD_LNIGBINV :
            mod->BSIM4lnigbinv = value->rValue;
            mod->BSIM4lnigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_LNIGBACC :
            mod->BSIM4lnigbacc = value->rValue;
            mod->BSIM4lnigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_LNTOX :
            mod->BSIM4lntox = value->rValue;
            mod->BSIM4lntoxGiven = TRUE;
            break;
        case  BSIM4_MOD_LEIGBINV :
            mod->BSIM4leigbinv = value->rValue;
            mod->BSIM4leigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_LPIGCD :
            mod->BSIM4lpigcd = value->rValue;
            mod->BSIM4lpigcdGiven = TRUE;
            break;
        case  BSIM4_MOD_LPOXEDGE :
            mod->BSIM4lpoxedge = value->rValue;
            mod->BSIM4lpoxedgeGiven = TRUE;
            break;
        case  BSIM4_MOD_LXRCRG1 :
            mod->BSIM4lxrcrg1 = value->rValue;
            mod->BSIM4lxrcrg1Given = TRUE;
            break;
        case  BSIM4_MOD_LXRCRG2 :
            mod->BSIM4lxrcrg2 = value->rValue;
            mod->BSIM4lxrcrg2Given = TRUE;
            break;
        case  BSIM4_MOD_LEU :
            mod->BSIM4leu = value->rValue;
            mod->BSIM4leuGiven = TRUE;
            break;
        case  BSIM4_MOD_LVFB :
            mod->BSIM4lvfb = value->rValue;
            mod->BSIM4lvfbGiven = TRUE;
            break;

        case  BSIM4_MOD_LCGSL :
            mod->BSIM4lcgsl = value->rValue;
            mod->BSIM4lcgslGiven = TRUE;
            break;
        case  BSIM4_MOD_LCGDL :
            mod->BSIM4lcgdl = value->rValue;
            mod->BSIM4lcgdlGiven = TRUE;
            break;
        case  BSIM4_MOD_LCKAPPAS :
            mod->BSIM4lckappas = value->rValue;
            mod->BSIM4lckappasGiven = TRUE;
            break;
        case  BSIM4_MOD_LCKAPPAD :
            mod->BSIM4lckappad = value->rValue;
            mod->BSIM4lckappadGiven = TRUE;
            break;
        case  BSIM4_MOD_LCF :
            mod->BSIM4lcf = value->rValue;
            mod->BSIM4lcfGiven = TRUE;
            break;
        case  BSIM4_MOD_LCLC :
            mod->BSIM4lclc = value->rValue;
            mod->BSIM4lclcGiven = TRUE;
            break;
        case  BSIM4_MOD_LCLE :
            mod->BSIM4lcle = value->rValue;
            mod->BSIM4lcleGiven = TRUE;
            break;
        case  BSIM4_MOD_LVFBCV :
            mod->BSIM4lvfbcv = value->rValue;
            mod->BSIM4lvfbcvGiven = TRUE;
            break;
        case  BSIM4_MOD_LACDE :
            mod->BSIM4lacde = value->rValue;
            mod->BSIM4lacdeGiven = TRUE;
            break;
        case  BSIM4_MOD_LMOIN :
            mod->BSIM4lmoin = value->rValue;
            mod->BSIM4lmoinGiven = TRUE;
            break;
        case  BSIM4_MOD_LNOFF :
            mod->BSIM4lnoff = value->rValue;
            mod->BSIM4lnoffGiven = TRUE;
            break;
        case  BSIM4_MOD_LVOFFCV :
            mod->BSIM4lvoffcv = value->rValue;
            mod->BSIM4lvoffcvGiven = TRUE;
            break;

	/* Width dependence */
        case  BSIM4_MOD_WCDSC :
            mod->BSIM4wcdsc = value->rValue;
            mod->BSIM4wcdscGiven = TRUE;
            break;
       
       
         case  BSIM4_MOD_WCDSCB :
            mod->BSIM4wcdscb = value->rValue;
            mod->BSIM4wcdscbGiven = TRUE;
            break;
         case  BSIM4_MOD_WCDSCD :
            mod->BSIM4wcdscd = value->rValue;
            mod->BSIM4wcdscdGiven = TRUE;
            break;
        case  BSIM4_MOD_WCIT :
            mod->BSIM4wcit = value->rValue;
            mod->BSIM4wcitGiven = TRUE;
            break;
        case  BSIM4_MOD_WNFACTOR :
            mod->BSIM4wnfactor = value->rValue;
            mod->BSIM4wnfactorGiven = TRUE;
            break;
        case BSIM4_MOD_WXJ:
            mod->BSIM4wxj = value->rValue;
            mod->BSIM4wxjGiven = TRUE;
            break;
        case BSIM4_MOD_WVSAT:
            mod->BSIM4wvsat = value->rValue;
            mod->BSIM4wvsatGiven = TRUE;
            break;


        case BSIM4_MOD_WA0:
            mod->BSIM4wa0 = value->rValue;
            mod->BSIM4wa0Given = TRUE;
            break;
        case BSIM4_MOD_WAGS:
            mod->BSIM4wags = value->rValue;
            mod->BSIM4wagsGiven = TRUE;
            break;
        case BSIM4_MOD_WA1:
            mod->BSIM4wa1 = value->rValue;
            mod->BSIM4wa1Given = TRUE;
            break;
        case BSIM4_MOD_WA2:
            mod->BSIM4wa2 = value->rValue;
            mod->BSIM4wa2Given = TRUE;
            break;
        case BSIM4_MOD_WAT:
            mod->BSIM4wat = value->rValue;
            mod->BSIM4watGiven = TRUE;
            break;
        case BSIM4_MOD_WKETA:
            mod->BSIM4wketa = value->rValue;
            mod->BSIM4wketaGiven = TRUE;
            break;    
        case BSIM4_MOD_WNSUB:
            mod->BSIM4wnsub = value->rValue;
            mod->BSIM4wnsubGiven = TRUE;
            break;
        case BSIM4_MOD_WNDEP:
            mod->BSIM4wndep = value->rValue;
            mod->BSIM4wndepGiven = TRUE;
	    if (mod->BSIM4wndep > 1.0e20)
		mod->BSIM4wndep *= 1.0e-6;
            break;
        case BSIM4_MOD_WNSD:
            mod->BSIM4wnsd = value->rValue;
            mod->BSIM4wnsdGiven = TRUE;
            if (mod->BSIM4wnsd > 1.0e23)
                mod->BSIM4wnsd *= 1.0e-6;
            break;
        case BSIM4_MOD_WNGATE:
            mod->BSIM4wngate = value->rValue;
            mod->BSIM4wngateGiven = TRUE;
	    if (mod->BSIM4wngate > 1.0e23)
		mod->BSIM4wngate *= 1.0e-6;
            break;
        case BSIM4_MOD_WGAMMA1:
            mod->BSIM4wgamma1 = value->rValue;
            mod->BSIM4wgamma1Given = TRUE;
            break;
        case BSIM4_MOD_WGAMMA2:
            mod->BSIM4wgamma2 = value->rValue;
            mod->BSIM4wgamma2Given = TRUE;
            break;
        case BSIM4_MOD_WVBX:
            mod->BSIM4wvbx = value->rValue;
            mod->BSIM4wvbxGiven = TRUE;
            break;
        case BSIM4_MOD_WVBM:
            mod->BSIM4wvbm = value->rValue;
            mod->BSIM4wvbmGiven = TRUE;
            break;
        case BSIM4_MOD_WXT:
            mod->BSIM4wxt = value->rValue;
            mod->BSIM4wxtGiven = TRUE;
            break;
        case  BSIM4_MOD_WK1:
            mod->BSIM4wk1 = value->rValue;
            mod->BSIM4wk1Given = TRUE;
            break;
        case  BSIM4_MOD_WKT1:
            mod->BSIM4wkt1 = value->rValue;
            mod->BSIM4wkt1Given = TRUE;
            break;
        case  BSIM4_MOD_WKT1L:
            mod->BSIM4wkt1l = value->rValue;
            mod->BSIM4wkt1lGiven = TRUE;
            break;
        case  BSIM4_MOD_WKT2:
            mod->BSIM4wkt2 = value->rValue;
            mod->BSIM4wkt2Given = TRUE;
            break;
        case  BSIM4_MOD_WK2:
            mod->BSIM4wk2 = value->rValue;
            mod->BSIM4wk2Given = TRUE;
            break;
        case  BSIM4_MOD_WK3:
            mod->BSIM4wk3 = value->rValue;
            mod->BSIM4wk3Given = TRUE;
            break;
        case  BSIM4_MOD_WK3B:
            mod->BSIM4wk3b = value->rValue;
            mod->BSIM4wk3bGiven = TRUE;
            break;
        case  BSIM4_MOD_WLPE0:
            mod->BSIM4wlpe0 = value->rValue;
            mod->BSIM4wlpe0Given = TRUE;
            break;
        case  BSIM4_MOD_WLPEB:
            mod->BSIM4wlpeb = value->rValue;
            mod->BSIM4wlpebGiven = TRUE;
            break;
        case  BSIM4_MOD_WDVTP0:
            mod->BSIM4wdvtp0 = value->rValue;
            mod->BSIM4wdvtp0Given = TRUE;
            break;
        case  BSIM4_MOD_WDVTP1:
            mod->BSIM4wdvtp1 = value->rValue;
            mod->BSIM4wdvtp1Given = TRUE;
            break;
        case  BSIM4_MOD_WW0:
            mod->BSIM4ww0 = value->rValue;
            mod->BSIM4ww0Given = TRUE;
            break;
        case  BSIM4_MOD_WDVT0:               
            mod->BSIM4wdvt0 = value->rValue;
            mod->BSIM4wdvt0Given = TRUE;
            break;
        case  BSIM4_MOD_WDVT1:             
            mod->BSIM4wdvt1 = value->rValue;
            mod->BSIM4wdvt1Given = TRUE;
            break;
        case  BSIM4_MOD_WDVT2:             
            mod->BSIM4wdvt2 = value->rValue;
            mod->BSIM4wdvt2Given = TRUE;
            break;
        case  BSIM4_MOD_WDVT0W:               
            mod->BSIM4wdvt0w = value->rValue;
            mod->BSIM4wdvt0wGiven = TRUE;
            break;
        case  BSIM4_MOD_WDVT1W:             
            mod->BSIM4wdvt1w = value->rValue;
            mod->BSIM4wdvt1wGiven = TRUE;
            break;
        case  BSIM4_MOD_WDVT2W:             
            mod->BSIM4wdvt2w = value->rValue;
            mod->BSIM4wdvt2wGiven = TRUE;
            break;
        case  BSIM4_MOD_WDROUT:             
            mod->BSIM4wdrout = value->rValue;
            mod->BSIM4wdroutGiven = TRUE;
            break;
        case  BSIM4_MOD_WDSUB:             
            mod->BSIM4wdsub = value->rValue;
            mod->BSIM4wdsubGiven = TRUE;
            break;
        case BSIM4_MOD_WVTH0:
            mod->BSIM4wvth0 = value->rValue;
            mod->BSIM4wvth0Given = TRUE;
            break;
        case BSIM4_MOD_WUA:
            mod->BSIM4wua = value->rValue;
            mod->BSIM4wuaGiven = TRUE;
            break;
        case BSIM4_MOD_WUA1:
            mod->BSIM4wua1 = value->rValue;
            mod->BSIM4wua1Given = TRUE;
            break;
        case BSIM4_MOD_WUB:
            mod->BSIM4wub = value->rValue;
            mod->BSIM4wubGiven = TRUE;
            break;
        case BSIM4_MOD_WUB1:
            mod->BSIM4wub1 = value->rValue;
            mod->BSIM4wub1Given = TRUE;
            break;
        case BSIM4_MOD_WUC:
            mod->BSIM4wuc = value->rValue;
            mod->BSIM4wucGiven = TRUE;
            break;
        case BSIM4_MOD_WUC1:
            mod->BSIM4wuc1 = value->rValue;
            mod->BSIM4wuc1Given = TRUE;
            break;
        case  BSIM4_MOD_WU0 :
            mod->BSIM4wu0 = value->rValue;
            mod->BSIM4wu0Given = TRUE;
            break;
        case  BSIM4_MOD_WUTE :
            mod->BSIM4wute = value->rValue;
            mod->BSIM4wuteGiven = TRUE;
            break;
        case BSIM4_MOD_WVOFF:
            mod->BSIM4wvoff = value->rValue;
            mod->BSIM4wvoffGiven = TRUE;
            break;
        case BSIM4_MOD_WMINV:
            mod->BSIM4wminv = value->rValue;
            mod->BSIM4wminvGiven = TRUE;
            break;
        case BSIM4_MOD_WFPROUT:
            mod->BSIM4wfprout = value->rValue;
            mod->BSIM4wfproutGiven = TRUE;
            break;
        case BSIM4_MOD_WPDITS:
            mod->BSIM4wpdits = value->rValue;
            mod->BSIM4wpditsGiven = TRUE;
            break;
        case BSIM4_MOD_WPDITSD:
            mod->BSIM4wpditsd = value->rValue;
            mod->BSIM4wpditsdGiven = TRUE;
            break;
        case  BSIM4_MOD_WDELTA :
            mod->BSIM4wdelta = value->rValue;
            mod->BSIM4wdeltaGiven = TRUE;
            break;
        case BSIM4_MOD_WRDSW:
            mod->BSIM4wrdsw = value->rValue;
            mod->BSIM4wrdswGiven = TRUE;
            break;                     
        case BSIM4_MOD_WRDW:
            mod->BSIM4wrdw = value->rValue;
            mod->BSIM4wrdwGiven = TRUE;
            break;
        case BSIM4_MOD_WRSW:
            mod->BSIM4wrsw = value->rValue;
            mod->BSIM4wrswGiven = TRUE;
            break;
        case BSIM4_MOD_WPRWB:
            mod->BSIM4wprwb = value->rValue;
            mod->BSIM4wprwbGiven = TRUE;
            break;                     
        case BSIM4_MOD_WPRWG:
            mod->BSIM4wprwg = value->rValue;
            mod->BSIM4wprwgGiven = TRUE;
            break;                     
        case BSIM4_MOD_WPRT:
            mod->BSIM4wprt = value->rValue;
            mod->BSIM4wprtGiven = TRUE;
            break;                     
        case BSIM4_MOD_WETA0:
            mod->BSIM4weta0 = value->rValue;
            mod->BSIM4weta0Given = TRUE;
            break;                 
        case BSIM4_MOD_WETAB:
            mod->BSIM4wetab = value->rValue;
            mod->BSIM4wetabGiven = TRUE;
            break;                 
        case BSIM4_MOD_WPCLM:
            mod->BSIM4wpclm = value->rValue;
            mod->BSIM4wpclmGiven = TRUE;
            break;                 
        case BSIM4_MOD_WPDIBL1:
            mod->BSIM4wpdibl1 = value->rValue;
            mod->BSIM4wpdibl1Given = TRUE;
            break;                 
        case BSIM4_MOD_WPDIBL2:
            mod->BSIM4wpdibl2 = value->rValue;
            mod->BSIM4wpdibl2Given = TRUE;
            break;                 
        case BSIM4_MOD_WPDIBLB:
            mod->BSIM4wpdiblb = value->rValue;
            mod->BSIM4wpdiblbGiven = TRUE;
            break;                 
        case BSIM4_MOD_WPSCBE1:
            mod->BSIM4wpscbe1 = value->rValue;
            mod->BSIM4wpscbe1Given = TRUE;
            break;                 
        case BSIM4_MOD_WPSCBE2:
            mod->BSIM4wpscbe2 = value->rValue;
            mod->BSIM4wpscbe2Given = TRUE;
            break;                 
        case BSIM4_MOD_WPVAG:
            mod->BSIM4wpvag = value->rValue;
            mod->BSIM4wpvagGiven = TRUE;
            break;                 
        case  BSIM4_MOD_WWR :
            mod->BSIM4wwr = value->rValue;
            mod->BSIM4wwrGiven = TRUE;
            break;
        case  BSIM4_MOD_WDWG :
            mod->BSIM4wdwg = value->rValue;
            mod->BSIM4wdwgGiven = TRUE;
            break;
        case  BSIM4_MOD_WDWB :
            mod->BSIM4wdwb = value->rValue;
            mod->BSIM4wdwbGiven = TRUE;
            break;
        case  BSIM4_MOD_WB0 :
            mod->BSIM4wb0 = value->rValue;
            mod->BSIM4wb0Given = TRUE;
            break;
        case  BSIM4_MOD_WB1 :
            mod->BSIM4wb1 = value->rValue;
            mod->BSIM4wb1Given = TRUE;
            break;
        case  BSIM4_MOD_WALPHA0 :
            mod->BSIM4walpha0 = value->rValue;
            mod->BSIM4walpha0Given = TRUE;
            break;
        case  BSIM4_MOD_WALPHA1 :
            mod->BSIM4walpha1 = value->rValue;
            mod->BSIM4walpha1Given = TRUE;
            break;
        case  BSIM4_MOD_WBETA0 :
            mod->BSIM4wbeta0 = value->rValue;
            mod->BSIM4wbeta0Given = TRUE;
            break;
        case  BSIM4_MOD_WAGIDL :
            mod->BSIM4wagidl = value->rValue;
            mod->BSIM4wagidlGiven = TRUE;
            break;
        case  BSIM4_MOD_WBGIDL :
            mod->BSIM4wbgidl = value->rValue;
            mod->BSIM4wbgidlGiven = TRUE;
            break;
        case  BSIM4_MOD_WCGIDL :
            mod->BSIM4wcgidl = value->rValue;
            mod->BSIM4wcgidlGiven = TRUE;
            break;
        case  BSIM4_MOD_WPHIN :
            mod->BSIM4wphin = value->rValue;
            mod->BSIM4wphinGiven = TRUE;
            break;
        case  BSIM4_MOD_WEGIDL :
            mod->BSIM4wegidl = value->rValue;
            mod->BSIM4wegidlGiven = TRUE;
            break;
        case  BSIM4_MOD_WAIGC :
            mod->BSIM4waigc = value->rValue;
            mod->BSIM4waigcGiven = TRUE;
            break;
        case  BSIM4_MOD_WBIGC :
            mod->BSIM4wbigc = value->rValue;
            mod->BSIM4wbigcGiven = TRUE;
            break;
        case  BSIM4_MOD_WCIGC :
            mod->BSIM4wcigc = value->rValue;
            mod->BSIM4wcigcGiven = TRUE;
            break;
        case  BSIM4_MOD_WAIGSD :
            mod->BSIM4waigsd = value->rValue;
            mod->BSIM4waigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_WBIGSD :
            mod->BSIM4wbigsd = value->rValue;
            mod->BSIM4wbigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_WCIGSD :
            mod->BSIM4wcigsd = value->rValue;
            mod->BSIM4wcigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_WAIGBACC :
            mod->BSIM4waigbacc = value->rValue;
            mod->BSIM4waigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_WBIGBACC :
            mod->BSIM4wbigbacc = value->rValue;
            mod->BSIM4wbigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_WCIGBACC :
            mod->BSIM4wcigbacc = value->rValue;
            mod->BSIM4wcigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_WAIGBINV :
            mod->BSIM4waigbinv = value->rValue;
            mod->BSIM4waigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_WBIGBINV :
            mod->BSIM4wbigbinv = value->rValue;
            mod->BSIM4wbigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_WCIGBINV :
            mod->BSIM4wcigbinv = value->rValue;
            mod->BSIM4wcigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_WNIGC :
            mod->BSIM4wnigc = value->rValue;
            mod->BSIM4wnigcGiven = TRUE;
            break;
        case  BSIM4_MOD_WNIGBINV :
            mod->BSIM4wnigbinv = value->rValue;
            mod->BSIM4wnigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_WNIGBACC :
            mod->BSIM4wnigbacc = value->rValue;
            mod->BSIM4wnigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_WNTOX :
            mod->BSIM4wntox = value->rValue;
            mod->BSIM4wntoxGiven = TRUE;
            break;
        case  BSIM4_MOD_WEIGBINV :
            mod->BSIM4weigbinv = value->rValue;
            mod->BSIM4weigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_WPIGCD :
            mod->BSIM4wpigcd = value->rValue;
            mod->BSIM4wpigcdGiven = TRUE;
            break;
        case  BSIM4_MOD_WPOXEDGE :
            mod->BSIM4wpoxedge = value->rValue;
            mod->BSIM4wpoxedgeGiven = TRUE;
            break;
        case  BSIM4_MOD_WXRCRG1 :
            mod->BSIM4wxrcrg1 = value->rValue;
            mod->BSIM4wxrcrg1Given = TRUE;
            break;
        case  BSIM4_MOD_WXRCRG2 :
            mod->BSIM4wxrcrg2 = value->rValue;
            mod->BSIM4wxrcrg2Given = TRUE;
            break;
        case  BSIM4_MOD_WEU :
            mod->BSIM4weu = value->rValue;
            mod->BSIM4weuGiven = TRUE;
            break;
        case  BSIM4_MOD_WVFB :
            mod->BSIM4wvfb = value->rValue;
            mod->BSIM4wvfbGiven = TRUE;
            break;

        case  BSIM4_MOD_WCGSL :
            mod->BSIM4wcgsl = value->rValue;
            mod->BSIM4wcgslGiven = TRUE;
            break;
        case  BSIM4_MOD_WCGDL :
            mod->BSIM4wcgdl = value->rValue;
            mod->BSIM4wcgdlGiven = TRUE;
            break;
        case  BSIM4_MOD_WCKAPPAS :
            mod->BSIM4wckappas = value->rValue;
            mod->BSIM4wckappasGiven = TRUE;
            break;
        case  BSIM4_MOD_WCKAPPAD :
            mod->BSIM4wckappad = value->rValue;
            mod->BSIM4wckappadGiven = TRUE;
            break;
        case  BSIM4_MOD_WCF :
            mod->BSIM4wcf = value->rValue;
            mod->BSIM4wcfGiven = TRUE;
            break;
        case  BSIM4_MOD_WCLC :
            mod->BSIM4wclc = value->rValue;
            mod->BSIM4wclcGiven = TRUE;
            break;
        case  BSIM4_MOD_WCLE :
            mod->BSIM4wcle = value->rValue;
            mod->BSIM4wcleGiven = TRUE;
            break;
        case  BSIM4_MOD_WVFBCV :
            mod->BSIM4wvfbcv = value->rValue;
            mod->BSIM4wvfbcvGiven = TRUE;
            break;
        case  BSIM4_MOD_WACDE :
            mod->BSIM4wacde = value->rValue;
            mod->BSIM4wacdeGiven = TRUE;
            break;
        case  BSIM4_MOD_WMOIN :
            mod->BSIM4wmoin = value->rValue;
            mod->BSIM4wmoinGiven = TRUE;
            break;
        case  BSIM4_MOD_WNOFF :
            mod->BSIM4wnoff = value->rValue;
            mod->BSIM4wnoffGiven = TRUE;
            break;
        case  BSIM4_MOD_WVOFFCV :
            mod->BSIM4wvoffcv = value->rValue;
            mod->BSIM4wvoffcvGiven = TRUE;
            break;

	/* Cross-term dependence */
        case  BSIM4_MOD_PCDSC :
            mod->BSIM4pcdsc = value->rValue;
            mod->BSIM4pcdscGiven = TRUE;
            break;


        case  BSIM4_MOD_PCDSCB :
            mod->BSIM4pcdscb = value->rValue;
            mod->BSIM4pcdscbGiven = TRUE;
            break;
        case  BSIM4_MOD_PCDSCD :
            mod->BSIM4pcdscd = value->rValue;
            mod->BSIM4pcdscdGiven = TRUE;
            break;
        case  BSIM4_MOD_PCIT :
            mod->BSIM4pcit = value->rValue;
            mod->BSIM4pcitGiven = TRUE;
            break;
        case  BSIM4_MOD_PNFACTOR :
            mod->BSIM4pnfactor = value->rValue;
            mod->BSIM4pnfactorGiven = TRUE;
            break;
        case BSIM4_MOD_PXJ:
            mod->BSIM4pxj = value->rValue;
            mod->BSIM4pxjGiven = TRUE;
            break;
        case BSIM4_MOD_PVSAT:
            mod->BSIM4pvsat = value->rValue;
            mod->BSIM4pvsatGiven = TRUE;
            break;


        case BSIM4_MOD_PA0:
            mod->BSIM4pa0 = value->rValue;
            mod->BSIM4pa0Given = TRUE;
            break;
        case BSIM4_MOD_PAGS:
            mod->BSIM4pags = value->rValue;
            mod->BSIM4pagsGiven = TRUE;
            break;
        case BSIM4_MOD_PA1:
            mod->BSIM4pa1 = value->rValue;
            mod->BSIM4pa1Given = TRUE;
            break;
        case BSIM4_MOD_PA2:
            mod->BSIM4pa2 = value->rValue;
            mod->BSIM4pa2Given = TRUE;
            break;
        case BSIM4_MOD_PAT:
            mod->BSIM4pat = value->rValue;
            mod->BSIM4patGiven = TRUE;
            break;
        case BSIM4_MOD_PKETA:
            mod->BSIM4pketa = value->rValue;
            mod->BSIM4pketaGiven = TRUE;
            break;    
        case BSIM4_MOD_PNSUB:
            mod->BSIM4pnsub = value->rValue;
            mod->BSIM4pnsubGiven = TRUE;
            break;
        case BSIM4_MOD_PNDEP:
            mod->BSIM4pndep = value->rValue;
            mod->BSIM4pndepGiven = TRUE;
	    if (mod->BSIM4pndep > 1.0e20)
		mod->BSIM4pndep *= 1.0e-6;
            break;
        case BSIM4_MOD_PNSD:
            mod->BSIM4pnsd = value->rValue;
            mod->BSIM4pnsdGiven = TRUE;
            if (mod->BSIM4pnsd > 1.0e23)
                mod->BSIM4pnsd *= 1.0e-6;
            break;
        case BSIM4_MOD_PNGATE:
            mod->BSIM4pngate = value->rValue;
            mod->BSIM4pngateGiven = TRUE;
	    if (mod->BSIM4pngate > 1.0e23)
		mod->BSIM4pngate *= 1.0e-6;
            break;
        case BSIM4_MOD_PGAMMA1:
            mod->BSIM4pgamma1 = value->rValue;
            mod->BSIM4pgamma1Given = TRUE;
            break;
        case BSIM4_MOD_PGAMMA2:
            mod->BSIM4pgamma2 = value->rValue;
            mod->BSIM4pgamma2Given = TRUE;
            break;
        case BSIM4_MOD_PVBX:
            mod->BSIM4pvbx = value->rValue;
            mod->BSIM4pvbxGiven = TRUE;
            break;
        case BSIM4_MOD_PVBM:
            mod->BSIM4pvbm = value->rValue;
            mod->BSIM4pvbmGiven = TRUE;
            break;
        case BSIM4_MOD_PXT:
            mod->BSIM4pxt = value->rValue;
            mod->BSIM4pxtGiven = TRUE;
            break;
        case  BSIM4_MOD_PK1:
            mod->BSIM4pk1 = value->rValue;
            mod->BSIM4pk1Given = TRUE;
            break;
        case  BSIM4_MOD_PKT1:
            mod->BSIM4pkt1 = value->rValue;
            mod->BSIM4pkt1Given = TRUE;
            break;
        case  BSIM4_MOD_PKT1L:
            mod->BSIM4pkt1l = value->rValue;
            mod->BSIM4pkt1lGiven = TRUE;
            break;
        case  BSIM4_MOD_PKT2:
            mod->BSIM4pkt2 = value->rValue;
            mod->BSIM4pkt2Given = TRUE;
            break;
        case  BSIM4_MOD_PK2:
            mod->BSIM4pk2 = value->rValue;
            mod->BSIM4pk2Given = TRUE;
            break;
        case  BSIM4_MOD_PK3:
            mod->BSIM4pk3 = value->rValue;
            mod->BSIM4pk3Given = TRUE;
            break;
        case  BSIM4_MOD_PK3B:
            mod->BSIM4pk3b = value->rValue;
            mod->BSIM4pk3bGiven = TRUE;
            break;
        case  BSIM4_MOD_PLPE0:
            mod->BSIM4plpe0 = value->rValue;
            mod->BSIM4plpe0Given = TRUE;
            break;
        case  BSIM4_MOD_PLPEB:
            mod->BSIM4plpeb = value->rValue;
            mod->BSIM4plpebGiven = TRUE;
            break;
        case  BSIM4_MOD_PDVTP0:
            mod->BSIM4pdvtp0 = value->rValue;
            mod->BSIM4pdvtp0Given = TRUE;
            break;
        case  BSIM4_MOD_PDVTP1:
            mod->BSIM4pdvtp1 = value->rValue;
            mod->BSIM4pdvtp1Given = TRUE;
            break;
        case  BSIM4_MOD_PW0:
            mod->BSIM4pw0 = value->rValue;
            mod->BSIM4pw0Given = TRUE;
            break;
        case  BSIM4_MOD_PDVT0:               
            mod->BSIM4pdvt0 = value->rValue;
            mod->BSIM4pdvt0Given = TRUE;
            break;
        case  BSIM4_MOD_PDVT1:             
            mod->BSIM4pdvt1 = value->rValue;
            mod->BSIM4pdvt1Given = TRUE;
            break;
        case  BSIM4_MOD_PDVT2:             
            mod->BSIM4pdvt2 = value->rValue;
            mod->BSIM4pdvt2Given = TRUE;
            break;
        case  BSIM4_MOD_PDVT0W:               
            mod->BSIM4pdvt0w = value->rValue;
            mod->BSIM4pdvt0wGiven = TRUE;
            break;
        case  BSIM4_MOD_PDVT1W:             
            mod->BSIM4pdvt1w = value->rValue;
            mod->BSIM4pdvt1wGiven = TRUE;
            break;
        case  BSIM4_MOD_PDVT2W:             
            mod->BSIM4pdvt2w = value->rValue;
            mod->BSIM4pdvt2wGiven = TRUE;
            break;
        case  BSIM4_MOD_PDROUT:             
            mod->BSIM4pdrout = value->rValue;
            mod->BSIM4pdroutGiven = TRUE;
            break;
        case  BSIM4_MOD_PDSUB:             
            mod->BSIM4pdsub = value->rValue;
            mod->BSIM4pdsubGiven = TRUE;
            break;
        case BSIM4_MOD_PVTH0:
            mod->BSIM4pvth0 = value->rValue;
            mod->BSIM4pvth0Given = TRUE;
            break;
        case BSIM4_MOD_PUA:
            mod->BSIM4pua = value->rValue;
            mod->BSIM4puaGiven = TRUE;
            break;
        case BSIM4_MOD_PUA1:
            mod->BSIM4pua1 = value->rValue;
            mod->BSIM4pua1Given = TRUE;
            break;
        case BSIM4_MOD_PUB:
            mod->BSIM4pub = value->rValue;
            mod->BSIM4pubGiven = TRUE;
            break;
        case BSIM4_MOD_PUB1:
            mod->BSIM4pub1 = value->rValue;
            mod->BSIM4pub1Given = TRUE;
            break;
        case BSIM4_MOD_PUC:
            mod->BSIM4puc = value->rValue;
            mod->BSIM4pucGiven = TRUE;
            break;
        case BSIM4_MOD_PUC1:
            mod->BSIM4puc1 = value->rValue;
            mod->BSIM4puc1Given = TRUE;
            break;
        case  BSIM4_MOD_PU0 :
            mod->BSIM4pu0 = value->rValue;
            mod->BSIM4pu0Given = TRUE;
            break;
        case  BSIM4_MOD_PUTE :
            mod->BSIM4pute = value->rValue;
            mod->BSIM4puteGiven = TRUE;
            break;
        case BSIM4_MOD_PVOFF:
            mod->BSIM4pvoff = value->rValue;
            mod->BSIM4pvoffGiven = TRUE;
            break;
        case BSIM4_MOD_PMINV:
            mod->BSIM4pminv = value->rValue;
            mod->BSIM4pminvGiven = TRUE;
            break;
        case BSIM4_MOD_PFPROUT:
            mod->BSIM4pfprout = value->rValue;
            mod->BSIM4pfproutGiven = TRUE;
            break;
        case BSIM4_MOD_PPDITS:
            mod->BSIM4ppdits = value->rValue;
            mod->BSIM4ppditsGiven = TRUE;
            break;
        case BSIM4_MOD_PPDITSD:
            mod->BSIM4ppditsd = value->rValue;
            mod->BSIM4ppditsdGiven = TRUE;
            break;
        case  BSIM4_MOD_PDELTA :
            mod->BSIM4pdelta = value->rValue;
            mod->BSIM4pdeltaGiven = TRUE;
            break;
        case BSIM4_MOD_PRDSW:
            mod->BSIM4prdsw = value->rValue;
            mod->BSIM4prdswGiven = TRUE;
            break;                     
        case BSIM4_MOD_PRDW:
            mod->BSIM4prdw = value->rValue;
            mod->BSIM4prdwGiven = TRUE;
            break;
        case BSIM4_MOD_PRSW:
            mod->BSIM4prsw = value->rValue;
            mod->BSIM4prswGiven = TRUE;
            break;
        case BSIM4_MOD_PPRWB:
            mod->BSIM4pprwb = value->rValue;
            mod->BSIM4pprwbGiven = TRUE;
            break;                     
        case BSIM4_MOD_PPRWG:
            mod->BSIM4pprwg = value->rValue;
            mod->BSIM4pprwgGiven = TRUE;
            break;                     
        case BSIM4_MOD_PPRT:
            mod->BSIM4pprt = value->rValue;
            mod->BSIM4pprtGiven = TRUE;
            break;                     
        case BSIM4_MOD_PETA0:
            mod->BSIM4peta0 = value->rValue;
            mod->BSIM4peta0Given = TRUE;
            break;                 
        case BSIM4_MOD_PETAB:
            mod->BSIM4petab = value->rValue;
            mod->BSIM4petabGiven = TRUE;
            break;                 
        case BSIM4_MOD_PPCLM:
            mod->BSIM4ppclm = value->rValue;
            mod->BSIM4ppclmGiven = TRUE;
            break;                 
        case BSIM4_MOD_PPDIBL1:
            mod->BSIM4ppdibl1 = value->rValue;
            mod->BSIM4ppdibl1Given = TRUE;
            break;                 
        case BSIM4_MOD_PPDIBL2:
            mod->BSIM4ppdibl2 = value->rValue;
            mod->BSIM4ppdibl2Given = TRUE;
            break;                 
        case BSIM4_MOD_PPDIBLB:
            mod->BSIM4ppdiblb = value->rValue;
            mod->BSIM4ppdiblbGiven = TRUE;
            break;                 
        case BSIM4_MOD_PPSCBE1:
            mod->BSIM4ppscbe1 = value->rValue;
            mod->BSIM4ppscbe1Given = TRUE;
            break;                 
        case BSIM4_MOD_PPSCBE2:
            mod->BSIM4ppscbe2 = value->rValue;
            mod->BSIM4ppscbe2Given = TRUE;
            break;                 
        case BSIM4_MOD_PPVAG:
            mod->BSIM4ppvag = value->rValue;
            mod->BSIM4ppvagGiven = TRUE;
            break;                 
        case  BSIM4_MOD_PWR :
            mod->BSIM4pwr = value->rValue;
            mod->BSIM4pwrGiven = TRUE;
            break;
        case  BSIM4_MOD_PDWG :
            mod->BSIM4pdwg = value->rValue;
            mod->BSIM4pdwgGiven = TRUE;
            break;
        case  BSIM4_MOD_PDWB :
            mod->BSIM4pdwb = value->rValue;
            mod->BSIM4pdwbGiven = TRUE;
            break;
        case  BSIM4_MOD_PB0 :
            mod->BSIM4pb0 = value->rValue;
            mod->BSIM4pb0Given = TRUE;
            break;
        case  BSIM4_MOD_PB1 :
            mod->BSIM4pb1 = value->rValue;
            mod->BSIM4pb1Given = TRUE;
            break;
        case  BSIM4_MOD_PALPHA0 :
            mod->BSIM4palpha0 = value->rValue;
            mod->BSIM4palpha0Given = TRUE;
            break;
        case  BSIM4_MOD_PALPHA1 :
            mod->BSIM4palpha1 = value->rValue;
            mod->BSIM4palpha1Given = TRUE;
            break;
        case  BSIM4_MOD_PBETA0 :
            mod->BSIM4pbeta0 = value->rValue;
            mod->BSIM4pbeta0Given = TRUE;
            break;
        case  BSIM4_MOD_PAGIDL :
            mod->BSIM4pagidl = value->rValue;
            mod->BSIM4pagidlGiven = TRUE;
            break;
        case  BSIM4_MOD_PBGIDL :
            mod->BSIM4pbgidl = value->rValue;
            mod->BSIM4pbgidlGiven = TRUE;
            break;
        case  BSIM4_MOD_PCGIDL :
            mod->BSIM4pcgidl = value->rValue;
            mod->BSIM4pcgidlGiven = TRUE;
            break;
        case  BSIM4_MOD_PPHIN :
            mod->BSIM4pphin = value->rValue;
            mod->BSIM4pphinGiven = TRUE;
            break;
        case  BSIM4_MOD_PEGIDL :
            mod->BSIM4pegidl = value->rValue;
            mod->BSIM4pegidlGiven = TRUE;
            break;
        case  BSIM4_MOD_PAIGC :
            mod->BSIM4paigc = value->rValue;
            mod->BSIM4paigcGiven = TRUE;
            break;
        case  BSIM4_MOD_PBIGC :
            mod->BSIM4pbigc = value->rValue;
            mod->BSIM4pbigcGiven = TRUE;
            break;
        case  BSIM4_MOD_PCIGC :
            mod->BSIM4pcigc = value->rValue;
            mod->BSIM4pcigcGiven = TRUE;
            break;
        case  BSIM4_MOD_PAIGSD :
            mod->BSIM4paigsd = value->rValue;
            mod->BSIM4paigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_PBIGSD :
            mod->BSIM4pbigsd = value->rValue;
            mod->BSIM4pbigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_PCIGSD :
            mod->BSIM4pcigsd = value->rValue;
            mod->BSIM4pcigsdGiven = TRUE;
            break;
        case  BSIM4_MOD_PAIGBACC :
            mod->BSIM4paigbacc = value->rValue;
            mod->BSIM4paigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_PBIGBACC :
            mod->BSIM4pbigbacc = value->rValue;
            mod->BSIM4pbigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_PCIGBACC :
            mod->BSIM4pcigbacc = value->rValue;
            mod->BSIM4pcigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_PAIGBINV :
            mod->BSIM4paigbinv = value->rValue;
            mod->BSIM4paigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_PBIGBINV :
            mod->BSIM4pbigbinv = value->rValue;
            mod->BSIM4pbigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_PCIGBINV :
            mod->BSIM4pcigbinv = value->rValue;
            mod->BSIM4pcigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_PNIGC :
            mod->BSIM4pnigc = value->rValue;
            mod->BSIM4pnigcGiven = TRUE;
            break;
        case  BSIM4_MOD_PNIGBINV :
            mod->BSIM4pnigbinv = value->rValue;
            mod->BSIM4pnigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_PNIGBACC :
            mod->BSIM4pnigbacc = value->rValue;
            mod->BSIM4pnigbaccGiven = TRUE;
            break;
        case  BSIM4_MOD_PNTOX :
            mod->BSIM4pntox = value->rValue;
            mod->BSIM4pntoxGiven = TRUE;
            break;
        case  BSIM4_MOD_PEIGBINV :
            mod->BSIM4peigbinv = value->rValue;
            mod->BSIM4peigbinvGiven = TRUE;
            break;
        case  BSIM4_MOD_PPIGCD :
            mod->BSIM4ppigcd = value->rValue;
            mod->BSIM4ppigcdGiven = TRUE;
            break;
        case  BSIM4_MOD_PPOXEDGE :
            mod->BSIM4ppoxedge = value->rValue;
            mod->BSIM4ppoxedgeGiven = TRUE;
            break;
        case  BSIM4_MOD_PXRCRG1 :
            mod->BSIM4pxrcrg1 = value->rValue;
            mod->BSIM4pxrcrg1Given = TRUE;
            break;
        case  BSIM4_MOD_PXRCRG2 :
            mod->BSIM4pxrcrg2 = value->rValue;
            mod->BSIM4pxrcrg2Given = TRUE;
            break;
        case  BSIM4_MOD_PEU :
            mod->BSIM4peu = value->rValue;
            mod->BSIM4peuGiven = TRUE;
            break;
        case  BSIM4_MOD_PVFB :
            mod->BSIM4pvfb = value->rValue;
            mod->BSIM4pvfbGiven = TRUE;
            break;

        case  BSIM4_MOD_PCGSL :
            mod->BSIM4pcgsl = value->rValue;
            mod->BSIM4pcgslGiven = TRUE;
            break;
        case  BSIM4_MOD_PCGDL :
            mod->BSIM4pcgdl = value->rValue;
            mod->BSIM4pcgdlGiven = TRUE;
            break;
        case  BSIM4_MOD_PCKAPPAS :
            mod->BSIM4pckappas = value->rValue;
            mod->BSIM4pckappasGiven = TRUE;
            break;
        case  BSIM4_MOD_PCKAPPAD :
            mod->BSIM4pckappad = value->rValue;
            mod->BSIM4pckappadGiven = TRUE;
            break;
        case  BSIM4_MOD_PCF :
            mod->BSIM4pcf = value->rValue;
            mod->BSIM4pcfGiven = TRUE;
            break;
        case  BSIM4_MOD_PCLC :
            mod->BSIM4pclc = value->rValue;
            mod->BSIM4pclcGiven = TRUE;
            break;
        case  BSIM4_MOD_PCLE :
            mod->BSIM4pcle = value->rValue;
            mod->BSIM4pcleGiven = TRUE;
            break;
        case  BSIM4_MOD_PVFBCV :
            mod->BSIM4pvfbcv = value->rValue;
            mod->BSIM4pvfbcvGiven = TRUE;
            break;
        case  BSIM4_MOD_PACDE :
            mod->BSIM4pacde = value->rValue;
            mod->BSIM4pacdeGiven = TRUE;
            break;
        case  BSIM4_MOD_PMOIN :
            mod->BSIM4pmoin = value->rValue;
            mod->BSIM4pmoinGiven = TRUE;
            break;
        case  BSIM4_MOD_PNOFF :
            mod->BSIM4pnoff = value->rValue;
            mod->BSIM4pnoffGiven = TRUE;
            break;
        case  BSIM4_MOD_PVOFFCV :
            mod->BSIM4pvoffcv = value->rValue;
            mod->BSIM4pvoffcvGiven = TRUE;
            break;

        case  BSIM4_MOD_TNOM :
            mod->BSIM4tnom = value->rValue + CONSTCtoK;
            mod->BSIM4tnomGiven = TRUE;
            break;
        case  BSIM4_MOD_CGSO :
            mod->BSIM4cgso = value->rValue;
            mod->BSIM4cgsoGiven = TRUE;
            break;
        case  BSIM4_MOD_CGDO :
            mod->BSIM4cgdo = value->rValue;
            mod->BSIM4cgdoGiven = TRUE;
            break;
        case  BSIM4_MOD_CGBO :
            mod->BSIM4cgbo = value->rValue;
            mod->BSIM4cgboGiven = TRUE;
            break;
        case  BSIM4_MOD_XPART :
            mod->BSIM4xpart = value->rValue;
            mod->BSIM4xpartGiven = TRUE;
            break;
        case  BSIM4_MOD_RSH :
            mod->BSIM4sheetResistance = value->rValue;
            mod->BSIM4sheetResistanceGiven = TRUE;
            break;
        case  BSIM4_MOD_JSS :
            mod->BSIM4SjctSatCurDensity = value->rValue;
            mod->BSIM4SjctSatCurDensityGiven = TRUE;
            break;
        case  BSIM4_MOD_JSWS :
            mod->BSIM4SjctSidewallSatCurDensity = value->rValue;
            mod->BSIM4SjctSidewallSatCurDensityGiven = TRUE;
            break;
        case  BSIM4_MOD_JSWGS :
            mod->BSIM4SjctGateSidewallSatCurDensity = value->rValue;
            mod->BSIM4SjctGateSidewallSatCurDensityGiven = TRUE;
            break;
        case  BSIM4_MOD_PBS :
            mod->BSIM4SbulkJctPotential = value->rValue;
            mod->BSIM4SbulkJctPotentialGiven = TRUE;
            break;
        case  BSIM4_MOD_MJS :
            mod->BSIM4SbulkJctBotGradingCoeff = value->rValue;
            mod->BSIM4SbulkJctBotGradingCoeffGiven = TRUE;
            break;
        case  BSIM4_MOD_PBSWS :
            mod->BSIM4SsidewallJctPotential = value->rValue;
            mod->BSIM4SsidewallJctPotentialGiven = TRUE;
            break;
        case  BSIM4_MOD_MJSWS :
            mod->BSIM4SbulkJctSideGradingCoeff = value->rValue;
            mod->BSIM4SbulkJctSideGradingCoeffGiven = TRUE;
            break;
        case  BSIM4_MOD_CJS :
            mod->BSIM4SunitAreaJctCap = value->rValue;
            mod->BSIM4SunitAreaJctCapGiven = TRUE;
            break;
        case  BSIM4_MOD_CJSWS :
            mod->BSIM4SunitLengthSidewallJctCap = value->rValue;
            mod->BSIM4SunitLengthSidewallJctCapGiven = TRUE;
            break;
        case  BSIM4_MOD_NJS :
            mod->BSIM4SjctEmissionCoeff = value->rValue;
            mod->BSIM4SjctEmissionCoeffGiven = TRUE;
            break;
        case  BSIM4_MOD_PBSWGS :
            mod->BSIM4SGatesidewallJctPotential = value->rValue;
            mod->BSIM4SGatesidewallJctPotentialGiven = TRUE;
            break;
        case  BSIM4_MOD_MJSWGS :
            mod->BSIM4SbulkJctGateSideGradingCoeff = value->rValue;
            mod->BSIM4SbulkJctGateSideGradingCoeffGiven = TRUE;
            break;
        case  BSIM4_MOD_CJSWGS :
            mod->BSIM4SunitLengthGateSidewallJctCap = value->rValue;
            mod->BSIM4SunitLengthGateSidewallJctCapGiven = TRUE;
            break;
        case  BSIM4_MOD_XTIS :
            mod->BSIM4SjctTempExponent = value->rValue;
            mod->BSIM4SjctTempExponentGiven = TRUE;
            break;
        case  BSIM4_MOD_JSD :
            mod->BSIM4DjctSatCurDensity = value->rValue;
            mod->BSIM4DjctSatCurDensityGiven = TRUE;
            break;
        case  BSIM4_MOD_JSWD :
            mod->BSIM4DjctSidewallSatCurDensity = value->rValue;
            mod->BSIM4DjctSidewallSatCurDensityGiven = TRUE;
            break;
        case  BSIM4_MOD_JSWGD :
            mod->BSIM4DjctGateSidewallSatCurDensity = value->rValue;
            mod->BSIM4DjctGateSidewallSatCurDensityGiven = TRUE;
            break;
        case  BSIM4_MOD_PBD :
            mod->BSIM4DbulkJctPotential = value->rValue;
            mod->BSIM4DbulkJctPotentialGiven = TRUE;
            break;
        case  BSIM4_MOD_MJD :
            mod->BSIM4DbulkJctBotGradingCoeff = value->rValue;
            mod->BSIM4DbulkJctBotGradingCoeffGiven = TRUE;
            break;
        case  BSIM4_MOD_PBSWD :
            mod->BSIM4DsidewallJctPotential = value->rValue;
            mod->BSIM4DsidewallJctPotentialGiven = TRUE;
            break;
        case  BSIM4_MOD_MJSWD :
            mod->BSIM4DbulkJctSideGradingCoeff = value->rValue;
            mod->BSIM4DbulkJctSideGradingCoeffGiven = TRUE;
            break;
        case  BSIM4_MOD_CJD :
            mod->BSIM4DunitAreaJctCap = value->rValue;
            mod->BSIM4DunitAreaJctCapGiven = TRUE;
            break;
        case  BSIM4_MOD_CJSWD :
            mod->BSIM4DunitLengthSidewallJctCap = value->rValue;
            mod->BSIM4DunitLengthSidewallJctCapGiven = TRUE;
            break;
        case  BSIM4_MOD_NJD :
            mod->BSIM4DjctEmissionCoeff = value->rValue;
            mod->BSIM4DjctEmissionCoeffGiven = TRUE;
            break;
        case  BSIM4_MOD_PBSWGD :
            mod->BSIM4DGatesidewallJctPotential = value->rValue;
            mod->BSIM4DGatesidewallJctPotentialGiven = TRUE;
            break;
        case  BSIM4_MOD_MJSWGD :
            mod->BSIM4DbulkJctGateSideGradingCoeff = value->rValue;
            mod->BSIM4DbulkJctGateSideGradingCoeffGiven = TRUE;
            break;
        case  BSIM4_MOD_CJSWGD :
            mod->BSIM4DunitLengthGateSidewallJctCap = value->rValue;
            mod->BSIM4DunitLengthGateSidewallJctCapGiven = TRUE;
            break;
        case  BSIM4_MOD_XTID :
            mod->BSIM4DjctTempExponent = value->rValue;
            mod->BSIM4DjctTempExponentGiven = TRUE;
            break;
        case  BSIM4_MOD_LINT :
            mod->BSIM4Lint = value->rValue;
            mod->BSIM4LintGiven = TRUE;
            break;
        case  BSIM4_MOD_LL :
            mod->BSIM4Ll = value->rValue;
            mod->BSIM4LlGiven = TRUE;
            break;
        case  BSIM4_MOD_LLC :
            mod->BSIM4Llc = value->rValue;
            mod->BSIM4LlcGiven = TRUE;
            break;
        case  BSIM4_MOD_LLN :
            mod->BSIM4Lln = value->rValue;
            mod->BSIM4LlnGiven = TRUE;
            break;
        case  BSIM4_MOD_LW :
            mod->BSIM4Lw = value->rValue;
            mod->BSIM4LwGiven = TRUE;
            break;
        case  BSIM4_MOD_LWC :
            mod->BSIM4Lwc = value->rValue;
            mod->BSIM4LwcGiven = TRUE;
            break;
        case  BSIM4_MOD_LWN :
            mod->BSIM4Lwn = value->rValue;
            mod->BSIM4LwnGiven = TRUE;
            break;
        case  BSIM4_MOD_LWL :
            mod->BSIM4Lwl = value->rValue;
            mod->BSIM4LwlGiven = TRUE;
            break;
        case  BSIM4_MOD_LWLC :
            mod->BSIM4Lwlc = value->rValue;
            mod->BSIM4LwlcGiven = TRUE;
            break;
        case  BSIM4_MOD_LMIN :
            mod->BSIM4Lmin = value->rValue;
            mod->BSIM4LminGiven = TRUE;
            break;
        case  BSIM4_MOD_LMAX :
            mod->BSIM4Lmax = value->rValue;
            mod->BSIM4LmaxGiven = TRUE;
            break;
        case  BSIM4_MOD_WINT :
            mod->BSIM4Wint = value->rValue;
            mod->BSIM4WintGiven = TRUE;
            break;
        case  BSIM4_MOD_WL :
            mod->BSIM4Wl = value->rValue;
            mod->BSIM4WlGiven = TRUE;
            break;
        case  BSIM4_MOD_WLC :
            mod->BSIM4Wlc = value->rValue;
            mod->BSIM4WlcGiven = TRUE;
            break;
        case  BSIM4_MOD_WLN :
            mod->BSIM4Wln = value->rValue;
            mod->BSIM4WlnGiven = TRUE;
            break;
        case  BSIM4_MOD_WW :
            mod->BSIM4Ww = value->rValue;
            mod->BSIM4WwGiven = TRUE;
            break;
        case  BSIM4_MOD_WWC :
            mod->BSIM4Wwc = value->rValue;
            mod->BSIM4WwcGiven = TRUE;
            break;
        case  BSIM4_MOD_WWN :
            mod->BSIM4Wwn = value->rValue;
            mod->BSIM4WwnGiven = TRUE;
            break;
        case  BSIM4_MOD_WWL :
            mod->BSIM4Wwl = value->rValue;
            mod->BSIM4WwlGiven = TRUE;
            break;
        case  BSIM4_MOD_WWLC :
            mod->BSIM4Wwlc = value->rValue;
            mod->BSIM4WwlcGiven = TRUE;
            break;
        case  BSIM4_MOD_WMIN :
            mod->BSIM4Wmin = value->rValue;
            mod->BSIM4WminGiven = TRUE;
            break;
        case  BSIM4_MOD_WMAX :
            mod->BSIM4Wmax = value->rValue;
            mod->BSIM4WmaxGiven = TRUE;
            break;

        case  BSIM4_MOD_NOIA :
            mod->BSIM4oxideTrapDensityA = value->rValue;
            mod->BSIM4oxideTrapDensityAGiven = TRUE;
            break;
        case  BSIM4_MOD_NOIB :
            mod->BSIM4oxideTrapDensityB = value->rValue;
            mod->BSIM4oxideTrapDensityBGiven = TRUE;
            break;
        case  BSIM4_MOD_NOIC :
            mod->BSIM4oxideTrapDensityC = value->rValue;
            mod->BSIM4oxideTrapDensityCGiven = TRUE;
            break;
        case  BSIM4_MOD_EM :
            mod->BSIM4em = value->rValue;
            mod->BSIM4emGiven = TRUE;
            break;
        case  BSIM4_MOD_EF :
            mod->BSIM4ef = value->rValue;
            mod->BSIM4efGiven = TRUE;
            break;
        case  BSIM4_MOD_AF :
            mod->BSIM4af = value->rValue;
            mod->BSIM4afGiven = TRUE;
            break;
        case  BSIM4_MOD_KF :
            mod->BSIM4kf = value->rValue;
            mod->BSIM4kfGiven = TRUE;
            break;
        case  BSIM4_MOD_NMOS  :
            if(value->iValue) {
                mod->BSIM4type = 1;
                mod->BSIM4typeGiven = TRUE;
            }
            break;
        case  BSIM4_MOD_PMOS  :
            if(value->iValue) {
                mod->BSIM4type = - 1;
                mod->BSIM4typeGiven = TRUE;
            }
            break;
        default:
            return(E_BADPARM);
    }
    return(OK);
}

