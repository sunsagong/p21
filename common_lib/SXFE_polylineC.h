/**
	All Rights Reserved,(c) JACIC 2001
	SXFE_polylineC.h								์ฌ๚F2000.4.18

	PDNXTv
	polylineฬGeBeBf[^ว

	QD๐
	๐ิ		๚tฏ				Sา				Tv
	์ฌ			2000.4.18			{(FQS)			ศตB

**/
#ifndef _E_POLYLINE_H_
#define _E_POLYLINE_H_

#include "SXFD_InstC.h"

class SXFD_StrC;
class SXFD_AggrC;
class SXFD_ListAggrC;

//
//
//
class SXFE_polylineC : public SXFD_InstC {
protected :
public :
//
//	Constructor
//
	SXFE_polylineC(SXFD_StrC*,SXFD_AggrC*);
	SXFE_polylineC(SXFD_StrC*,SXFD_ListAggrC*);//ID_153_000607_ins
} ;

#endif	// _E_POLYLINE_H_
