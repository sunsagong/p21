/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapE_EXTERNAL_DEFINED_TEXT_FONTC.h						ì¬úF2000.04.17

	PDNXTv
		EXTERNAL_DEFINED_TEXT_FONTðÇ·éNX

	QDð
		ðÔ	út¯		SÒ		Tv
		ì¬		2000.04.17	

**/
#ifndef _SXFMapE_EXTERNAL_DEFINED_TEXT_FONTC_CLASS_
#define _SXFMapE_EXTERNAL_DEFINED_TEXT_FONTC_CLASS_

#include "SXFMapE_EXTERNAL_SOURCEC.h"

class SXFMapE_EXTERNAL_DEFINED_TEXT_FONTC:public SXFMapEntityBaseC{
public :
	SXFMapE_EXTERNAL_DEFINED_TEXT_FONTC( );
	SXFMapE_EXTERNAL_DEFINED_TEXT_FONTC(
		SXFInstanceIDC* IN_InstanceIDManeger);

	~SXFMapE_EXTERNAL_DEFINED_TEXT_FONTC( );

	int	SetParameter( );

public:

	CString m_Name;

	int m_Source_Inst;
	SXFMapE_EXTERNAL_SOURCEC* m_Source_p;

};
#endif
