/**
	All Rights Reserved,(c) JACIC 2001
	SXFE_styled_itemC.h								์ฌ๚F2000.4.18

	PDNXTv
	styled_itemฬGeBeBf[^ว

	QD๐
	๐ิ		๚tฏ				Sา				Tv
	์ฌ			2000.4.18			{(FQS)			ศตB

**/
#ifndef _E_STYLED_ITEM_H_
#define _E_STYLED_ITEM_H_

#include "SXFD_InstC.h"
#include <afx.h>

class SXFD_AggrC;
class SXFD_StrC;
class SXFPart21FileC;
//
//
//
class SXFE_styled_itemC : public SXFD_InstC {
protected :
	CStringList *m_StrList;
	int type_flg;
public :
//
//	Constructor
//
	SXFE_styled_itemC(SXFD_StrC*,SXFD_AggrC*,SXFD_InstC*,CStringList*);
	SXFE_styled_itemC(SXFD_AggrC*,SXFD_AggrC*,SXFD_InstC*,SXFD_AggrC*);
	SXFE_styled_itemC(SXFD_AggrC*,SXFD_AggrC*,SXFD_InstC*);
	SXFE_styled_itemC(SXFD_StrC* str1,SXFD_AggrC* aggr1,SXFD_InstC *inst1);
//
//
//
	void WriteP21(SXFPart21FileC *IN_file);
} ;

#endif	// _E_STYLED_ITEM_H_
