
/**
	All Rights Reserved,(c)JACIC 2001
	SXFMapT_trimming_preferenceE.h						์ฌ๚F2000.04.21

	PD@\Tv
		trimming_preference๐่`ท้

		  TYPE trimming_preference = ENUMERATION OF
		    (cartesian,
		     parameter,
		     unspecified);
		  END_TYPE; -- trimming_preference

	QD๐
	๐ิ	๚tฏ		Sา			Tv
	์ฌ		2000.04.21	
**/

#ifndef _trimming_preference_H_
#define	_trimming_preference_H_

typedef enum preferencetype{
	cartesian,
	parameter,
	unspecified
}trimming_preference_kind;

#endif
