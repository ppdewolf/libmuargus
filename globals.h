/*
* Argus Open Source
* Software to apply Statistical Disclosure Control techniques
* 
* Copyright 2014 Statistics Netherlands
* 
* This program is free software; you can redistribute it and/or 
* modify it under the terms of the European Union Public Licence 
* (EUPL) version 1.1, as published by the European Commission.
* 
* You can find the text of the EUPL v1.1 on
* https://joinup.ec.europa.eu/software/page/eupl/licence-eupl
* 
* This software is distributed on an "AS IS" basis without 
* warranties or conditions of any kind, either express or implied.
*/

#if !defined globals_h
#define globals_h

#define MAXCODEWIDTH 100
#define MAXRECORDLENGTH 32000
#define MAXMEMORYUSE 50000000
#define MAXDIM 10

#define RISKMODEL 2

#define PRAM_NOT_NA 1000

#define FIREPROGRESS 1000

#define INFILE_ERROR -1
#define INFILE_EOF    0
#define INFILE_OKE    1

#define BIR_MINMAX 1
#define BIR_FREQ   2
#define BIR_UNSAFE 3
#define BIR_RATE_RISK 4



#define SEPARATOR "\r\n"

enum ErrorCodes {
	FILENOTFOUND = 1000,
	CANTOPENFILE,
	EMPTYFILE,
	WRONGLENGTH,
	RECORDTOOSHORT,
	WRONGRECORD,
        NOVARIABLES,
	NOTABLES,
	NOTENOUGHMEMORY,
        NOTABLEMEMORY, 
	SUBTABLENOSUB,
	SUBTABLEWRONGVAR,
        NODATAFILE,
	PROGRAMERROR,

	// parsing recode
	E_HARD = 2000,
	E_SOFT,
        E_NOVARTABDATA,
	E_LENGTHWRONG,
        E_RANGEWRONG,
	E_VARINDEXWRONG,
	E_EMPTYSPEC,
  
	// codes recode
	R_FROMTOOBIG = 3000,
	R_CODENOTINLIST,
	R_NOSENSE,
	R_MISSING2VALID,

	// HBIR
	NOBIRTAB,
	NOHOUSEHOLDS

};

enum RecodePhase {
	CHECK = 10,
	DESTCODE,
	SRCCODE
};

enum FormToCodes {
        FROMTO_TO = 10,   // -23
        FROMTO_SOLO,      // 34
	FROMTO_FROM,      // 23-
	FROMTO_RANGE      // 23-25
};

enum HHIdentOption {
	HHIDENT_NO,
	HHIDENT_KEEP,
	HHIDENT_CHANGESEQNO,
	HHIDENT_DELETE
};


#endif
