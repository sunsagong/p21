/**
	All Rights Reserved,(c) JACIC 2001
	SXFMapE_TWO_DIRECTION_REPEAT_FACTORC.cpp						作成日：2000.04.17

	１．クラス概要
		TWO_DIRECTION_REPEAT_FACTORを管理するクラス

	２．履歴
		履歴番号	日付け		担当者		概要
		作成		2000.04.17	

**/
#include "stdafx.h"
#include <afxtempl.h>
#include "SXFMapEntAConvC.h"
#include "SXFMapEntityBaseC.h"
#include "SXFInstanceIDC.h"
#include "SXFMapE_TWO_DIRECTION_REPEAT_FACTORC.h"
#include "SXFComndef.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapE_TWO_DIRECTION_REPEAT_FACTORC.cpp						作成日：2000.04.17

	１．機能概要
		デフォルトコンストラクタ

	２．インターフェイス
		void	SXFMapE_TWO_DIRECTION_REPEAT_FACTORC::SXFMapE_TWO_DIRECTION_REPEAT_FACTORC()

	引数  ：	型			引数名				内容
			なし
	復帰値：なし

	３．履歴
	履歴番号	日付け		担当者			概要
	作成		2000.04.17	
**/
SXFMapE_TWO_DIRECTION_REPEAT_FACTORC::SXFMapE_TWO_DIRECTION_REPEAT_FACTORC()
{
	m_EntityName = DEF_TWO_DIRECTION_REPEAT_FACTOR;

	m_FirstFactor_Inst = 0;
	m_FirstFactor_p = NULL;

	m_SecondFactor_Inst = 0;
	m_SecondFactor_p = NULL;

}

/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapE_TWO_DIRECTION_REPEAT_FACTORC.cpp						作成日：2000.04.17

	１．機能概要
		インスタンスＩＤへのポインタを指定して生成する場合
		(コンストラクタ)

	２．インターフェイス
		void	SXFMapE_TWO_DIRECTION_REPEAT_FACTORC::SXFMapE_TWO_DIRECTION_REPEAT_FACTORC(
						SXFInstanceIDC* IN_InstanceIDManeger)
        :SXFMapEntityBaseC(IN_InstanceIDManeger)

	引数  ：	型				引数名				内容
				SXFInstanceIDC* IN_InstanceIDManeger	ｲﾝｽﾀﾝｽID管理ｵﾌﾞｼﾞｪｸﾄ

	復帰値：なし

	３．履歴
	履歴番号	日付け		担当者			概要
	作成		2000.04.17	
**/
SXFMapE_TWO_DIRECTION_REPEAT_FACTORC::SXFMapE_TWO_DIRECTION_REPEAT_FACTORC(
	SXFInstanceIDC* IN_InstanceIDManeger)
	:SXFMapEntityBaseC(IN_InstanceIDManeger)
{
	m_EntityName = DEF_TWO_DIRECTION_REPEAT_FACTOR;

	m_FirstFactor_Inst = 0;
	m_FirstFactor_p = NULL;

	m_SecondFactor_Inst = 0;
	m_SecondFactor_p = NULL;

}

/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapE_TWO_DIRECTION_REPEAT_FACTORC.cpp						作成日：2000.04.17

	１．機能概要
		(デストラクタ)

	２．インターフェイス
		void	SXFMapE_TWO_DIRECTION_REPEAT_FACTORC::~SXFMapE_TWO_DIRECTION_REPEAT_FACTORC()

	引数  ：	型			引数名				内容
			なし

	復帰値：なし

	３．履歴
	履歴番号	日付け		担当者			概要
	作成		2000.04.17	
**/
SXFMapE_TWO_DIRECTION_REPEAT_FACTORC::~SXFMapE_TWO_DIRECTION_REPEAT_FACTORC()
{

	if(m_FirstFactor_p!=NULL)
		delete m_FirstFactor_p;
	if(m_SecondFactor_p!=NULL)
		delete m_SecondFactor_p;

}

/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapE_TWO_DIRECTION_REPEAT_FACTORC.cpp						作成日：2000.04.17

	１．機能概要
		エンティティのパラメタ設定

	２．インターフェイス
		int		SXFMapE_TWO_DIRECTION_REPEAT_FACTORC::SetParameter()

	引数  ：	型			引数名				内容
			なし

	復帰値：なし

	３．履歴
	履歴番号	日付け		担当者			概要
	作成		2000.04.17	
**/
int SXFMapE_TWO_DIRECTION_REPEAT_FACTORC::SetParameter( )
{

	int ircode;

	SXFMapEntAConvC convent(m_EntityArray);

	//引数エラー
	if ( convent.GetCString(0,m_Name) < 0 ){
		SXFErrorMsgC::RecordError( SXFPARAMS,
									m_EntityName,
									2,
									m_RootID,
									m_EntityName
									);
		return SXFPARAMS;
	}

	//引数エラー
	if ( convent.GetInst(1,m_SecondFactor_Inst) < 0 ){
		SXFErrorMsgC::RecordError( SXFPARAMS,
									m_EntityName,
									2,
									m_RootID,
									m_EntityName
									);
		return SXFPARAMS;
	}

	m_SecondFactor_p =
		new SXFMapE_VECTORC(m_InstanceIDManager );

	ircode = m_SecondFactor_p->SetRootID(m_SecondFactor_Inst);
	if ( ircode < 0 )
		return ircode ;
	ircode = m_SecondFactor_p->SetParameter();
	if ( ircode < 0 )
		return ircode ;

	//引数エラー
	if ( convent.GetInst(2,m_FirstFactor_Inst) < 0 ){
		SXFErrorMsgC::RecordError( SXFPARAMS,
									m_EntityName,
									2,
									m_RootID,
									m_EntityName
									);
		return SXFPARAMS;
	}

	m_FirstFactor_p =
		new SXFMapE_VECTORC(m_InstanceIDManager );

	ircode = m_FirstFactor_p->SetRootID(m_FirstFactor_Inst);
	if ( ircode < 0 )
		return ircode ;
	ircode = m_FirstFactor_p->SetParameter();
	if ( ircode < 0 )
		return ircode ;
	return 0;
}
