/**
	All Rights Reserved,(c)JACIC 2001
	SXFD_BoolC.h						ì¬úF2000.04.12

	PDNXTv
		Bool^ÌvfðÛµoÍ·éNX

	QDð
		ðÔ	út		SÒ		Tv
		ì¬		2000.04.12	{(FQS)	ÈµB
**/
#ifndef _SXFD_BOOLC_H_
#define _SXFD_BOOLC_H_


#include "SXFInstanceC.h"

#include <afx.h>

class SXFPart21FileC;
//
//	BOOL DEFINITION
//
class SXFD_BoolC : public SXFInstanceC {
protected :
	BOOL	m_Data ;
	CString s_Data ;
public :
//
//	Default Constructor
//
	SXFD_BoolC( ) :m_Data(FALSE), s_Data("FALSE") { }
//
//	Constructor with Data
//
	SXFD_BoolC(BOOL) ;

	SXFD_BoolC(CString) ;
//
//	Destructor
//
	~SXFD_BoolC( ) { }
//
//	Data Set
//
	void	SetData( BOOL ) ;
//
//	Data Get
//
	BOOL	GetData( ) ;
//
//
//
	void WriteP21(SXFPart21FileC *IN_file){}
	void WriteAttr(SXFPart21FileC *IN_file);
} ;

#endif	// _D_BOOL_H_
