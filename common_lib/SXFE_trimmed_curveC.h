/**
	All Rights Reserved,(c) JACIC 2001
	SXFE_trimmed_curveC.h								ì¬úF2000.4.18

	PDNXTv
	trimmed_curveÌGeBeBf[^Ç

	QDð
	ðÔ		út¯				SÒ				Tv
	ì¬			2000.4.18			{(FQS)			ÈµB

**/
#ifndef _E_TRIMMED_CURVE_H_
#define _E_TRIMMED_CURVE_H_

#include "SXFD_InstC.h"

class SXFD_StrC;
class SXFD_AggrC;
class SXFD_BoolC;
class SXFD_EnumC;
//
//
//
class SXFE_trimmed_curveC : public SXFD_InstC {
protected :
public :
//
//	Constructor
//
	SXFE_trimmed_curveC(SXFD_StrC*,
		SXFD_InstC*,
		SXFD_AggrC*,
		SXFD_AggrC*,
		SXFD_BoolC*,
		SXFD_EnumC*);
} ;

#endif	// _E_TRIMMED_CURVE_H_
