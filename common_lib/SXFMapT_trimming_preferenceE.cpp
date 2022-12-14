
/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapT_trimming_preferenceE.cpp						ì¬úF2000.04.21

	PD@\Tv
		ñ^ðè`·é

		  TYPE trimming_preference = ENUMERATION OF
		    (cartesian,
		     parameter,
		     unspecified);
		  END_TYPE; -- trimming_preference

	QDð
	ðÔ	út¯		SÒ			Tv
	ì¬		2000.04.21	
**/


#include "stdafx.h"
#include "SXFErrorMsgC.h"
#include "SXFMapT_trimming_preferenceE.h"
#include "SXFComndef.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

int	GetEnumType(CString IN_EntityData,	preferencetype& OUT_Enum )
{

		if (IN_EntityData.Find(DEF_D_CARTESIAN) != -1){
			OUT_Enum = 	cartesian;	
		}
		else if ( IN_EntityData.Find(DEF_D_PARAMETER) != -1){
			OUT_Enum = 	parameter;	
		}
		else if ( IN_EntityData.Find(DEF_D_UNSPECIFIED) != -1){
			OUT_Enum = 	unspecified;	
		}
		else{
			//SCADECÌÎÛOGeBeB -54000
			return SXFEXCEPT;
		}

	return 0;
}
