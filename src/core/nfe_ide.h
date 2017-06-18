#ifndef STRUCT_H
#define STRUCT_H

#include "enum.h"
#define FORMATO_dhEmi = "%Y-%m-%d-T-%H:%M:%S-03:00";
#define FORMATO_dhSaiEnt = FORMATO_dhEmi;

typedef struct {
	unsigned char cUF;
	unsigned int cNF;
	const char natOp;
        TE_INDPAG indPag;
	TE_MOD mod;		
	unsigned short serie;
	unsigned int nNF;
	const char dhEmi;
	const char dhSaiEnt;
	TE_TPNF tpNF;
	TE_IDDEST isDest;
	unsigned int cMunFG;
	TE_TPIMP tpImp;
	TE_TPEMIS tpEmis;	
	unsigned char cDV;
	TE_TPAMB tpAmb;
	TE_FINNFE finNFe;
	TE_INDFINAL indFinal;
	TE_INDPRES indPres;
	TE_PROCEMI procEmi;	
	const char verProc;

} IDNFE;


#endif
