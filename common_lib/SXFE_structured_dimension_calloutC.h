/**
	All Rights Reserved,(c) JACIC 2001
	SXFE_structured_dimension_calloutC.h								์ฌ๚F2000.4.18

	PDNXTv
	structured_dimension_calloutฬGeBeBf[^ว

	QD๐
	๐ิ		๚tฏ				Sา				Tv
	์ฌ			2000.4.18			{(FQS)			ศตB

**/
#ifndef _E_STRUCTURED_DIMENSION_CALLOUT_H_
#define _E_STRUCTURED_DIMENSION_CALLOUT_H_

#include "SXFD_InstC.h"

class SXFD_StrC;
class SXFD_AggrC;
class SXFPart21FileC;
//
//
//
class SXFE_structured_dimension_calloutC : public SXFD_InstC {
public :
//
//	Constructor
//
	SXFE_structured_dimension_calloutC(SXFD_StrC*,SXFD_AggrC*);
//
//
//
	void WriteP21(SXFPart21FileC *IN_file);
} ;

#endif	// _E_STRUCTURED_DIMENSION_CALLOUT_H_
