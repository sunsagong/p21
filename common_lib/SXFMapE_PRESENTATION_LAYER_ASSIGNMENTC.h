/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapE_PRESENTATION_LAYER_ASSIGNMENTC.h						ì¬úF2000.04.17

	PDNXTv
		PRESENTATION_LAYER_ASSIGNMENTðÇ·éNX

	QDð
		ðÔ	út¯		SÒ		Tv
		ì¬		2000.04.17	

**/
#ifndef _SXFMapE_PRESENTATION_LAYER_ASSIGNMENTC_CLASS_
#define _SXFMapE_PRESENTATION_LAYER_ASSIGNMENTC_CLASS_

class SXFMapE_PRESENTATION_LAYER_ASSIGNMENTC:public SXFMapEntityBaseC{
public :
	SXFMapE_PRESENTATION_LAYER_ASSIGNMENTC( );
	SXFMapE_PRESENTATION_LAYER_ASSIGNMENTC(
		SXFInstanceIDC* IN_InstanceIDManeger);

	~SXFMapE_PRESENTATION_LAYER_ASSIGNMENTC( );

	int	SetParameter( );

/*
  ENTITY presentation_layer_assignment;
	  name			 : label;
	  description	 : text;
	  assigned_items : SET [1:?] OF layered_item;
  END_ENTITY; -- presentation_layer_assignment
*/

	CString m_Name;

	CString m_Description;

	CArray<int, int> m_AssignedItems;
	int m_AssignedItemsCount;

private:


};
#endif
