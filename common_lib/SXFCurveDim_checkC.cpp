/**
	All Rights Reserved,(c) JACIC 2001
	SXFCurveDim_checkC.cpp								�쐬���F2007.1.29

	�P�D�N���X�T�v
	�ʒ����@�t�B�[�`���̃��[���`�F�b�N���s���N���X

	�Q�D����
	����ԍ�		���t��				�S����				�T�v
	�쐬			2007.1.29			����				�Ȃ��B

**/

#include "stdafx.h"
#include "SXFCurveDim_checkC.h"
#include "SXFErrorMsgC.h"
#include "SXFTableManagerC.h"
#include "SXFComndef.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/**
	All Rights Reserved,(c) JACIC 2001
	SXFCurveDim_checkC.cpp								�쐬���F2007.1.29

	�P�D�@�\�T�v
		�R���X�g���N�^

	�Q�D�C���^�[�t�F�[�X
		void	SXFCurveDim_checkC::SXFCurveDim_checkC()
		
	����	�F	�^		������				���e
		�Ȃ�

	�R�D����
	����ԍ�		���t��				�S����				�T�v
	�쐬			2007.1.29			����				�Ȃ��B

**/
SXFCurveDim_checkC::SXFCurveDim_checkC()
{
}

/**
	All Rights Reserved,(c) JACIC 2001
	SXFCurveDim_checkC.cpp								�쐬���F2007.1.29

	�P�D�@�\�T�v
		�f�X�g���N�^

	�Q�D�C���^�[�t�F�[�X
		void	SXFCurveDim_checkC::~SXFCurveDim_checkC()
		
	����	�F	�^		������				���e
		�Ȃ�

	�R�D����
	����ԍ�		���t��				�S����				�T�v
	�쐬			2007.1.29			����				�Ȃ��B

**/
SXFCurveDim_checkC::~SXFCurveDim_checkC()
{
}

/**
	All Rights Reserved,(c) JACIC 2001
	SXFCurveDim_checkC.cpp								�쐬���F2007.1.29

	�P�D�@�\�T�v
		�ʒ����@�t�B�[�`���̃��[���`�F�b�N���s��

	�Q�D�C���^�[�t�F�[�X
	int Feature_rule_check(CurveDim_Struct IN_curvedim_str,
							SXFTableManagerC* IN_TableManager,
							CString IN_InstanceID,
							SXFComInfoC* IN_Info);

	����:	�^				������			���e
			CurveDim_Struct		IN_curvedim_str		�ʒ����@�\����
			SXFTableManagerC*	IN_TableManager		��`�e�[�u���v�f�Ǘ��I�u�W�F�N�g
			CString				IN_InstanceID		�C���X�^���XID
			SXFComInfoC*		IN_Info				���ʏ��

	���A�l	���펞�F�O
			�ُ펞�F�G���[�ԍ�

	�R�D����
	����ԍ�		���t��				�S����				�T�v
	�쐬			2007.1.29			����				�Ȃ��B

**/
int SXFCurveDim_checkC::Feature_rule_check(CurveDim_Struct* IN_curvedim_str,
											 SXFTableManagerC* IN_TableManager,
											 CString IN_InstanceID,
											 SXFComInfoC* IN_Info)
{
	int ret ;

	m_feature_name = DEF_CURVE_DIM;
	m_TableManager = IN_TableManager;
	m_InstanceID = IN_InstanceID;
	m_ComInfo = IN_Info;
	/** �����̃��[���`�F�b�N **/
	ret  = attr_rule_check(IN_curvedim_str) ;
	if (ret < 0)
		return ret ;
	/** �����ȊO�̃��[���`�F�b�N **/
	ret = str_rule_check(IN_curvedim_str);
	if (ret < 0)
		return ret;

	return 0 ;
}

/**
	All Rights Reserved,(c) JACIC 2001
	SXFCurveDim_checkC.cpp								�쐬���F2007.1.29

	�P�D�@�\�T�v
		�ʒ����@�t�B�[�`���̑����̃��[���`�F�b�N

	�Q�D�C���^�[�t�F�[�X
	int attr_rule_check(CurveDim_Struct IN_curvedim_str);

	����:	�^					������				���e
			CurveDim_Struct		IN_curvedim_str		�ʒ����@�\����

	���A�l	���펞�F�O
			�ُ펞�F�G���[�ԍ�

	�R�D����
	����ԍ�		���t��				�S����				�T�v
	�쐬			2007.1.29			����				�Ȃ��B

**/
int SXFCurveDim_checkC::attr_rule_check(CurveDim_Struct* IN_curvedim_str)
{
	m_layer = IN_curvedim_str->layer ;
	m_color = IN_curvedim_str->color ;
	m_type = IN_curvedim_str->type ;
	m_line_width = IN_curvedim_str->line_width ;
	m_font = IN_curvedim_str->font ;

	int ret = DimFeature_Check(IN_curvedim_str->flg4) ;
	return ret ;
}

/**
	All Rights Reserved,(c) JACIC 2001
	SXFCurveDim_checkC.cpp								�쐬���F2007.1.29

	�P�D�@�\�T�v
		�ʒ����@�t�B�[�`���̑����ȊO�̃��[���`�F�b�N

	�Q�D�C���^�[�t�F�[�X
	int str_rule_check(CurveDim_Struct IN_curvedim_str)

	����:	�^					������				���e
			CurveDim_Struct		IN_curvedim_str		�ʒ����@�\����
	
	���A�l	���펞�F�O
			�ُ펞�F�G���[�ԍ�

	�R�D����
	����ԍ�		���t��				�S����				�T�v
	�쐬			2007.1.29			����				�Ȃ��B

**/
int SXFCurveDim_checkC::str_rule_check(CurveDim_Struct* IN_curvedim_str)
{
	int ret;
//���@��
	Arc_Struct Arc_str;

	Arc_str.layer = IN_curvedim_str->layer;
	Arc_str.color = IN_curvedim_str->color;
	Arc_str.type = IN_curvedim_str->type;
	Arc_str.line_width = IN_curvedim_str->line_width;
	Arc_str.center_x = IN_curvedim_str->sun_x;
	Arc_str.center_y = IN_curvedim_str->sun_y;
	Arc_str.radius = IN_curvedim_str->sun_radius;
	Arc_str.direction = 1;
	Arc_str.start_angle = IN_curvedim_str->sun_angle0;
	Arc_str.end_angle = IN_curvedim_str->sun_angle1;
	ret = arcstr_rule_check(&Arc_str, false);
	if (ret < 0)
		return ret;
//�⏕���P
	ret = proj_check(IN_curvedim_str->flg2,
					IN_curvedim_str->ho1_x0,
					IN_curvedim_str->ho1_y0,
					IN_curvedim_str->ho1_x1,
					IN_curvedim_str->ho1_y1,
					IN_curvedim_str->ho1_x2,
					IN_curvedim_str->ho1_y2) ;
	if (ret < 0) 
		return ret ;

//�⏕���Q
	ret = proj_check(IN_curvedim_str->flg3,
					IN_curvedim_str->ho2_x0,
					IN_curvedim_str->ho2_y0,
					IN_curvedim_str->ho2_x1,
					IN_curvedim_str->ho2_y1,
					IN_curvedim_str->ho2_x2,
					IN_curvedim_str->ho2_y2) ;
	if (ret < 0) 
		return ret ;
//���P
	ret = arr_check(IN_curvedim_str->arr1_code1,
					IN_curvedim_str->arr1_code2,
					IN_curvedim_str->arr1_r) ;
	if (ret < 0) 
		return ret ;

//���Q
	ret = arr_check(IN_curvedim_str->arr2_code1,
					IN_curvedim_str->arr2_code2,
					IN_curvedim_str->arr2_r) ;
	if (ret < 0) 
		return ret ;

//�����v�f
	Text_Struct Text_str;

	Text_str.layer = IN_curvedim_str->layer ;
	Text_str.color = IN_curvedim_str->color ;
	Text_str.font = IN_curvedim_str->font ;
	Text_str.text_x = IN_curvedim_str->text_x ;
	Text_str.text_y = IN_curvedim_str->text_y ;
	Text_str.height = IN_curvedim_str->height ;
	Text_str.width = IN_curvedim_str->width ;
	Text_str.spc = IN_curvedim_str->spc ;
	Text_str.angle = IN_curvedim_str->angle ;
	Text_str.slant = IN_curvedim_str->slant ;
	Text_str.b_pnt = IN_curvedim_str->b_pnt ;
	Text_str.direct = IN_curvedim_str->direct ;

	//���@�l�̗L���t���O��0�܂���1�ł͂Ȃ��Ƃ�
	if ((IN_curvedim_str->flg4 < 0) || (IN_curvedim_str->flg4 > 1)){
		SXFErrorMsgC::RecordError(SXFTEXTFLAG,
									m_feature_name,
									3,
									m_InstanceID,
									IN_curvedim_str->flg4,
									m_feature_name);
		return SXFTEXTFLAG;
	}
	if (IN_curvedim_str->flg4 != 0){
		ret	= textstr_rule_check (&Text_str);
		if (ret < 0)
			return ret ;
	}
	return 0 ;

}