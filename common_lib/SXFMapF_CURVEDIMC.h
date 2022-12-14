/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapF_CURVEDIMC.h						ì¬úF2000.04.17

	PDNXTv
		Ê·¡@tB[`ðÇ·éNX

	QDð
		ðÔ	út¯		SÒ		Tv
		ì¬		2000.04.17	

**/

#ifndef _SXFMapF_CURVEDIMC_CLASS_
#define _SXFMapF_CURVEDIMC_CLASS_

class SXFMapF_CURVEDIMC : 
	public SXFMapFeatureBaseC,
	public SXFMapF_CurveStyleBaseC	{
public :
	SXFMapF_CURVEDIMC( );
	~SXFMapF_CURVEDIMC( );

	BOOL GetStructData( CurveDim_Struct* INOUT_Struct );

// Ê·¡@Ìü«tOðÝè·é
	BOOL SetArrFlag(  
				int IN_term1,	//îóPÌLè³µtO
				int IN_term2,	//îóQÌLè³µtO
				double IN_sun_x,	//¡@üÌ´_i~ÊSX)
				double IN_sun_y,	//¡@üÌ´_i~ÊSYj
				double IN_arr1_x,	//îóPzu_X
				double IN_arr1_y,	//îóPzu_Y
				double IN_arr2_x,	//îóQzu_X
				double IN_arr2_y,	//îóQzu_Y				
				double IN_tmvec_x1,	//îóPÌxNgX
				double IN_tmvec_y1,	//îóPÌxNgY
				double IN_tmvec_x2,	//îóQÌxNgX
				double IN_tmvec_y2	//îóQÌxNgY	
				);

public:
/*
typedef struct CurveDim_StructDF{

	int layer;
	int color;
	int type;
	int line_width;

	double sun_x;
	double sun_y;
	double sun_radius;
	double sun_angle0;
	double sun_angle1;
//
	int flg2;
	double ho1_x0;
	double ho1_y0;
	double ho1_x1;
	double ho1_y1;
	double ho1_x2;
	double ho1_y2;
//

	int flg3;
	double ho2_x0;
	double ho2_y0;
	double ho2_x1;
	double ho2_y1;
	double ho2_x2;
	double ho2_y2;
//
	int arr1_code1;
	int arr1_code2;
	double arr1_x;
	double arr1_y;
	double arr1_r;
//
	int arr2_code1;
	int arr2_code2;
	double arr2_x;
	double arr2_y;
	double arr2_r;
//
	int flg4;
	int font;
	char str[MAXTEXT];
	double text_x;
	double text_y;
	double height;
	double width;
	double spc;
	double angle;
	double slant;
	int b_pnt;
	int direct;

} CurveDim_Struct;
*/

	double m_sun_x;
	double m_sun_y;
	double m_sun_radius;
	double m_sun_angle0;
	double m_sun_angle1;
//
	int    m_flg2;
	double m_ho1_x0;
	double m_ho1_y0;
	double m_ho1_x1;
	double m_ho1_y1;
	double m_ho1_x2;
	double m_ho1_y2;
//

	int    m_flg3;
	double m_ho2_x0;
	double m_ho2_y0;
	double m_ho2_x1;
	double m_ho2_y1;
	double m_ho2_x2;
	double m_ho2_y2;
//
	int    m_arr1_code1;
	int    m_arr1_code2;
	double m_arr1_x;
	double m_arr1_y;
	double m_arr1_r;
//
	int    m_arr2_code1;
	int    m_arr2_code2;
	double m_arr2_x;
	double m_arr2_y;
	double m_arr2_r;
//
	int    m_flg4;
	int    m_font;
	CString m_str;
	double m_text_x;
	double m_text_y;
	double m_height;
	double m_width;
	double m_spc;
	double m_angle;
	double m_slant;
	int    m_b_pnt;
	int    m_direct;

};
#endif
