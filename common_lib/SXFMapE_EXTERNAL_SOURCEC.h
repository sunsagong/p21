/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapE_EXTERNAL_SOURCEC.h						ì¬úF2000.04.17

	PDNXTv
		EXTERNAL_SOURCEðÇ·éNX

	QDð
		ðÔ	út¯		SÒ		Tv
		ì¬		2000.04.17	

**/
#ifndef _SXFMapE_EXTERNAL_SOURCEC_CLASS_
#define _SXFMapE_EXTERNAL_SOURCEC_CLASS_

class SXFMapE_EXTERNAL_SOURCEC:public SXFMapEntityBaseC{
public :
	SXFMapE_EXTERNAL_SOURCEC( );
	SXFMapE_EXTERNAL_SOURCEC(
		SXFInstanceIDC* IN_InstanceIDManeger);

	~SXFMapE_EXTERNAL_SOURCEC( );

	int	SetParameter( );

public:

	CString m_Name;
};
#endif
