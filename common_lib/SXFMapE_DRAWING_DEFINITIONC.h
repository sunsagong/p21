/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapE_DRAWING_DEFINITIONC.h						ì¬úF2000.04.17

	PDNXTv
		DRAWING_DEFINITIONðÇ·éNX

	QDð
		ðÔ	út¯		SÒ		Tv
		ì¬		2000.04.17	

**/
#ifndef _SXFMapE_DRAWING_DEFINITIONC_CLASS_
#define _SXFMapE_DRAWING_DEFINITIONC_CLASS_

class SXFMapE_DRAWING_DEFINITIONC:public SXFMapEntityBaseC{
public :
	SXFMapE_DRAWING_DEFINITIONC( );
	SXFMapE_DRAWING_DEFINITIONC(
		SXFInstanceIDC* IN_InstanceIDManeger);

	~SXFMapE_DRAWING_DEFINITIONC( );

	int	SetParameter( );

public:

/*
  ENTITY drawing_definition;
	  drawing_number : identifier;
	  drawing_type	 : OPTIONAL label;
  END_ENTITY; -- drawing_definition
*/

	CString m_DrawingNumber;
	CString m_DrawingType;
};
#endif
////////////////////////////
