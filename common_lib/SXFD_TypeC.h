/**
	All Rights Reserved,(c)JACIC 2001
	SXFD_TypeC.h						ì¬úF2000.04.12

	PDNXTv
		Type^vfðÛµoÍ·éNX

	QDð
		ðÔ	út		SÒ		Tv
		ì¬		2000.04.12	{(FQS)	ÈµB
**/
#ifndef _SXFD_TYPEC_H_
#define _SXFD_TYPEC_H_

#include "SXFInstanceC.h"
#include <afx.h>

class SXFPart21FileC;
//
//	TYPE DEFINITION
//
class SXFD_TypeC : public SXFInstanceC {
protected :
	CString		m_Data ;
	SXFInstanceC*	m_Next ;
public :
//
//	Default Constructor
//
	SXFD_TypeC( ) { }
//
//	Constructor with Name
//
	SXFD_TypeC( char* ) ;
//
//	Destructor
//
	~SXFD_TypeC( ) { }
//
//	Next Data Set Method
//
	void	SetNext( SXFInstanceC* ) ;
//
//	Data Get
//
	LPCTSTR	GetData( ) ;
//
//
//
	SXFInstanceC* GetNext( ) ;
//
//
//
	void WriteP21(SXFPart21FileC *IN_file);
	void WriteAttr(SXFPart21FileC *IN_file);
} ;

#endif	// _D_TYPE_H_
