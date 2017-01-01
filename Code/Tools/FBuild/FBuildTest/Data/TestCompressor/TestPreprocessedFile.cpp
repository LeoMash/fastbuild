#line 1 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"


#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"





#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\Function.h"



#pragma once



#line 1 "c:\\p4\\Code\\Core/Containers/Array.h"


#pragma once





#line 1 "c:\\p4\\Code\\Core/Containers/Sort.h"


#pragma once





#line 1 "c:\\p4\\Code\\Core/Env/Types.h"


#pragma once



typedef unsigned char		uint8_t;
typedef signed char			int8_t;
typedef unsigned short		uint16_t;
typedef signed short		int16_t;
typedef unsigned int		uint32_t;
typedef signed int			int32_t;
typedef unsigned long long	uint64_t;
typedef signed long long	int64_t;














#line 30 "c:\\p4\\Code\\Core/Env/Types.h"
#line 10 "c:\\p4\\Code\\Core/Containers/Sort.h"



class AscendingCompare
{
public:
	template < class T >
	inline bool operator () ( const T & a, const T & b ) const
	{
		return ( a < b );
	}
};



class AscendingCompareDeref
{
public:
	template < class T >
	inline bool operator () ( const T & a, const T & b ) const
	{
		return ( ( *a ) < ( *b ) );
	}
};



template < class T, class COMPARE >
void ShellSort( T * begin, T * end, const COMPARE & compare )
{
	size_t numItems = end - begin;
	size_t increment = 3;
	while ( increment > 0 )
	{
		for ( size_t i=0; i < numItems; i++ )
		{
			size_t j = i;
			T temp( begin[ i ] );
			while ( ( j >= increment ) && ( compare( temp, begin[ j - increment ]  ) ) )
			{
				begin[ j ] = begin[ j - increment ];
				j = j - increment;
			}
			begin[ j ] = temp;
		}
		if ( increment / 2 != 0 )
		{
			increment = increment / 2 ;
		}
		else if ( increment == 1 )
		{
			increment = 0;
		}
		else
		{
			increment = 1;
		}
	}    
}


#line 72 "c:\\p4\\Code\\Core/Containers/Sort.h"
#line 10 "c:\\p4\\Code\\Core/Containers/Array.h"
#line 1 "c:\\p4\\Code\\Core/Env/Assert.h"


#pragma once






















































	






	







	








#line 83 "c:\\p4\\Code\\Core/Env/Assert.h"


#line 86 "c:\\p4\\Code\\Core/Env/Assert.h"
#line 11 "c:\\p4\\Code\\Core/Containers/Array.h"

#line 1 "c:\\p4\\Code\\Core/Math/Conversions.h"


#pragma once









class Math
{
public:
	static inline uint16_t RoundUp( uint16_t value, uint16_t alignment )
	{
		return ( value + alignment - 1) & ~( alignment - 1 );
	}
	static inline uint32_t RoundUp( uint32_t value, uint32_t alignment )
	{
		return ( value + alignment - 1) & ~( alignment - 1 );
	}
	template <class T>
	static inline T Max( T a, T b )
	{
		return ( a > b ) ? a : b;
	}
	template <class T>
	static inline T Min( T a, T b )
	{
		return ( a < b ) ? a : b;
	}
};


#line 38 "c:\\p4\\Code\\Core/Math/Conversions.h"
#line 13 "c:\\p4\\Code\\Core/Containers/Array.h"

#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"













#pragma once










#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"














 





#line 22 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 23 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


















#line 42 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



#line 46 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"










#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"













#pragma once







































































































































#line 151 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"






































#line 190 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"


#line 193 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"

#line 195 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"





#line 201 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"



#line 205 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"






#line 212 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"






#line 219 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"




#line 224 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"






























































































































































































































































































































































































































































































#pragma region Input Buffer SAL 1 compatibility macros




































































































































































































































































































































































































































































                                                




                                                

















































































































































































































































































































#pragma endregion Input Buffer SAL 1 compatibility macros

















































































#line 1549 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"






























#line 1580 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"
























#line 1605 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"












#line 1618 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"







































#line 1658 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"


























































































































#line 1781 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"






































































































#line 1884 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"








































































































































































#line 2053 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"





































































































#line 2155 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"



















































































































































































































#line 2367 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"
extern "C" {




#line 2373 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"



































































































































































































































#line 2601 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    

    
    

#line 2640 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"


































































































































































































































  

    
    
#line 2871 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"






#line 2878 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"
#line 2879 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"






#line 2886 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"
#line 2887 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"










#line 2898 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"

































#line 2932 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"





















}
#line 2955 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"

#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ConcurrencySal.h"


















#pragma once


extern "C" {
#line 24 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ConcurrencySal.h"
















































































































































































































































#line 265 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ConcurrencySal.h"



#line 269 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ConcurrencySal.h"


















































































#line 352 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ConcurrencySal.h"


}
#line 356 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ConcurrencySal.h"

#line 358 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ConcurrencySal.h"
#line 2957 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\sal.h"


#line 57 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#pragma pack(push,8)

#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"












#pragma once






#line 21 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"








#pragma pack(push,8)


extern "C" {
#line 34 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"





#line 40 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"

#line 42 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"
#line 43 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"



typedef unsigned __int64    uintptr_t;


#line 50 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"

#line 52 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"





typedef char *  va_list;
#line 59 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"

#line 61 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"





#line 67 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"







#line 75 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"


#line 78 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"













#line 92 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"







#line 100 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"














#line 115 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"


extern void __cdecl __va_start(va_list *, ...);


















#line 137 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"


}
#line 141 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"

#pragma pack(pop)

#line 145 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\vadefs.h"
#line 64 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


extern "C" {
#line 68 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"





#line 74 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#line 79 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#line 84 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"







#line 92 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"







#line 100 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 102 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 103 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"













#line 117 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 118 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"





#line 124 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"







#line 132 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 134 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 136 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"







#line 144 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 145 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#line 150 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 152 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 153 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#line 158 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 160 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 161 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


 

#line 166 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
  
 #line 168 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 169 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"










#line 180 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 181 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"






#line 188 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 189 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

















#line 207 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#line 212 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"








#line 221 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"






#line 228 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 229 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"





#line 235 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"






#line 242 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 243 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"






#line 250 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 251 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#line 256 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


#line 259 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 261 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 262 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 263 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"





#line 269 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"










#line 280 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 282 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 283 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 284 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"










#line 295 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"






#line 302 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 303 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"











#line 315 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 316 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



#line 320 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"






#line 327 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 328 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"






#line 335 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"






#line 342 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 344 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 345 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



 
  
 



#line 355 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 356 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


 
  
  
 



#line 366 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 367 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


 
  
   
  

#line 375 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
 



#line 380 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 381 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


 
  
 



#line 390 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 391 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


 
  
 



#line 400 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 401 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



#line 405 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"





#line 411 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#line 416 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 418 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 419 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



typedef unsigned __int64    size_t;


#line 426 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 428 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



typedef size_t rsize_t;

#line 434 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 435 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



typedef __int64             intptr_t;


#line 442 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 444 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"












typedef __int64             ptrdiff_t;


#line 460 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 462 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"







typedef unsigned short wint_t;
typedef unsigned short wctype_t;

#line 473 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


















typedef int errno_t;
#line 493 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


typedef  long __time32_t;   

#line 498 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


typedef __int64 __time64_t;     

#line 503 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"





typedef __time64_t time_t;      
#line 510 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 512 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"







#line 520 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 521 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"





#line 527 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#line 532 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 534 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 535 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"





#line 541 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



#line 545 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"




#line 550 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 552 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 553 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"












  void __cdecl _invalid_parameter_noinfo(void);
  __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void);
#line 568 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

 __declspec(noreturn)
void __cdecl _invoke_watson(  const wchar_t *,   const wchar_t *,   const wchar_t *, unsigned int, uintptr_t);






 







 
  
 #line 588 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 589 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"







#line 597 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


































































































































































#line 760 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 761 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"









































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1827 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"















































































































































#line 1971 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"
#line 1972 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct * pthreadlocinfo;
typedef struct threadmbcinfostruct * pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct
{
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;


typedef struct localerefcount {
        char *locale;
        wchar_t *wlocale;
        int *refcount;
        int *wrefcount;
} locrefcount;

typedef struct threadlocaleinfostruct {
        int refcount;
        unsigned int lc_codepage;
        unsigned int lc_collate_cp;
        unsigned int lc_time_cp;
        locrefcount lc_category[6];
        int lc_clike;
        int mb_cur_max;
        int * lconv_intl_refcount;
        int * lconv_num_refcount;
        int * lconv_mon_refcount;
        struct lconv * lconv;
        int * ctype1_refcount;
        unsigned short * ctype1;
        const unsigned short * pctype;
        const unsigned char * pclmap;
        const unsigned char * pcumap;
        struct __lc_time_data * lc_time_curr;
        wchar_t * locale_name[6];
} threadlocinfo;

#line 2015 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"


}
#line 2019 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



#line 2023 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 2025 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



#line 2029 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 2031 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



#line 2035 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 2037 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"






#line 2044 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"



#line 2048 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#pragma pack(pop)

#line 2052 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"

#line 26 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"
















namespace std {




typedef void (__cdecl * new_handler) ();
#line 49 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"



 new_handler __cdecl set_new_handler(  new_handler _NewHandler) throw();
};




using std::new_handler;
using std::set_new_handler;
#line 61 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"



namespace std {
        
        struct nothrow_t {};

        
        extern const nothrow_t nothrow;
};

    void *__cdecl operator new(size_t _Size, const std::nothrow_t&) throw();
    void *__cdecl operator new[](size_t _Size, const std::nothrow_t&) throw();
void __cdecl operator delete(void *, const std::nothrow_t&) throw();
void __cdecl operator delete[](void *, const std::nothrow_t&) throw();
#line 77 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"



inline void *__cdecl operator new(size_t, void *_Where)
        {return (_Where); }
inline void __cdecl operator delete(void *, void *)
        {return; }
#line 85 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"






 int __cdecl _query_new_mode( void );
 int __cdecl _set_new_mode(   int _NewMode);





typedef int (__cdecl * _PNH)( size_t );
#line 100 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"

#line 102 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"

 _PNH __cdecl _query_new_handler( void );
 _PNH __cdecl _set_new_handler(   _PNH _NewHandler);



#line 109 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"

#line 111 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\new.h"
#line 15 "c:\\p4\\Code\\Core/Containers/Array.h"
#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"














#pragma once




#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"














 





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 21 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"





#pragma pack(push,8)


extern "C" {
#line 31 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"







#line 39 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"





#line 45 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"













typedef struct _heapinfo {
        int * _pentry;
        size_t _size;
        int _useflag;
        } _HEAPINFO;

#line 65 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"



































#line 101 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"



        __declspec(noalias) __declspec(restrict)    void * __cdecl calloc(  size_t _Count,   size_t _Size);
                     __declspec(noalias)                                                                             void   __cdecl free(    void * _Memory);
        __declspec(noalias) __declspec(restrict)                              void * __cdecl malloc(  size_t _Size);
 
       __declspec(noalias) __declspec(restrict)                           void * __cdecl realloc(    void * _Memory,   size_t _NewSize);
 
       __declspec(noalias) __declspec(restrict)                       void * __cdecl _recalloc(    void * _Memory,   size_t _Count,   size_t _Size);
                     __declspec(noalias)                                                                             void   __cdecl _aligned_free(    void * _Memory);
       __declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_malloc(  size_t _Size,   size_t _Alignment);
       __declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_offset_malloc(  size_t _Size,   size_t _Alignment,   size_t _Offset);
 
       __declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_realloc(    void * _Memory,   size_t _NewSize,   size_t _Alignment);
 
       __declspec(noalias) __declspec(restrict)                       void * __cdecl _aligned_recalloc(    void * _Memory,   size_t _Count,   size_t _Size,   size_t _Alignment);
 
       __declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_offset_realloc(    void * _Memory,   size_t _NewSize,   size_t _Alignment,   size_t _Offset);
 
       __declspec(noalias) __declspec(restrict)                       void * __cdecl _aligned_offset_recalloc(    void * _Memory,   size_t _Count,   size_t _Size,   size_t _Alignment,   size_t _Offset);
                                                    size_t __cdecl _aligned_msize(  void * _Memory,   size_t _Alignment,   size_t _Offset);
#line 124 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"
















#line 141 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"


 int     __cdecl _resetstkoflw (void);
#line 145 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"



 unsigned long __cdecl _set_malloc_crt_max_wait(  unsigned long _NewValue);








#line 158 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"

       void *  __cdecl _expand(  void * _Memory,   size_t _NewSize);
   size_t  __cdecl _msize(  void * _Memory);




#line 166 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"

    void *          __cdecl _alloca(  size_t _Size);
   int     __cdecl _heapadd(  void * _Memory,   size_t _Size);
   int     __cdecl _heapchk(void);
   int     __cdecl _heapmin(void);
 int     __cdecl _heapset(  unsigned int _Fill);
  int     __cdecl _heapwalk(  _HEAPINFO * _EntryInfo);
 size_t  __cdecl _heapused(size_t * _Used, size_t * _Commit);

 intptr_t __cdecl _get_heap_handle(void);







#line 184 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"





#line 190 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"

typedef char __static_assert_t[ (sizeof(unsigned int) <= 16) ];


#pragma warning(push)
#pragma warning(disable:6540)
__inline void *_MarkAllocaS(   void *_Ptr, unsigned int _Marker)
{
    if (_Ptr)
    {
        *((unsigned int*)_Ptr) = _Marker;
        _Ptr = (char*)_Ptr + 16;
    }
    return _Ptr;
}
#pragma warning(pop)
#line 207 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"








#line 216 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"






#line 223 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"









__pragma(warning(push))
__pragma(warning(disable: 6014))
__declspec(noalias) __inline void __cdecl _freea(    void * _Memory)
{
    unsigned int _Marker;
    if (_Memory)
    {
        _Memory = (char*)_Memory - 16;
        _Marker = *(unsigned int *)_Memory;
        if (_Marker == 0xDDDD)
        {
            free(_Memory);
        }





#line 251 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"
    }
}
__pragma(warning(pop))
#line 255 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"
#line 256 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"
#line 257 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"




#line 262 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"

#line 264 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"






















}
#line 288 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"

#pragma pack(pop)

#line 292 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\malloc.h"
#line 16 "c:\\p4\\Code\\Core/Containers/Array.h"



template < class T >
class Array
{
public:
	explicit Array();
	explicit Array( const Array< T > & other );
	explicit Array( size_t initialCapacity, bool resizeable = false );
	~Array();

	void Destruct();

	
	typedef	T *			Iter;
	typedef const T *	ConstIter;
	Iter		Begin()	const	{ return m_Begin; }
	Iter		End() const		{ return m_End; }
	inline T &			operator [] ( size_t index )		{ do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); return m_Begin[ index ]; }
	inline const T &	operator [] ( size_t index ) const	{ do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); return m_Begin[ index ]; }
	inline T &			Top()		{ do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); return m_End[ -1 ]; }
	inline const T &	Top() const	{ do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); return m_End[ -1 ]; }

	
	void SetCapacity( size_t capacity );
	void SetSize( size_t size );
	void Clear();

	
	void Sort() { ShellSort( m_Begin, m_End, AscendingCompare() ); }
	void SortDeref() { ShellSort( m_Begin, m_End, AscendingCompareDeref() ); }
	template < class COMPARER >
	void Sort( const COMPARER & comp ) { ShellSort( m_Begin, m_End, comp ); }

	
	template < class U >
	T * Find( const U & obj ) const;
	template < class U >
	T * FindDeref( const U & obj ) const;

	
	void Append( const T & item );
	void PopFront(); 
	void Erase( T * const iter );

	Array & operator = ( const Array< T > & other );

	
	inline bool		IsAtCapacity() const	{ return ( m_End == m_MaxEnd ) && ( m_Resizeable == false ); }
	inline size_t	GetCapacity() const		{ return ( m_MaxEnd - m_Begin ); }
	inline size_t	GetSize() const			{ return ( m_End - m_Begin ); }
	inline bool		IsEmpty() const			{ return ( m_Begin == m_End ); }

private:
	void Grow();
	inline T * Allocate( size_t numElements ) const;
	inline void Deallocate( T * ptr ) const;

	T * m_Begin;
	T * m_End;
	T * m_MaxEnd;
	bool m_Resizeable;
};



template < class T >
Array< T >::Array()
	: m_Begin( nullptr )
	, m_End( nullptr )
	, m_MaxEnd( nullptr )
	, m_Resizeable( true )
{
}



template < class T >
Array< T >::Array( const Array< T > & other )
{
	new (this) Array( other.GetSize(), true );
	*this = other;
}



template < class T >
Array< T >::Array( size_t initialCapacity, bool resizeable )
{
	if ( initialCapacity )
	{
		


		m_Begin = Allocate( initialCapacity );
		m_End = m_Begin;
		m_MaxEnd = m_Begin + initialCapacity;
	}
	else
	{
		m_Begin = nullptr;
		m_End = nullptr;
		m_MaxEnd = nullptr;
	}
	m_Resizeable = resizeable;
}



template < class T >
Array< T >::~Array()
{
	Destruct();
}



template < class T >
void Array< T >::Destruct()
{
	T * iter = m_Begin;
	while ( iter < m_End )
	{
		iter->~T();
		iter++;
	}
	Deallocate( m_Begin );
	m_Begin = nullptr;
	m_End = nullptr;
	m_MaxEnd = nullptr;
}



template < class T >
void Array< T >::SetCapacity( size_t capacity )
{
	if ( capacity == GetCapacity() )
	{
		return;
	}

	T * newMem = Allocate( capacity );

	
	
	size_t itemsToKeep = Math::Min( capacity, GetSize() );
	T * src = m_Begin;
	T * dst = newMem;
	T * keepEnd = m_Begin + itemsToKeep;
	while ( src < m_End )
	{
		if ( src < keepEnd )
		{
			new ( dst ) T( *src );
		}
		src->~T();
		src++;
		dst++;
	}

	
	Deallocate( m_Begin );

	
	m_Begin = newMem;
	m_End = newMem + itemsToKeep;
	m_MaxEnd = newMem + capacity;
}



template < class T >
void Array< T >::SetSize( size_t size )
{
	size_t oldSize = GetSize();

	
	if ( oldSize == size )
	{
		return;
	}

	
	if ( size < oldSize )
	{
		
		T * item = m_Begin + size;
		T * end = m_End;
		while ( item < end )
		{
			item->~T();
			item++;
		}
		m_End = m_Begin + size;
		return;
	}

	

	
	if ( size > GetCapacity() )
	{
		SetCapacity( size );
	}

	
	T * item = m_End;
	T * newEnd = m_Begin + size;
	while( item < newEnd )
	{
		new ( item ) T;
		item++;
	}
	m_End = newEnd;
}



template < class T >
void Array< T >::Clear()
{
	
	T * src = m_Begin;
	while ( src < m_End )
	{
		src->~T();
		src++;
	}

	
	m_End = m_Begin;
}



template < class T >
template < class U >
T * Array< T >::Find( const U & obj ) const
{
	T * pos = m_Begin;
	T * end = m_End;
	while ( pos < end )
	{
		if ( *pos == obj )
		{
			return pos;
		}
		pos++;
	}
	return nullptr;
}



template < class T >
template < class U >
T * Array< T >::FindDeref( const U & obj ) const
{
	T * pos = m_Begin;
	T * end = m_End;
	while ( pos < end )
	{
		if ( *(*pos) == obj )
		{
			return pos;
		}
		pos++;
	}
	return nullptr;
}



template < class T >
void Array< T >::Append( const T & item )
{
	if ( m_End == m_MaxEnd )
	{
		Grow();
	}
	new ( m_End ) T( item );
	m_End++;
}



template < class T >
void Array< T >::PopFront()
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); 

	
	T * dst = m_Begin;
	T * src = m_Begin + 1;
	while ( src < m_End )
	{
		*dst = *src;
		dst++;
		src++;
	}

	
	dst->~T();

	m_End--;
}



template < class T >
void Array< T >::Erase( T * const iter )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	T * dst = iter;
	T * last = ( m_End - 1 );
	while ( dst < last )
	{
		*dst = *(dst + 1);
		dst++;
	}
	dst->~T();
	m_End = last;
}



template < class T >
Array< T > & Array< T >::operator = ( const Array< T > & other )
{
	Clear();

	
	const size_t otherSize = other.GetSize();
	if ( GetCapacity() < otherSize )
	{
		Deallocate( m_Begin );
		m_Begin = Allocate( otherSize );
		m_MaxEnd = m_Begin + otherSize;
	}

	m_End = m_Begin + otherSize;
	T * dst = m_Begin;
	T * src = other.m_Begin;
	const T * end = m_End;
	while ( dst < end )
	{
		new ( dst ) T( *src );
		dst++;
		src++;
	}
	
	return *this;
}



template < class T >
void Array< T >::Grow()
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	size_t currentCapacity = GetCapacity();
	size_t size = GetSize();
	size_t newCapacity = ( currentCapacity + ( currentCapacity >> 1 ) + 1 );
	T * newMem = Allocate( newCapacity );

	T * src = m_Begin;
	T * dst = newMem;
	while ( src < m_End )
	{
		new ( dst ) T( *src );
		src->~T();
		dst++;
		src++;
	}
	Deallocate( m_Begin );
	m_Begin = newMem;
	m_End = ( newMem ) + size;
	m_MaxEnd = ( newMem ) + newCapacity;
}



template < class T >
T * Array< T >::Allocate( size_t numElements ) const
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	return static_cast< T * >( _aligned_malloc( sizeof( T ) * numElements, __alignof( T ) ) );
}



template < class T >
void Array< T >::Deallocate( T * ptr ) const
{
	_aligned_free( ptr );
}


#line 420 "c:\\p4\\Code\\Core/Containers/Array.h"
#line 9 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\Function.h"
#line 1 "c:\\p4\\Code\\Core/Strings/AString.h"


#pragma once











class AString
{
public:
	explicit AString();
	explicit AString( uint16_t reserve );
	explicit AString( const AString & string );
	explicit AString( const char * string );
	explicit AString( const char * start, const char * end );
	~AString();

	inline uint16_t		GetLength() const	{ return m_Length; }
	inline uint16_t		GetReserved() const { return ( m_ReservedAndFlags & RESERVED_MASK ); }
	inline bool			IsEmpty() const		{ return ( m_Length == 0 ); }

	
	inline char *		Get()				{ return m_Contents; }
	inline const char * Get() const			{ return m_Contents; }
	inline char *		GetEnd()			{ return ( m_Contents + m_Length ); }
	inline const char *	GetEnd() const		{ return ( m_Contents + m_Length ); }
	inline char &		operator [] ( uint16_t index )		 { do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); return m_Contents[ index ]; }
	inline const char & operator [] ( uint16_t index )  const { do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); return m_Contents[ index ]; }

	
	static const AString & GetEmpty() { return s_EmptyAString; }

	
	inline AString & operator = ( const char * string ) { Assign( string ); return *this; }
	inline AString & operator = ( const AString & string ) { Assign( string ); return *this; }
	void Assign( const char * string );
	void Assign( const char * start, const char * end );
	void Assign( const AString & string );
	void Clear();

	
	void SetLength( uint16_t len );

	
	AString & operator += ( char c );
	AString & operator += ( const char * string );
	AString & operator += ( const AString & string );

	
	bool operator == ( const char * other ) const;
	bool operator == ( const AString & other ) const;
	int32_t CompareI( const AString & other ) const;
	inline bool operator < ( const AString & other ) const { return ( CompareI( other ) < 0 ); }

	inline bool MemoryMustBeFreed() const { return ( ( m_ReservedAndFlags & MEM_MUST_BE_FREED_FLAG ) == MEM_MUST_BE_FREED_FLAG ); }

	void Format( const char * fmtString, ... );

	void Tokenize( Array< AString > & tokens ) const;

	
	uint32_t Replace( char from, char to, uint32_t maxReplaces = 0 );
	uint32_t Replace( const char * from, const char * to, uint32_t maxReplaces = 0 );
	void ToLower();

	
	const char *	Find( char c, const char * startPos = nullptr ) const;
	char *			Find( char c, char * startPos = nullptr ) { return const_cast< char *>( ((const AString *)this)->Find( c, startPos ) ); }
	const char *	Find( const char * subString ) const;
	char *			Find( const char * subString ) { return const_cast< char *>( ((const AString *)this)->Find( subString ) ); }
	const char *	FindLast( char c ) const;
	char *			FindLast( char c ) { return const_cast< char *>( ((const AString *)this)->FindLast( c ) ); }
	bool			EndsWith( char c ) const;
	bool			EndsWith( const char * string ) const;
	bool			BeginsWith( char c ) const;
	bool			BeginsWith( const char * string ) const;
	bool			BeginsWith( const AString & string ) const;
	bool			BeginsWithI( const AString & string ) const;

	
	static void Copy( const char * src, char * dst, size_t len );
	static size_t StrLen( const char * string );
	static int32_t StrNCmp( const char * a, const char * b, size_t num );
	static int32_t StrNCmpI( const char * a, const char * b, size_t num );

	enum { MAX_STRING_LENGTH		= 0xFFFE };
protected:
	enum { MEM_MUST_BE_FREED_FLAG	= 0x0001 };
	enum { RESERVED_MASK			= 0xFFFE };

	inline void SetReserved( uint16_t reserved, bool mustFreeMemory )
	{ 
		do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); 
		m_ReservedAndFlags = ( reserved ^ ( mustFreeMemory ? MEM_MUST_BE_FREED_FLAG : 0 ) );
	}
	__declspec( noinline ) void Grow( uint16_t newLen );		
	__declspec( noinline ) void GrowNoCopy( uint16_t newLen ); 

	char *		m_Contents;			
	uint16_t	m_Length;			
	uint16_t	m_ReservedAndFlags;	

	static char * const		s_EmptyString;
	static const AString	s_EmptyAString;
};


#line 116 "c:\\p4\\Code\\Core/Strings/AString.h"
#line 10 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\Function.h"

class BFFIterator;
class BFFVariable;
class Node;

class Function
{
public:
	explicit	Function( const char * functionName );
	virtual		~Function();

	
	inline const AString & GetName() const { return m_Name; }

	
	static const Function * Find( const AString & name );

	static void Create();
	static void Destroy();

	
	virtual bool AcceptsHeader() const; 
	virtual bool NeedsHeader() const;	

	
	virtual bool IsUnique() const;
	inline bool GetSeen() const { return m_Seen; }
	inline void SetSeen() const { m_Seen = true; }

	
	virtual bool ParseFunction( const BFFIterator & functionNameStart,
								const BFFIterator & functionBodyStartToken, 
								const BFFIterator & functionBodyStopToken,
								const BFFIterator * functionHeaderStartToken,
								const BFFIterator * functionHeaderStopToken ) const;

	
	virtual bool Commit( const BFFIterator & funcStartIter ) const;

private:
	Function *	m_NextFunction;
	static Function * s_FirstFunction;

protected:
	AString		m_Name;
	mutable bool m_Seen; 

	
	
	mutable AString m_AliasForFunction;

	void Error( const BFFIterator & iter, const char * fmtString, ... ) const;

	bool GetString( const BFFIterator & iter, const BFFVariable * & var, const char * name, bool required = false ) const;
	bool GetBool( const BFFIterator & iter, bool & var, const char * name, bool defaultValue, bool required = false ) const;
	bool GetNodeList( const BFFIterator & iter, const char * name, Array< Node * > & nodes, bool required = false ) const;

	
	bool ProcessAlias( const BFFIterator & iter, Node * nodeToAlias ) const;
private:
	bool GetNodeListRecurse( const BFFIterator & iter, const char * name, Array< Node * > & nodes, const AString & nodeName ) const;
};


#line 75 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\Function.h"
#line 7 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionCSAssembly.h"



#pragma once





class FunctionCSAssembly : public Function
{
public:
	explicit		FunctionCSAssembly();
	inline virtual ~FunctionCSAssembly() {}

protected:
	virtual bool AcceptsHeader() const;

	virtual bool Commit( const BFFIterator & funcStartIter ) const;
};


#line 24 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionCSAssembly.h"
#line 8 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionDLL.h"


#pragma once





#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionExecutable.h"


#pragma once











class AString;
class Node;



class FunctionExecutable : public Function
{
public:
	explicit		FunctionExecutable();
	inline virtual ~FunctionExecutable() {}

protected:
	virtual bool AcceptsHeader() const;
	virtual bool Commit( const BFFIterator & funcStartIter ) const;
private:
	
	bool DependOnNode( const BFFIterator & iter, const AString & nodeName, Array< Node * > & nodes ) const;
	bool DependOnNode( const BFFIterator & iter, Node * node, Array< Node * > & nodes ) const;
};


#line 37 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionExecutable.h"
#line 10 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionDLL.h"



class FunctionDLL : public FunctionExecutable
{
public:
	explicit		FunctionDLL();
	inline virtual ~FunctionDLL() {}
};


#line 22 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionDLL.h"
#line 9 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"

#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionForEach.h"


#pragma once









class FunctionForEach : public Function
{
public:
	explicit		FunctionForEach();
	inline virtual ~FunctionForEach() {}

	virtual bool AcceptsHeader() const;
	virtual bool NeedsHeader() const;
	virtual bool ParseFunction( const BFFIterator & functionNameStart,
								const BFFIterator & functionBodyStartToken, 
								const BFFIterator & functionBodyStopToken,
								const BFFIterator * functionHeaderStartToken,
								const BFFIterator * functionHeaderStopToken ) const;
};


#line 30 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionForEach.h"
#line 11 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionGroup.h"



#pragma once





class FunctionGroup : public Function
{
public:
	explicit		FunctionGroup();
	inline virtual ~FunctionGroup() {}

protected:
	virtual bool Commit( const BFFIterator & funcStartIter ) const;
};


#line 22 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionGroup.h"
#line 12 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionLibrary.h"



#pragma once





class FunctionLibrary : public Function
{
public:
	explicit		FunctionLibrary();
	inline virtual ~FunctionLibrary() {}

protected:
	virtual bool AcceptsHeader() const;

	virtual bool Commit( const BFFIterator & funcStartIter ) const;
};


#line 24 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionLibrary.h"
#line 13 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionSettings.h"


#pragma once











class FunctionSettings : public Function
{
public:
	explicit		FunctionSettings();
	inline virtual ~FunctionSettings() {}

protected:
	virtual bool IsUnique() const;
	virtual bool Commit( const BFFIterator & funcStartIter ) const;

private:
	void ProcessEnvironment( const Array< AString > & envStrings ) const;
};


#line 31 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionSettings.h"
#line 14 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionTest.h"


#pragma once









class FunctionTest : public Function
{
public:
	explicit		FunctionTest();
	inline virtual ~FunctionTest() {}

protected:
	virtual bool AcceptsHeader() const;
	virtual bool Commit( const BFFIterator & funcStartIter ) const;
};


#line 26 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionTest.h"
#line 15 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionUnity.h"


#pragma once








class FunctionUnity : public Function
{
public:
	explicit		FunctionUnity();
	inline virtual ~FunctionUnity() {}

protected:
	virtual bool AcceptsHeader() const;
	virtual bool NeedsHeader() const;

	virtual bool Commit( const BFFIterator & funcStartIter ) const;
};


#line 27 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\bff\\functions\\FunctionUnity.h"
#line 16 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"

#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/BFF/BFFIterator.h"


#pragma once













class BFFIterator
{
public:
	inline BFFIterator()
		: m_Pos( nullptr )
		, m_MinPos( nullptr )
		, m_MaxPos( nullptr )
		, m_FileName( nullptr ) {}
	inline BFFIterator( const char * pos, uint32_t dataSize, const char * fileName ) 
			: m_Pos( pos ) 
			, m_MinPos( pos )
			, m_MaxPos( pos + dataSize )
			, m_FileName( fileName ) {}
	inline ~BFFIterator() {}

	void operator ++ (int) { do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); m_Pos++; }
	inline bool operator < ( const BFFIterator & other ) const { return ( m_Pos < other.m_Pos ); }
	inline bool operator > ( const BFFIterator & other ) const { return ( m_Pos > other.m_Pos ); }
	char operator *() const { return *m_Pos; }
	void SkipWhiteSpace();
	void SkipComment();
	void SkipString( char quote );
	void SkipWhiteSpaceAndComments();
	void SkipVariableName();
	void SkipFunctionName();
	bool ParseToNext( char c );
	bool ParseToMatchingBrace( char openBrace, char closeBrace );

	inline size_t GetDistTo( const BFFIterator & other ) const { do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); return (size_t)( other.m_Pos - m_Pos ); }

	
	inline const char * GetCurrent() const { return m_Pos; }
	inline void SetMax( const char * max )
	{
		do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		m_MaxPos = max;
	}

	bool IsAtWhitespace() const;
	bool IsAtValidVariableNameCharacter() const;
	bool IsAtValidFunctionNameCharacter() const;
	inline bool IsAtEnd() const { return ( m_Pos == m_MaxPos ); }

	void EmitParseError( const char * message, ... ) const;

private:
	
	
	void GetPosInfo( uint32_t & line,
					 uint32_t & column,
					 const char * & lineStart ) const;

	const char * m_Pos;
	const char * m_MinPos; 
	const char * m_MaxPos; 
	const char * m_FileName; 
};


#line 78 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/BFF/BFFIterator.h"
 
#line 18 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/BFF/BFFParser.h"


#pragma once













class FileStream;



class BFFParser
{
public:
	explicit BFFParser();
	~BFFParser();

	
	
	
	bool Parse( const char * dataWithSentinel, 
			    uint32_t sizeExcludingSentinel,
				const char * fileName );
	bool Parse( BFFIterator & iterator );

	enum { BFF_COMMENT_CHAR = ';' };
	enum { BFF_DECLARE_VAR_USER = '?' };
	enum { BFF_DECLARE_VAR_INTERNAL = '.' };
	enum { BFF_VARIABLE_ASSIGNMENT = '=' };
	enum { BFF_VARIABLE_CONCATENATION = '+' };
	enum { BFF_START_ARRAY = '{' };
	enum { BFF_END_ARRAY = '}' };
	enum { BFF_FUNCTION_ARGS_OPEN = '(' };
	enum { BFF_FUNCTION_ARGS_CLOSE = ')' };
	enum { BFF_FUNCTION_BODY_OPEN = '{' };
	enum { BFF_FUNCTION_BODY_CLOSE = '}' };

	enum { MAX_VARIABLE_NAME_LENGTH = 64 };
	enum { MAX_FUNCTION_NAME_LENGTH = 64 };
	enum { MAX_VARIABLE_LENGTH = 8192 };

	static bool PerformVariableSubstitutions( const BFFIterator & startIter, const BFFIterator & endIter, AString & value );

private:
	bool ParseUnnamedVariableConcatenation( BFFIterator & iter );
	bool ParseNamedVariableDeclaration( BFFIterator & parseIndex );
	bool ParseVariableDeclaration( BFFIterator & iter, const BFFIterator & varNameStart,
													   const BFFIterator & varNameEnd );
	bool ParseFunction( BFFIterator & parseIndex );

	bool StoreVariableString( const char * varNameStart, const char * varNameEnd, const BFFIterator & valueStart, const BFFIterator & valueEnd, const BFFIterator & operatorIter );
	bool StoreVariableArray( const char * varNameStart, const char * varNameEnd, const BFFIterator & valueStart, const BFFIterator & valueEnd, const BFFIterator & operatorIter );
	bool StoreVariableBool( const char * varNameStart, const char * varNameEnd, bool value );
	bool StoreVariableInt( const char * varNameStart, const char * varNameEnd, int value );

	AString m_FileName;

	
	bool m_SeenAVariable;
	BFFIterator m_LastVarNameStart;
	BFFIterator m_LastVarNameEnd;
};


#line 75 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/BFF/BFFParser.h"
 
#line 19 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/BFF/BFFStackFrame.h"


#pragma once





#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/BFF/BFFVariable.h"


#pragma once













class BFFVariable
{
public:
	inline const AString & GetName() const { return m_Name; }

	const AString & GetValue() const { return m_StringValue; }
	const Array< AString > & GetArray() const { return m_ArrayValues; }
	int GetInt() const { return m_IntValue; }
	bool GetBool() const { return m_BoolValue; }

	enum VarType
	{
		VAR_ANY		= 0, 
		VAR_STRING	= 1,
		VAR_BOOL	= 2,
		VAR_ARRAY	= 3,
		VAR_INT		= 4,
	};

	inline VarType GetType() const	{ return m_Type; }
	inline bool IsString() const	{ return m_Type == BFFVariable::VAR_STRING; }
	inline bool IsBool() const		{ return m_Type == BFFVariable::VAR_BOOL; }
	inline bool IsArray() const		{ return m_Type == BFFVariable::VAR_ARRAY; }
	inline bool IsInt() const		{ return m_Type == BFFVariable::VAR_INT; }

private:
	friend class BFFStackFrame;

	explicit BFFVariable( const AString & name, const AString & value );
	explicit BFFVariable( const AString & name, bool value );
	explicit BFFVariable( const AString & name, const Array< AString > & values );
	explicit BFFVariable( const AString & name, int i );
	~BFFVariable();

	void SetValue( const AString & value );
	void SetValue( bool value );
	void SetValue( const Array< AString > & values );
	void SetValue( int i );

	AString m_Name;

	
	VarType				m_Type;
	AString				m_StringValue;
	bool				m_BoolValue;
	Array< AString >	m_ArrayValues;
	int					m_IntValue;
};


#line 68 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/BFF/BFFVariable.h"
 
#line 10 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/BFF/BFFStackFrame.h"




class AString;



class BFFStackFrame
{
public:
	explicit BFFStackFrame();
	~BFFStackFrame();

	
	static void SetVar( const AString & name,
						const AString & value );
	static void SetVarArray( const AString & name,
							 const Array< AString > & values );
	static void SetVarBool( const AString & name,
							bool value );
	static void SetVarInt( const AString & name,
						   int value );

	
	static const BFFVariable * GetVar( const char * name );
	static const BFFVariable * GetVar( const AString & name );

	
	static const BFFVariable * GetVarAny( const AString & name );

private:
	
	const BFFVariable * GetVariableRecurse( const AString & name ) const;

	const BFFVariable * GetVariableRecurse( const AString & nameOnly, 
									  BFFVariable::VarType type ) const;
	BFFVariable * GetVarMutableNoRecurse( const AString & name );

	
	Array< BFFVariable * > m_Variables;

	
	BFFStackFrame * m_Next;

	
	static BFFStackFrame * s_StackHead; 
};


#line 61 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/BFF/BFFStackFrame.h"
 
#line 20 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"

#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/FBuild.h"


#pragma once





#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\Helpers/FBuildStats.h"


#pragma once






#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/Node.h"


#pragma once








class IOStream;
class FileNode;
class Job;

















class Node
{
public:
	enum Type
	{
		PROXY_NODE			= 0,
		COPY_FILE_NODE		= 1,
		DIRECTORY_LIST_NODE	= 2,
		EXEC_NODE			= 3,
		FILE_NODE			= 4,
		LIBRARY_NODE		= 5,
		OBJECT_NODE			= 6,
		GROUP_NODE			= 7,
		LINKER_NODE			= 8,
		UNITY_NODE			= 9,
		CS_NODE				= 10,
		TEST_NODE			= 11,
		
		NUM_NODE_TYPES		
	};

	enum ControlFlag
	{
		FLAG_NONE					= 0x00,
		FLAG_TRIVIAL_BUILD			= 0x01,	
		FLAG_NO_DELETE_ON_FAIL		= 0x02, 
	};

	enum StatsFlag
	{
		STATS_PROCESSED		= 0x01, 
		STATS_BUILT			= 0x02,	
		STATS_CACHE_HIT		= 0x04, 
		STATS_CACHE_MISS	= 0x08, 
		STATS_CACHE_STORE	= 0x10, 
		STATS_STATS_PROCESSED	= 0x8000 
	};

	enum BuildResult
	{
		NODE_RESULT_FAILED		= 0,	
		NODE_RESULT_NEED_SECOND_BUILD_PASS,	
		NODE_RESULT_OK,					
		NODE_RESULT_OK_CACHE			
	};

	enum State
	{
		NOT_PROCESSED,		
		STATIC_DEPS_READY,	
		DYNAMIC_DEPS_DONE,	
		BUILDING,			
		FAILED,				
		UP_TO_DATE,			
	};

	explicit Node( const AString & name, Type type, uint32_t controlFlags );
	virtual ~Node();

	inline const AString & GetName() const { return m_Name; }
	inline Type GetType() const { return m_Type; }
	inline const char * GetTypeName() const { return s_NodeTypeNames[ m_Type ]; }
	template < class T >
	inline T * CastTo() const;

	
	virtual bool IsAFile() const = 0;

	inline State GetState() const { return m_State; }

	inline bool GetStatFlag( StatsFlag flag ) const { return ( ( m_StatsFlags & flag ) != 0 ); }
	inline void SetStatFlag( StatsFlag flag )		{ m_StatsFlags |= flag; }

	inline uint32_t GetLastBuildTime() const	{ return m_LastBuildTimeMs; }
	inline uint32_t GetProcessingTime() const	{ return m_ProcessingTime; }

	virtual const Array< Node * > & GetStaticDependencies() const;
	virtual const Array< Node * > & GetDynamicDependencies() const;

	static Node *	Load( IOStream & stream, bool remote );
	static bool		Save( IOStream & stream, const Node * node );

	static bool EnsurePathExistsForFile( const AString & name );
protected:
	friend class FBuild;
	friend class JobQueue;
	friend class JobQueueRemote;
	friend class NodeGraph;
	friend class WorkerThread;

	void ReplaceDummyName( const AString & newName );

	virtual bool Save( IOStream & stream ) const = 0;

	inline uint32_t GetControlFlags() const { return m_ControlFlags; }

	inline void SetState( State state ) { m_State = state; }

	
	virtual bool DoDynamicDependencies( bool forceClean );
	virtual bool DetermineNeedToBuild( bool forceClean ) = 0;
	virtual BuildResult DoBuild( Job * job );
	virtual BuildResult DoBuild2( Job * job );

	inline void		SetLastBuildTime( uint32_t ms ) { m_LastBuildTimeMs = ms; }
	inline void		AddProcessingTime( uint32_t ms ){ m_ProcessingTime += ms; }

	
	bool SaveDepArray( IOStream & stream, const Array< Node * > & depArray ) const;
	static bool LoadDepArray( IOStream & stream, Array< Node * > & deps, bool remote );

	bool SaveNode( IOStream & stream, const Node * node ) const;
	static bool LoadNode( IOStream & stream, Node * & node );
	static bool LoadNode( IOStream & stream, FileNode * & node );

	static void DumpOutput( const char * data, 
							uint32_t dataSize,
							const Array< AString > * exclusions = nullptr );

	State m_State;
	uint32_t		m_ControlFlags;
	uint32_t		m_StatsFlags;
	Type m_Type;
	uint32_t m_LastBuildTimeMs;	
	uint32_t m_ProcessingTime;	
	AString	m_Name;

	
	
	static Array< Node * > s_NoDependencies;

	static const char * const s_NodeTypeNames[ NUM_NODE_TYPES ];
};


template < class T >
inline T * Node::CastTo() const
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	return (T *)this;
}


#line 176 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/Node.h"
#line 11 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\Helpers/FBuildStats.h"



struct FBuildStats
{
public:
	FBuildStats();

	

	
	uint32_t	m_NumNodesInTarget;		

	
	uint32_t	m_NodeTimeTotalms;
	uint32_t	m_NodeTimeProgressms;

	
	float		m_TotalBuildTime;		

	
	void GatherPostBuildStatistics( Node * node );

	void OutputSummary() const;

	
	uint32_t GetNodesProcessed() const	{ return m_Totals.m_NumProcessed; }
	uint32_t GetNodesBuilt() const		{ return m_Totals.m_NumBuilt; }
	uint32_t GetCacheHits() const		{ return m_Totals.m_NumCacheHits; }
	uint32_t GetCacheMisses() const		{ return m_Totals.m_NumCacheMisses; }
	uint32_t GetCacheStores() const		{ return m_Totals.m_NumCacheStores; }

private:
	void GatherPostBuildStatisticsRecurse( Node * node );

	void FormatTime( float timeInSeconds , AString & buffer ) const;

	uint32_t m_TotalLocalCPUTimeMS;

	Array< Node * > m_MostExpensiveNodes;
	uint32_t m_LowestTimeOfExpensiveNodes;

	
	struct Stats
	{
		Stats();

		uint32_t m_NumProcessed;
		uint32_t m_NumBuilt;
		uint32_t m_NumCacheHits;
		uint32_t m_NumCacheMisses;
		uint32_t m_NumCacheStores;
	};
	Stats m_PerTypeStats[ Node::NUM_NODE_TYPES ];
	Stats m_Totals;
};


#line 70 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\Helpers/FBuildStats.h"
#line 10 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/FBuild.h"


#line 1 "c:\\p4\\Code\\Core\\Containers\\Singleton.h"


#pragma once









template < class T >
class Singleton
{
public:
	static T & Get();
	static inline bool IsValid() { return ( s_Instance != nullptr ); }

protected:
	Singleton();
	~Singleton();

private:
	static T * s_Instance;
};



template < class T >
T * Singleton< T >::s_Instance = nullptr;



template < class T >
Singleton< T >::Singleton()
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	s_Instance = static_cast< T * >( this );
}



template < class T >
Singleton< T >::~Singleton()
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	s_Instance = nullptr;
}



template < class T >
T & Singleton< T >::Get()
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
#pragma warning( push )
#pragma warning( disable : 6011 ) 
	return *s_Instance;
#pragma warning( pop )
}


#line 65 "c:\\p4\\Code\\Core\\Containers\\Singleton.h"
#line 13 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/FBuild.h"

#line 1 "c:\\p4\\Code\\Core\\Time\\Timer.h"


#pragma once









class Timer
{
public:
	Timer() { Start(); }
	inline ~Timer() {}

	inline void Start() { m_StartTime = GetNow(); }
	inline void Start( float time ) { m_StartTime = GetNow() - (uint64_t)( (double)GetFrequency() * (double)time ); }

	float GetElapsed() const
	{
		uint64_t now = GetNow();
		return (float)( (double)( now - m_StartTime ) / (double)GetFrequency() );
	}

	static uint64_t GetNow();
	static inline uint64_t GetFrequency() { return 1000; }

private:
	uint64_t m_StartTime;
};


#line 37 "c:\\p4\\Code\\Core\\Time\\Timer.h"
#line 15 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/FBuild.h"



class Client;
class FileStream;
class JobQueue;
class Node;
class NodeGraph;



struct FBuildOptions
{
public:
	FBuildOptions();

	void SetWorkingDir( const AString & path );
	inline const AString & GetWorkingDir() const { return m_WorkingDir; }

	bool m_ForceCleanBuild;
	bool m_UseCacheRead;
	bool m_UseCacheWrite;
	bool m_ShowInfo;
	bool m_ShowErrors;
	bool m_ShowProgress;
	bool m_AllowDistributed;
	bool m_ShowSummary;
	uint32_t m_NumWorkerThreads;
	AString m_ConfigFile;

private:
	AString m_WorkingDir;
};




class FBuild : public Singleton< FBuild >
{
public:
	explicit FBuild( const FBuildOptions & options = FBuildOptions() );
	~FBuild();

	
	
	bool Initialize( const char * nodeGraphDBFile = nullptr );

	
	bool Build( const AString & target );
	bool Build( Node * nodeToBuild );

	
	bool SaveDependencyGraph( const char * nodeGraphDBFile = nullptr ) const;

	const FBuildOptions & GetOptions() const { return m_Options; }
	NodeGraph & GetDependencyGraph() const { return *m_DependencyGraph; }
	
	const AString & GetWorkingDir() const { return m_Options.GetWorkingDir(); }

	static const char * GetDependencyGraphFileName();
	static const char * GetDefaultBFFFileName();

	const AString & GetCachePath() const { return m_CachePath; }
	void SetCachePath( const AString & path );

	void GetCacheFileName( uint32_t keyA, uint32_t keyB,
						   AString & path ) const;

	void SetWorkerList( const Array< AString > & workers )		{ m_WorkerList = workers; }
	const Array< AString > & GetWorkerList() const { return m_WorkerList; }

	void SetEnvironmentString( const char * envString, uint32_t size );
	inline const char * GetEnvironmentString() const			{ return m_EnvironmentString; }
	inline uint32_t		GetEnvironmentStringSize() const		{ return m_EnvironmentStringSize; }

	
	const FBuildStats & GetStats() const	{ return m_BuildStats; }
	
	FBuildStats & GetStatsMutable()			{ return m_BuildStats; }

	
	inline void SetStopBuild() { s_StopBuild = true; }
	inline bool GetStopBuild() { return s_StopBuild; }

private:
	void UpdateBuildStatus( const Node * node, bool forceUpdate );

	static bool s_StopBuild;

	NodeGraph * m_DependencyGraph;
	JobQueue * m_JobQueue;
	Client * m_Client; 

	AString m_CachePath;

	Timer m_Timer;
	mutable float m_LastUpdateTime;

	FBuildStats m_BuildStats;

	FBuildOptions m_Options;

	Array< AString > m_WorkerList;

	AString m_OldWorkingDir;

	
	char *		m_EnvironmentString;
	uint32_t	m_EnvironmentStringSize; 
};


#line 128 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/FBuild.h"
#line 22 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/FileNode.h"


#pragma once









class FileNode : public Node
{
public:
	explicit FileNode( const AString & fileName, uint32_t controlFlags = Node::FLAG_TRIVIAL_BUILD );
	virtual ~FileNode();

	inline uint64_t GetTimeStamp() const { return m_TimeStamp; }

	static inline Node::Type GetType() { return Node::FILE_NODE; }

	virtual bool IsAFile() const { return true; }

	static Node * Load( IOStream & stream, bool remote );
	virtual bool Save( IOStream & stream ) const;
protected:
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );

	friend class Client;
	uint64_t m_TimeStamp;
};


#line 37 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/FileNode.h"
#line 23 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/GroupNode.h"


#pragma once













class GroupNode : public Node
{
public:
	explicit GroupNode( const AString & groupName,
						const Array< Node * > & targets );
	virtual ~GroupNode();

	static inline Node::Type GetType() { return Node::GROUP_NODE; }

	virtual bool IsAFile() const { return false; }

	virtual const Array< Node * > & GetStaticDependencies() const;

	static Node * Load( IOStream & stream, bool remote );
	virtual bool Save( IOStream & stream ) const;
private:
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );

	Array< Node * > m_StaticDependencies;
};


#line 41 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/GroupNode.h"
#line 24 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/NodeGraph.h"


#pragma once











class AString;
class CopyNode;
class CSNode;
class DirectoryListNode;
class ExecNode;
class FileNode;
class GroupNode;
class IOStream;
class LibraryNode;
class LinkerNode;
class ObjectNode;
class Node;
class TestNode;
class UnityNode;



class NodeGraphHeader
{
public:
	inline explicit NodeGraphHeader() {}
	inline explicit NodeGraphHeader( uint32_t crc )
	{
		m_Identifier[ 0 ] = 'N';
		m_Identifier[ 1 ] = 'G';
		m_Identifier[ 2 ] = 'D';
		m_Version = NODE_GRAPH_CURRENT_VERSION;
		m_CRC = crc;
	}
	inline ~NodeGraphHeader() {}

	enum { NODE_GRAPH_CURRENT_VERSION = 1 };

	bool IsValid( uint32_t crc ) const
	{
		return ( ( m_Identifier[ 0 ] == 'N' ) &&
				 ( m_Identifier[ 1 ] == 'G' ) &&
				 ( m_Identifier[ 2 ] == 'D' ) &&
				 ( m_Version == NODE_GRAPH_CURRENT_VERSION ) &&
				 ( m_CRC == crc ) );
	}
private:
	char		m_Identifier[ 3 ];
	uint8_t		m_Version;
	uint32_t	m_CRC;
};



class NodeGraph
{
public:
	explicit NodeGraph();
	~NodeGraph();

	bool Initialize( const char * bffFile, const char * nodeGraphDBFile );

	bool Load( IOStream & stream );
	bool Save( IOStream & stream ) const;

	
	Node * FindNode( const AString & nodeName ) const;

	
	CopyNode * CreateCopyNode( const AString & dstFileName, 
							   Node * sourceFile );
	ExecNode * CreateExecNode( const AString & dstFileName, 
							   FileNode * sourceFile, 
							   FileNode * executable, 
							   const char * arguments, 
							   const char * workingDir );
	FileNode * CreateFileNode( const AString & fileName, bool cleanPath = true );
	DirectoryListNode * CreateDirectoryListNode( const AString & name,
												 const AString & path,
												 const AString & wildCard,
												 bool recursive,
												 const AString & excludePath );
	LibraryNode *	CreateLibraryNode( const AString & libraryName,
									   Array< Node * > & inputNode,
									   FileNode * compilerNode,
									   const AString & compilerArgs,
									   const AString & compilerOutputPath,
									   const AString & linker,
									   const AString & linkerArgs,
									   ObjectNode * precompiledHeader );
	ObjectNode *	CreateObjectNode( const AString & objectName,
									  Node * inputNode,
									  Node * compilerNode,
									  const AString & compilerArgs,
									  Node * precompiledHeader,
									  uint32_t flags );
	GroupNode *		CreateGroupNode( const AString & groupName,
									 const Array< Node * > & targets );
	LinkerNode *	CreateLinkerNode( const AString & linkerOutputName,
									  const Array< Node * > & inputLibraries,
									  const AString & linker,
									  const AString & linkerArgs );
	UnityNode *	CreateUnityNode( const AString & unityName,
								 DirectoryListNode * dirNode,
								 const AString & outputPath,
								 const AString & outputPattern,
								 uint32_t numUnityFilesToCreate,
								 const AString & precompiledHeader );

	CSNode * CreateCSNode( const AString & compilerOutput,
						   const Array< Node * > & inputNodes,
						   const AString & compiler,
						   const AString & compilerOptions,
						   const Array< Node * > & extraRefs );
	TestNode * CreateTestNode( const AString & testOutput,
							   FileNode * testExecutable,
							   const AString & arguments,
							   const AString & workingDir );

	void DoBuildPass( Node * nodeToBuild );

	static void CleanPath( const AString & name, AString & fullPath );

private:
	friend class FBuild;

	void AddNode( Node * node );

	void BuildRecurse( Node * nodeToBuild );
	void UpdateBuildStatusRecurse( const Node * node, uint32_t & nodesBuiltTime, 
													  uint32_t & totalNodeTime,
													  uint32_t & totalNodes ) const;

	Node * FindNodeInternal( const AString & fullPath ) const;

	struct NodeEntry
	{
	public:
		uint32_t	m_NodeCRC;
		Node *		m_Node;
	};
	Array< NodeEntry > m_AllNodes;

	uint32_t m_BFFCRC; 

	Timer m_Timer;
};


#line 160 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/NodeGraph.h"
#line 25 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"

#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdarg.h"














#pragma once






#line 23 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdarg.h"








#line 32 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdarg.h"
#line 27 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"
#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"














#pragma once




#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"














 





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 21 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"





#pragma pack(push,8)


extern "C" {
#line 31 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

























struct _iobuf {
        char *_ptr;
        int   _cnt;
        char *_base;
        int   _flag;
        int   _file;
        int   _charbuf;
        int   _bufsiz;
        char *_tmpfname;
        };
typedef struct _iobuf FILE;

#line 69 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"










#line 80 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"













#line 94 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"





















#line 116 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"







#line 124 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
#line 125 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"




 FILE * __cdecl __iob_func(void);
#line 131 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"





typedef __int64 fpos_t;

#line 139 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"






#line 146 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
























   int __cdecl _filbuf(  FILE * _File );
  int __cdecl _flsbuf(  int _Ch,   FILE * _File);




   FILE * __cdecl _fsopen(  const char * _Filename,   const char * _Mode,   int _ShFlag);
#line 178 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

 void __cdecl clearerr(  FILE * _File);

  errno_t __cdecl clearerr_s(  FILE * _File );
#line 183 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl fclose(  FILE * _File);
  int __cdecl _fcloseall(void);




   FILE * __cdecl _fdopen(  int _FileHandle,   const char * _Mode);
#line 191 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

   int __cdecl feof(  FILE * _File);
   int __cdecl ferror(  FILE * _File);
  int __cdecl fflush(  FILE * _File);
  int __cdecl fgetc(  FILE * _File);
  int __cdecl _fgetchar(void);
  int __cdecl fgetpos(  FILE * _File ,   fpos_t * _Pos);
  char * __cdecl fgets(  char * _Buf,   int _MaxCount,   FILE * _File);




   int __cdecl _fileno(  FILE * _File);
#line 205 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"




#line 210 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

   char * __cdecl _tempnam(  const char * _DirName,   const char * _FilePrefix);



#line 216 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

  int __cdecl _flushall(void);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl fopen(  const char * _Filename,   const char * _Mode);

  errno_t __cdecl fopen_s(  FILE ** _File,   const char * _Filename,   const char * _Mode);
#line 222 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl fprintf(  FILE * _File,     const char * _Format, ...);

  int __cdecl fprintf_s(  FILE * _File,     const char * _Format, ...);
#line 226 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl fputc(  int _Ch,   FILE * _File);
  int __cdecl _fputchar(  int _Ch);
  int __cdecl fputs(  const char * _Str,   FILE * _File);
  size_t __cdecl fread(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,   FILE * _File);

  size_t __cdecl fread_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,   FILE * _File);
#line 233 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "freopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl freopen(  const char * _Filename,   const char * _Mode,   FILE * _File);

  errno_t __cdecl freopen_s(  FILE ** _File,   const char * _Filename,   const char * _Mode,   FILE * _OldFile);
#line 237 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl fscanf(  FILE * _File,     const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _fscanf_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)

  int __cdecl fscanf_s(  FILE * _File,     const char * _Format, ...);
#line 244 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl _fscanf_s_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
  int __cdecl fsetpos(  FILE * _File,   const fpos_t * _Pos);
  int __cdecl fseek(  FILE * _File,   long _Offset,   int _Origin);
   long __cdecl ftell(  FILE * _File);

  int __cdecl _fseeki64(  FILE * _File,   __int64 _Offset,   int _Origin);
   __int64 __cdecl _ftelli64(  FILE * _File);

  size_t __cdecl fwrite(  const void * _Str,   size_t _Size,   size_t _Count,   FILE * _File);
   int __cdecl getc(  FILE * _File);
   int __cdecl getchar(void);
   int __cdecl _getmaxstdio(void);

 char * __cdecl gets_s(  char * _Buf,   rsize_t _Size);
#line 260 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
extern "C++" { template <size_t _Size> inline char * __cdecl gets_s(char (&_Buffer)[_Size]) throw() { return gets_s(_Buffer, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "gets_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl gets(  char *_Buffer);
  int __cdecl _getw(  FILE * _File);


 void __cdecl perror(  const char * _ErrMsg);
#line 267 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

  int __cdecl _pclose(  FILE * _File);
   FILE * __cdecl _popen(  const char * _Command,   const char * _Mode);
#line 271 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl printf(    const char * _Format, ...);

  int __cdecl printf_s(    const char * _Format, ...);
#line 275 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl putc(  int _Ch,   FILE * _File);
  int __cdecl putchar(  int _Ch);
  int __cdecl puts(  const char * _Str);
  int __cdecl _putw(  int _Word,   FILE * _File);


 int __cdecl remove(  const char * _Filename);
   int __cdecl rename(  const char * _OldFilename,   const char * _NewFilename);
 int __cdecl _unlink(  const char * _Filename);

__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_unlink" ". See online help for details."))  int __cdecl unlink(  const char * _Filename);
#line 287 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
#line 288 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
 void __cdecl rewind(  FILE * _File);
  int __cdecl _rmtmp(void);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "scanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl scanf(    const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_scanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _scanf_l(    const char * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)

  int __cdecl scanf_s(    const char * _Format, ...);
#line 297 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl _scanf_s_l(    const char * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "setvbuf" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  void __cdecl setbuf(  FILE * _File,     char * _Buffer);
  int __cdecl _setmaxstdio(  int _Max);
  unsigned int __cdecl _set_output_format(  unsigned int _Format);
  unsigned int __cdecl _get_output_format(void);
  int __cdecl setvbuf(  FILE * _File,   char * _Buf,   int _Mode,   size_t _Size);
  int __cdecl _snprintf_s(  char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, ...);
extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl _snprintf_s(  char (&_Dest)[_Size],   size_t _MaxCount,     const char * _Format, ...) throw() { va_list _ArgList; ( __va_start(&_ArgList, _Format) ); return _vsnprintf_s(_Dest, _Size, _MaxCount, _Format, _ArgList); } __pragma(warning(pop)); }

  int __cdecl sprintf_s(  char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, ...);
#line 309 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl sprintf_s(  char (&_Dest)[_Size],     const char * _Format, ...) throw() { va_list _ArgList; ( __va_start(&_ArgList, _Format) ); return vsprintf_s(_Dest, _Size, _Format, _ArgList); } __pragma(warning(pop)); }
   int __cdecl _scprintf(    const char * _Format, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "sscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl sscanf(  const char * _Src,     const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_sscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _sscanf_l(  const char * _Src,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)

  int __cdecl sscanf_s(  const char * _Src,     const char * _Format, ...);
#line 318 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl _sscanf_s_l(  const char * _Src,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snscanf(    const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snscanf_l(    const char * _Src,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _snscanf_s(    const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
  int __cdecl _snscanf_s_l(    const char * _Src,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpfile_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl tmpfile(void);

  errno_t __cdecl tmpfile_s(    FILE ** _File);
  errno_t __cdecl tmpnam_s(  char * _Buf,   rsize_t _Size);
#line 329 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl tmpnam_s(  char (&_Buf)[_Size]) throw() { return tmpnam_s(_Buf, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl tmpnam(  char *_Buffer);
  int __cdecl ungetc(  int _Ch,   FILE * _File);
  int __cdecl vfprintf(  FILE * _File,     const char * _Format, va_list _ArgList);

  int __cdecl vfprintf_s(  FILE * _File,     const char * _Format, va_list _ArgList);
#line 336 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl vprintf(    const char * _Format, va_list _ArgList);

  int __cdecl vprintf_s(    const char * _Format, va_list _ArgList);
#line 340 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "vsnprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl vsnprintf(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);

  int __cdecl vsnprintf_s(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl vsnprintf_s(  char (&_Dest)[_Size],   size_t _MaxCount,     const char * _Format, va_list _Args) throw() { return vsnprintf_s(_Dest, _Size, _MaxCount, _Format, _Args); } }
#line 345 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl _vsnprintf_s(  char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl _vsnprintf_s(  char (&_Dest)[_Size],   size_t _MaxCount,     const char * _Format, va_list _Args) throw() { return _vsnprintf_s(_Dest, _Size, _MaxCount, _Format, _Args); } }
#pragma warning(push)
#pragma warning(disable:4793)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snprintf(    char *_Dest,   size_t _Count,     const char * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsnprintf(    char *_Dest,   size_t _Count,     const char * _Format, va_list _Args);
#pragma warning(pop)

 int __cdecl vsprintf_s(  char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl vsprintf_s(  char (&_Dest)[_Size],     const char * _Format, va_list _Args) throw() { return vsprintf_s(_Dest, _Size, _Format, _Args); } }
#line 355 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
#pragma warning(push)
#pragma warning(disable:4793)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "sprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl sprintf(  char *_Dest,  const char * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vsprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl vsprintf(  char *_Dest,  const char * _Format, va_list _Args);
#pragma warning(pop)
   int __cdecl _vscprintf(    const char * _Format, va_list _ArgList);
  int __cdecl _snprintf_c(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, ...);
  int __cdecl _vsnprintf_c(  char *_DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);

  int __cdecl _fprintf_p(  FILE * _File,     const char * _Format, ...);
  int __cdecl _printf_p(    const char * _Format, ...);
  int __cdecl _sprintf_p(  char * _Dst,   size_t _MaxCount,     const char * _Format, ...);
  int __cdecl _vfprintf_p(  FILE * _File,     const char * _Format, va_list _ArgList);
  int __cdecl _vprintf_p(    const char * _Format, va_list _ArgList);
  int __cdecl _vsprintf_p(  char * _Dst,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
   int __cdecl _scprintf_p(    const char * _Format, ...);
   int __cdecl _vscprintf_p(    const char * _Format, va_list _ArgList);
 int __cdecl _set_printf_count_output(  int _Value);
 int __cdecl _get_printf_count_output(void);

  int __cdecl _printf_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _printf_p_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _printf_s_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _vprintf_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vprintf_p_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vprintf_s_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);

  int __cdecl _fprintf_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _fprintf_p_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _fprintf_s_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _vfprintf_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vfprintf_p_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vfprintf_s_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);

 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_sprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _sprintf_l(    char * _DstBuf,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _sprintf_p_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _sprintf_s_l(  char * _DstBuf,   size_t _DstSize,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsprintf_l(    char * _DstBuf,   const char * _Format,   _locale_t, va_list _ArgList);
  int __cdecl _vsprintf_p_l(  char * _DstBuf,   size_t _MaxCount,     const char* _Format,   _locale_t _Locale,  va_list _ArgList);
  int __cdecl _vsprintf_s_l(  char * _DstBuf,   size_t _DstSize,     const char * _Format,   _locale_t _Locale, va_list _ArgList);

  int __cdecl _scprintf_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _scprintf_p_l(    const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _vscprintf_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vscprintf_p_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);

 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _snprintf_c_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
  int __cdecl _snprintf_s_l(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsnprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vsnprintf_c_l(  char * _DstBuf,   size_t _MaxCount, const char *,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vsnprintf_s_l(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char* _Format,  _locale_t _Locale, va_list _ArgList);







#line 414 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"




   FILE * __cdecl _wfsopen(  const wchar_t * _Filename,   const wchar_t * _Mode,   int _ShFlag);
#line 420 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

  wint_t __cdecl fgetwc(  FILE * _File);
  wint_t __cdecl _fgetwchar(void);
  wint_t __cdecl fputwc(  wchar_t _Ch,   FILE * _File);
  wint_t __cdecl _fputwchar(  wchar_t _Ch);
   wint_t __cdecl getwc(  FILE * _File);
   wint_t __cdecl getwchar(void);
  wint_t __cdecl putwc(  wchar_t _Ch,   FILE * _File);
  wint_t __cdecl putwchar(  wchar_t _Ch);
  wint_t __cdecl ungetwc(  wint_t _Ch,   FILE * _File);

  wchar_t * __cdecl fgetws(  wchar_t * _Dst,   int _SizeInWords,   FILE * _File);
  int __cdecl fputws(  const wchar_t * _Str,   FILE * _File);
  wchar_t * __cdecl _getws_s(  wchar_t * _Str,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline wchar_t * __cdecl _getws_s(  wchar_t (&_String)[_Size]) throw() { return _getws_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_getws_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _getws(  wchar_t *_String);
  int __cdecl _putws(  const wchar_t * _Str);

  int __cdecl fwprintf(  FILE * _File,     const wchar_t * _Format, ...);

  int __cdecl fwprintf_s(  FILE * _File,     const wchar_t * _Format, ...);
#line 442 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl wprintf(    const wchar_t * _Format, ...);

  int __cdecl wprintf_s(    const wchar_t * _Format, ...);
#line 446 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
   int __cdecl _scwprintf(    const wchar_t * _Format, ...);
  int __cdecl vfwprintf(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);

  int __cdecl vfwprintf_s(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
#line 451 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl vwprintf(    const wchar_t * _Format, va_list _ArgList);

  int __cdecl vwprintf_s(    const wchar_t * _Format, va_list _ArgList);
#line 455 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"


 int __cdecl swprintf_s(  wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, ...);
#line 459 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl swprintf_s(  wchar_t (&_Dest)[_Size],     const wchar_t * _Format, ...) throw() { va_list _ArgList; ( __va_start(&_ArgList, _Format) ); return vswprintf_s(_Dest, _Size, _Format, _ArgList); } __pragma(warning(pop)); }

 int __cdecl vswprintf_s(  wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);
#line 463 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
extern "C++" { template <size_t _Size> inline int __cdecl vswprintf_s(  wchar_t (&_Dest)[_Size],     const wchar_t * _Format, va_list _Args) throw() { return vswprintf_s(_Dest, _Size, _Format, _Args); } }

  int __cdecl _swprintf_c(  wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, ...);
  int __cdecl _vswprintf_c(  wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);

  int __cdecl _snwprintf_s(  wchar_t * _DstBuf,   size_t _SizeInWords,   size_t _MaxCount,     const wchar_t * _Format, ...);
extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl _snwprintf_s(  wchar_t (&_Dest)[_Size],   size_t _Count,     const wchar_t * _Format, ...) throw() { va_list _ArgList; ( __va_start(&_ArgList, _Format) ); return _vsnwprintf_s(_Dest, _Size, _Count, _Format, _ArgList); } __pragma(warning(pop)); }
  int __cdecl _vsnwprintf_s(  wchar_t * _DstBuf,   size_t _SizeInWords,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl _vsnwprintf_s(  wchar_t (&_Dest)[_Size],   size_t _Count,     const wchar_t * _Format, va_list _Args) throw() { return _vsnwprintf_s(_Dest, _Size, _Count, _Format, _Args); } }
#pragma warning(push)
#pragma warning(disable:4793)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsnwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, va_list _Args);
#pragma warning(pop)

  int __cdecl _fwprintf_p(  FILE * _File,     const wchar_t * _Format, ...);
  int __cdecl _wprintf_p(    const wchar_t * _Format, ...);
  int __cdecl _vfwprintf_p(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
  int __cdecl _vwprintf_p(    const wchar_t * _Format, va_list _ArgList);
  int __cdecl _swprintf_p(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, ...);
  int __cdecl _vswprintf_p(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);
   int __cdecl _scwprintf_p(    const wchar_t * _Format, ...);
   int __cdecl _vscwprintf_p(    const wchar_t * _Format, va_list _ArgList);

  int __cdecl _wprintf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _wprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _wprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _vwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vwprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);

  int __cdecl _fwprintf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _fwprintf_p_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _fwprintf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _vfwprintf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vfwprintf_p_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vfwprintf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);

  int __cdecl _swprintf_c_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _swprintf_p_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _swprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _vswprintf_c_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vswprintf_p_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vswprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);

   int __cdecl _scwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
   int __cdecl _scwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
   int __cdecl _vscwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);

 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _snwprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _vsnwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  int __cdecl _vsnwprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);










#line 526 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"


#pragma warning(push)
#pragma warning(disable:4141 4996 4793)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_swprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl _swprintf(    wchar_t *_Dest,     const wchar_t * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vswprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl _vswprintf(    wchar_t *_Dest,     const wchar_t * _Format, va_list _Args);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "__swprintf_l_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl __swprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vswprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS."))  int __cdecl __vswprintf_l( wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, va_list _Args);
#pragma warning(pop)


#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\swprintf.inl"












#pragma once







#line 22 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\swprintf.inl"










#line 33 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\swprintf.inl"

#pragma warning( push )
#pragma warning( disable : 4793 4412 )
static __inline int swprintf(wchar_t * _String, size_t _Count, const wchar_t * _Format, ...)
{
    va_list _Arglist;
    int _Ret;
    ( __va_start(&_Arglist, _Format) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, 0, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )

#pragma warning( push )
#pragma warning( disable : 4412 )
static __inline int __cdecl vswprintf(wchar_t * _String, size_t _Count, const wchar_t * _Format, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, 0, _Ap);
}
#pragma warning( pop )


#line 57 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\swprintf.inl"

#pragma warning( push )
#pragma warning( disable : 4793 4412 )
static __inline int _swprintf_l(wchar_t * _String, size_t _Count, const wchar_t * _Format, _locale_t _Plocinfo, ...)
{
    va_list _Arglist;
    int _Ret;
    ( __va_start(&_Arglist, _Plocinfo) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )

#pragma warning( push )
#pragma warning( disable : 4412 )
static __inline int __cdecl _vswprintf_l(wchar_t * _String, size_t _Count, const wchar_t * _Format, _locale_t _Plocinfo, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Ap);
}
#pragma warning( pop )


#pragma warning( push )
#pragma warning( disable : 4996 )

#pragma warning( push )
#pragma warning( disable : 4793 4141 )
extern "C++" __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "swprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __inline int swprintf(    wchar_t * _String,     const wchar_t * _Format, ...)
{
    va_list _Arglist;
    ( __va_start(&_Arglist, _Format) );
    int _Ret = _vswprintf(_String, _Format, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )

#pragma warning( push )
#pragma warning( disable : 4141 )
extern "C++" __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "vswprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __inline int __cdecl vswprintf(    wchar_t * _String,     const wchar_t * _Format, va_list _Ap)
{
    return _vswprintf(_String, _Format, _Ap);
}
#pragma warning( pop )

#pragma warning( push )
#pragma warning( disable : 4793 4141 )
extern "C++" __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_swprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __inline int _swprintf_l(    wchar_t * _String,     const wchar_t * _Format, _locale_t _Plocinfo, ...)
{
    va_list _Arglist;
    ( __va_start(&_Arglist, _Plocinfo) );
    int _Ret = __vswprintf_l(_String, _Format, _Plocinfo, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )

#pragma warning( push )
#pragma warning( disable : 4141 )
extern "C++" __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vswprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __inline int __cdecl _vswprintf_l(    wchar_t * _String,     const wchar_t * _Format, _locale_t _Plocinfo, va_list _Ap)
{
    return __vswprintf_l(_String, _Format, _Plocinfo, _Ap);
}
#pragma warning( pop )

#pragma warning( pop )

#line 126 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\swprintf.inl"

#line 128 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\swprintf.inl"
#line 129 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\swprintf.inl"

#line 536 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
#line 537 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"













#line 551 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

   wchar_t * __cdecl _wtempnam(  const wchar_t * _Directory,   const wchar_t * _FilePrefix);



#line 557 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

   int __cdecl _vscwprintf(    const wchar_t * _Format, va_list _ArgList);
   int __cdecl _vscwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl fwscanf(  FILE * _File,     const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _fwscanf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)

  int __cdecl fwscanf_s(  FILE * _File,     const wchar_t * _Format, ...);
#line 567 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl _fwscanf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "swscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl swscanf(  const wchar_t * _Src,     const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_swscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _swscanf_l(  const wchar_t * _Src,     const wchar_t * _Format,   _locale_t _Locale, ...);

  int __cdecl swscanf_s(  const wchar_t *_Src,     const wchar_t * _Format, ...);
#line 573 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl _swscanf_s_l(  const wchar_t * _Src,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snwscanf(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _snwscanf_l(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  int __cdecl _snwscanf_s(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
  int __cdecl _snwscanf_s_l(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "wscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl wscanf(    const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  int __cdecl _wscanf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);

  int __cdecl wscanf_s(    const wchar_t * _Format, ...);
#line 583 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
  int __cdecl _wscanf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)

   FILE * __cdecl _wfdopen(  int _FileHandle ,   const wchar_t * _Mode);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl _wfopen(  const wchar_t * _Filename,   const wchar_t * _Mode);
  errno_t __cdecl _wfopen_s(  FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfreopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  FILE * __cdecl _wfreopen(  const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);
  errno_t __cdecl _wfreopen_s(  FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);



 void __cdecl _wperror(  const wchar_t * _ErrMsg);
#line 596 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

   FILE * __cdecl _wpopen(  const wchar_t *_Command,   const wchar_t * _Mode);
#line 599 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
 int __cdecl _wremove(  const wchar_t * _Filename);
  errno_t __cdecl _wtmpnam_s(  wchar_t * _DstBuf,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wtmpnam_s(  wchar_t (&_Buffer)[_Size]) throw() { return _wtmpnam_s(_Buffer, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wtmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wtmpnam(  wchar_t *_Buffer);

  wint_t __cdecl _fgetwc_nolock(  FILE * _File);
  wint_t __cdecl _fputwc_nolock(  wchar_t _Ch,   FILE * _File);
  wint_t __cdecl _ungetwc_nolock(  wint_t _Ch,   FILE * _File);






#line 614 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"
inline   wint_t __cdecl getwchar()
        {return (fgetwc((&__iob_func()[0]))); }   
inline  wint_t __cdecl putwchar(  wchar_t _C)
        {return (fputwc(_C, (&__iob_func()[1]))); }       
#line 619 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"










#line 630 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"


#line 633 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"


#line 636 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"















#line 652 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"











 void __cdecl _lock_file(  FILE * _File);
 void __cdecl _unlock_file(  FILE * _File);

  int __cdecl _fclose_nolock(  FILE * _File);
  int __cdecl _fflush_nolock(  FILE * _File);
  size_t __cdecl _fread_nolock(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,   FILE * _File);
  size_t __cdecl _fread_nolock_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,   FILE * _File);
  int __cdecl _fseek_nolock(  FILE * _File,   long _Offset,   int _Origin);
   long __cdecl _ftell_nolock(  FILE * _File);
  int __cdecl _fseeki64_nolock(  FILE * _File,   __int64 _Offset,   int _Origin);
   __int64 __cdecl _ftelli64_nolock(  FILE * _File);
  size_t __cdecl _fwrite_nolock(  const void * _DstBuf,   size_t _Size,   size_t _Count,   FILE * _File);
  int __cdecl _ungetc_nolock(  int _Ch,   FILE * _File);












#line 689 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"











#line 701 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_tempnam" ". See online help for details."))  char * __cdecl tempnam(  const char * _Directory,   const char * _FilePrefix);



#line 707 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fcloseall" ". See online help for details."))  int __cdecl fcloseall(void);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fdopen" ". See online help for details."))  FILE * __cdecl fdopen(  int _FileHandle,   const char * _Format);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fgetchar" ". See online help for details."))  int __cdecl fgetchar(void);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fileno" ". See online help for details."))  int __cdecl fileno(  FILE * _File);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_flushall" ". See online help for details."))  int __cdecl flushall(void);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fputchar" ". See online help for details."))  int __cdecl fputchar(  int _Ch);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_getw" ". See online help for details."))  int __cdecl getw(  FILE * _File);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_putw" ". See online help for details."))  int __cdecl putw(  int _Ch,   FILE * _File);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_rmtmp" ". See online help for details."))  int __cdecl rmtmp(void);

#line 719 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"


}
#line 723 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

#pragma pack(pop)

#line 727 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\stdio.h"

#line 28 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\Function.cpp"



 Function * Function::s_FirstFunction = nullptr;



Function::Function( const char * name )
: m_NextFunction( nullptr )
, m_Name( name )
, m_Seen( false )
, m_AliasForFunction( 256 )
{
	if ( s_FirstFunction == nullptr )
	{
		s_FirstFunction = this;
		return;
	}
	Function * func = s_FirstFunction;
	while ( func )
	{
		if ( func->m_NextFunction == nullptr )
		{
			func->m_NextFunction = this;
			return;
		}
		func = func->m_NextFunction;
	}
}



Function::~Function()
{
}



 const Function * Function::Find( const AString & name )
{
	Function * func = s_FirstFunction;
	while ( func )
	{
		if ( func->GetName() == name )
		{
			return func;
		}
		func = func->m_NextFunction;
	}
	return nullptr;
}



 void Function::Create()
{
	new FunctionCSAssembly;
	new FunctionDLL;
	new FunctionExecutable;
	new FunctionForEach;
	new FunctionGroup;
	new FunctionLibrary;
	new FunctionSettings;
	new FunctionUnity;
	new FunctionTest;
}



 void Function::Destroy()
{
	Function * func = s_FirstFunction;
	while ( func )
	{
		Function * nextFunc = func->m_NextFunction;
		delete func;
		func = nextFunc;
	}
	s_FirstFunction = nullptr;
}



 bool Function::AcceptsHeader() const
{
	return false;
}



 bool Function::NeedsHeader() const
{
	return false;
}



 bool Function::IsUnique() const
{
	return false;
}



 bool Function::ParseFunction( const BFFIterator & functionNameStart,
										  const BFFIterator & functionBodyStartToken, 
										  const BFFIterator & functionBodyStopToken,
										  const BFFIterator * functionHeaderStartToken,
										  const BFFIterator * functionHeaderStopToken ) const
{
	m_AliasForFunction.Clear();
	if ( AcceptsHeader() &&
		 functionHeaderStartToken && functionHeaderStopToken &&
		 ( functionHeaderStartToken->GetDistTo( *functionHeaderStopToken ) > 1 ) )
	{
		
		BFFIterator start( *functionHeaderStartToken );
		do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		start++;
		start.SkipWhiteSpace();
		const char c = *start;
		if ( ( c != '"' ) && ( c != '\'' ) )
		{
			Error( start, "Unexpected token in header - expected \" or '" );
			return false;
		}
		BFFIterator stop( start );
		stop.SkipString( c );
		if ( stop > *functionHeaderStopToken )
		{
			Error( start, "Failed to find matching %c", c );
			return false;
		}
		if ( start.GetDistTo( stop ) <= 1 )
		{
			Error( start, "Empty string not allowed" );
			return false;
		}

		
		start++; 
		if ( BFFParser::PerformVariableSubstitutions( start, stop, m_AliasForFunction ) == false )
		{
			return false; 
		}
	}

	
	BFFParser subParser;
	BFFIterator subIter( functionBodyStartToken );
	subIter++; 
	subIter.SetMax( functionBodyStopToken.GetCurrent() ); 
	if ( subParser.Parse( subIter ) == false )
	{
		return false;
	}

	
	return Commit( functionNameStart );
}



 bool Function::Commit( const BFFIterator & funcStartIter ) const
{
	(void)funcStartIter;
	return true;
}



void Function::Error( const BFFIterator & iter, const char * fmtString, ... ) const
{
	const size_t BUFFER_SIZE( 4096 );
	char buffer[ BUFFER_SIZE ];

	va_list args;
	( __va_start(&args, fmtString) );
	vsnprintf_s( buffer, BUFFER_SIZE, ((size_t)-1), fmtString, args );
	( args = (va_list)0 );

	iter.EmitParseError( "%s(): %s", GetName().Get(), buffer );
}



bool Function::GetString( const BFFIterator & iter, const BFFVariable * & var, const char * name, bool required ) const
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	var = nullptr;

	const BFFVariable * v = BFFStackFrame::GetVar( name );

	if ( v == nullptr )
	{
		if ( required )
		{
			Error( iter, "Unable to find '%s' string", name );
			return false;
		}
		return true;
	}

	if ( v->IsString() == false )
	{
		Error( iter, "'%s' must be a string", name );
		return false;
	}
	if ( v->GetValue().IsEmpty() )
	{
		Error( iter, "'%s' must be a non-empty string", name );
		return false;
	}

	var = v;
	return true;
}



bool Function::GetBool( const BFFIterator & iter, bool & var, const char * name, bool defaultValue, bool required ) const
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	const BFFVariable * v = BFFStackFrame::GetVar( name );
	if ( v == nullptr )
	{
		if ( required )
		{
			Error( iter, "Unable to find '%s' bool", name );
			return false;
		}
		var = defaultValue;
		return true;
	}

	if ( v->IsBool() == false )
	{
		Error( iter, "'%s' must be a bool", name );
		return false;
	}

	var = v->GetBool();
	return true;
}



bool Function::GetNodeList( const BFFIterator & iter, const char * name, Array< Node * > & nodes, bool required ) const
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	const BFFVariable * var = BFFStackFrame::GetVar( name );
	if ( !var )
	{
		
		if ( required )
		{
			Error( iter, "Unable to find '%s' variable", name );
			return false; 
		}
		return true; 
	}

	if ( var->IsArray() )
	{
		
		const Array< AString > & nodeNames = var->GetArray();
		nodes.SetCapacity( nodes.GetSize() + nodeNames.GetSize() );
		for ( Array< AString >::Iter it = nodeNames.Begin();
				it != nodeNames.End();
				it++ )
		{
			if ( !GetNodeListRecurse( iter, name, nodes, *it ) )
			{
				
				return false;
			}
		}
	}
	else if ( var->IsString() )
	{
		if ( !GetNodeListRecurse( iter, name, nodes, var->GetValue() ) )
		{
			
			return false;
		}
	}
	else
	{
		
		Error( iter, "'%s' is a <%s> must be a <string> or <array>", name, var->GetType() );
		return false;
	}

	return true;
}



bool Function::GetNodeListRecurse( const BFFIterator & iter, const char * name, Array< Node * > & nodes, const AString & nodeName ) const
{
	NodeGraph & ng = FBuild::Get().GetDependencyGraph();

	
	Node * n = ng.FindNode( nodeName );
	if ( n == nullptr )
	{
		
		n = ng.CreateFileNode( nodeName );
		nodes.Append( n );
		return true;
	}

	
	if ( n->IsAFile() )
	{
		
		nodes.Append( n );
		return true;
	}

	
	if ( n->GetType() == Node::GROUP_NODE )
	{
		GroupNode * gn = n->CastTo< GroupNode >();
		const Array< Node * > & gNodes = gn->GetStaticDependencies();
		for ( auto it = gNodes.Begin(); it != gNodes.End(); ++it )
		{
			
			const AString & subName = ( *it )->GetName();

			if ( !GetNodeListRecurse( iter, name, nodes, subName ) )
			{
				return false;
			}
		}
		return true;
	}

	
	Error( iter, "Value '%s' in '%s' is of unsupported type: %s", name, n->GetName().Get(), n->GetTypeName() );
	return false;
}



bool Function::ProcessAlias( const BFFIterator & iter, Node * nodeToAlias ) const
{
	if ( m_AliasForFunction.IsEmpty() )
	{
		return true; 
	}

	
	NodeGraph & ng = FBuild::Get().GetDependencyGraph();
	if ( ng.FindNode( m_AliasForFunction ) )
	{
		Error( iter, "Alias '%s' already defined", m_AliasForFunction.Get() );
		return false;
	}

	
	Array< Node * > targets( 1, false );
	targets.Append( nodeToAlias );
	do { if ( ng.CreateGroupNode( m_AliasForFunction, targets ) ) {} __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	m_AliasForFunction.Clear();

	return true;
}


#line 4 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionCSAssembly.cpp"





#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Flog.h"



#pragma once



#line 1 "c:\\p4\\Code\\Core/Strings/AStackString.h"


#pragma once









template <int RESERVED = 256 >
class AStackString : public AString
{
public:
	explicit AStackString();
	explicit AStackString( const AString & string );
	explicit AStackString( const AStackString & string );
	explicit AStackString( const char * string );
	explicit AStackString( const char * start, const char * end );
	inline ~AStackString() {}

	AStackString< RESERVED > & operator = ( const char * string ) { Assign( string ); return *this; }
	AStackString< RESERVED > & operator = ( const AString & string ) { Assign( string ); return *this; }

private:
	char m_Storage[ RESERVED + 1 ];
};



template < int RESERVED >
AStackString< RESERVED >::AStackString()
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	m_Contents = m_Storage;
	SetReserved( RESERVED, false );
	m_Storage[ 0 ] = '\0';
}



template < int RESERVED >
AStackString< RESERVED >::AStackString( const AString & string )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	m_Contents = m_Storage;
	SetReserved( RESERVED, false );
	Assign( string );
}



template < int RESERVED >
AStackString< RESERVED >::AStackString( const AStackString & string )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	m_Contents = m_Storage;
	SetReserved( RESERVED, false );
	Assign( string );
}



template < int RESERVED >
AStackString< RESERVED >::AStackString( const char * string )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	m_Contents = m_Storage;
	SetReserved( RESERVED, false );
	Assign( string );
}



template < int RESERVED >
AStackString< RESERVED >::AStackString( const char * start, const char * end )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	m_Contents = m_Storage;
	SetReserved( RESERVED, false );
	Assign( start, end );
}


#line 88 "c:\\p4\\Code\\Core/Strings/AStackString.h"
#line 9 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Flog.h"
#line 1 "c:\\p4\\Code\\Core/Process/Mutex.h"


#pragma once









class Mutex
{
public:
	Mutex::Mutex();
	Mutex::~Mutex();

	void Lock();
	void Unlock();

private:
	
	
		unsigned char m_CriticalSection[ 8 + 4 + 4 + 8 + 8 + 8 ]; 
	

#line 29 "c:\\p4\\Code\\Core/Process/Mutex.h"
};



class MutexHolder
{
public:
	MutexHolder( Mutex & mutex ) : m_Mutex( mutex )	
	{ 
		mutex.Lock();
	}
	~MutexHolder()
	{ 
		m_Mutex.Unlock();
	}
private:
	void operator = ( MutexHolder & ) {} 

	Mutex & m_Mutex;
};


#line 52 "c:\\p4\\Code\\Core/Process/Mutex.h"
#line 10 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Flog.h"
















































class FLog
{
public:	
	inline static bool ShowInfo() { return s_ShowInfo; }
	inline static bool ShowErrors() { return s_ShowErrors; }

	static void Info( const char * formatString, ... );
	static void Build( const char * formatString, ... );
	static void Warning( const char * formatString, ... );
	static void Error( const char * formatString, ... );

	
	static void ErrorDirect( const char * message );

	static void StartBuild();
	static void StopBuild();

	static void OutputProgress( float time, float percentage );

private:
	friend class FBuild;
	static inline void SetShowInfo( bool showInfo ) { s_ShowInfo = showInfo; }
	static inline void SetShowErrors( bool showErrors ) { s_ShowErrors = showErrors; }
	static inline void SetShowProgress( bool showProgress ) { s_ShowProgress = showProgress; }

	enum { MAX_MESSAGE_LENGTH = 8192 };

	static void Output( const char * type, const char * message );

	static bool TracingOutputCallback( const char * message );

	static bool s_ShowInfo;
	static bool s_ShowErrors;
	static bool s_ShowProgress;

	static Mutex s_ProgressMutex;
	static AStackString< 64 > m_ProgressText;
};


#line 99 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Flog.h"
#line 7 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionCSAssembly.cpp"





#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/DirectoryListNode.h"


#pragma once












class DirectoryListNode : public Node
{
public:
	explicit DirectoryListNode( const AString & name,
								const AString & path,
								const AString & wildcard,
								bool recursive = false,
								const AString & excludePath = AString::GetEmpty() );
	virtual ~DirectoryListNode();

	const Array< AString > & GetFiles() const { return m_Files; }

	static inline Node::Type GetType() { return Node::DIRECTORY_LIST_NODE; }

	virtual bool IsAFile() const { return false; }

	static void FormatName( const AString & path,
							const AString & pattern,
							bool recursive,
							const AString & excludePath,
							AString & result );

	static Node * Load( IOStream & stream, bool remote );
	virtual bool Save( IOStream & stream ) const;

private:
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );

	AString m_Path;
	AString m_WildCard;
	AString m_ExcludePath;
	bool m_Recursive;

	Array< AString > m_Files;
};


#line 55 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/DirectoryListNode.h"
#line 13 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionCSAssembly.cpp"
#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/CSNode.h"


#pragma once













class CSNode : public FileNode
{
public:
	explicit CSNode( const AString & compilerOutput,
					 const Array< Node * > & inputNodes,
					 const AString & compiler,
					 const AString & compilerArgs,
					 const Array< Node * > & extraRefs );
	virtual ~CSNode();

	static inline Node::Type GetType() { return Node::CS_NODE; }

	virtual const Array< Node * > & GetStaticDependencies() const;
	virtual const Array< Node * > & GetDynamicDependencies() const;

	virtual bool Save( IOStream & stream ) const;
	static Node * Load( IOStream & stream, bool remote );
private:
	virtual bool DoDynamicDependencies( bool forceClean );
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );

	void EmitCompilationMessage( const AString & fullArgs ) const;
	
	Array< Node * > m_StaticDependencies;
	Array< Node * > m_DynamicDependencies;

	AString m_CompilerPath;
	AString m_CompilerArgs;

	Array< Node * > m_ExtraRefs;
};


#line 52 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/CSNode.h"
#line 14 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionCSAssembly.cpp"



FunctionCSAssembly::FunctionCSAssembly()
: Function( "CSAssembly" )
{
}



 bool FunctionCSAssembly::AcceptsHeader() const
{
	return true;
}



 bool FunctionCSAssembly::Commit( const BFFIterator & funcStartIter ) const
{
	
	const BFFVariable * compiler;
	const BFFVariable * compilerOptions;
	const BFFVariable * compilerOutput;
	if ( !GetString( funcStartIter, compiler, ".Compiler", true ) ||
		 !GetString( funcStartIter, compilerOptions, ".CompilerOptions", true ) ||
		 !GetString( funcStartIter, compilerOutput, ".CompilerOutput", true ) )
	{
		return false;
	}

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();

	Array< Node * > staticDeps( 32, true );

	
	const BFFVariable * inputPath = BFFStackFrame::GetVar( ".CompilerInputPath" );
	if ( inputPath )
	{
		
		AStackString<> defaultWildCard( "*.cpp" );
		const BFFVariable * patternVar = BFFStackFrame::GetVar( ".CompilerInputPattern" );
		const AString & pattern = patternVar ? patternVar->GetValue() : defaultWildCard;

		
		const BFFVariable * recurseVar = BFFStackFrame::GetVar( ".CompilerInputPathRecurse" );
		bool recurse = ( ( recurseVar == nullptr ) || ( recurseVar->GetValue() == "true" ) );

		
		const BFFVariable * excludePathVar = BFFStackFrame::GetVar( ".CompilerInputExcludePath" );
		const AString & excludePath = excludePathVar ? excludePathVar->GetValue() : AString::GetEmpty();

		
		AStackString< 512 > fullPath;
		NodeGraph::CleanPath( inputPath->GetValue(), fullPath );
		if ( fullPath.EndsWith( '\\' ) == false )
		{
			fullPath += '\\';
		}

		AStackString< 512 > fullExcludePath;
		if ( excludePath.IsEmpty() == false )
		{
			NodeGraph::CleanPath( excludePath, fullExcludePath );
			if ( fullExcludePath.EndsWith( '\\' ) == false )
			{
				fullExcludePath += '\\';
			}
		}

		
		AStackString<> name;
		DirectoryListNode::FormatName( fullPath, pattern, recurse, fullExcludePath, name );
		Node * staticDep = ng.FindNode( name );
		if ( staticDep == nullptr )
		{
			staticDep = ng.CreateDirectoryListNode( name,
													fullPath,
													pattern,
													recurse,
													fullExcludePath );
		}
		else if ( staticDep->GetType() != Node::DIRECTORY_LIST_NODE )
		{
			Error( funcStartIter, "Node '%s' is not a directory listing (type: %s)", staticDep->GetName().Get(), staticDep->GetTypeName() );
			return false;
		}

		staticDeps.Append( staticDep );
	}

	
	if ( !GetNodeList( funcStartIter, ".CompilerInputFiles", staticDeps, false ) )
	{
		
		return false;
	}

	if ( staticDeps.IsEmpty() )
	{
		Error( funcStartIter, "Doesn't build anything - define '.CompilerInputFiles' or '.CompilerInputPath'" );
		return false;
	}

	
	Array< Node * > extraRefs( 0, true );
	if ( !GetNodeList( funcStartIter, ".CompilerReferences", extraRefs, false ) )
	{
		
		return false;
	}

	
	if ( ng.FindNode( compilerOutput->GetValue() ) )
	{
		Error( funcStartIter, "Library already defined" );
		return false;
	}
	Node * csNode = ng.CreateCSNode( compilerOutput->GetValue(),
									 staticDeps,
									 compiler->GetValue(),
									 compilerOptions->GetValue(),
									 extraRefs );

	
	return ProcessAlias( funcStartIter, csNode );
}


#line 5 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionDLL.cpp"











#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/LinkerNode.h"


#pragma once













class LinkerNode : public FileNode
{
public:
	explicit LinkerNode( const AString & linkerOutputName,
						 const Array< Node * > & inputLibraries,
						 const AString & linker,
						 const AString & linkerArgs );
	virtual ~LinkerNode();

	static inline Node::Type GetType() { return Node::LINKER_NODE; }

	static Node * Load( IOStream & stream, bool remote );
	virtual bool Save( IOStream & stream ) const;
private:
	virtual const Array< Node * > & GetStaticDependencies() const;
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );

	Array< Node * > m_StaticDependencies;

	AString m_Linker;
	AString m_LinkerArgs;
};


#line 43 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/LinkerNode.h"
#line 13 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionDLL.cpp"




FunctionDLL::FunctionDLL()
: FunctionExecutable()
{
	
	m_Name =  "DLL";
}


#line 6 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionExecutable.cpp"
















FunctionExecutable::FunctionExecutable()
: Function( "Executable" )
{
}



 bool FunctionExecutable::AcceptsHeader() const
{
	return true;
}



 bool FunctionExecutable::Commit( const BFFIterator & funcStartIter ) const
{
	
	const BFFVariable * linker = BFFStackFrame::GetVar( ".Linker" );
	if ( linker == nullptr )
	{
		Error( funcStartIter, "Unable to find '.Linker' variable" );
		return false;
	}
	const BFFVariable * linkerOutput = BFFStackFrame::GetVar( ".LinkerOutput" );
	if ( linkerOutput == nullptr )
	{
		Error( funcStartIter, "Unable to find '.LinkerOutput' variable" );
		return false;
	}
	const BFFVariable * linkerOptions = BFFStackFrame::GetVar( ".LinkerOptions" );
	if ( linkerOptions == nullptr )
	{
		Error( funcStartIter, "Unable to find '.LinkerOptions' variable" );
		return false;
	}
	const BFFVariable * libraries = BFFStackFrame::GetVar( ".Libraries" );
	if ( libraries == nullptr )
	{
		Error( funcStartIter, "Unable to find '.Libraries' variable" );
		return false;
	}

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();

	
	Array< Node * > libraryNodes( 64, true );

	
	if ( libraries->IsArray() )
	{
		
		const Array< AString > & libraryNames = libraries->GetArray();
		for ( Array< AString >::ConstIter it = libraryNames.Begin();
			  it != libraryNames.End();
			  it++ )
		{
			if ( DependOnNode( funcStartIter, *it, libraryNodes ) == false )
			{
				return false; 
			}
		}
	}
	else if ( libraries->IsString() )
	{
		
		if ( DependOnNode( funcStartIter, libraries->GetValue(), libraryNodes ) == false )
		{
				return false; 
		}
	}
	else
	{
		Error( funcStartIter, "'.Libraries' must be a <string> or <array>" );
		return false;
	}

	
	Node * n = ng.CreateLinkerNode( linkerOutput->GetValue(),
							libraryNodes,
							linker->GetValue(),
							linkerOptions->GetValue() );

	return ProcessAlias( funcStartIter, n );
}



bool FunctionExecutable::DependOnNode( const BFFIterator & iter, const AString & nodeName, Array< Node * > & nodes ) const
{
	NodeGraph & ng = FBuild::Get().GetDependencyGraph();
	Node * node = ng.FindNode( nodeName );

	
	if ( node != nullptr )
	{
		
		return DependOnNode( iter, node, nodes );
	}

	
	
	node = ng.CreateFileNode( nodeName );
	nodes.Append( node );
	return true;
}



bool FunctionExecutable::DependOnNode( const BFFIterator & iter, Node * node, Array< Node * > & nodes ) const
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	if ( node->GetType() == Node::LIBRARY_NODE )
	{
		
		nodes.Append( node );
		return true;
	}

	
	if ( node->GetType() == Node::FILE_NODE )
	{
		
		nodes.Append( node );
		return true;
	}

	
	if ( node->GetType() == Node::GROUP_NODE )
	{
		
		GroupNode * gn = node->CastTo< GroupNode >();
		const Array< Node * > & groupNodeList = gn->GetStaticDependencies();
		const Array< Node * >::Iter end = groupNodeList.End();
		for ( Array< Node * >::Iter it = groupNodeList.Begin();
			  it != end; 
			  ++it )
		{
			if ( DependOnNode( iter, *it, nodes ) == false )
			{
				return false; 
			}
		}
		return true; 
	}

	
	Error( iter, "Cannot depend on '%s' (type: %s)", node->GetName().Get(), node->GetTypeName() );
	return false;
}


#line 7 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionForEach.cpp"














FunctionForEach::FunctionForEach()
: Function( "ForEach" )
{
}



 bool FunctionForEach::AcceptsHeader() const
{
	return true;
}



 bool FunctionForEach::NeedsHeader() const
{
	return true;
}


 bool FunctionForEach::ParseFunction(
					const BFFIterator & functionNameStart,
					const BFFIterator & functionBodyStartToken, 
					const BFFIterator & functionBodyStopToken,
					const BFFIterator * functionHeaderStartToken,
					const BFFIterator * functionHeaderStopToken ) const
{
	
	Array< AString >				localNames( 4, true );
	Array< const BFFVariable * >	arrayVars( 4, true );

	size_t loopLen = 0;

	
	BFFIterator pos( *functionHeaderStartToken );
	pos++; 
	while ( pos < *functionHeaderStopToken )
	{
		pos.SkipWhiteSpace();
		if ( *pos != BFFParser::BFF_DECLARE_VAR_USER )
		{
			pos.EmitParseError( "Expected user variable delcaration" );
			return false;
		}
		BFFIterator varNameStart( pos );
		pos++;
		if ( pos.IsAtValidVariableNameCharacter() == false )
		{
			pos.EmitParseError( "Malformed user variable delcaration" );
			return false;
		}
		pos.SkipVariableName();
		BFFIterator varNameEnd( pos );

		
		size_t varNameLen = varNameStart.GetDistTo( varNameEnd );
		if ( varNameLen > BFFParser::MAX_VARIABLE_NAME_LENGTH )
		{
			varNameStart.EmitParseError( "Variable name is too long (%u chars), max length is %u chars", varNameLen, BFFParser::MAX_VARIABLE_NAME_LENGTH );
			return false;
		}
		AStackString< BFFParser::MAX_VARIABLE_NAME_LENGTH > localName( varNameStart.GetCurrent(), varNameEnd.GetCurrent() );
		localNames.Append( localName );

		pos.SkipWhiteSpace();

		
		bool foundIn = false;
		if ( *pos == 'i' )
		{
			pos++;
			if ( *pos == 'n' )
			{
				foundIn = true;
			}
		}
		if ( foundIn == false )
		{
			pos.EmitParseError( "Failed to find 'in' token after variable name in ForEach" );
			return false;
		}
		pos++;
		pos.SkipWhiteSpace();

		BFFIterator arrayVarNameBegin( pos );
		if ( *pos != BFFParser::BFF_DECLARE_VAR_USER )
		{
			pos.EmitParseError( "Expected user variable reference following 'in'" );
			return false;
		}
		pos++;
		if ( pos.IsAtValidVariableNameCharacter() == false )
		{
			pos.EmitParseError( "Malformed user variable delcaration" );
			return false;
		}
		pos.SkipVariableName();
		BFFIterator arrayVarNameEnd( pos );

		
		size_t arrayVarNameLen = arrayVarNameBegin.GetDistTo( arrayVarNameEnd );
		if ( arrayVarNameLen > BFFParser::MAX_VARIABLE_NAME_LENGTH )
		{
			arrayVarNameBegin.EmitParseError( "Variable name is too long (%u chars), max length is %u chars", arrayVarNameLen, BFFParser::MAX_VARIABLE_NAME_LENGTH );
			return false;
		}
		AStackString< BFFParser::MAX_VARIABLE_NAME_LENGTH > arrayVarName( arrayVarNameBegin.GetCurrent(), arrayVarNameEnd.GetCurrent() );

		const BFFVariable * var = BFFStackFrame::GetVar( arrayVarName );
		if ( var == nullptr )
		{
			arrayVarNameBegin.EmitParseError( "Unknown user variable '%s'", arrayVarName.Get() );
			return false;
		}
		if ( var->IsArray() == false )
		{
			arrayVarNameBegin.EmitParseError( "User variable '%s' is not an array", arrayVarName.Get() );
			return false;
		}

		
		if ( loopLen == 0 )
		{
			
			loopLen = var->GetArray().GetSize();
			if ( loopLen == 0 )
			{
				
				arrayVarNameBegin.EmitParseError( "User variable '%s' is empty", arrayVarName.Get() );
				return false;
			}
		}
		else
		{
			
			if ( loopLen != var->GetArray().GetSize() )
			{
				arrayVarNameBegin.EmitParseError( "User variable '%s' length doesn't match other variables in loop (%u)", arrayVarName.Get(), loopLen );
				return false;
			}
		}
		arrayVars.Append( var );

		
		pos.SkipWhiteSpace();
		if ( *pos == ',' )
		{
			pos++;
		}
	}

	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	for ( uint32_t i=0; i<loopLen; ++i )
	{
		
		BFFStackFrame loopStackFrame;
		for ( uint32_t j=0; j<localNames.GetSize(); ++j )
		{
			loopStackFrame.SetVar( localNames[ j ], arrayVars[ j ]->GetArray()[ i ] );
		}

		
		BFFParser subParser;
		BFFIterator subIter( functionBodyStartToken );
		subIter++; 
		subIter.SetMax( functionBodyStopToken.GetCurrent() ); 
		if ( subParser.Parse( subIter ) == false )
		{
			return false;
		}

		
		if ( Commit( functionNameStart ) == false )
		{
			return false;
		}
	}

	return true;
}


#line 8 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionGroup.cpp"












FunctionGroup::FunctionGroup()
: Function( "Group" )
{
}

 bool FunctionGroup::Commit( const BFFIterator & funcStartIter ) const
{
	

	
	const BFFVariable * name = BFFStackFrame::GetVar( ".Name" );
	if ( name == nullptr )
	{
		Error( funcStartIter, "Unable to find '.Name' variable" );
		return false;
	}

	
	const BFFVariable * targets = BFFStackFrame::GetVar( ".Targets" );
	if ( targets == nullptr )
	{
		do { FLog::Error( "Group{} unable to find '.Targets' variable"   ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		return false;
	}

	
	if ( targets->IsArray() == false )
	{
		do { FLog::Error( "Group{} variable '.Targets' is not an array"   ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		return false;
	}

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();

	
	Array< Node * > targetNodes( targets->GetArray().GetSize(), false );
	for ( Array< AString >::Iter iter = targets->GetArray().Begin();
		  iter != targets->GetArray().End();
		  iter++ )
	{
		Node * n = ng.FindNode( *iter );
		if ( n )
		{
			targetNodes.Append( n );
		}
		else
		{
			Error( funcStartIter, "Unknown node '%s' in group '%s'", iter->Get(), name->GetValue().Get() );
			return false;
		}
	}

	if ( ng.FindNode( name->GetValue() ) != nullptr )
	{
		Error( funcStartIter, "Group '%s' already defined", name->GetValue().Get() );
		return false;
	}

	ng.CreateGroupNode( name->GetValue(), targetNodes );

	return true;
}

#line 9 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionLibrary.cpp"












#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/LibraryNode.h"


#pragma once










class ObjectNode;



class LibraryNode : public FileNode
{
public:
	explicit LibraryNode( const AString & libraryName,
						  Array< Node * > & inputNodes,
						  FileNode * compiler,
						  const AString & compilerArgs,
						  const AString & compilerOutputPath,
						  const AString & linker,
						  const AString & linkerArgs,
						  ObjectNode * precompiledHeader );
	virtual ~LibraryNode();

	static inline Node::Type GetType() { return Node::LIBRARY_NODE; }

	static Node * Load( IOStream & stream, bool remote );
	virtual bool Save( IOStream & stream ) const;
private:
	virtual const Array< Node * > & GetStaticDependencies() const;
	virtual const Array< Node * > & GetDynamicDependencies() const;
	virtual bool DoDynamicDependencies( bool forceClean );
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );

	
	bool CreateDynamicObjectNode( Node * inputFile );

	Array< Node * > m_StaticDependencies;
	Array< Node * > m_DynamicDependencies;
	FileNode * m_Compiler;
	AString m_CompilerArgs;
	AString m_CompilerOutputPath;
	AString m_LinkerPath;
	AString m_LinkerArgs;
	ObjectNode * m_PrecompiledHeader;
};


#line 57 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/LibraryNode.h"
#line 14 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionLibrary.cpp"
#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/ObjectNode.h"


#pragma once







#line 1 "c:\\p4\\Code\\Core/Containers/AutoPtr.h"


#pragma once





class DefaultDeletor
{
public:
	static inline void Delete( void * ptr ) { delete ptr; }
};



template < class T, class DELETOR = DefaultDeletor >
class AutoPtr
{
public:
	explicit inline AutoPtr() : m_Pointer( nullptr ) {}
	explicit inline AutoPtr( T * ptr ) : m_Pointer( ptr ) {}
	inline		   ~AutoPtr() { DELETOR::Delete( m_Pointer ); }

	
	inline		 T * Get()		 { return m_Pointer; }
	inline const T * Get() const { return m_Pointer; }

	
	inline void operator = ( T * newPtr ) { DELETOR::Delete( m_Pointer ); m_Pointer = newPtr; }

	
	inline void Destroy() { DELETOR::Delete( m_Pointer ); m_Pointer = nullptr; }

	
	inline T * Release() { T * ptr = m_Pointer; m_Pointer = nullptr; return ptr; }
private:
	T * m_Pointer;
};


#line 43 "c:\\p4\\Code\\Core/Containers/AutoPtr.h"
#line 12 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/ObjectNode.h"






class ObjectNode : public FileNode
{
public:
	explicit ObjectNode( const AString & objectName,
						 Node * inputNode,
						 Node * compilerNode,
						 const AString & compilerArgs,
						 Node * precompiledHeader,
						 uint32_t flags );
	virtual ~ObjectNode();

	static inline Node::Type GetType() { return Node::OBJECT_NODE; }

	virtual const Array< Node * > & GetStaticDependencies() const;
	virtual const Array< Node * > & GetDynamicDependencies() const;

	enum Flags
	{
		FLAG_CAN_BE_CACHED		=	0x01,
		FLAG_CAN_BE_DISTRIBUTED	=	0x02,
		FLAG_USING_PCH			=	0x04,
		FLAG_GCC				=	0x10,
		FLAG_MSVC				=	0x20,
	};

	virtual bool Save( IOStream & stream ) const;
	static Node * Load( IOStream & stream, bool remote );
private:
	virtual bool DoDynamicDependencies( bool forceClean );
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );
	virtual BuildResult DoBuild2( Job * job );

	BuildResult DoBuildMSCL_NoCache();
	BuildResult DoBuildWithPreProcessor( Job * job );
	BuildResult DoBuildWithPreProcessor2( Job * job );
	BuildResult DoBuildOther();

	bool ProcessIncludesMSCL( const char * output, uint32_t outputSize, bool preprocessed );
	bool ProcessIncludesGCC( const char * output, uint32_t outputSize );
	bool ProcessIncludesWithPreProcessor( Job * job );

	void GetCacheName( const void * memOut, size_t memOutSize,
					   AString & cacheName ) const;
	bool RetrieveFromCache( const AString & cacheFile );
	void WriteToCache( const AString & cacheFile );

	static void DumpOutput( const char * data, uint32_t dataSize );

	void EmitCompilationMessage( const AString & fullArgs ) const;

	void BuildFullArgs( AString & fullArgs, bool preProcess ) const;
	bool BuildPreprocessedOutput( const AString & fullArgs, Job * job ) const;
	bool WriteTmpFile( Job * job, AString & tmpFileName ) const;
	bool BuildFinalOutput( Job * job, const AString & fullArgs ) const;

	inline bool GetFlag( uint32_t flag ) const { return ( ( m_Flags & flag ) != 0 ); }

	Array< Node * > m_StaticDependencies;
	Array< Node * > m_DynamicDependencies;

	Array< AString > m_Includes;
	bool m_HasIncludes;
	uint32_t m_Flags;
	AString m_CompilerArgs;
};


#line 87 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/ObjectNode.h"
#line 15 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionLibrary.cpp"



FunctionLibrary::FunctionLibrary()
: Function( "Library" )
{
}



 bool FunctionLibrary::AcceptsHeader() const
{
	return true;
}



 bool FunctionLibrary::Commit( const BFFIterator & funcStartIter ) const
{
	
	const BFFVariable * outputLib;
	const BFFVariable * compiler;
	const BFFVariable * compilerOptions;
	const BFFVariable * compilerOutputPath;
	const BFFVariable * librarian;
	const BFFVariable * librarianOptions;
	if ( !GetString( funcStartIter, outputLib, ".LibrarianOutput", true ) ||
		 !GetString( funcStartIter, compiler, ".Compiler", true ) ||
		 !GetString( funcStartIter, compilerOptions, ".CompilerOptions", true ) ||
		 !GetString( funcStartIter, compilerOutputPath, ".CompilerOutputPath", true ) ||
		 !GetString( funcStartIter, librarian, ".Librarian", true ) ||
		 !GetString( funcStartIter, librarianOptions, ".LibrarianOptions", true ) )
	{
		return false;
	}

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();

	
	Node * cn = ng.FindNode( compiler->GetValue() );
	FileNode * compilerNode = nullptr;
	if ( cn != nullptr )
	{
		if ( cn->IsAFile() == false )
		{
			Error( funcStartIter, "'Compiler' must be a file." );
			return false;
		}
		compilerNode = cn->CastTo< FileNode >();
	}
	else
	{
		compilerNode = ng.CreateFileNode( compiler->GetValue() );
	}

	
	ObjectNode * precompiledHeaderNode = nullptr;
	const BFFVariable * pchInputFile = nullptr;
	const BFFVariable * pchOutputFile = nullptr;
	const BFFVariable * pchOptions = nullptr;
	if ( !GetString( funcStartIter, pchInputFile, ".PCHInputFile" ) ||
		 !GetString( funcStartIter, pchOutputFile, ".PCHOutputFile" ) ||
		 !GetString( funcStartIter, pchOptions, ".PCHOptions" ) )
	{
		return false;
	}
	if ( pchInputFile ) 
	{
		if ( !pchOutputFile || !pchOptions )
		{
			Error( funcStartIter, "Precompiled Header support requires '.PCHInputFile', '.PCHOutputFile' and '.PCHOptions' variables" );
			return false;
		}
		Node * pchInputNode = ng.FindNode( pchInputFile->GetValue() );
		if ( pchInputNode )
		{
			
			if ( pchInputNode->IsAFile() == false )
			{
				Error( funcStartIter, "'.PCHInputFile' '%s' is not a file (type: %s)", pchInputNode->GetName().Get(), pchInputNode->GetTypeName() );
				return false;
			}
		}
		else
		{
			
			pchInputNode = ng.CreateFileNode( pchInputFile->GetValue() );
		}

		if ( ng.FindNode( pchOutputFile->GetValue() ) )
		{
			Error( funcStartIter, "PrecompiledHeader '%s' has already been defined", pchOutputFile->GetName().Get() );
			return false;
		}

		uint32_t flags( 0 );
		if ( compilerNode->GetName().EndsWith( "\\cl.exe" ) )
		{
			flags |= ObjectNode::FLAG_MSVC;
		}
		else if ( compilerNode->GetName().EndsWith( "gcc" ) )
		{
			flags |= ObjectNode::FLAG_GCC;
		}

		precompiledHeaderNode = ng.CreateObjectNode( pchOutputFile->GetValue(),
													 pchInputNode,
													 compilerNode,
													 pchOptions->GetValue(),
													 nullptr,
													 flags );
	}

	Array< Node * > staticDeps( 32, true );

	
	const BFFVariable * inputPath = BFFStackFrame::GetVar( ".CompilerInputPath" );
	if ( inputPath )
	{
		
		AStackString<> defaultWildCard( "*.cpp" );
		const BFFVariable * patternVar = BFFStackFrame::GetVar( ".CompilerInputPattern" );
		const AString & pattern = patternVar ? patternVar->GetValue() : defaultWildCard;

		
		const BFFVariable * recurseVar = BFFStackFrame::GetVar( ".CompilerInputPathRecurse" );
		bool recurse = ( ( recurseVar == nullptr ) || ( recurseVar->GetValue() == "true" ) );

		
		const BFFVariable * excludePathVar = BFFStackFrame::GetVar( ".CompilerInputExcludePath" );
		const AString & excludePath = excludePathVar ? excludePathVar->GetValue() : AString::GetEmpty();

		
		AStackString< 512 > fullPath;
		NodeGraph::CleanPath( inputPath->GetValue(), fullPath );
		if ( fullPath.EndsWith( '\\' ) == false )
		{
			fullPath += '\\';
		}

		AStackString< 512 > fullExcludePath;
		if ( excludePath.IsEmpty() == false )
		{
			NodeGraph::CleanPath( excludePath, fullExcludePath );
			if ( fullExcludePath.EndsWith( '\\' ) == false )
			{
				fullExcludePath += '\\';
			}
		}

		
		AStackString<> name;
		DirectoryListNode::FormatName( fullPath, pattern, recurse, fullExcludePath, name );
		Node * staticDep = ng.FindNode( name );
		if ( staticDep == nullptr )
		{
			staticDep = ng.CreateDirectoryListNode( name,
													fullPath,
													pattern,
													recurse,
													fullExcludePath );
		}
		else if ( staticDep->GetType() != Node::DIRECTORY_LIST_NODE )
		{
			Error( funcStartIter, "Node '%s' is not a directory listing (type: %s)", staticDep->GetName().Get(), staticDep->GetTypeName() );
			return false;
		}

		staticDeps.Append( staticDep );
	}

	
	const BFFVariable * inputFiles = BFFStackFrame::GetVar( ".CompilerInputFiles" );
	if ( inputFiles )
	{
		if ( inputFiles->IsString() )
		{
			
			Node * staticDep = ng.FindNode( inputFiles->GetValue() );
			if ( staticDep == nullptr )
			{
				staticDep = ng.CreateFileNode( inputFiles->GetValue() );
			}
			else if ( staticDep->IsAFile() == false )
			{
				Error( funcStartIter, "'.CompilerInputFiles' '%s' is not a FileNode (type: %s)", staticDep->GetName().Get(), staticDep->GetTypeName() );
				return false;
			}
			staticDeps.Append( staticDep );
		}
		else if ( inputFiles->IsArray() )
		{
			const Array< AString > & files = inputFiles->GetArray();
			for ( Array< AString >::Iter it = files.Begin();
				  it != files.End();
				  it++ )
			{
				Node * staticDep = ng.FindNode( *it );
				if ( staticDep == nullptr )
				{
					staticDep = ng.CreateFileNode( *it );
				}
				else if ( staticDep->IsAFile() == false )
				{
					Error( funcStartIter, "'.CompilerInputFiles' '%s' is not a FileNode (type: %s)", staticDep->GetName().Get(), staticDep->GetTypeName() );
					return false;
				}
				staticDeps.Append( staticDep );
			}
		}
	}

	
	const BFFVariable * inputUnity = nullptr;
	if ( !GetString( funcStartIter, inputUnity, ".CompilerInputUnity" ) )
	{
		return false;
	}
	if ( inputUnity )
	{
		Node * n = ng.FindNode( inputUnity->GetValue() );
		if ( n == nullptr )
		{
			Error( funcStartIter, "'.CompilerInputUnity' '%s' not found", inputUnity->GetValue() );
			return false;
		}
		if ( n->GetType() != Node::UNITY_NODE )
		{
			Error( funcStartIter, "'.CompilerInputUnity' '%s' is not a Unity node", inputUnity->GetValue() );
			return false;
		}
		staticDeps.Append( n );
	}

	if ( staticDeps.IsEmpty() )
	{
		Error( funcStartIter, "Doesn't build anything - define '.CompilerInputFiles', '.CompilerInputPath' or '.CompilerInputUnity'" );
		return false;
	}

	
	if ( ng.FindNode( outputLib->GetValue() ) )
	{
		Error( funcStartIter, "Library already defined" );
		return false;
	}
	Node * libNode = ng.CreateLibraryNode( outputLib->GetValue(),
						  staticDeps,
						  compilerNode,
						  compilerOptions->GetValue(),
						  compilerOutputPath->GetValue(),
						  librarian->GetValue(),
						  librarianOptions->GetValue(),
						  precompiledHeaderNode );

	return ProcessAlias( funcStartIter, libNode );
}


#line 10 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionSettings.cpp"
















FunctionSettings::FunctionSettings()
: Function( "Settings" )
{
}



 bool FunctionSettings::IsUnique() const
{
	return true;
}



 bool FunctionSettings::Commit( const BFFIterator & funcStartIter ) const
{
	(void)funcStartIter;

	
	const BFFVariable * cachePath = BFFStackFrame::GetVar( ".CachePath" );
	if ( cachePath )
	{
		do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		FBuild::Get().SetCachePath( cachePath->GetValue() );
		do { if ( FLog::ShowInfo() ) { FLog::Info( "CachePath: %s", cachePath->GetValue() ); } __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	}

	
	const BFFVariable * workers = BFFStackFrame::GetVar( ".Workers" );
	if ( workers )
	{
		
		if ( workers->IsArray() )
		{
			FBuild::Get().SetWorkerList( workers->GetArray() );
		}
		else
		{
			Array< AString > workerList( 1, false );
			workerList.Append( workers->GetValue() );
			FBuild::Get().SetWorkerList( workerList );
		}
	}

	
	const BFFVariable * env = BFFStackFrame::GetVar( ".Environment" );
	if ( env )
	{
		
		if ( env->IsArray() )
		{
			ProcessEnvironment( env->GetArray() );
		}
		else
		{
			Array< AString > envList( 1, false );
			envList.Append( env->GetValue() );
			ProcessEnvironment( envList );
		}
	}

	return true;
}



void FunctionSettings::ProcessEnvironment( const Array< AString > & envStrings ) const
{
	
	

	
	uint32_t size = 0;
	for ( uint32_t i=0; i<envStrings.GetSize(); ++i )
	{
		size += envStrings[ i ].GetLength() + 1; 
	}

	
	AutoPtr< char > envString( new char[ size + 1 ] ); 

	
	char * dst = envString.Get();
	for ( uint32_t i=0; i<envStrings.GetSize(); ++i )
	{
		const uint32_t thisStringLen = envStrings[ i ].GetLength();
		AString::Copy( envStrings[ i ].Get(), dst, thisStringLen );
		dst += ( thisStringLen + 1 );
	}

	
	*dst = '\000';

	FBuild::Get().SetEnvironmentString( envString.Get(), size );
}


#line 11 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionTest.cpp"









#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/TestNode.h"


#pragma once





#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\graph\\ExecNode.h"


#pragma once













class ExecNode : public FileNode
{
public:
	explicit ExecNode( const AString & dstFileName,
					    FileNode * sourceFile,
						FileNode * executable,
						const char * arguments,
						const char * workingDir );
	virtual ~ExecNode();

	static inline Node::Type GetType() { return Node::EXEC_NODE; }

	static Node * Load( IOStream & stream, bool remote );
	virtual bool Save( IOStream & stream ) const;
private:
	virtual const Array< Node * > & GetStaticDependencies() const;
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );

	Array< Node * > m_StaticDependencies;
	FileNode * m_SourceFile;
	FileNode * m_Executable;
	AString		m_Arguments;
	AString		m_WorkingDir;
};


#line 45 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\graph\\ExecNode.h"
#line 10 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/TestNode.h"







class TestNode : public FileNode
{
public:
	explicit TestNode( const AString & testOutput,
					   FileNode * testExecutable,
					   const AString & m_Arguments,
					   const AString & m_WorkingDir );
	virtual ~TestNode();

	static inline Node::Type GetType() { return Node::TEST_NODE; }

	virtual bool Save( IOStream & stream ) const;
	static Node * Load( IOStream & stream, bool remote );
private:
	virtual const Array< Node * > & GetStaticDependencies() const;
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );

	Array< Node * > m_StaticDependencies;
	FileNode * m_Executable;
	AString		m_Arguments;
	AString		m_WorkingDir;
};


#line 43 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Graph/TestNode.h"
#line 11 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionTest.cpp"



FunctionTest::FunctionTest()
: Function( "Test" )
{
}



 bool FunctionTest::AcceptsHeader() const
{
	return true;
}



 bool FunctionTest::Commit( const BFFIterator & funcStartIter ) const
{
	
	const BFFVariable * outputV;
	const BFFVariable * executableV;
	const BFFVariable * argsV;
	const BFFVariable * workingDirV;
	if ( !GetString( funcStartIter, outputV,		".TestOutput", true ) ||
		 !GetString( funcStartIter, executableV,	".TestExecutable", true ) ||
		 !GetString( funcStartIter, argsV,			".TestArguments" ) ||
		 !GetString( funcStartIter, workingDirV,	".TestWorkingDir" ) )
	{
		return false;
	}

	
	NodeGraph & ng = FBuild::Get().GetDependencyGraph();
	if ( ng.FindNode( outputV->GetValue() ) != nullptr )
	{
		Error( funcStartIter, "Test output '%s' already defined", outputV->GetValue().Get() );
		return false;
	}

	Node * testExeNode = ng.FindNode( executableV->GetValue() );
	if ( testExeNode == nullptr )
	{
		Error( funcStartIter, "Test executable '%s' not defined", executableV->GetValue().Get() );
		return false;
	}
	if ( testExeNode->IsAFile() == false )
	{
		Error( funcStartIter, "Test executable '%s' is not a file", executableV->GetValue().Get() );
		return false;
	}

	
	const AString & arguments(	argsV ?			argsV->GetValue()		: AString::GetEmpty() );
	const AString & workingDir( workingDirV ?	workingDirV->GetValue() : AString::GetEmpty() );

	
	Node * outputNode = ng.CreateTestNode( outputV->GetValue(), 
										   (FileNode *)testExeNode,
										   arguments,
										   workingDir );
	
	return ProcessAlias( funcStartIter, outputNode );
}


#line 12 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\Functions\\FunctionUnity.cpp"













class UnityNode;



FunctionUnity::FunctionUnity()
: Function( "Unity" )
{
}



 bool FunctionUnity::AcceptsHeader() const
{
	return true;
}



 bool FunctionUnity::NeedsHeader() const
{
	return true;
}



 bool FunctionUnity::Commit( const BFFIterator & funcStartIter ) const
{
	const BFFVariable * inputPathV;
	const BFFVariable * inputPathExcludeV;
	const BFFVariable * inputPatternV;
	bool inputPathRecurse;
	const BFFVariable * outputPathV;
	const BFFVariable * outputPatternV;
	if ( !GetString( funcStartIter, inputPathV,		".UnityInputPath", true ) ||
		 !GetString( funcStartIter, inputPathExcludeV, ".UnityInputExcludePath" ) ||
		 !GetString( funcStartIter, inputPatternV,	".UnityInputPattern" ) ||
		 !GetBool( funcStartIter, inputPathRecurse,".UnityInputPathRecurse", true ) ||
		 !GetString( funcStartIter, outputPathV,	".UnityOutputPath", true ) ||
		 !GetString( funcStartIter, outputPatternV,	".UnityOutputPattern" ) )
	{
		return false;
	}

	
	const BFFVariable * numFilesV = BFFStackFrame::GetVar( ".UnityNumFiles" );
	if ( numFilesV )
	{
		if ( numFilesV->IsInt() == false )
		{
			Error( funcStartIter, "'.UnityNumFiles' must be an integer" );
			return false;
		}
		int numFiles = numFilesV->GetInt();
		if ( ( numFiles < 1 ) || ( numFiles > 999 ) )
		{
			Error( funcStartIter, "'.UnityNumFiles' must be an integer between 1 and 999" );
			return false;
		}
	}

	
	AStackString< 512 > fullPath;
	NodeGraph::CleanPath( inputPathV->GetValue(), fullPath );
	if ( fullPath.EndsWith( '\\' ) == false )
	{
		fullPath += '\\';
	}

	AStackString<> excludePath;
	if ( inputPathExcludeV )
	{
		NodeGraph::CleanPath( inputPathExcludeV->GetValue(), excludePath );
		if ( excludePath.EndsWith( '\\' ) == false )
		{
			excludePath += '\\';
		}
	}

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();

	const AString & inputPattern = inputPatternV ? inputPatternV->GetValue() : (const AString &)AStackString<>( "*.cpp" );
	const AString & outputPattern = outputPatternV ? outputPatternV->GetValue() : (const AString &)AStackString<>( "Unity*.cpp" );

	
	AStackString<> dirNodeName;
	DirectoryListNode::FormatName( fullPath, 
								   inputPattern, 
								   inputPathRecurse, 
								   excludePath,
								   dirNodeName );
	Node * dirNode = ng.FindNode( dirNodeName );
	if ( dirNode == nullptr )
	{
		dirNode = ng.CreateDirectoryListNode( dirNodeName,
											  fullPath,
											  inputPattern,
											  inputPathRecurse,
											  excludePath );
	}
	else if ( dirNode->GetType() != Node::DIRECTORY_LIST_NODE )
	{
		Error( funcStartIter, "Node '%s' is not a directory listing (type: %s)", dirNode->GetName().Get(), dirNode->GetTypeName() );
		return false;
	}

	
	AStackString< 512 > precompiledHeader;
	const BFFVariable * pchV = nullptr;
	if ( !GetString( funcStartIter, pchV, ".UnityPCH" ) )
	{
		return false;
	}
	if ( pchV )
	{
		
		
		
		precompiledHeader = pchV->GetValue();
	}

	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	AStackString< 512 > fullOutputPath;
	NodeGraph::CleanPath( outputPathV->GetValue(), fullOutputPath );

	UnityNode * un = ng.CreateUnityNode( m_AliasForFunction, 
										 dirNode->CastTo< DirectoryListNode >(),
										 fullOutputPath,
										 outputPattern,
										 numFilesV ? numFilesV->GetInt() : 1,
										 precompiledHeader );
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); (void)un;

	return true;
}


#line 13 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\BFFIterator.cpp"









#line 1 "c:\\p4\\Code\\Core/Tracing/Tracing.h"


#pragma once













	
	
#line 20 "c:\\p4\\Code\\Core/Tracing/Tracing.h"





class Tracing
{
public:
	static inline void DoNothing() {}

	





	static void Output( const char * message );
	static void OutputFormat( const char * fmtString, ... );
	static void FatalError( const char * message );
	static void FatalErrorFormat( const char * fmtString, ... );

	typedef bool Callback( const char * mesage );
	static void SetCallbackDebugSpam( Callback callback );
	static void SetCallbackOutput( Callback callback );

private:
	static Callback * m_CallbackDebugSpam;
	static Callback * m_CallbackOutput;
};


#line 52 "c:\\p4\\Code\\Core/Tracing/Tracing.h"
#line 11 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\BFFIterator.cpp"






void BFFIterator::SkipWhiteSpace()
{
	while ( !IsAtEnd() )
	{
		if ( IsAtWhitespace() )
		{
			(*this)++;
		}
		else
		{
			break;
		}
	}
}



void BFFIterator::SkipComment()
{
	
	while ( !IsAtEnd() )
	{
		bool atLineEnd = (*m_Pos == '\n' );
		(*this)++;
		if ( atLineEnd )
		{
			break;
		}
	}
}



void BFFIterator::SkipString( char quote )
{
	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	while ( !IsAtEnd() )
	{
		m_Pos++;

		const char c = *m_Pos;

		
		if ( c == '^' )
		{
			m_Pos++; 
			continue;
		}

		
		if ( *m_Pos == quote )
		{
			return;
		}
	}
}



void BFFIterator::SkipWhiteSpaceAndComments()
{
	SkipWhiteSpace();
	while ( *m_Pos == ';' )
	{
		SkipComment();
		SkipWhiteSpace();
	}
}



void BFFIterator::SkipVariableName()
{
	while ( !IsAtEnd() )
	{
		if ( !IsAtValidVariableNameCharacter() )
		{
			return;
		}

		
		(*this)++;
	}
}



void BFFIterator::SkipFunctionName()
{
	while ( !IsAtEnd() )
	{
		if ( IsAtValidFunctionNameCharacter() )
		{
			
			(*this)++;
			continue;
		}

		break; 
	}
}



bool BFFIterator::ParseToNext( char c )
{
	if ( IsAtEnd() )
	{
		return false;
	}

	char prev = '\000';
	do
	{
		(*this)++;
		if ( *m_Pos == c )
		{
			if ( prev != '^' )
			{
				return true;
			}
		}
		prev = *m_Pos;
	} while ( !IsAtEnd() );

	return false;
}



bool BFFIterator::ParseToMatchingBrace( char openBrace, char closeBrace )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	
























	do
	{
		m_Pos++;

		
		if ( *m_Pos == openBrace )
		{
			if ( ParseToMatchingBrace( openBrace, closeBrace ) == false )
			{
				return false;
			}
			continue;
		}

		
		if ( ( *m_Pos == '\'' ) || ( *m_Pos == '"' ) )
		{
			SkipString( *m_Pos );
		}

		
		if ( *m_Pos == ';' )
		{
			SkipComment();
		}

		
		if ( *m_Pos == closeBrace )
		{
			return true;
		}

		

	} while ( !IsAtEnd() );

	












































	return false;
}



bool BFFIterator::IsAtValidVariableNameCharacter() const
{
	const char c = *m_Pos;
	return ( ( ( c >= 'a' ) && ( c <= 'z' ) ) ||
			 ( ( c >= 'A' ) && ( c <= 'Z' ) ) ||
			 ( ( c >= '0' ) && ( c <= '9' ) ) ||
			 ( c == '_' ) );
}



bool BFFIterator::IsAtValidFunctionNameCharacter() const
{
	const char c = *m_Pos;
	return ( ( ( c >= 'a' ) && ( c <= 'z' ) ) ||
			 ( ( c >= 'A' ) && ( c <= 'Z' ) ) ||
			 ( ( c >= '0' ) && ( c <= '9' ) ) ||
			 ( c == '_' ) );
}



bool BFFIterator::IsAtWhitespace() const
{
	char c = *m_Pos;
	return ( ( c == '\n' ) ||
			 ( c == '\r' ) ||
			 ( c == '\t' ) ||
			 ( c == ' ' ) );
}



  void BFFIterator::EmitParseError( const char * message, ... ) const
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	const size_t BUFFER_SIZE( 4096 );
	char buffer[ BUFFER_SIZE ];

	va_list args;
	( __va_start(&args, message) );
	vsnprintf_s( buffer, BUFFER_SIZE, ((size_t)-1), message, args );
	( args = (va_list)0 );

	
	uint32_t line = 0;
	uint32_t column = 0;
	const char * lineStart = nullptr;
	GetPosInfo( line, column, lineStart );

	
	const AStackString<> fileName( m_FileName );
	AStackString<> fullPath;
	NodeGraph::CleanPath( fileName, fullPath );

	
	Tracing::OutputFormat( "%s(%u):(%u) BFF Parse Error - %s\n", fullPath.Get(), line, column, buffer );

	
	BFFIterator lineEnd( *this );
	while ( !lineEnd.IsAtEnd() )
	{
		if (( *lineEnd != '\r' ) && ( *lineEnd != '\n' ))
		{
			lineEnd++;
			continue;
		}
		break;
	}

	
	size_t lineLength = lineEnd.GetCurrent() - lineStart;
	if ( lineLength >= 256 )
	{
		return;
	}

	
	AString::Copy( lineStart, buffer, lineLength );
	do { FLog::Error( "%s", buffer ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	
	char * c = buffer;
	const char * end = c + column - 1;
	for ( ; c < end; ++c )
	{
		if ( *c != '\t' )
		{
			*c = ' ';
		}
	}

	AString::Copy( "^", c, 1 );
	do { FLog::Error( buffer   ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	AString::Copy( "\\--here", c, 8 );
	do { FLog::Error( buffer   ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
}



void BFFIterator::GetPosInfo( uint32_t & line,
							  uint32_t & column,
							  const char * & lineStart ) const
{
	
	
	const char * p = m_MinPos;
	lineStart = m_MinPos;
	line = 1;
	while ( p < m_Pos ) 
	{
		bool atLineEnd = ( *p == '\n' );
		p++;
		if ( atLineEnd )
		{
			lineStart = p;
			line++;
		}
	}
	column = (uint32_t)( ( p - lineStart ) + 1 );
}


#line 14 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\BFFParser.cpp"













#line 1 "c:\\p4\\Code\\Core/FileIO/FileStream.h"


#pragma once




#line 1 "c:\\p4\\code\\core\\fileio\\IOStream.h"


#pragma once










class AString;



class IOStream
{
public:
	explicit inline IOStream() {}
	inline virtual ~IOStream() {}

	
	virtual uint64_t ReadBuffer( void * buffer, uint64_t bytesToRead ) = 0;
	virtual uint64_t WriteBuffer( const void * buffer, uint64_t bytesToWrite ) = 0;
	virtual void Flush() = 0;

	
	virtual uint64_t Tell() const = 0;
	virtual bool Seek( uint64_t pos ) const = 0;
	virtual uint64_t GetFileSize() const = 0;

	
	inline uint64_t Read( void * b, size_t s ) { return ReadBuffer( b, s ); }
	inline bool Read( bool & b )		{ return ( Read( &b, sizeof( b ) ) == sizeof( b ) ); }
	inline bool Read( uint16_t & u )	{ return ( Read( &u, sizeof( u ) ) == sizeof( u ) ); }
	inline bool Read( uint32_t & u )	{ return ( Read( &u, sizeof( u ) ) == sizeof( u ) ); }
	inline bool Read( uint64_t & u )	{ return ( Read( &u, sizeof( u ) ) == sizeof( u ) ); }
	bool Read( AString & string );
	template< class T > inline bool Read( Array< T > & a );

	
	inline uint64_t Write( const void * b, size_t s ) { return WriteBuffer( b, s ); }
	inline bool Write( const bool & b )		{ return ( Write( &b, sizeof( b ) ) == sizeof( b ) ); }
	inline bool Write( const uint16_t & u )	{ return ( Write( &u, sizeof( u ) ) == sizeof( u ) ); }
	inline bool Write( const uint32_t & u )	{ return ( Write( &u, sizeof( u ) ) == sizeof( u ) ); }
	inline bool Write( const uint64_t & u )	{ return ( Write( &u, sizeof( u ) ) == sizeof( u ) ); }
	bool Write( const AString & string );
	template< class T > inline bool Write( const Array< T > & a );
};



template< class T >
bool IOStream::Read( Array< T > & a )
{
	uint32_t num = 0;
	if ( Read( num ) == false ) { return false; }
	a.SetSize( num );
	for ( uint32_t i=0; i<num; ++i )
	{
		if ( Read( a[ i ] ) == false ) { return false; }
	}
	return true;
}



template< class T >
bool IOStream::Write( const Array< T > & a )
{
	uint32_t num = (uint32_t)a.GetSize();
	if ( Write( num ) == false ) { return false; }
	for ( uint32_t i=0; i<num; ++i )
	{
		if ( Write( a[ i ] ) == false ) { return false; }
	}
	return true;
}


#line 84 "c:\\p4\\code\\core\\fileio\\IOStream.h"
#line 9 "c:\\p4\\Code\\Core/FileIO/FileStream.h"



class FileStream : public IOStream
{
public:
	explicit FileStream();
	~FileStream();

	enum FileMode
	{
		READ_ONLY		= 0x1,
		WRITE_ONLY		= 0x2,
		TEMP			= 0x4,
		DELETE_ON_CLOSE	= 0x8,
	};

	__declspec( noinline ) bool Open( const char * fileName, uint32_t mode = FileStream::READ_ONLY );
	void Close();

	inline bool IsOpen() const { return ( m_Handle != nullptr ); }

	
	virtual uint64_t ReadBuffer( void * buffer, uint64_t bytesToRead );
	virtual uint64_t WriteBuffer( const void * buffer, uint64_t bytesToWrite );
	virtual void Flush();

	
	virtual uint64_t Tell() const;
	virtual bool Seek( uint64_t pos ) const;
	virtual uint64_t GetFileSize() const;

private:
	void * m_Handle;
};


#line 47 "c:\\p4\\Code\\Core/FileIO/FileStream.h"
#line 15 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\BFFParser.cpp"








BFFParser::BFFParser()
: m_SeenAVariable( false )
{
}



BFFParser::~BFFParser()
{
}



bool BFFParser::Parse( const char * dataWithSentinel, 
					   uint32_t sizeExcludingSentinel, 
					   const char * fileName )
{
	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	

	
	BFFStackFrame stackFrame;
	BFFIterator iter( dataWithSentinel, sizeExcludingSentinel, fileName );
	if ( Parse( iter ) == false )
	{
		
		return false;
	}

	return true;
}



bool BFFParser::Parse( BFFIterator & iter )
{
	for (;;)
	{
		iter.SkipWhiteSpace();

		
		const char c = *iter;
		switch ( c )
		{
			case BFF_COMMENT_CHAR:
			{
				iter.SkipComment();
				continue;
			}
			case BFF_DECLARE_VAR_INTERNAL:
			case BFF_DECLARE_VAR_USER:
			{
				if ( ParseNamedVariableDeclaration( iter ) == false )
				{
					return false;
				}
				continue;
			}
			case BFF_VARIABLE_CONCATENATION:
			{
				
				if ( ParseUnnamedVariableConcatenation( iter ) == false )
				{
					return false;
				}
				continue;
			}
			default:
			{
				if ( iter.IsAtValidFunctionNameCharacter() )
				{
					if ( ParseFunction( iter ) == false )
					{
						return false;
					}
					continue;
				}
			}
		}

		iter.SkipWhiteSpace();
		if ( iter.IsAtEnd() == false )
		{
			iter.EmitParseError( "Unknown construct" );
			return false;
		}

		break;  
	}

	return true;
}



bool BFFParser::ParseUnnamedVariableConcatenation( BFFIterator & iter )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	if ( m_SeenAVariable == false )
	{
		iter.EmitParseError( "Unnamed concatenation must follow a variable assignment in the same scope" );
		return false;
	}

	return ParseVariableDeclaration( iter, m_LastVarNameStart, m_LastVarNameEnd );
}



bool BFFParser::ParseNamedVariableDeclaration( BFFIterator & iter )
{
	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	m_LastVarNameStart = iter; 
	iter++;

	
	if ( iter.IsAtEnd() )
	{
		iter.EmitParseError( "Unexpected end of file following variable declaration token" );
		return false;
	}

	
	if ( iter.IsAtValidVariableNameCharacter() == false )
	{
		iter.EmitParseError( "Unexpected character '%c' during variable declaration", *iter );
		return false;
	}

	
	iter.SkipVariableName();
	if ( iter.IsAtEnd() )
	{
		iter.EmitParseError( "Unexpected end of file following variable declaration token" );
		return false;
	}
	m_LastVarNameEnd = iter;

	
	size_t varNameLen = m_LastVarNameStart.GetDistTo( m_LastVarNameEnd );
	if ( varNameLen > MAX_VARIABLE_NAME_LENGTH )
	{
		m_LastVarNameStart.EmitParseError( "Variable name is too long (%u chars), max length is %u chars", varNameLen, MAX_VARIABLE_NAME_LENGTH );
		return false;
	}

	
	iter.SkipWhiteSpace();
	if ( iter.IsAtEnd() )
	{
		iter.EmitParseError( "Unexpected end of file following variable declaration" );
		return false;
	}

	return ParseVariableDeclaration( iter, m_LastVarNameStart, m_LastVarNameEnd );
}



bool BFFParser::ParseVariableDeclaration( BFFIterator & iter, const BFFIterator & varNameStart,
															  const BFFIterator & varNameEnd )
{
	
	BFFIterator operatorIter( iter );
	bool concatenation = false;
	if ( *iter == BFF_VARIABLE_ASSIGNMENT )
	{
		
	}
	else if ( *iter == BFF_VARIABLE_CONCATENATION )
	{
		
		concatenation = true;
	}
	else
	{
		iter.EmitParseError( "Unexpected character '%c' following variable name, expected operator", *iter );
		return false;
	}

	
	iter++;
	iter.SkipWhiteSpace();
	if ( iter.IsAtEnd() )
	{
		iter.EmitParseError( "Unexpected end of file before variable operator value" );
		return false;
	}

	char openToken = *iter;
	char closeToken = 0;
	bool ok = false;
	if ( ( openToken == '"' ) || ( openToken == '\'' ) )
	{
		closeToken = openToken;
		ok = true;
	}
	else if ( openToken == BFF_FUNCTION_BODY_OPEN )
	{
		closeToken = BFF_FUNCTION_BODY_CLOSE;
		ok = true;
	}
	else if ( ( openToken >= '0' ) && ( openToken <= '9' ) )
	{
		
		BFFIterator startIntValue( iter );
		while ( iter.IsAtEnd() == false )
		{
			iter++;
			if ( ( *iter < '0' ) || ( *iter > '9' ) )
			{
				break; 
			}
		}
		if ( startIntValue.GetDistTo( iter ) > 10 )
		{
			startIntValue.EmitParseError( "Integer declaration is too long" );
			return false;
		}
		AStackString<> intAsString( startIntValue.GetCurrent(), iter.GetCurrent() );
		int i = 0;
		if ( sscanf_s( intAsString.Get(), "%i", &i ) != 1 )
		{
			startIntValue.EmitParseError( "Integer could not be parsed" );
			return false;
		}
		return StoreVariableInt( varNameStart.GetCurrent(), varNameEnd.GetCurrent(), i );
	}
	else if ( ( *iter == 't' ) || ( *iter == 'f' ) )
	{
		
		BFFIterator startBoolValue( iter );
		if ( iter.ParseToNext( 'e' ) == true )
		{
			iter++;
			if ( ( startBoolValue.GetDistTo( iter ) <= 5 ) )
			{
				AStackString<8> value( startBoolValue.GetCurrent(), iter.GetCurrent() );
				if ( value == "true" )
				{
					if ( concatenation )
					{
						operatorIter.EmitParseError( "Boolean values cannot be concatenated" );
						return false;
					}
					return StoreVariableBool( varNameStart.GetCurrent(), varNameEnd.GetCurrent(), true );
				}
				else if ( value == "false" )
				{
					if ( concatenation )
					{
						operatorIter.EmitParseError( "Boolean values cannot be concatenated" );
						return false;
					}
					return StoreVariableBool( m_LastVarNameStart.GetCurrent(), m_LastVarNameEnd.GetCurrent(), false );
				}
			}
		}

		
	}
	
	if ( !ok )
	{
		iter.EmitParseError( "Unexpected character '%c' during variable value", *iter );
		return false;
	}

	bool result = true;

	
	BFFIterator openTokenPos( iter );
	openTokenPos++; 
	if ( openToken == BFF_FUNCTION_BODY_OPEN )
	{
		if ( iter.ParseToMatchingBrace( openToken, closeToken ) )
		{
			result = StoreVariableArray( varNameStart.GetCurrent(), varNameEnd.GetCurrent(), 
										 openTokenPos, iter, operatorIter );
		}
	}
	else
	{
		do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		iter.SkipString( closeToken );
		if ( *iter == closeToken )
		{
			result = StoreVariableString( varNameStart.GetCurrent(), varNameEnd.GetCurrent(), 
										  openTokenPos, iter, operatorIter );
		}
	}

	if ( result )
	{
		m_SeenAVariable = true;
		iter++; 
	}

	
	return result;
}



bool BFFParser::ParseFunction( BFFIterator & iter )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	BFFStackFrame stackFrame;

	BFFIterator functionNameStart( iter );
	iter.SkipFunctionName();
	if ( iter.IsAtEnd() )
	{
		iter.EmitParseError( "Unexpected end of file during function call" );
		return false;
	}

	
	if ( functionNameStart.GetDistTo( iter ) > MAX_FUNCTION_NAME_LENGTH )
	{
		
		functionNameStart.EmitParseError( "Unknown function" );
		return false;
	}

	
	AStackString<MAX_FUNCTION_NAME_LENGTH> functionName( functionNameStart.GetCurrent(), iter.GetCurrent() );
	const Function * func = Function::Find( functionName );
	if ( func == nullptr )
	{
		functionNameStart.EmitParseError( "Unknown function" );
		return false;
	}
	iter.SkipWhiteSpace();

	if ( func->IsUnique() && func->GetSeen() )
	{
		functionNameStart.EmitParseError( "Function '%s' must only be called once", functionName.Get() );
		return false;
	}
	func->SetSeen();

	do { if ( FLog::ShowInfo() ) { FLog::Info( "Function call '%s'", functionName.Get() ); } __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	bool hasHeader = false;
	BFFIterator functionArgsStartToken( iter );
	BFFIterator functionArgsStopToken( iter );
	if ( *iter == BFF_FUNCTION_ARGS_OPEN )
	{
		
		if ( func->AcceptsHeader() == false )
		{
			iter.EmitParseError( "Unexpected function header for '%s'", functionName.Get() );
			return false;
		}

		
		if ( iter.ParseToMatchingBrace( BFF_FUNCTION_ARGS_OPEN, BFF_FUNCTION_ARGS_CLOSE ) == false )
		{
			functionArgsStartToken.EmitParseError( "Unable to find matching function header close token '%c' for '%s'", BFF_FUNCTION_ARGS_CLOSE, functionName.Get() );
			return false;
		}
		functionArgsStopToken = iter;
		hasHeader = true;
		iter++; 
		iter.SkipWhiteSpaceAndComments();
	}

	if ( func->NeedsHeader() && ( hasHeader == false ) )
	{
		iter.EmitParseError( "Function '%s' needs a header", functionName.Get() );
		return false;
	}

	
	if ( *iter != BFF_FUNCTION_BODY_OPEN )
	{
		iter.EmitParseError( "Function '%s' requires a body", functionName.Get() );
		return false;
	}

	BFFIterator functionBodyStartToken( iter );
	if ( iter.ParseToMatchingBrace( BFF_FUNCTION_BODY_OPEN, BFF_FUNCTION_BODY_CLOSE ) == false )
	{
		functionBodyStartToken.EmitParseError( "Unable to find matching function body close token '%c'", BFF_FUNCTION_BODY_CLOSE );
		return false;
	}

	BFFIterator functionBodyStopToken( iter );
	iter++;

	if ( hasHeader )
	{
		return func->ParseFunction( functionNameStart,
									functionBodyStartToken, functionBodyStopToken,
									&functionArgsStartToken, &functionArgsStopToken );
	}
	else
	{
		return func->ParseFunction( functionNameStart,
									functionBodyStartToken, functionBodyStopToken,
									nullptr, nullptr );
	}
}



bool BFFParser::StoreVariableString( const char * varNameStart, const char * varNameEnd, 
									 const BFFIterator & valueStart, const BFFIterator & valueEnd,
									 const BFFIterator & operatorIter )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	AStackString< MAX_VARIABLE_NAME_LENGTH > name( varNameStart, varNameEnd );

	
	const BFFVariable * varToConcat = nullptr;
	if ( *operatorIter == BFF_VARIABLE_CONCATENATION )
	{
		
		varToConcat = BFFStackFrame::GetVar( name );
		if ( varToConcat == nullptr )
		{
			operatorIter.EmitParseError( "Variable '%s' not found for concatention", name.Get() );
			return false;
		}

		
		if ( varToConcat->IsString() == false )
		{
			operatorIter.EmitParseError( "Cannot concatenate <string> to <%s> '%s'",
							varToConcat->IsBool() ? "boolean" : "array",
							name.Get() );
			return false;
		}
	}

	
	AStackString< MAX_VARIABLE_LENGTH > value;

	
	if ( PerformVariableSubstitutions( valueStart, valueEnd, value ) == false )
	{
		return false;
	}

	AStackString< MAX_VARIABLE_NAME_LENGTH > finalValue;
	if ( varToConcat )
	{
		finalValue = varToConcat->GetValue();
	}
	finalValue += value.Get(); 

	BFFStackFrame::SetVar( name, finalValue );
	do { if ( FLog::ShowInfo() ) { FLog::Info( "Registered <string> variable '%s' with value '%s'", name.Get(), finalValue.Get() ); } __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	return true;
}



bool BFFParser::StoreVariableArray( const char * varNameStart, const char * varNameEnd, 
									const BFFIterator & valueStart, const BFFIterator & valueEnd,
									const BFFIterator & operatorIter )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	AStackString< MAX_VARIABLE_NAME_LENGTH > name( varNameStart, varNameEnd );

	Array< AString > values( 32, true );

	
	if ( *operatorIter == BFF_VARIABLE_CONCATENATION )
	{
		
		const BFFVariable * var = BFFStackFrame::GetVar( name );
		if ( var == nullptr )
		{
			operatorIter.EmitParseError( "Variable '%s' not found for concatention", name.Get() );
			return false;
		}

		
		if ( var->IsArray() == false )
		{
			operatorIter.EmitParseError( "Cannot concatenate <array> to <%s> '%s'",
							var->IsBool() ? "boolean" : "string",
							name.Get() );
			return false;
		}

		
		values = var->GetArray();
	}

	
	BFFIterator iter( valueStart );
	while ( iter < valueEnd )
	{
		iter.SkipWhiteSpaceAndComments();
		const char c = *iter;
		if ( ( c != '"' ) && ( c != '\'' ) )
		{
			iter.EmitParseError( "Unexpected character '%c' parsing variable array '%s'", *iter, name.Get() );
			return false;
		}
		BFFIterator elementValueStart( iter );
		iter.SkipString( c );
		if ( iter > valueEnd )
		{
			elementValueStart.EmitParseError( "Failed to find end of value parsing variable array '%s'", name.Get() );
			return false;
		}
		if ( elementValueStart.GetDistTo( iter ) > MAX_VARIABLE_LENGTH )
		{
			elementValueStart.EmitParseError( "Array variable element is too long (max %u characters)", MAX_VARIABLE_LENGTH );
			return false;
		}
		elementValueStart++; 
		AStackString< MAX_VARIABLE_LENGTH > elementValue;

		
		if ( PerformVariableSubstitutions( elementValueStart, iter, elementValue ) == false )
		{
			return false;
		}

		values.Append( elementValue );

		iter++; 
		iter.SkipWhiteSpaceAndComments();
		if ( *iter == ',' ) 
		{ 
			iter++; 
		}

		
	}

	
	BFFStackFrame::SetVarArray( name, values );
	do { if ( FLog::ShowInfo() ) { FLog::Info( "Registered <array> variable '%s' with %u elements", name.Get(), values.GetSize() ); } __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	return true;
}



bool BFFParser::StoreVariableBool( const char * varNameStart, const char * varNameEnd, bool value )
{
	
	AStackString< MAX_VARIABLE_NAME_LENGTH > name( varNameStart, varNameEnd );
	BFFStackFrame::SetVarBool( name, value );

	do { if ( FLog::ShowInfo() ) { FLog::Info( "Registered <bool> variable '%s' with value '%s'", name.Get(), value ? "true" : "false" ); } __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	return true;
}



bool BFFParser::StoreVariableInt( const char * varNameStart, const char * varNameEnd, int value )
{
	AStackString< MAX_VARIABLE_NAME_LENGTH > name( varNameStart, varNameEnd );
	BFFStackFrame::SetVarInt( name, value );

	do { if ( FLog::ShowInfo() ) { FLog::Info( "Registered <int> variable '%s' with value '%i'", name.Get(), value ); } __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	return true;
}



 bool BFFParser::PerformVariableSubstitutions( const BFFIterator & startIter,
											  const BFFIterator & endIter,
											  AString & value )
{
	AStackString< MAX_VARIABLE_LENGTH > output;

	BFFIterator src( startIter );
	BFFIterator end( endIter );

	while ( src < end )
	{
		switch ( *src )
		{
			case '^':
			{
				src++; 
				if ( src < end )
				{
					output += '"'; 
				}
				break;
			}
			case '$':
			{
				BFFIterator firstToken( src );
				src++; 

				
				BFFIterator startName( src );
				const char * endName = nullptr;
				while ( src < end )
				{
					if ( *src == '$' )
					{
						endName = src.GetCurrent();
						break;
					}
					src++;
				}
				if ( ( endName == nullptr ) ||
					 ( ( endName - startName.GetCurrent() ) < 1 ) )
				{
					firstToken.EmitParseError( "Failed to find matching close '%c'", '$' );
					return false; 
				}
				AStackString< MAX_VARIABLE_NAME_LENGTH > varName( startName.GetCurrent(), endName );
				const BFFVariable * var = BFFStackFrame::GetVarAny( varName );
				if ( var == nullptr )
				{
					startName.EmitParseError( "Unknown variable in substitution '%s'", varName.Get() );
					return false; 
				}
				if ( var->IsString() == false )
				{
					startName.EmitParseError( "Variable for substitution '%s' is not a string", varName.Get() );
					return false; 
				}
				output += var->GetValue();
				break;
			}
			default:
			{
				output += *src;
				break;
			}
		}
		src++;
	}

	value = output;
	return true;
}


#line 15 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\BFFStackFrame.cpp"










 BFFStackFrame * BFFStackFrame::s_StackHead = nullptr;



BFFStackFrame::BFFStackFrame()
: m_Variables( 32, true )
{
	
	m_Next = s_StackHead;
	s_StackHead = this;
}



BFFStackFrame::~BFFStackFrame()
{
	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	s_StackHead = m_Next;

	
	Array< BFFVariable * >::Iter i = m_Variables.Begin();
	Array< BFFVariable * >::Iter end = m_Variables.End();
	for( ; i < end ; ++i )
	{
		delete *i;
	}
}



 void BFFStackFrame::SetVar( const AString & name,
									   const AString & value )
{
	BFFVariable * var = s_StackHead->GetVarMutableNoRecurse( name );
	if ( var )
	{
		var->SetValue( value );
		return;
	}

	
	s_StackHead->m_Variables.Append( new BFFVariable( name, value ) );
}



 void BFFStackFrame::SetVarArray( const AString & name,
											const Array< AString > & values )
{
	BFFVariable * var = s_StackHead->GetVarMutableNoRecurse( name );
	if ( var )
	{
		var->SetValue( values );
		return;
	}

	
	s_StackHead->m_Variables.Append( new BFFVariable( name, values ) );
}



 void BFFStackFrame::SetVarBool( const AString & name, bool value )
{
	BFFVariable * var = s_StackHead->GetVarMutableNoRecurse( name );
	if ( var )
	{
		var->SetValue( value );
		return;
	}

	
	s_StackHead->m_Variables.Append( new BFFVariable( name, value ) );
}



 void BFFStackFrame::SetVarInt( const AString & name, int value )
{
	BFFVariable * var = s_StackHead->GetVarMutableNoRecurse( name );
	if ( var )
	{
		var->SetValue( value );
		return;
	}

	
	s_StackHead->m_Variables.Append( new BFFVariable( name, value ) );
}



 const BFFVariable * BFFStackFrame::GetVar( const char * name )
{
	AStackString<> strName( name );
	return GetVar( strName );
}



 const BFFVariable * BFFStackFrame::GetVar( const AString & name )
{
	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	return s_StackHead->GetVariableRecurse( name );
}



const BFFVariable * BFFStackFrame::GetVariableRecurse( const AString & name ) const
{
	
	Array< BFFVariable * >::Iter i = m_Variables.Begin();
	Array< BFFVariable * >::Iter end = m_Variables.End();
	for( ; i < end ; ++i )
	{
		if ( ( *i )->GetName() == name )
		{
			return *i;
		}
	}
	
	
	if ( m_Next )
	{
		return m_Next->GetVariableRecurse( name );
	}

	
	return nullptr;
}



 const BFFVariable * BFFStackFrame::GetVarAny( const AString & name )
{
	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	return s_StackHead->GetVariableRecurse( name, BFFVariable::VAR_ANY );
}



const BFFVariable * BFFStackFrame::GetVariableRecurse( const AString & nameOnly, 
												 BFFVariable::VarType type ) const
{
	
	Array< BFFVariable * >::Iter i = m_Variables.Begin();
	Array< BFFVariable * >::Iter end = m_Variables.End();
	for( ; i < end ; ++i )
	{
		
		if ( ( *i )->GetName().GetLength() == ( nameOnly.GetLength() + 1 ) )
		{
			
			if ( ( type == BFFVariable::VarType::VAR_ANY ) ||
				 ( type == ( *i )->GetType() ) )
			{
				
				if ( nameOnly == ( ( *i )->GetName().Get() + 1 ) )
				{
					return *i;
				}
			}
		}
	}
	
	
	if ( m_Next )
	{
		return m_Next->GetVariableRecurse( nameOnly, type );
	}

	
	return nullptr;
}



BFFVariable * BFFStackFrame::GetVarMutableNoRecurse( const AString & name )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); 

	
	Array< BFFVariable * >::Iter i = m_Variables.Begin();
	Array< BFFVariable * >::Iter end = m_Variables.End();
	for( ; i < end ; ++i )
	{
		if ( ( *i )->GetName() == name )
		{
			return *i;
		}
	}

	return nullptr;
}


#line 16 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\BFF\\BFFVariable.cpp"









BFFVariable::BFFVariable( const AString & name, const AString & value )
: m_Name( name )
, m_Type( VAR_STRING )
, m_StringValue( value )
, m_BoolValue( false )
, m_ArrayValues( 0, false )
, m_IntValue( 0 )
{
}



BFFVariable::BFFVariable( const AString & name, bool value )
: m_Name( name )
, m_Type( VAR_BOOL )

, m_BoolValue( value )
, m_ArrayValues( 0, false )
, m_IntValue( 0 )
{
}



BFFVariable::BFFVariable( const AString & name, const Array< AString > & values )
: m_Name( name )
, m_Type( VAR_ARRAY )

, m_BoolValue( false )
, m_ArrayValues( 0, true )
, m_IntValue( 0 )
{
	m_ArrayValues = values;
}



BFFVariable::BFFVariable( const AString & name, int i )
: m_Name( name )
, m_Type( VAR_INT )

, m_BoolValue( false )
, m_ArrayValues( 0, true )
, m_IntValue( i )
{
}



BFFVariable::~BFFVariable()
{
}



void BFFVariable::SetValue( const AString & value )
{
	m_Type = VAR_STRING;
	m_StringValue = value;
}



void BFFVariable::SetValue( bool value )
{
	m_Type = VAR_BOOL;
	m_BoolValue = value;
}



void BFFVariable::SetValue( const Array< AString > & values )
{
	m_Type = VAR_ARRAY;
	m_ArrayValues = values;
}



void BFFVariable::SetValue( int i )
{
	m_Type = VAR_INT;
	m_IntValue = i;
}

#line 17 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\CopyNode.cpp"





#line 1 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\graph\\CopyNode.h"


#pragma once












class CopyNode : public FileNode
{
public:
	explicit CopyNode( const AString & dstFileName,
					    FileNode * sourceFile );
	virtual ~CopyNode();

	static inline Node::Type GetType() { return Node::COPY_FILE_NODE; }

	static Node * Load( IOStream & stream, bool remote );
	virtual bool Save( IOStream & stream ) const;

private:
	virtual const Array< Node * > & GetStaticDependencies() const;
	virtual bool DetermineNeedToBuild( bool forceClean );
	virtual BuildResult DoBuild( Job * job );

	FileNode * m_SourceFile;
	Array< Node * > m_StaticDependencies;
};


#line 39 "c:\\p4\\code\\tools\\fbuild\\fbuildcore\\graph\\CopyNode.h"
#line 7 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\CopyNode.cpp"




#line 1 "c:\\p4\\Code\\Core/FileIO/FileIO.h"


#pragma once














class FileIO
{
public:
	static bool FileExists( const char * fileName );
	static bool FileDelete( const char * fileName );
	static bool FileCopy( const char * srcFileName, const char * dstFileName, bool allowOverwrite = true );
	static bool FileMove( const AString & srcFileName, const AString & dstFileName );
	static bool GetFiles( const AString & path,
						  const AString & wildCard,
						  bool recurse,
						  Array< AString > * results );
	static bool GetCurrentDir( AString & output );
	static bool GetTempDir( AString & output );
	static bool DirectoryCreate( const AString & path );
	static bool DirectoryExists( const AString & path );
	static bool EnsurePathExists( const AString & path );

	static bool CreateTempPath( const char * tempPrefix, AString & path );

	static uint64_t GetFileLastWriteTime( const AString & fileName );
	static bool		SetFileLastWriteTime( const AString & fileName, uint64_t fileTime );

	static bool		SetReadOnly( const char * fileName, bool readOnly );
private:
	static void GetFilesRecurse( AString & path, 
								 const AString & wildCard,
								 Array< AString > * results );
	static void GetFilesNoRecurse( const char * path, 
								   const char * wildCard,
								   Array< AString > * results );
};


#line 52 "c:\\p4\\Code\\Core/FileIO/FileIO.h"
#line 12 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\CopyNode.cpp"





CopyNode::CopyNode( const AString & dstFileName,
					FileNode * sourceFile )
: FileNode( dstFileName, ControlFlag::FLAG_NONE )
, m_SourceFile( sourceFile )
, m_StaticDependencies( 1, false )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	m_StaticDependencies.Append( m_SourceFile );
	m_Type = Node::COPY_FILE_NODE;
}



CopyNode::~CopyNode()
{
}



 bool CopyNode::DetermineNeedToBuild( bool forceClean )
{
	m_TimeStamp = FileIO::GetFileLastWriteTime( m_Name );

	
	if ( ( m_TimeStamp < m_SourceFile->GetTimeStamp() ) ||
		 ( forceClean == true ) )
	{
		return true;
	}
	return false;
}



 Node::BuildResult CopyNode::DoBuild( Job *  )
{
	
	if ( FileIO::FileCopy( m_SourceFile->GetName().Get(), m_Name.Get() ) == false )
	{
		return NODE_RESULT_FAILED; 
	}

	if ( FileIO::SetReadOnly( m_Name.Get(), false ) == false )
	{
		return NODE_RESULT_FAILED; 
	}

	
	m_TimeStamp = m_SourceFile->GetTimeStamp();
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	if ( FileIO::SetFileLastWriteTime( m_Name, m_TimeStamp ) == false )
	{
		m_TimeStamp = 0;
		return NODE_RESULT_FAILED; 
	}

	return NODE_RESULT_OK;
}



 const Array< Node * > & CopyNode::GetStaticDependencies() const
{
	return m_StaticDependencies;
}




 Node * CopyNode::Load( IOStream & stream, bool remote )
{
	(void)remote; AStackString<> fileName; if ( stream.Read( fileName ) == false ) { return nullptr; };
	(void)remote; AStackString<> sourceFile; if ( stream.Read( sourceFile ) == false ) { return nullptr; };

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();
	Node * srcNode = ng.FindNode( sourceFile );
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); 
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	Node * n = ng.CreateCopyNode( fileName, (FileNode *)srcNode );
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	return n;
}



 bool CopyNode::Save( IOStream & stream ) const
{
	if ( stream.Write( m_Name ) == false ) { return false; };
	if ( stream.Write( m_SourceFile->GetName() ) == false ) { return false; };
	return true;
}


#line 18 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\CSNode.cpp"










#line 1 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Helpers/CIncludeParser.h"




#pragma once










class CIncludeParser
{
public:
	explicit CIncludeParser();
	~CIncludeParser();

	bool ParseMSCL_Output( const char * compilerOutput, size_t compilerOutputSize );
	bool ParseMSCL_Preprocessed( const char * compilerOutput, size_t compilerOutputSize );
	bool ParseGCC_Preprocessed( const char * compilerOutput, size_t compilerOutputSize );

	const Array< AString > & GetIncludes() const { return m_Includes; }

private:
	bool Parse( const char * compilerOutput,
				size_t compilerOutputSize,
				const char * startOfLineString,
				bool quoted );

	Array< AString > m_Includes;
};


#line 39 "c:\\p4\\Code\\Tools/FBuild/FBuildCore/Helpers/CIncludeParser.h"
#line 12 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\CSNode.cpp"



#line 1 "c:\\p4\\Code\\Core/Math/CRC32.h"


#pragma once










class CRC32
{
public:
	static inline uint32_t	Start() { return 0xFFFFFFFF; }
	static uint32_t			Update( uint32_t crc32, const void * buffer, size_t len );
	static uint32_t			UpdateLower( uint32_t crc32, const void * buffer, size_t len );
	static inline uint32_t	Stop( uint32_t crc32 ) { return ( crc32 ^ 0xFFFFFFFF ); }

	static uint32_t			Calc( const void * buffer, size_t len );
	static uint32_t			CalcLower( const void * buffer, size_t len );

	inline static uint32_t	Calc( const AString & string )		{ return Calc( string.Get(), string.GetLength() ); }
	inline static uint32_t	CalcLower( const AString & string ) { return CalcLower( string.Get(), string.GetLength() ); }
};


#line 31 "c:\\p4\\Code\\Core/Math/CRC32.h"
#line 16 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\CSNode.cpp"
#line 1 "c:\\p4\\Code\\Core/Process/Process.h"


#pragma once










class Process
{
public:
	Process();
	~Process();

	bool Spawn( const char * executable,
				const char * args,
				const char * workingDir,
				const char * environment );
	bool IsRunning() const;
	int WaitForExit();

	
	
	void ReadAllData( AutoPtr< char > & memOut, uint32_t * memOutSize,
					  AutoPtr< char > & errOut, uint32_t * errOutSize );

	
	
	char * ReadStdOut( uint32_t * bytesRead = nullptr );
	char * ReadStdErr( uint32_t * bytesRead = nullptr );

	
	uint32_t ReadStdOut( char * outputBuffer, uint32_t outputBufferSize );
	uint32_t ReadStdErr( char * outputBuffer, uint32_t outputBufferSize );

private:
	void Read( void * handle, AutoPtr< char > & buffer, uint32_t & sizeSoFar, uint32_t & bufferSize );
	char * Read( void * handle, uint32_t * bytesRead );
	uint32_t Read( void * handle, char * outputBuffer, uint32_t outputBufferSize );

	
	inline struct _PROCESS_INFORMATION & GetProcessInfo() const
	{ 
		return (_PROCESS_INFORMATION &)m_ProcessInfo;
	}
	
		unsigned char m_ProcessInfo[ 8 + 8 + 4 + 4 ]; 
	

#line 56 "c:\\p4\\Code\\Core/Process/Process.h"
	
	
	void * m_StdOutRead;	
	void * m_StdOutWrite;	
	void * m_StdErrRead;	
	void * m_StdErrWrite;	

	bool m_Started;
};


#line 68 "c:\\p4\\Code\\Core/Process/Process.h"
#line 17 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\CSNode.cpp"





CSNode::CSNode( const AString & compilerOutput,
				const Array< Node * > & inputNodes,
				const AString & compiler,
				const AString & compilerArgs,
				const Array< Node * > & extraRefs )
: FileNode( compilerOutput, Node::FLAG_NONE )
, m_StaticDependencies( inputNodes.GetSize() + extraRefs.GetSize(), false )
, m_DynamicDependencies( 0, true )
, m_ExtraRefs( extraRefs )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	for ( size_t i=0; i<inputNodes.GetSize(); ++i )
	{
		m_StaticDependencies.Append( inputNodes[i] );
	}

	for ( size_t i=0; i<extraRefs.GetSize(); ++i )
	{
		m_StaticDependencies.Append( extraRefs[ i ] );
	}

	
	m_CompilerPath = compiler; 
	m_CompilerArgs = compilerArgs;

	m_Type = CS_NODE;
	m_LastBuildTimeMs = 5000; 
}



CSNode::~CSNode()
{
}



 bool CSNode::DoDynamicDependencies( bool forceClean )
{
	if ( forceClean == true )
	{
		return true; 
	}

	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();

	
	m_DynamicDependencies.SetCapacity( m_StaticDependencies.GetSize() );

	
	
	size_t numDeps = m_StaticDependencies.GetSize() - m_ExtraRefs.GetSize();
	for ( size_t i=0; i<numDeps; ++i ) 
	{
		Node * n = m_StaticDependencies[ i ];

		if ( n->IsAFile() )
		{
			m_DynamicDependencies.Append( n );
			continue;
		}

		if ( n->GetType() == Node::DIRECTORY_LIST_NODE )
		{
			
			DirectoryListNode * dln = n->CastTo< DirectoryListNode >();
			const Array< AString > & files = dln->GetFiles();
			m_DynamicDependencies.SetCapacity( m_DynamicDependencies.GetSize() + files.GetSize() );
			for ( Array< AString >::Iter fIt = files.Begin();
					fIt != files.End();
					fIt++ )
			{
				
				Node * sn = ng.FindNode( *fIt );
				if ( sn == nullptr )
				{
					sn = ng.CreateFileNode( *fIt );
				}
				else if ( sn->IsAFile() == false )
				{
					do { FLog::Error( "CSAssembly() .CompilerInputFile '%s' is not a FileNode (type: %s)", n->GetName().Get(), n->GetTypeName() ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
					return false;
				}

				m_DynamicDependencies.Append( sn );
			}
			continue;
		}

		do { FLog::Error( "'%s' is not a supported node type (type: %s)", n->GetName().Get(), n->GetTypeName() ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		return false;
	}

	return true;
}



 Node::BuildResult CSNode::DoBuild( Job *  )
{
	
	AStackString< 4 * (1024) > fullArgs;
	fullArgs = m_CompilerArgs;

	
	AStackString< 4 * (1024) > sourceFiles;
	for ( Array< Node * >::ConstIter it = m_DynamicDependencies.Begin();
		  it != m_DynamicDependencies.End();
		  ++it )
	{
		if ( !sourceFiles.IsEmpty() )
		{
			sourceFiles += ' ';
		}
		sourceFiles += ( *it )->GetName();
	}
	fullArgs.Replace( "%1", sourceFiles.Get() );
	fullArgs.Replace( "%2", m_Name.Get() );

	AStackString<> additionalLinkage;
	for ( size_t i=0; i< m_ExtraRefs.GetSize(); ++i )
	{
		if ( i > 0 )
		{
			additionalLinkage += ',';
		}
		additionalLinkage += m_ExtraRefs[ i ]->GetName().Get();
	}
	fullArgs.Replace( "%3", additionalLinkage.Get() );

	
	const char * workingDir = nullptr;

	const char * environment = FBuild::Get().GetEnvironmentString();

	EmitCompilationMessage( fullArgs );

	
	Process p;
	if ( p.Spawn( m_CompilerPath.Get(), fullArgs.Get(),
				  workingDir, environment ) == false )
	{
		do { FLog::Error( "Failed to spawn process to build '%s'", GetName().Get() ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		return NODE_RESULT_FAILED;
	}

	
	AutoPtr< char > memOut;
	AutoPtr< char > memErr;
	uint32_t memOutSize = 0;
	uint32_t memErrSize = 0;
	p.ReadAllData( memOut, &memOutSize, memErr, &memErrSize );

	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	int result = p.WaitForExit();
	bool ok = ( result == 0 );

	if ( !ok )
	{
		
		Node::DumpOutput( memOut.Get(), memOutSize );
		Node::DumpOutput( memErr.Get(), memErrSize );
		goto failed;
	}

	if ( !FileIO::FileExists( m_Name.Get() ) )
	{
		do { FLog::Error( "Object missing despite success for '%s'", GetName().Get() ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		return NODE_RESULT_FAILED;
	}

	
	m_TimeStamp = FileIO::GetFileLastWriteTime( m_Name );

	return NODE_RESULT_OK;

failed:
	do { FLog::Error( "Failed to build Object (error %i) '%s'", result, GetName().Get() ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	return NODE_RESULT_FAILED;
}



 const Array< Node * > & CSNode::GetStaticDependencies() const
{
	return m_StaticDependencies;
}



 const Array< Node * > & CSNode::GetDynamicDependencies() const
{
	return m_DynamicDependencies;
}



bool CSNode::DetermineNeedToBuild( bool forceClean )
{
	
	uint64_t lastWriteTime = FileIO::GetFileLastWriteTime( m_Name );
	if ( lastWriteTime == 0 )
	{
		
		return true;
	}

	if ( GetTimeStamp() == 0 )
	{
		
		
		return true;
	}

	if ( lastWriteTime != GetTimeStamp() )
	{
		
		
		return true;
	}

	FileNode * staticDep = m_StaticDependencies[ 0 ]->CastTo< FileNode >();
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));  

	
	
	if ( m_TimeStamp < staticDep->GetTimeStamp() )
	{
		return true;
	}

	if ( forceClean )
	{
		return true;
	}

	
	
	for ( Array< Node * >::ConstIter it = m_DynamicDependencies.Begin();
			it != m_DynamicDependencies.End();
			it++ )
	{
		FileNode * fn = ( *it )->CastTo< FileNode >();
		if ( fn->GetTimeStamp() == 0 )
		{
			
			return true;
		}

		if ( m_TimeStamp < fn->GetTimeStamp() )
		{
			
			return true;
		}
	}

	
	return false;
}



 Node * CSNode::Load( IOStream & stream, bool remote )
{
	(void)remote; AStackString<> name; if ( stream.Read( name ) == false ) { return nullptr; };
	(void)remote; uint64_t timeStamp; if ( stream.Read( timeStamp ) == false ) { return nullptr; };
	Array< Node * > staticDeps( 2, true ); if ( Node::LoadDepArray( stream, staticDeps, remote ) == false ) { return nullptr; };
	(void)remote; AStackString<> compilerPath; if ( stream.Read( compilerPath ) == false ) { return nullptr; };
	(void)remote; AStackString<> compilerArgs; if ( stream.Read( compilerArgs ) == false ) { return nullptr; };
	Array< Node * > extraRefs( 0, true ); if ( Node::LoadDepArray( stream, extraRefs, remote ) == false ) { return nullptr; };

	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();
	Node * on = ng.CreateCSNode( name, staticDeps, compilerPath, compilerArgs, extraRefs );
	CSNode * csNode = on->CastTo< CSNode >();
	csNode->m_TimeStamp = timeStamp;
	return csNode;
}



 bool CSNode::Save( IOStream & stream ) const
{
	if ( stream.Write( m_Name ) == false ) { return false; };
	if ( stream.Write( m_TimeStamp ) == false ) { return false; };

	
	size_t numBaseDeps = m_StaticDependencies.GetSize() - m_ExtraRefs.GetSize();
	Array< Node * > staticDeps( numBaseDeps, false );
	for ( size_t i=0; i<numBaseDeps; ++i )
	{
		staticDeps.Append( m_StaticDependencies[ i ] );
	}
	if ( Node::SaveDepArray( stream, staticDeps ) == false ) { return false; };

	if ( stream.Write( m_CompilerPath ) == false ) { return false; };
	if ( stream.Write( m_CompilerArgs ) == false ) { return false; };
	if ( Node::SaveDepArray( stream, m_ExtraRefs ) == false ) { return false; };
	return true;
}



void CSNode::EmitCompilationMessage( const AString & fullArgs ) const
{
	
	
	
	AStackString<> output;
	output += "C#: ";
	
	
	
	output += GetName();
	
	output += '\n';
	if ( FLog::ShowInfo() )
	{
		output += m_CompilerPath;
		output += ' ';
		output += fullArgs;
		output += '\n';
	}
	do { FLog::Build( "%s", output.Get() ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
}


#line 19 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\DirectoryListNode.cpp"

















DirectoryListNode::DirectoryListNode( const AString & name,
									  const AString & path,
									  const AString & wildcard,
								      bool recursive,
									  const AString & excludePath )
: Node( name, Node::DIRECTORY_LIST_NODE, ControlFlag::FLAG_NONE )
	, m_Path( path )
	, m_WildCard( wildcard )
	, m_ExcludePath( excludePath )
	, m_Recursive( recursive )
	, m_Files( 0, true )
{
	
	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
#line 37 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\DirectoryListNode.cpp"
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
#line 45 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\DirectoryListNode.cpp"
}



DirectoryListNode::~DirectoryListNode()
{
}



 void DirectoryListNode::FormatName( const AString & path,
											   const AString & pattern,
											   bool recursive,
											   const AString & excludePath,
											   AString & result )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	result.Format( "%s|%s|%s|%s", path.Get(),
								  pattern.Get(),
								  recursive ? "true" : "false",
								  excludePath.Get() );
}



 bool DirectoryListNode::DetermineNeedToBuild( bool forceClean )
{
	(void)forceClean;
	return true; 
}



 Node::BuildResult DirectoryListNode::DoBuild( Job *  )
{
	
	

	if ( m_ExcludePath.IsEmpty() )
	{
		FileIO::GetFiles( m_Path, m_WildCard, m_Recursive, &m_Files );
	}
	else
	{
		Array< AString > files( 64, true );
		FileIO::GetFiles( m_Path, m_WildCard, m_Recursive, &files );

		m_Files.SetCapacity( files.GetSize() );

		
		for ( Array< AString >::Iter it = files.Begin();
			  it != files.End();
			  it++ )
		{
			if ( ( *it ).BeginsWithI( m_ExcludePath ) )
			{
				continue;
			}
			m_Files.Append( *it );
		}
	}

	if ( FLog::ShowInfo() )
	{
		const size_t numFiles = m_Files.GetSize();
		do { if ( FLog::ShowInfo() ) { FLog::Info( "Dir: '%s' (found %u files)\n", m_Name.Get(), (uint32_t)numFiles ); } __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
#line 116 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\DirectoryListNode.cpp"
		for ( size_t i=0; i<numFiles; ++i )
		{
			do { if ( FLog::ShowInfo() ) { FLog::Info( " - %s\n", m_Files[ i ].Get() ); } __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		}
	}

	return NODE_RESULT_OK;
}



 Node * DirectoryListNode::Load( IOStream & stream, bool remote )
{
	(void)remote; AStackString<> name; if ( stream.Read( name ) == false ) { return nullptr; };
	(void)remote; AStackString<> path; if ( stream.Read( path ) == false ) { return nullptr; };
	(void)remote; AStackString<> wildCard; if ( stream.Read( wildCard ) == false ) { return nullptr; };
	(void)remote; AStackString<> excludePath; if ( stream.Read( excludePath ) == false ) { return nullptr; };
	(void)remote; bool recursive; if ( stream.Read( recursive ) == false ) { return nullptr; };

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();
	Node * n = ng.CreateDirectoryListNode( name, path, wildCard, recursive, excludePath );
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	return n;
}



 bool DirectoryListNode::Save( IOStream & stream ) const
{
	if ( stream.Write( m_Name ) == false ) { return false; };
	if ( stream.Write( m_Path ) == false ) { return false; };
	if ( stream.Write( m_WildCard ) == false ) { return false; };
	if ( stream.Write( m_ExcludePath ) == false ) { return false; };
	if ( stream.Write( m_Recursive ) == false ) { return false; };
	return true;
}


#line 20 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\ExecNode.cpp"



















ExecNode::ExecNode( const AString & dstFileName,
					    FileNode * sourceFile,
						FileNode * executable,
						const char * arguments,
						const char * workingDir )
: FileNode( dstFileName, ControlFlag::FLAG_NONE )
, m_StaticDependencies( 2, true )
, m_SourceFile( sourceFile )
, m_Executable( executable )
, m_Arguments( arguments )
{
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	m_StaticDependencies.Append( sourceFile );
	m_StaticDependencies.Append( executable );
	if ( workingDir )
	{
		m_WorkingDir = workingDir;
	}
	m_Type = EXEC_NODE;
}



ExecNode::~ExecNode()
{
}



 bool ExecNode::DetermineNeedToBuild( bool forceClean )
{
	
	
	m_TimeStamp = FileIO::GetFileLastWriteTime( m_Name );

	
	if ( ( m_TimeStamp < m_SourceFile->GetTimeStamp() ) ||
			( m_TimeStamp < m_Executable->GetTimeStamp() ) )
	{
		return true;
	}
	if ( forceClean )
	{
		return true;
	}
	return false;
}



 Node::BuildResult ExecNode::DoBuild( Job *  )
{
	
	const char * workingDir = m_WorkingDir.IsEmpty() ? nullptr : m_WorkingDir.Get();

	
	Process p;
	bool spawnOK = p.Spawn( m_Executable->GetName().Get(),
							m_Arguments.Get(),
							workingDir,
							FBuild::Get().GetEnvironmentString() );

	if ( !spawnOK )
	{
		do { FLog::Error( "Failed to spawn process for '%s'", GetName().Get() ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		return NODE_RESULT_FAILED;
	}

	
	AutoPtr< char > memOut;
	AutoPtr< char > memErr;
	uint32_t memOutSize = 0;
	uint32_t memErrSize = 0;
	p.ReadAllData( memOut, &memOutSize, memErr, &memErrSize );

	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	
	int result = p.WaitForExit();
	if ( result != 0 )
	{
		
		Node::DumpOutput( memOut.Get(), memOutSize );
		Node::DumpOutput( memErr.Get(), memErrSize );
	}

	
	if ( result != 0 )
	{
		do { FLog::Error( "Execution failed (error %i) '%s'", result, GetName().Get() ); __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
		return NODE_RESULT_FAILED;
	}

	
	m_TimeStamp = FileIO::GetFileLastWriteTime( m_Name );
	return NODE_RESULT_OK;
}



 const Array< Node * > & ExecNode::GetStaticDependencies() const
{
	return m_StaticDependencies;
}



 Node * ExecNode::Load( IOStream & stream, bool remote )
{
	(void)remote; AStackString<> fileName; if ( stream.Read( fileName ) == false ) { return nullptr; };
	(void)remote; AStackString<> sourceFile; if ( stream.Read( sourceFile ) == false ) { return nullptr; };
	(void)remote; AStackString<> executable; if ( stream.Read( executable ) == false ) { return nullptr; };
	(void)remote; AStackString<> arguments; if ( stream.Read( arguments ) == false ) { return nullptr; };
	(void)remote; AStackString<> workingDir; if ( stream.Read( workingDir ) == false ) { return nullptr; };

	NodeGraph & ng = FBuild::Get().GetDependencyGraph();
	Node * srcNode = ng.FindNode( sourceFile );
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); 
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	Node * execNode = ng.FindNode( executable );
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop)); 
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));
	Node * n = ng.CreateExecNode( fileName, 
								  (FileNode *)srcNode,
								  (FileNode *)execNode,
								  arguments.Get(),
								  workingDir.Get() );
	do { __pragma(warning(push)) __pragma(warning(disable:4127)) } while ( false ); __pragma(warning(pop));

	return n;
}



 bool ExecNode::Save( IOStream & stream ) const
{
	if ( stream.Write( m_Name ) == false ) { return false; };
	if ( stream.Write( m_SourceFile->GetName() ) == false ) { return false; };
	if ( stream.Write( m_Executable->GetName() ) == false ) { return false; };
	if ( stream.Write( m_Arguments ) == false ) { return false; };
	if ( stream.Write( m_WorkingDir ) == false ) { return false; };
	return true;
}


#line 21 "c:\\p4\\Code\\..\\tmp\\Unity\\Tools\\FBuild\\FBuildCore\\Unity1.cpp"
#line 1 "c:\\p4\\Code\\Tools\\FBuild\\FBuildCore\\Graph\\FileNode.cpp"














#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winapifamily.h"


















#pragma once
#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winapifamily.h"























#line 45 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winapifamily.h"











































#line 89 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winapifamily.h"
#line 2 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"




















#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"



















#pragma warning(push)
#line 22 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"
#pragma warning(disable:4001) 
#line 24 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"

#pragma once































































































































































#line 186 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"











#line 198 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"







#line 206 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"
#line 207 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"







#line 215 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"
#line 216 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"






#line 223 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"

#line 225 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"

#line 227 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"

#line 229 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"

#line 231 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"

#line 233 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"



#line 237 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"


#line 240 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"
#line 241 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"








#line 250 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"



#line 254 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"



#line 258 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"



#line 262 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"



#line 266 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"



#line 270 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"

#line 272 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"



#pragma warning(pop)


#line 279 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"
#line 280 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"

#line 282 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\sdkddkver.h"

#line 23 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"





#pragma once
#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"

#pragma region Application Family



















































#line 84 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"




















#line 105 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"



#line 109 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"



#line 113 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"



#line 117 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"



#line 121 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"



#line 125 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"





#line 131 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"




#line 136 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"
#line 137 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"







#line 145 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"
#line 146 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"



#pragma warning(disable:4514)

#pragma warning(disable:4103)
#line 153 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"

#pragma warning(push)
#line 156 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"
#pragma warning(disable:4001)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#line 160 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"
#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\excpt.h"














#pragma once




#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"














 





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 21 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\excpt.h"





#pragma pack(push,8)


extern "C" {
#line 31 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\excpt.h"




typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution,
    ExceptionContinueSearch,
    ExceptionNestedException,
    ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION;


























struct _EXCEPTION_RECORD;
struct _CONTEXT;
struct _DISPATCHER_CONTEXT;



 EXCEPTION_DISPOSITION __C_specific_handler (
      struct _EXCEPTION_RECORD * ExceptionRecord,
      void * EstablisherFrame,
      struct _CONTEXT * ContextRecord,
      struct _DISPATCHER_CONTEXT * DispatcherContext
);

#line 81 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\excpt.h"

#line 83 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\excpt.h"













unsigned long __cdecl _exception_code(void);
void *        __cdecl _exception_info(void);
int           __cdecl _abnormal_termination(void);













}
#line 114 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\excpt.h"

#pragma pack(pop)

#line 118 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\excpt.h"
#line 161 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"

#line 163 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"













#pragma once


extern "C" {
#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"





#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"











#pragma once

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"
















#pragma once
#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"



 

#line 25 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"
  
 #line 27 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"

 



  
 #line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"

 
  
  
 #line 39 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"

#line 41 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"





#line 47 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"


extern "C" {
#line 51 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"




























#line 80 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"












#line 93 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"








































































































#line 198 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"
#line 199 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"







































#line 239 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"





























#line 269 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"























































































#line 357 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"




















#line 378 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"





#line 384 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"


#line 387 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"



















































#line 439 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"










#line 450 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"








                                

}
#line 462 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"



























#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings_strict.h"




























#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings_strict.h"





























































































































































#pragma once
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings_undef.h"








































































































































































































































































































































































































































































#line 189 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings_strict.h"











































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1065 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings_strict.h"
































































#line 1130 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings_strict.h"






















































#line 1185 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings_strict.h"
#line 1186 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings_strict.h"
#line 1187 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings_strict.h"

#line 490 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"
#line 491 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"

















#line 509 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"




























































































































#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\sdv_driverspecs.h"





















#line 23 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\sdv_driverspecs.h"
#line 126 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"



#pragma once
#line 131 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"


extern "C" {
#line 135 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"

































































































#line 233 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"

    
    
    
    
    
    
    
    
    
    
    


#line 248 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"

    
    
    
    
    

    
    
    
    
    
    
    

    
    
    
    



    
    


    
    
    
    
    
    
    
    
    
    
    
    


    
    


    
    


    
    



    
    









    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    


    


    
    
    
    
    


    


    
    
    
    
    

    


    
    
    
    
    

    


    
    
    
    
    


    




    
    
    
    
    

    


    
    
    
    
    


    


    
    
    
    
    
    

    


    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    

    
    
    
    
    

    
    
    
    
    

    
    
    
    
    

    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    
    

    
    

    
    
    
    

    

    
    
    

    

    
    
    
    
    
    
    
    
    
    
    
    

    
    


    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    


    
    
    
    
     
    

    
    
        
        
        
        
    
    
    
    
    
    

    
    
    

    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    

    

    
    
    
    
    
    
    
    
    
    
    
#line 663 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"
    
#line 665 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"
    


    
    
    
    
    
    


    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    
    
    
    
    

    
    

    
    

    
    
    
    
    
    


    
    
    

    
    

    
    

    
    


    
    
    


    
    
    


    
    











































































    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

#line 850 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"

    
    
    

    
    
    


}
#line 862 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"

#line 864 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\driverspecs.h"


#line 511 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"












#line 524 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"

#line 526 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\specstrings.h"



#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"



#pragma region Application Family





#line 25 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"
#line 26 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"













#line 40 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"


extern "C" {
#line 44 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"







typedef unsigned long ULONG;
typedef ULONG *PULONG;
typedef unsigned short USHORT;
typedef USHORT *PUSHORT;
typedef unsigned char UCHAR;
typedef UCHAR *PUCHAR;
typedef   char *PSZ;
#line 59 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"













#line 73 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"



#line 77 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"



#line 81 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"



#line 85 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"



#line 89 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"












#line 102 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"






#line 109 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"



#line 113 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"
#line 114 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"


























#line 141 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"




#line 146 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"
#line 147 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"







#line 155 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"

typedef unsigned long       DWORD;
typedef int                 BOOL;
typedef unsigned char       BYTE;
typedef unsigned short      WORD;
typedef float               FLOAT;
typedef FLOAT               *PFLOAT;
typedef BOOL            *PBOOL;
typedef BOOL             *LPBOOL;
typedef BYTE            *PBYTE;
typedef BYTE             *LPBYTE;
typedef int             *PINT;
typedef int              *LPINT;
typedef WORD            *PWORD;
typedef WORD             *LPWORD;
typedef long             *LPLONG;
typedef DWORD           *PDWORD;
typedef DWORD            *LPDWORD;
typedef void             *LPVOID;
typedef const void       *LPCVOID;

typedef int                 INT;
typedef unsigned int        UINT;
typedef unsigned int        *PUINT;



#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





















#pragma warning(push)
#line 24 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma warning(disable:4201) 
#pragma warning(disable:4214) 


extern "C" {
#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"













#pragma once




#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"














 





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 20 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"


extern "C" {
#line 24 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"












#line 37 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"

#line 39 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"
#line 40 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"

 const unsigned short * __cdecl __pctype_func(void);

 extern const unsigned short *_pctype;


#line 47 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"
#line 48 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"
#line 49 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"





 extern const unsigned short _wctype[];
#line 56 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"

 const wctype_t * __cdecl __pwctype_func(void);

 extern const wctype_t *_pwctype;


#line 63 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"
#line 64 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"
#line 65 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"


#line 68 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"










                                













   int __cdecl _isctype(  int _C,   int _Type);
   int __cdecl _isctype_l(  int _C,   int _Type,   _locale_t _Locale);
    int __cdecl isalpha(  int _C);
   int __cdecl _isalpha_l(  int _C,   _locale_t _Locale);
    int __cdecl isupper(  int _C);
   int __cdecl _isupper_l(  int _C,   _locale_t _Locale);
    int __cdecl islower(  int _C);
   int __cdecl _islower_l(  int _C,   _locale_t _Locale);
    int __cdecl isdigit(  int _C);
   int __cdecl _isdigit_l(  int _C,   _locale_t _Locale);
   int __cdecl isxdigit(  int _C);
   int __cdecl _isxdigit_l(  int _C,   _locale_t _Locale);
    int __cdecl isspace(  int _C);
   int __cdecl _isspace_l(  int _C,   _locale_t _Locale);
   int __cdecl ispunct(  int _C);
   int __cdecl _ispunct_l(  int _C,   _locale_t _Locale);
    int __cdecl isalnum(  int _C);
   int __cdecl _isalnum_l(  int _C,   _locale_t _Locale);
   int __cdecl isprint(  int _C);
   int __cdecl _isprint_l(  int _C,   _locale_t _Locale);
   int __cdecl isgraph(  int _C);
   int __cdecl _isgraph_l(  int _C,   _locale_t _Locale);
   int __cdecl iscntrl(  int _C);
   int __cdecl _iscntrl_l(  int _C,   _locale_t _Locale);
    int __cdecl toupper(  int _C);
    int __cdecl tolower(  int _C);
    int __cdecl _tolower(  int _C);
   int __cdecl _tolower_l(  int _C,   _locale_t _Locale);
    int __cdecl _toupper(  int _C);
   int __cdecl _toupper_l(  int _C,   _locale_t _Locale);
   int __cdecl __isascii(  int _C);
   int __cdecl __toascii(  int _C);
   int __cdecl __iscsymf(  int _C);
   int __cdecl __iscsym(  int _C);

#line 128 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"







   int __cdecl iswalpha(  wint_t _C);
   int __cdecl _iswalpha_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswupper(  wint_t _C);
   int __cdecl _iswupper_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswlower(  wint_t _C);
   int __cdecl _iswlower_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswdigit(  wint_t _C);
   int __cdecl _iswdigit_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswxdigit(  wint_t _C);
   int __cdecl _iswxdigit_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswspace(  wint_t _C);
   int __cdecl _iswspace_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswpunct(  wint_t _C);
   int __cdecl _iswpunct_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswalnum(  wint_t _C);
   int __cdecl _iswalnum_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswprint(  wint_t _C);
   int __cdecl _iswprint_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswgraph(  wint_t _C);
   int __cdecl _iswgraph_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswcntrl(  wint_t _C);
   int __cdecl _iswcntrl_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswascii(  wint_t _C);

   wint_t __cdecl towupper(  wint_t _C);
   wint_t __cdecl _towupper_l(  wint_t _C,   _locale_t _Locale);
   wint_t __cdecl towlower(  wint_t _C);
   wint_t __cdecl _towlower_l(  wint_t _C,   _locale_t _Locale); 
   int __cdecl iswctype(  wint_t _C,   wctype_t _Type);
   int __cdecl _iswctype_l(  wint_t _C,   wctype_t _Type,   _locale_t _Locale);

   int __cdecl __iswcsymf(  wint_t _C);
   int __cdecl _iswcsymf_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl __iswcsym(  wint_t _C);
   int __cdecl _iswcsym_l(  wint_t _C,   _locale_t _Locale);


   int __cdecl isleadbyte(  int _C);
   int __cdecl _isleadbyte_l(  int _C,   _locale_t _Locale);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "iswctype" " instead. See online help for details."))  int __cdecl is_wctype(  wint_t _C,   wctype_t _Type);
#line 176 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"


#line 179 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"













#line 193 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"

#line 195 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"


 extern int __mb_cur_max;


#line 201 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"
 int __cdecl ___mb_cur_max_func(void);
 int __cdecl ___mb_cur_max_l_func(_locale_t);
#line 204 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"









#line 214 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"












































#line 259 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"






#line 266 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"


















































#line 317 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"


























#line 344 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"

#line 346 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"













#line 360 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"
















#line 377 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"

#line 379 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"


}
#line 383 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"

#line 385 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\ctype.h"
#line 32 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


















#line 51 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"









#line 61 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 62 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








#line 71 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





#line 77 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 78 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\kernelspecs.h"






































#pragma once
#line 41 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\kernelspecs.h"


extern "C" {
#line 45 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\kernelspecs.h"

    
    
    

    
    
    

    

#line 57 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\kernelspecs.h"
    
    
    #line 60 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\kernelspecs.h"
    

#line 63 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\kernelspecs.h"
    

#line 66 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\kernelspecs.h"

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    


    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    















}
#line 251 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\kernelspecs.h"

#line 253 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\kernelspecs.h"
#line 83 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



#line 87 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



#line 91 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 93 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"










#line 104 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




#line 109 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"










#line 120 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"









#line 130 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



#line 134 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








#line 143 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





#line 149 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"












#line 162 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"






















 
 typedef unsigned __int64 POINTER_64_INT;
 
  
 

#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"













#line 44 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"





#line 50 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"







#line 58 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"





#pragma once
#line 65 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"


extern "C" {
#line 69 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"

typedef signed char         INT8, *PINT8;
typedef signed short        INT16, *PINT16;
typedef signed int          INT32, *PINT32;
typedef signed __int64      INT64, *PINT64;
typedef unsigned char       UINT8, *PUINT8;
typedef unsigned short      UINT16, *PUINT16;
typedef unsigned int        UINT32, *PUINT32;
typedef unsigned __int64    UINT64, *PUINT64;





typedef signed int LONG32, *PLONG32;





typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;







#line 99 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"

















#line 117 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"



    typedef __int64 INT_PTR, *PINT_PTR;
    typedef unsigned __int64 UINT_PTR, *PUINT_PTR;

    typedef __int64 LONG_PTR, *PLONG_PTR;
    typedef unsigned __int64 ULONG_PTR, *PULONG_PTR;

    










#line 138 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"
#line 139 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"











typedef __int64 SHANDLE_PTR;
typedef unsigned __int64 HANDLE_PTR;
typedef unsigned int UHALF_PTR, *PUHALF_PTR;
typedef int HALF_PTR, *PHALF_PTR;


__inline
unsigned long
HandleToULong(
    const void *h
    )
{
    return((unsigned long) (ULONG_PTR) h );
}

__inline
long
HandleToLong(
    const void *h
    )
{
    return((long) (LONG_PTR) h );
}

__inline
void *
ULongToHandle(
    const unsigned long h
    )
{
    return((void *) (UINT_PTR) h );
}


__inline
void *
LongToHandle(
    const long h
    )
{
    return((void *) (INT_PTR) h );
}


__inline
unsigned long
PtrToUlong(
    const void  *p
    )
{
    return((unsigned long) (ULONG_PTR) p );
}

__inline
unsigned int
PtrToUint(
    const void  *p
    )
{
    return((unsigned int) (UINT_PTR) p );
}

__inline
unsigned short
PtrToUshort(
    const void  *p
    )
{
    return((unsigned short) (unsigned long) (ULONG_PTR) p );
}

__inline
long
PtrToLong(
    const void  *p
    )
{
    return((long) (LONG_PTR) p );
}

__inline
int
PtrToInt(
    const void  *p
    )
{
    return((int) (INT_PTR) p );
}

__inline
short
PtrToShort(
    const void  *p
    )
{
    return((short) (long) (LONG_PTR) p );
}

__inline
void *
IntToPtr(
    const int i
    )

{
    return( (void *)(INT_PTR)i );
}

__inline
void *
UIntToPtr(
    const unsigned int ui
    )

{
    return( (void *)(UINT_PTR)ui );
}

__inline
void *
LongToPtr(
    const long l
    )

{
    return( (void *)(LONG_PTR)l );
}

__inline
void *
ULongToPtr(
    const unsigned long ul
    )

{
    return( (void *)(ULONG_PTR)ul );
}






__inline
void *
Ptr32ToPtr(
    const void * __ptr32 p
    )
{
    return((void *) (ULONG_PTR) (unsigned long) p);
}

__inline
void *
Handle32ToHandle(
    const void * __ptr32 h
    )
{
    return((void *) (LONG_PTR) (long) h);
}

__inline
void * __ptr32
PtrToPtr32(
    const void *p
    )
{
    return((void * __ptr32) (unsigned long) (ULONG_PTR) p);
}



#line 323 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"




































































#line 392 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"























typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;









































#line 459 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"





typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;





typedef __int64 LONG64, *PLONG64;






typedef unsigned __int64 ULONG64, *PULONG64;
typedef unsigned __int64 DWORD64, *PDWORD64;







typedef ULONG_PTR KAFFINITY;
typedef KAFFINITY *PKAFFINITY;




}
#line 494 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"

#line 496 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\basetsd.h"
#line 164 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 171 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 178 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 179 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 186 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 187 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 194 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 195 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 202 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 203 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



#line 207 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 214 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 215 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 222 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 223 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 230 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 231 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 238 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 239 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




#line 244 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 246 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 247 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 254 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 255 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#line 262 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 263 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








#line 272 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 273 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"














#line 288 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"







typedef void *PVOID;
typedef void * __ptr64 PVOID64;








#line 306 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





#line 312 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
















#line 329 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"









typedef char CHAR;
typedef short SHORT;
typedef long LONG;

typedef int INT;
#line 344 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 345 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






typedef wchar_t WCHAR;    



#line 356 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef WCHAR *PWCHAR, *LPWCH, *PWCH;
typedef const WCHAR *LPCWCH, *PCWCH;

typedef   WCHAR *NWPSTR, *LPWSTR, *PWSTR;
typedef   PWSTR *PZPWSTR;
typedef   const PWSTR *PCZPWSTR;
typedef   WCHAR __unaligned *LPUWSTR, *PUWSTR;
typedef   const WCHAR *LPCWSTR, *PCWSTR;
typedef   PCWSTR *PZPCWSTR;
typedef   const WCHAR __unaligned *LPCUWSTR, *PCUWSTR;

typedef   WCHAR *PZZWSTR;
typedef   const WCHAR *PCZZWSTR;
typedef   WCHAR __unaligned *PUZZWSTR;
typedef   const WCHAR __unaligned *PCUZZWSTR;

typedef  WCHAR *PNZWCH;
typedef  const WCHAR *PCNZWCH;
typedef  WCHAR __unaligned *PUNZWCH;
typedef  const WCHAR __unaligned *PCUNZWCH;



typedef const WCHAR *LPCWCHAR, *PCWCHAR;
typedef const WCHAR __unaligned *LPCUWCHAR, *PCUWCHAR;





typedef unsigned long UCSCHAR;



















typedef UCSCHAR *PUCSCHAR;
typedef const UCSCHAR *PCUCSCHAR;

typedef UCSCHAR *PUCSSTR;
typedef UCSCHAR __unaligned *PUUCSSTR;

typedef const UCSCHAR *PCUCSSTR;
typedef const UCSCHAR __unaligned *PCUUCSSTR;

typedef UCSCHAR __unaligned *PUUCSCHAR;
typedef const UCSCHAR __unaligned *PCUUCSCHAR;

#line 420 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





typedef CHAR *PCHAR, *LPCH, *PCH;
typedef const CHAR *LPCCH, *PCCH;

typedef   CHAR *NPSTR, *LPSTR, *PSTR;
typedef   PSTR *PZPSTR;
typedef   const PSTR *PCZPSTR;
typedef   const CHAR *LPCSTR, *PCSTR;
typedef   PCSTR *PZPCSTR;

typedef   CHAR *PZZSTR;
typedef   const CHAR *PCZZSTR;

typedef  CHAR *PNZCH;
typedef  const CHAR *PCNZCH;

































typedef char TCHAR, *PTCHAR;
typedef unsigned char TBYTE , *PTBYTE ;

#line 476 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef LPCH LPTCH, PTCH;
typedef LPCCH LPCTCH, PCTCH;
typedef LPSTR PTSTR, LPTSTR, PUTSTR, LPUTSTR;
typedef LPCSTR PCTSTR, LPCTSTR, PCUTSTR, LPCUTSTR;
typedef PZZSTR PZZTSTR, PUZZTSTR;
typedef PCZZSTR PCZZTSTR, PCUZZTSTR;
typedef PZPSTR PZPTSTR;
typedef PNZCH PNZTCH, PUNZTCH;
typedef PCNZCH PCNZTCH, PCUNZTCH;


#line 489 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



typedef SHORT *PSHORT;  
typedef LONG *PLONG;    








typedef struct _PROCESSOR_NUMBER {
    WORD   Group;
    BYTE  Number;
    BYTE  Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER;






typedef struct _GROUP_AFFINITY {
    KAFFINITY Mask;
    WORD   Group;
    WORD   Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY;






typedef void *HANDLE;


#line 528 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 530 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



#line 534 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
typedef HANDLE *PHANDLE;





typedef BYTE   FCHAR;
typedef WORD   FSHORT;
typedef DWORD  FLONG;








typedef   long HRESULT;
#line 553 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 554 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


    


#line 560 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"









#line 570 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"













#line 584 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




























typedef char CCHAR;          
typedef DWORD LCID;         
typedef PDWORD PLCID;       
typedef WORD   LANGID;      








typedef enum {
    UNSPECIFIED_COMPARTMENT_ID = 0,
    DEFAULT_COMPARTMENT_ID
} COMPARTMENT_ID, *PCOMPARTMENT_ID;

#line 630 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"























#line 654 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
typedef struct _FLOAT128 {
    __int64 LowPart;
    __int64 HighPart;
} FLOAT128;

typedef FLOAT128 *PFLOAT128;










typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;


















#line 691 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;



typedef LONGLONG USN;



#line 702 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
typedef union _LARGE_INTEGER {
    struct {
        DWORD LowPart;
        LONG HighPart;
    } ;
    struct {
        DWORD LowPart;
        LONG HighPart;
    } u;
#line 712 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
    LONGLONG QuadPart;
} LARGE_INTEGER;

typedef LARGE_INTEGER *PLARGE_INTEGER;



#line 720 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
typedef union _ULARGE_INTEGER {
    struct {
        DWORD LowPart;
        DWORD HighPart;
    } ;
    struct {
        DWORD LowPart;
        DWORD HighPart;
    } u;
#line 730 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
    ULONGLONG QuadPart;
} ULARGE_INTEGER;

typedef ULARGE_INTEGER *PULARGE_INTEGER;









typedef struct _LUID {
    DWORD LowPart;
    LONG HighPart;
} LUID, *PLUID;


typedef ULONGLONG  DWORDLONG;
typedef DWORDLONG *PDWORDLONG;






























































































































#line 880 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






extern "C" {
#line 888 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








unsigned char
__cdecl
_rotl8 (
      unsigned char Value,
      unsigned char Shift
    );

unsigned short
__cdecl
_rotl16 (
      unsigned short Value,
      unsigned char Shift
    );

unsigned char
__cdecl
_rotr8 (
      unsigned char Value,
      unsigned char Shift
    );

unsigned short
__cdecl
_rotr16 (
      unsigned short Value,
      unsigned char Shift
    );

#pragma intrinsic(_rotl8)
#pragma intrinsic(_rotl16)
#pragma intrinsic(_rotr8)
#pragma intrinsic(_rotr16)

#line 930 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








unsigned int
__cdecl
_rotl (
      unsigned int Value,
      int Shift
    );

unsigned __int64
__cdecl
_rotl64 (
      unsigned __int64 Value,
      int Shift
    );

unsigned int
__cdecl
_rotr (
      unsigned int Value,
      int Shift
    );

unsigned __int64
__cdecl
_rotr64 (
      unsigned __int64 Value,
      int Shift
    );

#pragma intrinsic(_rotl)
#pragma intrinsic(_rotl64)
#pragma intrinsic(_rotr)
#pragma intrinsic(_rotr64)

#line 972 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


}
#line 976 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





typedef BYTE  BOOLEAN;           
typedef BOOLEAN *PBOOLEAN;       





typedef struct _LIST_ENTRY {
   struct _LIST_ENTRY *Flink;
   struct _LIST_ENTRY *Blink;
} LIST_ENTRY, *PLIST_ENTRY, * PRLIST_ENTRY;






typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY;






typedef struct LIST_ENTRY32 {
    DWORD Flink;
    DWORD Blink;
} LIST_ENTRY32;
typedef LIST_ENTRY32 *PLIST_ENTRY32;

typedef struct LIST_ENTRY64 {
    ULONGLONG Flink;
    ULONGLONG Blink;
} LIST_ENTRY64;
typedef LIST_ENTRY64 *PLIST_ENTRY64;


#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"




















#line 22 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
typedef struct _GUID {
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[ 8 ];
} GUID;
#line 29 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"




































#line 67 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"








typedef GUID *LPGUID;
#line 77 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"



typedef const GUID *LPCGUID;
#line 82 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"




typedef GUID IID;
typedef IID *LPIID;


typedef GUID CLSID;
typedef CLSID *LPCLSID;


typedef GUID FMTID;
typedef FMTID *LPFMTID;







#line 104 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"







#line 112 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 113 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"







#line 121 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 122 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"







#line 130 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 131 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"







#line 139 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 140 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"

#line 142 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"




#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"














#pragma once




#line 1 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\crtdefs.h"














 





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 21 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"


extern "C" {
#line 25 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"




#line 30 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
















 void *  __cdecl _memccpy(   void * _Dst,   const void * _Src,   int _Val,   size_t _MaxCount);
   const void *  __cdecl memchr(   const void * _Buf ,   int _Val,   size_t _MaxCount);
   int     __cdecl _memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
   int     __cdecl _memicmp_l(  const void * _Buf1,   const void * _Buf2,   size_t _Size,   _locale_t _Locale);
  int     __cdecl memcmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);

 

void *  __cdecl memcpy(  void * _Dst,   const void * _Src,   size_t _Size);

 errno_t  __cdecl memcpy_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);





















#line 79 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"










#line 90 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
#line 91 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
         
        
        void *  __cdecl memset(  void * _Dst,   int _Val,   size_t _Size);



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_memccpy" ". See online help for details."))  void * __cdecl memccpy(  void * _Dst,   const void * _Src,   int _Val,   size_t _Size);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_memicmp" ". See online help for details."))  int __cdecl memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
#line 100 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

#line 102 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

  errno_t __cdecl _strset_s(  char * _Dst,   size_t _DstSize,   int _Value);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strset_s(  char (&_Dest)[_Size],   int _Value) throw() { return _strset_s(_Dest, _Size, _Value); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strset( char *_Dest,  int _Value);

  errno_t __cdecl strcpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);
#line 109 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl strcpy_s(  char (&_Dest)[_Size],   const char * _Source) throw() { return strcpy_s(_Dest, _Size, _Source); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strcpy( char *_Dest,  const char * _Source);

  errno_t __cdecl strcat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);
#line 114 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl strcat_s(  char (&_Dest)[_Size],   const char * _Source) throw() { return strcat_s(_Dest, _Size, _Source); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strcat( char *_Dest,  const char * _Source);
          int     __cdecl strcmp(  const char * _Str1,   const char * _Str2);
          size_t  __cdecl strlen(  const char * _Str);
  


size_t  __cdecl strnlen(  const char * _Str,   size_t _MaxCount);

  static __inline


size_t  __cdecl strnlen_s(  const char * _Str,   size_t _MaxCount)
{
    return (_Str==0) ? 0 : strnlen(_Str, _MaxCount);
}
#line 131 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

  errno_t __cdecl memmove_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);
#line 134 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

  void *  __cdecl memmove(  void * _Dst,   const void * _Src,   size_t _Size);




#line 141 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

   char *  __cdecl _strdup(  const char * _Src);



#line 147 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

   const char *  __cdecl strchr(  const char * _Str,   int _Val);
   int     __cdecl _stricmp(   const char * _Str1,    const char * _Str2);
   int     __cdecl _strcmpi(   const char * _Str1,    const char * _Str2);
   int     __cdecl _stricmp_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
   int     __cdecl strcoll(   const char * _Str1,    const  char * _Str2);
   int     __cdecl _strcoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
   int     __cdecl _stricoll(   const char * _Str1,    const char * _Str2);
   int     __cdecl _stricoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
   int     __cdecl _strncoll  (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strncoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
   int     __cdecl _strnicoll (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strnicoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
   size_t  __cdecl strcspn(   const char * _Str,    const char * _Control);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char *  __cdecl _strerror(  const char * _ErrMsg);
  errno_t __cdecl _strerror_s(  char * _Buf,   size_t _SizeInBytes,   const char * _ErrMsg);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strerror_s(char (&_Buffer)[_Size],   const char * _ErrorMessage) throw() { return _strerror_s(_Buffer, _Size, _ErrorMessage); } }
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char *  __cdecl strerror(  int);

  errno_t __cdecl strerror_s(  char * _Buf,   size_t _SizeInBytes,   int _ErrNum);
#line 168 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl strerror_s(char (&_Buffer)[_Size],   int _ErrorMessage) throw() { return strerror_s(_Buffer, _Size, _ErrorMessage); } }
  errno_t __cdecl _strlwr_s(  char * _Str,   size_t _Size);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strlwr_s(  char (&_String)[_Size]) throw() { return _strlwr_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strlwr( char *_String);
  errno_t __cdecl _strlwr_s_l(  char * _Str,   size_t _Size,   _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strlwr_s_l(  char (&_String)[_Size],   _locale_t _Locale) throw() { return _strlwr_s_l(_String, _Size, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strlwr_l(  char *_String,   _locale_t _Locale);

  errno_t __cdecl strncat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);
#line 178 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl strncat_s(  char (&_Dest)[_Size],   const char * _Source,   size_t _Count) throw() { return strncat_s(_Dest, _Size, _Source, _Count); } }
#pragma warning(push)
#pragma warning(disable:6059)

__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strncat(  char *_Dest,   const char * _Source,   size_t _Count);
#pragma warning(pop)
   int     __cdecl strncmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strnicmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strnicmp_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);

  errno_t __cdecl strncpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);
#line 190 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl strncpy_s(char (&_Dest)[_Size],   const char * _Source,   size_t _Count) throw() { return strncpy_s(_Dest, _Size, _Source, _Count); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strncpy(    char *_Dest,   const char * _Source,   size_t _Count);
  errno_t __cdecl _strnset_s(  char * _Str,   size_t _SizeInBytes,   int _Val,   size_t _MaxCount);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strnset_s(  char (&_Dest)[_Size],   int _Val,   size_t _Count) throw() { return _strnset_s(_Dest, _Size, _Val, _Count); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strnset(  char *_Dest,   int _Val,   size_t _Count);
   const char *  __cdecl strpbrk(  const char * _Str,   const char * _Control);
   const char *  __cdecl strrchr(  const char * _Str,   int _Ch);
 char *  __cdecl _strrev(  char * _Str);
   size_t  __cdecl strspn(  const char * _Str,   const char * _Control);
     const char *  __cdecl strstr(  const char * _Str,   const char * _SubStr);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "strtok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char *  __cdecl strtok(  char * _Str,   const char * _Delim);

   char *  __cdecl strtok_s(  char * _Str,   const char * _Delim,     char ** _Context);
#line 204 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
  errno_t __cdecl _strupr_s(  char * _Str,   size_t _Size);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strupr_s(  char (&_String)[_Size]) throw() { return _strupr_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strupr( char *_String);
  errno_t __cdecl _strupr_s_l(  char * _Str,   size_t _Size, _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strupr_s_l(  char (&_String)[_Size], _locale_t _Locale) throw() { return _strupr_s_l(_String, _Size, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strupr_l(  char *_String,   _locale_t _Locale);
  size_t  __cdecl strxfrm (    char * _Dst,   const char * _Src,   size_t _MaxCount);
  size_t  __cdecl _strxfrm_l(    char * _Dst,   const char * _Src,   size_t _MaxCount,   _locale_t _Locale);


extern "C++" {


  inline char * __cdecl strchr(  char * _Str,   int _Ch)
	{ return (char*)strchr((const char*)_Str, _Ch); }
  inline char * __cdecl strpbrk(  char * _Str,   const char * _Control)
	{ return (char*)strpbrk((const char*)_Str, _Control); }
  inline char * __cdecl strrchr(  char * _Str,   int _Ch)
	{ return (char*)strrchr((const char*)_Str, _Ch); }
    inline char * __cdecl strstr(  char * _Str,   const char * _SubStr)
	{ return (char*)strstr((const char*)_Str, _SubStr); }
#line 226 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"


  inline void * __cdecl memchr(  void * _Pv,   int _C,   size_t _N)
	{ return (void*)memchr((const void*)_Pv, _C, _N); }
#line 231 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
}
#line 233 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"






#line 240 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strdup" ". See online help for details."))  char * __cdecl strdup(  const char * _Src);



#line 246 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"


  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strcmpi" ". See online help for details."))  int __cdecl strcmpi(  const char * _Str1,   const char * _Str2);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_stricmp" ". See online help for details."))  int __cdecl stricmp(  const char * _Str1,   const char * _Str2);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strlwr" ". See online help for details."))  char * __cdecl strlwr(  char * _Str);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strnicmp" ". See online help for details."))  int __cdecl strnicmp(  const char * _Str1,   const char * _Str,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strnset" ". See online help for details."))  char * __cdecl strnset(  char * _Str,   int _Val,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strrev" ". See online help for details."))  char * __cdecl strrev(  char * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strset" ". See online help for details."))         char * __cdecl strset(  char * _Str,   int _Val);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strupr" ". See online help for details."))  char * __cdecl strupr(  char * _Str);

#line 258 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"









#line 268 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

   wchar_t * __cdecl _wcsdup(  const wchar_t * _Str);



#line 274 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"


  errno_t __cdecl wcscat_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src);
#line 278 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcscat_s(  wchar_t (&_Dest)[_Size],   const wchar_t * _Source) throw() { return wcscat_s(_Dest, _Size, _Source); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcscat( wchar_t *_Dest,  const wchar_t * _Source);
 

 const wchar_t * __cdecl wcschr(  const wchar_t * _Str, wchar_t _Ch);
   int __cdecl wcscmp(  const wchar_t * _Str1,   const wchar_t * _Str2);

  errno_t __cdecl wcscpy_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src);
#line 287 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcscpy_s(wchar_t (&_Dest)[_Size],   const wchar_t * _Source) throw() { return wcscpy_s(_Dest, _Size, _Source); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcscpy( wchar_t *_Dest,  const wchar_t * _Source);
   size_t __cdecl wcscspn(  const wchar_t * _Str,   const wchar_t * _Control);
   size_t __cdecl wcslen(  const wchar_t * _Str);
  


size_t __cdecl wcsnlen(  const wchar_t * _Src,   size_t _MaxCount);

  static __inline


size_t __cdecl wcsnlen_s(  const wchar_t * _Src,   size_t _MaxCount)
{
    return (_Src == 0) ? 0 : wcsnlen(_Src, _MaxCount);
}
#line 304 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

  errno_t __cdecl wcsncat_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src,   rsize_t _MaxCount);
#line 307 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcsncat_s(  wchar_t (&_Dest)[_Size],   const wchar_t * _Source,   size_t _Count) throw() { return wcsncat_s(_Dest, _Size, _Source, _Count); } }
#pragma warning(push)
#pragma warning(disable:6059)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcsncat(  wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
#pragma warning(pop)
   int __cdecl wcsncmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);

  errno_t __cdecl wcsncpy_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src,   rsize_t _MaxCount);
#line 316 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcsncpy_s(wchar_t (&_Dest)[_Size],   const wchar_t * _Source,   size_t _Count) throw() { return wcsncpy_s(_Dest, _Size, _Source, _Count); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcsncpy(    wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
   const wchar_t * __cdecl wcspbrk(  const wchar_t * _Str,   const wchar_t * _Control);
   const wchar_t * __cdecl wcsrchr(  const wchar_t * _Str,   wchar_t _Ch);
   size_t __cdecl wcsspn(  const wchar_t * _Str,   const wchar_t * _Control);
   

 const wchar_t * __cdecl wcsstr(  const wchar_t * _Str,   const wchar_t * _SubStr);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl wcstok(  wchar_t * _Str,   const wchar_t * _Delim);

   wchar_t * __cdecl wcstok_s(  wchar_t * _Str,   const wchar_t * _Delim,     wchar_t ** _Context);
#line 328 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcserror(  int _ErrNum);
  errno_t __cdecl _wcserror_s(  wchar_t * _Buf,   size_t _SizeInWords,   int _ErrNum);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcserror_s(wchar_t (&_Buffer)[_Size],   int _Error) throw() { return _wcserror_s(_Buffer, _Size, _Error); } }
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "__wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl __wcserror(  const wchar_t * _Str);
  errno_t __cdecl __wcserror_s(  wchar_t * _Buffer,   size_t _SizeInWords,   const wchar_t * _ErrMsg);
extern "C++" { template <size_t _Size> inline errno_t __cdecl __wcserror_s(wchar_t (&_Buffer)[_Size],   const wchar_t * _ErrorMessage) throw() { return __wcserror_s(_Buffer, _Size, _ErrorMessage); } }

   int __cdecl _wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
   int __cdecl _wcsicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
   int __cdecl _wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
   int __cdecl _wcsnicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
  errno_t __cdecl _wcsnset_s(  wchar_t * _Dst,   size_t _SizeInWords,   wchar_t _Val,   size_t _MaxCount);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsnset_s(  wchar_t (&_Dst)[_Size], wchar_t _Val,   size_t _MaxCount) throw() { return _wcsnset_s(_Dst, _Size, _Val, _MaxCount); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcsnset(  wchar_t *_Str, wchar_t _Val,   size_t _MaxCount);
 wchar_t * __cdecl _wcsrev(  wchar_t * _Str);
  errno_t __cdecl _wcsset_s(  wchar_t * _Dst,   size_t _SizeInWords,   wchar_t _Value);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsset_s(  wchar_t (&_Str)[_Size], wchar_t _Val) throw() { return _wcsset_s(_Str, _Size, _Val); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcsset(  wchar_t *_Str, wchar_t _Val);

  errno_t __cdecl _wcslwr_s(  wchar_t * _Str,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcslwr_s(  wchar_t (&_String)[_Size]) throw() { return _wcslwr_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcslwr( wchar_t *_String);
  errno_t __cdecl _wcslwr_s_l(  wchar_t * _Str,   size_t _SizeInWords,   _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcslwr_s_l(  wchar_t (&_String)[_Size],   _locale_t _Locale) throw() { return _wcslwr_s_l(_String, _Size, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcslwr_l(  wchar_t *_String,   _locale_t _Locale);
  errno_t __cdecl _wcsupr_s(  wchar_t * _Str,   size_t _Size);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsupr_s(  wchar_t (&_String)[_Size]) throw() { return _wcsupr_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcsupr( wchar_t *_String);
  errno_t __cdecl _wcsupr_s_l(  wchar_t * _Str,   size_t _Size,   _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsupr_s_l(  wchar_t (&_String)[_Size],   _locale_t _Locale) throw() { return _wcsupr_s_l(_String, _Size, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  wchar_t * __cdecl _wcsupr_l(  wchar_t *_String,   _locale_t _Locale);
  size_t __cdecl wcsxfrm(    wchar_t * _Dst,   const wchar_t * _Src,   size_t _MaxCount);
  size_t __cdecl _wcsxfrm_l(    wchar_t * _Dst,   const wchar_t *_Src,   size_t _MaxCount,   _locale_t _Locale);
   int __cdecl wcscoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
   int __cdecl _wcscoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
   int __cdecl _wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
   int __cdecl _wcsicoll_l(  const wchar_t * _Str1,   const wchar_t *_Str2,   _locale_t _Locale);
   int __cdecl _wcsncoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
   int __cdecl _wcsncoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
   int __cdecl _wcsnicoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
   int __cdecl _wcsnicoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);




extern "C++" {
 

        inline wchar_t * __cdecl wcschr(  wchar_t *_Str, wchar_t _Ch)
        {return ((wchar_t *)wcschr((const wchar_t *)_Str, _Ch)); }
  inline wchar_t * __cdecl wcspbrk(  wchar_t *_Str,   const wchar_t *_Control)
        {return ((wchar_t *)wcspbrk((const wchar_t *)_Str, _Control)); }
  inline wchar_t * __cdecl wcsrchr(  wchar_t *_Str,   wchar_t _Ch)
        {return ((wchar_t *)wcsrchr((const wchar_t *)_Str, _Ch)); }
   

        inline wchar_t * __cdecl wcsstr(  wchar_t *_Str,   const wchar_t *_SubStr)
        {return ((wchar_t *)wcsstr((const wchar_t *)_Str, _SubStr)); }
}
#line 388 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"
#line 389 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"






#line 396 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsdup" ". See online help for details."))  wchar_t * __cdecl wcsdup(  const wchar_t * _Str);



#line 402 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"





  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsicmp" ". See online help for details."))  int __cdecl wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsnicmp" ". See online help for details."))  int __cdecl wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsnset" ". See online help for details."))  wchar_t * __cdecl wcsnset(  wchar_t * _Str,   wchar_t _Val,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsrev" ". See online help for details."))  wchar_t * __cdecl wcsrev(  wchar_t * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsset" ". See online help for details."))  wchar_t * __cdecl wcsset(  wchar_t * _Str, wchar_t _Val);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcslwr" ". See online help for details."))  wchar_t * __cdecl wcslwr(  wchar_t * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsupr" ". See online help for details."))  wchar_t * __cdecl wcsupr(  wchar_t * _Str);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsicoll" ". See online help for details."))  int __cdecl wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);

#line 417 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"


#line 420 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"



}
#line 425 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

#line 427 "c:\\p4\\External\\SDK\\VS11.0\\VC\\include\\string.h"

#line 147 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"



__inline int InlineIsEqualGUID(const GUID & rguid1, const GUID & rguid2)
{
   return (
      ((unsigned long *) &rguid1)[0] == ((unsigned long *) &rguid2)[0] &&
      ((unsigned long *) &rguid1)[1] == ((unsigned long *) &rguid2)[1] &&
      ((unsigned long *) &rguid1)[2] == ((unsigned long *) &rguid2)[2] &&
      ((unsigned long *) &rguid1)[3] == ((unsigned long *) &rguid2)[3]);
}

__inline int IsEqualGUID(const GUID & rguid1, const GUID & rguid2)
{
    return !memcmp(&rguid1, &rguid2, sizeof(GUID));
}











#line 175 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"

















__inline bool operator==(const GUID & guidOne, const GUID & guidOther)
{
    return !!IsEqualGUID(guidOne,guidOther);
}

__inline bool operator!=(const GUID & guidOne, const GUID & guidOther)
{
    return !(guidOne == guidOther);
}
#line 202 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 203 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 204 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 205 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 206 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\guiddef.h"
#line 1021 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




typedef struct  _OBJECTID {     
    GUID Lineage;
    DWORD Uniquifier;
} OBJECTID;
#line 1030 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








































































#pragma region Application Family




extern "C++" 
template <typename T, size_t N>
char (*RtlpNumberOf( __unaligned T (&)[N] ))[N];



#line 1119 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion











































#line 1164 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





#line 1170 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"









































#line 1212 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

























typedef
 

EXCEPTION_DISPOSITION
__stdcall
EXCEPTION_ROUTINE (
      struct _EXCEPTION_RECORD *ExceptionRecord,
      PVOID EstablisherFrame,
      struct _CONTEXT *ContextRecord,
      PVOID DispatcherContext
    );

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;























































































































































































































































































































































































































































































































































































































































































































































































#line 2010 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
























#line 2035 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





















#line 2057 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"















  
























































#line 2130 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
  
#line 2132 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 2133 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





typedef ULONG_PTR KSPIN_LOCK;
typedef KSPIN_LOCK *PKSPIN_LOCK;






typedef struct __declspec(align(16)) _M128A {
    ULONGLONG Low;
    LONGLONG High;
} M128A, *PM128A;





typedef struct __declspec(align(16)) _XSAVE_FORMAT {
    WORD   ControlWord;
    WORD   StatusWord;
    BYTE  TagWord;
    BYTE  Reserved1;
    WORD   ErrorOpcode;
    DWORD ErrorOffset;
    WORD   ErrorSelector;
    WORD   Reserved2;
    DWORD DataOffset;
    WORD   DataSelector;
    WORD   Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];



    M128A XmmRegisters[16];
    BYTE  Reserved4[96];













#line 2189 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

} XSAVE_FORMAT, *PXSAVE_FORMAT;

typedef struct __declspec(align(8)) _XSAVE_AREA_HEADER {
    DWORD64 Mask;
    DWORD64 Reserved[7];
} XSAVE_AREA_HEADER, *PXSAVE_AREA_HEADER;

typedef struct __declspec(align(16)) _XSAVE_AREA {
    XSAVE_FORMAT LegacyState;
    XSAVE_AREA_HEADER Header;
} XSAVE_AREA, *PXSAVE_AREA;

typedef struct _XSTATE_CONTEXT {
    DWORD64 Mask;
    DWORD Length;
    DWORD Reserved1;
      PXSAVE_AREA Area;



#line 2211 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

    PVOID Buffer;



#line 2217 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

} XSTATE_CONTEXT, *PXSTATE_CONTEXT;





typedef struct _SCOPE_TABLE_AMD64 {
    DWORD Count;
    struct
    {
        DWORD BeginAddress;
        DWORD EndAddress;
        DWORD HandlerAddress;
        DWORD JumpTarget;
    } ScopeRecord[1];
} SCOPE_TABLE_AMD64, *PSCOPE_TABLE_AMD64;












extern "C" {
#line 2248 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"























 
BOOLEAN
_bittest (
      LONG const *Base,
      LONG Offset
    );

BOOLEAN
_bittestandcomplement (
      LONG *Base,
      LONG Offset
    );

BOOLEAN
_bittestandset (
      LONG *Base,
      LONG Offset
    );

BOOLEAN
_bittestandreset (
      LONG *Base,
      LONG Offset
    );

BOOLEAN
_interlockedbittestandset (
       LONG volatile *Base,
      LONG Offset
    );

BOOLEAN
_interlockedbittestandreset (
       LONG volatile *Base,
      LONG Offset
    );

BOOLEAN
_bittest64 (
      LONG64 const *Base,
      LONG64 Offset
    );

BOOLEAN
_bittestandcomplement64 (
      LONG64 *Base,
      LONG64 Offset
    );

BOOLEAN
_bittestandset64 (
      LONG64 *Base,
      LONG64 Offset
    );

BOOLEAN
_bittestandreset64 (
      LONG64 *Base,
      LONG64 Offset
    );

BOOLEAN
_interlockedbittestandset64 (
       LONG64 volatile *Base,
      LONG64 Offset
    );

BOOLEAN
_interlockedbittestandreset64 (
       LONG64 volatile *Base,
      LONG64 Offset
    );

#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandreset)

#pragma intrinsic(_bittest64)
#pragma intrinsic(_bittestandcomplement64)
#pragma intrinsic(_bittestandset64)
#pragma intrinsic(_bittestandreset64)
#pragma intrinsic(_interlockedbittestandset64)
#pragma intrinsic(_interlockedbittestandreset64)










 
BOOLEAN
_BitScanForward (
      DWORD *Index,
      DWORD Mask
    );

 
BOOLEAN
_BitScanReverse (
      DWORD *Index,
      DWORD Mask
    );

 
BOOLEAN
_BitScanForward64 (
      DWORD *Index,
      DWORD64 Mask
    );

 
BOOLEAN
_BitScanReverse64 (
      DWORD *Index,
      DWORD64 Mask
    );

#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)
#pragma intrinsic(_BitScanForward64)
#pragma intrinsic(_BitScanReverse64)













































































































SHORT
_InterlockedIncrement16 (
       SHORT volatile *Addend
    );

SHORT
_InterlockedDecrement16 (
       SHORT volatile *Addend
    );

SHORT
_InterlockedCompareExchange16 (
       SHORT volatile *Destination,
      SHORT ExChange,
      SHORT Comperand
    );

LONG
_InterlockedAnd (
       LONG volatile *Destination,
      LONG Value
    );

LONG
_InterlockedOr (
       LONG volatile *Destination,
      LONG Value
    );

LONG
_InterlockedXor (
       LONG volatile *Destination,
      LONG Value
    );

LONG64
_InterlockedAnd64 (
       LONG64 volatile *Destination,
      LONG64 Value
    );

LONG64
_InterlockedOr64 (
       LONG64 volatile *Destination,
      LONG64 Value
    );

LONG64
_InterlockedXor64 (
       LONG64 volatile *Destination,
      LONG64 Value
    );

LONG
_InterlockedIncrement (
       LONG volatile *Addend
    );

LONG
_InterlockedDecrement (
       LONG volatile *Addend
    );

LONG
_InterlockedExchange (
       LONG volatile *Target,
      LONG Value
    );

LONG
_InterlockedExchangeAdd (
       LONG volatile *Addend,
      LONG Value
    );



__forceinline
LONG
_InterlockedAdd (
       LONG volatile *Addend,
      LONG Value
    )

{
    return _InterlockedExchangeAdd(Addend, Value) + Value;
}

#line 2597 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

LONG
_InterlockedCompareExchange (
       LONG volatile *Destination,
      LONG ExChange,
      LONG Comperand
    );

LONG64
_InterlockedIncrement64 (
       LONG64 volatile *Addend
    );

LONG64
_InterlockedDecrement64 (
       LONG64 volatile *Addend
    );

LONG64
_InterlockedExchange64 (
       LONG64 volatile *Target,
      LONG64 Value
    );

LONG64
_InterlockedExchangeAdd64 (
       LONG64 volatile *Addend,
      LONG64 Value
    );



__forceinline
LONG64
_InterlockedAdd64 (
       LONG64 volatile *Addend,
      LONG64 Value
    )

{
    return _InterlockedExchangeAdd64(Addend, Value) + Value;
}

#line 2641 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

LONG64
_InterlockedCompareExchange64 (
       LONG64 volatile *Destination,
      LONG64 ExChange,
      LONG64 Comperand
    );

BOOLEAN
_InterlockedCompareExchange128 (
       LONG64 volatile *Destination,
      LONG64 ExchangeHigh,
      LONG64 ExchangeLow,
      LONG64 *ComparandResult
    );

  PVOID
_InterlockedCompareExchangePointer (
      
#line 2662 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
     PVOID volatile *Destination,
      PVOID Exchange,
      PVOID Comperand
    );

  PVOID
_InterlockedExchangePointer(
      
#line 2672 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
     PVOID volatile *Target,
      PVOID Value
    );

#pragma intrinsic(_InterlockedIncrement16)
#pragma intrinsic(_InterlockedDecrement16)
#pragma intrinsic(_InterlockedCompareExchange16)
#pragma intrinsic(_InterlockedAnd)
#pragma intrinsic(_InterlockedOr)
#pragma intrinsic(_InterlockedXor)
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedExchange)
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedCompareExchange)
#pragma intrinsic(_InterlockedAnd64)
#pragma intrinsic(_InterlockedOr64)
#pragma intrinsic(_InterlockedXor64)
#pragma intrinsic(_InterlockedIncrement64)
#pragma intrinsic(_InterlockedDecrement64)
#pragma intrinsic(_InterlockedExchange64)
#pragma intrinsic(_InterlockedExchangeAdd64)
#pragma intrinsic(_InterlockedCompareExchange64)



#pragma intrinsic(_InterlockedCompareExchange128)

#line 2701 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#pragma intrinsic(_InterlockedExchangePointer)
#pragma intrinsic(_InterlockedCompareExchangePointer)






CHAR
_InterlockedExchange8 (
       CHAR volatile *Target,
      CHAR Value
    );

SHORT
_InterlockedExchange16 (
       SHORT volatile *Destination,
      SHORT ExChange
    );

#pragma intrinsic(_InterlockedExchange8)
#pragma intrinsic(_InterlockedExchange16)

#line 2726 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"










char
_InterlockedAnd8 (
       char volatile *Destination,
      char Value
    );

char
_InterlockedOr8 (
       char volatile *Destination,
      char Value
    );

char
_InterlockedXor8 (
       char volatile *Destination,
      char Value
    );

SHORT
_InterlockedAnd16(
       SHORT volatile *Destination,
      SHORT Value
    );

SHORT
_InterlockedOr16(
       SHORT volatile *Destination,
      SHORT Value
    );

SHORT
_InterlockedXor16(
       SHORT volatile *Destination,
      SHORT Value
    );

#pragma intrinsic (_InterlockedAnd8)
#pragma intrinsic (_InterlockedOr8)
#pragma intrinsic (_InterlockedXor8)
#pragma intrinsic (_InterlockedAnd16)
#pragma intrinsic (_InterlockedOr16)
#pragma intrinsic (_InterlockedXor16)

#line 2780 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"







void
_mm_clflush (
      void const *Address
    );

#pragma intrinsic(_mm_clflush)



void
_ReadWriteBarrier (
    void
    );

#pragma intrinsic(_ReadWriteBarrier)















void
__faststorefence (
    void
    );



void
_mm_lfence (
    void
    );

void
_mm_mfence (
    void
    );

void
_mm_sfence (
    void
    );

void
_mm_pause (
    void
    );

void
_mm_prefetch (
      CHAR const *a,
      int sel
    );

void
_m_prefetchw (
      volatile const void *Source
    );












#pragma intrinsic(__faststorefence)



#pragma intrinsic(_mm_pause)
#pragma intrinsic(_mm_prefetch)
#pragma intrinsic(_mm_lfence)
#pragma intrinsic(_mm_mfence)
#pragma intrinsic(_mm_sfence)
#pragma intrinsic(_m_prefetchw)























unsigned int
_mm_getcsr (
    void
    );

void
_mm_setcsr (
      unsigned int MxCsr
    );

#pragma intrinsic(_mm_getcsr)
#pragma intrinsic(_mm_setcsr)







unsigned __int32
__getcallerseflags (
    void
    );

#pragma intrinsic(__getcallerseflags)







DWORD
__segmentlimit (
      DWORD Selector
    );

#pragma intrinsic(__segmentlimit)







DWORD64
__readpmc (
      DWORD Counter
    );

#pragma intrinsic(__readpmc)







DWORD64
__rdtsc (
    void
    );

#pragma intrinsic(__rdtsc)





void
__movsb (
      PBYTE  Destination,
      BYTE  const *Source,
      SIZE_T Count
    );

void
__movsw (
      PWORD   Destination,
      WORD   const *Source,
      SIZE_T Count
    );

void
__movsd (
      PDWORD Destination,
      DWORD const *Source,
      SIZE_T Count
    );

void
__movsq (
      PDWORD64 Destination,
      DWORD64 const *Source,
      SIZE_T Count
    );

#pragma intrinsic(__movsb)
#pragma intrinsic(__movsw)
#pragma intrinsic(__movsd)
#pragma intrinsic(__movsq)





void
__stosb (
      PBYTE  Destination,
      BYTE  Value,
      SIZE_T Count
    );

void
__stosw (
      PWORD   Destination,
      WORD   Value,
      SIZE_T Count
    );

void
__stosd (
      PDWORD Destination,
      DWORD Value,
      SIZE_T Count
    );

void
__stosq (
      PDWORD64 Destination,
      DWORD64 Value,
      SIZE_T Count
    );

#pragma intrinsic(__stosb)
#pragma intrinsic(__stosw)
#pragma intrinsic(__stosd)
#pragma intrinsic(__stosq)








LONGLONG
__mulh (
      LONG64 Multiplier,
      LONG64 Multiplicand
    );

ULONGLONG
__umulh (
      DWORD64 Multiplier,
      DWORD64 Multiplicand
    );

#pragma intrinsic(__mulh)
#pragma intrinsic(__umulh)







DWORD64
__popcnt64 (
      DWORD64 operand
    );



#pragma intrinsic(__popcnt64)

#line 3076 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








DWORD64
__shiftleft128 (
      DWORD64 LowPart,
      DWORD64 HighPart,
      BYTE  Shift
    );

DWORD64
__shiftright128 (
      DWORD64 LowPart,
      DWORD64 HighPart,
      BYTE  Shift
    );

#pragma intrinsic(__shiftleft128)
#pragma intrinsic(__shiftright128)







LONG64
_mul128 (
      LONG64 Multiplier,
      LONG64 Multiplicand,
      LONG64 *HighProduct
    );

#pragma intrinsic(_mul128)





DWORD64
_umul128 (
      DWORD64 Multiplier,
      DWORD64 Multiplicand,
      DWORD64 *HighProduct
    );

#pragma intrinsic(_umul128)

#line 3130 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

__forceinline
LONG64
MultiplyExtract128 (
      LONG64 Multiplier,
      LONG64 Multiplicand,
      BYTE  Shift
    )

{

    LONG64 extractedProduct;
    LONG64 highProduct;
    LONG64 lowProduct;
    BOOLEAN negate;
    DWORD64 uhighProduct;
    DWORD64 ulowProduct;

    lowProduct = _mul128(Multiplier, Multiplicand, &highProduct);
    negate = 0;
    uhighProduct = (DWORD64)highProduct;
    ulowProduct = (DWORD64)lowProduct;
    if (highProduct < 0) {
        negate = 1;
        uhighProduct = (DWORD64)(-highProduct);
        ulowProduct = (DWORD64)(-lowProduct);
        if (ulowProduct != 0) {
            uhighProduct -= 1;
        }
    }

    extractedProduct = (LONG64)__shiftright128(ulowProduct, uhighProduct, Shift);
    if (negate != 0) {
        extractedProduct = -extractedProduct;
    }

    return extractedProduct;
}

__forceinline
DWORD64
UnsignedMultiplyExtract128 (
      DWORD64 Multiplier,
      DWORD64 Multiplicand,
      BYTE  Shift
    )

{

    DWORD64 extractedProduct;
    DWORD64 highProduct;
    DWORD64 lowProduct;

    lowProduct = _umul128(Multiplier, Multiplicand, &highProduct);
    extractedProduct = __shiftright128(lowProduct, highProduct, Shift);
    return extractedProduct;
}





BYTE 
__readgsbyte (
      DWORD Offset
    );

WORD  
__readgsword (
      DWORD Offset
    );

DWORD
__readgsdword (
      DWORD Offset
    );

DWORD64
__readgsqword (
      DWORD Offset
    );

void
__writegsbyte (
      DWORD Offset,
      BYTE  Data
    );

void
__writegsword (
      DWORD Offset,
      WORD   Data
    );

void
__writegsdword (
      DWORD Offset,
      DWORD Data
    );

void
__writegsqword (
      DWORD Offset,
      DWORD64 Data
    );

#pragma intrinsic(__readgsbyte)
#pragma intrinsic(__readgsword)
#pragma intrinsic(__readgsdword)
#pragma intrinsic(__readgsqword)
#pragma intrinsic(__writegsbyte)
#pragma intrinsic(__writegsword)
#pragma intrinsic(__writegsdword)
#pragma intrinsic(__writegsqword)



void
__incgsbyte (
      DWORD Offset
    );

void
__addgsbyte (
      DWORD Offset,
      BYTE  Value
    );

void
__incgsword (
      DWORD Offset
    );

void
__addgsword (
      DWORD Offset,
      WORD   Value
    );

void
__incgsdword (
      DWORD Offset
    );

void
__addgsdword (
      DWORD Offset,
      DWORD Value
    );

void
__incgsqword (
      DWORD Offset
    );

void
__addgsqword (
      DWORD Offset,
      DWORD64 Value
    );










#line 3301 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 3303 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



}
#line 3308 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 3310 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"












































#line 3355 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"











typedef XSAVE_FORMAT XMM_SAVE_AREA32, *PXMM_SAVE_AREA32;




































typedef struct __declspec(align(16)) _CONTEXT {

    
    
    
    
    
    

    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;

    
    
    

    DWORD ContextFlags;
    DWORD MxCsr;

    
    
    

    WORD   SegCs;
    WORD   SegDs;
    WORD   SegEs;
    WORD   SegFs;
    WORD   SegGs;
    WORD   SegSs;
    DWORD EFlags;

    
    
    

    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;

    
    
    

    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;

    
    
    

    DWORD64 Rip;

    
    
    

    union {
        XMM_SAVE_AREA32 FltSave;
        struct {
            M128A Header[2];
            M128A Legacy[8];
            M128A Xmm0;
            M128A Xmm1;
            M128A Xmm2;
            M128A Xmm3;
            M128A Xmm4;
            M128A Xmm5;
            M128A Xmm6;
            M128A Xmm7;
            M128A Xmm8;
            M128A Xmm9;
            M128A Xmm10;
            M128A Xmm11;
            M128A Xmm12;
            M128A Xmm13;
            M128A Xmm14;
            M128A Xmm15;
        } ;
    } ;

    
    
    

    M128A VectorRegister[26];
    DWORD64 VectorControl;

    
    
    

    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT;





typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY RUNTIME_FUNCTION, *PRUNTIME_FUNCTION;
typedef SCOPE_TABLE_AMD64 SCOPE_TABLE, *PSCOPE_TABLE;




















typedef struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
} UNWIND_HISTORY_TABLE_ENTRY, *PUNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE  LocalHint;
    BYTE  GlobalHint;
    BYTE  Search;
    BYTE  Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
} UNWIND_HISTORY_TABLE, *PUNWIND_HISTORY_TABLE;





typedef

PRUNTIME_FUNCTION
GET_RUNTIME_FUNCTION_CALLBACK (
      DWORD64 ControlPc,
      PVOID Context
    );
typedef GET_RUNTIME_FUNCTION_CALLBACK *PGET_RUNTIME_FUNCTION_CALLBACK;

typedef

DWORD   
OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK (
      HANDLE Process,
      PVOID TableAddress,
      PDWORD Entries,
      PRUNTIME_FUNCTION* Functions
    );
typedef OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK *POUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK;








typedef struct _DISPATCHER_CONTEXT {
    DWORD64 ControlPc;
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
    DWORD64 EstablisherFrame;
    DWORD64 TargetIp;
    PCONTEXT ContextRecord;
    PEXCEPTION_ROUTINE LanguageHandler;
    PVOID HandlerData;
    PUNWIND_HISTORY_TABLE HistoryTable;
    DWORD ScopeIndex;
    DWORD Fill0;
} DISPATCHER_CONTEXT, *PDISPATCHER_CONTEXT;





struct _EXCEPTION_POINTERS;
typedef
LONG
(*PEXCEPTION_FILTER) (
    struct _EXCEPTION_POINTERS *ExceptionPointers,
    PVOID EstablisherFrame
    );

typedef
void
(*PTERMINATION_HANDLER) (
    BOOLEAN _abnormal_termination,
    PVOID EstablisherFrame
    );






typedef struct _KNONVOLATILE_CONTEXT_POINTERS {
    union {
        PM128A FloatingContext[16];
        struct {
            PM128A Xmm0;
            PM128A Xmm1;
            PM128A Xmm2;
            PM128A Xmm3;
            PM128A Xmm4;
            PM128A Xmm5;
            PM128A Xmm6;
            PM128A Xmm7;
            PM128A Xmm8;
            PM128A Xmm9;
            PM128A Xmm10;
            PM128A Xmm11;
            PM128A Xmm12;
            PM128A Xmm13;
            PM128A Xmm14;
            PM128A Xmm15;
        } ;
    } ;

    union {
        PDWORD64 IntegerContext[16];
        struct {
            PDWORD64 Rax;
            PDWORD64 Rcx;
            PDWORD64 Rdx;
            PDWORD64 Rbx;
            PDWORD64 Rsp;
            PDWORD64 Rbp;
            PDWORD64 Rsi;
            PDWORD64 Rdi;
            PDWORD64 R8;
            PDWORD64 R9;
            PDWORD64 R10;
            PDWORD64 R11;
            PDWORD64 R12;
            PDWORD64 R13;
            PDWORD64 R14;
            PDWORD64 R15;
        } ;
    } ;

} KNONVOLATILE_CONTEXT_POINTERS, *PKNONVOLATILE_CONTEXT_POINTERS;

#line 3681 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





typedef struct _SCOPE_TABLE_ARM {
    DWORD Count;
    struct
    {
        DWORD BeginAddress;
        DWORD EndAddress;
        DWORD HandlerAddress;
        DWORD JumpTarget;
    } ScopeRecord[1];
} SCOPE_TABLE_ARM, *PSCOPE_TABLE_ARM;













































































































































































































































































































































































































































































































































































































































































































































































































































































































































































extern "C" {
#line 4639 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


















#line 4658 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





void
__int2c (
    void
    );

#pragma intrinsic(__int2c)





#line 4675 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 4677 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"























































































#line 4765 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 4766 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


}
#line 4770 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"











































































































































































































































































































































































































































































































































































































































































































































typedef struct _LDT_ENTRY {
    WORD    LimitLow;
    WORD    BaseLow;
    union {
        struct {
            BYTE    BaseMid;
            BYTE    Flags1;     
            BYTE    Flags2;     
            BYTE    BaseHi;
        } Bytes;
        struct {
            DWORD   BaseMid : 8;
            DWORD   Type : 5;
            DWORD   Dpl : 2;
            DWORD   Pres : 1;
            DWORD   LimitHi : 4;
            DWORD   Sys : 1;
            DWORD   Reserved_0 : 1;
            DWORD   Default_Big : 1;
            DWORD   Granularity : 1;
            DWORD   BaseHi : 8;
        } Bits;
    } HighWord;
} LDT_ENTRY, *PLDT_ENTRY;

#line 5511 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 6713 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


























































































































































#line 6868 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
































































































































































































































































































































































































































































































































extern "C" {
#line 7382 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

__forceinline
CHAR
ReadAcquire8 (
       CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = *Source;
    return Value;
}

__forceinline
CHAR
ReadNoFence8 (
       CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = *Source;
    return Value;
}

__forceinline
void
WriteRelease8 (
       CHAR volatile *Destination,
      CHAR Value
    )

{

    *Destination = Value;
    return;
}

__forceinline
void
WriteNoFence8 (
       CHAR volatile *Destination,
      CHAR Value
    )

{

    *Destination = Value;
    return;
}

__forceinline
SHORT
ReadAcquire16 (
       SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = *Source;
    return Value;
}

__forceinline
SHORT
ReadNoFence16 (
       SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = *Source;
    return Value;
}

__forceinline
void
WriteRelease16 (
       SHORT volatile *Destination,
      SHORT Value
    )

{

    *Destination = Value;
    return;
}

__forceinline
void
WriteNoFence16 (
       SHORT volatile *Destination,
      SHORT Value
    )

{

    *Destination = Value;
    return;
}

__forceinline
LONG
ReadAcquire (
       LONG const volatile *Source
    )

{

    LONG Value;

    Value = *Source;
    return Value;
}

__forceinline
LONG
ReadNoFence (
       LONG const volatile *Source
    )

{

    LONG Value;

    Value = *Source;
    return Value;
}

__forceinline
void
WriteRelease (
       LONG volatile *Destination,
      LONG Value
    )

{

    *Destination = Value;
    return;
}

__forceinline
void
WriteNoFence (
       LONG volatile *Destination,
      LONG Value
    )

{

    *Destination = Value;
    return;
}

__forceinline
LONG64
ReadAcquire64 (
       LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = *Source;
    return Value;
}

__forceinline
LONG64
ReadNoFence64 (
       LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = *Source;
    return Value;
}

__forceinline
void
WriteRelease64 (
       LONG64 volatile *Destination,
      LONG64 Value
    )

{

    *Destination = Value;
    return;
}

__forceinline
void
WriteNoFence64 (
       LONG64 volatile *Destination,
      LONG64 Value
    )

{

    *Destination = Value;
    return;
}


}
#line 7602 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 7604 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





__forceinline
CHAR
ReadRaw8 (
       CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = *(CHAR *)Source;
    return Value;
}

__forceinline
void
WriteRaw8 (
       CHAR volatile *Destination,
      CHAR Value
    )

{

    *(CHAR *)Destination = Value;
    return;
}

__forceinline
SHORT
ReadRaw16 (
       SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = *(SHORT *)Source;
    return Value;
}

__forceinline
void
WriteRaw16 (
       SHORT volatile *Destination,
      SHORT Value
    )

{

    *(SHORT *)Destination = Value;
    return;
}

__forceinline
LONG
ReadRaw (
       LONG const volatile *Source
    )

{

    LONG Value;

    Value = *(LONG *)Source;
    return Value;
}

__forceinline
void
WriteRaw (
       LONG volatile *Destination,
      LONG Value
    )

{

    *(LONG *)Destination = Value;
    return;
}

__forceinline
LONG64
ReadRaw64 (
       LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = *(LONG64 *)Source;
    return Value;
}

__forceinline
void
WriteRaw64 (
       LONG64 volatile *Destination,
      LONG64 Value
    )

{

    *(LONG64 *)Destination = Value;
    return;
}





__forceinline
BYTE 
ReadUCharAcquire (
       BYTE  const volatile *Source
    )

{

    return (BYTE )ReadAcquire8((PCHAR)Source);
}

__forceinline
BYTE 
ReadUCharNoFence (
       BYTE  const volatile *Source
    )

{

    return (BYTE )ReadNoFence8((PCHAR)Source);
}

__forceinline
BYTE 
ReadUCharRaw (
       BYTE  const volatile *Source
    )

{

    return (BYTE )ReadRaw8((PCHAR)Source);
}

__forceinline
void
WriteUCharRelease (
       BYTE  volatile *Destination,
      BYTE  Value
    )

{

    WriteRelease8((PCHAR)Destination, (CHAR)Value);
    return;
}

__forceinline
void
WriteUCharNoFence (
       BYTE  volatile *Destination,
      BYTE  Value
    )

{

    WriteNoFence8((PCHAR)Destination, (CHAR)Value);
    return;
}

__forceinline
void
WriteUCharRaw (
       BYTE  volatile *Destination,
      BYTE  Value
    )

{

    WriteRaw8((PCHAR)Destination, (CHAR)Value);
    return;
}

__forceinline
WORD  
ReadUShortAcquire (
       WORD   const volatile *Source
    )

{

    return (WORD  )ReadAcquire16((PSHORT)Source);
}

__forceinline
WORD  
ReadUShortNoFence (
       WORD   const volatile *Source
    )

{

    return (WORD  )ReadNoFence16((PSHORT)Source);
}

__forceinline
WORD  
ReadUShortRaw (
       WORD   const volatile *Source
    )

{

    return (WORD  )ReadRaw16((PSHORT)Source);
}

__forceinline
void
WriteUShortRelease (
       WORD   volatile *Destination,
      WORD   Value
    )

{

    WriteRelease16((PSHORT)Destination, (SHORT)Value);
    return;
}

__forceinline
void
WriteUShortNoFence (
       WORD   volatile *Destination,
      WORD   Value
    )

{

    WriteNoFence16((PSHORT)Destination, (SHORT)Value);
    return;
}

__forceinline
void
WriteUShortRaw (
       WORD   volatile *Destination,
      WORD   Value
    )

{

    WriteRaw16((PSHORT)Destination, (SHORT)Value);
    return;
}

__forceinline
DWORD
ReadULongAcquire (
       DWORD const volatile *Source
    )

{

    return (DWORD)ReadAcquire((PLONG)Source);
}

__forceinline
DWORD
ReadULongNoFence (
       DWORD const volatile *Source
    )

{

    return (DWORD)ReadNoFence((PLONG)Source);
}

__forceinline
DWORD
ReadULongRaw (
       DWORD const volatile *Source
    )

{

    return (DWORD)ReadRaw((PLONG)Source);
}

__forceinline
void
WriteULongRelease (
       DWORD volatile *Destination,
      DWORD Value
    )

{

    WriteRelease((PLONG)Destination, (LONG)Value);
    return;
}

__forceinline
void
WriteULongNoFence (
       DWORD volatile *Destination,
      DWORD Value
    )

{

    WriteNoFence((PLONG)Destination, (LONG)Value);
    return;
}

__forceinline
void
WriteULongRaw (
       DWORD volatile *Destination,
      DWORD Value
    )

{

    WriteRaw((PLONG)Destination, (LONG)Value);
    return;
}

__forceinline
DWORD64
ReadULong64Acquire (
       DWORD64 const volatile *Source
    )

{

    return (DWORD64)ReadAcquire64((PLONG64)Source);
}

__forceinline
DWORD64
ReadULong64NoFence (
       DWORD64 const volatile *Source
    )

{

    return (DWORD64)ReadNoFence64((PLONG64)Source);
}

__forceinline
DWORD64
ReadULong64Raw (
       DWORD64 const volatile *Source
    )

{

    return (DWORD64)ReadRaw64((PLONG64)Source);
}

__forceinline
void
WriteULong64Release (
       DWORD64 volatile *Destination,
      DWORD64 Value
    )

{

    WriteRelease64((PLONG64)Destination, (LONG64)Value);
    return;
}

__forceinline
void
WriteULong64NoFence (
       DWORD64 volatile *Destination,
      DWORD64 Value
    )

{

    WriteNoFence64((PLONG64)Destination, (LONG64)Value);
    return;
}

__forceinline
void
WriteULong64Raw (
       DWORD64 volatile *Destination,
      DWORD64 Value
    )

{

    WriteRaw64((PLONG64)Destination, (LONG64)Value);
    return;
}















































































































#line 8120 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

__forceinline
PVOID
ReadPointerAcquire (
       PVOID const volatile *Source
    )

{

    return (PVOID)ReadAcquire64((PLONG64)Source);
}

__forceinline
PVOID
ReadPointerNoFence (
       PVOID const volatile *Source
    )

{

    return (PVOID)ReadNoFence64((PLONG64)Source);
}

__forceinline
PVOID
ReadPointerRaw (
       PVOID const volatile *Source
    )

{

    return (PVOID)ReadRaw64((PLONG64)Source);
}

__forceinline
void
WritePointerRelease (
       PVOID volatile *Destination,
      PVOID Value
    )

{

    WriteRelease64((PLONG64)Destination, (LONG64)Value);
    return;
}

__forceinline
void
WritePointerNoFence (
       PVOID volatile *Destination,
      PVOID Value
    )

{

    WriteNoFence64((PLONG64)Destination, (LONG64)Value);
    return;
}

__forceinline
void
WritePointerRaw (
       PVOID volatile *Destination,
      PVOID Value
    )

{

    WriteRaw64((PLONG64)Destination, (LONG64)Value);
    return;
}

























#line 8218 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 8220 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


#line 8223 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


























#line 8250 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"









typedef struct _WOW64_FLOATING_SAVE_AREA {
    DWORD   ControlWord;
    DWORD   StatusWord;
    DWORD   TagWord;
    DWORD   ErrorOffset;
    DWORD   ErrorSelector;
    DWORD   DataOffset;
    DWORD   DataSelector;
    BYTE    RegisterArea[80];
    DWORD   Cr0NpxState;
} WOW64_FLOATING_SAVE_AREA;

typedef WOW64_FLOATING_SAVE_AREA *PWOW64_FLOATING_SAVE_AREA;

#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack4.h"























#pragma warning(disable:4103)

#pragma pack(push,4)


#line 30 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack4.h"


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack4.h"
#line 34 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack4.h"
#line 8274 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"











typedef struct _WOW64_CONTEXT {

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    DWORD ContextFlags;

    
    
    
    
    

    DWORD   Dr0;
    DWORD   Dr1;
    DWORD   Dr2;
    DWORD   Dr3;
    DWORD   Dr6;
    DWORD   Dr7;

    
    
    
    

    WOW64_FLOATING_SAVE_AREA FloatSave;

    
    
    
    

    DWORD   SegGs;
    DWORD   SegFs;
    DWORD   SegEs;
    DWORD   SegDs;

    
    
    
    

    DWORD   Edi;
    DWORD   Esi;
    DWORD   Ebx;
    DWORD   Edx;
    DWORD   Ecx;
    DWORD   Eax;

    
    
    
    

    DWORD   Ebp;
    DWORD   Eip;
    DWORD   SegCs;              
    DWORD   EFlags;             
    DWORD   Esp;
    DWORD   SegSs;

    
    
    
    
    

    BYTE    ExtendedRegisters[512];

} WOW64_CONTEXT;

typedef WOW64_CONTEXT *PWOW64_CONTEXT;

#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


























#pragma warning(disable:4103)

#pragma pack(pop)


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


#line 36 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 37 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 8374 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


typedef struct _WOW64_LDT_ENTRY {
    WORD    LimitLow;
    WORD    BaseLow;
    union {
        struct {
            BYTE    BaseMid;
            BYTE    Flags1;     
            BYTE    Flags2;     
            BYTE    BaseHi;
        } Bytes;
        struct {
            DWORD   BaseMid : 8;
            DWORD   Type : 5;
            DWORD   Dpl : 2;
            DWORD   Pres : 1;
            DWORD   LimitHi : 4;
            DWORD   Sys : 1;
            DWORD   Reserved_0 : 1;
            DWORD   Default_Big : 1;
            DWORD   Granularity : 1;
            DWORD   BaseHi : 8;
        } Bits;
    } HighWord;
} WOW64_LDT_ENTRY, *PWOW64_LDT_ENTRY;

typedef struct _WOW64_DESCRIPTOR_TABLE_ENTRY {
    DWORD Selector;
    WOW64_LDT_ENTRY Descriptor;
} WOW64_DESCRIPTOR_TABLE_ENTRY, *PWOW64_DESCRIPTOR_TABLE_ENTRY;






















typedef struct _EXCEPTION_RECORD {
    DWORD    ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
    } EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD32 {
    DWORD    ExceptionCode;
    DWORD ExceptionFlags;
    DWORD ExceptionRecord;
    DWORD ExceptionAddress;
    DWORD NumberParameters;
    DWORD ExceptionInformation[15];
} EXCEPTION_RECORD32, *PEXCEPTION_RECORD32;

typedef struct _EXCEPTION_RECORD64 {
    DWORD    ExceptionCode;
    DWORD ExceptionFlags;
    DWORD64 ExceptionRecord;
    DWORD64 ExceptionAddress;
    DWORD NumberParameters;
    DWORD __unusedAlignment;
    DWORD64 ExceptionInformation[15];
} EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;





typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;

















#line 8483 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef PVOID PACCESS_TOKEN;            
typedef PVOID PSECURITY_DESCRIPTOR;     
typedef PVOID PSID;     
typedef PVOID PCLAIMS_BLOB;     







































typedef DWORD ACCESS_MASK;
typedef ACCESS_MASK *PACCESS_MASK;























































typedef struct _GENERIC_MAPPING {
    ACCESS_MASK GenericRead;
    ACCESS_MASK GenericWrite;
    ACCESS_MASK GenericExecute;
    ACCESS_MASK GenericAll;
} GENERIC_MAPPING;
typedef GENERIC_MAPPING *PGENERIC_MAPPING;












#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack4.h"























#pragma warning(disable:4103)

#pragma pack(push,4)


#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack4.h"


#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack4.h"
#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack4.h"
#line 8604 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct _LUID_AND_ATTRIBUTES {
    LUID Luid;
    DWORD Attributes;
    } LUID_AND_ATTRIBUTES, * PLUID_AND_ATTRIBUTES;
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"


























#pragma warning(disable:4103)

#pragma pack(pop)


#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"


#line 36 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"
#line 37 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"
#line 8613 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


































typedef struct _SID_IDENTIFIER_AUTHORITY {
    BYTE  Value[6];
} SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY;
#line 8651 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




typedef struct _SID {
   BYTE  Revision;
   BYTE  SubAuthorityCount;
   SID_IDENTIFIER_AUTHORITY IdentifierAuthority;



   DWORD SubAuthority[1];
#line 8664 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
} SID, *PISID;
#line 8666 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





                                                



#line 8676 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


typedef enum _SID_NAME_USE {
    SidTypeUser = 1,
    SidTypeGroup,
    SidTypeDomain,
    SidTypeAlias,
    SidTypeWellKnownGroup,
    SidTypeDeletedAccount,
    SidTypeInvalid,
    SidTypeUnknown,
    SidTypeComputer,
    SidTypeLabel
} SID_NAME_USE, *PSID_NAME_USE;

typedef struct _SID_AND_ATTRIBUTES {



    PSID Sid;
#line 8697 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
    DWORD Attributes;
    } SID_AND_ATTRIBUTES, * PSID_AND_ATTRIBUTES;

typedef SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES_ARRAY[1];
typedef SID_AND_ATTRIBUTES_ARRAY *PSID_AND_ATTRIBUTES_ARRAY;


typedef ULONG_PTR SID_HASH_ENTRY, *PSID_HASH_ENTRY;

typedef struct _SID_AND_ATTRIBUTES_HASH {
    DWORD SidCount;
    PSID_AND_ATTRIBUTES SidAttr;
    SID_HASH_ENTRY Hash[32];
} SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH;


















































































































































































































































































































































typedef enum {

    WinNullSid                                  = 0,
    WinWorldSid                                 = 1,
    WinLocalSid                                 = 2,
    WinCreatorOwnerSid                          = 3,
    WinCreatorGroupSid                          = 4,
    WinCreatorOwnerServerSid                    = 5,
    WinCreatorGroupServerSid                    = 6,
    WinNtAuthoritySid                           = 7,
    WinDialupSid                                = 8,
    WinNetworkSid                               = 9,
    WinBatchSid                                 = 10,
    WinInteractiveSid                           = 11,
    WinServiceSid                               = 12,
    WinAnonymousSid                             = 13,
    WinProxySid                                 = 14,
    WinEnterpriseControllersSid                 = 15,
    WinSelfSid                                  = 16,
    WinAuthenticatedUserSid                     = 17,
    WinRestrictedCodeSid                        = 18,
    WinTerminalServerSid                        = 19,
    WinRemoteLogonIdSid                         = 20,
    WinLogonIdsSid                              = 21,
    WinLocalSystemSid                           = 22,
    WinLocalServiceSid                          = 23,
    WinNetworkServiceSid                        = 24,
    WinBuiltinDomainSid                         = 25,
    WinBuiltinAdministratorsSid                 = 26,
    WinBuiltinUsersSid                          = 27,
    WinBuiltinGuestsSid                         = 28,
    WinBuiltinPowerUsersSid                     = 29,
    WinBuiltinAccountOperatorsSid               = 30,
    WinBuiltinSystemOperatorsSid                = 31,
    WinBuiltinPrintOperatorsSid                 = 32,
    WinBuiltinBackupOperatorsSid                = 33,
    WinBuiltinReplicatorSid                     = 34,
    WinBuiltinPreWindows2000CompatibleAccessSid = 35,
    WinBuiltinRemoteDesktopUsersSid             = 36,
    WinBuiltinNetworkConfigurationOperatorsSid  = 37,
    WinAccountAdministratorSid                  = 38,
    WinAccountGuestSid                          = 39,
    WinAccountKrbtgtSid                         = 40,
    WinAccountDomainAdminsSid                   = 41,
    WinAccountDomainUsersSid                    = 42,
    WinAccountDomainGuestsSid                   = 43,
    WinAccountComputersSid                      = 44,
    WinAccountControllersSid                    = 45,
    WinAccountCertAdminsSid                     = 46,
    WinAccountSchemaAdminsSid                   = 47,
    WinAccountEnterpriseAdminsSid               = 48,
    WinAccountPolicyAdminsSid                   = 49,
    WinAccountRasAndIasServersSid               = 50,
    WinNTLMAuthenticationSid                    = 51,
    WinDigestAuthenticationSid                  = 52,
    WinSChannelAuthenticationSid                = 53,
    WinThisOrganizationSid                      = 54,
    WinOtherOrganizationSid                     = 55,
    WinBuiltinIncomingForestTrustBuildersSid    = 56,
    WinBuiltinPerfMonitoringUsersSid            = 57,
    WinBuiltinPerfLoggingUsersSid               = 58,
    WinBuiltinAuthorizationAccessSid            = 59,
    WinBuiltinTerminalServerLicenseServersSid   = 60,
    WinBuiltinDCOMUsersSid                      = 61,
    WinBuiltinIUsersSid                         = 62,
    WinIUserSid                                 = 63,
    WinBuiltinCryptoOperatorsSid                = 64,
    WinUntrustedLabelSid                        = 65,
    WinLowLabelSid                              = 66,
    WinMediumLabelSid                           = 67,
    WinHighLabelSid                             = 68,
    WinSystemLabelSid                           = 69,
    WinWriteRestrictedCodeSid                   = 70,
    WinCreatorOwnerRightsSid                    = 71,
    WinCacheablePrincipalsGroupSid              = 72,
    WinNonCacheablePrincipalsGroupSid           = 73,
    WinEnterpriseReadonlyControllersSid         = 74,
    WinAccountReadonlyControllersSid            = 75,
    WinBuiltinEventLogReadersGroup              = 76,
    WinNewEnterpriseReadonlyControllersSid      = 77,
    WinBuiltinCertSvcDComAccessGroup            = 78,
    WinMediumPlusLabelSid                       = 79,
    WinLocalLogonSid                            = 80,
    WinConsoleLogonSid                          = 81,
    WinThisOrganizationCertificateSid           = 82,
    WinApplicationPackageAuthoritySid           = 83,
    WinBuiltinAnyPackageSid                     = 84,
    WinCapabilityInternetClientSid              = 85,
    WinCapabilityInternetClientServerSid        = 86,
    WinCapabilityPrivateNetworkClientServerSid  = 87,
    WinCapabilityPicturesLibrarySid             = 88,
    WinCapabilityVideosLibrarySid               = 89,
    WinCapabilityMusicLibrarySid                = 90,
    WinCapabilityDocumentsLibrarySid            = 91,
    WinCapabilitySharedUserCertificatesSid      = 92,
    WinCapabilityEnterpriseAuthenticationSid    = 93,
    WinCapabilityRemovableStorageSid            = 94,
    WinBuiltinRDSRemoteAccessServersSid         = 95,
    WinBuiltinRDSEndpointServersSid             = 96,
    WinBuiltinRDSManagementServersSid           = 97,
    WinUserModeDriversSid                       = 98,
    WinBuiltinHyperVAdminsSid                   = 99,
    WinAccountCloneableControllersSid           = 100,
    WinBuiltinAccessControlAssistanceOperatorsSid = 101,
    WinBuiltinRemoteManagementUsersSid          = 102,
    WinAuthenticationAuthorityAssertedSid       = 103,
    WinAuthenticationServiceAssertedSid         = 104,
} WELL_KNOWN_SID_TYPE;
































































































typedef struct _ACL {
    BYTE  AclRevision;
    BYTE  Sbz1;
    WORD   AclSize;
    WORD   AceCount;
    WORD   Sbz2;
} ACL;
typedef ACL *PACL;






















typedef struct _ACE_HEADER {
    BYTE  AceType;
    BYTE  AceFlags;
    WORD   AceSize;
} ACE_HEADER;
typedef ACE_HEADER *PACE_HEADER;











































































































typedef struct _ACCESS_ALLOWED_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
} ACCESS_ALLOWED_ACE;

typedef ACCESS_ALLOWED_ACE *PACCESS_ALLOWED_ACE;

typedef struct _ACCESS_DENIED_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
} ACCESS_DENIED_ACE;
typedef ACCESS_DENIED_ACE *PACCESS_DENIED_ACE;

typedef struct _SYSTEM_AUDIT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
} SYSTEM_AUDIT_ACE;
typedef SYSTEM_AUDIT_ACE *PSYSTEM_AUDIT_ACE;

typedef struct _SYSTEM_ALARM_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
} SYSTEM_ALARM_ACE;
typedef SYSTEM_ALARM_ACE *PSYSTEM_ALARM_ACE;

typedef struct _SYSTEM_RESOURCE_ATTRIBUTE_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    
} SYSTEM_RESOURCE_ATTRIBUTE_ACE, *PSYSTEM_RESOURCE_ATTRIBUTE_ACE;

typedef struct _SYSTEM_SCOPED_POLICY_ID_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
} SYSTEM_SCOPED_POLICY_ID_ACE, *PSYSTEM_SCOPED_POLICY_ID_ACE;

typedef struct _SYSTEM_MANDATORY_LABEL_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
} SYSTEM_MANDATORY_LABEL_ACE, *PSYSTEM_MANDATORY_LABEL_ACE;











typedef struct _ACCESS_ALLOWED_OBJECT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
} ACCESS_ALLOWED_OBJECT_ACE, *PACCESS_ALLOWED_OBJECT_ACE;

typedef struct _ACCESS_DENIED_OBJECT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
} ACCESS_DENIED_OBJECT_ACE, *PACCESS_DENIED_OBJECT_ACE;

typedef struct _SYSTEM_AUDIT_OBJECT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
} SYSTEM_AUDIT_OBJECT_ACE, *PSYSTEM_AUDIT_OBJECT_ACE;

typedef struct _SYSTEM_ALARM_OBJECT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
} SYSTEM_ALARM_OBJECT_ACE, *PSYSTEM_ALARM_OBJECT_ACE;






typedef struct _ACCESS_ALLOWED_CALLBACK_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    
} ACCESS_ALLOWED_CALLBACK_ACE, *PACCESS_ALLOWED_CALLBACK_ACE;

typedef struct _ACCESS_DENIED_CALLBACK_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    
} ACCESS_DENIED_CALLBACK_ACE, *PACCESS_DENIED_CALLBACK_ACE;

typedef struct _SYSTEM_AUDIT_CALLBACK_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    
} SYSTEM_AUDIT_CALLBACK_ACE, *PSYSTEM_AUDIT_CALLBACK_ACE;

typedef struct _SYSTEM_ALARM_CALLBACK_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    
} SYSTEM_ALARM_CALLBACK_ACE, *PSYSTEM_ALARM_CALLBACK_ACE;

typedef struct _ACCESS_ALLOWED_CALLBACK_OBJECT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
    
} ACCESS_ALLOWED_CALLBACK_OBJECT_ACE, *PACCESS_ALLOWED_CALLBACK_OBJECT_ACE;

typedef struct _ACCESS_DENIED_CALLBACK_OBJECT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
    
} ACCESS_DENIED_CALLBACK_OBJECT_ACE, *PACCESS_DENIED_CALLBACK_OBJECT_ACE;

typedef struct _SYSTEM_AUDIT_CALLBACK_OBJECT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
    
} SYSTEM_AUDIT_CALLBACK_OBJECT_ACE, *PSYSTEM_AUDIT_CALLBACK_OBJECT_ACE;

typedef struct _SYSTEM_ALARM_CALLBACK_OBJECT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
    
} SYSTEM_ALARM_CALLBACK_OBJECT_ACE, *PSYSTEM_ALARM_CALLBACK_OBJECT_ACE;















typedef enum _ACL_INFORMATION_CLASS {
    AclRevisionInformation = 1,
    AclSizeInformation
} ACL_INFORMATION_CLASS;






typedef struct _ACL_REVISION_INFORMATION {
    DWORD AclRevision;
} ACL_REVISION_INFORMATION;
typedef ACL_REVISION_INFORMATION *PACL_REVISION_INFORMATION;





typedef struct _ACL_SIZE_INFORMATION {
    DWORD AceCount;
    DWORD AclBytesInUse;
    DWORD AclBytesFree;
} ACL_SIZE_INFORMATION;
typedef ACL_SIZE_INFORMATION *PACL_SIZE_INFORMATION;


























typedef WORD   SECURITY_DESCRIPTOR_CONTROL, *PSECURITY_DESCRIPTOR_CONTROL;

























































































typedef struct _SECURITY_DESCRIPTOR_RELATIVE {
    BYTE  Revision;
    BYTE  Sbz1;
    SECURITY_DESCRIPTOR_CONTROL Control;
    DWORD Owner;
    DWORD Group;
    DWORD Sacl;
    DWORD Dacl;
    } SECURITY_DESCRIPTOR_RELATIVE, *PISECURITY_DESCRIPTOR_RELATIVE;

typedef struct _SECURITY_DESCRIPTOR {
   BYTE  Revision;
   BYTE  Sbz1;
   SECURITY_DESCRIPTOR_CONTROL Control;
   PSID Owner;
   PSID Group;
   PACL Sacl;
   PACL Dacl;

   } SECURITY_DESCRIPTOR, *PISECURITY_DESCRIPTOR;


















































typedef struct _OBJECT_TYPE_LIST {
    WORD   Level;
    WORD   Sbz;
    GUID *ObjectType;
} OBJECT_TYPE_LIST, *POBJECT_TYPE_LIST;















typedef enum _AUDIT_EVENT_TYPE {
    AuditEventObjectAccess,
    AuditEventDirectoryServiceAccess
} AUDIT_EVENT_TYPE, *PAUDIT_EVENT_TYPE;


















































typedef struct _PRIVILEGE_SET {
    DWORD PrivilegeCount;
    DWORD Control;
    LUID_AND_ATTRIBUTES Privilege[1];
    } PRIVILEGE_SET, * PPRIVILEGE_SET;
















typedef enum _ACCESS_REASON_TYPE{

    AccessReasonNone                    = 0x00000000,   

    
    
    
    
    
    AccessReasonAllowedAce                  = 0x00010000,   
    AccessReasonDeniedAce                   = 0x00020000,   

    AccessReasonAllowedParentAce            = 0x00030000,   
    AccessReasonDeniedParentAce             = 0x00040000,   

    AccessReasonNotGrantedByCape            = 0x00050000,   
    AccessReasonNotGrantedByParentCape      = 0x00060000,   

    AccessReasonNotGrantedToAppContainer    = 0x00070000,   

    AccessReasonMissingPrivilege            = 0x00100000,
    AccessReasonFromPrivilege               = 0x00200000,


    AccessReasonIntegrityLevel              = 0x00300000,

    AccessReasonOwnership                   = 0x00400000,

    AccessReasonNullDacl                    = 0x00500000,
    AccessReasonEmptyDacl                   = 0x00600000,

    AccessReasonNoSD                        = 0x00700000,
    AccessReasonNoGrant                     = 0x00800000    
}
ACCESS_REASON_TYPE;

 












typedef DWORD ACCESS_REASON;

typedef struct _ACCESS_REASONS{
        ACCESS_REASON Data[32];
} ACCESS_REASONS, *PACCESS_REASONS;
























typedef struct _SE_SECURITY_DESCRIPTOR
{
    DWORD Size;
    DWORD Flags;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
} SE_SECURITY_DESCRIPTOR, *PSE_SECURITY_DESCRIPTOR;

typedef struct _SE_ACCESS_REQUEST
{
    DWORD Size;
    PSE_SECURITY_DESCRIPTOR SeSecurityDescriptor;
    ACCESS_MASK DesiredAccess;
    ACCESS_MASK PreviouslyGrantedAccess;
    PSID PrincipalSelfSid;      
    PGENERIC_MAPPING GenericMapping;
    DWORD ObjectTypeListCount;
    POBJECT_TYPE_LIST ObjectTypeList;
} SE_ACCESS_REQUEST, *PSE_ACCESS_REQUEST;


typedef struct _SE_ACCESS_REPLY
{
    DWORD Size;
    DWORD ResultListCount;  
    PACCESS_MASK GrantedAccess;
    PDWORD    AccessStatus;
    PACCESS_REASONS AccessReason;
    PPRIVILEGE_SET* Privileges;
} SE_ACCESS_REPLY, *PSE_ACCESS_REPLY;






























































typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous,
    SecurityIdentification,
    SecurityImpersonation,
    SecurityDelegation
    } SECURITY_IMPERSONATION_LEVEL, * PSECURITY_IMPERSONATION_LEVEL;












































#line 10103 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

















typedef enum _TOKEN_TYPE {
    TokenPrimary = 1,
    TokenImpersonation
    } TOKEN_TYPE;
typedef TOKEN_TYPE *PTOKEN_TYPE;







typedef enum _TOKEN_ELEVATION_TYPE {
    TokenElevationTypeDefault = 1,
    TokenElevationTypeFull,
    TokenElevationTypeLimited,
} TOKEN_ELEVATION_TYPE, *PTOKEN_ELEVATION_TYPE;






typedef enum _TOKEN_INFORMATION_CLASS {
    TokenUser = 1,
    TokenGroups,
    TokenPrivileges,
    TokenOwner,
    TokenPrimaryGroup,
    TokenDefaultDacl,
    TokenSource,
    TokenType,
    TokenImpersonationLevel,
    TokenStatistics,
    TokenRestrictedSids,
    TokenSessionId,
    TokenGroupsAndPrivileges,
    TokenSessionReference,
    TokenSandBoxInert,
    TokenAuditPolicy,
    TokenOrigin,
    TokenElevationType,
    TokenLinkedToken,
    TokenElevation,
    TokenHasRestrictions,
    TokenAccessInformation,
    TokenVirtualizationAllowed,
    TokenVirtualizationEnabled,
    TokenIntegrityLevel,
    TokenUIAccess,
    TokenMandatoryPolicy,
    TokenLogonSid,
    TokenIsAppContainer,
    TokenCapabilities,
    TokenAppContainerSid,
    TokenAppContainerNumber,
    TokenUserClaimAttributes,
    TokenDeviceClaimAttributes,
    TokenRestrictedUserClaimAttributes,
    TokenRestrictedDeviceClaimAttributes,
    TokenDeviceGroups,
    TokenRestrictedDeviceGroups,
    TokenSecurityAttributes,
    TokenIsRestricted,
    MaxTokenInfoClass  
} TOKEN_INFORMATION_CLASS, *PTOKEN_INFORMATION_CLASS;






typedef struct _TOKEN_USER {
    SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER;

typedef struct _TOKEN_GROUPS {
    DWORD GroupCount;



    SID_AND_ATTRIBUTES Groups[1];
#line 10203 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
} TOKEN_GROUPS, *PTOKEN_GROUPS;


typedef struct _TOKEN_PRIVILEGES {
    DWORD PrivilegeCount;
    LUID_AND_ATTRIBUTES Privileges[1];
} TOKEN_PRIVILEGES, *PTOKEN_PRIVILEGES;


typedef struct _TOKEN_OWNER {
    PSID Owner;
} TOKEN_OWNER, *PTOKEN_OWNER;


typedef struct _TOKEN_PRIMARY_GROUP {
    PSID PrimaryGroup;
} TOKEN_PRIMARY_GROUP, *PTOKEN_PRIMARY_GROUP;


typedef struct _TOKEN_DEFAULT_DACL {
    PACL DefaultDacl;
} TOKEN_DEFAULT_DACL, *PTOKEN_DEFAULT_DACL;

typedef struct _TOKEN_USER_CLAIMS {
    PCLAIMS_BLOB UserClaims;
} TOKEN_USER_CLAIMS, *PTOKEN_USER_CLAIMS;

typedef struct _TOKEN_DEVICE_CLAIMS {
    PCLAIMS_BLOB DeviceClaims;
} TOKEN_DEVICE_CLAIMS, *PTOKEN_DEVICE_CLAIMS;

typedef struct _TOKEN_GROUPS_AND_PRIVILEGES {
    DWORD SidCount;
    DWORD SidLength;
    PSID_AND_ATTRIBUTES Sids;
    DWORD RestrictedSidCount;
    DWORD RestrictedSidLength;
    PSID_AND_ATTRIBUTES RestrictedSids;
    DWORD PrivilegeCount;
    DWORD PrivilegeLength;
    PLUID_AND_ATTRIBUTES Privileges;
    LUID AuthenticationId;
} TOKEN_GROUPS_AND_PRIVILEGES, *PTOKEN_GROUPS_AND_PRIVILEGES;

typedef struct _TOKEN_LINKED_TOKEN {
    HANDLE LinkedToken;
} TOKEN_LINKED_TOKEN, *PTOKEN_LINKED_TOKEN;

typedef struct _TOKEN_ELEVATION {
    DWORD TokenIsElevated;
} TOKEN_ELEVATION, *PTOKEN_ELEVATION;

typedef struct _TOKEN_MANDATORY_LABEL {
    SID_AND_ATTRIBUTES Label;
} TOKEN_MANDATORY_LABEL, *PTOKEN_MANDATORY_LABEL;








typedef struct _TOKEN_MANDATORY_POLICY {
    DWORD Policy;
} TOKEN_MANDATORY_POLICY, *PTOKEN_MANDATORY_POLICY;

typedef struct _TOKEN_ACCESS_INFORMATION {
    PSID_AND_ATTRIBUTES_HASH SidHash;
    PSID_AND_ATTRIBUTES_HASH RestrictedSidHash;
    PTOKEN_PRIVILEGES Privileges;
    LUID AuthenticationId;
    TOKEN_TYPE TokenType;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    TOKEN_MANDATORY_POLICY MandatoryPolicy;
    DWORD Flags;
    DWORD AppContainerNumber;
    PSID PackageSid;
    PSID_AND_ATTRIBUTES_HASH CapabilitiesHash;
} TOKEN_ACCESS_INFORMATION, *PTOKEN_ACCESS_INFORMATION;







typedef struct _TOKEN_AUDIT_POLICY {
    BYTE  PerUserPolicy[(((56)) >> 1) + 1];
} TOKEN_AUDIT_POLICY, *PTOKEN_AUDIT_POLICY;



typedef struct _TOKEN_SOURCE {
    CHAR SourceName[8];
    LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE;


typedef struct _TOKEN_STATISTICS {
    LUID TokenId;
    LUID AuthenticationId;
    LARGE_INTEGER ExpirationTime;
    TOKEN_TYPE TokenType;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    DWORD DynamicCharged;
    DWORD DynamicAvailable;
    DWORD GroupCount;
    DWORD PrivilegeCount;
    LUID ModifiedId;
} TOKEN_STATISTICS, *PTOKEN_STATISTICS;



typedef struct _TOKEN_CONTROL {
    LUID TokenId;
    LUID AuthenticationId;
    LUID ModifiedId;
    TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL, *PTOKEN_CONTROL;

typedef struct _TOKEN_ORIGIN {
    LUID OriginatingLogonSession ;
} TOKEN_ORIGIN, * PTOKEN_ORIGIN ;


typedef enum _MANDATORY_LEVEL {
    MandatoryLevelUntrusted = 0,
    MandatoryLevelLow,
    MandatoryLevelMedium,
    MandatoryLevelHigh,
    MandatoryLevelSystem,
    MandatoryLevelSecureProcess,
    MandatoryLevelCount
} MANDATORY_LEVEL, *PMANDATORY_LEVEL;

typedef struct _TOKEN_APPCONTAINER_INFORMATION {
    PSID TokenAppContainer;
} TOKEN_APPCONTAINER_INFORMATION, *PTOKEN_APPCONTAINER_INFORMATION;































typedef struct _CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE {
    DWORD64             Version;
    PWSTR               Name;
} CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE, *PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE;








typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE {
    PVOID   pValue;         
    DWORD   ValueLength;    
} CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE,
    *PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE;



































































typedef struct _CLAIM_SECURITY_ATTRIBUTE_V1 {

    
    
    
    

    PWSTR   Name; 

    
    
    

    WORD    ValueType;

    
    
    
    

    WORD    Reserved;

    
    
    

    DWORD   Flags;

    
    
    

    DWORD   ValueCount;

    
    
    

    union {
        PLONG64                                         pInt64;
        PDWORD64                                        pUint64;
        PWSTR                                           *ppString;
        PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE            pFqbn;
        PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE    pOctetString;
    } Values;
} CLAIM_SECURITY_ATTRIBUTE_V1, *PCLAIM_SECURITY_ATTRIBUTE_V1;






typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1 {

    
    
    
    

    DWORD   Name;

    
    
    

    WORD    ValueType;

    
    
    
    

    WORD    Reserved;

    
    
    

    DWORD   Flags;

    
    
    

    DWORD   ValueCount;

    
    
    

    union {
        DWORD pInt64[1];
        DWORD pUint64[1];
        DWORD ppString[1];
        DWORD pFqbn[1];
        DWORD pOctetString[1];
    } Values;
} CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1, *PCLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1;





















typedef struct _CLAIM_SECURITY_ATTRIBUTES_INFORMATION {

    
    
    

    WORD    Version;

    
    
    

    WORD    Reserved;

    DWORD   AttributeCount;
    union {
        PCLAIM_SECURITY_ATTRIBUTE_V1    pAttributeV1;
    } Attribute;
} CLAIM_SECURITY_ATTRIBUTES_INFORMATION, *PCLAIM_SECURITY_ATTRIBUTES_INFORMATION;








typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE,
                    * PSECURITY_CONTEXT_TRACKING_MODE;







typedef struct _SECURITY_QUALITY_OF_SERVICE {
    DWORD Length;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
    BOOLEAN EffectiveOnly;
    } SECURITY_QUALITY_OF_SERVICE, * PSECURITY_QUALITY_OF_SERVICE;






typedef struct _SE_IMPERSONATION_STATE {
    PACCESS_TOKEN Token;
    BOOLEAN CopyOnOpen;
    BOOLEAN EffectiveOnly;
    SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE, *PSE_IMPERSONATION_STATE;






typedef DWORD SECURITY_INFORMATION, *PSECURITY_INFORMATION;




















typedef enum _SE_LEARNING_MODE_DATA_TYPE {
    SeLearningModeInvalidType = 0,
    SeLearningModeSettings,
    SeLearningModeMax
} SE_LEARNING_MODE_DATA_TYPE;



typedef struct _SECURITY_CAPABILITIES {
    PSID AppContainerSid;
    PSID_AND_ATTRIBUTES Capabilities;
    DWORD CapabilityCount;
    DWORD Reserved;
} SECURITY_CAPABILITIES, *PSECURITY_CAPABILITIES, *LPSECURITY_CAPABILITIES;




















#line 10692 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"









#line 10702 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





















#line 10724 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








typedef struct _JOB_SET_ARRAY {
    HANDLE JobHandle;   
    DWORD MemberLevel;  
    DWORD Flags;        
} JOB_SET_ARRAY, *PJOB_SET_ARRAY;




typedef struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    PEXCEPTION_ROUTINE Handler;
} EXCEPTION_REGISTRATION_RECORD;

typedef EXCEPTION_REGISTRATION_RECORD *PEXCEPTION_REGISTRATION_RECORD;

typedef struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID SubSystemTib;

    union {
        PVOID FiberData;
        DWORD Version;
    };


#line 10761 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
    PVOID ArbitraryUserPointer;
    struct _NT_TIB *Self;
} NT_TIB;
typedef NT_TIB *PNT_TIB;




typedef struct _NT_TIB32 {
    DWORD ExceptionList;
    DWORD StackBase;
    DWORD StackLimit;
    DWORD SubSystemTib;


    union {
        DWORD FiberData;
        DWORD Version;
    };


#line 10783 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

    DWORD ArbitraryUserPointer;
    DWORD Self;
} NT_TIB32, *PNT_TIB32;

typedef struct _NT_TIB64 {
    DWORD64 ExceptionList;
    DWORD64 StackBase;
    DWORD64 StackLimit;
    DWORD64 SubSystemTib;


    union {
        DWORD64 FiberData;
        DWORD Version;
    };



#line 10803 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

    DWORD64 ArbitraryUserPointer;
    DWORD64 Self;
} NT_TIB64, *PNT_TIB64;








typedef struct _UMS_CREATE_THREAD_ATTRIBUTES {  
    DWORD UmsVersion;   
        PVOID UmsContext;   
        PVOID UmsCompletionList;   
} UMS_CREATE_THREAD_ATTRIBUTES, *PUMS_CREATE_THREAD_ATTRIBUTES; 

typedef struct _QUOTA_LIMITS {
    SIZE_T PagedPoolLimit;
    SIZE_T NonPagedPoolLimit;
    SIZE_T MinimumWorkingSetSize;
    SIZE_T MaximumWorkingSetSize;
    SIZE_T PagefileLimit;
    LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS, *PQUOTA_LIMITS;







typedef union _RATE_QUOTA_LIMIT {
    DWORD RateData;
    struct {
        DWORD RatePercent : 7;
        DWORD Reserved0   : 25;
    } ;
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT;

typedef struct _QUOTA_LIMITS_EX {
    SIZE_T PagedPoolLimit;
    SIZE_T NonPagedPoolLimit;
    SIZE_T MinimumWorkingSetSize;
    SIZE_T MaximumWorkingSetSize;
    SIZE_T PagefileLimit;               
    LARGE_INTEGER TimeLimit;
    SIZE_T WorkingSetLimit;             
    SIZE_T Reserved2;
    SIZE_T Reserved3;
    SIZE_T Reserved4;
    DWORD  Flags;
    RATE_QUOTA_LIMIT CpuRateLimit;
} QUOTA_LIMITS_EX, *PQUOTA_LIMITS_EX;

typedef struct _IO_COUNTERS {
    ULONGLONG  ReadOperationCount;
    ULONGLONG  WriteOperationCount;
    ULONGLONG  OtherOperationCount;
    ULONGLONG ReadTransferCount;
    ULONGLONG WriteTransferCount;
    ULONGLONG OtherTransferCount;
} IO_COUNTERS;
typedef IO_COUNTERS *PIO_COUNTERS;




typedef enum _HARDWARE_COUNTER_TYPE {
    PMCCounter,
    MaxHardwareCounterType
} HARDWARE_COUNTER_TYPE, *PHARDWARE_COUNTER_TYPE;
typedef enum _PROCESS_MITIGATION_POLICY {
    ProcessDEPPolicy,
    ProcessASLRPolicy,
    ProcessReserved1MitigationPolicy,
    ProcessStrictHandleCheckPolicy,
    ProcessSystemCallDisablePolicy,
    ProcessMitigationOptionsMask,
    ProcessExtensionPointDisablePolicy,
    MaxProcessMitigationPolicy
} PROCESS_MITIGATION_POLICY, *PPROCESS_MITIGATION_POLICY;






typedef struct _PROCESS_MITIGATION_ASLR_POLICY {
    union {
        DWORD Flags;
        struct {
            DWORD EnableBottomUpRandomization : 1;
            DWORD EnableForceRelocateImages : 1;
            DWORD EnableHighEntropy : 1;
            DWORD DisallowStrippedImages : 1;
            DWORD ReservedFlags : 28;
        };
    };
} PROCESS_MITIGATION_ASLR_POLICY, *PPROCESS_MITIGATION_ASLR_POLICY;

typedef struct _PROCESS_MITIGATION_DEP_POLICY {
    union {
        DWORD Flags;
        struct {
            DWORD Enable : 1;
            DWORD DisableAtlThunkEmulation : 1;
            DWORD ReservedFlags : 30;
        };
    };
    BOOLEAN Permanent;
} PROCESS_MITIGATION_DEP_POLICY, *PPROCESS_MITIGATION_DEP_POLICY;

typedef struct _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY {
    union {
        DWORD Flags;
        struct {
            DWORD RaiseExceptionOnInvalidHandleReference : 1;
            DWORD HandleExceptionsPermanentlyEnabled : 1;
            DWORD ReservedFlags : 30;
        };
    };
} PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY, *PPROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY;

typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY {
    union {
        DWORD Flags;
        struct {
            DWORD DisallowWin32kSystemCalls : 1;
            DWORD ReservedFlags : 31;
        };
    };
} PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY;

typedef struct _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY {
    union {
        DWORD Flags;
        struct {
            DWORD DisableExtensionPoints : 1;
            DWORD ReservedFlags : 31;
        };
    };
} PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY, *PPROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY;


typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION {
    LARGE_INTEGER TotalUserTime;
    LARGE_INTEGER TotalKernelTime;
    LARGE_INTEGER ThisPeriodTotalUserTime;
    LARGE_INTEGER ThisPeriodTotalKernelTime;
    DWORD TotalPageFaultCount;
    DWORD TotalProcesses;
    DWORD ActiveProcesses;
    DWORD TotalTerminatedProcesses;
} JOBOBJECT_BASIC_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION;

typedef struct _JOBOBJECT_BASIC_LIMIT_INFORMATION {
    LARGE_INTEGER PerProcessUserTimeLimit;
    LARGE_INTEGER PerJobUserTimeLimit;
    DWORD LimitFlags;
    SIZE_T MinimumWorkingSetSize;
    SIZE_T MaximumWorkingSetSize;
    DWORD ActiveProcessLimit;
    ULONG_PTR Affinity;
    DWORD PriorityClass;
    DWORD SchedulingClass;
} JOBOBJECT_BASIC_LIMIT_INFORMATION, *PJOBOBJECT_BASIC_LIMIT_INFORMATION;

typedef struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION {
    JOBOBJECT_BASIC_LIMIT_INFORMATION BasicLimitInformation;
    IO_COUNTERS IoInfo;
    SIZE_T ProcessMemoryLimit;
    SIZE_T JobMemoryLimit;
    SIZE_T PeakProcessMemoryUsed;
    SIZE_T PeakJobMemoryUsed;
} JOBOBJECT_EXTENDED_LIMIT_INFORMATION, *PJOBOBJECT_EXTENDED_LIMIT_INFORMATION;

typedef struct _JOBOBJECT_BASIC_PROCESS_ID_LIST {
    DWORD NumberOfAssignedProcesses;
    DWORD NumberOfProcessIdsInList;
    ULONG_PTR ProcessIdList[1];
} JOBOBJECT_BASIC_PROCESS_ID_LIST, *PJOBOBJECT_BASIC_PROCESS_ID_LIST;

typedef struct _JOBOBJECT_BASIC_UI_RESTRICTIONS {
    DWORD UIRestrictionsClass;
} JOBOBJECT_BASIC_UI_RESTRICTIONS, *PJOBOBJECT_BASIC_UI_RESTRICTIONS;





typedef struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION {
    DWORD SecurityLimitFlags ;
    HANDLE JobToken ;
    PTOKEN_GROUPS SidsToDisable ;
    PTOKEN_PRIVILEGES PrivilegesToDelete ;
    PTOKEN_GROUPS RestrictedSids ;
} JOBOBJECT_SECURITY_LIMIT_INFORMATION, *PJOBOBJECT_SECURITY_LIMIT_INFORMATION ;

typedef struct _JOBOBJECT_END_OF_JOB_TIME_INFORMATION {
    DWORD EndOfJobTimeAction;
} JOBOBJECT_END_OF_JOB_TIME_INFORMATION, *PJOBOBJECT_END_OF_JOB_TIME_INFORMATION;

typedef struct _JOBOBJECT_ASSOCIATE_COMPLETION_PORT {
    PVOID CompletionKey;
    HANDLE CompletionPort;
} JOBOBJECT_ASSOCIATE_COMPLETION_PORT, *PJOBOBJECT_ASSOCIATE_COMPLETION_PORT;

typedef struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION {
    JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
    IO_COUNTERS IoInfo;
} JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION;

typedef struct _JOBOBJECT_JOBSET_INFORMATION {
    DWORD MemberLevel;
} JOBOBJECT_JOBSET_INFORMATION, *PJOBOBJECT_JOBSET_INFORMATION;

typedef enum _JOBOBJECT_RATE_CONTROL_TOLERANCE {
    ToleranceLow = 1,
    ToleranceMedium,
    ToleranceHigh
} JOBOBJECT_RATE_CONTROL_TOLERANCE;

typedef enum _JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL {
    ToleranceIntervalShort = 1,
    ToleranceIntervalMedium,
    ToleranceIntervalLong
} JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL;

typedef struct _JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION {
    DWORD64 IoReadBytesLimit;
    DWORD64 IoWriteBytesLimit;
    LARGE_INTEGER PerJobUserTimeLimit;
    DWORD64 JobMemoryLimit;
    JOBOBJECT_RATE_CONTROL_TOLERANCE RateControlTolerance;
    JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL RateControlToleranceInterval;
    DWORD LimitFlags;
} JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION, *PJOBOBJECT_NOTIFICATION_LIMIT_INFORMATION;

typedef struct _JOBOBJECT_LIMIT_VIOLATION_INFORMATION {
    DWORD LimitFlags;
    DWORD ViolationLimitFlags;
    DWORD64 IoReadBytes;
    DWORD64 IoReadBytesLimit;
    DWORD64 IoWriteBytes;
    DWORD64 IoWriteBytesLimit;
    LARGE_INTEGER PerJobUserTime;
    LARGE_INTEGER PerJobUserTimeLimit;
    DWORD64 JobMemory;
    DWORD64 JobMemoryLimit;
    JOBOBJECT_RATE_CONTROL_TOLERANCE RateControlTolerance;
    JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL RateControlToleranceLimit;
} JOBOBJECT_LIMIT_VIOLATION_INFORMATION, *PJOBOBJECT_LIMIT_VIOLATION_INFORMATION;

typedef struct _JOBOBJECT_CPU_RATE_CONTROL_INFORMATION {
    DWORD ControlFlags;
    union {
        DWORD CpuRate;
        DWORD Weight;
    };
} JOBOBJECT_CPU_RATE_CONTROL_INFORMATION, *PJOBOBJECT_CPU_RATE_CONTROL_INFORMATION;




















































































































typedef enum _JOBOBJECTINFOCLASS {
    JobObjectBasicAccountingInformation = 1,
    JobObjectBasicLimitInformation,
    JobObjectBasicProcessIdList,
    JobObjectBasicUIRestrictions,
    JobObjectSecurityLimitInformation,  
    JobObjectEndOfJobTimeInformation,
    JobObjectAssociateCompletionPortInformation,
    JobObjectBasicAndIoAccountingInformation,
    JobObjectExtendedLimitInformation,
    JobObjectJobSetInformation,
    JobObjectGroupInformation,
    JobObjectNotificationLimitInformation,
    JobObjectLimitViolationInformation,
    JobObjectGroupInformationEx,
    JobObjectCpuRateControlInformation,
    JobObjectCompletionFilter,
    JobObjectCompletionCounter,
    JobObjectReserved1Information = 18,
    JobObjectReserved2Information,
    JobObjectReserved3Information,
    JobObjectReserved4Information,
    JobObjectReserved5Information,
    JobObjectReserved6Information,
    JobObjectReserved7Information,
    JobObjectReserved8Information,
    MaxJobObjectInfoClass
} JOBOBJECTINFOCLASS;


typedef enum _FIRMWARE_TYPE {
    FirmwareTypeUnknown,
    FirmwareTypeBios,
    FirmwareTypeUefi,
    FirmwareTypeMax
} FIRMWARE_TYPE, *PFIRMWARE_TYPE;






























typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP {
    RelationProcessorCore,
    RelationNumaNode,
    RelationCache,
    RelationProcessorPackage,
    RelationGroup,
    RelationAll = 0xffff
} LOGICAL_PROCESSOR_RELATIONSHIP;



typedef enum _PROCESSOR_CACHE_TYPE {
    CacheUnified,
    CacheInstruction,
    CacheData,
    CacheTrace
} PROCESSOR_CACHE_TYPE;



typedef struct _CACHE_DESCRIPTOR {
    BYTE   Level;
    BYTE   Associativity;
    WORD   LineSize;
    DWORD  Size;
    PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR;

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION {
    ULONG_PTR   ProcessorMask;
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    union {
        struct {
            BYTE  Flags;
        } ProcessorCore;
        struct {
            DWORD NodeNumber;
        } NumaNode;
        CACHE_DESCRIPTOR Cache;
        ULONGLONG  Reserved[2];
    } ;
} SYSTEM_LOGICAL_PROCESSOR_INFORMATION, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION;

typedef struct _PROCESSOR_RELATIONSHIP {
    BYTE  Flags;
    BYTE  Reserved[21];
    WORD   GroupCount;
      GROUP_AFFINITY GroupMask[1];
} PROCESSOR_RELATIONSHIP, *PPROCESSOR_RELATIONSHIP;

typedef struct _NUMA_NODE_RELATIONSHIP {
    DWORD NodeNumber;
    BYTE  Reserved[20];
    GROUP_AFFINITY GroupMask;
} NUMA_NODE_RELATIONSHIP, *PNUMA_NODE_RELATIONSHIP;

typedef struct _CACHE_RELATIONSHIP {
    BYTE  Level;
    BYTE  Associativity;
    WORD   LineSize;
    DWORD CacheSize;
    PROCESSOR_CACHE_TYPE Type;
    BYTE  Reserved[20];
    GROUP_AFFINITY GroupMask;
} CACHE_RELATIONSHIP, *PCACHE_RELATIONSHIP;

typedef struct _PROCESSOR_GROUP_INFO {
    BYTE  MaximumProcessorCount;
    BYTE  ActiveProcessorCount;
    BYTE  Reserved[38];
    KAFFINITY ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO;

typedef struct _GROUP_RELATIONSHIP {
    WORD   MaximumGroupCount;
    WORD   ActiveGroupCount;
    BYTE  Reserved[20];
    PROCESSOR_GROUP_INFO GroupInfo[1];
} GROUP_RELATIONSHIP, *PGROUP_RELATIONSHIP;

  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX {
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    DWORD Size;
    union {
        PROCESSOR_RELATIONSHIP Processor;
        NUMA_NODE_RELATIONSHIP NumaNode;
        CACHE_RELATIONSHIP Cache;
        GROUP_RELATIONSHIP Group;
    } ;
};

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;



typedef struct _SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION {
    DWORD64 CycleTime;
} SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION, *PSYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION;



























































































typedef struct _XSTATE_FEATURE {
    DWORD Offset;
    DWORD Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE;

typedef struct _XSTATE_CONFIGURATION {
    
    DWORD64 EnabledFeatures;

    
    DWORD64 EnabledVolatileFeatures;

    
    DWORD Size;

    DWORD OptimizedSave : 1;

    
    XSTATE_FEATURE Features[(64)];

} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION;


typedef struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION32 {
    DWORD BaseAddress;
    DWORD AllocationBase;
    DWORD AllocationProtect;
    DWORD RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
} MEMORY_BASIC_INFORMATION32, *PMEMORY_BASIC_INFORMATION32;

typedef struct __declspec(align(16)) _MEMORY_BASIC_INFORMATION64 {
    ULONGLONG BaseAddress;
    ULONGLONG AllocationBase;
    DWORD     AllocationProtect;
    DWORD     __alignment1;
    ULONGLONG RegionSize;
    DWORD     State;
    DWORD     Protect;
    DWORD     Type;
    DWORD     __alignment2;
} MEMORY_BASIC_INFORMATION64, *PMEMORY_BASIC_INFORMATION64;

























#pragma region Desktop Family           





#line 11522 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion                       




















































































































































typedef struct _FILE_ID_128 {                               
    BYTE  Identifier[16];                                   
} FILE_ID_128, *PFILE_ID_128;                               





typedef struct _FILE_NOTIFY_INFORMATION {
    DWORD NextEntryOffset;
    DWORD Action;
    DWORD FileNameLength;
    WCHAR FileName[1];
} FILE_NOTIFY_INFORMATION, *PFILE_NOTIFY_INFORMATION;






typedef union _FILE_SEGMENT_ELEMENT {
    PVOID64 Buffer;
    ULONGLONG Alignment;
}FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;













































#line 11741 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"










typedef struct _REPARSE_GUID_DATA_BUFFER {
    DWORD  ReparseTag;
    WORD   ReparseDataLength;
    WORD   Reserved;
    GUID   ReparseGuid;
    struct {
        BYTE   DataBuffer[1];
    } GenericReparseBuffer;
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER;






















































































typedef struct _SCRUB_DATA_INPUT {

    
    
    

    DWORD Size;

    
    
    
    
    
    

    DWORD Flags;

    
    
    
    
    

    DWORD MaximumIos;

    
    
    

    DWORD Reserved[15];

    
    
    
    
    

    BYTE  ResumeContext[816];

} SCRUB_DATA_INPUT, *PSCRUB_DATA_INPUT;

typedef struct _SCRUB_DATA_OUTPUT {

    
    
    

    DWORD Size;

    
    
    
    
    
    
    

    DWORD Flags;

    
    
    

    DWORD Status;

    
    
    
    

    DWORD ErrorLength;

    
    
    
    

    ULONGLONG ErrorFileOffset;

    
    
    

    DWORD NumberOfBytesRepaired;

    
    
    

    DWORD NumberOfBytesFailed;

    
    
    

    ULONGLONG InternalFileReference;

    
    
    

    DWORD Reserved[8];

    
    
    
    
    
    
    
    
    
    
    
    

    BYTE  ResumeContext[816];

} SCRUB_DATA_OUTPUT, *PSCRUB_DATA_OUTPUT;

#line 11967 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
































extern "C" const GUID  GUID_MAX_POWER_SAVINGS;






extern "C" const GUID  GUID_MIN_POWER_SAVINGS;






extern "C" const GUID  GUID_TYPICAL_POWER_SAVINGS;







extern "C" const GUID  NO_SUBGROUP_GUID;







extern "C" const GUID  ALL_POWERSCHEMES_GUID;




































extern "C" const GUID  GUID_POWERSCHEME_PERSONALITY;








extern "C" const GUID  GUID_ACTIVE_POWERSCHEME;














extern "C" const GUID  GUID_IDLE_RESILIENCY_SUBGROUP;





extern "C" const GUID  GUID_IDLE_RESILIENCY_PERIOD;






extern "C" const GUID  GUID_DISK_COALESCING_POWERDOWN_TIMEOUT;













extern "C" const GUID  GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT;








extern "C" const GUID  GUID_VIDEO_SUBGROUP;





extern "C" const GUID  GUID_VIDEO_POWERDOWN_TIMEOUT;





extern "C" const GUID  GUID_VIDEO_ANNOYANCE_TIMEOUT;





extern "C" const GUID  GUID_VIDEO_ADAPTIVE_PERCENT_INCREASE;





extern "C" const GUID  GUID_VIDEO_DIM_TIMEOUT;





extern "C" const GUID  GUID_VIDEO_ADAPTIVE_POWERDOWN;





extern "C" const GUID  GUID_MONITOR_POWER_ON;




extern "C" const GUID  GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;





extern "C" const GUID  GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS;




extern "C" const GUID  GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS;






extern "C" const GUID  GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS;





extern "C" const GUID  GUID_CONSOLE_DISPLAY_STATE;







extern "C" const GUID  GUID_ALLOW_DISPLAY_REQUIRED;







extern "C" const GUID  GUID_VIDEO_CONSOLE_LOCK_TIMEOUT;






extern "C" const GUID  GUID_ADAPTIVE_POWER_BEHAVIOR_SUBGROUP;






extern "C" const GUID  GUID_NON_ADAPTIVE_INPUT_TIMEOUT;







extern "C" const GUID  GUID_DISK_SUBGROUP;





extern "C" const GUID  GUID_DISK_POWERDOWN_TIMEOUT;






extern "C" const GUID  GUID_DISK_IDLE_TIMEOUT;








extern "C" const GUID  GUID_DISK_BURST_IGNORE_THRESHOLD;





extern "C" const GUID  GUID_DISK_ADAPTIVE_POWERDOWN;








extern "C" const GUID  GUID_SLEEP_SUBGROUP;







extern "C" const GUID  GUID_SLEEP_IDLE_THRESHOLD;





extern "C" const GUID  GUID_STANDBY_TIMEOUT;








extern "C" const GUID  GUID_UNATTEND_SLEEP_TIMEOUT;





extern "C" const GUID  GUID_HIBERNATE_TIMEOUT;





extern "C" const GUID  GUID_HIBERNATE_FASTS4_POLICY;








extern "C" const GUID  GUID_CRITICAL_POWER_TRANSITION;





extern "C" const GUID  GUID_SYSTEM_AWAYMODE;





extern "C" const GUID  GUID_ALLOW_AWAYMODE;







extern "C" const GUID  GUID_ALLOW_STANDBY_STATES;






extern "C" const GUID  GUID_ALLOW_RTC_WAKE;







extern "C" const GUID  GUID_ALLOW_SYSTEM_REQUIRED;








extern "C" const GUID  GUID_SYSTEM_BUTTON_SUBGROUP;














extern "C" const GUID  GUID_POWERBUTTON_ACTION;





extern "C" const GUID  GUID_SLEEPBUTTON_ACTION;






extern "C" const GUID  GUID_USERINTERFACEBUTTON_ACTION;





extern "C" const GUID  GUID_LIDCLOSE_ACTION;
extern "C" const GUID  GUID_LIDOPEN_POWERSTATE;








extern "C" const GUID  GUID_BATTERY_SUBGROUP;











extern "C" const GUID  GUID_BATTERY_DISCHARGE_ACTION_0;
extern "C" const GUID  GUID_BATTERY_DISCHARGE_LEVEL_0;
extern "C" const GUID  GUID_BATTERY_DISCHARGE_FLAGS_0;

extern "C" const GUID  GUID_BATTERY_DISCHARGE_ACTION_1;
extern "C" const GUID  GUID_BATTERY_DISCHARGE_LEVEL_1;
extern "C" const GUID  GUID_BATTERY_DISCHARGE_FLAGS_1;

extern "C" const GUID  GUID_BATTERY_DISCHARGE_ACTION_2;
extern "C" const GUID  GUID_BATTERY_DISCHARGE_LEVEL_2;
extern "C" const GUID  GUID_BATTERY_DISCHARGE_FLAGS_2;

extern "C" const GUID  GUID_BATTERY_DISCHARGE_ACTION_3;
extern "C" const GUID  GUID_BATTERY_DISCHARGE_LEVEL_3;
extern "C" const GUID  GUID_BATTERY_DISCHARGE_FLAGS_3;








extern "C" const GUID  GUID_PROCESSOR_SETTINGS_SUBGROUP;





extern "C" const GUID  GUID_PROCESSOR_THROTTLE_POLICY;












extern "C" const GUID  GUID_PROCESSOR_THROTTLE_MAXIMUM;







extern "C" const GUID  GUID_PROCESSOR_THROTTLE_MINIMUM;







extern "C" const GUID  GUID_PROCESSOR_ALLOW_THROTTLING;





extern "C" const GUID  GUID_PROCESSOR_IDLESTATE_POLICY;





extern "C" const GUID  GUID_PROCESSOR_PERFSTATE_POLICY;







extern "C" const GUID  GUID_PROCESSOR_PERF_INCREASE_THRESHOLD;







extern "C" const GUID  GUID_PROCESSOR_PERF_DECREASE_THRESHOLD;







extern "C" const GUID  GUID_PROCESSOR_PERF_INCREASE_POLICY;







extern "C" const GUID  GUID_PROCESSOR_PERF_DECREASE_POLICY;








extern "C" const GUID  GUID_PROCESSOR_PERF_INCREASE_TIME;








extern "C" const GUID  GUID_PROCESSOR_PERF_DECREASE_TIME;







extern "C" const GUID  GUID_PROCESSOR_PERF_TIME_CHECK;







extern "C" const GUID  GUID_PROCESSOR_PERF_BOOST_POLICY;
#line 12548 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"










extern "C" const GUID  GUID_PROCESSOR_PERF_BOOST_MODE;
#line 12560 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"














extern "C" const GUID  GUID_PROCESSOR_IDLE_ALLOW_SCALING;






extern "C" const GUID  GUID_PROCESSOR_IDLE_DISABLE;








extern "C" const GUID  GUID_PROCESSOR_IDLE_STATE_MAXIMUM;








extern "C" const GUID  GUID_PROCESSOR_IDLE_TIME_CHECK;








extern "C" const GUID  GUID_PROCESSOR_IDLE_DEMOTE_THRESHOLD;







extern "C" const GUID  GUID_PROCESSOR_IDLE_PROMOTE_THRESHOLD;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_INCREASE_THRESHOLD;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_DECREASE_THRESHOLD;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_INCREASE_POLICY;












extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_DECREASE_POLICY;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_MAX_CORES;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_MIN_CORES;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_INCREASE_TIME;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_DECREASE_TIME;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_DECREASE_FACTOR;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_THRESHOLD;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_AFFINITY_WEIGHTING;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_DECREASE_FACTOR;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_THRESHOLD;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_WEIGHTING;






extern "C" const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_THRESHOLD;







extern "C" const GUID  GUID_PROCESSOR_PARKING_CORE_OVERRIDE;







extern "C" const GUID  GUID_PROCESSOR_PARKING_PERF_STATE;







extern "C" const GUID  GUID_PROCESSOR_PARKING_CONCURRENCY_THRESHOLD;







extern "C" const GUID  GUID_PROCESSOR_PARKING_HEADROOM_THRESHOLD;






extern "C" const GUID  GUID_PROCESSOR_PERF_HISTORY;







extern "C" const GUID  GUID_PROCESSOR_PERF_LATENCY_HINT;







extern "C" const GUID  GUID_PROCESSOR_DISTRIBUTE_UTILITY;







extern "C" const GUID  GUID_SYSTEM_COOLING_POLICY;









extern "C" const GUID  GUID_LOCK_CONSOLE_ON_WAKE;









extern "C" const GUID  GUID_DEVICE_IDLE_POLICY;




















extern "C" const GUID  GUID_ACDC_POWER_SOURCE;















extern "C" const GUID  GUID_LIDSWITCH_STATE_CHANGE;
















extern "C" const GUID  GUID_BATTERY_PERCENTAGE_REMAINING;






extern "C" const GUID  GUID_GLOBAL_USER_PRESENCE;










extern "C" const GUID  GUID_SESSION_DISPLAY_STATUS;









extern "C" const GUID  GUID_SESSION_USER_PRESENCE;






extern "C" const GUID  GUID_IDLE_BACKGROUND_TASK;






extern "C" const GUID  GUID_BACKGROUND_TASK_NOTIFICATION;







extern "C" const GUID  GUID_APPLAUNCH_BUTTON;










extern "C" const GUID  GUID_PCIEXPRESS_SETTINGS_SUBGROUP;





extern "C" const GUID  GUID_PCIEXPRESS_ASPM_POLICY;











extern "C" const GUID  GUID_ENABLE_SWITCH_FORCED_SHUTDOWN;












extern "C" const GUID  GUID_LOW_POWER_EPOCH;



typedef enum _SYSTEM_POWER_STATE {
    PowerSystemUnspecified = 0,
    PowerSystemWorking     = 1,
    PowerSystemSleeping1   = 2,
    PowerSystemSleeping2   = 3,
    PowerSystemSleeping3   = 4,
    PowerSystemHibernate   = 5,
    PowerSystemShutdown    = 6,
    PowerSystemMaximum     = 7
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;



typedef enum {
    PowerActionNone = 0,
    PowerActionReserved,
    PowerActionSleep,
    PowerActionHibernate,
    PowerActionShutdown,
    PowerActionShutdownReset,
    PowerActionShutdownOff,
    PowerActionWarmEject
} POWER_ACTION, *PPOWER_ACTION;

typedef enum _DEVICE_POWER_STATE {
    PowerDeviceUnspecified = 0,
    PowerDeviceD0,
    PowerDeviceD1,
    PowerDeviceD2,
    PowerDeviceD3,
    PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef enum _MONITOR_DISPLAY_STATE {
    PowerMonitorOff = 0,
    PowerMonitorOn,
    PowerMonitorDim
} MONITOR_DISPLAY_STATE, *PMONITOR_DISPLAY_STATE;

typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent = 0,
    PowerUserNotPresent,
    PowerUserInactive,
    PowerUserMaximum,
    PowerUserInvalid = PowerUserMaximum
} USER_ACTIVITY_PRESENCE, *PUSER_ACTIVITY_PRESENCE;









typedef DWORD EXECUTION_STATE, *PEXECUTION_STATE;

typedef enum {
    LT_DONT_CARE,
    LT_LOWEST_LATENCY
} LATENCY_TIME;

















typedef enum _POWER_REQUEST_TYPE {
    PowerRequestDisplayRequired,
    PowerRequestSystemRequired,
    PowerRequestAwayModeRequired,
    PowerRequestExecutionRequired
} POWER_REQUEST_TYPE, *PPOWER_REQUEST_TYPE;




















typedef struct CM_Power_Data_s {
    DWORD               PD_Size;
    DEVICE_POWER_STATE  PD_MostRecentPowerState;
    DWORD               PD_Capabilities;
    DWORD               PD_D1Latency;
    DWORD               PD_D2Latency;
    DWORD               PD_D3Latency;
    DEVICE_POWER_STATE  PD_PowerStateMapping[7];
    SYSTEM_POWER_STATE  PD_DeepestSystemWake;
} CM_POWER_DATA, *PCM_POWER_DATA;

#line 13076 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



typedef enum {
    SystemPowerPolicyAc,
    SystemPowerPolicyDc,
    VerifySystemPolicyAc,
    VerifySystemPolicyDc,
    SystemPowerCapabilities,
    SystemBatteryState,
    SystemPowerStateHandler,
    ProcessorStateHandler,
    SystemPowerPolicyCurrent,
    AdministratorPowerPolicy,
    SystemReserveHiberFile,
    ProcessorInformation,
    SystemPowerInformation,
    ProcessorStateHandler2,
    LastWakeTime,                                   
    LastSleepTime,                                  
    SystemExecutionState,
    SystemPowerStateNotifyHandler,
    ProcessorPowerPolicyAc,
    ProcessorPowerPolicyDc,
    VerifyProcessorPowerPolicyAc,
    VerifyProcessorPowerPolicyDc,
    ProcessorPowerPolicyCurrent,
    SystemPowerStateLogging,
    SystemPowerLoggingEntry,
    SetPowerSettingValue,
    NotifyUserPowerSetting,
    PowerInformationLevelUnused0,
    SystemMonitorHiberBootPowerOff,
    SystemVideoState,
    TraceApplicationPowerMessage,
    TraceApplicationPowerMessageEnd,
    ProcessorPerfStates,
    ProcessorIdleStates,
    ProcessorCap,
    SystemWakeSource,
    SystemHiberFileInformation,
    TraceServicePowerMessage,
    ProcessorLoad,
    PowerShutdownNotification,
    MonitorCapabilities,
    SessionPowerInit,
    SessionDisplayState,
    PowerRequestCreate,
    PowerRequestAction,
    GetPowerRequestList,
    ProcessorInformationEx,
    NotifyUserModeLegacyPowerEvent,
    GroupPark,
    ProcessorIdleDomains,
    WakeTimerList,
    SystemHiberFileSize,
    ProcessorIdleStatesHv,
    ProcessorPerfStatesHv,
    ProcessorPerfCapHv,
    ProcessorSetIdle,
    LogicalProcessorIdling,
    UserPresence, 
    PowerSettingNotificationName,
    GetPowerSettingValue,
    IdleResiliency,
    SessionRITState,
    SessionConnectNotification,
    SessionPowerCleanup,
    SessionLockState,
    SystemHiberbootState,
    PlatformInformation,
    PdcInvocation,
    MonitorInvocation,
    FirmwareTableInformationRegistered,
    SetShutdownSelectedTime,
    SuspendResumeInvocation,
    PlmPowerRequestCreate,
    ScreenOff,
    CsDeviceNotification,
    PlatformRole,
    LastResumePerformance,
    DisplayBurst,
    ExitLatencySamplingPercentage,
    PowerInformationLevelMaximum
} POWER_INFORMATION_LEVEL;





typedef enum {
    UserNotPresent = 0,
    UserPresent = 1,
    UserUnknown = 0xff
} POWER_USER_PRESENCE_TYPE, *PPOWER_USER_PRESENCE_TYPE;

typedef struct _POWER_USER_PRESENCE {
	POWER_USER_PRESENCE_TYPE UserPresence;
} POWER_USER_PRESENCE, *PPOWER_USER_PRESENCE;




typedef struct _POWER_SESSION_CONNECT {
    BOOLEAN Connected;  
    BOOLEAN Console;    
} POWER_SESSION_CONNECT, *PPOWER_SESSION_CONNECT;

typedef struct _POWER_SESSION_TIMEOUTS {
    DWORD InputTimeout;
    DWORD DisplayTimeout;
} POWER_SESSION_TIMEOUTS, *PPOWER_SESSION_TIMEOUTS;




typedef struct _POWER_SESSION_RIT_STATE {
    BOOLEAN Active;  
    DWORD LastInputTime; 
} POWER_SESSION_RIT_STATE, *PPOWER_SESSION_RIT_STATE;




typedef struct _POWER_SESSION_WINLOGON {
    DWORD SessionId; 
    BOOLEAN Console; 
    BOOLEAN Locked; 
} POWER_SESSION_WINLOGON, *PPOWER_SESSION_WINLOGON;




typedef struct _POWER_IDLE_RESILIENCY {
    DWORD CoalescingTimeout; 
    DWORD IdleResiliencyPeriod; 
} POWER_IDLE_RESILIENCY, *PPOWER_IDLE_RESILIENCY;




typedef struct _POWER_MONITOR_INVOCATION {
    BOOLEAN On; 
    BOOLEAN Console; 
} POWER_MONITOR_INVOCATION, *PPOWER_MONITOR_INVOCATION;





typedef struct _RESUME_PERFORMANCE {
    DWORD PostTimeMs;
    ULONGLONG TotalResumeTimeMs;
    ULONGLONG ResumeCompleteTimestamp;
} RESUME_PERFORMANCE, *PRESUME_PERFORMANCE;





typedef enum {
    PoAc,
    PoDc,
    PoHot,
    PoConditionMaximum
} SYSTEM_POWER_CONDITION;

typedef struct {

    
    
    
    
    DWORD       Version;


    
    
    
    GUID        Guid;


    
    
    
    
    SYSTEM_POWER_CONDITION PowerCondition;

    
    
    
    DWORD       DataLength;

    
    
    
    BYTE    Data[1];
} SET_POWER_SETTING_VALUE, *PSET_POWER_SETTING_VALUE;



typedef struct {
    GUID Guid;
} NOTIFY_USER_POWER_SETTING, *PNOTIFY_USER_POWER_SETTING;






typedef struct _APPLICATIONLAUNCH_SETTING_VALUE {

    
    
    
    
    LARGE_INTEGER       ActivationTime;

    
    
    
    DWORD               Flags;

    
    
    
    DWORD               ButtonInstanceID;


} APPLICATIONLAUNCH_SETTING_VALUE, *PAPPLICATIONLAUNCH_SETTING_VALUE;





typedef enum _POWER_PLATFORM_ROLE {
    PlatformRoleUnspecified = 0,
    PlatformRoleDesktop,
    PlatformRoleMobile,
    PlatformRoleWorkstation,
    PlatformRoleEnterpriseServer,
    PlatformRoleSOHOServer,
    PlatformRoleAppliancePC,
    PlatformRolePerformanceServer, 
    PlatformRoleSlate,             
    PlatformRoleMaximum
} POWER_PLATFORM_ROLE, *PPOWER_PLATFORM_ROLE;

















#line 13341 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct _POWER_PLATFORM_INFORMATION {
    BOOLEAN AoAc;
} POWER_PLATFORM_INFORMATION, *PPOWER_PLATFORM_INFORMATION;






typedef struct {
    DWORD       Granularity;
    DWORD       Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;
#line 13356 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



typedef struct {
    DWORD   Frequency;
    DWORD   Flags;
    DWORD   PercentFrequency;
} PPM_WMI_LEGACY_PERFSTATE, *PPPM_WMI_LEGACY_PERFSTATE;

typedef struct {
    DWORD Latency;
    DWORD Power;
    DWORD TimeCheck;
    BYTE  PromotePercent;
    BYTE  DemotePercent;
    BYTE  StateType;
    BYTE  Reserved;
    DWORD StateFlags;
    DWORD Context;
    DWORD IdleHandler;
    DWORD Reserved1;            
} PPM_WMI_IDLE_STATE, *PPPM_WMI_IDLE_STATE;

typedef struct {
    DWORD Type;
    DWORD Count;
    DWORD TargetState;          
    DWORD OldState;             
    DWORD64 TargetProcessors;
    PPM_WMI_IDLE_STATE State[1];
} PPM_WMI_IDLE_STATES, *PPPM_WMI_IDLE_STATES;

typedef struct {
    DWORD Type;
    DWORD Count;
    DWORD TargetState;          
    DWORD OldState;             
    PVOID TargetProcessors;
    PPM_WMI_IDLE_STATE State[1];
} PPM_WMI_IDLE_STATES_EX, *PPPM_WMI_IDLE_STATES_EX;

typedef struct {
    DWORD Frequency;            
    DWORD Power;                
    BYTE  PercentFrequency;
    BYTE  IncreaseLevel;        
    BYTE  DecreaseLevel;        
    BYTE  Type;                 
    DWORD IncreaseTime;         
    DWORD DecreaseTime;         
    DWORD64 Control;            
    DWORD64 Status;             
    DWORD HitCount;
    DWORD Reserved1;            
    DWORD64 Reserved2;
    DWORD64 Reserved3;
} PPM_WMI_PERF_STATE, *PPPM_WMI_PERF_STATE;

typedef struct {
    DWORD Count;
    DWORD MaxFrequency;
    DWORD CurrentState;         
    DWORD MaxPerfState;         
    DWORD MinPerfState;         
    DWORD LowestPerfState;      
    DWORD ThermalConstraint;
    BYTE  BusyAdjThreshold;
    BYTE  PolicyType;           
    BYTE  Type;
    BYTE  Reserved;
    DWORD TimerInterval;
    DWORD64 TargetProcessors;   
    DWORD PStateHandler;
    DWORD PStateContext;
    DWORD TStateHandler;
    DWORD TStateContext;
    DWORD FeedbackHandler;
    DWORD Reserved1;
    DWORD64 Reserved2;
    PPM_WMI_PERF_STATE State[1];
} PPM_WMI_PERF_STATES, *PPPM_WMI_PERF_STATES;

typedef struct {
    DWORD Count;
    DWORD MaxFrequency;
    DWORD CurrentState;         
    DWORD MaxPerfState;         
    DWORD MinPerfState;         
    DWORD LowestPerfState;      
    DWORD ThermalConstraint;
    BYTE  BusyAdjThreshold;
    BYTE  PolicyType;           
    BYTE  Type;
    BYTE  Reserved;
    DWORD TimerInterval;
    PVOID TargetProcessors;     
    DWORD PStateHandler;
    DWORD PStateContext;
    DWORD TStateHandler;
    DWORD TStateContext;
    DWORD FeedbackHandler;
    DWORD Reserved1;
    DWORD64 Reserved2;
    PPM_WMI_PERF_STATE State[1];
} PPM_WMI_PERF_STATES_EX, *PPPM_WMI_PERF_STATES_EX;







typedef struct {
    DWORD IdleTransitions;
    DWORD FailedTransitions;
    DWORD InvalidBucketIndex;
    DWORD64 TotalTime;
    DWORD IdleTimeBuckets[6];
} PPM_IDLE_STATE_ACCOUNTING, *PPPM_IDLE_STATE_ACCOUNTING;

typedef struct {
    DWORD StateCount;
    DWORD TotalTransitions;
    DWORD ResetCount;
    DWORD64 StartTime;
    PPM_IDLE_STATE_ACCOUNTING State[1];
} PPM_IDLE_ACCOUNTING, *PPPM_IDLE_ACCOUNTING;







typedef struct {
    DWORD64 TotalTimeUs;
    DWORD MinTimeUs;
    DWORD MaxTimeUs;
    DWORD Count;
} PPM_IDLE_STATE_BUCKET_EX, *PPPM_IDLE_STATE_BUCKET_EX;

typedef struct {
    DWORD64 TotalTime;
    DWORD IdleTransitions;
    DWORD FailedTransitions;
    DWORD InvalidBucketIndex;
    DWORD MinTimeUs;
    DWORD MaxTimeUs;
    DWORD CancelledTransitions;
    PPM_IDLE_STATE_BUCKET_EX IdleTimeBuckets[16];
} PPM_IDLE_STATE_ACCOUNTING_EX, *PPPM_IDLE_STATE_ACCOUNTING_EX;

typedef struct {
    DWORD StateCount;
    DWORD TotalTransitions;
    DWORD ResetCount;
    DWORD AbortCount;
    DWORD64 StartTime;
      PPM_IDLE_STATE_ACCOUNTING_EX State[1];
} PPM_IDLE_ACCOUNTING_EX, *PPPM_IDLE_ACCOUNTING_EX;



























































extern "C" const GUID  PPM_PERFSTATE_CHANGE_GUID;
#line 13577 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


extern "C" const GUID  PPM_PERFSTATE_DOMAIN_CHANGE_GUID;
#line 13581 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


extern "C" const GUID  PPM_IDLESTATE_CHANGE_GUID;
#line 13585 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


extern "C" const GUID  PPM_PERFSTATES_DATA_GUID;
#line 13589 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


extern "C" const GUID  PPM_IDLESTATES_DATA_GUID;
#line 13593 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


extern "C" const GUID  PPM_IDLE_ACCOUNTING_GUID;
#line 13597 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


extern "C" const GUID  PPM_IDLE_ACCOUNTING_EX_GUID;
#line 13601 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


extern "C" const GUID  PPM_THERMALCONSTRAINT_GUID;
#line 13605 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


extern "C" const GUID  PPM_PERFMON_PERFSTATE_GUID;
#line 13609 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


extern "C" const GUID  PPM_THERMAL_POLICY_CHANGE_GUID;
#line 13613 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


typedef struct {
    DWORD State;
    DWORD Status;
    DWORD Latency;
    DWORD Speed;
    DWORD Processor;
} PPM_PERFSTATE_EVENT, *PPPM_PERFSTATE_EVENT;

typedef struct {
    DWORD State;
    DWORD Latency;
    DWORD Speed;
    DWORD64 Processors;
} PPM_PERFSTATE_DOMAIN_EVENT, *PPPM_PERFSTATE_DOMAIN_EVENT;

typedef struct {
    DWORD NewState;
    DWORD OldState;
    DWORD64 Processors;
} PPM_IDLESTATE_EVENT, *PPPM_IDLESTATE_EVENT;

typedef struct {
    DWORD ThermalConstraint;
    DWORD64 Processors;
} PPM_THERMALCHANGE_EVENT, *PPPM_THERMALCHANGE_EVENT;

#pragma warning(push)
#pragma warning(disable:4121)

typedef struct {
    BYTE  Mode;
    DWORD64 Processors;
} PPM_THERMAL_POLICY_EVENT, *PPPM_THERMAL_POLICY_EVENT;

#pragma warning(pop)




typedef struct {
    POWER_ACTION    Action;
    DWORD           Flags;
    DWORD           EventCode;
} POWER_ACTION_POLICY, *PPOWER_ACTION_POLICY;

































typedef struct {
    BOOLEAN                 Enable;
    BYTE                    Spare[3];
    DWORD                   BatteryLevel;
    POWER_ACTION_POLICY     PowerPolicy;
    SYSTEM_POWER_STATE      MinSystemState;
} SYSTEM_POWER_LEVEL, *PSYSTEM_POWER_LEVEL;








typedef struct _SYSTEM_POWER_POLICY {
    DWORD                   Revision;       

    
    POWER_ACTION_POLICY     PowerButton;
    POWER_ACTION_POLICY     SleepButton;
    POWER_ACTION_POLICY     LidClose;
    SYSTEM_POWER_STATE      LidOpenWake;
    DWORD                   Reserved;

    
    POWER_ACTION_POLICY     Idle;
    DWORD                   IdleTimeout;
    BYTE                    IdleSensitivity;

    BYTE                    DynamicThrottle;
    BYTE                    Spare2[2];

    
    SYSTEM_POWER_STATE      MinSleep;
    SYSTEM_POWER_STATE      MaxSleep;
    SYSTEM_POWER_STATE      ReducedLatencySleep;
    DWORD                   WinLogonFlags;

    DWORD                   Spare3;

    
    
    DWORD                   DozeS4Timeout;

    
    DWORD                   BroadcastCapacityResolution;
    SYSTEM_POWER_LEVEL      DischargePolicy[4];

    
    DWORD                   VideoTimeout;
    BOOLEAN                 VideoDimDisplay;
    DWORD                   VideoReserved[3];

    
    DWORD                   SpindownTimeout;

    
    BOOLEAN                 OptimizeForPower;
    BYTE                    FanThrottleTolerance;
    BYTE                    ForcedThrottle;
    BYTE                    MinThrottle;
    POWER_ACTION_POLICY     OverThrottled;

} SYSTEM_POWER_POLICY, *PSYSTEM_POWER_POLICY;










typedef struct {
    DWORD TimeCheck;
    BYTE  DemotePercent;
    BYTE  PromotePercent;
    BYTE  Spare[2];
} PROCESSOR_IDLESTATE_INFO, *PPROCESSOR_IDLESTATE_INFO;

typedef struct {
    WORD   Revision;
    union {
        WORD   AsWORD  ;
        struct {
            WORD   AllowScaling : 1;
            WORD   Disabled : 1;
            WORD   Reserved : 14;
        } ;
    } Flags;

    DWORD PolicyCount;
    PROCESSOR_IDLESTATE_INFO Policy[0x3];
} PROCESSOR_IDLESTATE_POLICY, *PPROCESSOR_IDLESTATE_POLICY;














typedef struct _PROCESSOR_POWER_POLICY_INFO {

    
    DWORD                   TimeCheck;                      
    DWORD                   DemoteLimit;                    
    DWORD                   PromoteLimit;                   

    
    BYTE                    DemotePercent;
    BYTE                    PromotePercent;
    BYTE                    Spare[2];

    
    DWORD                   AllowDemotion:1;
    DWORD                   AllowPromotion:1;
    DWORD                   Reserved:30;

} PROCESSOR_POWER_POLICY_INFO, *PPROCESSOR_POWER_POLICY_INFO;


typedef struct _PROCESSOR_POWER_POLICY {
    DWORD                       Revision;       

    
    BYTE                        DynamicThrottle;
    BYTE                        Spare[3];

    
    DWORD                       DisableCStates:1;
    DWORD                       Reserved:31;

    
    
    
    DWORD                       PolicyCount;
    PROCESSOR_POWER_POLICY_INFO Policy[3];

} PROCESSOR_POWER_POLICY, *PPROCESSOR_POWER_POLICY;





typedef struct {
    DWORD Revision;
    BYTE  MaxThrottle;
    BYTE  MinThrottle;
    BYTE  BusyAdjThreshold;
    union {
        BYTE  Spare;
        union {
            BYTE  AsBYTE ;
            struct {
                BYTE  NoDomainAccounting : 1;
                BYTE  IncreasePolicy: 2;
                BYTE  DecreasePolicy: 2;
                BYTE  Reserved : 3;
            } ;
        } Flags;
    } ;

    DWORD TimeCheck;
    DWORD IncreaseTime;
    DWORD DecreaseTime;
    DWORD IncreasePercent;
    DWORD DecreasePercent;
} PROCESSOR_PERFSTATE_POLICY, *PPROCESSOR_PERFSTATE_POLICY;


typedef struct _ADMINISTRATOR_POWER_POLICY {

    
    SYSTEM_POWER_STATE      MinSleep;
    SYSTEM_POWER_STATE      MaxSleep;

    
    DWORD                   MinVideoTimeout;
    DWORD                   MaxVideoTimeout;

    
    DWORD                   MinSpindownTimeout;
    DWORD                   MaxSpindownTimeout;
} ADMINISTRATOR_POWER_POLICY, *PADMINISTRATOR_POWER_POLICY;


typedef struct {
    
    BOOLEAN             PowerButtonPresent;
    BOOLEAN             SleepButtonPresent;
    BOOLEAN             LidPresent;
    BOOLEAN             SystemS1;
    BOOLEAN             SystemS2;
    BOOLEAN             SystemS3;
    BOOLEAN             SystemS4;           
    BOOLEAN             SystemS5;           
    BOOLEAN             HiberFilePresent;
    BOOLEAN             FullWake;
    BOOLEAN             VideoDimPresent;
    BOOLEAN             ApmPresent;
    BOOLEAN             UpsPresent;

    
    BOOLEAN             ThermalControl;
    BOOLEAN             ProcessorThrottle;
    BYTE                ProcessorMinThrottle;




#line 13912 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
    BYTE                ProcessorMaxThrottle;
    BOOLEAN             FastSystemS4;
    BOOLEAN             Hiberboot;
    BOOLEAN             WakeAlarmPresent;
    BOOLEAN             AoAc;
#line 13918 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

    
    BOOLEAN             DiskSpinDown;
    BYTE                spare3[8];

    
    BOOLEAN             SystemBatteriesPresent;
    BOOLEAN             BatteriesAreShortTerm;
    BATTERY_REPORTING_SCALE BatteryScale[3];

    
    SYSTEM_POWER_STATE  AcOnLineWake;
    SYSTEM_POWER_STATE  SoftLidWake;
    SYSTEM_POWER_STATE  RtcWake;
    SYSTEM_POWER_STATE  MinDeviceWakeState; 
    SYSTEM_POWER_STATE  DefaultLowLatencyWake;
} SYSTEM_POWER_CAPABILITIES, *PSYSTEM_POWER_CAPABILITIES;

typedef struct {
    BOOLEAN             AcOnLine;
    BOOLEAN             BatteryPresent;
    BOOLEAN             Charging;
    BOOLEAN             Discharging;
    BOOLEAN             Spare1[3];

    BYTE                Tag;

    DWORD               MaxCapacity;
    DWORD               RemainingCapacity;
    DWORD               Rate;
    DWORD               EstimatedTime;

    DWORD               DefaultAlert1;
    DWORD               DefaultAlert2;
} SYSTEM_BATTERY_STATE, *PSYSTEM_BATTERY_STATE;










#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack4.h"























#pragma warning(disable:4103)

#pragma pack(push,4)


#line 30 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack4.h"


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack4.h"
#line 34 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack4.h"
#line 13964 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"







#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack2.h"























#pragma warning(disable:4103)

#pragma pack(push,2)


#line 30 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack2.h"


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack2.h"
#line 34 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack2.h"
#line 13972 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"









#line 13982 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct _IMAGE_DOS_HEADER {      
    WORD   e_magic;                     
    WORD   e_cblp;                      
    WORD   e_cp;                        
    WORD   e_crlc;                      
    WORD   e_cparhdr;                   
    WORD   e_minalloc;                  
    WORD   e_maxalloc;                  
    WORD   e_ss;                        
    WORD   e_sp;                        
    WORD   e_csum;                      
    WORD   e_ip;                        
    WORD   e_cs;                        
    WORD   e_lfarlc;                    
    WORD   e_ovno;                      
    WORD   e_res[4];                    
    WORD   e_oemid;                     
    WORD   e_oeminfo;                   
    WORD   e_res2[10];                  
    LONG   e_lfanew;                    
  } IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

typedef struct _IMAGE_OS2_HEADER {      
    WORD   ne_magic;                    
    CHAR   ne_ver;                      
    CHAR   ne_rev;                      
    WORD   ne_enttab;                   
    WORD   ne_cbenttab;                 
    LONG   ne_crc;                      
    WORD   ne_flags;                    
    WORD   ne_autodata;                 
    WORD   ne_heap;                     
    WORD   ne_stack;                    
    LONG   ne_csip;                     
    LONG   ne_sssp;                     
    WORD   ne_cseg;                     
    WORD   ne_cmod;                     
    WORD   ne_cbnrestab;                
    WORD   ne_segtab;                   
    WORD   ne_rsrctab;                  
    WORD   ne_restab;                   
    WORD   ne_modtab;                   
    WORD   ne_imptab;                   
    LONG   ne_nrestab;                  
    WORD   ne_cmovent;                  
    WORD   ne_align;                    
    WORD   ne_cres;                     
    BYTE   ne_exetyp;                   
    BYTE   ne_flagsothers;              
    WORD   ne_pretthunks;               
    WORD   ne_psegrefbytes;             
    WORD   ne_swaparea;                 
    WORD   ne_expver;                   
  } IMAGE_OS2_HEADER, *PIMAGE_OS2_HEADER;

typedef struct _IMAGE_VXD_HEADER {      
    WORD   e32_magic;                   
    BYTE   e32_border;                  
    BYTE   e32_worder;                  
    DWORD  e32_level;                   
    WORD   e32_cpu;                     
    WORD   e32_os;                      
    DWORD  e32_ver;                     
    DWORD  e32_mflags;                  
    DWORD  e32_mpages;                  
    DWORD  e32_startobj;                
    DWORD  e32_eip;                     
    DWORD  e32_stackobj;                
    DWORD  e32_esp;                     
    DWORD  e32_pagesize;                
    DWORD  e32_lastpagesize;            
    DWORD  e32_fixupsize;               
    DWORD  e32_fixupsum;                
    DWORD  e32_ldrsize;                 
    DWORD  e32_ldrsum;                  
    DWORD  e32_objtab;                  
    DWORD  e32_objcnt;                  
    DWORD  e32_objmap;                  
    DWORD  e32_itermap;                 
    DWORD  e32_rsrctab;                 
    DWORD  e32_rsrccnt;                 
    DWORD  e32_restab;                  
    DWORD  e32_enttab;                  
    DWORD  e32_dirtab;                  
    DWORD  e32_dircnt;                  
    DWORD  e32_fpagetab;                
    DWORD  e32_frectab;                 
    DWORD  e32_impmod;                  
    DWORD  e32_impmodcnt;               
    DWORD  e32_impproc;                 
    DWORD  e32_pagesum;                 
    DWORD  e32_datapage;                
    DWORD  e32_preload;                 
    DWORD  e32_nrestab;                 
    DWORD  e32_cbnrestab;               
    DWORD  e32_nressum;                 
    DWORD  e32_autodata;                
    DWORD  e32_debuginfo;               
    DWORD  e32_debuglen;                
    DWORD  e32_instpreload;             
    DWORD  e32_instdemand;              
    DWORD  e32_heapsize;                
    BYTE   e32_res3[12];                
    DWORD  e32_winresoff;
    DWORD  e32_winreslen;
    WORD   e32_devid;                   
    WORD   e32_ddkver;                  
  } IMAGE_VXD_HEADER, *PIMAGE_VXD_HEADER;


#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


























#pragma warning(disable:4103)

#pragma pack(pop)


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


#line 36 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 37 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 14094 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 14095 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





typedef struct _IMAGE_FILE_HEADER {
    WORD    Machine;
    WORD    NumberOfSections;
    DWORD   TimeDateStamp;
    DWORD   PointerToSymbolTable;
    DWORD   NumberOfSymbols;
    WORD    SizeOfOptionalHeader;
    WORD    Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;






















































typedef struct _IMAGE_DATA_DIRECTORY {
    DWORD   VirtualAddress;
    DWORD   Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;







typedef struct _IMAGE_OPTIONAL_HEADER {
    
    
    

    WORD    Magic;
    BYTE    MajorLinkerVersion;
    BYTE    MinorLinkerVersion;
    DWORD   SizeOfCode;
    DWORD   SizeOfInitializedData;
    DWORD   SizeOfUninitializedData;
    DWORD   AddressOfEntryPoint;
    DWORD   BaseOfCode;
    DWORD   BaseOfData;

    
    
    

    DWORD   ImageBase;
    DWORD   SectionAlignment;
    DWORD   FileAlignment;
    WORD    MajorOperatingSystemVersion;
    WORD    MinorOperatingSystemVersion;
    WORD    MajorImageVersion;
    WORD    MinorImageVersion;
    WORD    MajorSubsystemVersion;
    WORD    MinorSubsystemVersion;
    DWORD   Win32VersionValue;
    DWORD   SizeOfImage;
    DWORD   SizeOfHeaders;
    DWORD   CheckSum;
    WORD    Subsystem;
    WORD    DllCharacteristics;
    DWORD   SizeOfStackReserve;
    DWORD   SizeOfStackCommit;
    DWORD   SizeOfHeapReserve;
    DWORD   SizeOfHeapCommit;
    DWORD   LoaderFlags;
    DWORD   NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct _IMAGE_ROM_OPTIONAL_HEADER {
    WORD   Magic;
    BYTE   MajorLinkerVersion;
    BYTE   MinorLinkerVersion;
    DWORD  SizeOfCode;
    DWORD  SizeOfInitializedData;
    DWORD  SizeOfUninitializedData;
    DWORD  AddressOfEntryPoint;
    DWORD  BaseOfCode;
    DWORD  BaseOfData;
    DWORD  BaseOfBss;
    DWORD  GprMask;
    DWORD  CprMask[4];
    DWORD  GpValue;
} IMAGE_ROM_OPTIONAL_HEADER, *PIMAGE_ROM_OPTIONAL_HEADER;

typedef struct _IMAGE_OPTIONAL_HEADER64 {
    WORD        Magic;
    BYTE        MajorLinkerVersion;
    BYTE        MinorLinkerVersion;
    DWORD       SizeOfCode;
    DWORD       SizeOfInitializedData;
    DWORD       SizeOfUninitializedData;
    DWORD       AddressOfEntryPoint;
    DWORD       BaseOfCode;
    ULONGLONG   ImageBase;
    DWORD       SectionAlignment;
    DWORD       FileAlignment;
    WORD        MajorOperatingSystemVersion;
    WORD        MinorOperatingSystemVersion;
    WORD        MajorImageVersion;
    WORD        MinorImageVersion;
    WORD        MajorSubsystemVersion;
    WORD        MinorSubsystemVersion;
    DWORD       Win32VersionValue;
    DWORD       SizeOfImage;
    DWORD       SizeOfHeaders;
    DWORD       CheckSum;
    WORD        Subsystem;
    WORD        DllCharacteristics;
    ULONGLONG   SizeOfStackReserve;
    ULONGLONG   SizeOfStackCommit;
    ULONGLONG   SizeOfHeapReserve;
    ULONGLONG   SizeOfHeapCommit;
    DWORD       LoaderFlags;
    DWORD       NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;






typedef IMAGE_OPTIONAL_HEADER64             IMAGE_OPTIONAL_HEADER;
typedef PIMAGE_OPTIONAL_HEADER64            PIMAGE_OPTIONAL_HEADER;





#line 14279 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct _IMAGE_NT_HEADERS64 {
    DWORD Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

typedef struct _IMAGE_NT_HEADERS {
    DWORD Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

typedef struct _IMAGE_ROM_HEADERS {
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
} IMAGE_ROM_HEADERS, *PIMAGE_ROM_HEADERS;


typedef IMAGE_NT_HEADERS64                  IMAGE_NT_HEADERS;
typedef PIMAGE_NT_HEADERS64                 PIMAGE_NT_HEADERS;



#line 14304 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



































































typedef struct ANON_OBJECT_HEADER {
    WORD    Sig1;            
    WORD    Sig2;            
    WORD    Version;         
    WORD    Machine;
    DWORD   TimeDateStamp;
    CLSID   ClassID;         
    DWORD   SizeOfData;      
} ANON_OBJECT_HEADER;

typedef struct ANON_OBJECT_HEADER_V2 {
    WORD    Sig1;            
    WORD    Sig2;            
    WORD    Version;         
    WORD    Machine;
    DWORD   TimeDateStamp;
    CLSID   ClassID;         
    DWORD   SizeOfData;      
    DWORD   Flags;           
    DWORD   MetaDataSize;    
    DWORD   MetaDataOffset;  
} ANON_OBJECT_HEADER_V2;

typedef struct ANON_OBJECT_HEADER_BIGOBJ {
   
    WORD    Sig1;            
    WORD    Sig2;            
    WORD    Version;         
    WORD    Machine;         
    DWORD   TimeDateStamp;
    CLSID   ClassID;         
    DWORD   SizeOfData;      
    DWORD   Flags;           
    DWORD   MetaDataSize;    
    DWORD   MetaDataOffset;  

    
    DWORD   NumberOfSections; 
    DWORD   PointerToSymbolTable;
    DWORD   NumberOfSymbols;
} ANON_OBJECT_HEADER_BIGOBJ;







typedef struct _IMAGE_SECTION_HEADER {
    BYTE    Name[8];
    union {
            DWORD   PhysicalAddress;
            DWORD   VirtualSize;
    } Misc;
    DWORD   VirtualAddress;
    DWORD   SizeOfRawData;
    DWORD   PointerToRawData;
    DWORD   PointerToRelocations;
    DWORD   PointerToLinenumbers;
    WORD    NumberOfRelocations;
    WORD    NumberOfLinenumbers;
    DWORD   Characteristics;
} IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

































































#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack2.h"























#pragma warning(disable:4103)

#pragma pack(push,2)


#line 30 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack2.h"


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack2.h"
#line 34 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack2.h"
#line 14500 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 14501 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





typedef struct _IMAGE_SYMBOL {
    union {
        BYTE    ShortName[8];
        struct {
            DWORD   Short;     
            DWORD   Long;      
        } Name;
        DWORD   LongName[2];    
    } N;
    DWORD   Value;
    SHORT   SectionNumber;
    WORD    Type;
    BYTE    StorageClass;
    BYTE    NumberOfAuxSymbols;
} IMAGE_SYMBOL;
typedef IMAGE_SYMBOL __unaligned *PIMAGE_SYMBOL;



typedef struct _IMAGE_SYMBOL_EX {
    union {
        BYTE     ShortName[8];
        struct {
            DWORD   Short;     
            DWORD   Long;      
        } Name;
        DWORD   LongName[2];    
    } N;
    DWORD   Value;
    LONG    SectionNumber;
    WORD    Type;
    BYTE    StorageClass;
    BYTE    NumberOfAuxSymbols;
} IMAGE_SYMBOL_EX;
typedef IMAGE_SYMBOL_EX __unaligned *PIMAGE_SYMBOL_EX;
































































































#line 14638 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




#line 14643 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





#line 14649 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




#line 14654 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



#line 14658 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


#line 14661 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack2.h"























#pragma warning(disable:4103)

#pragma pack(push,2)


#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack2.h"


#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack2.h"
#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack2.h"
#line 14663 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct IMAGE_AUX_SYMBOL_TOKEN_DEF {
    BYTE  bAuxType;                  
    BYTE  bReserved;                 
    DWORD SymbolTableIndex;
    BYTE  rgbReserved[12];           
} IMAGE_AUX_SYMBOL_TOKEN_DEF;

typedef IMAGE_AUX_SYMBOL_TOKEN_DEF __unaligned *PIMAGE_AUX_SYMBOL_TOKEN_DEF;

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"


























#pragma warning(disable:4103)

#pragma pack(pop)


#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"


#line 36 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"
#line 37 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"
#line 14674 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





typedef union _IMAGE_AUX_SYMBOL {
    struct {
        DWORD    TagIndex;                      
        union {
            struct {
                WORD    Linenumber;             
                WORD    Size;                   
            } LnSz;
           DWORD    TotalSize;
        } Misc;
        union {
            struct {                            
                DWORD    PointerToLinenumber;
                DWORD    PointerToNextFunction;
            } Function;
            struct {                            
                WORD     Dimension[4];
            } Array;
        } FcnAry;
        WORD    TvIndex;                        
    } Sym;
    struct {
        BYTE    Name[18];
    } File;
    struct {
        DWORD   Length;                         
        WORD    NumberOfRelocations;            
        WORD    NumberOfLinenumbers;            
        DWORD   CheckSum;                       
        SHORT   Number;                         
        BYTE    Selection;                      
	BYTE    bReserved;
	SHORT   HighNumber;                     
    } Section;
    IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
    struct {
        DWORD crc;
        BYTE  rgbReserved[14];
    } CRC;
} IMAGE_AUX_SYMBOL;
typedef IMAGE_AUX_SYMBOL __unaligned *PIMAGE_AUX_SYMBOL;

typedef union _IMAGE_AUX_SYMBOL_EX {
    struct {
        DWORD   WeakDefaultSymIndex;                       
        DWORD   WeakSearchType;
        BYTE    rgbReserved[12];
    } Sym;
    struct {
        BYTE    Name[sizeof(IMAGE_SYMBOL_EX)];
    } File;
    struct {
        DWORD   Length;                         
        WORD    NumberOfRelocations;            
        WORD    NumberOfLinenumbers;            
        DWORD   CheckSum;                       
        SHORT   Number;                         
        BYTE    Selection;                      
        BYTE    bReserved;
        SHORT   HighNumber;                     
        BYTE    rgbReserved[2];
    } Section;
    struct{
        IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
        BYTE  rgbReserved[2];
    };
    struct {
        DWORD crc;
        BYTE  rgbReserved[16];
    } CRC;
} IMAGE_AUX_SYMBOL_EX;
typedef IMAGE_AUX_SYMBOL_EX __unaligned *PIMAGE_AUX_SYMBOL_EX;

typedef enum IMAGE_AUX_SYMBOL_TYPE {
    IMAGE_AUX_SYMBOL_TYPE_TOKEN_DEF = 1,
} IMAGE_AUX_SYMBOL_TYPE;






















typedef struct _IMAGE_RELOCATION {
    union {
        DWORD   VirtualAddress;
        DWORD   RelocCount;             
    } ;
    DWORD   SymbolTableIndex;
    WORD    Type;
} IMAGE_RELOCATION;
typedef IMAGE_RELOCATION __unaligned *PIMAGE_RELOCATION;




























































































































                                                
                                                
                                                
                                                















































































































































































































































typedef struct _IMAGE_LINENUMBER {
    union {
        DWORD   SymbolTableIndex;               
        DWORD   VirtualAddress;                 
    } Type;
    WORD    Linenumber;                         
} IMAGE_LINENUMBER;
typedef IMAGE_LINENUMBER __unaligned *PIMAGE_LINENUMBER;


#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


























#pragma warning(disable:4103)

#pragma pack(pop)


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


#line 36 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 37 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 15164 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 15165 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





typedef struct _IMAGE_BASE_RELOCATION {
    DWORD   VirtualAddress;
    DWORD   SizeOfBlock;

} IMAGE_BASE_RELOCATION;
typedef IMAGE_BASE_RELOCATION __unaligned * PIMAGE_BASE_RELOCATION;









































typedef struct _IMAGE_ARCHIVE_MEMBER_HEADER {
    BYTE     Name[16];                          
    BYTE     Date[12];                          
    BYTE     UserID[6];                         
    BYTE     GroupID[6];                        
    BYTE     Mode[8];                           
    BYTE     Size[10];                          
    BYTE     EndHeader[2];                      
} IMAGE_ARCHIVE_MEMBER_HEADER, *PIMAGE_ARCHIVE_MEMBER_HEADER;











typedef struct _IMAGE_EXPORT_DIRECTORY {
    DWORD   Characteristics;
    DWORD   TimeDateStamp;
    WORD    MajorVersion;
    WORD    MinorVersion;
    DWORD   Name;
    DWORD   Base;
    DWORD   NumberOfFunctions;
    DWORD   NumberOfNames;
    DWORD   AddressOfFunctions;     
    DWORD   AddressOfNames;         
    DWORD   AddressOfNameOrdinals;  
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY;





typedef struct _IMAGE_IMPORT_BY_NAME {
    WORD    Hint;
    CHAR   Name[1];
} IMAGE_IMPORT_BY_NAME, *PIMAGE_IMPORT_BY_NAME;

#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack8.h"























#pragma warning(disable:4103)

#pragma pack(push,8)


#line 30 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack8.h"


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack8.h"
#line 34 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\pshpack8.h"
#line 15261 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct _IMAGE_THUNK_DATA64 {
    union {
        ULONGLONG ForwarderString;  
        ULONGLONG Function;         
        ULONGLONG Ordinal;
        ULONGLONG AddressOfData;    
    } u1;
} IMAGE_THUNK_DATA64;
typedef IMAGE_THUNK_DATA64 * PIMAGE_THUNK_DATA64;

#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


























#pragma warning(disable:4103)

#pragma pack(pop)


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


#line 36 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 37 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 15273 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct _IMAGE_THUNK_DATA32 {
    union {
        DWORD ForwarderString;      
        DWORD Function;             
        DWORD Ordinal;
        DWORD AddressOfData;        
    } u1;
} IMAGE_THUNK_DATA32;
typedef IMAGE_THUNK_DATA32 * PIMAGE_THUNK_DATA32;












typedef void
(__stdcall *PIMAGE_TLS_CALLBACK) (
    PVOID DllHandle,
    DWORD Reason,
    PVOID Reserved
    );

typedef struct _IMAGE_TLS_DIRECTORY64 {
    ULONGLONG   StartAddressOfRawData;
    ULONGLONG   EndAddressOfRawData;
    ULONGLONG   AddressOfIndex;         
    ULONGLONG   AddressOfCallBacks;     
    DWORD   SizeOfZeroFill;
    DWORD   Characteristics;
} IMAGE_TLS_DIRECTORY64;
typedef IMAGE_TLS_DIRECTORY64 * PIMAGE_TLS_DIRECTORY64;

typedef struct _IMAGE_TLS_DIRECTORY32 {
    DWORD   StartAddressOfRawData;
    DWORD   EndAddressOfRawData;
    DWORD   AddressOfIndex;             
    DWORD   AddressOfCallBacks;         
    DWORD   SizeOfZeroFill;
    DWORD   Characteristics;
} IMAGE_TLS_DIRECTORY32;
typedef IMAGE_TLS_DIRECTORY32 * PIMAGE_TLS_DIRECTORY32;




typedef IMAGE_THUNK_DATA64              IMAGE_THUNK_DATA;
typedef PIMAGE_THUNK_DATA64             PIMAGE_THUNK_DATA;

typedef IMAGE_TLS_DIRECTORY64           IMAGE_TLS_DIRECTORY;
typedef PIMAGE_TLS_DIRECTORY64          PIMAGE_TLS_DIRECTORY;








#line 15339 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct _IMAGE_IMPORT_DESCRIPTOR {
    union {
        DWORD   Characteristics;            
        DWORD   OriginalFirstThunk;         
    } ;
    DWORD   TimeDateStamp;                  
                                            
                                            
                                            

    DWORD   ForwarderChain;                 
    DWORD   Name;
    DWORD   FirstThunk;                     
} IMAGE_IMPORT_DESCRIPTOR;
typedef IMAGE_IMPORT_DESCRIPTOR __unaligned *PIMAGE_IMPORT_DESCRIPTOR;





typedef struct _IMAGE_BOUND_IMPORT_DESCRIPTOR {
    DWORD   TimeDateStamp;
    WORD    OffsetModuleName;
    WORD    NumberOfModuleForwarderRefs;

} IMAGE_BOUND_IMPORT_DESCRIPTOR,  *PIMAGE_BOUND_IMPORT_DESCRIPTOR;

typedef struct _IMAGE_BOUND_FORWARDER_REF {
    DWORD   TimeDateStamp;
    WORD    OffsetModuleName;
    WORD    Reserved;
} IMAGE_BOUND_FORWARDER_REF, *PIMAGE_BOUND_FORWARDER_REF;

typedef struct _IMAGE_DELAYLOAD_DESCRIPTOR {
    union {
        DWORD AllAttributes;
        struct {
            DWORD RvaBased : 1;             
            DWORD ReservedAttributes : 31;
        };
    } Attributes;

    DWORD DllNameRVA;                       
    DWORD ModuleHandleRVA;                  
    DWORD ImportAddressTableRVA;            
    DWORD ImportNameTableRVA;               
    DWORD BoundImportAddressTableRVA;       
    DWORD UnloadInformationTableRVA;        
    DWORD TimeDateStamp;                    
                                            

} IMAGE_DELAYLOAD_DESCRIPTOR, *PIMAGE_DELAYLOAD_DESCRIPTOR;

typedef const IMAGE_DELAYLOAD_DESCRIPTOR *PCIMAGE_DELAYLOAD_DESCRIPTOR;



















typedef struct _IMAGE_RESOURCE_DIRECTORY {
    DWORD   Characteristics;
    DWORD   TimeDateStamp;
    WORD    MajorVersion;
    WORD    MinorVersion;
    WORD    NumberOfNamedEntries;
    WORD    NumberOfIdEntries;

} IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;


















typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union {
        struct {
            DWORD NameOffset:31;
            DWORD NameIsString:1;
        } ;
        DWORD   Name;
        WORD    Id;
    } ;
    union {
        DWORD   OffsetToData;
        struct {
            DWORD   OffsetToDirectory:31;
            DWORD   DataIsDirectory:1;
        } ;
    } ;
} IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;










typedef struct _IMAGE_RESOURCE_DIRECTORY_STRING {
    WORD    Length;
    CHAR    NameString[ 1 ];
} IMAGE_RESOURCE_DIRECTORY_STRING, *PIMAGE_RESOURCE_DIRECTORY_STRING;


typedef struct _IMAGE_RESOURCE_DIR_STRING_U {
    WORD    Length;
    WCHAR   NameString[ 1 ];
} IMAGE_RESOURCE_DIR_STRING_U, *PIMAGE_RESOURCE_DIR_STRING_U;











typedef struct _IMAGE_RESOURCE_DATA_ENTRY {
    DWORD   OffsetToData;
    DWORD   Size;
    DWORD   CodePage;
    DWORD   Reserved;
} IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;





typedef struct {
    DWORD   Size;
    DWORD   TimeDateStamp;
    WORD    MajorVersion;
    WORD    MinorVersion;
    DWORD   GlobalFlagsClear;
    DWORD   GlobalFlagsSet;
    DWORD   CriticalSectionDefaultTimeout;
    DWORD   DeCommitFreeBlockThreshold;
    DWORD   DeCommitTotalFreeThreshold;
    DWORD   LockPrefixTable;            
    DWORD   MaximumAllocationSize;
    DWORD   VirtualMemoryThreshold;
    DWORD   ProcessHeapFlags;
    DWORD   ProcessAffinityMask;
    WORD    CSDVersion;
    WORD    Reserved1;
    DWORD   EditList;                   
    DWORD   SecurityCookie;             
    DWORD   SEHandlerTable;             
    DWORD   SEHandlerCount;
} IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

typedef struct {
    DWORD      Size;
    DWORD      TimeDateStamp;
    WORD       MajorVersion;
    WORD       MinorVersion;
    DWORD      GlobalFlagsClear;
    DWORD      GlobalFlagsSet;
    DWORD      CriticalSectionDefaultTimeout;
    ULONGLONG  DeCommitFreeBlockThreshold;
    ULONGLONG  DeCommitTotalFreeThreshold;
    ULONGLONG  LockPrefixTable;         
    ULONGLONG  MaximumAllocationSize;
    ULONGLONG  VirtualMemoryThreshold;
    ULONGLONG  ProcessAffinityMask;
    DWORD      ProcessHeapFlags;
    WORD       CSDVersion;
    WORD       Reserved1;
    ULONGLONG  EditList;                
    ULONGLONG  SecurityCookie;          
    ULONGLONG  SEHandlerTable;          
    ULONGLONG  SEHandlerCount;
} IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;


typedef IMAGE_LOAD_CONFIG_DIRECTORY64     IMAGE_LOAD_CONFIG_DIRECTORY;
typedef PIMAGE_LOAD_CONFIG_DIRECTORY64    PIMAGE_LOAD_CONFIG_DIRECTORY;



#line 15552 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"










typedef struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY {
    DWORD FuncStart;
    DWORD PrologLen : 8;
    DWORD FuncLen : 22;
    DWORD ThirtyTwoBit : 1;
    DWORD ExceptionFlag : 1;
} IMAGE_CE_RUNTIME_FUNCTION_ENTRY, * PIMAGE_CE_RUNTIME_FUNCTION_ENTRY;

typedef struct _IMAGE_ARM_RUNTIME_FUNCTION_ENTRY {
    DWORD BeginAddress;
    union {
        DWORD UnwindData;
        struct {
            DWORD Flag : 2;
            DWORD FunctionLength : 11;
            DWORD Ret : 2;
            DWORD H : 1;
            DWORD Reg : 3;
            DWORD R : 1;
            DWORD L : 1;
            DWORD C : 1;
            DWORD StackAdjust : 10;
        } ;
    } ;
} IMAGE_ARM_RUNTIME_FUNCTION_ENTRY, * PIMAGE_ARM_RUNTIME_FUNCTION_ENTRY;

typedef struct _IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY {
    ULONGLONG BeginAddress;
    ULONGLONG EndAddress;
    ULONGLONG ExceptionHandler;
    ULONGLONG HandlerData;
    ULONGLONG PrologEndAddress;
} IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY;

typedef struct _IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD ExceptionHandler;
    DWORD HandlerData;
    DWORD PrologEndAddress;
} IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    DWORD BeginAddress;
    DWORD EndAddress;
    union {
        DWORD UnwindInfoAddress;
        DWORD UnwindData;
    } ;
} _IMAGE_RUNTIME_FUNCTION_ENTRY, *_PIMAGE_RUNTIME_FUNCTION_ENTRY;

typedef  _IMAGE_RUNTIME_FUNCTION_ENTRY  IMAGE_IA64_RUNTIME_FUNCTION_ENTRY;
typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_IA64_RUNTIME_FUNCTION_ENTRY;








#line 15624 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




#line 15629 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




#line 15634 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef  _IMAGE_RUNTIME_FUNCTION_ENTRY  IMAGE_RUNTIME_FUNCTION_ENTRY;
typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_RUNTIME_FUNCTION_ENTRY;

#line 15639 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





typedef struct _IMAGE_DEBUG_DIRECTORY {
    DWORD   Characteristics;
    DWORD   TimeDateStamp;
    WORD    MajorVersion;
    WORD    MinorVersion;
    DWORD   Type;
    DWORD   SizeOfData;
    DWORD   AddressOfRawData;
    DWORD   PointerToRawData;
} IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;















typedef struct _IMAGE_COFF_SYMBOLS_HEADER {
    DWORD   NumberOfSymbols;
    DWORD   LvaToFirstSymbol;
    DWORD   NumberOfLinenumbers;
    DWORD   LvaToFirstLinenumber;
    DWORD   RvaToFirstByteOfCode;
    DWORD   RvaToLastByteOfCode;
    DWORD   RvaToFirstByteOfData;
    DWORD   RvaToLastByteOfData;
} IMAGE_COFF_SYMBOLS_HEADER, *PIMAGE_COFF_SYMBOLS_HEADER;






typedef struct _FPO_DATA {
    DWORD       ulOffStart;             
    DWORD       cbProcSize;             
    DWORD       cdwLocals;              
    WORD        cdwParams;              
    WORD        cbProlog : 8;           
    WORD        cbRegs   : 3;           
    WORD        fHasSEH  : 1;           
    WORD        fUseBP   : 1;           
    WORD        reserved : 1;           
    WORD        cbFrame  : 2;           
} FPO_DATA, *PFPO_DATA;





typedef struct _IMAGE_DEBUG_MISC {
    DWORD       DataType;               
    DWORD       Length;                 
                                        
    BOOLEAN     Unicode;                
    BYTE        Reserved[ 3 ];
    BYTE        Data[ 1 ];              
} IMAGE_DEBUG_MISC, *PIMAGE_DEBUG_MISC;








typedef struct _IMAGE_FUNCTION_ENTRY {
    DWORD   StartingAddress;
    DWORD   EndingAddress;
    DWORD   EndOfPrologue;
} IMAGE_FUNCTION_ENTRY, *PIMAGE_FUNCTION_ENTRY;

typedef struct _IMAGE_FUNCTION_ENTRY64 {
    ULONGLONG   StartingAddress;
    ULONGLONG   EndingAddress;
    union {
        ULONGLONG   EndOfPrologue;
        ULONGLONG   UnwindInfoAddress;
    } ;
} IMAGE_FUNCTION_ENTRY64, *PIMAGE_FUNCTION_ENTRY64;





















typedef struct _IMAGE_SEPARATE_DEBUG_HEADER {
    WORD        Signature;
    WORD        Flags;
    WORD        Machine;
    WORD        Characteristics;
    DWORD       TimeDateStamp;
    DWORD       CheckSum;
    DWORD       ImageBase;
    DWORD       SizeOfImage;
    DWORD       NumberOfSections;
    DWORD       ExportedNamesSize;
    DWORD       DebugDirectorySize;
    DWORD       SectionAlignment;
    DWORD       Reserved[2];
} IMAGE_SEPARATE_DEBUG_HEADER, *PIMAGE_SEPARATE_DEBUG_HEADER;

typedef struct _NON_PAGED_DEBUG_INFO {
    WORD        Signature;
    WORD        Flags;
    DWORD       Size;
    WORD        Machine;
    WORD        Characteristics;
    DWORD       TimeDateStamp;
    DWORD       CheckSum;
    DWORD       SizeOfImage;
    ULONGLONG   ImageBase;
    
    
} NON_PAGED_DEBUG_INFO, *PNON_PAGED_DEBUG_INFO;







#line 15790 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



                                                









typedef struct _ImageArchitectureHeader {
    unsigned int AmaskValue: 1;                 
                                                
    int :7;                                     
    unsigned int AmaskShift: 8;                 
    int :16;                                    
    DWORD FirstEntryRVA;                        
} IMAGE_ARCHITECTURE_HEADER, *PIMAGE_ARCHITECTURE_HEADER;

typedef struct _ImageArchitectureEntry {
    DWORD FixupInstRVA;                         
    DWORD NewInst;                              
} IMAGE_ARCHITECTURE_ENTRY, *PIMAGE_ARCHITECTURE_ENTRY;

#line 1 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


























#pragma warning(disable:4103)

#pragma pack(pop)


#line 33 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"


#line 36 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 37 "c:\\p4\\external\\sdk\\windows8.0\\include\\shared\\poppack.h"
#line 15818 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








typedef struct IMPORT_OBJECT_HEADER {
    WORD    Sig1;                       
    WORD    Sig2;                       
    WORD    Version;
    WORD    Machine;
    DWORD   TimeDateStamp;              
    DWORD   SizeOfData;                 

    union {
        WORD    Ordinal;                
        WORD    Hint;
    } ;

    WORD    Type : 2;                   
    WORD    NameType : 3;               
    WORD    Reserved : 11;              
} IMPORT_OBJECT_HEADER;

typedef enum IMPORT_OBJECT_TYPE
{
    IMPORT_OBJECT_CODE = 0,
    IMPORT_OBJECT_DATA = 1,
    IMPORT_OBJECT_CONST = 2,
} IMPORT_OBJECT_TYPE;

typedef enum IMPORT_OBJECT_NAME_TYPE
{
    IMPORT_OBJECT_ORDINAL = 0,          
    IMPORT_OBJECT_NAME = 1,             
    IMPORT_OBJECT_NAME_NO_PREFIX = 2,   
    IMPORT_OBJECT_NAME_UNDECORATE = 3,  
                                        
} IMPORT_OBJECT_NAME_TYPE;





typedef enum ReplacesCorHdrNumericDefines
{

    COMIMAGE_FLAGS_ILONLY               =0x00000001,
    COMIMAGE_FLAGS_32BITREQUIRED        =0x00000002,
    COMIMAGE_FLAGS_IL_LIBRARY           =0x00000004,
    COMIMAGE_FLAGS_STRONGNAMESIGNED     =0x00000008,
    COMIMAGE_FLAGS_NATIVE_ENTRYPOINT    =0x00000010,
    COMIMAGE_FLAGS_TRACKDEBUGDATA       =0x00010000,


    COR_VERSION_MAJOR_V2                =2,
    COR_VERSION_MAJOR                   =COR_VERSION_MAJOR_V2,
    COR_VERSION_MINOR                   =5,
    COR_DELETED_NAME_LENGTH             =8,
    COR_VTABLEGAP_NAME_LENGTH           =8,


    NATIVE_TYPE_MAX_CB                  =1,
    COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE=0xFF,


    IMAGE_COR_MIH_METHODRVA             =0x01,
    IMAGE_COR_MIH_EHRVA                 =0x02,
    IMAGE_COR_MIH_BASICBLOCK            =0x08,


    COR_VTABLE_32BIT                    =0x01,          
    COR_VTABLE_64BIT                    =0x02,          
    COR_VTABLE_FROM_UNMANAGED           =0x04,          
    COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN  =0x08,  
    COR_VTABLE_CALL_MOST_DERIVED        =0x10,          


    IMAGE_COR_EATJ_THUNK_SIZE           =32,            


    
    MAX_CLASS_NAME                      =1024,
    MAX_PACKAGE_NAME                    =1024,
} ReplacesCorHdrNumericDefines;


typedef struct IMAGE_COR20_HEADER
{
    
    DWORD                   cb;
    WORD                    MajorRuntimeVersion;
    WORD                    MinorRuntimeVersion;

    
    IMAGE_DATA_DIRECTORY    MetaData;
    DWORD                   Flags;

    
    
    union {
        DWORD               EntryPointToken;
        DWORD               EntryPointRVA;
    } ;

    
    IMAGE_DATA_DIRECTORY    Resources;
    IMAGE_DATA_DIRECTORY    StrongNameSignature;

    
    IMAGE_DATA_DIRECTORY    CodeManagerTable;
    IMAGE_DATA_DIRECTORY    VTableFixups;
    IMAGE_DATA_DIRECTORY    ExportAddressTableJumps;

    
    IMAGE_DATA_DIRECTORY    ManagedNativeHeader;

} IMAGE_COR20_HEADER, *PIMAGE_COR20_HEADER;

#line 15940 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































#line 83 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"



#line 87 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"


























































































#line 178 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"
#line 15946 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"







#pragma region Desktop Family






__declspec(dllimport)
WORD  
__stdcall
RtlCaptureStackBackTrace(
      DWORD FramesToSkip,
      DWORD FramesToCapture,
      PVOID * BackTrace,
      PDWORD BackTraceHash
    );


#line 15972 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




__declspec(dllimport)
void
__stdcall
RtlCaptureContext(
      PCONTEXT ContextRecord
    );


#line 15985 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 15987 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion



#pragma region Desktop Family



__declspec(dllimport)
void
__stdcall
RtlUnwind(
      PVOID TargetFrame,
      PVOID TargetIp,
      PEXCEPTION_RECORD ExceptionRecord,
      PVOID ReturnValue
    );


#line 16007 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion




#pragma region Desktop Family



__declspec(dllimport)
BOOLEAN
__cdecl
RtlAddFunctionTable(
      PRUNTIME_FUNCTION FunctionTable,
      DWORD EntryCount,
      DWORD64 BaseAddress
    );


__declspec(dllimport)
BOOLEAN
__cdecl
RtlDeleteFunctionTable(
      PRUNTIME_FUNCTION FunctionTable
    );


__declspec(dllimport)
BOOLEAN
__cdecl
RtlInstallFunctionTableCallback(
      DWORD64 TableIdentifier,
      DWORD64 BaseAddress,
      DWORD Length,
      PGET_RUNTIME_FUNCTION_CALLBACK Callback,
      PVOID Context,
      PCWSTR OutOfProcessCallbackDll
    );







__declspec(dllimport)
DWORD   
__stdcall
RtlAddGrowableFunctionTable(
      PVOID * DynamicTable,
      PRUNTIME_FUNCTION FunctionTable,
      DWORD EntryCount,
      DWORD MaximumEntryCount,
      ULONG_PTR RangeBase,
      ULONG_PTR RangeEnd
    );


__declspec(dllimport)
void
__stdcall
RtlGrowFunctionTable(
      PVOID DynamicTable,
      DWORD NewEntryCount
    );


__declspec(dllimport)
void
__stdcall
RtlDeleteGrowableFunctionTable(
      PVOID DynamicTable
    );


#line 16083 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



#line 16087 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
PRUNTIME_FUNCTION
__stdcall
RtlLookupFunctionEntry(
      DWORD64 ControlPc,
      PDWORD64 ImageBase,
      PUNWIND_HISTORY_TABLE HistoryTable
    );


#line 16104 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
void
__cdecl
RtlRestoreContext(
      PCONTEXT ContextRecord,
      struct _EXCEPTION_RECORD * ExceptionRecord
    );


#line 16120 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
void
__stdcall
RtlUnwindEx(
      PVOID TargetFrame,
      PVOID TargetIp,
      PEXCEPTION_RECORD ExceptionRecord,
      PVOID ReturnValue,
      PCONTEXT ContextRecord,
      PUNWIND_HISTORY_TABLE HistoryTable
    );


#line 16140 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
PEXCEPTION_ROUTINE
__stdcall
RtlVirtualUnwind(
      DWORD HandlerType,
      DWORD64 ImageBase,
      DWORD64 ControlPc,
      PRUNTIME_FUNCTION FunctionEntry,
      PCONTEXT ContextRecord,
      PVOID * HandlerData,
      PDWORD64 EstablisherFrame,
      PKNONVOLATILE_CONTEXT_POINTERS ContextPointers
    );


#line 16162 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion

#line 16165 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





























































































































































#line 16323 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




































































































#line 16424 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

























#line 16450 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


#pragma region Application Family






__declspec(dllimport)
PVOID
__stdcall
RtlPcToFileHeader(
      PVOID PcValue,
      PVOID * BaseOfImage
    );


#line 16469 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 16471 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion


#pragma region Desktop Family








 
__declspec(dllimport)
SIZE_T
__stdcall
RtlCompareMemory(
      const void * Source1,
      const void * Source2,
      SIZE_T Length
    );


#line 16495 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 16497 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 16499 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion










#line 16511 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
















#pragma warning(push)
#pragma warning(disable:4324)   

typedef struct __declspec(align(16)) _SLIST_ENTRY {
    struct _SLIST_ENTRY *Next;
} SLIST_ENTRY, *PSLIST_ENTRY;

#pragma warning(pop)





#line 16541 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



typedef union __declspec(align(16)) _SLIST_HEADER {
    struct {  
        ULONGLONG Alignment;
        ULONGLONG Region;
    } ;
    struct {  
        ULONGLONG Depth:16;
        ULONGLONG Sequence:9;
        ULONGLONG NextEntry:39;
        ULONGLONG HeaderType:1; 
        ULONGLONG Init:1;       
        ULONGLONG Reserved:59;
        ULONGLONG Region:3;
    } Header8;
    struct {  
        ULONGLONG Depth:16;
        ULONGLONG Sequence:48;
        ULONGLONG HeaderType:1; 
        ULONGLONG Reserved:3;
        ULONGLONG NextEntry:60; 
    } HeaderX64;
} SLIST_HEADER, *PSLIST_HEADER;












#line 16579 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 16581 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


#pragma region Desktop Family


__declspec(dllimport)
void
__stdcall
RtlInitializeSListHead (
      PSLIST_HEADER ListHead
    );

 
__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlFirstEntrySList (
      const SLIST_HEADER *ListHead
    );

__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlInterlockedPopEntrySList (
      PSLIST_HEADER ListHead
    );

__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlInterlockedPushEntrySList (
      PSLIST_HEADER ListHead,
        PSLIST_ENTRY ListEntry
    );

__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlInterlockedPushListSListEx (
      PSLIST_HEADER ListHead,
        PSLIST_ENTRY List,
      PSLIST_ENTRY ListEnd,
      DWORD Count
    );

__declspec(dllimport)
PSLIST_ENTRY
__stdcall
RtlInterlockedFlushSList (
      PSLIST_HEADER ListHead
    );

__declspec(dllimport)
WORD  
__stdcall
RtlQueryDepthSList (
      PSLIST_HEADER ListHead
    );

#line 16641 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion


























typedef union _RTL_RUN_ONCE {       
    PVOID Ptr;                      
} RTL_RUN_ONCE, *PRTL_RUN_ONCE;     

#line 16673 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct _RTL_BARRIER {                       
            DWORD Reserved1;                        
            DWORD Reserved2;                        
            ULONG_PTR Reserved3[2];                 
            DWORD Reserved4;                        
            DWORD Reserved5;                        
} RTL_BARRIER, *PRTL_BARRIER;                       























__declspec(noreturn)
void
__fastfail(
      unsigned int Code
    );

#pragma intrinsic(__fastfail)

#line 16713 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"















#pragma region Desktop Family


__forceinline
DWORD
HEAP_MAKE_TAG_FLAGS (
      DWORD TagBase,
      DWORD Tag
    )

{
    return ((DWORD)((TagBase) + ((Tag) << 18)));
}
#line 16742 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#line 16743 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion






















































#line 16799 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"











__forceinline
PVOID
RtlSecureZeroMemory(
      PVOID ptr,
      SIZE_T cnt
    )
{
    volatile char *vptr = (volatile char *)ptr;



    __stosb((PBYTE )((DWORD64)vptr), 0, cnt);



















#line 16842 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

    return ptr;
}

#line 16847 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



















typedef struct _MESSAGE_RESOURCE_ENTRY {
    WORD   Length;
    WORD   Flags;
    BYTE  Text[ 1 ];
} MESSAGE_RESOURCE_ENTRY, *PMESSAGE_RESOURCE_ENTRY;



typedef struct _MESSAGE_RESOURCE_BLOCK {
    DWORD LowId;
    DWORD HighId;
    DWORD OffsetToEntries;
} MESSAGE_RESOURCE_BLOCK, *PMESSAGE_RESOURCE_BLOCK;

typedef struct _MESSAGE_RESOURCE_DATA {
    DWORD NumberOfBlocks;
    MESSAGE_RESOURCE_BLOCK Blocks[ 1 ];
} MESSAGE_RESOURCE_DATA, *PMESSAGE_RESOURCE_DATA;

typedef struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR   szCSDVersion[ 128 ];     
} OSVERSIONINFOA, *POSVERSIONINFOA, *LPOSVERSIONINFOA;

typedef struct _OSVERSIONINFOW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR  szCSDVersion[ 128 ];     
} OSVERSIONINFOW, *POSVERSIONINFOW, *LPOSVERSIONINFOW, RTL_OSVERSIONINFOW, *PRTL_OSVERSIONINFOW;





typedef OSVERSIONINFOA OSVERSIONINFO;
typedef POSVERSIONINFOA POSVERSIONINFO;
typedef LPOSVERSIONINFOA LPOSVERSIONINFO;
#line 16911 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

typedef struct _OSVERSIONINFOEXA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR   szCSDVersion[ 128 ];     
    WORD   wServicePackMajor;
    WORD   wServicePackMinor;
    WORD   wSuiteMask;
    BYTE  wProductType;
    BYTE  wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA, *LPOSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR  szCSDVersion[ 128 ];     
    WORD   wServicePackMajor;
    WORD   wServicePackMinor;
    WORD   wSuiteMask;
    BYTE  wProductType;
    BYTE  wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW, RTL_OSVERSIONINFOEXW, *PRTL_OSVERSIONINFOEXW;





typedef OSVERSIONINFOEXA OSVERSIONINFOEX;
typedef POSVERSIONINFOEXA POSVERSIONINFOEX;
typedef LPOSVERSIONINFOEXA LPOSVERSIONINFOEX;
#line 16947 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"













































#pragma region Desktop Family


















__declspec(dllimport)
ULONGLONG
__stdcall
VerSetConditionMask(
      ULONGLONG ConditionMask,
      DWORD TypeMask,
      BYTE  Condition
    );

#line 17021 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 17023 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 17025 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion



#pragma region Desktop Family






__declspec(dllimport)
BOOLEAN
__stdcall
RtlGetProductInfo(
       DWORD  OSMajorVersion,
       DWORD  OSMinorVersion,
       DWORD  SpMajorVersion,
       DWORD  SpMinorVersion,
      PDWORD ReturnedProductType
    );

#line 17048 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



#line 17052 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion



typedef enum _RTL_UMS_THREAD_INFO_CLASS {
    UmsThreadInvalidInfoClass = 0,
    UmsThreadUserContext,
    UmsThreadPriority,              
    UmsThreadAffinity,              
    UmsThreadTeb,
    UmsThreadIsSuspended,
    UmsThreadIsTerminated,
    UmsThreadMaxInfoClass
} RTL_UMS_THREAD_INFO_CLASS, *PRTL_UMS_THREAD_INFO_CLASS;

typedef enum _RTL_UMS_SCHEDULER_REASON {
    UmsSchedulerStartup = 0,
    UmsSchedulerThreadBlocked,
    UmsSchedulerThreadYield,
} RTL_UMS_SCHEDULER_REASON, *PRTL_UMS_SCHEDULER_REASON;

typedef

void
__stdcall
RTL_UMS_SCHEDULER_ENTRY_POINT(
      RTL_UMS_SCHEDULER_REASON Reason,
      ULONG_PTR ActivationPayload,
      PVOID SchedulerParam
    );

typedef RTL_UMS_SCHEDULER_ENTRY_POINT *PRTL_UMS_SCHEDULER_ENTRY_POINT;
































#line 17117 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 17119 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"










#line 17130 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






#pragma region Desktop Family








__declspec(dllimport)
DWORD
__stdcall
RtlCrc32(
      const void *Buffer,
      size_t Size,
      DWORD InitialCrc
    );

__declspec(dllimport)
ULONGLONG
__stdcall
RtlCrc64(
      const void *Buffer,
      size_t Size,
      ULONGLONG InitialCrc
    );
	

   
#line 17166 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma endregion



#line 17171 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


typedef struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD   Type;
    WORD   CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD   CreatorBackTraceIndexHigh;
    WORD   SpareWORD  ;
} RTL_CRITICAL_SECTION_DEBUG, *PRTL_CRITICAL_SECTION_DEBUG, RTL_RESOURCE_DEBUG, *PRTL_RESOURCE_DEBUG;




















#pragma pack(push, 8)

typedef struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;

    
    
    
    

    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;        
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;        
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION;

#pragma pack(pop)

typedef struct _RTL_SRWLOCK {                            
        PVOID Ptr;                                       
} RTL_SRWLOCK, *PRTL_SRWLOCK;                            

typedef struct _RTL_CONDITION_VARIABLE {                    
        PVOID Ptr;                                       
} RTL_CONDITION_VARIABLE, *PRTL_CONDITION_VARIABLE;      


typedef
void
(__stdcall *PAPCFUNC)(
      ULONG_PTR Parameter
    );
typedef LONG (__stdcall *PVECTORED_EXCEPTION_HANDLER)(
    struct _EXCEPTION_POINTERS *ExceptionInfo
    );

typedef enum _HEAP_INFORMATION_CLASS {

    HeapCompatibilityInformation,
    HeapEnableTerminationOnCorruption


} HEAP_INFORMATION_CLASS;













typedef void (__stdcall * WAITORTIMERCALLBACKFUNC) (PVOID, BOOLEAN );   
typedef void (__stdcall * WORKERCALLBACKFUNC) (PVOID );                 
typedef void (__stdcall * APC_CALLBACK_FUNCTION) (DWORD   , PVOID, PVOID); 
typedef WAITORTIMERCALLBACKFUNC WAITORTIMERCALLBACK; 
typedef
void
(__stdcall *PFLS_CALLBACK_FUNCTION) (
     PVOID lpFlsData
    );

typedef
BOOLEAN
(__stdcall *PSECURE_MEMORY_CACHE_CALLBACK) (
      PVOID Addr,
      SIZE_T Range
    );




typedef enum _ACTIVATION_CONTEXT_INFO_CLASS {
    ActivationContextBasicInformation                       = 1,
    ActivationContextDetailedInformation                    = 2,
    AssemblyDetailedInformationInActivationContext          = 3,
    FileInformationInAssemblyOfAssemblyInActivationContext  = 4,
    RunlevelInformationInActivationContext                  = 5,
    CompatibilityInformationInActivationContext             = 6,
    ActivationContextManifestResourceName                   = 7,
    MaxActivationContextInfoClass,

    
    
    
    AssemblyDetailedInformationInActivationContxt           = 3,
    FileInformationInAssemblyOfAssemblyInActivationContxt   = 4
} ACTIVATION_CONTEXT_INFO_CLASS;




typedef struct _ACTIVATION_CONTEXT_QUERY_INDEX {
    DWORD ulAssemblyIndex;
    DWORD ulFileIndexInAssembly;
} ACTIVATION_CONTEXT_QUERY_INDEX, * PACTIVATION_CONTEXT_QUERY_INDEX;

typedef const struct _ACTIVATION_CONTEXT_QUERY_INDEX * PCACTIVATION_CONTEXT_QUERY_INDEX;







typedef struct _ASSEMBLY_FILE_DETAILED_INFORMATION {
    DWORD ulFlags;
    DWORD ulFilenameLength;
    DWORD ulPathLength;

    PCWSTR lpFileName;
    PCWSTR lpFilePath;
} ASSEMBLY_FILE_DETAILED_INFORMATION, *PASSEMBLY_FILE_DETAILED_INFORMATION;
typedef const ASSEMBLY_FILE_DETAILED_INFORMATION *PCASSEMBLY_FILE_DETAILED_INFORMATION;










typedef struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION {
    DWORD ulFlags;
    DWORD ulEncodedAssemblyIdentityLength;      
    DWORD ulManifestPathType;                   
    DWORD ulManifestPathLength;                 
    LARGE_INTEGER liManifestLastWriteTime;      
    DWORD ulPolicyPathType;                     
    DWORD ulPolicyPathLength;                   
    LARGE_INTEGER liPolicyLastWriteTime;        
    DWORD ulMetadataSatelliteRosterIndex;

    DWORD ulManifestVersionMajor;               
    DWORD ulManifestVersionMinor;               
    DWORD ulPolicyVersionMajor;                 
    DWORD ulPolicyVersionMinor;                 
    DWORD ulAssemblyDirectoryNameLength;        

    PCWSTR lpAssemblyEncodedAssemblyIdentity;
    PCWSTR lpAssemblyManifestPath;
    PCWSTR lpAssemblyPolicyPath;
    PCWSTR lpAssemblyDirectoryName;

    DWORD  ulFileCount;
} ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION, * PACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION;

typedef const struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION * PCACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION ;

typedef enum
{
    ACTCTX_RUN_LEVEL_UNSPECIFIED = 0,
    ACTCTX_RUN_LEVEL_AS_INVOKER,
    ACTCTX_RUN_LEVEL_HIGHEST_AVAILABLE,
    ACTCTX_RUN_LEVEL_REQUIRE_ADMIN,
    ACTCTX_RUN_LEVEL_NUMBERS
} ACTCTX_REQUESTED_RUN_LEVEL;

typedef struct _ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION {
    DWORD ulFlags;
    ACTCTX_REQUESTED_RUN_LEVEL  RunLevel;
    DWORD UiAccess;
} ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION, * PACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION;

typedef const struct _ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION * PCACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION ;

typedef enum
{
    ACTCTX_COMPATIBILITY_ELEMENT_TYPE_UNKNOWN = 0,
    ACTCTX_COMPATIBILITY_ELEMENT_TYPE_OS,
    ACTCTX_COMPATIBILITY_ELEMENT_TYPE_MITIGATION
} ACTCTX_COMPATIBILITY_ELEMENT_TYPE;

typedef struct _COMPATIBILITY_CONTEXT_ELEMENT {
    GUID Id;
    ACTCTX_COMPATIBILITY_ELEMENT_TYPE Type;
} COMPATIBILITY_CONTEXT_ELEMENT, *PCOMPATIBILITY_CONTEXT_ELEMENT;

typedef const struct _COMPATIBILITY_CONTEXT_ELEMENT *PCCOMPATIBILITY_CONTEXT_ELEMENT;

#pragma warning(push)
#pragma warning(disable:4200)

typedef struct _ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION {
    DWORD ElementCount;
    COMPATIBILITY_CONTEXT_ELEMENT Elements[];
} ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION, * PACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION;

#pragma warning(pop)

typedef const struct _ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION * PCACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION;




typedef struct _SUPPORTED_OS_INFO {
    WORD   OsCount;
    WORD   MitigationExist;
    WORD   OsList[(4)];
} SUPPORTED_OS_INFO, *PSUPPORTED_OS_INFO;

typedef struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION {
    DWORD dwFlags;
    DWORD ulFormatVersion;
    DWORD ulAssemblyCount;
    DWORD ulRootManifestPathType;
    DWORD ulRootManifestPathChars;
    DWORD ulRootConfigurationPathType;
    DWORD ulRootConfigurationPathChars;
    DWORD ulAppDirPathType;
    DWORD ulAppDirPathChars;
    PCWSTR lpRootManifestPath;
    PCWSTR lpRootConfigurationPath;
    PCWSTR lpAppDirPath;
} ACTIVATION_CONTEXT_DETAILED_INFORMATION, *PACTIVATION_CONTEXT_DETAILED_INFORMATION;

typedef const struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION *PCACTIVATION_CONTEXT_DETAILED_INFORMATION;




typedef struct _HARDWARE_COUNTER_DATA {
    HARDWARE_COUNTER_TYPE Type;
    DWORD Reserved;
    DWORD64 Value;
} HARDWARE_COUNTER_DATA, *PHARDWARE_COUNTER_DATA;



typedef struct _PERFORMANCE_DATA {
    WORD   Size;
    BYTE  Version;
    BYTE  HwCountersCount;
    DWORD ContextSwitchCount;
    DWORD64 WaitReasonBitMap;
    DWORD64 CycleTime;
    DWORD RetryCount;
    DWORD Reserved;
    HARDWARE_COUNTER_DATA HwCounters[16];
} PERFORMANCE_DATA, *PPERFORMANCE_DATA;














































typedef struct _EVENTLOGRECORD {
    DWORD  Length;        
    DWORD  Reserved;      
    DWORD  RecordNumber;  
    DWORD  TimeGenerated; 
    DWORD  TimeWritten;   
    DWORD  EventID;
    WORD   EventType;
    WORD   NumStrings;
    WORD   EventCategory;
    WORD   ReservedFlags; 
    DWORD  ClosingRecordNumber; 
    DWORD  StringOffset;  
    DWORD  UserSidLength;
    DWORD  UserSidOffset;
    DWORD  DataLength;
    DWORD  DataOffset;    
    
    
    
    
    
    
    
    
    
    
    
} EVENTLOGRECORD, *PEVENTLOGRECORD;






#pragma warning(push)
#line 17534 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
#pragma warning(disable : 4200) 

struct _EVENTSFORLOGFILE;
typedef struct _EVENTSFORLOGFILE EVENTSFORLOGFILE, *PEVENTSFORLOGFILE;

struct _PACKEDEVENTINFO;
typedef struct _PACKEDEVENTINFO PACKEDEVENTINFO, *PPACKEDEVENTINFO;



struct _EVENTSFORLOGFILE
{
    DWORD           ulSize;
    WCHAR           szLogicalLogFile[256];        
    DWORD           ulNumRecords;
    EVENTLOGRECORD  pEventLogRecords[];
};

struct _PACKEDEVENTINFO
{
    DWORD               ulSize;  
    DWORD               ulNumEventsForLogFile; 
    DWORD               ulOffsets[];           
};

#line 17560 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


#pragma warning(pop)


#line 17566 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





















































                                                    


                                                    


                                                    


                                                    
                                                    




























































                                                      


















                                            






























































typedef enum _CM_SERVICE_NODE_TYPE {
    DriverType               = 0x00000001,
    FileSystemType           = 0x00000002,
    Win32ServiceOwnProcess   = 0x00000010,
    Win32ServiceShareProcess = 0x00000020,
    AdapterType              = 0x00000004,
    RecognizerType           = 0x00000008
} SERVICE_NODE_TYPE;

typedef enum _CM_SERVICE_LOAD_TYPE {
    BootLoad    = 0x00000000,
    SystemLoad  = 0x00000001,
    AutoLoad    = 0x00000002,
    DemandLoad  = 0x00000003,
    DisableLoad = 0x00000004
} SERVICE_LOAD_TYPE;

typedef enum _CM_ERROR_CONTROL_TYPE {
    IgnoreError   = 0x00000000,
    NormalError   = 0x00000001,
    SevereError   = 0x00000002,
    CriticalError = 0x00000003
} SERVICE_ERROR_TYPE;

































































typedef struct _TAPE_ERASE {
    DWORD Type;
    BOOLEAN Immediate;
} TAPE_ERASE, *PTAPE_ERASE;












typedef struct _TAPE_PREPARE {
    DWORD Operation;
    BOOLEAN Immediate;
} TAPE_PREPARE, *PTAPE_PREPARE;










typedef struct _TAPE_WRITE_MARKS {
    DWORD Type;
    DWORD Count;
    BOOLEAN Immediate;
} TAPE_WRITE_MARKS, *PTAPE_WRITE_MARKS;









typedef struct _TAPE_GET_POSITION {
    DWORD Type;
    DWORD Partition;
    LARGE_INTEGER Offset;
} TAPE_GET_POSITION, *PTAPE_GET_POSITION;
















typedef struct _TAPE_SET_POSITION {
    DWORD Method;
    DWORD Partition;
    LARGE_INTEGER Offset;
    BOOLEAN Immediate;
} TAPE_SET_POSITION, *PTAPE_SET_POSITION;























































































typedef struct _TAPE_GET_DRIVE_PARAMETERS {
    BOOLEAN ECC;
    BOOLEAN Compression;
    BOOLEAN DataPadding;
    BOOLEAN ReportSetmarks;
    DWORD DefaultBlockSize;
    DWORD MaximumBlockSize;
    DWORD MinimumBlockSize;
    DWORD MaximumPartitionCount;
    DWORD FeaturesLow;
    DWORD FeaturesHigh;
    DWORD EOTWarningZoneSize;
} TAPE_GET_DRIVE_PARAMETERS, *PTAPE_GET_DRIVE_PARAMETERS;





typedef struct _TAPE_SET_DRIVE_PARAMETERS {
    BOOLEAN ECC;
    BOOLEAN Compression;
    BOOLEAN DataPadding;
    BOOLEAN ReportSetmarks;
    DWORD EOTWarningZoneSize;
} TAPE_SET_DRIVE_PARAMETERS, *PTAPE_SET_DRIVE_PARAMETERS;





typedef struct _TAPE_GET_MEDIA_PARAMETERS {
    LARGE_INTEGER Capacity;
    LARGE_INTEGER Remaining;
    DWORD BlockSize;
    DWORD PartitionCount;
    BOOLEAN WriteProtected;
} TAPE_GET_MEDIA_PARAMETERS, *PTAPE_GET_MEDIA_PARAMETERS;





typedef struct _TAPE_SET_MEDIA_PARAMETERS {
    DWORD BlockSize;
} TAPE_SET_MEDIA_PARAMETERS, *PTAPE_SET_MEDIA_PARAMETERS;









typedef struct _TAPE_CREATE_PARTITION {
    DWORD Method;
    DWORD Count;
    DWORD Size;
} TAPE_CREATE_PARTITION, *PTAPE_CREATE_PARTITION;











typedef struct _TAPE_WMI_OPERATIONS {
   DWORD Method;
   DWORD DataBufferSize;
   PVOID DataBuffer;
} TAPE_WMI_OPERATIONS, *PTAPE_WMI_OPERATIONS;




typedef enum _TAPE_DRIVE_PROBLEM_TYPE {
   TapeDriveProblemNone, TapeDriveReadWriteWarning,
   TapeDriveReadWriteError, TapeDriveReadWarning,
   TapeDriveWriteWarning, TapeDriveReadError,
   TapeDriveWriteError, TapeDriveHardwareError,
   TapeDriveUnsupportedMedia, TapeDriveScsiConnectionError,
   TapeDriveTimetoClean, TapeDriveCleanDriveNow,
   TapeDriveMediaLifeExpired, TapeDriveSnappedTape
} TAPE_DRIVE_PROBLEM_TYPE;

#line 18108 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"





extern "C" {
#line 18115 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\ktmtypes.h"






















extern "C" {
#line 25 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\ktmtypes.h"


typedef GUID UOW, *PUOW;
typedef GUID CRM_PROTOCOL_ID, *PCRM_PROTOCOL_ID;

















































typedef ULONG NOTIFICATION_MASK;






















































typedef struct _TRANSACTION_NOTIFICATION {
    PVOID         TransactionKey;
    ULONG         TransactionNotification;
    LARGE_INTEGER TmVirtualClock;
    ULONG         ArgumentLength;
} TRANSACTION_NOTIFICATION, *PTRANSACTION_NOTIFICATION;

typedef struct _TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT {
    GUID   EnlistmentId;
    UOW    UOW;
} TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT, *PTRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT;



typedef struct _TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT {
    GUID TmIdentity;
    ULONG Flags;
} TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT, *PTRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT;

typedef ULONG SAVEPOINT_ID, *PSAVEPOINT_ID;

typedef struct _TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT {
    SAVEPOINT_ID SavepointId;
} TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT, *PTRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT;

typedef struct _TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT {
    ULONG PropagationCookie;
    GUID  UOW;
    GUID  TmIdentity;
    ULONG BufferLength;
    
} TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT;

typedef struct _TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT {
    ULONG MarshalCookie;
    GUID  UOW;
} TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT, *PTRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT;

typedef TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT TRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT;







typedef struct _KCRM_MARSHAL_HEADER {
    ULONG              VersionMajor;
    ULONG              VersionMinor;
    ULONG              NumProtocols;
    ULONG              Unused;        
} KCRM_MARSHAL_HEADER, *PKCRM_MARSHAL_HEADER, * PRKCRM_MARSHAL_HEADER;

typedef struct _KCRM_TRANSACTION_BLOB {
    UOW                UOW;
    GUID               TmIdentity;
    ULONG              IsolationLevel;
    ULONG              IsolationFlags;
    ULONG              Timeout;
    WCHAR              Description[64];
} KCRM_TRANSACTION_BLOB, *PKCRM_TRANSACTION_BLOB, * PRKCRM_TRANSACTION_BLOB;

typedef struct _KCRM_PROTOCOL_BLOB {
    CRM_PROTOCOL_ID    ProtocolId;
      ULONG StaticInfoLength;
    ULONG              TransactionIdInfoLength; 
    ULONG              Unused1;        
    ULONG              Unused2;        
} KCRM_PROTOCOL_BLOB, *PKCRM_PROTOCOL_BLOB, * PRKCRM_PROTOCOL_BLOB;


}
#line 206 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\ktmtypes.h"

#line 208 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\ktmtypes.h"
#line 18118 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"








































































































































































typedef enum _TRANSACTION_OUTCOME {
    TransactionOutcomeUndetermined = 1,
    TransactionOutcomeCommitted,
    TransactionOutcomeAborted,
} TRANSACTION_OUTCOME;


typedef enum _TRANSACTION_STATE {
    TransactionStateNormal = 1,
    TransactionStateIndoubt,
    TransactionStateCommittedNotify,
} TRANSACTION_STATE;


typedef struct _TRANSACTION_BASIC_INFORMATION {
    GUID    TransactionId;
    DWORD   State;
    DWORD   Outcome;
} TRANSACTION_BASIC_INFORMATION, *PTRANSACTION_BASIC_INFORMATION;

typedef struct _TRANSACTIONMANAGER_BASIC_INFORMATION {
    GUID    TmIdentity;
    LARGE_INTEGER VirtualClock;
} TRANSACTIONMANAGER_BASIC_INFORMATION, *PTRANSACTIONMANAGER_BASIC_INFORMATION;

typedef struct _TRANSACTIONMANAGER_LOG_INFORMATION {
    GUID  LogIdentity;
} TRANSACTIONMANAGER_LOG_INFORMATION, *PTRANSACTIONMANAGER_LOG_INFORMATION;

typedef struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION {
    DWORD LogPathLength;
      WCHAR LogPath[1]; 

} TRANSACTIONMANAGER_LOGPATH_INFORMATION, *PTRANSACTIONMANAGER_LOGPATH_INFORMATION;

typedef struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION {
    ULONGLONG  LastRecoveredLsn;
} TRANSACTIONMANAGER_RECOVERY_INFORMATION, *PTRANSACTIONMANAGER_RECOVERY_INFORMATION;



typedef struct _TRANSACTIONMANAGER_OLDEST_INFORMATION {
    GUID OldestTransactionGuid;
} TRANSACTIONMANAGER_OLDEST_INFORMATION, *PTRANSACTIONMANAGER_OLDEST_INFORMATION;



typedef struct _TRANSACTION_PROPERTIES_INFORMATION {
    DWORD              IsolationLevel;
    DWORD              IsolationFlags;
    LARGE_INTEGER      Timeout;
    DWORD              Outcome;
    DWORD              DescriptionLength;
    WCHAR              Description[1];            

} TRANSACTION_PROPERTIES_INFORMATION, *PTRANSACTION_PROPERTIES_INFORMATION;



typedef struct _TRANSACTION_BIND_INFORMATION {
    HANDLE TmHandle;
} TRANSACTION_BIND_INFORMATION, *PTRANSACTION_BIND_INFORMATION;

typedef struct _TRANSACTION_ENLISTMENT_PAIR {
    GUID   EnlistmentId;
    GUID   ResourceManagerId;
} TRANSACTION_ENLISTMENT_PAIR, *PTRANSACTION_ENLISTMENT_PAIR;

typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION {
    DWORD                       NumberOfEnlistments;
    TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1]; 
} TRANSACTION_ENLISTMENTS_INFORMATION, *PTRANSACTION_ENLISTMENTS_INFORMATION;

typedef struct _TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION {
    TRANSACTION_ENLISTMENT_PAIR SuperiorEnlistmentPair;
} TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION, *PTRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION;


typedef struct _RESOURCEMANAGER_BASIC_INFORMATION {
    GUID    ResourceManagerId;
    DWORD   DescriptionLength;
    WCHAR   Description[1];            
} RESOURCEMANAGER_BASIC_INFORMATION, *PRESOURCEMANAGER_BASIC_INFORMATION;

typedef struct _RESOURCEMANAGER_COMPLETION_INFORMATION {
    HANDLE    IoCompletionPortHandle;
    ULONG_PTR CompletionKey;
} RESOURCEMANAGER_COMPLETION_INFORMATION, *PRESOURCEMANAGER_COMPLETION_INFORMATION;




typedef enum _TRANSACTION_INFORMATION_CLASS {
    TransactionBasicInformation,
    TransactionPropertiesInformation,
    TransactionEnlistmentInformation,
    TransactionSuperiorEnlistmentInformation

    ,


    TransactionBindInformation, 
    TransactionDTCPrivateInformation 
    ,

} TRANSACTION_INFORMATION_CLASS;


typedef enum _TRANSACTIONMANAGER_INFORMATION_CLASS {
    TransactionManagerBasicInformation,
    TransactionManagerLogInformation,
    TransactionManagerLogPathInformation,
    TransactionManagerRecoveryInformation = 4

    ,



    TransactionManagerOnlineProbeInformation = 3,
    TransactionManagerOldestTransactionInformation = 5



} TRANSACTIONMANAGER_INFORMATION_CLASS;



typedef enum _RESOURCEMANAGER_INFORMATION_CLASS {
    ResourceManagerBasicInformation,
    ResourceManagerCompletionInformation,
} RESOURCEMANAGER_INFORMATION_CLASS;


typedef struct _ENLISTMENT_BASIC_INFORMATION {
    GUID    EnlistmentId;
    GUID    TransactionId;
    GUID    ResourceManagerId;
} ENLISTMENT_BASIC_INFORMATION, *PENLISTMENT_BASIC_INFORMATION;

typedef struct _ENLISTMENT_CRM_INFORMATION {
    GUID   CrmTransactionManagerId;
    GUID   CrmResourceManagerId;
    GUID   CrmEnlistmentId;
} ENLISTMENT_CRM_INFORMATION, *PENLISTMENT_CRM_INFORMATION;



typedef enum _ENLISTMENT_INFORMATION_CLASS {
    EnlistmentBasicInformation,
    EnlistmentRecoveryInformation,
    EnlistmentCrmInformation
} ENLISTMENT_INFORMATION_CLASS;

typedef struct _TRANSACTION_LIST_ENTRY {
    UOW    UOW;
} TRANSACTION_LIST_ENTRY, *PTRANSACTION_LIST_ENTRY;

typedef struct _TRANSACTION_LIST_INFORMATION {
    DWORD   NumberOfTransactions;
    TRANSACTION_LIST_ENTRY TransactionInformation[1]; 
} TRANSACTION_LIST_INFORMATION, *PTRANSACTION_LIST_INFORMATION;






typedef enum _KTMOBJECT_TYPE {

    KTMOBJECT_TRANSACTION,
    KTMOBJECT_TRANSACTION_MANAGER,
    KTMOBJECT_RESOURCE_MANAGER,
    KTMOBJECT_ENLISTMENT,
    KTMOBJECT_INVALID

} KTMOBJECT_TYPE, *PKTMOBJECT_TYPE;









typedef struct _KTMOBJECT_CURSOR {

    
    
    

    GUID    LastQuery;

    
    
    

    DWORD   ObjectIdCount;

    
    
    

    GUID    ObjectIds[1];

} KTMOBJECT_CURSOR, *PKTMOBJECT_CURSOR;




}
#line 18498 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 18500 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
typedef DWORD TP_VERSION, *PTP_VERSION; 

typedef struct _TP_CALLBACK_INSTANCE TP_CALLBACK_INSTANCE, *PTP_CALLBACK_INSTANCE;

typedef void (__stdcall *PTP_SIMPLE_CALLBACK)(
          PTP_CALLBACK_INSTANCE Instance,
      PVOID                 Context
    );

typedef struct _TP_POOL TP_POOL, *PTP_POOL; 

typedef enum _TP_CALLBACK_PRIORITY {
    TP_CALLBACK_PRIORITY_HIGH,
    TP_CALLBACK_PRIORITY_NORMAL,
    TP_CALLBACK_PRIORITY_LOW,
    TP_CALLBACK_PRIORITY_INVALID,
    TP_CALLBACK_PRIORITY_COUNT = TP_CALLBACK_PRIORITY_INVALID
} TP_CALLBACK_PRIORITY;

typedef struct _TP_POOL_STACK_INFORMATION {
    SIZE_T StackReserve;
    SIZE_T StackCommit;
}TP_POOL_STACK_INFORMATION, *PTP_POOL_STACK_INFORMATION;

typedef struct _TP_CLEANUP_GROUP TP_CLEANUP_GROUP, *PTP_CLEANUP_GROUP; 

typedef void (__stdcall *PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(
      PVOID ObjectContext,
      PVOID CleanupContext
    );








typedef struct _TP_CALLBACK_ENVIRON_V3 {
    TP_VERSION                         Version;
    PTP_POOL                           Pool;
    PTP_CLEANUP_GROUP                  CleanupGroup;
    PTP_CLEANUP_GROUP_CANCEL_CALLBACK  CleanupGroupCancelCallback;
    PVOID                              RaceDll;
    struct _ACTIVATION_CONTEXT        *ActivationContext;
    PTP_SIMPLE_CALLBACK                FinalizationCallback;
    union {
        DWORD                          Flags;
        struct {
            DWORD                      LongFunction :  1;
            DWORD                      Persistent   :  1;
            DWORD                      Private      : 30;
        } s;
    } u;
    TP_CALLBACK_PRIORITY               CallbackPriority;
    DWORD                              Size;
} TP_CALLBACK_ENVIRON_V3;

typedef TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON, *PTP_CALLBACK_ENVIRON;























#line 18583 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"



__forceinline
void
TpInitializeCallbackEnviron(
      PTP_CALLBACK_ENVIRON CallbackEnviron
    )
{



    CallbackEnviron->Version = 3;





#line 18602 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

    CallbackEnviron->Pool = 0;
    CallbackEnviron->CleanupGroup = 0;
    CallbackEnviron->CleanupGroupCancelCallback = 0;
    CallbackEnviron->RaceDll = 0;
    CallbackEnviron->ActivationContext = 0;
    CallbackEnviron->FinalizationCallback = 0;
    CallbackEnviron->u.Flags = 0;



    CallbackEnviron->CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
    CallbackEnviron->Size = sizeof(TP_CALLBACK_ENVIRON);

#line 18617 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

}

__forceinline
void
TpSetCallbackThreadpool(
      PTP_CALLBACK_ENVIRON CallbackEnviron,
         PTP_POOL             Pool
    )
{
    CallbackEnviron->Pool = Pool;
}

__forceinline
void
TpSetCallbackCleanupGroup(
       PTP_CALLBACK_ENVIRON              CallbackEnviron,
          PTP_CLEANUP_GROUP                 CleanupGroup,
      PTP_CLEANUP_GROUP_CANCEL_CALLBACK CleanupGroupCancelCallback
    )
{
    CallbackEnviron->CleanupGroup = CleanupGroup;
    CallbackEnviron->CleanupGroupCancelCallback = CleanupGroupCancelCallback;
}

__forceinline
void
TpSetCallbackActivationContext(
       PTP_CALLBACK_ENVIRON CallbackEnviron,
      struct _ACTIVATION_CONTEXT *ActivationContext
    )
{
    CallbackEnviron->ActivationContext = ActivationContext;
}

__forceinline
void
TpSetCallbackNoActivationContext(
      PTP_CALLBACK_ENVIRON CallbackEnviron
    )
{
    CallbackEnviron->ActivationContext = (struct _ACTIVATION_CONTEXT *)(LONG_PTR) -1; 
}

__forceinline
void
TpSetCallbackLongFunction(
      PTP_CALLBACK_ENVIRON CallbackEnviron
    )
{
    CallbackEnviron->u.s.LongFunction = 1;
}

__forceinline
void
TpSetCallbackRaceWithDll(
      PTP_CALLBACK_ENVIRON CallbackEnviron,
         PVOID                DllHandle
    )
{
    CallbackEnviron->RaceDll = DllHandle;
}

__forceinline
void
TpSetCallbackFinalizationCallback(
      PTP_CALLBACK_ENVIRON CallbackEnviron,
         PTP_SIMPLE_CALLBACK  FinalizationCallback
    )
{
    CallbackEnviron->FinalizationCallback = FinalizationCallback;
}



__forceinline
void
TpSetCallbackPriority(
      PTP_CALLBACK_ENVIRON CallbackEnviron,
         TP_CALLBACK_PRIORITY Priority
    )
{
    CallbackEnviron->CallbackPriority = Priority;
}

#line 18703 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

__forceinline
void
TpSetCallbackPersistent(
      PTP_CALLBACK_ENVIRON CallbackEnviron
    )
{
    CallbackEnviron->u.s.Persistent = 1;
}


__forceinline
void
TpDestroyCallbackEnviron(
      PTP_CALLBACK_ENVIRON CallbackEnviron
    )
{
    
    
    
    
    

    (CallbackEnviron);
}

#line 18730 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


typedef struct _TP_WORK TP_WORK, *PTP_WORK;

typedef void (__stdcall *PTP_WORK_CALLBACK)(
          PTP_CALLBACK_INSTANCE Instance,
      PVOID                 Context,
          PTP_WORK              Work
    );

typedef struct _TP_TIMER TP_TIMER, *PTP_TIMER;

typedef void (__stdcall *PTP_TIMER_CALLBACK)(
          PTP_CALLBACK_INSTANCE Instance,
      PVOID                 Context,
          PTP_TIMER             Timer
    );

typedef DWORD    TP_WAIT_RESULT;

typedef struct _TP_WAIT TP_WAIT, *PTP_WAIT;

typedef void (__stdcall *PTP_WAIT_CALLBACK)(
          PTP_CALLBACK_INSTANCE Instance,
      PVOID                 Context,
          PTP_WAIT              Wait,
             TP_WAIT_RESULT        WaitResult
    );

typedef struct _TP_IO TP_IO, *PTP_IO;



__forceinline
struct _TEB *
NtCurrentTeb (
    void
    )

{
    return (struct _TEB *)__readgsqword(((LONG)(LONG_PTR)&(((NT_TIB *)0)->Self)));
}

__forceinline
PVOID
GetCurrentFiber (
    void
    )

{

    return (PVOID)__readgsqword(((LONG)(LONG_PTR)&(((NT_TIB *)0)->FiberData)));
}

__forceinline
PVOID
GetFiberData (
    void
    )

{

    return *(PVOID *)GetCurrentFiber();
}

#line 18796 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"
































#line 18829 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"




























#line 18858 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"













#line 18872 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


}
#line 18876 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


#pragma warning(pop)



#line 18883 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"

#line 18885 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"


#line 183 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"
#line 184 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"


typedef UINT_PTR            WPARAM;
typedef LONG_PTR            LPARAM;
typedef LONG_PTR            LRESULT;





#line 195 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"



#line 199 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"

#line 201 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"








typedef HANDLE          *SPHANDLE;
typedef HANDLE           *LPHANDLE;
typedef HANDLE              HGLOBAL;
typedef HANDLE              HLOCAL;
typedef HANDLE              GLOBALHANDLE;
typedef HANDLE              LOCALHANDLE;



typedef INT_PTR ( __stdcall *FARPROC)();
typedef INT_PTR ( __stdcall *NEARPROC)();
typedef INT_PTR (__stdcall *PROC)();




#line 226 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"




#line 231 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"




#line 236 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"

typedef WORD                ATOM;   

struct HKEY__{int unused;}; typedef struct HKEY__ *HKEY;
typedef HKEY *PHKEY;
struct HMETAFILE__{int unused;}; typedef struct HMETAFILE__ *HMETAFILE;
struct HINSTANCE__{int unused;}; typedef struct HINSTANCE__ *HINSTANCE;
typedef HINSTANCE HMODULE;      
struct HRGN__{int unused;}; typedef struct HRGN__ *HRGN;
struct HRSRC__{int unused;}; typedef struct HRSRC__ *HRSRC;
struct HSPRITE__{int unused;}; typedef struct HSPRITE__ *HSPRITE;
struct HLSURF__{int unused;}; typedef struct HLSURF__ *HLSURF;
struct HSTR__{int unused;}; typedef struct HSTR__ *HSTR;
struct HTASK__{int unused;}; typedef struct HTASK__ *HTASK;
struct HWINSTA__{int unused;}; typedef struct HWINSTA__ *HWINSTA;
struct HKL__{int unused;}; typedef struct HKL__ *HKL;


typedef int HFILE;


#line 258 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"





typedef struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} FILETIME, *PFILETIME, *LPFILETIME;



}
#line 272 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"

#line 274 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"
#pragma endregion

#line 277 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\minwindef.h"

#line 25 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"






#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winnt.h"






































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 32 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"



#pragma region Application Family


struct HWND__{int unused;}; typedef struct HWND__ *HWND;
struct HHOOK__{int unused;}; typedef struct HHOOK__ *HHOOK;

#line 43 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
#pragma endregion












#line 57 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

#pragma region Application Family




typedef void * HGDIOBJ;


#line 67 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
#line 68 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"


struct HACCEL__{int unused;}; typedef struct HACCEL__ *HACCEL;
#line 72 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

struct HBITMAP__{int unused;}; typedef struct HBITMAP__ *HBITMAP;
struct HBRUSH__{int unused;}; typedef struct HBRUSH__ *HBRUSH;
#line 76 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

struct HCOLORSPACE__{int unused;}; typedef struct HCOLORSPACE__ *HCOLORSPACE;
#line 79 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

struct HDC__{int unused;}; typedef struct HDC__ *HDC;
#line 82 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
struct HGLRC__{int unused;}; typedef struct HGLRC__ *HGLRC;          
struct HDESK__{int unused;}; typedef struct HDESK__ *HDESK;
struct HENHMETAFILE__{int unused;}; typedef struct HENHMETAFILE__ *HENHMETAFILE;

struct HFONT__{int unused;}; typedef struct HFONT__ *HFONT;
#line 88 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
struct HICON__{int unused;}; typedef struct HICON__ *HICON;

struct HMENU__{int unused;}; typedef struct HMENU__ *HMENU;
#line 92 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

struct HPALETTE__{int unused;}; typedef struct HPALETTE__ *HPALETTE;
struct HPEN__{int unused;}; typedef struct HPEN__ *HPEN;
#line 96 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"


struct HWINEVENTHOOK__{int unused;}; typedef struct HWINEVENTHOOK__ *HWINEVENTHOOK;
#line 100 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

#line 102 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
#pragma endregion




#pragma region Application Family


struct HMONITOR__{int unused;}; typedef struct HMONITOR__ *HMONITOR;

#line 113 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
#pragma endregion

#line 116 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

#pragma region Desktop Family


struct HUMPD__{int unused;}; typedef struct HUMPD__ *HUMPD;

#line 123 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
#pragma endregion

#line 126 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

#pragma region Application Family



typedef HICON HCURSOR;      


#line 135 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

typedef DWORD   COLORREF;

#line 139 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
#pragma endregion

#pragma region Desktop Family


typedef DWORD   *LPCOLORREF;



#line 149 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
#pragma endregion

#pragma region Application Family


typedef struct tagRECT
{
    LONG    left;
    LONG    top;
    LONG    right;
    LONG    bottom;
} RECT, *PRECT,  *NPRECT,  *LPRECT;

typedef const RECT * LPCRECT;

typedef struct _RECTL       
{
    LONG    left;
    LONG    top;
    LONG    right;
    LONG    bottom;
} RECTL, *PRECTL, *LPRECTL;

typedef const RECTL * LPCRECTL;

typedef struct tagPOINT
{
    LONG  x;
    LONG  y;
} POINT, *PPOINT,  *NPPOINT,  *LPPOINT;

typedef struct _POINTL      
{
    LONG  x;
    LONG  y;
} POINTL, *PPOINTL;

typedef struct tagSIZE
{
    LONG        cx;
    LONG        cy;
} SIZE, *PSIZE, *LPSIZE;

typedef SIZE               SIZEL;
typedef SIZE               *PSIZEL, *LPSIZEL;

typedef struct tagPOINTS
{

    SHORT   x;
    SHORT   y;



#line 204 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
} POINTS, *PPOINTS, *LPPOINTS;

#line 207 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"
#pragma endregion

































}
#line 243 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

#line 245 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\windef.h"

#line 165 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"















#pragma once
#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#pragma warning(push)
#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma warning(disable:4001) 
#pragma warning(disable:4201) 
#pragma warning(disable:4214) 
#line 25 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
















#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






#line 26 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 27 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"








#line 44 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 45 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"







#line 53 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






#line 60 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 61 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






#line 68 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 69 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






#line 76 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 77 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






#line 84 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 85 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






#line 92 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 93 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"

#line 95 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"
#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"







#pragma once




#pragma warning(disable:4514)

#pragma warning(disable:4103)
#line 17 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"

#pragma warning(push)
#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"
#pragma warning(disable:4001)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#line 24 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"





extern "C" {
#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"














typedef struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;

typedef struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union {
        struct {
            DWORD Offset;
            DWORD OffsetHigh;
        } ;
        PVOID Pointer;
    } ;

    HANDLE  hEvent;
} OVERLAPPED, *LPOVERLAPPED;

typedef struct _OVERLAPPED_ENTRY {
    ULONG_PTR lpCompletionKey;
    LPOVERLAPPED lpOverlapped;
    ULONG_PTR Internal;
    DWORD dwNumberOfBytesTransferred;
} OVERLAPPED_ENTRY, *LPOVERLAPPED_ENTRY;


















typedef struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME, *LPSYSTEMTIME;


typedef struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR   cFileName[ 260 ];
    CHAR   cAlternateFileName[ 14 ];





} WIN32_FIND_DATAA, *PWIN32_FIND_DATAA, *LPWIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR  cFileName[ 260 ];
    WCHAR  cAlternateFileName[ 14 ];





} WIN32_FIND_DATAW, *PWIN32_FIND_DATAW, *LPWIN32_FIND_DATAW;





typedef WIN32_FIND_DATAA WIN32_FIND_DATA;
typedef PWIN32_FIND_DATAA PWIN32_FIND_DATA;
typedef LPWIN32_FIND_DATAA LPWIN32_FIND_DATA;
#line 144 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"



typedef enum _FINDEX_INFO_LEVELS {
    FindExInfoStandard,
    FindExInfoBasic,
    FindExInfoMaxInfoLevel
} FINDEX_INFO_LEVELS;




typedef enum _FINDEX_SEARCH_OPS {
    FindExSearchNameMatch,
    FindExSearchLimitToDirectories,
    FindExSearchLimitToDevices,
    FindExSearchMaxSearchOp
} FINDEX_SEARCH_OPS;
#line 163 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard,
    GetFileExMaxInfoLevel
} GET_FILEEX_INFO_LEVELS;


typedef enum _FILE_INFO_BY_HANDLE_CLASS {
    FileBasicInfo,
    FileStandardInfo,
    FileNameInfo,
    FileRenameInfo,
    FileDispositionInfo,
    FileAllocationInfo,
    FileEndOfFileInfo,
    FileStreamInfo,
    FileCompressionInfo,
    FileAttributeTagInfo,
    FileIdBothDirectoryInfo,
    FileIdBothDirectoryRestartInfo,
    FileIoPriorityHintInfo,
    FileRemoteProtocolInfo,
    FileFullDirectoryInfo,
    FileFullDirectoryRestartInfo,

    FileStorageInfo, 
    FileAlignmentInfo,    
    FileIdInfo,
    FileIdExtdDirectoryInfo,
    FileIdExtdDirectoryRestartInfo,
#line 194 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"
    MaximumFileInfoByHandleClass
} FILE_INFO_BY_HANDLE_CLASS, *PFILE_INFO_BY_HANDLE_CLASS;
#line 197 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"

typedef RTL_CRITICAL_SECTION CRITICAL_SECTION;
typedef PRTL_CRITICAL_SECTION PCRITICAL_SECTION;
typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef RTL_CRITICAL_SECTION_DEBUG CRITICAL_SECTION_DEBUG;
typedef PRTL_CRITICAL_SECTION_DEBUG PCRITICAL_SECTION_DEBUG;
typedef PRTL_CRITICAL_SECTION_DEBUG LPCRITICAL_SECTION_DEBUG;

typedef
void
(__stdcall *LPOVERLAPPED_COMPLETION_ROUTINE)(
         DWORD dwErrorCode,
         DWORD dwNumberOfBytesTransfered,
      LPOVERLAPPED lpOverlapped
    );




typedef struct _PROCESS_HEAP_ENTRY {
    PVOID lpData;
    DWORD cbData;
    BYTE cbOverhead;
    BYTE iRegionIndex;
    WORD wFlags;
    union {
        struct {
            HANDLE hMem;
            DWORD dwReserved[ 3 ];
        } Block;
        struct {
            DWORD dwCommittedSize;
            DWORD dwUnCommittedSize;
            LPVOID lpFirstBlock;
            LPVOID lpLastBlock;
        } Region;
    } ;
} PROCESS_HEAP_ENTRY, *LPPROCESS_HEAP_ENTRY, *PPROCESS_HEAP_ENTRY;







typedef struct _REASON_CONTEXT {
    ULONG Version;
    DWORD Flags;
    union {
        struct {
            HMODULE LocalizedReasonModule;
            ULONG LocalizedReasonId;
            ULONG ReasonStringCount;
            LPWSTR *ReasonStrings;

        } Detailed;

        LPWSTR SimpleReasonString;
    } Reason;
} REASON_CONTEXT, *PREASON_CONTEXT;














typedef DWORD (__stdcall *PTHREAD_START_ROUTINE)(
    LPVOID lpThreadParameter
    );
typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _EXCEPTION_DEBUG_INFO {
    EXCEPTION_RECORD ExceptionRecord;
    DWORD dwFirstChance;
} EXCEPTION_DEBUG_INFO, *LPEXCEPTION_DEBUG_INFO;

typedef struct _CREATE_THREAD_DEBUG_INFO {
    HANDLE hThread;
    LPVOID lpThreadLocalBase;
    LPTHREAD_START_ROUTINE lpStartAddress;
} CREATE_THREAD_DEBUG_INFO, *LPCREATE_THREAD_DEBUG_INFO;

typedef struct _CREATE_PROCESS_DEBUG_INFO {
    HANDLE hFile;
    HANDLE hProcess;
    HANDLE hThread;
    LPVOID lpBaseOfImage;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    LPVOID lpThreadLocalBase;
    LPTHREAD_START_ROUTINE lpStartAddress;
    LPVOID lpImageName;
    WORD fUnicode;
} CREATE_PROCESS_DEBUG_INFO, *LPCREATE_PROCESS_DEBUG_INFO;

typedef struct _EXIT_THREAD_DEBUG_INFO {
    DWORD dwExitCode;
} EXIT_THREAD_DEBUG_INFO, *LPEXIT_THREAD_DEBUG_INFO;

typedef struct _EXIT_PROCESS_DEBUG_INFO {
    DWORD dwExitCode;
} EXIT_PROCESS_DEBUG_INFO, *LPEXIT_PROCESS_DEBUG_INFO;

typedef struct _LOAD_DLL_DEBUG_INFO {
    HANDLE hFile;
    LPVOID lpBaseOfDll;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    LPVOID lpImageName;
    WORD fUnicode;
} LOAD_DLL_DEBUG_INFO, *LPLOAD_DLL_DEBUG_INFO;

typedef struct _UNLOAD_DLL_DEBUG_INFO {
    LPVOID lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO, *LPUNLOAD_DLL_DEBUG_INFO;

typedef struct _OUTPUT_DEBUG_STRING_INFO {
    LPSTR lpDebugStringData;
    WORD fUnicode;
    WORD nDebugStringLength;
} OUTPUT_DEBUG_STRING_INFO, *LPOUTPUT_DEBUG_STRING_INFO;

typedef struct _RIP_INFO {
    DWORD dwError;
    DWORD dwType;
} RIP_INFO, *LPRIP_INFO;


typedef struct _DEBUG_EVENT {
    DWORD dwDebugEventCode;
    DWORD dwProcessId;
    DWORD dwThreadId;
    union {
        EXCEPTION_DEBUG_INFO Exception;
        CREATE_THREAD_DEBUG_INFO CreateThread;
        CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
        EXIT_THREAD_DEBUG_INFO ExitThread;
        EXIT_PROCESS_DEBUG_INFO ExitProcess;
        LOAD_DLL_DEBUG_INFO LoadDll;
        UNLOAD_DLL_DEBUG_INFO UnloadDll;
        OUTPUT_DEBUG_STRING_INFO DebugString;
        RIP_INFO RipInfo;
    } u;
} DEBUG_EVENT, *LPDEBUG_EVENT;







typedef PCONTEXT LPCONTEXT;
#line 359 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"

























































}
#line 418 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"





#pragma warning(pop)





#line 430 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"
#line 431 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"

#line 433 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\minwinbase.h"

#line 32 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"
 











#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"














#line 36 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"


extern "C" {
#line 40 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"




#pragma region Desktop Family





__declspec(dllimport)
 
LPCH
__stdcall
GetEnvironmentStrings(
    void
    );


__declspec(dllimport)
 
LPWCH
__stdcall
GetEnvironmentStringsW(
    void
    );






#line 73 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

__declspec(dllimport)
BOOL
__stdcall
SetEnvironmentStringsW(
         LPWCH NewEnvironment
    );





__declspec(dllimport)
BOOL
__stdcall
FreeEnvironmentStringsA(
         LPCH penv
    );

__declspec(dllimport)
BOOL
__stdcall
FreeEnvironmentStringsW(
         LPWCH penv
    );





#line 104 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

__declspec(dllimport)
HANDLE
__stdcall
GetStdHandle(
      DWORD nStdHandle
    );


__declspec(dllimport)
BOOL
__stdcall
SetStdHandle(
      DWORD nStdHandle,
      HANDLE hHandle
    );





__declspec(dllimport)
BOOL
__stdcall
SetStdHandleEx(
      DWORD nStdHandle,
      HANDLE hHandle,
      PHANDLE phPrevValue
    );


#line 136 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

__declspec(dllimport)
LPSTR
__stdcall
GetCommandLineA(
    void
    );

__declspec(dllimport)
LPWSTR
__stdcall
GetCommandLineW(
    void
    );





#line 156 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

__declspec(dllimport)
 
DWORD
__stdcall
GetEnvironmentVariableA(
      LPCSTR lpName,
      LPSTR lpBuffer,
      DWORD nSize
    );

__declspec(dllimport)
 
DWORD
__stdcall
GetEnvironmentVariableW(
      LPCWSTR lpName,
      LPWSTR lpBuffer,
      DWORD nSize
    );





#line 182 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

__declspec(dllimport)
BOOL
__stdcall
SetEnvironmentVariableA(
      LPCSTR lpName,
      LPCSTR lpValue
    );

__declspec(dllimport)
BOOL
__stdcall
SetEnvironmentVariableW(
      LPCWSTR lpName,
      LPCWSTR lpValue
    );





#line 204 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

__declspec(dllimport)
 
DWORD
__stdcall
ExpandEnvironmentStringsA(
      LPCSTR lpSrc,
      LPSTR lpDst,
      DWORD nSize
    );

__declspec(dllimport)
 
DWORD
__stdcall
ExpandEnvironmentStringsW(
      LPCWSTR lpSrc,
      LPWSTR lpDst,
      DWORD nSize
    );





#line 230 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

__declspec(dllimport)
BOOL
__stdcall
SetCurrentDirectoryA(
      LPCSTR lpPathName
    );

__declspec(dllimport)
BOOL
__stdcall
SetCurrentDirectoryW(
      LPCWSTR lpPathName
    );





#line 250 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

__declspec(dllimport)
 
DWORD
__stdcall
GetCurrentDirectoryA(
      DWORD nBufferLength,
      LPSTR lpBuffer
    );

__declspec(dllimport)
 
DWORD
__stdcall
GetCurrentDirectoryW(
      DWORD nBufferLength,
      LPWSTR lpBuffer
    );





#line 274 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

__declspec(dllimport)
DWORD
__stdcall
SearchPathW(
      LPCWSTR lpPath,
      LPCWSTR lpFileName,
      LPCWSTR lpExtension,
      DWORD nBufferLength,
      LPWSTR lpBuffer,
      LPWSTR * lpFilePart
    );






#line 293 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"








__declspec(dllimport)
DWORD
__stdcall
SearchPathA(
      LPCSTR lpPath,
      LPCSTR lpFileName,
      LPCSTR lpExtension,
      DWORD nBufferLength,
      LPSTR lpBuffer,
      LPSTR * lpFilePart
    );





__declspec(dllimport)
BOOL
__stdcall
NeedCurrentDirectoryForExePathA(
      LPCSTR ExeName
    );

__declspec(dllimport)
BOOL
__stdcall
NeedCurrentDirectoryForExePathW(
      LPCWSTR ExeName
    );





#line 336 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

#line 338 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

#line 340 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"



#line 344 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"
#pragma endregion





}
#line 352 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"

#line 354 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processenv.h"


#line 38 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
 
 











#pragma once
#line 16 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 22 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"













#line 36 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"


extern "C" {
#line 40 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#pragma region Application Family
















#line 59 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion






#pragma region Desktop Family






__declspec(dllimport)
LONG
__stdcall
CompareFileTime(
      const FILETIME * lpFileTime1,
      const FILETIME * lpFileTime2
    );


#line 83 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryA(
      LPCSTR lpPathName,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );

__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryW(
      LPCWSTR lpPathName,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );





#line 110 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 112 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
HANDLE
__stdcall
CreateFileA(
      LPCSTR lpFileName,
      DWORD dwDesiredAccess,
      DWORD dwShareMode,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes,
      DWORD dwCreationDisposition,
      DWORD dwFlagsAndAttributes,
      HANDLE hTemplateFile
    );

__declspec(dllimport)
HANDLE
__stdcall
CreateFileW(
      LPCWSTR lpFileName,
      DWORD dwDesiredAccess,
      DWORD dwShareMode,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes,
      DWORD dwCreationDisposition,
      DWORD dwFlagsAndAttributes,
      HANDLE hTemplateFile
    );





#line 149 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

__declspec(dllimport)
BOOL
__stdcall
DefineDosDeviceW(
      DWORD dwFlags,
      LPCWSTR lpDeviceName,
      LPCWSTR lpTargetPath
    );






#line 165 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
DeleteFileA(
      LPCSTR lpFileName
    );

__declspec(dllimport)
BOOL
__stdcall
DeleteFileW(
      LPCWSTR lpFileName
    );





#line 190 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 192 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
DeleteVolumeMountPointW(
      LPCWSTR lpszVolumeMountPoint
    );






__declspec(dllimport)
BOOL
__stdcall
FileTimeToLocalFileTime(
      const FILETIME * lpFileTime,
      LPFILETIME lpLocalFileTime
    );


#line 220 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family






__declspec(dllimport)
BOOL
__stdcall
FindClose(
      HANDLE hFindFile
    );


#line 238 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
FindCloseChangeNotification(
      HANDLE hChangeHandle
    );


__declspec(dllimport)
HANDLE
__stdcall
FindFirstChangeNotificationA(
      LPCSTR lpPathName,
      BOOL bWatchSubtree,
      DWORD dwNotifyFilter
    );

__declspec(dllimport)
HANDLE
__stdcall
FindFirstChangeNotificationW(
      LPCWSTR lpPathName,
      BOOL bWatchSubtree,
      DWORD dwNotifyFilter
    );





#line 275 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileA(
      LPCSTR lpFileName,
      LPWIN32_FIND_DATAA lpFindFileData
    );

__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileW(
      LPCWSTR lpFileName,
      LPWIN32_FIND_DATAW lpFindFileData
    );





#line 297 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 299 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family






__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileExA(
      LPCSTR lpFileName,
      FINDEX_INFO_LEVELS fInfoLevelId,
      LPVOID lpFindFileData,
      FINDEX_SEARCH_OPS fSearchOp,
      LPVOID lpSearchFilter,
      DWORD dwAdditionalFlags
    );

__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileExW(
      LPCWSTR lpFileName,
      FINDEX_INFO_LEVELS fInfoLevelId,
      LPVOID lpFindFileData,
      FINDEX_SEARCH_OPS fSearchOp,
      LPVOID lpSearchFilter,
      DWORD dwAdditionalFlags
    );





#line 337 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 339 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 341 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
HANDLE
__stdcall
FindFirstVolumeW(
      LPWSTR lpszVolumeName,
      DWORD cchBufferLength
    );






__declspec(dllimport)
BOOL
__stdcall
FindNextChangeNotification(
      HANDLE hChangeHandle
    );


#line 369 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
FindNextFileA(
      HANDLE hFindFile,
      LPWIN32_FIND_DATAA lpFindFileData
    );

__declspec(dllimport)
BOOL
__stdcall
FindNextFileW(
      HANDLE hFindFile,
      LPWIN32_FIND_DATAW lpFindFileData
    );





#line 396 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 398 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
FindNextVolumeW(
      HANDLE hFindVolume,
      LPWSTR lpszVolumeName,
      DWORD cchBufferLength
    );






__declspec(dllimport)
BOOL
__stdcall
FindVolumeClose(
      HANDLE hFindVolume
    );


#line 427 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
FlushFileBuffers(
      HANDLE hFile
    );


#line 442 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
GetDiskFreeSpaceA(
      LPCSTR lpRootPathName,
      LPDWORD lpSectorsPerCluster,
      LPDWORD lpBytesPerSector,
      LPDWORD lpNumberOfFreeClusters,
      LPDWORD lpTotalNumberOfClusters
    );

__declspec(dllimport)
BOOL
__stdcall
GetDiskFreeSpaceW(
      LPCWSTR lpRootPathName,
      LPDWORD lpSectorsPerCluster,
      LPDWORD lpBytesPerSector,
      LPDWORD lpNumberOfFreeClusters,
      LPDWORD lpTotalNumberOfClusters
    );





#line 475 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 477 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
GetDiskFreeSpaceExA(
      LPCSTR lpDirectoryName,
      PULARGE_INTEGER lpFreeBytesAvailableToCaller,
      PULARGE_INTEGER lpTotalNumberOfBytes,
      PULARGE_INTEGER lpTotalNumberOfFreeBytes
    );

__declspec(dllimport)
BOOL
__stdcall
GetDiskFreeSpaceExW(
      LPCWSTR lpDirectoryName,
      PULARGE_INTEGER lpFreeBytesAvailableToCaller,
      PULARGE_INTEGER lpTotalNumberOfBytes,
      PULARGE_INTEGER lpTotalNumberOfFreeBytes
    );





#line 508 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 510 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
UINT
__stdcall
GetDriveTypeA(
      LPCSTR lpRootPathName
    );

__declspec(dllimport)
UINT
__stdcall
GetDriveTypeW(
      LPCWSTR lpRootPathName
    );





#line 535 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

__declspec(dllimport)
DWORD
__stdcall
GetFileAttributesA(
      LPCSTR lpFileName
    );

__declspec(dllimport)
DWORD
__stdcall
GetFileAttributesW(
      LPCWSTR lpFileName
    );





#line 555 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 557 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



typedef struct _WIN32_FILE_ATTRIBUTE_DATA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA, *LPWIN32_FILE_ATTRIBUTE_DATA;

#line 573 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
GetFileAttributesExA(
      LPCSTR lpFileName,
      GET_FILEEX_INFO_LEVELS fInfoLevelId,
      LPVOID lpFileInformation
    );

__declspec(dllimport)
BOOL
__stdcall
GetFileAttributesExW(
      LPCWSTR lpFileName,
      GET_FILEEX_INFO_LEVELS fInfoLevelId,
      LPVOID lpFileInformation
    );





#line 602 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 604 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



typedef struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD dwVolumeSerialNumber;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD nNumberOfLinks;
    DWORD nFileIndexHigh;
    DWORD nFileIndexLow;
} BY_HANDLE_FILE_INFORMATION, *PBY_HANDLE_FILE_INFORMATION, *LPBY_HANDLE_FILE_INFORMATION;

__declspec(dllimport)
BOOL
__stdcall
GetFileInformationByHandle(
      HANDLE hFile,
      LPBY_HANDLE_FILE_INFORMATION lpFileInformation
    );


__declspec(dllimport)
DWORD
__stdcall
GetFileSize(
      HANDLE hFile,
      LPDWORD lpFileSizeHigh
    );


__declspec(dllimport)
BOOL
__stdcall
GetFileSizeEx(
      HANDLE hFile,
      PLARGE_INTEGER lpFileSize
    );


__declspec(dllimport)
BOOL
__stdcall
GetFileTime(
      HANDLE hFile,
      LPFILETIME lpCreationTime,
      LPFILETIME lpLastAccessTime,
      LPFILETIME lpLastWriteTime
    );


__declspec(dllimport)
DWORD
__stdcall
GetFileType(
      HANDLE hFile
    );





__declspec(dllimport)
DWORD
__stdcall
GetFinalPathNameByHandleA(
      HANDLE hFile,
      LPSTR lpszFilePath,
      DWORD cchFilePath,
      DWORD dwFlags
    );

__declspec(dllimport)
DWORD
__stdcall
GetFinalPathNameByHandleW(
      HANDLE hFile,
      LPWSTR lpszFilePath,
      DWORD cchFilePath,
      DWORD dwFlags
    );





#line 697 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 699 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

__declspec(dllimport)
 
DWORD
__stdcall
GetFullPathNameA(
      LPCSTR lpFileName,
      DWORD nBufferLength,
      LPSTR lpBuffer,
     LPSTR * lpFilePart
    );

__declspec(dllimport)
 
DWORD
__stdcall
GetFullPathNameW(
      LPCWSTR lpFileName,
      DWORD nBufferLength,
      LPWSTR lpBuffer,
     LPWSTR * lpFilePart
    );





#line 727 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

__declspec(dllimport)
DWORD
__stdcall
GetLogicalDrives(
    void
    );


__declspec(dllimport)
DWORD
__stdcall
GetLogicalDriveStringsW(
      DWORD nBufferLength,
      LPWSTR lpBuffer
    );






__declspec(dllimport)
 
DWORD
__stdcall
GetLongPathNameA(
      LPCSTR lpszShortPath,
      LPSTR lpszLongPath,
      DWORD cchBuffer
    );

__declspec(dllimport)
 
DWORD
__stdcall
GetLongPathNameW(
      LPCWSTR lpszShortPath,
      LPWSTR lpszLongPath,
      DWORD cchBuffer
    );





#line 774 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

__declspec(dllimport)
 
DWORD
__stdcall
GetShortPathNameW(
      LPCWSTR lpszLongPath,
      LPWSTR lpszShortPath,
      DWORD cchBuffer
    );






__declspec(dllimport)
UINT
__stdcall
GetTempFileNameW(
      LPCWSTR lpPathName,
      LPCWSTR lpPrefixString,
      UINT uUnique,
      LPWSTR lpTempFileName
    );









__declspec(dllimport)
BOOL
__stdcall
GetVolumeInformationByHandleW(
      HANDLE hFile,
      LPWSTR lpVolumeNameBuffer,
      DWORD nVolumeNameSize,
      LPDWORD lpVolumeSerialNumber,
      LPDWORD lpMaximumComponentLength,
      LPDWORD lpFileSystemFlags,
      LPWSTR lpFileSystemNameBuffer,
      DWORD nFileSystemNameSize
    );


#line 824 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

__declspec(dllimport)
BOOL
__stdcall
GetVolumeInformationW(
      LPCWSTR lpRootPathName,
      LPWSTR lpVolumeNameBuffer,
      DWORD nVolumeNameSize,
      LPDWORD lpVolumeSerialNumber,
      LPDWORD lpMaximumComponentLength,
      LPDWORD lpFileSystemFlags,
      LPWSTR lpFileSystemNameBuffer,
      DWORD nFileSystemNameSize
    );






__declspec(dllimport)
BOOL
__stdcall
GetVolumePathNameW(
      LPCWSTR lpszFileName,
      LPWSTR lpszVolumePathName,
      DWORD cchBufferLength
    );






__declspec(dllimport)
BOOL
__stdcall
LocalFileTimeToFileTime(
      const FILETIME * lpLocalFileTime,
      LPFILETIME lpFileTime
    );


__declspec(dllimport)
BOOL
__stdcall
LockFile(
      HANDLE hFile,
      DWORD dwFileOffsetLow,
      DWORD dwFileOffsetHigh,
      DWORD nNumberOfBytesToLockLow,
      DWORD nNumberOfBytesToLockHigh
    );


#line 880 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
LockFileEx(
      HANDLE hFile,
      DWORD dwFlags,
      DWORD dwReserved,
      DWORD nNumberOfBytesToLockLow,
      DWORD nNumberOfBytesToLockHigh,
      LPOVERLAPPED lpOverlapped
    );


#line 900 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
DWORD
__stdcall
QueryDosDeviceW(
      LPCWSTR lpDeviceName,
      LPWSTR lpTargetPath,
      DWORD ucchMax
    );






#line 921 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
 
BOOL
__stdcall
ReadFile(
      HANDLE hFile,
       LPVOID lpBuffer,
      DWORD nNumberOfBytesToRead,
      LPDWORD lpNumberOfBytesRead,
      LPOVERLAPPED lpOverlapped
    );


#line 941 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
 
BOOL
__stdcall
ReadFileEx(
      HANDLE hFile,
       LPVOID lpBuffer,
      DWORD nNumberOfBytesToRead,
      LPOVERLAPPED lpOverlapped,
      LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );


__declspec(dllimport)
 
BOOL
__stdcall
ReadFileScatter(
      HANDLE hFile,
      FILE_SEGMENT_ELEMENT aSegmentArray[],
      DWORD nNumberOfBytesToRead,
      LPDWORD lpReserved,
      LPOVERLAPPED lpOverlapped
    );


#line 974 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
RemoveDirectoryA(
      LPCSTR lpPathName
    );

__declspec(dllimport)
BOOL
__stdcall
RemoveDirectoryW(
      LPCWSTR lpPathName
    );





#line 999 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

__declspec(dllimport)
BOOL
__stdcall
SetEndOfFile(
      HANDLE hFile
    );


__declspec(dllimport)
BOOL
__stdcall
SetFileAttributesA(
      LPCSTR lpFileName,
      DWORD dwFileAttributes
    );

__declspec(dllimport)
BOOL
__stdcall
SetFileAttributesW(
      LPCWSTR lpFileName,
      DWORD dwFileAttributes
    );





#line 1029 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"




__declspec(dllimport)
BOOL
__stdcall
SetFileInformationByHandle(
      HANDLE hFile,
      FILE_INFO_BY_HANDLE_CLASS FileInformationClass,
      LPVOID lpFileInformation,
      DWORD dwBufferSize
    );


#line 1045 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 1047 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
DWORD
__stdcall
SetFilePointer(
      HANDLE hFile,
      LONG lDistanceToMove,
      PLONG lpDistanceToMoveHigh,
      DWORD dwMoveMethod
    );


#line 1065 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
SetFilePointerEx(
      HANDLE hFile,
      LARGE_INTEGER liDistanceToMove,
      PLARGE_INTEGER lpNewFilePointer,
      DWORD dwMoveMethod
    );


#line 1083 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
SetFileTime(
      HANDLE hFile,
      const FILETIME * lpCreationTime,
      const FILETIME * lpLastAccessTime,
      const FILETIME * lpLastWriteTime
    );





__declspec(dllimport)
BOOL
__stdcall
SetFileValidData(
      HANDLE hFile,
      LONGLONG ValidDataLength
    );


#line 1113 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

__declspec(dllimport)
BOOL
__stdcall
UnlockFile(
      HANDLE hFile,
      DWORD dwFileOffsetLow,
      DWORD dwFileOffsetHigh,
      DWORD nNumberOfBytesToUnlockLow,
      DWORD nNumberOfBytesToUnlockHigh
    );


#line 1127 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
UnlockFileEx(
      HANDLE hFile,
      DWORD dwReserved,
      DWORD nNumberOfBytesToUnlockLow,
      DWORD nNumberOfBytesToUnlockHigh,
      LPOVERLAPPED lpOverlapped
    );


__declspec(dllimport)
BOOL
__stdcall
WriteFile(
      HANDLE hFile,
      LPCVOID lpBuffer,
      DWORD nNumberOfBytesToWrite,
      LPDWORD lpNumberOfBytesWritten,
      LPOVERLAPPED lpOverlapped
    );


#line 1158 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
WriteFileEx(
      HANDLE hFile,
      LPCVOID lpBuffer,
      DWORD nNumberOfBytesToWrite,
      LPOVERLAPPED lpOverlapped,
      LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );


__declspec(dllimport)
BOOL
__stdcall
WriteFileGather(
      HANDLE hFile,
      FILE_SEGMENT_ELEMENT aSegmentArray[],
      DWORD nNumberOfBytesToWrite,
      LPDWORD lpReserved,
      LPOVERLAPPED lpOverlapped
    );


#line 1189 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion








#pragma region Desktop Family



__declspec(dllimport)
DWORD
__stdcall
GetTempPathW(
      DWORD nBufferLength,
      LPWSTR lpBuffer
    );






__declspec(dllimport)
BOOL
__stdcall
GetVolumeNameForVolumeMountPointW(
      LPCWSTR lpszVolumeMountPoint,
      LPWSTR lpszVolumeName,
      DWORD cchBufferLength
    );









__declspec(dllimport)
BOOL
__stdcall
GetVolumePathNamesForVolumeNameW(
      LPCWSTR lpszVolumeName,
         LPWCH lpszVolumePathNames,
      DWORD cchBufferLength,
      PDWORD lpcchReturnLength
    );






#line 1248 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 1250 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion

#pragma region Application Family






typedef struct _CREATEFILE2_EXTENDED_PARAMETERS {
    DWORD dwSize;   
    DWORD dwFileAttributes;
    DWORD dwFileFlags;   
    DWORD dwSecurityQosFlags;	
    LPSECURITY_ATTRIBUTES lpSecurityAttributes; 
    HANDLE hTemplateFile;      
} CREATEFILE2_EXTENDED_PARAMETERS, *PCREATEFILE2_EXTENDED_PARAMETERS, *LPCREATEFILE2_EXTENDED_PARAMETERS;

__declspec(dllimport)
HANDLE
__stdcall
CreateFile2(
      LPCWSTR lpFileName,
      DWORD dwDesiredAccess,
      DWORD dwShareMode,
      DWORD dwCreationDisposition,
      LPCREATEFILE2_EXTENDED_PARAMETERS pCreateExParams
    );


#line 1281 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 1283 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"
#pragma endregion


#line 1287 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"







}
#line 1296 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"

#line 1298 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fileapi.h"


#line 39 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"
 











#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"













#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"


extern "C" {
#line 39 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"






#pragma region Application Family





__declspec(dllimport)
BOOL
__stdcall
IsDebuggerPresent(
    void
    );

#line 59 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"

#line 61 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
void
__stdcall
DebugBreak(
    void
    );


#line 76 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
void
__stdcall
OutputDebugStringA(
      LPCSTR lpOutputString
    );

__declspec(dllimport)
void
__stdcall
OutputDebugStringW(
      LPCWSTR lpOutputString
    );





#line 101 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"

#line 103 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"
#pragma endregion



#pragma region Desktop Family






__declspec(dllimport)
BOOL
__stdcall
ContinueDebugEvent(
      DWORD dwProcessId,
      DWORD dwThreadId,
      DWORD dwContinueStatus
    );


__declspec(dllimport)
BOOL
__stdcall
WaitForDebugEvent(
      LPDEBUG_EVENT lpDebugEvent,
      DWORD dwMilliseconds
    );


__declspec(dllimport)
BOOL
__stdcall
DebugActiveProcess(
      DWORD dwProcessId
    );


__declspec(dllimport)
BOOL
__stdcall
DebugActiveProcessStop(
      DWORD dwProcessId
    );


#line 150 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"

#line 152 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"
#pragma endregion






}
#line 161 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"


#line 164 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\debugapi.h"


#line 40 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"










#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"


extern "C" {
#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"

#pragma region Application Family



__declspec(dllimport)
 
PVOID
__stdcall
EncodePointer(
      PVOID Ptr
    );


__declspec(dllimport)
 
PVOID
__stdcall
DecodePointer(
      PVOID Ptr
    );


#line 58 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
 
PVOID
__stdcall
EncodeSystemPointer(
      PVOID Ptr
    );


__declspec(dllimport)
 
PVOID
__stdcall
DecodeSystemPointer(
      PVOID Ptr
    );


__declspec(dllimport)
BOOL
__stdcall
Beep(
      DWORD dwFreq,
      DWORD dwDuration
    );


#line 92 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"
#pragma endregion


}
#line 97 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"

#line 99 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\utilapiset.h"
#line 41 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"










#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"


extern "C" {
#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"






#pragma region Application Family






__declspec(dllimport)
BOOL
__stdcall
CloseHandle(
      HANDLE hObject
    );


__declspec(dllimport)
BOOL
__stdcall
DuplicateHandle(
      HANDLE hSourceProcessHandle,
      HANDLE hSourceHandle,
      HANDLE hTargetProcessHandle,
     LPHANDLE lpTargetHandle,
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      DWORD dwOptions
    );


#line 70 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
GetHandleInformation(
      HANDLE hObject,
      LPDWORD lpdwFlags
    );


__declspec(dllimport)
BOOL
__stdcall
SetHandleInformation(
      HANDLE hObject,
      DWORD dwMask,
      DWORD dwFlags
    );


#line 96 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"
#pragma endregion


}
#line 101 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"

#line 103 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\handleapi.h"
#line 42 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"
 











#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"












#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"


extern "C" {
#line 38 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"






#pragma region Desktop Family







typedef LONG (__stdcall *PTOP_LEVEL_EXCEPTION_FILTER)(
      struct _EXCEPTION_POINTERS *ExceptionInfo
    );

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;





#line 63 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)

void
__stdcall
RaiseException(
      DWORD dwExceptionCode,
      DWORD dwExceptionFlags,
      DWORD nNumberOfArguments,
      const ULONG_PTR * lpArguments
    );


#line 82 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"
#pragma endregion

#pragma region Desktop Family




__declspec(dllimport)
LONG
__stdcall
UnhandledExceptionFilter(
      struct _EXCEPTION_POINTERS * ExceptionInfo
    );


__declspec(dllimport)
LPTOP_LEVEL_EXCEPTION_FILTER
__stdcall
SetUnhandledExceptionFilter(
      LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter
    );


#line 106 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"
#pragma endregion

#pragma region Application Family





__declspec(dllimport)
   
DWORD
__stdcall
GetLastError(
    void
    );


#line 124 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"

__declspec(dllimport)
void
__stdcall
SetLastError(
      DWORD dwErrCode
    );


#line 134 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"
#pragma endregion

#pragma region Desktop Family






__declspec(dllimport)
UINT
__stdcall
GetErrorMode(
    void
    );


#line 152 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"

__declspec(dllimport)
UINT
__stdcall
SetErrorMode(
      UINT uMode
    );


#line 162 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"
#pragma endregion





#pragma region Desktop Family






__declspec(dllimport)
 
PVOID
__stdcall
AddVectoredExceptionHandler(
      ULONG First,
      PVECTORED_EXCEPTION_HANDLER Handler
    );


__declspec(dllimport)
ULONG
__stdcall
RemoveVectoredExceptionHandler(
      PVOID Handle
    );


__declspec(dllimport)
 
PVOID
__stdcall
AddVectoredContinueHandler(
      ULONG First,
      PVECTORED_EXCEPTION_HANDLER Handler
    );


__declspec(dllimport)
ULONG
__stdcall
RemoveVectoredContinueHandler(
      PVOID Handle
    );


#line 212 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"























#line 236 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"
#line 237 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"

#line 239 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"

#line 241 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"
#pragma endregion







}
#line 251 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"

#line 253 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\errhandlingapi.h"


#line 43 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"
 











#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"












#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"


extern "C" {
#line 38 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"






#pragma region Application Family






__declspec(dllimport)
DWORD
__stdcall
FlsAlloc(
      PFLS_CALLBACK_FUNCTION lpCallback
    );


__declspec(dllimport)
PVOID
__stdcall
FlsGetValue(
      DWORD dwFlsIndex
    );


__declspec(dllimport)
BOOL
__stdcall
FlsSetValue(
      DWORD dwFlsIndex,
      PVOID lpFlsData
    );


__declspec(dllimport)
BOOL
__stdcall
FlsFree(
      DWORD dwFlsIndex
    );


#line 85 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"

#line 87 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"
#pragma endregion





#pragma region Desktop Family






__declspec(dllimport)
BOOL
__stdcall
IsThreadAFiber(
    void
    );


#line 109 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"

#line 111 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"
#pragma endregion







}
#line 121 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"

#line 123 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\fibersapi.h"


#line 44 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"
 
 










#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"













#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"


extern "C" {
#line 39 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"








__declspec(dllimport)
BOOL
__stdcall
CreatePipe(
      PHANDLE hReadPipe,
      PHANDLE hWritePipe,
      LPSECURITY_ATTRIBUTES lpPipeAttributes,
      DWORD nSize
    );


__declspec(dllimport)
BOOL
__stdcall
ConnectNamedPipe(
      HANDLE hNamedPipe,
      LPOVERLAPPED lpOverlapped
    );


__declspec(dllimport)
BOOL
__stdcall
DisconnectNamedPipe(
      HANDLE hNamedPipe
    );


__declspec(dllimport)
BOOL
__stdcall
SetNamedPipeHandleState(
      HANDLE hNamedPipe,
      LPDWORD lpMode,
      LPDWORD lpMaxCollectionCount,
      LPDWORD lpCollectDataTimeout
    );


__declspec(dllimport)
BOOL
__stdcall
PeekNamedPipe(
      HANDLE hNamedPipe,
      LPVOID lpBuffer,
      DWORD nBufferSize,
      LPDWORD lpBytesRead,
      LPDWORD lpTotalBytesAvail,
      LPDWORD lpBytesLeftThisMessage
    );


__declspec(dllimport)
BOOL
__stdcall
TransactNamedPipe(
      HANDLE hNamedPipe,
      LPVOID lpInBuffer,
      DWORD nInBufferSize,
      LPVOID lpOutBuffer,
      DWORD nOutBufferSize,
      LPDWORD lpBytesRead,
      LPOVERLAPPED lpOverlapped
    );


__declspec(dllimport)
HANDLE
__stdcall
CreateNamedPipeW(
      LPCWSTR lpName,
      DWORD dwOpenMode,
      DWORD dwPipeMode,
      DWORD nMaxInstances,
      DWORD nOutBufferSize,
      DWORD nInBufferSize,
      DWORD nDefaultTimeOut,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );






__declspec(dllimport)
BOOL
__stdcall
WaitNamedPipeW(
      LPCWSTR lpNamedPipeName,
      DWORD nTimeOut
    );









__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeClientComputerNameW(
      HANDLE Pipe,
      LPWSTR ClientComputerName,
      ULONG ClientComputerNameLength
    );


#line 159 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"





#line 165 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"






__declspec(dllimport)
 
BOOL
__stdcall
ImpersonateNamedPipeClient(
      HANDLE hNamedPipe
    );
                               

#line 181 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"



}
#line 186 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"

#line 188 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namedpipeapi.h"


#line 45 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\profileapi.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\profileapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\profileapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\profileapi.h"










#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\profileapi.h"


extern "C" {
#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\profileapi.h"





__declspec(dllimport)
BOOL
__stdcall
QueryPerformanceCounter(
      LARGE_INTEGER * lpPerformanceCount
    );


__declspec(dllimport)
BOOL
__stdcall
QueryPerformanceFrequency(
      LARGE_INTEGER * lpFrequency
    );



}
#line 58 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\profileapi.h"

#line 60 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\profileapi.h"
#line 46 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"













#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"


extern "C" {
#line 37 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"

#pragma region Desktop Family







typedef struct _HEAP_SUMMARY {
    DWORD cb;
    SIZE_T cbAllocated;
    SIZE_T cbCommitted;
    SIZE_T cbReserved;
    SIZE_T cbMaxReserve;
} HEAP_SUMMARY, *PHEAP_SUMMARY;
typedef PHEAP_SUMMARY LPHEAP_SUMMARY;

#line 56 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"
#pragma endregion

#pragma region Desktop Family







__declspec(dllimport)
 
HANDLE
__stdcall
HeapCreate(
      DWORD flOptions,
      SIZE_T dwInitialSize,
      SIZE_T dwMaximumSize
    );


__declspec(dllimport)
BOOL
__stdcall
HeapDestroy(
      HANDLE hHeap
    );

    
#line 86 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
 
 
LPVOID
__stdcall
HeapAlloc(
      HANDLE hHeap,
      DWORD dwFlags,
      SIZE_T dwBytes
    );


__declspec(dllimport)
 
 
 
LPVOID
__stdcall
HeapReAlloc(
      HANDLE hHeap,
      DWORD dwFlags,
        LPVOID lpMem,
      SIZE_T dwBytes
    );


__declspec(dllimport)
BOOL
__stdcall
HeapFree(
      HANDLE hHeap,
      DWORD dwFlags,
          LPVOID lpMem
    );


__declspec(dllimport)
SIZE_T
__stdcall
HeapSize(
      HANDLE hHeap,
      DWORD dwFlags,
      LPCVOID lpMem
    );


#line 139 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
HeapValidate(
      HANDLE hHeap,
      DWORD dwFlags,
      LPCVOID lpMem
    );


__declspec(dllimport)
SIZE_T
__stdcall
HeapCompact(
      HANDLE hHeap,
      DWORD dwFlags
    );





BOOL
__stdcall
HeapSummary(
      HANDLE hHeap,
      DWORD dwFlags,
      LPHEAP_SUMMARY lpSummary
    );


#line 177 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"

#line 179 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
HANDLE
__stdcall
GetProcessHeap(
    void
    );


#line 194 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
DWORD
__stdcall
GetProcessHeaps(
      DWORD NumberOfHeaps,
      PHANDLE ProcessHeaps
    );


__declspec(dllimport)
BOOL
__stdcall
HeapLock(
      HANDLE hHeap
    );


__declspec(dllimport)
BOOL
__stdcall
HeapUnlock(
      HANDLE hHeap
    );


__declspec(dllimport)
BOOL
__stdcall
HeapWalk(
      HANDLE hHeap,
      LPPROCESS_HEAP_ENTRY lpEntry
    );


__declspec(dllimport)
BOOL
__stdcall
HeapSetInformation(
      HANDLE HeapHandle,
      HEAP_INFORMATION_CLASS HeapInformationClass,
      PVOID HeapInformation,
      SIZE_T HeapInformationLength
    );


__declspec(dllimport)
BOOL
__stdcall
HeapQueryInformation(
      HANDLE HeapHandle,
      HEAP_INFORMATION_CLASS HeapInformationClass,
      PVOID HeapInformation,
      SIZE_T HeapInformationLength,
      PSIZE_T ReturnLength
    );

    
#line 258 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"
#pragma endregion






}
#line 267 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"

#line 269 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\heapapi.h"
#line 47 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"
 











#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"













#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"


extern "C" {
#line 39 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"






#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
GetOverlappedResult(
      HANDLE hFile,
      LPOVERLAPPED lpOverlapped,
      LPDWORD lpNumberOfBytesTransferred,
      BOOL bWait
    );


__declspec(dllimport)
 
HANDLE
__stdcall
CreateIoCompletionPort(
      HANDLE FileHandle,
      HANDLE ExistingCompletionPort,
      ULONG_PTR CompletionKey,
      DWORD NumberOfConcurrentThreads
    );


__declspec(dllimport)
BOOL
__stdcall
GetQueuedCompletionStatus(
      HANDLE CompletionPort,
      LPDWORD lpNumberOfBytesTransferred,
      PULONG_PTR lpCompletionKey,
      LPOVERLAPPED * lpOverlapped,
      DWORD dwMilliseconds
    );





__declspec(dllimport)
BOOL
__stdcall
GetQueuedCompletionStatusEx(
      HANDLE CompletionPort,
      LPOVERLAPPED_ENTRY lpCompletionPortEntries,
      ULONG ulCount,
      PULONG ulNumEntriesRemoved,
      DWORD dwMilliseconds,
      BOOL fAlertable
    );


#line 101 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"

__declspec(dllimport)
BOOL
__stdcall
PostQueuedCompletionStatus(
      HANDLE CompletionPort,
      DWORD dwNumberOfBytesTransferred,
      ULONG_PTR dwCompletionKey,
      LPOVERLAPPED lpOverlapped
    );


__declspec(dllimport)
BOOL
__stdcall
DeviceIoControl(
      HANDLE hDevice,
      DWORD dwIoControlCode,
      LPVOID lpInBuffer,
      DWORD nInBufferSize,
      LPVOID lpOutBuffer,
      DWORD nOutBufferSize,
      LPDWORD lpBytesReturned,
      LPOVERLAPPED lpOverlapped
    );





__declspec(dllimport)
BOOL
__stdcall
CancelIoEx(
      HANDLE hFile,
      LPOVERLAPPED lpOverlapped
    );


#line 141 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"

#line 143 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"
#pragma endregion








#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
GetOverlappedResultEx(
      HANDLE hFile,
      LPOVERLAPPED lpOverlapped,
      LPDWORD lpNumberOfBytesTransferred,
      DWORD dwMilliseconds,
      BOOL bAlertable
    );


#line 169 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
CancelIo(
      HANDLE hFile
    );





__declspec(dllimport)
BOOL
__stdcall
CancelSynchronousIo(
      HANDLE hThread
    );


#line 195 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"

#line 197 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"
#pragma endregion

#line 200 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"







}
#line 209 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"

#line 211 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\ioapiset.h"


#line 48 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
 
 











#pragma once
#line 16 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 22 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"













#line 36 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"


extern "C" {
#line 40 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"







#pragma region Application Family









typedef RTL_SRWLOCK SRWLOCK, *PSRWLOCK;

#line 60 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion






#pragma region Application Family






__declspec(dllimport)
void
__stdcall
InitializeSRWLock(
      PSRWLOCK SRWLock
    );


__declspec(dllimport)

void
__stdcall
ReleaseSRWLockExclusive(
      PSRWLOCK SRWLock
    );


__declspec(dllimport)

void
__stdcall
ReleaseSRWLockShared(
      PSRWLOCK SRWLock
    );


__declspec(dllimport)

void
__stdcall
AcquireSRWLockExclusive(
      PSRWLOCK SRWLock
    );


__declspec(dllimport)

void
__stdcall
AcquireSRWLockShared(
      PSRWLOCK SRWLock
    );


__declspec(dllimport)

BOOLEAN
__stdcall
TryAcquireSRWLockExclusive(
      PSRWLOCK SRWLock
    );


__declspec(dllimport)

BOOLEAN
__stdcall
TryAcquireSRWLockShared(
      PSRWLOCK SRWLock
    );


#line 137 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

#line 139 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Desktop Family















#line 158 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

__declspec(dllimport)
void
__stdcall
InitializeCriticalSection(
      LPCRITICAL_SECTION lpCriticalSection
    );


#line 168 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

#line 170 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
void
__stdcall
EnterCriticalSection(
      LPCRITICAL_SECTION lpCriticalSection
    );


__declspec(dllimport)
void
__stdcall
LeaveCriticalSection(
      LPCRITICAL_SECTION lpCriticalSection
    );


#line 193 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
 
BOOL
__stdcall
InitializeCriticalSectionAndSpinCount(
      LPCRITICAL_SECTION lpCriticalSection,
      DWORD dwSpinCount
    );


#line 210 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Application Family






__declspec(dllimport)
BOOL
__stdcall
InitializeCriticalSectionEx(
      LPCRITICAL_SECTION lpCriticalSection,
      DWORD dwSpinCount,
      DWORD Flags
    );


#line 230 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

#line 232 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
DWORD
__stdcall
SetCriticalSectionSpinCount(
      LPCRITICAL_SECTION lpCriticalSection,
      DWORD dwSpinCount
    );


#line 248 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Application Family






__declspec(dllimport)
BOOL
__stdcall
TryEnterCriticalSection(
      LPCRITICAL_SECTION lpCriticalSection
    );


#line 266 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

__declspec(dllimport)
void
__stdcall
DeleteCriticalSection(
      LPCRITICAL_SECTION lpCriticalSection
    );










typedef RTL_RUN_ONCE INIT_ONCE;
typedef PRTL_RUN_ONCE PINIT_ONCE;
typedef PRTL_RUN_ONCE LPINIT_ONCE;


















typedef
BOOL
(__stdcall *PINIT_ONCE_FN) (
      PINIT_ONCE InitOnce,
      PVOID Parameter,
     PVOID *Context
    );




__declspec(dllimport)
void
__stdcall
InitOnceInitialize(
      PINIT_ONCE InitOnce
    );


__declspec(dllimport)
BOOL
__stdcall
InitOnceExecuteOnce(
      PINIT_ONCE InitOnce,
       PINIT_ONCE_FN InitFn,
      PVOID Parameter,
     LPVOID * Context
    );


__declspec(dllimport)
BOOL
__stdcall
InitOnceBeginInitialize(
      LPINIT_ONCE lpInitOnce,
      DWORD dwFlags,
      PBOOL fPending,
     LPVOID * lpContext
    );


__declspec(dllimport)
BOOL
__stdcall
InitOnceComplete(
      LPINIT_ONCE lpInitOnce,
      DWORD dwFlags,
      LPVOID lpContext
    );


#line 356 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"





typedef RTL_CONDITION_VARIABLE CONDITION_VARIABLE, *PCONDITION_VARIABLE;
















__declspec(dllimport)
void
__stdcall
InitializeConditionVariable(
      PCONDITION_VARIABLE ConditionVariable
    );


__declspec(dllimport)
void
__stdcall
WakeConditionVariable(
      PCONDITION_VARIABLE ConditionVariable
    );


__declspec(dllimport)
void
__stdcall
WakeAllConditionVariable(
      PCONDITION_VARIABLE ConditionVariable
    );


__declspec(dllimport)
BOOL
__stdcall
SleepConditionVariableCS(
      PCONDITION_VARIABLE ConditionVariable,
      PCRITICAL_SECTION CriticalSection,
      DWORD dwMilliseconds
    );


__declspec(dllimport)
BOOL
__stdcall
SleepConditionVariableSRW(
      PCONDITION_VARIABLE ConditionVariable,
      PSRWLOCK SRWLock,
      DWORD dwMilliseconds,
      ULONG Flags
    );


#line 424 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"





__declspec(dllimport)
BOOL
__stdcall
SetEvent(
      HANDLE hEvent
    );


__declspec(dllimport)
BOOL
__stdcall
ResetEvent(
      HANDLE hEvent
    );


__declspec(dllimport)
BOOL
__stdcall
ReleaseSemaphore(
      HANDLE hSemaphore,
      LONG lReleaseCount,
      LPLONG lpPreviousCount
    );


__declspec(dllimport)
BOOL
__stdcall
ReleaseMutex(
      HANDLE hMutex
    );


#line 464 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
DWORD
__stdcall
WaitForSingleObject(
      HANDLE hHandle,
      DWORD dwMilliseconds
    );


__declspec(dllimport)
DWORD
__stdcall
SleepEx(
      DWORD dwMilliseconds,
      BOOL bAlertable
    );


#line 489 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
DWORD
__stdcall
WaitForSingleObjectEx(
      HANDLE hHandle,
      DWORD dwMilliseconds,
      BOOL bAlertable
    );


__declspec(dllimport)
DWORD
__stdcall
WaitForMultipleObjectsEx(
      DWORD nCount,
      const HANDLE * lpHandles,
      BOOL bWaitAll,
      DWORD dwMilliseconds,
      BOOL bAlertable
    );









#line 525 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
 
HANDLE
__stdcall
CreateMutexA(
      LPSECURITY_ATTRIBUTES lpMutexAttributes,
      BOOL bInitialOwner,
      LPCSTR lpName
    );

__declspec(dllimport)
 
HANDLE
__stdcall
CreateMutexW(
      LPSECURITY_ATTRIBUTES lpMutexAttributes,
      BOOL bInitialOwner,
      LPCWSTR lpName
    );





#line 556 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

#line 558 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
 
HANDLE
__stdcall
OpenMutexW(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCWSTR lpName
    );






#line 580 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
 
HANDLE
__stdcall
CreateEventA(
      LPSECURITY_ATTRIBUTES lpEventAttributes,
      BOOL bManualReset,
      BOOL bInitialState,
      LPCSTR lpName
    );

__declspec(dllimport)
 
HANDLE
__stdcall
CreateEventW(
      LPSECURITY_ATTRIBUTES lpEventAttributes,
      BOOL bManualReset,
      BOOL bInitialState,
      LPCWSTR lpName
    );





#line 613 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

#line 615 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
 
HANDLE
__stdcall
OpenEventA(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCSTR lpName
    );

__declspec(dllimport)
 
HANDLE
__stdcall
OpenEventW(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCWSTR lpName
    );





#line 646 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

__declspec(dllimport)
 
HANDLE
__stdcall
OpenSemaphoreW(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCWSTR lpName
    );






#line 663 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion




#pragma region Desktop Family



typedef
void
(__stdcall *PTIMERAPCROUTINE)(
      LPVOID lpArgToCompletionRoutine,
          DWORD dwTimerLowValue,
          DWORD dwTimerHighValue
    );

__declspec(dllimport)
 
HANDLE
__stdcall
OpenWaitableTimerW(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCWSTR lpTimerName
    );









BOOL
__stdcall
SetWaitableTimerEx(
      HANDLE hTimer,
      const LARGE_INTEGER * lpDueTime,
      LONG lPeriod,
      PTIMERAPCROUTINE pfnCompletionRoutine,
      LPVOID lpArgToCompletionRoutine,
      PREASON_CONTEXT WakeContext,
      ULONG TolerableDelay
    );


#line 712 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

__declspec(dllimport)
BOOL
__stdcall
SetWaitableTimer(
      HANDLE hTimer,
      const LARGE_INTEGER * lpDueTime,
      LONG lPeriod,
      PTIMERAPCROUTINE pfnCompletionRoutine,
      LPVOID lpArgToCompletionRoutine,
      BOOL fResume
    );


__declspec(dllimport)
BOOL
__stdcall
CancelWaitableTimer(
      HANDLE hTimer
    );


#line 735 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion




#pragma region Application Family





__declspec(dllimport)
 
HANDLE
__stdcall
CreateMutexExA(
      LPSECURITY_ATTRIBUTES lpMutexAttributes,
      LPCSTR lpName,
      DWORD dwFlags,
      DWORD dwDesiredAccess
    );

__declspec(dllimport)
 
HANDLE
__stdcall
CreateMutexExW(
      LPSECURITY_ATTRIBUTES lpMutexAttributes,
      LPCWSTR lpName,
      DWORD dwFlags,
      DWORD dwDesiredAccess
    );





#line 773 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"




__declspec(dllimport)
 
HANDLE
__stdcall
CreateEventExA(
      LPSECURITY_ATTRIBUTES lpEventAttributes,
      LPCSTR lpName,
      DWORD dwFlags,
      DWORD dwDesiredAccess
    );

__declspec(dllimport)
 
HANDLE
__stdcall
CreateEventExW(
      LPSECURITY_ATTRIBUTES lpEventAttributes,
      LPCWSTR lpName,
      DWORD dwFlags,
      DWORD dwDesiredAccess
    );





#line 804 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

__declspec(dllimport)
 
HANDLE
__stdcall
CreateSemaphoreExW(
      LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
      LONG lInitialCount,
      LONG lMaximumCount,
      LPCWSTR lpName,
      DWORD dwFlags,
      DWORD dwDesiredAccess
    );






#line 824 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#pragma region Desktop Family





__declspec(dllimport)
 
HANDLE
__stdcall
CreateWaitableTimerExW(
      LPSECURITY_ATTRIBUTES lpTimerAttributes,
      LPCWSTR lpTimerName,
      DWORD dwFlags,
      DWORD dwDesiredAccess
    );






#line 849 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#line 852 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

#line 854 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"








#pragma region Desktop Family



typedef RTL_BARRIER SYNCHRONIZATION_BARRIER;
typedef PRTL_BARRIER PSYNCHRONIZATION_BARRIER;
typedef PRTL_BARRIER LPSYNCHRONIZATION_BARRIER;





BOOL
__stdcall
EnterSynchronizationBarrier(
      LPSYNCHRONIZATION_BARRIER lpBarrier,
      DWORD dwFlags
    );


BOOL
__stdcall
InitializeSynchronizationBarrier(
      LPSYNCHRONIZATION_BARRIER lpBarrier,
      LONG lTotalThreads,
      LONG lSpinCount
    );


BOOL
__stdcall
DeleteSynchronizationBarrier(
      LPSYNCHRONIZATION_BARRIER lpBarrier
    );


__declspec(dllimport)
void
__stdcall
Sleep(
      DWORD dwMilliseconds
    );


BOOL
__stdcall
WaitOnAddress(
      volatile void * Address,
      PVOID CompareAddress,
      SIZE_T AddressSize,
      DWORD dwMilliseconds
    );


void
__stdcall
WakeByAddressSingle(
      PVOID Address
    );


void
__stdcall
WakeByAddressAll(
      PVOID Address
    );




__declspec(dllimport)
DWORD
__stdcall
SignalObjectAndWait(
      HANDLE hObjectToSignal,
      HANDLE hObjectToWaitOn,
      DWORD dwMilliseconds,
      BOOL bAlertable
    );


#line 944 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

#line 946 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"
#pragma endregion

#line 949 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"






}
#line 957 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"

#line 959 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\synchapi.h"


#line 49 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"
 
 










#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"












#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"


extern "C" {
#line 38 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"












































































#line 115 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"




__declspec(dllimport)
void
__stdcall
InitializeSListHead(
      PSLIST_HEADER ListHead
    );


__declspec(dllimport)
PSLIST_ENTRY
__stdcall
InterlockedPopEntrySList(
      PSLIST_HEADER ListHead
    );


__declspec(dllimport)
PSLIST_ENTRY
__stdcall
InterlockedPushEntrySList(
      PSLIST_HEADER ListHead,
      PSLIST_ENTRY ListEntry
    );







__declspec(dllimport)
PSLIST_ENTRY
__stdcall
InterlockedPushListSListEx(
      PSLIST_HEADER ListHead,
      PSLIST_ENTRY List,
      PSLIST_ENTRY ListEnd,
      ULONG Count
    );


#line 161 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"

__declspec(dllimport)
PSLIST_ENTRY
__stdcall
InterlockedFlushSList(
      PSLIST_HEADER ListHead
    );


__declspec(dllimport)
USHORT
__stdcall
QueryDepthSList(
      PSLIST_HEADER ListHead
    );


#line 179 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"

#line 181 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"

#line 183 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"





}
#line 190 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"

#line 192 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\interlockedapi.h"

#line 50 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
 











#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"













#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"


extern "C" {
#line 39 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"






#pragma region Desktop Family



typedef struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
} PROCESS_INFORMATION, *PPROCESS_INFORMATION, *LPPROCESS_INFORMATION;

typedef struct _STARTUPINFOA {
    DWORD   cb;
    LPSTR   lpReserved;
    LPSTR   lpDesktop;
    LPSTR   lpTitle;
    DWORD   dwX;
    DWORD   dwY;
    DWORD   dwXSize;
    DWORD   dwYSize;
    DWORD   dwXCountChars;
    DWORD   dwYCountChars;
    DWORD   dwFillAttribute;
    DWORD   dwFlags;
    WORD    wShowWindow;
    WORD    cbReserved2;
    LPBYTE  lpReserved2;
    HANDLE  hStdInput;
    HANDLE  hStdOutput;
    HANDLE  hStdError;
} STARTUPINFOA, *LPSTARTUPINFOA;
typedef struct _STARTUPINFOW {
    DWORD   cb;
    LPWSTR  lpReserved;
    LPWSTR  lpDesktop;
    LPWSTR  lpTitle;
    DWORD   dwX;
    DWORD   dwY;
    DWORD   dwXSize;
    DWORD   dwYSize;
    DWORD   dwXCountChars;
    DWORD   dwYCountChars;
    DWORD   dwFillAttribute;
    DWORD   dwFlags;
    WORD    wShowWindow;
    WORD    cbReserved2;
    LPBYTE  lpReserved2;
    HANDLE  hStdInput;
    HANDLE  hStdOutput;
    HANDLE  hStdError;
} STARTUPINFOW, *LPSTARTUPINFOW;




typedef STARTUPINFOA STARTUPINFO;
typedef LPSTARTUPINFOA LPSTARTUPINFO;
#line 103 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"




__declspec(dllimport)
DWORD
__stdcall
QueueUserAPC(
      PAPCFUNC pfnAPC,
      HANDLE hThread,
      ULONG_PTR dwData
    );


#line 118 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"

__declspec(dllimport)
BOOL
__stdcall
GetProcessTimes(
      HANDLE hProcess,
      LPFILETIME lpCreationTime,
      LPFILETIME lpExitTime,
      LPFILETIME lpKernelTime,
      LPFILETIME lpUserTime
    );


#line 132 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
HANDLE
__stdcall
GetCurrentProcess(
    void
    );


__declspec(dllimport)
DWORD
__stdcall
GetCurrentProcessId(
    void
    );


#line 155 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
__declspec(noreturn)
void
__stdcall
ExitProcess(
      UINT uExitCode
    );


__declspec(dllimport)
BOOL
__stdcall
TerminateProcess(
      HANDLE hProcess,
      UINT uExitCode
    );


__declspec(dllimport)
BOOL
__stdcall
GetExitCodeProcess(
      HANDLE hProcess,
      LPDWORD lpExitCode
    );


__declspec(dllimport)
BOOL
__stdcall
SwitchToThread(
    void
    );


__declspec(dllimport)
 
HANDLE
__stdcall
CreateThread(
      LPSECURITY_ATTRIBUTES lpThreadAttributes,
      SIZE_T dwStackSize,
      LPTHREAD_START_ROUTINE lpStartAddress,
        LPVOID lpParameter,
      DWORD dwCreationFlags,
      LPDWORD lpThreadId
    );


__declspec(dllimport)
 
HANDLE
__stdcall
CreateRemoteThread(
      HANDLE hProcess,
      LPSECURITY_ATTRIBUTES lpThreadAttributes,
      SIZE_T dwStackSize,
      LPTHREAD_START_ROUTINE lpStartAddress,
      LPVOID lpParameter,
      DWORD dwCreationFlags,
      LPDWORD lpThreadId
    );


#line 226 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
HANDLE
__stdcall
GetCurrentThread(
    void
    );


__declspec(dllimport)
DWORD
__stdcall
GetCurrentThreadId(
    void
    );


#line 249 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
 
HANDLE
__stdcall
OpenThread(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      DWORD dwThreadId
    );


__declspec(dllimport)
BOOL
__stdcall
SetThreadPriority(
      HANDLE hThread,
      int nPriority
    );


__declspec(dllimport)
BOOL
__stdcall
SetThreadPriorityBoost(
      HANDLE hThread,
      BOOL bDisablePriorityBoost
    );


__declspec(dllimport)
BOOL
__stdcall
GetThreadPriorityBoost(
      HANDLE hThread,
      PBOOL pDisablePriorityBoost
    );


__declspec(dllimport)
int
__stdcall
GetThreadPriority(
      HANDLE hThread
    );


__declspec(dllimport)
__declspec(noreturn)
void
__stdcall
ExitThread(
      DWORD dwExitCode
    );


__declspec(dllimport)
BOOL
__stdcall
TerminateThread(
      HANDLE hThread,
      DWORD dwExitCode
    );


__declspec(dllimport)
 
BOOL
__stdcall
GetExitCodeThread(
      HANDLE hThread,
      LPDWORD lpExitCode
    );


__declspec(dllimport)
DWORD
__stdcall
SuspendThread(
      HANDLE hThread
    );


__declspec(dllimport)
DWORD
__stdcall
ResumeThread(
      HANDLE hThread
    );





 
__declspec(dllimport)
DWORD
__stdcall
TlsAlloc(
    void
    );


__declspec(dllimport)
LPVOID
__stdcall
TlsGetValue(
      DWORD dwTlsIndex
    );


__declspec(dllimport)
BOOL
__stdcall
TlsSetValue(
      DWORD dwTlsIndex,
      LPVOID lpTlsValue
    );


__declspec(dllimport)
BOOL
__stdcall
TlsFree(
      DWORD dwTlsIndex
    );




__declspec(dllimport)
BOOL
__stdcall
CreateProcessA(
      LPCSTR lpApplicationName,
      LPSTR lpCommandLine,
      LPSECURITY_ATTRIBUTES lpProcessAttributes,
      LPSECURITY_ATTRIBUTES lpThreadAttributes,
      BOOL bInheritHandles,
      DWORD dwCreationFlags,
      LPVOID lpEnvironment,
      LPCSTR lpCurrentDirectory,
      LPSTARTUPINFOA lpStartupInfo,
      LPPROCESS_INFORMATION lpProcessInformation
    );

__declspec(dllimport)
BOOL
__stdcall
CreateProcessW(
      LPCWSTR lpApplicationName,
      LPWSTR lpCommandLine,
      LPSECURITY_ATTRIBUTES lpProcessAttributes,
      LPSECURITY_ATTRIBUTES lpThreadAttributes,
      BOOL bInheritHandles,
      DWORD dwCreationFlags,
      LPVOID lpEnvironment,
      LPCWSTR lpCurrentDirectory,
      LPSTARTUPINFOW lpStartupInfo,
      LPPROCESS_INFORMATION lpProcessInformation
    );





#line 421 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"

#line 423 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"

__declspec(dllimport)
BOOL
__stdcall
SetProcessShutdownParameters(
      DWORD dwLevel,
      DWORD dwFlags
    );


__declspec(dllimport)
DWORD
__stdcall
GetProcessVersion(
      DWORD ProcessId
    );


__declspec(dllimport)
void
__stdcall
GetStartupInfoW(
      LPSTARTUPINFOW lpStartupInfo
    );





#line 453 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion





#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
CreateProcessAsUserW(
      HANDLE hToken,
      LPCWSTR lpApplicationName,
      LPWSTR lpCommandLine,
      LPSECURITY_ATTRIBUTES lpProcessAttributes,
      LPSECURITY_ATTRIBUTES lpThreadAttributes,
      BOOL bInheritHandles,
      DWORD dwCreationFlags,
      LPVOID lpEnvironment,
      LPCWSTR lpCurrentDirectory,
      LPSTARTUPINFOW lpStartupInfo,
      LPPROCESS_INFORMATION lpProcessInformation
    );






#line 486 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#line 489 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"

#pragma region Desktop Family



__declspec(dllimport)
 
BOOL
__stdcall
SetThreadToken(
      PHANDLE Thread,
      HANDLE Token
    );


__declspec(dllimport)
BOOL
__stdcall
OpenProcessToken(
      HANDLE ProcessHandle,
      DWORD DesiredAccess,
     PHANDLE TokenHandle
    );


__declspec(dllimport)
BOOL
__stdcall
OpenThreadToken(
      HANDLE ThreadHandle,
      DWORD DesiredAccess,
      BOOL OpenAsSelf,
     PHANDLE TokenHandle
    );


#line 526 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion



#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
SetPriorityClass(
      HANDLE hProcess,
      DWORD dwPriorityClass
    );


__declspec(dllimport)
BOOL
__stdcall
SetThreadStackGuarantee(
      PULONG StackSizeInBytes
    );


__declspec(dllimport)
DWORD
__stdcall
GetPriorityClass(
      HANDLE hProcess
    );


__declspec(dllimport)
BOOL
__stdcall
ProcessIdToSessionId(
      DWORD dwProcessId,
      DWORD * pSessionId
    );






__declspec(dllimport)
DWORD
__stdcall
GetProcessId(
      HANDLE Process
    );


#line 581 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"




__declspec(dllimport)
DWORD
__stdcall
GetThreadId(
      HANDLE Thread
    );


#line 594 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"


typedef struct _PROC_THREAD_ATTRIBUTE_LIST *PPROC_THREAD_ATTRIBUTE_LIST, *LPPROC_THREAD_ATTRIBUTE_LIST;

#line 599 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion




#pragma region Application Family



__declspec(dllimport)
void
__stdcall
FlushProcessWriteBuffers(
    void
    );


#line 617 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
DWORD
__stdcall
GetProcessIdOfThread(
      HANDLE Thread
    );


__declspec(dllimport)
 
BOOL
__stdcall
InitializeProcThreadAttributeList(
      LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
      DWORD dwAttributeCount,
      DWORD dwFlags,
      PSIZE_T lpSize
    );


__declspec(dllimport)
void
__stdcall
DeleteProcThreadAttributeList(
      LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList
    );




__declspec(dllimport)
BOOL
__stdcall
SetProcessAffinityUpdateMode(
      HANDLE hProcess,
      DWORD dwFlags
    );


__declspec(dllimport)
BOOL
__stdcall
QueryProcessAffinityUpdateMode(
      HANDLE hProcess,
      LPDWORD lpdwFlags
    );




__declspec(dllimport)
BOOL
__stdcall
UpdateProcThreadAttribute(
      LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
      DWORD dwFlags,
      DWORD_PTR Attribute,
      PVOID lpValue,
      SIZE_T cbSize,
      PVOID lpPreviousValue,
      PSIZE_T lpReturnSize
    );


#line 688 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#line 691 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"

#pragma region Desktop Family



__declspec(dllimport)
 
HANDLE
__stdcall
CreateRemoteThreadEx(
      HANDLE hProcess,
      LPSECURITY_ATTRIBUTES lpThreadAttributes,
      SIZE_T dwStackSize,
      LPTHREAD_START_ROUTINE lpStartAddress,
      LPVOID lpParameter,
      DWORD dwCreationFlags,
      LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
      LPDWORD lpThreadId
    );


#line 713 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion









#pragma region Desktop Family






__declspec(dllimport)
void
__stdcall
GetCurrentThreadStackLimits(
      PULONG_PTR LowLimit,
      PULONG_PTR HighLimit
    );


#line 740 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"

__declspec(dllimport)
BOOL
__stdcall
GetThreadContext(
      HANDLE hThread,
      LPCONTEXT lpContext
    );


__declspec(dllimport)
BOOL
__stdcall
SetThreadContext(
      HANDLE hThread,
      const CONTEXT * lpContext
    );





__declspec(dllimport)
BOOL
__stdcall
SetProcessMitigationPolicy(
      PROCESS_MITIGATION_POLICY MitigationPolicy,
      PVOID lpBuffer,
      SIZE_T dwLength
    );


__declspec(dllimport)
BOOL
__stdcall
GetProcessMitigationPolicy(
      HANDLE hProcess,
      PROCESS_MITIGATION_POLICY MitigationPolicy,
      PVOID lpBuffer,
      SIZE_T dwLength
    );


#line 784 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"

#line 786 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#line 789 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#line 790 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"




#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
FlushInstructionCache(
      HANDLE hProcess,
      LPCVOID lpBaseAddress,
      SIZE_T dwSize
    );


__declspec(dllimport)
BOOL
__stdcall
GetThreadTimes(
      HANDLE hThread,
      LPFILETIME lpCreationTime,
      LPFILETIME lpExitTime,
      LPFILETIME lpKernelTime,
      LPFILETIME lpUserTime
    );


__declspec(dllimport)
HANDLE
__stdcall
OpenProcess(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      DWORD dwProcessId
    );


#line 831 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#pragma region Application Family



BOOL
__stdcall
IsProcessorFeaturePresent(
      DWORD ProcessorFeature
    );


#line 845 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#line 848 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"




#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
GetProcessHandleCount(
      HANDLE hProcess,
      PDWORD pdwHandleCount
    );

    
#line 866 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#line 869 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"




#pragma region Desktop Family



__declspec(dllimport)
DWORD
__stdcall
GetCurrentProcessorNumber(
    void
    );


#line 886 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#line 889 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"




#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
SetThreadIdealProcessorEx(
      HANDLE hThread,
      PPROCESSOR_NUMBER lpIdealProcessor,
      PPROCESSOR_NUMBER lpPreviousIdealProcessor
    );


__declspec(dllimport)
BOOL
__stdcall
GetThreadIdealProcessorEx(
      HANDLE hThread,
      PPROCESSOR_NUMBER lpIdealProcessor
    );


__declspec(dllimport)
void
__stdcall
GetCurrentProcessorNumberEx(
      PPROCESSOR_NUMBER ProcNumber
    );


#line 925 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"
#pragma endregion

#line 928 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"








}
#line 938 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"

#line 940 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processthreadsapi.h"



#line 51 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
 
 











#pragma once
#line 16 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 22 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"





#pragma warning(disable:4514)

#pragma warning(disable:4103)
#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"


#pragma warning(push)
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma warning(disable:4001)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#line 39 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"











#line 51 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"


extern "C" {
#line 55 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"







#pragma region Application Family



typedef struct _SYSTEM_INFO {
    union {
        DWORD dwOemId;          
        struct {
            WORD wProcessorArchitecture;
            WORD wReserved;
        } ;
    } ;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
} SYSTEM_INFO, *LPSYSTEM_INFO;

#line 86 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion






#pragma region Desktop Family



__declspec(dllimport)
DWORD
__stdcall
GetVersion(
    void
    );


typedef struct _MEMORYSTATUSEX {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    DWORDLONG ullTotalPhys;
    DWORDLONG ullAvailPhys;
    DWORDLONG ullTotalPageFile;
    DWORDLONG ullAvailPageFile;
    DWORDLONG ullTotalVirtual;
    DWORDLONG ullAvailVirtual;
    DWORDLONG ullAvailExtendedVirtual;
} MEMORYSTATUSEX, *LPMEMORYSTATUSEX;

__declspec(dllimport)
BOOL
__stdcall
GlobalMemoryStatusEx(
      LPMEMORYSTATUSEX lpBuffer
    );


#line 126 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
void
__stdcall
GetSystemTime(
      LPSYSTEMTIME lpSystemTime
    );


__declspec(dllimport)
void
__stdcall
GetSystemTimeAsFileTime(
      LPFILETIME lpSystemTimeAsFileTime
    );


__declspec(dllimport)
void
__stdcall
GetLocalTime(
      LPSYSTEMTIME lpSystemTime
    );


#line 157 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
SetLocalTime(
      const SYSTEMTIME * lpSystemTime
    );


__declspec(dllimport)
void
__stdcall
GetSystemInfo(
      LPSYSTEM_INFO lpSystemInfo
    );


#line 180 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion




#pragma region Desktop Family



 
__declspec(dllimport)
DWORD
__stdcall
GetTickCount(
    void
    );


#line 199 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion

#pragma region Application Family






__declspec(dllimport)
ULONGLONG
__stdcall
GetTickCount64(
    void
    );


#line 217 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"

#line 219 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
 
BOOL
__stdcall
GetSystemTimeAdjustment(
      PDWORD lpTimeAdjustment,
      PDWORD lpTimeIncrement,
      PBOOL lpTimeAdjustmentDisabled
    );


__declspec(dllimport)
 
UINT
__stdcall
GetSystemDirectoryA(
      LPSTR lpBuffer,
      UINT uSize
    );

__declspec(dllimport)
 
UINT
__stdcall
GetSystemDirectoryW(
      LPWSTR lpBuffer,
      UINT uSize
    );





#line 259 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"

__declspec(dllimport)
 
 
UINT
__stdcall
GetWindowsDirectoryA(
      LPSTR lpBuffer,
      UINT uSize
    );

__declspec(dllimport)
 
 
UINT
__stdcall
GetWindowsDirectoryW(
      LPWSTR lpBuffer,
      UINT uSize
    );





#line 285 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"

__declspec(dllimport)
 
UINT
__stdcall
GetSystemWindowsDirectoryA(
      LPSTR lpBuffer,
      UINT uSize
    );

__declspec(dllimport)
 
UINT
__stdcall
GetSystemWindowsDirectoryW(
      LPWSTR lpBuffer,
      UINT uSize
    );





#line 309 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"

#line 311 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion






#pragma region Desktop Family



typedef enum _COMPUTER_NAME_FORMAT {
    ComputerNameNetBIOS,
    ComputerNameDnsHostname,
    ComputerNameDnsDomain,
    ComputerNameDnsFullyQualified,
    ComputerNamePhysicalNetBIOS,
    ComputerNamePhysicalDnsHostname,
    ComputerNamePhysicalDnsDomain,
    ComputerNamePhysicalDnsFullyQualified,
    ComputerNameMax
} COMPUTER_NAME_FORMAT ;

#line 335 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion






#pragma region Desktop Family



__declspec(dllimport)
 
BOOL
__stdcall
GetComputerNameExA(
      COMPUTER_NAME_FORMAT NameType,
      LPSTR lpBuffer,
      LPDWORD nSize
    );

__declspec(dllimport)
 
BOOL
__stdcall
GetComputerNameExW(
      COMPUTER_NAME_FORMAT NameType,
      LPWSTR lpBuffer,
      LPDWORD nSize
    );





#line 371 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"








__declspec(dllimport)
BOOL
__stdcall
SetComputerNameExW(
      COMPUTER_NAME_FORMAT NameType,
      LPCWSTR lpBuffer
    );






__declspec(dllimport)
BOOL
__stdcall
SetSystemTime(
      const SYSTEMTIME * lpSystemTime
    );


#line 401 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"





__declspec(dllimport)
BOOL
__stdcall
GetVersionExA(
      LPOSVERSIONINFOA lpVersionInformation
    );

__declspec(dllimport)
BOOL
__stdcall
GetVersionExW(
      LPOSVERSIONINFOW lpVersionInformation
    );





#line 425 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"

__declspec(dllimport)
BOOL
__stdcall
GetLogicalProcessorInformation(
      PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer,
      PDWORD ReturnedLength
    );





__declspec(dllimport)
BOOL
__stdcall
GetLogicalProcessorInformationEx(
      LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
      PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer,
      PDWORD ReturnedLength
    );


#line 449 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"

#line 451 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion








#pragma region Application Family



__declspec(dllimport)
void
__stdcall
GetNativeSystemInfo(
      LPSYSTEM_INFO lpSystemInfo
    );


#line 473 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion

#line 476 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"




#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
GetProductInfo(
      DWORD dwOSMajorVersion,
      DWORD dwOSMinorVersion,
      DWORD dwSpMajorVersion,
      DWORD dwSpMinorVersion,
      PDWORD pdwReturnedProductType
    );

    
#line 497 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion

#line 500 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"

#pragma region Desktop Family






__declspec(dllimport)
ULONGLONG
__stdcall
VerSetConditionMask(
      ULONGLONG ConditionMask,
      ULONG TypeMask,
      UCHAR Condition
    );


#line 519 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"




__declspec(dllimport)
BOOL
__stdcall
GetOsSafeBootMode(
      PDWORD Flags
    );


#line 532 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"




__declspec(dllimport)
void
__stdcall
GetSystemTimePreciseAsFileTime(
      LPFILETIME lpSystemTimeAsFileTime
    );


__declspec(dllimport)
UINT
__stdcall
EnumSystemFirmwareTables(
      DWORD FirmwareTableProviderSignature,
      PVOID pFirmwareTableEnumBuffer,
      DWORD BufferSize
    );


__declspec(dllimport)
UINT
__stdcall
GetSystemFirmwareTable(
      DWORD FirmwareTableProviderSignature,
      DWORD FirmwareTableID,
      PVOID pFirmwareTableBuffer,
      DWORD BufferSize
    );


#line 566 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"

#line 568 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#pragma endregion







}
#line 578 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"





#pragma warning(pop)





#line 590 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"
#line 591 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"

#line 593 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\sysinfoapi.h"


#line 52 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
 











#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"













#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"



extern "C" {
#line 40 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"

#pragma region Application Family










#line 53 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#pragma region Desktop Family





#line 62 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#pragma region Application Family






#line 72 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion






#pragma region Desktop Family






__declspec(dllimport)
   
LPVOID
__stdcall
VirtualAlloc(
      LPVOID lpAddress,
      SIZE_T dwSize,
      DWORD flAllocationType,
      DWORD flProtect
    );



#line 100 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"


#line 103 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"


#line 106 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
__declspec(dllimport)
BOOL
__stdcall
VirtualFree(
      LPVOID lpAddress,
      SIZE_T dwSize,
      DWORD dwFreeType
    );


__declspec(dllimport)
 
BOOL
__stdcall
VirtualProtect(
      LPVOID lpAddress,
      SIZE_T dwSize,
      DWORD flNewProtect,
      PDWORD lpflOldProtect
    );


#line 129 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
SIZE_T
__stdcall
VirtualQuery(
      LPCVOID lpAddress,
      PMEMORY_BASIC_INFORMATION lpBuffer,
      SIZE_T dwLength
    );


#line 146 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
   
LPVOID
__stdcall
VirtualAllocEx(
      HANDLE hProcess,
      LPVOID lpAddress,
      SIZE_T dwSize,
      DWORD flAllocationType,
      DWORD flProtect
    );



#line 167 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"


#line 170 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"


#line 173 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"


#line 176 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
__declspec(dllimport)
BOOL
__stdcall
VirtualFreeEx(
      HANDLE hProcess,
      LPVOID lpAddress,
      SIZE_T dwSize,
      DWORD dwFreeType
    );


__declspec(dllimport)
 
BOOL
__stdcall
VirtualProtectEx(
      HANDLE hProcess,
      LPVOID lpAddress,
      SIZE_T dwSize,
      DWORD flNewProtect,
      PDWORD lpflOldProtect
    );


__declspec(dllimport)
SIZE_T
__stdcall
VirtualQueryEx(
      HANDLE hProcess,
      LPCVOID lpAddress,
      PMEMORY_BASIC_INFORMATION lpBuffer,
      SIZE_T dwLength
    );


__declspec(dllimport)
 
BOOL
__stdcall
ReadProcessMemory(
      HANDLE hProcess,
      LPCVOID lpBaseAddress,
      LPVOID lpBuffer,
      SIZE_T nSize,
      SIZE_T * lpNumberOfBytesRead
    );


__declspec(dllimport)
 
BOOL
__stdcall
WriteProcessMemory(
      HANDLE hProcess,
      LPVOID lpBaseAddress,
      LPCVOID lpBuffer,
      SIZE_T nSize,
      SIZE_T * lpNumberOfBytesWritten
    );


__declspec(dllimport)
 
HANDLE
__stdcall
CreateFileMappingW(
      HANDLE hFile,
      LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
      DWORD flProtect,
      DWORD dwMaximumSizeHigh,
      DWORD dwMaximumSizeLow,
      LPCWSTR lpName
    );






__declspec(dllimport)
 
HANDLE
__stdcall
OpenFileMappingW(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCWSTR lpName
    );






__declspec(dllimport)
   
LPVOID
__stdcall
MapViewOfFile(
      HANDLE hFileMappingObject,
      DWORD dwDesiredAccess,
      DWORD dwFileOffsetHigh,
      DWORD dwFileOffsetLow,
      SIZE_T dwNumberOfBytesToMap
    );


__declspec(dllimport)
   
LPVOID
__stdcall
MapViewOfFileEx(
      HANDLE hFileMappingObject,
      DWORD dwDesiredAccess,
      DWORD dwFileOffsetHigh,
      DWORD dwFileOffsetLow,
      SIZE_T dwNumberOfBytesToMap,
      LPVOID lpBaseAddress
    );


#line 298 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
FlushViewOfFile(
      LPCVOID lpBaseAddress,
      SIZE_T dwNumberOfBytesToFlush
    );


__declspec(dllimport)
BOOL
__stdcall
UnmapViewOfFile(
      LPCVOID lpBaseAddress
    );


#line 322 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion








#pragma region Desktop Family



__declspec(dllimport)
SIZE_T
__stdcall
GetLargePageMinimum(
    void
    );


__declspec(dllimport)
 
BOOL
__stdcall
GetProcessWorkingSetSizeEx(
      HANDLE hProcess,
      PSIZE_T lpMinimumWorkingSetSize,
      PSIZE_T lpMaximumWorkingSetSize,
      PDWORD Flags
    );


__declspec(dllimport)
BOOL
__stdcall
SetProcessWorkingSetSizeEx(
      HANDLE hProcess,
      SIZE_T dwMinimumWorkingSetSize,
      SIZE_T dwMaximumWorkingSetSize,
      DWORD Flags
    );


__declspec(dllimport)
BOOL
__stdcall
VirtualLock(
      LPVOID lpAddress,
      SIZE_T dwSize
    );


__declspec(dllimport)
BOOL
__stdcall
VirtualUnlock(
      LPVOID lpAddress,
      SIZE_T dwSize
    );


__declspec(dllimport)
 
UINT
__stdcall
GetWriteWatch(
      DWORD dwFlags,
      PVOID lpBaseAddress,
      SIZE_T dwRegionSize,
      PVOID * lpAddresses,
      ULONG_PTR * lpdwCount,
      LPDWORD lpdwGranularity
    );


__declspec(dllimport)
UINT
__stdcall
ResetWriteWatch(
      LPVOID lpBaseAddress,
      SIZE_T dwRegionSize
    );


#line 408 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#line 411 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"




#pragma region Desktop Family



typedef enum _MEMORY_RESOURCE_NOTIFICATION_TYPE {
    LowMemoryResourceNotification,
    HighMemoryResourceNotification
} MEMORY_RESOURCE_NOTIFICATION_TYPE;

__declspec(dllimport)
 
HANDLE
__stdcall
CreateMemoryResourceNotification(
      MEMORY_RESOURCE_NOTIFICATION_TYPE NotificationType
    );


__declspec(dllimport)
 
BOOL
__stdcall
QueryMemoryResourceNotification(
      HANDLE ResourceNotificationHandle,
      PBOOL ResourceState
    );


#line 444 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#line 447 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"




#pragma region Desktop Family









__declspec(dllimport)
 
BOOL
__stdcall
GetSystemFileCacheSize(
      PSIZE_T lpMinimumFileCacheSize,
      PSIZE_T lpMaximumFileCacheSize,
      PDWORD lpFlags
    );


__declspec(dllimport)
BOOL
__stdcall
SetSystemFileCacheSize(
      SIZE_T MinimumFileCacheSize,
      SIZE_T MaximumFileCacheSize,
      DWORD Flags
    );


#line 483 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#line 486 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"




#pragma region Desktop Family



__declspec(dllimport)
 
HANDLE
__stdcall
CreateFileMappingNumaW(
      HANDLE hFile,
      LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
      DWORD flProtect,
      DWORD dwMaximumSizeHigh,
      DWORD dwMaximumSizeLow,
      LPCWSTR lpName,
      DWORD nndPreferred
    );






#line 514 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#line 517 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"




#pragma region Desktop Family



typedef struct _WIN32_MEMORY_RANGE_ENTRY {
    PVOID VirtualAddress;
    SIZE_T NumberOfBytes;
} WIN32_MEMORY_RANGE_ENTRY, *PWIN32_MEMORY_RANGE_ENTRY;

__declspec(dllimport)
BOOL
__stdcall
PrefetchVirtualMemory(
      HANDLE hProcess,
      ULONG_PTR NumberOfEntries,
      PWIN32_MEMORY_RANGE_ENTRY VirtualAddresses,
      ULONG Flags
    );


__declspec(dllimport)
BOOL
__stdcall
UnmapViewOfFileEx(
      PVOID BaseAddress,
      ULONG UnmapFlags
    );


#line 551 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
 
HANDLE
__stdcall
CreateFileMappingFromApp(
      HANDLE hFile,
      PSECURITY_ATTRIBUTES SecurityAttributes,
      ULONG PageProtection,
      ULONG64 MaximumSize,
      PCWSTR Name
    );


__declspec(dllimport)
   
LPVOID
__stdcall
MapViewOfFileFromApp(
      HANDLE hFileMappingObject,
      ULONG DesiredAccess,
      ULONG64 FileOffset,
      SIZE_T NumberOfBytesToMap
    );


#line 583 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"
#pragma endregion

#line 586 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"







}
#line 595 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"

#line 597 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\memoryapi.h"



#line 53 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoollegacyapiset.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoollegacyapiset.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoollegacyapiset.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoollegacyapiset.h"











#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoollegacyapiset.h"


extern "C" {
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoollegacyapiset.h"





#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
QueueUserWorkItem(
      LPTHREAD_START_ROUTINE Function,
      PVOID Context,
      ULONG Flags
    );


__declspec(dllimport)
 
BOOL
__stdcall
UnregisterWaitEx(
      HANDLE WaitHandle,
      HANDLE CompletionEvent
    );


__declspec(dllimport)
 
HANDLE
__stdcall
CreateTimerQueue(
    void
    );


__declspec(dllimport)
BOOL
__stdcall
CreateTimerQueueTimer(
     PHANDLE phNewTimer,
      HANDLE TimerQueue,
      WAITORTIMERCALLBACK Callback,
      PVOID Parameter,
      DWORD DueTime,
      DWORD Period,
      ULONG Flags
    );


__declspec(dllimport)
 
BOOL
__stdcall
ChangeTimerQueueTimer(
      HANDLE TimerQueue,
      HANDLE Timer,
      ULONG DueTime,
      ULONG Period
    );


__declspec(dllimport)
 
BOOL
__stdcall
DeleteTimerQueueTimer(
      HANDLE TimerQueue,
      HANDLE Timer,
      HANDLE CompletionEvent
    );


__declspec(dllimport)
 
BOOL
__stdcall
DeleteTimerQueueEx(
      HANDLE TimerQueue,
      HANDLE CompletionEvent
    );


#line 121 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoollegacyapiset.h"
#pragma endregion


}
#line 126 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoollegacyapiset.h"

#line 128 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoollegacyapiset.h"
#line 54 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolprivateapiset.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolprivateapiset.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolprivateapiset.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolprivateapiset.h"











#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolprivateapiset.h"


extern "C" {
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolprivateapiset.h"





#pragma region Desktop Family



__declspec(dllimport)
HANDLE
__stdcall
RegisterWaitForSingleObjectEx(
      HANDLE hObject,
      WAITORTIMERCALLBACK Callback,
      PVOID Context,
      ULONG dwMilliseconds,
      ULONG dwFlags
    );


__declspec(dllimport)
BOOL
__stdcall
SetThreadpoolTimerEx(
      PTP_TIMER pti,
      PFILETIME pftDueTime,
      DWORD msPeriod,
      DWORD msWindowLength
    );


__declspec(dllimport)
BOOL
__stdcall
SetThreadpoolWaitEx(
      PTP_WAIT pwa,
      HANDLE h,
      PFILETIME pftTimeout,
        PVOID Reserved
    );


#line 79 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolprivateapiset.h"
#pragma endregion


}
#line 84 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolprivateapiset.h"

#line 86 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolprivateapiset.h"
#line 55 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"











#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"


extern "C" {
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"





#pragma region Desktop Family



typedef void (__stdcall *PTP_WIN32_IO_CALLBACK)(
          PTP_CALLBACK_INSTANCE Instance,
      PVOID                 Context,
      PVOID                 Overlapped,
             ULONG                 IoResult,
             ULONG_PTR             NumberOfBytesTransferred,
          PTP_IO                Io
    );




__declspec(dllimport)
 
PTP_POOL
__stdcall
CreateThreadpool(
      PVOID reserved
    );


__declspec(dllimport)
void
__stdcall
SetThreadpoolThreadMaximum(
      PTP_POOL ptpp,
      DWORD cthrdMost
    );


__declspec(dllimport)
BOOL
__stdcall
SetThreadpoolThreadMinimum(
      PTP_POOL ptpp,
      DWORD cthrdMic
    );


__declspec(dllimport)
BOOL
__stdcall
SetThreadpoolStackInformation(
      PTP_POOL ptpp,
      PTP_POOL_STACK_INFORMATION ptpsi
    );


__declspec(dllimport)
BOOL
__stdcall
QueryThreadpoolStackInformation(
      PTP_POOL ptpp,
      PTP_POOL_STACK_INFORMATION ptpsi
    );


__declspec(dllimport)
void
__stdcall
CloseThreadpool(
      PTP_POOL ptpp
    );


__declspec(dllimport)
 
PTP_CLEANUP_GROUP
__stdcall
CreateThreadpoolCleanupGroup(
    void
    );


__declspec(dllimport)
void
__stdcall
CloseThreadpoolCleanupGroupMembers(
      PTP_CLEANUP_GROUP ptpcg,
      BOOL fCancelPendingCallbacks,
      PVOID pvCleanupContext
    );


__declspec(dllimport)
void
__stdcall
CloseThreadpoolCleanupGroup(
      PTP_CLEANUP_GROUP ptpcg
    );


__declspec(dllimport)
void
__stdcall
SetEventWhenCallbackReturns(
      PTP_CALLBACK_INSTANCE pci,
      HANDLE evt
    );


__declspec(dllimport)
void
__stdcall
ReleaseSemaphoreWhenCallbackReturns(
      PTP_CALLBACK_INSTANCE pci,
      HANDLE sem,
      DWORD crel
    );


__declspec(dllimport)
void
__stdcall
ReleaseMutexWhenCallbackReturns(
      PTP_CALLBACK_INSTANCE pci,
      HANDLE mut
    );


__declspec(dllimport)
void
__stdcall
LeaveCriticalSectionWhenCallbackReturns(
      PTP_CALLBACK_INSTANCE pci,
      PCRITICAL_SECTION pcs
    );


__declspec(dllimport)
void
__stdcall
FreeLibraryWhenCallbackReturns(
      PTP_CALLBACK_INSTANCE pci,
      HMODULE mod
    );


__declspec(dllimport)
BOOL
__stdcall
CallbackMayRunLong(
      PTP_CALLBACK_INSTANCE pci
    );


__declspec(dllimport)
void
__stdcall
DisassociateCurrentThreadFromCallback(
      PTP_CALLBACK_INSTANCE pci
    );


__declspec(dllimport)
 
BOOL
__stdcall
TrySubmitThreadpoolCallback(
      PTP_SIMPLE_CALLBACK pfns,
      PVOID pv,
      PTP_CALLBACK_ENVIRON pcbe
    );


__declspec(dllimport)
 
PTP_WORK
__stdcall
CreateThreadpoolWork(
      PTP_WORK_CALLBACK pfnwk,
      PVOID pv,
      PTP_CALLBACK_ENVIRON pcbe
    );


__declspec(dllimport)
void
__stdcall
SubmitThreadpoolWork(
      PTP_WORK pwk
    );


__declspec(dllimport)
void
__stdcall
WaitForThreadpoolWorkCallbacks(
      PTP_WORK pwk,
      BOOL fCancelPendingCallbacks
    );


__declspec(dllimport)
void
__stdcall
CloseThreadpoolWork(
      PTP_WORK pwk
    );


__declspec(dllimport)
 
PTP_TIMER
__stdcall
CreateThreadpoolTimer(
      PTP_TIMER_CALLBACK pfnti,
      PVOID pv,
      PTP_CALLBACK_ENVIRON pcbe
    );


__declspec(dllimport)
void
__stdcall
SetThreadpoolTimer(
      PTP_TIMER pti,
      PFILETIME pftDueTime,
      DWORD msPeriod,
      DWORD msWindowLength
    );


__declspec(dllimport)
BOOL
__stdcall
IsThreadpoolTimerSet(
      PTP_TIMER pti
    );


__declspec(dllimport)
void
__stdcall
WaitForThreadpoolTimerCallbacks(
      PTP_TIMER pti,
      BOOL fCancelPendingCallbacks
    );


__declspec(dllimport)
void
__stdcall
CloseThreadpoolTimer(
      PTP_TIMER pti
    );


__declspec(dllimport)
 
PTP_WAIT
__stdcall
CreateThreadpoolWait(
      PTP_WAIT_CALLBACK pfnwa,
      PVOID pv,
      PTP_CALLBACK_ENVIRON pcbe
    );


__declspec(dllimport)
void
__stdcall
SetThreadpoolWait(
      PTP_WAIT pwa,
      HANDLE h,
      PFILETIME pftTimeout
    );


__declspec(dllimport)
void
__stdcall
WaitForThreadpoolWaitCallbacks(
      PTP_WAIT pwa,
      BOOL fCancelPendingCallbacks
    );


__declspec(dllimport)
void
__stdcall
CloseThreadpoolWait(
      PTP_WAIT pwa
    );


__declspec(dllimport)
 
PTP_IO
__stdcall
CreateThreadpoolIo(
      HANDLE fl,
      PTP_WIN32_IO_CALLBACK pfnio,
      PVOID pv,
      PTP_CALLBACK_ENVIRON pcbe
    );


__declspec(dllimport)
void
__stdcall
StartThreadpoolIo(
      PTP_IO pio
    );


__declspec(dllimport)
void
__stdcall
CancelThreadpoolIo(
      PTP_IO pio
    );


__declspec(dllimport)
void
__stdcall
WaitForThreadpoolIoCallbacks(
      PTP_IO pio,
      BOOL fCancelPendingCallbacks
    );


__declspec(dllimport)
void
__stdcall
CloseThreadpoolIo(
      PTP_IO pio
    );


#line 376 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"

#line 378 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"
#pragma endregion


}
#line 383 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"

#line 385 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\threadpoolapiset.h"
#line 56 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"











#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"


extern "C" {
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"

#pragma region Desktop Family






typedef struct _CONTRACT_DESCRIPTION CONTRACT_DESCRIPTION;

typedef struct _BEM_REFERENCE BEM_REFERENCE;

typedef void (__stdcall* BEM_FREE_INTERFACE_CALLBACK)(  void* interfaceInstance);

HRESULT
__stdcall
BemCreateReference(
      const GUID & iid,
      void * interfaceInstance,
      BEM_FREE_INTERFACE_CALLBACK freeCallback,
     BEM_REFERENCE ** reference
    );


HRESULT
__stdcall
BemCreateContractFrom(
      LPCWSTR dllPath,
      const GUID & extensionId,
      const CONTRACT_DESCRIPTION * contractDescription,
      void * hostContract,
     void ** contract
    );


HRESULT
__stdcall
BemCopyReference(
      BEM_REFERENCE * reference,
     BEM_REFERENCE ** copiedReference
    );

        
void
__stdcall
BemFreeReference(
      BEM_REFERENCE * reference
    );

    
void
__stdcall
BemFreeContract(
      void * contract
    );

    
#line 93 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"

#line 95 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"
#pragma endregion


}
#line 100 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"

#line 102 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\bemapiset.h"
#line 57 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"











#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"


extern "C" {
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"

#pragma region Desktop Family






__declspec(dllimport)
BOOL
__stdcall
IsProcessInJob(
      HANDLE ProcessHandle,
      HANDLE JobHandle,
      PBOOL Result
    );


#line 54 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"

#line 56 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"
#pragma endregion


}
#line 61 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"

#line 63 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\jobapi.h"
#line 58 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"











#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"


extern "C" {
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"

#pragma region Desktop Family









__declspec(dllimport)
BOOL
__stdcall
Wow64DisableWow64FsRedirection(
      PVOID * OldValue
    );


__declspec(dllimport)
BOOL
__stdcall
Wow64RevertWow64FsRedirection(
      PVOID OlValue
    );


#line 63 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"

#line 65 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"




__declspec(dllimport)
BOOL
__stdcall
IsWow64Process(
      HANDLE hProcess,
      PBOOL Wow64Process
    );


#line 79 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"

#line 81 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"
#pragma endregion


}
#line 86 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"

#line 88 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wow64apiset.h"
#line 59 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
 











#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"













#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"


extern "C" {
#line 39 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

#pragma region Desktop Family















typedef struct tagENUMUILANG{
    ULONG  NumOfEnumUILang;   
    ULONG  SizeOfEnumUIBuffer;     
    LANGID *pEnumUIBuffer;   
}ENUMUILANG, *PENUMUILANG;


typedef BOOL (__stdcall* ENUMRESLANGPROCA)(
      HMODULE hModule,
      LPCSTR lpType,
      LPCSTR lpName,
      WORD wLanguage,
      LONG_PTR lParam);
typedef BOOL (__stdcall* ENUMRESLANGPROCW)(
      HMODULE hModule,
      LPCWSTR lpType,
      LPCWSTR lpName,
      WORD wLanguage,
      LONG_PTR lParam);




#line 80 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

typedef BOOL (__stdcall* ENUMRESNAMEPROCA)(
      HMODULE hModule,
      LPCSTR lpType,
      LPSTR lpName,
      LONG_PTR lParam);
typedef BOOL (__stdcall* ENUMRESNAMEPROCW)(
      HMODULE hModule,
      LPCWSTR lpType,
      LPWSTR lpName,
      LONG_PTR lParam);




#line 96 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

typedef BOOL (__stdcall* ENUMRESTYPEPROCA)(
      HMODULE hModule,
      LPSTR lpType,
      LONG_PTR lParam
    );
typedef BOOL (__stdcall* ENUMRESTYPEPROCW)(
      HMODULE hModule,
      LPWSTR lpType,
      LONG_PTR lParam
    );




#line 112 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"






















#line 135 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

#line 137 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion






#pragma region Application Family



__declspec(dllimport)
BOOL
__stdcall
DisableThreadLibraryCalls(
      HMODULE hLibModule
    );


#line 157 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
 
HRSRC
__stdcall
FindResourceExW(
      HMODULE hModule,
      LPCWSTR lpType,
      LPCWSTR lpName,
      WORD wLanguage
    );






#line 180 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion

#pragma region Application Family






__declspec(dllimport)
int
__stdcall
FindStringOrdinal(
      DWORD dwFindStringOrdinalFlags,
      LPCWSTR lpStringSource,
      int cchSource,
      LPCWSTR lpStringValue,
      int cchValue,
      BOOL bIgnoreCase
    );

    
#line 203 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

__declspec(dllimport)
BOOL
__stdcall
FreeLibrary(
      HMODULE hLibModule
    );


#line 213 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
__declspec(noreturn)
void
__stdcall
FreeLibraryAndExitThread(
      HMODULE hLibModule,
      DWORD dwExitCode
    );


__declspec(dllimport)
BOOL
__stdcall
FreeResource(
      HGLOBAL hResData
    );


__declspec(dllimport)
 
 
DWORD
__stdcall
GetModuleFileNameA(
      HMODULE hModule,
      LPSTR lpFilename,
      DWORD nSize
    );

__declspec(dllimport)
 
 
DWORD
__stdcall
GetModuleFileNameW(
      HMODULE hModule,
      LPWSTR lpFilename,
      DWORD nSize
    );





#line 264 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

__declspec(dllimport)


HMODULE
__stdcall
GetModuleHandleA(
      LPCSTR lpModuleName
    );

__declspec(dllimport)


HMODULE
__stdcall
GetModuleHandleW(
      LPCWSTR lpModuleName
    );





#line 288 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"








typedef
BOOL
(__stdcall*
PGET_MODULE_HANDLE_EXA)(
             DWORD        dwFlags,
         LPCSTR     lpModuleName,
     HMODULE*    phModule
    );
typedef
BOOL
(__stdcall*
PGET_MODULE_HANDLE_EXW)(
             DWORD        dwFlags,
         LPCWSTR     lpModuleName,
     HMODULE*    phModule
    );




#line 317 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

__declspec(dllimport)
BOOL
__stdcall
GetModuleHandleExA(
      DWORD dwFlags,
      LPCSTR lpModuleName,
      HMODULE * phModule
    );

__declspec(dllimport)
BOOL
__stdcall
GetModuleHandleExW(
      DWORD dwFlags,
      LPCWSTR lpModuleName,
      HMODULE * phModule
    );





#line 341 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

#line 343 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

#line 345 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion

#pragma region Application Family



__declspec(dllimport)
FARPROC
__stdcall
GetProcAddress(
      HMODULE hModule,
      LPCSTR lpProcName
    );


#line 361 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
 
HMODULE
__stdcall
LoadLibraryExA(
      LPCSTR lpLibFileName,
      HANDLE hFile,
      DWORD dwFlags
    );

__declspec(dllimport)
 
HMODULE
__stdcall
LoadLibraryExW(
      LPCWSTR lpLibFileName,
      HANDLE hFile,
      DWORD dwFlags
    );





#line 392 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"















__declspec(dllimport)
 
HGLOBAL
__stdcall
LoadResource(
      HMODULE hModule,
      HRSRC hResInfo
    );


#line 418 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion



#pragma region Desktop Family



__declspec(dllimport)
int
__stdcall
LoadStringA(
      HINSTANCE hInstance,
      UINT uID,
      LPSTR lpBuffer,
      int cchBufferMax
    );

__declspec(dllimport)
int
__stdcall
LoadStringW(
      HINSTANCE hInstance,
      UINT uID,
      LPWSTR lpBuffer,
      int cchBufferMax
    );





#line 451 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

#line 453 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion



#pragma region Desktop Family



__declspec(dllimport)
LPVOID
__stdcall
LockResource(
      HGLOBAL hResData
    );


__declspec(dllimport)
DWORD
__stdcall
SizeofResource(
      HMODULE hModule,
      HRSRC hResInfo
    );


#line 479 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion








#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
EnumResourceLanguagesExA(
      HMODULE hModule,
      LPCSTR lpType,
      LPCSTR lpName,
      ENUMRESLANGPROCA lpEnumFunc,
      LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );

__declspec(dllimport)
BOOL
__stdcall
EnumResourceLanguagesExW(
      HMODULE hModule,
      LPCWSTR lpType,
      LPCWSTR lpName,
      ENUMRESLANGPROCW lpEnumFunc,
      LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );





#line 523 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

__declspec(dllimport)
BOOL
__stdcall
EnumResourceNamesExA(
      HMODULE hModule,
      LPCSTR lpType,
      ENUMRESNAMEPROCA lpEnumFunc,
      LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );

__declspec(dllimport)
BOOL
__stdcall
EnumResourceNamesExW(
      HMODULE hModule,
      LPCWSTR lpType,
      ENUMRESNAMEPROCW lpEnumFunc,
      LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );





#line 553 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

__declspec(dllimport)
BOOL
__stdcall
EnumResourceTypesExA(
      HMODULE hModule,
      ENUMRESTYPEPROCA lpEnumFunc,
      LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );

__declspec(dllimport)
BOOL
__stdcall
EnumResourceTypesExW(
      HMODULE hModule,
      ENUMRESTYPEPROCW lpEnumFunc,
      LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
    );





#line 581 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

__declspec(dllimport)
BOOL
__stdcall
QueryOptionalDelayLoadedAPI(
      HMODULE CallerModule,
      LPCSTR lpDllName,
      LPCSTR lpProcName,
      DWORD Reserved
    );


#line 594 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion

#line 597 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"



#pragma region Desktop Family



typedef PVOID DLL_DIRECTORY_COOKIE, *PDLL_DIRECTORY_COOKIE;

__declspec(dllimport)
DLL_DIRECTORY_COOKIE
__stdcall
AddDllDirectory(
      PCWSTR NewDirectory
    );


__declspec(dllimport)
BOOL
__stdcall
RemoveDllDirectory(
      DLL_DIRECTORY_COOKIE Cookie
    );


__declspec(dllimport)
BOOL
__stdcall
SetDefaultDllDirectories(
      DWORD DirectoryFlags
    );


#line 631 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"
#pragma endregion





}
#line 639 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"

#line 641 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\libloaderapi.h"



#line 60 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"
 
 










#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"













#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"


extern "C" {
#line 39 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"



#pragma region Desktop Family










__declspec(dllimport)
BOOL
__stdcall
AccessCheck(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      HANDLE ClientToken,
      DWORD DesiredAccess,
      PGENERIC_MAPPING GenericMapping,
      PPRIVILEGE_SET PrivilegeSet,
      LPDWORD PrivilegeSetLength,
      LPDWORD GrantedAccess,
      LPBOOL AccessStatus
    );


__declspec(dllimport)
BOOL
__stdcall
AccessCheckAndAuditAlarmW(
      LPCWSTR SubsystemName,
      LPVOID HandleId,
      LPWSTR ObjectTypeName,
      LPWSTR ObjectName,
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      DWORD DesiredAccess,
      PGENERIC_MAPPING GenericMapping,
      BOOL ObjectCreation,
      LPDWORD GrantedAccess,
      LPBOOL AccessStatus,
      LPBOOL pfGenerateOnClose
    );






__declspec(dllimport)
BOOL
__stdcall
AccessCheckByType(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      PSID PrincipalSelfSid,
      HANDLE ClientToken,
      DWORD DesiredAccess,
      POBJECT_TYPE_LIST ObjectTypeList,
      DWORD ObjectTypeListLength,
      PGENERIC_MAPPING GenericMapping,
      PPRIVILEGE_SET PrivilegeSet,
      LPDWORD PrivilegeSetLength,
      LPDWORD GrantedAccess,
      LPBOOL AccessStatus
    );


__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultList(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      PSID PrincipalSelfSid,
      HANDLE ClientToken,
      DWORD DesiredAccess,
      POBJECT_TYPE_LIST ObjectTypeList,
      DWORD ObjectTypeListLength,
      PGENERIC_MAPPING GenericMapping,
      PPRIVILEGE_SET PrivilegeSet,
      LPDWORD PrivilegeSetLength,
      LPDWORD GrantedAccessList,
      LPDWORD AccessStatusList
    );


__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeAndAuditAlarmW(
      LPCWSTR SubsystemName,
      LPVOID HandleId,
      LPCWSTR ObjectTypeName,
      LPCWSTR ObjectName,
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      PSID PrincipalSelfSid,
      DWORD DesiredAccess,
      AUDIT_EVENT_TYPE AuditType,
      DWORD Flags,
      POBJECT_TYPE_LIST ObjectTypeList,
      DWORD ObjectTypeListLength,
      PGENERIC_MAPPING GenericMapping,
      BOOL ObjectCreation,
      LPDWORD GrantedAccess,
      LPBOOL AccessStatus,
      LPBOOL pfGenerateOnClose
    );






__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultListAndAuditAlarmW(
      LPCWSTR SubsystemName,
      LPVOID HandleId,
      LPCWSTR ObjectTypeName,
      LPCWSTR ObjectName,
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      PSID PrincipalSelfSid,
      DWORD DesiredAccess,
      AUDIT_EVENT_TYPE AuditType,
      DWORD Flags,
      POBJECT_TYPE_LIST ObjectTypeList,
      DWORD ObjectTypeListLength,
      PGENERIC_MAPPING GenericMapping,
      BOOL ObjectCreation,
      LPDWORD GrantedAccessList,
      LPDWORD AccessStatusList,
      LPBOOL pfGenerateOnClose
    );






__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultListAndAuditAlarmByHandleW(
      LPCWSTR SubsystemName,
      LPVOID HandleId,
      HANDLE ClientToken,
      LPCWSTR ObjectTypeName,
      LPCWSTR ObjectName,
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      PSID PrincipalSelfSid,
      DWORD DesiredAccess,
      AUDIT_EVENT_TYPE AuditType,
      DWORD Flags,
      POBJECT_TYPE_LIST ObjectTypeList,
      DWORD ObjectTypeListLength,
      PGENERIC_MAPPING GenericMapping,
      BOOL ObjectCreation,
      LPDWORD GrantedAccessList,
      LPDWORD AccessStatusList,
      LPBOOL pfGenerateOnClose
    );






__declspec(dllimport)
BOOL
__stdcall
AddAccessAllowedAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AccessMask,
      PSID pSid
    );


__declspec(dllimport)
BOOL
__stdcall
AddAccessAllowedAceEx(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AceFlags,
      DWORD AccessMask,
      PSID pSid
    );


__declspec(dllimport)
BOOL
__stdcall
AddAccessAllowedObjectAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AceFlags,
      DWORD AccessMask,
      GUID * ObjectTypeGuid,
      GUID * InheritedObjectTypeGuid,
      PSID pSid
    );


__declspec(dllimport)
BOOL
__stdcall
AddAccessDeniedAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AccessMask,
      PSID pSid
    );


__declspec(dllimport)
BOOL
__stdcall
AddAccessDeniedAceEx(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AceFlags,
      DWORD AccessMask,
      PSID pSid
    );


__declspec(dllimport)
BOOL
__stdcall
AddAccessDeniedObjectAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AceFlags,
      DWORD AccessMask,
      GUID * ObjectTypeGuid,
      GUID * InheritedObjectTypeGuid,
      PSID pSid
    );


__declspec(dllimport)
BOOL
__stdcall
AddAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD dwStartingAceIndex,
      LPVOID pAceList,
      DWORD nAceListLength
    );


__declspec(dllimport)
BOOL
__stdcall
AddAuditAccessAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD dwAccessMask,
      PSID pSid,
      BOOL bAuditSuccess,
      BOOL bAuditFailure
    );


__declspec(dllimport)
BOOL
__stdcall
AddAuditAccessAceEx(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AceFlags,
      DWORD dwAccessMask,
      PSID pSid,
      BOOL bAuditSuccess,
      BOOL bAuditFailure
    );


__declspec(dllimport)
BOOL
__stdcall
AddAuditAccessObjectAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AceFlags,
      DWORD AccessMask,
      GUID * ObjectTypeGuid,
      GUID * InheritedObjectTypeGuid,
      PSID pSid,
      BOOL bAuditSuccess,
      BOOL bAuditFailure
    );





__declspec(dllimport)
BOOL
__stdcall
AddMandatoryAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AceFlags,
      DWORD MandatoryPolicy,
      PSID pLabelSid
    );


#line 353 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"






__declspec(dllimport)
BOOL
__stdcall
AddResourceAttributeAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AceFlags,
      DWORD AccessMask,
      PSID pSid,
      PCLAIM_SECURITY_ATTRIBUTES_INFORMATION pAttributeInfo,
      PDWORD pReturnLength
    );


__declspec(dllimport)
BOOL
__stdcall
AddScopedPolicyIDAce(
      PACL pAcl,
      DWORD dwAceRevision,
      DWORD AceFlags,
      DWORD AccessMask,
      PSID pSid
    );


#line 386 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"



__declspec(dllimport)
BOOL
__stdcall
AdjustTokenGroups(
      HANDLE TokenHandle,
      BOOL ResetToDefault,
      PTOKEN_GROUPS NewState,
      DWORD BufferLength,
      PTOKEN_GROUPS PreviousState,
      PDWORD ReturnLength
    );


__declspec(dllimport)
BOOL
__stdcall
AdjustTokenPrivileges(
      HANDLE TokenHandle,
      BOOL DisableAllPrivileges,
      PTOKEN_PRIVILEGES NewState,
      DWORD BufferLength,
      PTOKEN_PRIVILEGES PreviousState,
      PDWORD ReturnLength
    );


__declspec(dllimport)
BOOL
__stdcall
AllocateAndInitializeSid(
      PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,
      BYTE nSubAuthorityCount,
      DWORD nSubAuthority0,
      DWORD nSubAuthority1,
      DWORD nSubAuthority2,
      DWORD nSubAuthority3,
      DWORD nSubAuthority4,
      DWORD nSubAuthority5,
      DWORD nSubAuthority6,
      DWORD nSubAuthority7,
     PSID * pSid
    );


__declspec(dllimport)
BOOL
__stdcall
AllocateLocallyUniqueId(
      PLUID Luid
    );


__declspec(dllimport)
BOOL
__stdcall
AreAllAccessesGranted(
      DWORD GrantedAccess,
      DWORD DesiredAccess
    );


__declspec(dllimport)
BOOL
__stdcall
AreAnyAccessesGranted(
      DWORD GrantedAccess,
      DWORD DesiredAccess
    );


__declspec(dllimport)
BOOL
__stdcall
CheckTokenMembership(
      HANDLE TokenHandle,
      PSID SidToCheck,
      PBOOL IsMember
    );







__declspec(dllimport)
BOOL
__stdcall
CheckTokenCapability(
      HANDLE TokenHandle,
      PSID CapabilitySidToCheck,
      PBOOL HasCapability
    );


__declspec(dllimport)
BOOL
__stdcall
GetAppContainerAce(
      PACL Acl,
      DWORD StartingAceIndex,
     PVOID * AppContainerAce,
      DWORD * AppContainerAceIndex
    );


__declspec(dllimport)
BOOL
__stdcall
CheckTokenMembershipEx(
      HANDLE TokenHandle,
      PSID SidToCheck,
      DWORD Flags,
      PBOOL IsMember
    );


#line 507 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"



__declspec(dllimport)
BOOL
__stdcall
ConvertToAutoInheritPrivateObjectSecurity(
      PSECURITY_DESCRIPTOR ParentDescriptor,
      PSECURITY_DESCRIPTOR CurrentSecurityDescriptor,
     PSECURITY_DESCRIPTOR * NewSecurityDescriptor,
      GUID * ObjectType,
      BOOLEAN IsDirectoryObject,
      PGENERIC_MAPPING GenericMapping
    );


__declspec(dllimport)
BOOL
__stdcall
CopySid(
      DWORD nDestinationSidLength,
      PSID pDestinationSid,
      PSID pSourceSid
    );


__declspec(dllimport)
BOOL
__stdcall
CreatePrivateObjectSecurity(
      PSECURITY_DESCRIPTOR ParentDescriptor,
      PSECURITY_DESCRIPTOR CreatorDescriptor,
     PSECURITY_DESCRIPTOR * NewDescriptor,
      BOOL IsDirectoryObject,
      HANDLE Token,
      PGENERIC_MAPPING GenericMapping
    );


__declspec(dllimport)
BOOL
__stdcall
CreatePrivateObjectSecurityEx(
      PSECURITY_DESCRIPTOR ParentDescriptor,
      PSECURITY_DESCRIPTOR CreatorDescriptor,
     PSECURITY_DESCRIPTOR * NewDescriptor,
      GUID * ObjectType,
      BOOL IsContainerObject,
      ULONG AutoInheritFlags,
      HANDLE Token,
      PGENERIC_MAPPING GenericMapping
    );


__declspec(dllimport)
BOOL
__stdcall
CreatePrivateObjectSecurityWithMultipleInheritance(
      PSECURITY_DESCRIPTOR ParentDescriptor,
      PSECURITY_DESCRIPTOR CreatorDescriptor,
     PSECURITY_DESCRIPTOR * NewDescriptor,
      GUID ** ObjectTypes,
      ULONG GuidCount,
      BOOL IsContainerObject,
      ULONG AutoInheritFlags,
      HANDLE Token,
      PGENERIC_MAPPING GenericMapping
    );


__declspec(dllimport)
BOOL
__stdcall
CreateRestrictedToken(
      HANDLE ExistingTokenHandle,
      DWORD Flags,
      DWORD DisableSidCount,
      PSID_AND_ATTRIBUTES SidsToDisable,
      DWORD DeletePrivilegeCount,
      PLUID_AND_ATTRIBUTES PrivilegesToDelete,
      DWORD RestrictedSidCount,
      PSID_AND_ATTRIBUTES SidsToRestrict,
     PHANDLE NewTokenHandle
    );





__declspec(dllimport)
 
BOOL
__stdcall
CreateWellKnownSid(
      WELL_KNOWN_SID_TYPE WellKnownSidType,
      PSID DomainSid,
      PSID pSid,
      DWORD * cbSid
    );


__declspec(dllimport)
 
BOOL
__stdcall
EqualDomainSid(
      PSID pSid1,
      PSID pSid2,
      BOOL * pfEqual
    );


#line 620 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"

__declspec(dllimport)
BOOL
__stdcall
DeleteAce(
      PACL pAcl,
      DWORD dwAceIndex
    );


__declspec(dllimport)
BOOL
__stdcall
DestroyPrivateObjectSecurity(
        PSECURITY_DESCRIPTOR * ObjectDescriptor
    );


__declspec(dllimport)
BOOL
__stdcall
DuplicateToken(
      HANDLE ExistingTokenHandle,
      SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
     PHANDLE DuplicateTokenHandle
    );


__declspec(dllimport)
BOOL
__stdcall
DuplicateTokenEx(
      HANDLE hExistingToken,
      DWORD dwDesiredAccess,
      LPSECURITY_ATTRIBUTES lpTokenAttributes,
      SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
      TOKEN_TYPE TokenType,
     PHANDLE phNewToken
    );


__declspec(dllimport)
BOOL
__stdcall
EqualPrefixSid(
      PSID pSid1,
      PSID pSid2
    );


__declspec(dllimport)
BOOL
__stdcall
EqualSid(
      PSID pSid1,
      PSID pSid2
    );


__declspec(dllimport)
BOOL
__stdcall
FindFirstFreeAce(
      PACL pAcl,
     LPVOID * pAce
    );


__declspec(dllimport)
PVOID
__stdcall
FreeSid(
      PSID pSid
    );


__declspec(dllimport)
BOOL
__stdcall
GetAce(
      PACL pAcl,
      DWORD dwAceIndex,
     LPVOID * pAce
    );


__declspec(dllimport)
BOOL
__stdcall
GetAclInformation(
      PACL pAcl,
      LPVOID pAclInformation,
      DWORD nAclInformationLength,
      ACL_INFORMATION_CLASS dwAclInformationClass
    );


__declspec(dllimport)
BOOL
__stdcall
GetFileSecurityW(
      LPCWSTR lpFileName,
      SECURITY_INFORMATION RequestedInformation,
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      DWORD nLength,
      LPDWORD lpnLengthNeeded
    );






__declspec(dllimport)
BOOL
__stdcall
GetKernelObjectSecurity(
      HANDLE Handle,
      SECURITY_INFORMATION RequestedInformation,
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      DWORD nLength,
      LPDWORD lpnLengthNeeded
    );


__declspec(dllimport)
DWORD
__stdcall
GetLengthSid(
      PSID pSid
    );


__declspec(dllimport)
 
BOOL
__stdcall
GetPrivateObjectSecurity(
      PSECURITY_DESCRIPTOR ObjectDescriptor,
      SECURITY_INFORMATION SecurityInformation,
      PSECURITY_DESCRIPTOR ResultantDescriptor,
      DWORD DescriptorLength,
      PDWORD ReturnLength
    );


__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorControl(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      PSECURITY_DESCRIPTOR_CONTROL pControl,
      LPDWORD lpdwRevision
    );


__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorDacl(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      LPBOOL lpbDaclPresent,
     PACL * pDacl,
      LPBOOL lpbDaclDefaulted
    );


__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorGroup(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
     PSID * pGroup,
      LPBOOL lpbGroupDefaulted
    );


__declspec(dllimport)
DWORD
__stdcall
GetSecurityDescriptorLength(
      PSECURITY_DESCRIPTOR pSecurityDescriptor
    );


__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorOwner(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
     PSID * pOwner,
      LPBOOL lpbOwnerDefaulted
    );


__declspec(dllimport)
DWORD
__stdcall
GetSecurityDescriptorRMControl(
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      PUCHAR RMControl
    );


__declspec(dllimport)
BOOL
__stdcall
GetSecurityDescriptorSacl(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      LPBOOL lpbSaclPresent,
     PACL * pSacl,
      LPBOOL lpbSaclDefaulted
    );


__declspec(dllimport)
PSID_IDENTIFIER_AUTHORITY
__stdcall
GetSidIdentifierAuthority(
      PSID pSid
    );


__declspec(dllimport)
DWORD
__stdcall
GetSidLengthRequired(
      UCHAR nSubAuthorityCount
    );


__declspec(dllimport)
PDWORD
__stdcall
GetSidSubAuthority(
      PSID pSid,
      DWORD nSubAuthority
    );


__declspec(dllimport)
PUCHAR
__stdcall
GetSidSubAuthorityCount(
      PSID pSid
    );


__declspec(dllimport)
BOOL
__stdcall
GetTokenInformation(
      HANDLE TokenHandle,
      TOKEN_INFORMATION_CLASS TokenInformationClass,
      LPVOID TokenInformation,
      DWORD TokenInformationLength,
      PDWORD ReturnLength
    );





__declspec(dllimport)
 
BOOL
__stdcall
GetWindowsAccountDomainSid(
      PSID pSid,
      PSID pDomainSid,
      DWORD * cbDomainSid
    );


#line 895 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"

__declspec(dllimport)
BOOL
__stdcall
ImpersonateAnonymousToken(
      HANDLE ThreadHandle
    );


 
__declspec(dllimport)
BOOL
__stdcall
ImpersonateLoggedOnUser(
      HANDLE hToken
    );


 
__declspec(dllimport)
BOOL
__stdcall
ImpersonateSelf(
      SECURITY_IMPERSONATION_LEVEL ImpersonationLevel
    );


__declspec(dllimport)
BOOL
__stdcall
InitializeAcl(
      PACL pAcl,
      DWORD nAclLength,
      DWORD dwAclRevision
    );


__declspec(dllimport)
BOOL
__stdcall
InitializeSecurityDescriptor(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      DWORD dwRevision
    );


__declspec(dllimport)
BOOL
__stdcall
InitializeSid(
      PSID Sid,
      PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,
      BYTE nSubAuthorityCount
    );


__declspec(dllimport)
BOOL
__stdcall
IsTokenRestricted(
      HANDLE TokenHandle
    );


__declspec(dllimport)
BOOL
__stdcall
IsValidAcl(
      PACL pAcl
    );


__declspec(dllimport)
BOOL
__stdcall
IsValidSecurityDescriptor(
      PSECURITY_DESCRIPTOR pSecurityDescriptor
    );


__declspec(dllimport)
BOOL
__stdcall
IsValidSid(
      PSID pSid
    );





__declspec(dllimport)
BOOL
__stdcall
IsWellKnownSid(
      PSID pSid,
      WELL_KNOWN_SID_TYPE WellKnownSidType
    );


#line 996 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"

__declspec(dllimport)
 
BOOL
__stdcall
MakeAbsoluteSD(
      PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor,
      PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor,
      LPDWORD lpdwAbsoluteSecurityDescriptorSize,
      PACL pDacl,
      LPDWORD lpdwDaclSize,
      PACL pSacl,
      LPDWORD lpdwSaclSize,
      PSID pOwner,
      LPDWORD lpdwOwnerSize,
      PSID pPrimaryGroup,
      LPDWORD lpdwPrimaryGroupSize
    );


__declspec(dllimport)
 
BOOL
__stdcall
MakeSelfRelativeSD(
      PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor,
      PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor,
      LPDWORD lpdwBufferLength
    );


__declspec(dllimport)
void
__stdcall
MapGenericMask(
      PDWORD AccessMask,
      PGENERIC_MAPPING GenericMapping
    );


__declspec(dllimport)
BOOL
__stdcall
ObjectCloseAuditAlarmW(
      LPCWSTR SubsystemName,
      LPVOID HandleId,
      BOOL GenerateOnClose
    );






__declspec(dllimport)
BOOL
__stdcall
ObjectDeleteAuditAlarmW(
      LPCWSTR SubsystemName,
      LPVOID HandleId,
      BOOL GenerateOnClose
    );






__declspec(dllimport)
BOOL
__stdcall
ObjectOpenAuditAlarmW(
      LPCWSTR SubsystemName,
      LPVOID HandleId,
      LPWSTR ObjectTypeName,
      LPWSTR ObjectName,
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      HANDLE ClientToken,
      DWORD DesiredAccess,
      DWORD GrantedAccess,
      PPRIVILEGE_SET Privileges,
      BOOL ObjectCreation,
      BOOL AccessGranted,
      LPBOOL GenerateOnClose
    );






__declspec(dllimport)
BOOL
__stdcall
ObjectPrivilegeAuditAlarmW(
      LPCWSTR SubsystemName,
      LPVOID HandleId,
      HANDLE ClientToken,
      DWORD DesiredAccess,
      PPRIVILEGE_SET Privileges,
      BOOL AccessGranted
    );






__declspec(dllimport)
BOOL
__stdcall
PrivilegeCheck(
      HANDLE ClientToken,
      PPRIVILEGE_SET RequiredPrivileges,
      LPBOOL pfResult
    );


__declspec(dllimport)
BOOL
__stdcall
PrivilegedServiceAuditAlarmW(
      LPCWSTR SubsystemName,
      LPCWSTR ServiceName,
      HANDLE ClientToken,
      PPRIVILEGE_SET Privileges,
      BOOL AccessGranted
    );









__declspec(dllimport)
void
__stdcall
QuerySecurityAccessMask(
      SECURITY_INFORMATION SecurityInformation,
      LPDWORD DesiredAccess
    );


#line 1143 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"

__declspec(dllimport)
BOOL
__stdcall
RevertToSelf(
    void
    );


__declspec(dllimport)
BOOL
__stdcall
SetAclInformation(
      PACL pAcl,
      LPVOID pAclInformation,
      DWORD nAclInformationLength,
      ACL_INFORMATION_CLASS dwAclInformationClass
    );


__declspec(dllimport)
BOOL
__stdcall
SetFileSecurityW(
      LPCWSTR lpFileName,
      SECURITY_INFORMATION SecurityInformation,
      PSECURITY_DESCRIPTOR pSecurityDescriptor
    );





__declspec(dllimport)
BOOL
__stdcall
SetKernelObjectSecurity(
      HANDLE Handle,
      SECURITY_INFORMATION SecurityInformation,
      PSECURITY_DESCRIPTOR SecurityDescriptor
    );


__declspec(dllimport)
BOOL
__stdcall
SetPrivateObjectSecurity(
      SECURITY_INFORMATION SecurityInformation,
      PSECURITY_DESCRIPTOR ModificationDescriptor,
      PSECURITY_DESCRIPTOR * ObjectsSecurityDescriptor,
      PGENERIC_MAPPING GenericMapping,
      HANDLE Token
    );


__declspec(dllimport)
BOOL
__stdcall
SetPrivateObjectSecurityEx(
      SECURITY_INFORMATION SecurityInformation,
      PSECURITY_DESCRIPTOR ModificationDescriptor,
      PSECURITY_DESCRIPTOR * ObjectsSecurityDescriptor,
      ULONG AutoInheritFlags,
      PGENERIC_MAPPING GenericMapping,
      HANDLE Token
    );





__declspec(dllimport)
void
__stdcall
SetSecurityAccessMask(
      SECURITY_INFORMATION SecurityInformation,
      LPDWORD DesiredAccess
    );


#line 1224 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"

__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorControl(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest,
      SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet
    );


__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorDacl(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      BOOL bDaclPresent,
      PACL pDacl,
      BOOL bDaclDefaulted
    );


__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorGroup(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      PSID pGroup,
      BOOL bGroupDefaulted
    );


__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorOwner(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      PSID pOwner,
      BOOL bOwnerDefaulted
    );


__declspec(dllimport)
DWORD
__stdcall
SetSecurityDescriptorRMControl(
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      PUCHAR RMControl
    );


__declspec(dllimport)
BOOL
__stdcall
SetSecurityDescriptorSacl(
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
      BOOL bSaclPresent,
      PACL pSacl,
      BOOL bSaclDefaulted
    );


__declspec(dllimport)
BOOL
__stdcall
SetTokenInformation(
      HANDLE TokenHandle,
      TOKEN_INFORMATION_CLASS TokenInformationClass,
      LPVOID TokenInformation,
      DWORD TokenInformationLength
    );







__declspec(dllimport)
BOOL
__stdcall
SetCachedSigningLevel(
      PHANDLE SourceFiles,
      ULONG SourceFileCount,
      ULONG Flags,
      HANDLE TargetFile
    );


__declspec(dllimport)
BOOL
__stdcall
GetCachedSigningLevel(
      HANDLE File,
      PULONG Flags,
      PULONG SigningLevel,
      PUCHAR Thumbprint,
      PULONG ThumbprintSize,
      PULONG ThumbprintAlgorithm
    );

    
#line 1327 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"

#line 1329 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"
#pragma endregion




}
#line 1336 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"

#line 1338 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securitybaseapi.h"

#line 61 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namespaceapi.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namespaceapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namespaceapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namespaceapi.h"











#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namespaceapi.h"


extern "C" {
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namespaceapi.h"

#pragma region Desktop Family





__declspec(dllimport)
HANDLE
__stdcall
CreatePrivateNamespaceW(
      LPSECURITY_ATTRIBUTES lpPrivateNamespaceAttributes,
      LPVOID lpBoundaryDescriptor,
      LPCWSTR lpAliasPrefix
    );


__declspec(dllimport)
HANDLE
__stdcall
OpenPrivateNamespaceW(
      LPVOID lpBoundaryDescriptor,
      LPCWSTR lpAliasPrefix
    );


__declspec(dllimport)
BOOLEAN
__stdcall
ClosePrivateNamespace(
      HANDLE Handle,
      ULONG Flags
    );


__declspec(dllimport)
HANDLE
__stdcall
CreateBoundaryDescriptorW(
      LPCWSTR Name,
      ULONG Flags
    );


__declspec(dllimport)
BOOL
__stdcall
AddSIDToBoundaryDescriptor(
      HANDLE * BoundaryDescriptor,
      PSID RequiredSid
    );


__declspec(dllimport)
void
__stdcall
DeleteBoundaryDescriptor(
      HANDLE BoundaryDescriptor
    );


#line 97 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namespaceapi.h"
#pragma endregion


}
#line 102 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namespaceapi.h"

#line 104 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\namespaceapi.h"
#line 62 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"











#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"


extern "C" {
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
GetNumaHighestNodeNumber(
      PULONG HighestNodeNumber
    );





__declspec(dllimport)
BOOL
__stdcall
GetNumaNodeProcessorMaskEx(
      USHORT Node,
      PGROUP_AFFINITY ProcessorMask
    );


#line 61 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"

#line 63 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"
#pragma endregion


}
#line 68 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"

#line 70 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\systemtopologyapi.h"
#line 63 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"











#line 31 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"


extern "C" {
#line 35 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"

#pragma region Desktop Family






__declspec(dllimport)
BOOL
__stdcall
GetProcessGroupAffinity(
      HANDLE hProcess,
      PUSHORT GroupCount,
      PUSHORT GroupArray
    );



__declspec(dllimport)
BOOL
__stdcall
SetProcessGroupAffinity(
      HANDLE hProcess,
      const GROUP_AFFINITY * GroupAffinity,
      PGROUP_AFFINITY PreviousGroupAffinity
    );


__declspec(dllimport)
BOOL
__stdcall
GetThreadGroupAffinity(
      HANDLE hThread,
      PGROUP_AFFINITY GroupAffinity
    );


__declspec(dllimport)
BOOL
__stdcall
SetThreadGroupAffinity(
      HANDLE hThread,
      const GROUP_AFFINITY * GroupAffinity,
      PGROUP_AFFINITY PreviousGroupAffinity
    );


#line 84 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"

#line 86 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"
#pragma endregion


}
#line 91 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"

#line 93 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\processtopologyapi.h"
#line 64 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"













#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"

#pragma region Desktop Family




extern "C" {
#line 41 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"








BOOL
GetAppContainerNamedObjectPath(
      HANDLE Token,
      PSID AppContainerSid,
      ULONG ObjectPathLength,
      LPWSTR ObjectPath,
      PULONG ReturnLength
    );


#line 60 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"


}
#line 64 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"

#line 66 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"
#pragma endregion

#line 69 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\securityappcontainer.h"
#line 65 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"
 









#pragma once
#line 13 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 18 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"










#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"


extern "C" {
#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"

#pragma region Desktop Family






__declspec(dllimport)
BOOL
__stdcall
QueryThreadCycleTime(
      HANDLE ThreadHandle,
      PULONG64 CycleTime
    );


__declspec(dllimport)
BOOL
__stdcall
QueryProcessCycleTime(
      HANDLE ProcessHandle,
      PULONG64 CycleTime
    );


__declspec(dllimport)
BOOL
__stdcall
QueryIdleProcessorCycleTime(
      PULONG BufferLength,
      PULONG64 ProcessorIdleCycleTime
    );


#line 70 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"




__declspec(dllimport)
BOOL
__stdcall
QueryIdleProcessorCycleTimeEx(
      USHORT Group,
      PULONG BufferLength,
      PULONG64 ProcessorIdleCycleTime
    );

    
#line 85 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"

#line 87 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"
#pragma endregion

#pragma region Application Family






__declspec(dllimport)
BOOL
__stdcall
QueryUnbiasedInterruptTime(
      PULONGLONG UnbiasedTime
    );


#line 105 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"

#line 107 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"
#pragma endregion


}
#line 112 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"

#line 114 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\realtimeapiset.h"
#line 66 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


extern "C" {
#line 70 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#pragma region Application Family












#line 85 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family




#line 93 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family






















































#line 151 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




































#line 188 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"














#line 203 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 205 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"











#line 217 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 219 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"






























































typedef void (__stdcall *PFIBER_START_ROUTINE)(
    LPVOID lpFiberParameter
    );
typedef PFIBER_START_ROUTINE LPFIBER_START_ROUTINE;
#line 286 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"










#line 297 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
typedef LPVOID LPLDT_ENTRY;
#line 299 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





































































































typedef struct _COMMPROP {
    WORD wPacketLength;
    WORD wPacketVersion;
    DWORD dwServiceMask;
    DWORD dwReserved1;
    DWORD dwMaxTxQueue;
    DWORD dwMaxRxQueue;
    DWORD dwMaxBaud;
    DWORD dwProvSubType;
    DWORD dwProvCapabilities;
    DWORD dwSettableParams;
    DWORD dwSettableBaud;
    WORD wSettableData;
    WORD wSettableStopParity;
    DWORD dwCurrentTxQueue;
    DWORD dwCurrentRxQueue;
    DWORD dwProvSpec1;
    DWORD dwProvSpec2;
    WCHAR wcProvChar[1];
} COMMPROP,*LPCOMMPROP;







typedef struct _COMSTAT {
    DWORD fCtsHold : 1;
    DWORD fDsrHold : 1;
    DWORD fRlsdHold : 1;
    DWORD fXoffHold : 1;
    DWORD fXoffSent : 1;
    DWORD fEof : 1;
    DWORD fTxim : 1;
    DWORD fReserved : 25;
    DWORD cbInQue;
    DWORD cbOutQue;
} COMSTAT, *LPCOMSTAT;
















typedef struct _DCB {
    DWORD DCBlength;      
    DWORD BaudRate;       
    DWORD fBinary: 1;     
    DWORD fParity: 1;     
    DWORD fOutxCtsFlow:1; 
    DWORD fOutxDsrFlow:1; 
    DWORD fDtrControl:2;  
    DWORD fDsrSensitivity:1; 
    DWORD fTXContinueOnXoff: 1; 
    DWORD fOutX: 1;       
    DWORD fInX: 1;        
    DWORD fErrorChar: 1;  
    DWORD fNull: 1;       
    DWORD fRtsControl:2;  
    DWORD fAbortOnError:1; 
    DWORD fDummy2:17;     
    WORD wReserved;       
    WORD XonLim;          
    WORD XoffLim;         
    BYTE ByteSize;        
    BYTE Parity;          
    BYTE StopBits;        
    char XonChar;         
    char XoffChar;        
    char ErrorChar;       
    char EofChar;         
    char EvtChar;         
    WORD wReserved1;      
} DCB, *LPDCB;

typedef struct _COMMTIMEOUTS {
    DWORD ReadIntervalTimeout;          
    DWORD ReadTotalTimeoutMultiplier;   
    DWORD ReadTotalTimeoutConstant;     
    DWORD WriteTotalTimeoutMultiplier;  
    DWORD WriteTotalTimeoutConstant;    
} COMMTIMEOUTS,*LPCOMMTIMEOUTS;

typedef struct _COMMCONFIG {
    DWORD dwSize;               
    WORD wVersion;              
    WORD wReserved;             
    DCB dcb;                    
    DWORD dwProviderSubType;    

    DWORD dwProviderOffset;     

    DWORD dwProviderSize;       
    WCHAR wcProviderData[1];    
} COMMCONFIG,*LPCOMMCONFIG;




































typedef struct _MEMORYSTATUS {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    SIZE_T dwTotalPhys;
    SIZE_T dwAvailPhys;
    SIZE_T dwTotalPageFile;
    SIZE_T dwAvailPageFile;
    SIZE_T dwTotalVirtual;
    SIZE_T dwAvailVirtual;
} MEMORYSTATUS, *LPMEMORYSTATUS;



























































































typedef struct _JIT_DEBUG_INFO {
    DWORD dwSize;
    DWORD dwProcessorArchitecture;
    DWORD dwThreadID;
    DWORD dwReserved0;
    ULONG64 lpExceptionAddress;
    ULONG64 lpExceptionRecord;
    ULONG64 lpContextRecord;
} JIT_DEBUG_INFO, *LPJIT_DEBUG_INFO;

typedef JIT_DEBUG_INFO JIT_DEBUG_INFO32, *LPJIT_DEBUG_INFO32;
typedef JIT_DEBUG_INFO JIT_DEBUG_INFO64, *LPJIT_DEBUG_INFO64;


typedef PEXCEPTION_RECORD LPEXCEPTION_RECORD;
typedef PEXCEPTION_POINTERS LPEXCEPTION_POINTERS;
#line 660 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"














#line 675 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





































































































































































































typedef struct _OFSTRUCT {
    BYTE cBytes;
    BYTE fFixedDisk;
    WORD nErrCode;
    WORD Reserved1;
    WORD Reserved2;
    CHAR szPathName[128];
} OFSTRUCT, *LPOFSTRUCT, *POFSTRUCT;






















































































































































































































































































































































































































































































































































































































































































































































































































#line 1671 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


LONG
_InterlockedAnd (
      LONG volatile *Destination,
      LONG Value
    );

LONG
_InterlockedOr (
      LONG volatile *Destination,
      LONG Value
    );

LONG
_InterlockedXor (
      LONG volatile *Destination,
      LONG Value
    );

LONG
_InterlockedIncrement (
      LONG volatile *Addend
    );

LONG
_InterlockedDecrement (
      LONG volatile *Addend
    );

LONG
_InterlockedExchange (
      LONG volatile *Target,
      LONG Value
    );

LONG
_InterlockedExchangeAdd (
      LONG volatile *Addend,
      LONG Value
    );

LONG
_InterlockedCompareExchange (
      LONG volatile *Destination,
      LONG ExChange,
      LONG Comperand
    );

  PVOID
_InterlockedCompareExchangePointer (
      
#line 1725 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
             PVOID volatile *Destination,
      PVOID Exchange,
      PVOID Comperand
    );

  PVOID
_InterlockedExchangePointer (
      
#line 1735 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
             PVOID volatile *Target,
      PVOID Value
    );

LONG64
_InterlockedAnd64 (
      LONG64 volatile *Destination,
      LONG64 Value
    );

LONG64
_InterlockedOr64 (
      LONG64 volatile *Destination,
      LONG64 Value
    );

LONG64
_InterlockedXor64 (
      LONG64 volatile *Destination,
      LONG64 Value
    );

LONG64
_InterlockedIncrement64 (
      LONG64 volatile *Addend
    );

LONG64
_InterlockedDecrement64 (
      LONG64 volatile *Addend
    );

LONG64
_InterlockedExchange64 (
      LONG64 volatile *Target,
      LONG64 Value
    );

LONG64
_InterlockedExchangeAdd64 (
      LONG64 volatile *Addend,
      LONG64 Value
    );

LONG64
_InterlockedCompareExchange64 (
      LONG64 volatile *Destination,
      LONG64 ExChange,
      LONG64 Comperand
    );

#pragma intrinsic(_InterlockedAnd)
#pragma intrinsic(_InterlockedOr)
#pragma intrinsic(_InterlockedXor)
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedExchange)
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedCompareExchange)
#pragma intrinsic(_InterlockedExchangePointer)
#pragma intrinsic(_InterlockedCompareExchangePointer)
#pragma intrinsic(_InterlockedAnd64)
#pragma intrinsic(_InterlockedOr64)
#pragma intrinsic(_InterlockedXor64)
#pragma intrinsic(_InterlockedIncrement64)
#pragma intrinsic(_InterlockedDecrement64)
#pragma intrinsic(_InterlockedExchange64)
#pragma intrinsic(_InterlockedExchangeAdd64)
#pragma intrinsic(_InterlockedCompareExchange64)










char
_InterlockedAnd8 (
      char volatile *Destination,
      char Value
    );

char
_InterlockedOr8 (
      char volatile *Destination,
      char Value
    );

char
_InterlockedXor8 (
      char volatile *Destination,
      char Value
    );

SHORT
_InterlockedAnd16(
      SHORT volatile *Destination,
      SHORT Value
    );

SHORT
_InterlockedOr16(
      SHORT volatile *Destination,
      SHORT Value
    );

SHORT
_InterlockedXor16(
      SHORT volatile *Destination,
      SHORT Value
    );

#pragma intrinsic (_InterlockedAnd8)
#pragma intrinsic (_InterlockedOr8)
#pragma intrinsic (_InterlockedXor8)
#pragma intrinsic (_InterlockedAnd16)
#pragma intrinsic (_InterlockedOr16)
#pragma intrinsic (_InterlockedXor16)

#line 1858 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
















































































































































































































































































































#line 2163 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 2165 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 2167 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"






#line 2174 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family


int



#line 2184 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
__stdcall
#line 2186 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


#line 2189 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
WinMain (
      HINSTANCE hInstance,
      HINSTANCE hPrevInstance,
      LPSTR lpCmdLine,
      int nShowCmd
    );

int


#line 2200 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
__stdcall
#line 2202 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
wWinMain(
      HINSTANCE hInstance,
      HINSTANCE hPrevInstance,
      LPWSTR lpCmdLine,
      int nShowCmd
    );

__declspec(dllimport)
 
 
HGLOBAL
__stdcall
GlobalAlloc(
      UINT uFlags,
      SIZE_T dwBytes
    );

__declspec(dllimport)
 
 
HGLOBAL
__stdcall
GlobalReAlloc (
      HGLOBAL hMem,
      SIZE_T dwBytes,
      UINT uFlags
    );

__declspec(dllimport)
SIZE_T
__stdcall
GlobalSize (
      HGLOBAL hMem
    );

__declspec(dllimport)
UINT
__stdcall
GlobalFlags (
      HGLOBAL hMem
    );

__declspec(dllimport)
 
LPVOID
__stdcall
GlobalLock (
      HGLOBAL hMem
    );

__declspec(dllimport)
 
HGLOBAL
__stdcall
GlobalHandle (
      LPCVOID pMem
    );

__declspec(dllimport)
BOOL
__stdcall
GlobalUnlock(
      HGLOBAL hMem
    );

__declspec(dllimport)
 
HGLOBAL
__stdcall
GlobalFree(
      HGLOBAL hMem
    );

__declspec(dllimport)
SIZE_T
__stdcall
GlobalCompact(
      DWORD dwMinFree
    );

__declspec(dllimport)
void
__stdcall
GlobalFix(
      HGLOBAL hMem
    );

__declspec(dllimport)
void
__stdcall
GlobalUnfix(
      HGLOBAL hMem
    );

__declspec(dllimport)
LPVOID
__stdcall
GlobalWire(
      HGLOBAL hMem
    );

__declspec(dllimport)
BOOL
__stdcall
GlobalUnWire(
      HGLOBAL hMem
    );

 
__declspec(dllimport)
void
__stdcall
GlobalMemoryStatus(
      LPMEMORYSTATUS lpBuffer
    );

__declspec(dllimport)
 
 
HLOCAL
__stdcall
LocalAlloc(
      UINT uFlags,
      SIZE_T uBytes
    );

__declspec(dllimport)
 
 
HLOCAL
__stdcall
LocalReAlloc(
      HLOCAL hMem,
      SIZE_T uBytes,
      UINT uFlags
    );

__declspec(dllimport)
 
LPVOID
__stdcall
LocalLock(
      HLOCAL hMem
    );

__declspec(dllimport)
 
HLOCAL
__stdcall
LocalHandle(
      LPCVOID pMem
    );

__declspec(dllimport)
BOOL
__stdcall
LocalUnlock(
      HLOCAL hMem
    );

__declspec(dllimport)
SIZE_T
__stdcall
LocalSize(
      HLOCAL hMem
    );

__declspec(dllimport)
UINT
__stdcall
LocalFlags(
      HLOCAL hMem
    );

__declspec(dllimport)
HLOCAL
__stdcall
LocalFree(
      HLOCAL hMem
    );

__declspec(dllimport)
SIZE_T
__stdcall
LocalShrink(
      HLOCAL hMem,
      UINT cbNewSize
    );

__declspec(dllimport)
SIZE_T
__stdcall
LocalCompact(
      UINT uMinFree
    );



__declspec(dllimport)
BOOL
__stdcall
GetProcessorSystemCycleTime (
      USHORT Group,
      PSYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION Buffer,
      PDWORD ReturnedLength
    );

#line 2410 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
 
LPVOID
__stdcall
VirtualAllocExNuma(
          HANDLE hProcess,
      LPVOID lpAddress,
          SIZE_T dwSize,
          DWORD  flAllocationType,
          DWORD  flProtect,
          DWORD  nndPreferred
    );

#line 2427 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
GetPhysicallyInstalledSystemMemory(
      PULONGLONG TotalMemoryInKilobytes
    );

#line 2438 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"















#line 2454 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetBinaryTypeA(
       LPCSTR lpApplicationName,
      LPDWORD  lpBinaryType
    );
__declspec(dllimport)
BOOL
__stdcall
GetBinaryTypeW(
       LPCWSTR lpApplicationName,
      LPDWORD  lpBinaryType
    );




#line 2474 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
DWORD
__stdcall
GetShortPathNameA(
      LPCSTR lpszLongPath,
      LPSTR  lpszShortPath,
      DWORD cchBuffer
    );


#line 2487 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
 
DWORD
__stdcall
GetLongPathNameTransactedA(
          LPCSTR lpszShortPath,
      LPSTR  lpszLongPath,
          DWORD cchBuffer,
          HANDLE hTransaction
    );
__declspec(dllimport)
 
DWORD
__stdcall
GetLongPathNameTransactedW(
          LPCWSTR lpszShortPath,
      LPWSTR  lpszLongPath,
          DWORD cchBuffer,
          HANDLE hTransaction
    );




#line 2515 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 2517 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetProcessAffinityMask(
       HANDLE hProcess,
      PDWORD_PTR lpProcessAffinityMask,
      PDWORD_PTR lpSystemAffinityMask
    );

__declspec(dllimport)
BOOL
__stdcall
SetProcessAffinityMask(
      HANDLE hProcess,
      DWORD_PTR dwProcessAffinityMask
    );

__declspec(dllimport)
BOOL
__stdcall
GetProcessIoCounters(
       HANDLE hProcess,
      PIO_COUNTERS lpIoCounters
    );

__declspec(dllimport)
BOOL
__stdcall
GetProcessWorkingSetSize(
       HANDLE hProcess,
      PSIZE_T lpMinimumWorkingSetSize,
      PSIZE_T lpMaximumWorkingSetSize
    );

__declspec(dllimport)
BOOL
__stdcall
SetProcessWorkingSetSize(
      HANDLE hProcess,
      SIZE_T dwMinimumWorkingSetSize,
      SIZE_T dwMaximumWorkingSetSize
    );

__declspec(dllimport)

void
__stdcall
FatalExit(
      int ExitCode
    );

__declspec(dllimport)
BOOL
__stdcall
SetEnvironmentStringsA(
         LPCH NewEnvironment
    );


#line 2578 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 2580 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family


__declspec(dllimport)
void
__stdcall
RaiseFailFastException(
      PEXCEPTION_RECORD pExceptionRecord,
      PCONTEXT pContextRecord,
      DWORD dwFlags
    );

#line 2595 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family










__declspec(dllimport)
 
LPVOID
__stdcall
CreateFiber(
          SIZE_T dwStackSize,
          LPFIBER_START_ROUTINE lpStartAddress,
      LPVOID lpParameter
    );

__declspec(dllimport)
 
LPVOID
__stdcall
CreateFiberEx(
          SIZE_T dwStackCommitSize,
          SIZE_T dwStackReserveSize,
          DWORD dwFlags,
          LPFIBER_START_ROUTINE lpStartAddress,
      LPVOID lpParameter
    );

__declspec(dllimport)
void
__stdcall
DeleteFiber(
      LPVOID lpFiber
    );

__declspec(dllimport)
 
LPVOID
__stdcall
ConvertThreadToFiber(
      LPVOID lpParameter
    );

__declspec(dllimport)
 
LPVOID
__stdcall
ConvertThreadToFiberEx(
      LPVOID lpParameter,
          DWORD dwFlags
    );



__declspec(dllimport)
BOOL
__stdcall
ConvertFiberToThread(
    void
    );

#line 2664 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
void
__stdcall
SwitchToFiber(
      LPVOID lpFiber
    );









typedef void *PUMS_CONTEXT;

typedef void *PUMS_COMPLETION_LIST;

typedef enum _RTL_UMS_THREAD_INFO_CLASS UMS_THREAD_INFO_CLASS, *PUMS_THREAD_INFO_CLASS;

typedef enum _RTL_UMS_SCHEDULER_REASON UMS_SCHEDULER_REASON;

typedef PRTL_UMS_SCHEDULER_ENTRY_POINT PUMS_SCHEDULER_ENTRY_POINT;

typedef struct _UMS_SCHEDULER_STARTUP_INFO {

    
    
    
    ULONG UmsVersion;

    
    
    
    PUMS_COMPLETION_LIST CompletionList;

    
    
    
    
    PUMS_SCHEDULER_ENTRY_POINT SchedulerProc;

    
    
    
    PVOID SchedulerParam;

} UMS_SCHEDULER_STARTUP_INFO, *PUMS_SCHEDULER_STARTUP_INFO;

typedef struct _UMS_SYSTEM_THREAD_INFORMATION {
    ULONG UmsVersion;
    union {
        struct {
            ULONG IsUmsSchedulerThread : 1;
            ULONG IsUmsWorkerThread : 1;
        } ;
        ULONG ThreadUmsFlags;
    } ;
} UMS_SYSTEM_THREAD_INFORMATION, *PUMS_SYSTEM_THREAD_INFORMATION;

 
__declspec(dllimport)
BOOL
__stdcall
CreateUmsCompletionList(
     PUMS_COMPLETION_LIST* UmsCompletionList
    );

__declspec(dllimport)
BOOL
__stdcall
DequeueUmsCompletionListItems(
      PUMS_COMPLETION_LIST UmsCompletionList,
      DWORD WaitTimeOut,
      PUMS_CONTEXT* UmsThreadList
    );

__declspec(dllimport)
BOOL
__stdcall
GetUmsCompletionListEvent(
      PUMS_COMPLETION_LIST UmsCompletionList,
      PHANDLE UmsCompletionEvent
    );

__declspec(dllimport)
BOOL
__stdcall
ExecuteUmsThread(
      PUMS_CONTEXT UmsThread
    );

__declspec(dllimport)
BOOL
__stdcall
UmsThreadYield(
      PVOID SchedulerParam
    );

__declspec(dllimport)
BOOL
__stdcall
DeleteUmsCompletionList(
      PUMS_COMPLETION_LIST UmsCompletionList
    );

__declspec(dllimport)
PUMS_CONTEXT
__stdcall
GetCurrentUmsThread(
    void
    );

__declspec(dllimport)
PUMS_CONTEXT
__stdcall
GetNextUmsListItem(
      PUMS_CONTEXT UmsContext
    );

__declspec(dllimport)
BOOL
__stdcall
QueryUmsThreadInformation(
      PUMS_CONTEXT UmsThread,
      UMS_THREAD_INFO_CLASS UmsThreadInfoClass,
      PVOID UmsThreadInformation,
      ULONG UmsThreadInformationLength,
      PULONG ReturnLength
    );

__declspec(dllimport)
BOOL
__stdcall
SetUmsThreadInformation(
      PUMS_CONTEXT UmsThread,
      UMS_THREAD_INFO_CLASS UmsThreadInfoClass,
      PVOID UmsThreadInformation,
      ULONG UmsThreadInformationLength
    );

__declspec(dllimport)
BOOL
__stdcall
DeleteUmsThreadContext(
      PUMS_CONTEXT UmsThread
    );

__declspec(dllimport)
BOOL
__stdcall
CreateUmsThreadContext(
     PUMS_CONTEXT *lpUmsThread
    );

__declspec(dllimport)
BOOL
__stdcall
EnterUmsSchedulingMode(
      PUMS_SCHEDULER_STARTUP_INFO SchedulerStartupInfo
    );

__declspec(dllimport)
BOOL
__stdcall
GetUmsSystemThreadInformation(
      HANDLE ThreadHandle,
      PUMS_SYSTEM_THREAD_INFORMATION SystemThreadInfo
    );

#line 2837 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





#line 2843 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD_PTR
__stdcall
SetThreadAffinityMask(
      HANDLE hThread,
      DWORD_PTR dwThreadAffinityMask
    );


__declspec(dllimport)
DWORD
__stdcall
SetThreadIdealProcessor(
      HANDLE hThread,
      DWORD dwIdealProcessor
    );
#line 2861 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





typedef enum _THREAD_INFORMATION_CLASS {
    ThreadMemoryPriority,
    ThreadAbsoluteCpuPriority,
    ThreadInformationClassMax
} THREAD_INFORMATION_CLASS;





typedef enum _PROCESS_INFORMATION_CLASS {
    ProcessMemoryPriority,
    ProcessInformationClassMax
} PROCESS_INFORMATION_CLASS;



__declspec(dllimport)
BOOL
__stdcall
GetThreadInformation (
      HANDLE hThread,
      THREAD_INFORMATION_CLASS ThreadInformationClass,
      LPVOID ThreadInformation,
      DWORD ThreadInformationSize
    );

__declspec(dllimport)
BOOL
__stdcall
SetThreadInformation (
      HANDLE hThread,
      THREAD_INFORMATION_CLASS ThreadInformationClass,
      LPVOID ThreadInformation,
      DWORD ThreadInformationSize
    );

__declspec(dllimport)
BOOL
__stdcall
GetProcessInformation (
      HANDLE hProcess,
      PROCESS_INFORMATION_CLASS ProcessInformationClass,
      LPVOID ProcessInformation,
      DWORD ProcessInformationSize
    );

__declspec(dllimport)
BOOL
__stdcall
SetProcessInformation (
      HANDLE hProcess,
      PROCESS_INFORMATION_CLASS ProcessInformationClass,
      LPVOID ProcessInformation,
      DWORD ProcessInformationSize
    );












typedef struct _MEMORY_PRIORITY_INFORMATION {
    ULONG MemoryPriority;
} MEMORY_PRIORITY_INFORMATION, *PMEMORY_PRIORITY_INFORMATION;

#line 2939 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"






__declspec(dllimport)
BOOL
__stdcall
SetProcessDEPPolicy(
      DWORD dwFlags
    );

__declspec(dllimport)
BOOL
__stdcall
GetProcessDEPPolicy(
      HANDLE hProcess,
      LPDWORD lpFlags,
      PBOOL lpPermanent
    );

#line 2962 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
SetProcessPriorityBoost(
      HANDLE hProcess,
      BOOL bDisablePriorityBoost
    );

__declspec(dllimport)
BOOL
__stdcall
GetProcessPriorityBoost(
       HANDLE hProcess,
      PBOOL  pDisablePriorityBoost
    );

__declspec(dllimport)
BOOL
__stdcall
RequestWakeupLatency(
      LATENCY_TIME latency
    );

__declspec(dllimport)
BOOL
__stdcall
IsSystemResumeAutomatic(
    void
    );



__declspec(dllimport)
BOOL
__stdcall
GetThreadIOPendingFlag(
       HANDLE hThread,
      PBOOL  lpIOIsPending
    );

#line 3004 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetThreadSelectorEntry(
       HANDLE hThread,
       DWORD dwSelector,
      LPLDT_ENTRY lpSelectorEntry
    );

__declspec(dllimport)
EXECUTION_STATE
__stdcall
SetThreadExecutionState(
      EXECUTION_STATE esFlags
    );







typedef REASON_CONTEXT POWER_REQUEST_CONTEXT, *PPOWER_REQUEST_CONTEXT, *LPPOWER_REQUEST_CONTEXT;

__declspec(dllimport)
HANDLE
__stdcall
PowerCreateRequest (
      PREASON_CONTEXT Context
    );

__declspec(dllimport)
BOOL
__stdcall
PowerSetRequest (
      HANDLE PowerRequest,
      POWER_REQUEST_TYPE RequestType
    );

__declspec(dllimport)
BOOL
__stdcall
PowerClearRequest (
      HANDLE PowerRequest,
      POWER_REQUEST_TYPE RequestType
    );

#line 3053 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 3055 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family






#line 3065 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family


















#line 3087 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 3088 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





















__declspec(dllimport)
BOOL
__stdcall
SetFileCompletionNotificationModes(
      HANDLE FileHandle,
      UCHAR Flags
    );

__declspec(dllimport)
BOOL
__stdcall
SetFileIoOverlappedRange(
      HANDLE FileHandle,
      PUCHAR OverlappedRangeStart,
      ULONG Length
    );

#line 3127 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"










__declspec(dllimport)
DWORD
__stdcall
GetThreadErrorMode(
    void
    );

__declspec(dllimport)
BOOL
__stdcall
SetThreadErrorMode(
      DWORD dwNewMode,
      LPDWORD lpOldMode
    );





__declspec(dllimport)
BOOL
__stdcall
Wow64GetThreadContext(
         HANDLE hThread,
      PWOW64_CONTEXT lpContext
    );

__declspec(dllimport)
BOOL
__stdcall
Wow64SetThreadContext(
      HANDLE hThread,
      const WOW64_CONTEXT *lpContext
    );

#line 3173 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
Wow64GetThreadSelectorEntry(
      HANDLE hThread,
      DWORD dwSelector,
      PWOW64_LDT_ENTRY lpSelectorEntry
    );

#line 3186 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 3188 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
DWORD
__stdcall
Wow64SuspendThread(
      HANDLE hThread
    );

#line 3199 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
CheckRemoteDebuggerPresent(
       HANDLE hProcess,
      PBOOL pbDebuggerPresent
    );

#line 3211 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
DebugSetProcessKillOnExit(
      BOOL KillOnExit
    );

__declspec(dllimport)
BOOL
__stdcall
DebugBreakProcess (
      HANDLE Process
    );

#line 3227 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family




#line 3235 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 3237 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family


__declspec(dllimport)
BOOL
__stdcall
PulseEvent(
      HANDLE hEvent
    );

__declspec(dllimport)
DWORD
__stdcall
WaitForMultipleObjects(
      DWORD nCount,
      const HANDLE *lpHandles,
      BOOL bWaitAll,
      DWORD dwMilliseconds
    );

__declspec(dllimport)
ATOM
__stdcall
GlobalDeleteAtom(
      ATOM nAtom
    );

__declspec(dllimport)
BOOL
__stdcall
InitAtomTable(
      DWORD nSize
    );

__declspec(dllimport)
ATOM
__stdcall
DeleteAtom(
      ATOM nAtom
    );

__declspec(dllimport)
UINT
__stdcall
SetHandleCount(
      UINT uNumber
    );

__declspec(dllimport)
BOOL
__stdcall
RequestDeviceWakeup(
      HANDLE hDevice
    );

__declspec(dllimport)
BOOL
__stdcall
CancelDeviceWakeupRequest(
      HANDLE hDevice
    );

__declspec(dllimport)
BOOL
__stdcall
GetDevicePowerState(
       HANDLE hDevice,
      BOOL *pfOn
    );

__declspec(dllimport)
BOOL
__stdcall
SetMessageWaitingIndicator(
      HANDLE hMsgIndicator,
      ULONG ulMsgCount
    );


__declspec(dllimport)
BOOL
__stdcall
SetFileShortNameA(
      HANDLE hFile,
      LPCSTR lpShortName
    );
__declspec(dllimport)
BOOL
__stdcall
SetFileShortNameW(
      HANDLE hFile,
      LPCWSTR lpShortName
    );




#line 3337 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"






__declspec(dllimport)
DWORD
__stdcall
LoadModule(
      LPCSTR lpModuleName,
      LPVOID lpParameterBlock
    );


 
__declspec(dllimport)
UINT
__stdcall
WinExec(
      LPCSTR lpCmdLine,
      UINT uCmdShow
    );

__declspec(dllimport)
BOOL
__stdcall
ClearCommBreak(
      HANDLE hFile
    );

__declspec(dllimport)
BOOL
__stdcall
ClearCommError(
           HANDLE hFile,
      LPDWORD lpErrors,
      LPCOMSTAT lpStat
    );

__declspec(dllimport)
BOOL
__stdcall
SetupComm(
      HANDLE hFile,
      DWORD dwInQueue,
      DWORD dwOutQueue
    );

__declspec(dllimport)
BOOL
__stdcall
EscapeCommFunction(
      HANDLE hFile,
      DWORD dwFunc
    );

__declspec(dllimport)
 
BOOL
__stdcall
GetCommConfig(
           HANDLE hCommDev,
      LPCOMMCONFIG lpCC,
        LPDWORD lpdwSize
    );

__declspec(dllimport)
BOOL
__stdcall
GetCommMask(
       HANDLE hFile,
      LPDWORD lpEvtMask
    );

__declspec(dllimport)
BOOL
__stdcall
GetCommProperties(
         HANDLE hFile,
      LPCOMMPROP lpCommProp
    );

__declspec(dllimport)
BOOL
__stdcall
GetCommModemStatus(
       HANDLE hFile,
      LPDWORD lpModemStat
    );

__declspec(dllimport)
BOOL
__stdcall
GetCommState(
       HANDLE hFile,
      LPDCB lpDCB
    );

__declspec(dllimport)
BOOL
__stdcall
GetCommTimeouts(
       HANDLE hFile,
      LPCOMMTIMEOUTS lpCommTimeouts
    );

__declspec(dllimport)
BOOL
__stdcall
PurgeComm(
      HANDLE hFile,
      DWORD dwFlags
    );

__declspec(dllimport)
BOOL
__stdcall
SetCommBreak(
      HANDLE hFile
    );

__declspec(dllimport)
BOOL
__stdcall
SetCommConfig(
      HANDLE hCommDev,
      LPCOMMCONFIG lpCC,
      DWORD dwSize
    );

__declspec(dllimport)
BOOL
__stdcall
SetCommMask(
      HANDLE hFile,
      DWORD dwEvtMask
    );

__declspec(dllimport)
BOOL
__stdcall
SetCommState(
      HANDLE hFile,
      LPDCB lpDCB
    );

__declspec(dllimport)
BOOL
__stdcall
SetCommTimeouts(
      HANDLE hFile,
      LPCOMMTIMEOUTS lpCommTimeouts
    );

__declspec(dllimport)
BOOL
__stdcall
TransmitCommChar(
      HANDLE hFile,
      char cChar
    );

__declspec(dllimport)
BOOL
__stdcall
WaitCommEvent(
             HANDLE hFile,
          LPDWORD lpEvtMask,
      LPOVERLAPPED lpOverlapped
    );


__declspec(dllimport)
DWORD
__stdcall
SetTapePosition(
      HANDLE hDevice,
      DWORD dwPositionMethod,
      DWORD dwPartition,
      DWORD dwOffsetLow,
      DWORD dwOffsetHigh,
      BOOL bImmediate
    );

__declspec(dllimport)
DWORD
__stdcall
GetTapePosition(
       HANDLE hDevice,
       DWORD dwPositionType,
      LPDWORD lpdwPartition,
      LPDWORD lpdwOffsetLow,
      LPDWORD lpdwOffsetHigh
    );

__declspec(dllimport)
DWORD
__stdcall
PrepareTape(
      HANDLE hDevice,
      DWORD dwOperation,
      BOOL bImmediate
    );

__declspec(dllimport)
DWORD
__stdcall
EraseTape(
      HANDLE hDevice,
      DWORD dwEraseType,
      BOOL bImmediate
    );

__declspec(dllimport)
DWORD
__stdcall
CreateTapePartition(
      HANDLE hDevice,
      DWORD dwPartitionMethod,
      DWORD dwCount,
      DWORD dwSize
    );

__declspec(dllimport)
DWORD
__stdcall
WriteTapemark(
      HANDLE hDevice,
      DWORD dwTapemarkType,
      DWORD dwTapemarkCount,
      BOOL bImmediate
    );

__declspec(dllimport)
DWORD
__stdcall
GetTapeStatus(
      HANDLE hDevice
    );

__declspec(dllimport)
DWORD
__stdcall
GetTapeParameters(
         HANDLE hDevice,
         DWORD dwOperation,
      LPDWORD lpdwSize,
      LPVOID lpTapeInformation
    );




__declspec(dllimport)
DWORD
__stdcall
SetTapeParameters(
      HANDLE hDevice,
      DWORD dwOperation,
      LPVOID lpTapeInformation
    );




#line 3604 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family


__declspec(dllimport)
int
__stdcall
MulDiv(
      int nNumber,
      int nNumerator,
      int nDenominator
    );

#line 3619 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family


typedef enum _DEP_SYSTEM_POLICY_TYPE {
    DEPPolicyAlwaysOff = 0,
    DEPPolicyAlwaysOn,
    DEPPolicyOptIn,
    DEPPolicyOptOut,
    DEPTotalPolicyCount
} DEP_SYSTEM_POLICY_TYPE;



__declspec(dllimport)
DEP_SYSTEM_POLICY_TYPE
__stdcall
GetSystemDEPPolicy(
    void
    );

#line 3642 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
GetSystemRegistryQuota(
      PDWORD pdwQuotaAllowed,
      PDWORD pdwQuotaUsed
    );

BOOL
__stdcall
GetSystemTimes(
      LPFILETIME lpIdleTime,
      LPFILETIME lpKernelTime,
      LPFILETIME lpUserTime
    );

#line 3662 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





__declspec(dllimport)
BOOL
__stdcall
FileTimeToDosDateTime(
       const FILETIME *lpFileTime,
      LPWORD lpFatDate,
      LPWORD lpFatTime
    );

__declspec(dllimport)
BOOL
__stdcall
DosDateTimeToFileTime(
       WORD wFatDate,
       WORD wFatTime,
      LPFILETIME lpFileTime
    );

__declspec(dllimport)
BOOL
__stdcall
SetSystemTimeAdjustment(
      DWORD dwTimeAdjustment,
      BOOL  bTimeAdjustmentDisabled
    );

#line 3694 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion


#pragma region Application Family



__declspec(dllimport)
 
DWORD
__stdcall
FormatMessageA(
          DWORD dwFlags,
      LPCVOID lpSource,
          DWORD dwMessageId,
          DWORD dwLanguageId,
         LPSTR lpBuffer,
          DWORD nSize,
      va_list *Arguments
    );
__declspec(dllimport)
 
DWORD
__stdcall
FormatMessageW(
          DWORD dwFlags,
      LPCVOID lpSource,
          DWORD dwMessageId,
          DWORD dwLanguageId,
         LPWSTR lpBuffer,
          DWORD nSize,
      va_list *Arguments
    );




#line 3732 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





























#line 3762 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 3763 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"









#line 3773 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family




__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeInfo(
           HANDLE hNamedPipe,
      LPDWORD lpFlags,
      LPDWORD lpOutBufferSize,
      LPDWORD lpInBufferSize,
      LPDWORD lpMaxInstances
    );

__declspec(dllimport)
HANDLE
__stdcall
CreateMailslotA(
          LPCSTR lpName,
          DWORD nMaxMessageSize,
          DWORD lReadTimeout,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
__declspec(dllimport)
HANDLE
__stdcall
CreateMailslotW(
          LPCWSTR lpName,
          DWORD nMaxMessageSize,
          DWORD lReadTimeout,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );




#line 3814 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetMailslotInfo(
           HANDLE hMailslot,
      LPDWORD lpMaxMessageSize,
      LPDWORD lpNextSize,
      LPDWORD lpMessageCount,
      LPDWORD lpReadTimeout
    );

__declspec(dllimport)
BOOL
__stdcall
SetMailslotInfo(
      HANDLE hMailslot,
      DWORD lReadTimeout
    );





__declspec(dllimport)
BOOL
__stdcall
EncryptFileA(
      LPCSTR lpFileName
    );
__declspec(dllimport)
BOOL
__stdcall
EncryptFileW(
      LPCWSTR lpFileName
    );




#line 3855 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
DecryptFileA(
            LPCSTR lpFileName,
      DWORD dwReserved
    );
__declspec(dllimport)
BOOL
__stdcall
DecryptFileW(
            LPCWSTR lpFileName,
      DWORD dwReserved
    );




#line 3875 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
















__declspec(dllimport)
BOOL
__stdcall
FileEncryptionStatusA(
       LPCSTR lpFileName,
      LPDWORD  lpStatus
    );
__declspec(dllimport)
BOOL
__stdcall
FileEncryptionStatusW(
       LPCWSTR lpFileName,
      LPDWORD  lpStatus
    );




#line 3910 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"







typedef
DWORD
(__stdcall *PFE_EXPORT_FUNC)(
      PBYTE pbData,
      PVOID pvCallbackContext,
          ULONG ulLength
    );

typedef
DWORD
(__stdcall *PFE_IMPORT_FUNC)(
      PBYTE pbData,
      PVOID pvCallbackContext,
       PULONG ulLength
    );












__declspec(dllimport)
DWORD
__stdcall
OpenEncryptedFileRawA(
             LPCSTR lpFileName,
             ULONG    ulFlags,
     PVOID   *pvContext
    );
__declspec(dllimport)
DWORD
__stdcall
OpenEncryptedFileRawW(
             LPCWSTR lpFileName,
             ULONG    ulFlags,
     PVOID   *pvContext
    );




#line 3965 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD
__stdcall
ReadEncryptedFileRaw(
          PFE_EXPORT_FUNC pfExportCallback,
      PVOID           pvCallbackContext,
          PVOID           pvContext
    );

__declspec(dllimport)
DWORD
__stdcall
WriteEncryptedFileRaw(
          PFE_IMPORT_FUNC pfImportCallback,
      PVOID           pvCallbackContext,
          PVOID           pvContext
    );

__declspec(dllimport)
void
__stdcall
CloseEncryptedFileRaw(
      PVOID           pvContext
    );





__declspec(dllimport)
int
__stdcall
lstrcmpA(
      LPCSTR lpString1,
      LPCSTR lpString2
    );
__declspec(dllimport)
int
__stdcall
lstrcmpW(
      LPCWSTR lpString1,
      LPCWSTR lpString2
    );




#line 4014 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
int
__stdcall
lstrcmpiA(
      LPCSTR lpString1,
      LPCSTR lpString2
    );
__declspec(dllimport)
int
__stdcall
lstrcmpiW(
      LPCWSTR lpString1,
      LPCWSTR lpString2
    );




#line 4034 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
LPSTR
__stdcall
lstrcpynA(
      LPSTR lpString1,
      LPCSTR lpString2,
      int iMaxLength
    );
__declspec(dllimport)
 
LPWSTR
__stdcall
lstrcpynW(
      LPWSTR lpString1,
      LPCWSTR lpString2,
      int iMaxLength
    );




#line 4058 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


#pragma warning(push)
#pragma warning(disable:4995)
#line 4063 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
LPSTR
__stdcall
lstrcpyA(
      LPSTR lpString1, 
       LPCSTR lpString2
    );
__declspec(dllimport)
LPWSTR
__stdcall
lstrcpyW(
      LPWSTR lpString1, 
       LPCWSTR lpString2
    );




#line 4083 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
LPSTR
__stdcall
lstrcatA(
      LPSTR lpString1, 
         LPCSTR lpString2
    );
__declspec(dllimport)
LPWSTR
__stdcall
lstrcatW(
      LPWSTR lpString1, 
         LPCWSTR lpString2
    );




#line 4103 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


#pragma warning(pop)
#line 4107 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
int
__stdcall
lstrlenA(
      LPCSTR lpString
    );
__declspec(dllimport)
int
__stdcall
lstrlenW(
      LPCWSTR lpString
    );




#line 4125 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
HFILE
__stdcall
OpenFile(
         LPCSTR lpFileName,
      LPOFSTRUCT lpReOpenBuff,
         UINT uStyle
    );

__declspec(dllimport)
HFILE
__stdcall
_lopen(
      LPCSTR lpPathName,
      int iReadWrite
    );

__declspec(dllimport)
HFILE
__stdcall
_lcreat(
      LPCSTR lpPathName,
      int  iAttribute
    );

__declspec(dllimport)
UINT
__stdcall
_lread(
      HFILE hFile,
      LPVOID lpBuffer,
      UINT uBytes
    );

__declspec(dllimport)
UINT
__stdcall
_lwrite(
      HFILE hFile,
      LPCCH lpBuffer,
      UINT uBytes
    );

__declspec(dllimport)
long
__stdcall
_hread(
      HFILE hFile,
      LPVOID lpBuffer,
      long lBytes
    );

__declspec(dllimport)
long
__stdcall
_hwrite(
      HFILE hFile,
      LPCCH lpBuffer,
      long lBytes
    );

__declspec(dllimport)
HFILE
__stdcall
_lclose(
      HFILE hFile
    );

__declspec(dllimport)
LONG
__stdcall
_llseek(
      HFILE hFile,
      LONG lOffset,
      int iOrigin
    );

__declspec(dllimport)
BOOL
__stdcall
IsTextUnicode(
      const void* lpv,
             int iSize,
      LPINT lpiResult
    );


__declspec(dllimport)
DWORD
__stdcall
SignalObjectAndWait(
      HANDLE hObjectToSignal,
      HANDLE hObjectToWaitOn,
      DWORD dwMilliseconds,
      BOOL bAlertable
    );
#line 4223 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
BackupRead(
         HANDLE hFile,
      LPBYTE lpBuffer,
         DWORD nNumberOfBytesToRead,
        LPDWORD lpNumberOfBytesRead,
         BOOL bAbort,
         BOOL bProcessSecurity,
      LPVOID *lpContext
    );

__declspec(dllimport)
BOOL
__stdcall
BackupSeek(
         HANDLE hFile,
         DWORD  dwLowBytesToSeek,
         DWORD  dwHighBytesToSeek,
        LPDWORD lpdwLowByteSeeked,
        LPDWORD lpdwHighByteSeeked,
      LPVOID *lpContext
    );

__declspec(dllimport)
BOOL
__stdcall
BackupWrite(
         HANDLE hFile,
      LPBYTE lpBuffer,
         DWORD nNumberOfBytesToWrite,
        LPDWORD lpNumberOfBytesWritten,
         BOOL bAbort,
         BOOL bProcessSecurity,
      LPVOID *lpContext
    );




typedef struct _WIN32_STREAM_ID {
        DWORD          dwStreamId ;
        DWORD          dwStreamAttributes ;
        LARGE_INTEGER  Size ;
        DWORD          dwStreamNameSize ;
        WCHAR          cStreamName[ 1 ] ;
} WIN32_STREAM_ID, *LPWIN32_STREAM_ID ;
















































#line 4321 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



typedef struct _STARTUPINFOEXA {
    STARTUPINFOA StartupInfo;
    LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
} STARTUPINFOEXA, *LPSTARTUPINFOEXA;
typedef struct _STARTUPINFOEXW {
    STARTUPINFOW StartupInfo;
    LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
} STARTUPINFOEXW, *LPSTARTUPINFOEXW;




typedef STARTUPINFOEXA STARTUPINFOEX;
typedef LPSTARTUPINFOEXA LPSTARTUPINFOEX;
#line 4339 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 4341 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



#line 4345 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family


__declspec(dllimport)
 
HANDLE
__stdcall
OpenMutexA(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCSTR lpName
    );


#line 4362 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
HANDLE
__stdcall
CreateSemaphoreA(
      LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
          LONG lInitialCount,
          LONG lMaximumCount,
      LPCSTR lpName
    );
__declspec(dllimport)
 
HANDLE
__stdcall
CreateSemaphoreW(
      LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
          LONG lInitialCount,
          LONG lMaximumCount,
      LPCWSTR lpName
    );




#line 4388 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
HANDLE
__stdcall
OpenSemaphoreA(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCSTR lpName
    );


#line 4401 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
 
HANDLE
__stdcall
CreateWaitableTimerA(
      LPSECURITY_ATTRIBUTES lpTimerAttributes,
          BOOL bManualReset,
      LPCSTR lpTimerName
    );
__declspec(dllimport)
 
HANDLE
__stdcall
CreateWaitableTimerW(
      LPSECURITY_ATTRIBUTES lpTimerAttributes,
          BOOL bManualReset,
      LPCWSTR lpTimerName
    );




#line 4427 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
HANDLE
__stdcall
OpenWaitableTimerA(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCSTR lpTimerName
    );


#line 4440 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
 
HANDLE
__stdcall
CreateSemaphoreExA(
         LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
             LONG lInitialCount,
             LONG lMaximumCount,
         LPCSTR lpName,
       DWORD dwFlags,
             DWORD dwDesiredAccess
    );


#line 4458 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
HANDLE
__stdcall
CreateWaitableTimerExA(
      LPSECURITY_ATTRIBUTES lpTimerAttributes,
      LPCSTR lpTimerName,
          DWORD dwFlags,
          DWORD dwDesiredAccess
    );


#line 4472 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 4474 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 4476 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
HANDLE
__stdcall
CreateFileMappingA(
          HANDLE hFile,
      LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
          DWORD flProtect,
          DWORD dwMaximumSizeHigh,
          DWORD dwMaximumSizeLow,
      LPCSTR lpName
    );


#line 4492 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
 
HANDLE
__stdcall
CreateFileMappingNumaA(
          HANDLE hFile,
      LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
          DWORD flProtect,
          DWORD dwMaximumSizeHigh,
          DWORD dwMaximumSizeLow,
      LPCSTR lpName,
          DWORD nndPreferred
    );



#line 4512 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 4514 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
HANDLE
__stdcall
OpenFileMappingA(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCSTR lpName
    );


#line 4526 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
DWORD
__stdcall
GetLogicalDriveStringsA(
      DWORD nBufferLength,
      LPSTR lpBuffer
    );


#line 4538 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


__declspec(dllimport)
 
HMODULE
__stdcall
LoadLibraryA(
      LPCSTR lpLibFileName
    );
__declspec(dllimport)
 
HMODULE
__stdcall
LoadLibraryW(
      LPCWSTR lpLibFileName
    );




#line 4559 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 4561 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family




__declspec(dllimport)
 
HMODULE
__stdcall
LoadPackagedLibrary (
            LPCWSTR lpwLibFileName,
      DWORD Reserved
    );

#line 4578 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 4580 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family






__declspec(dllimport)
BOOL
__stdcall
QueryFullProcessImageNameA(
      HANDLE hProcess,
      DWORD dwFlags,
      LPSTR lpExeName,
      PDWORD lpdwSize
    );
__declspec(dllimport)
BOOL
__stdcall
QueryFullProcessImageNameW(
      HANDLE hProcess,
      DWORD dwFlags,
      LPWSTR lpExeName,
      PDWORD lpdwSize
    );




#line 4612 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 4614 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"












typedef enum _PROC_THREAD_ATTRIBUTE_NUM {
    ProcThreadAttributeParentProcess = 0,
    ProcThreadAttributeExtendedFlags,
    ProcThreadAttributeHandleList,
    ProcThreadAttributeGroupAffinity,
    ProcThreadAttributePreferredNode,
    ProcThreadAttributeIdealProcessor,
    ProcThreadAttributeUmsThread,
    ProcThreadAttributeMitigationPolicy,
    ProcThreadAttributePackageFullName,
    ProcThreadAttributeSecurityCapabilities,
    ProcThreadAttributeConsoleReference,
    ProcThreadAttributeMax
} PROC_THREAD_ATTRIBUTE_NUM;








































































































































#line 4777 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


__declspec(dllimport)
BOOL
__stdcall
GetProcessShutdownParameters(
      LPDWORD lpdwLevel,
      LPDWORD lpdwFlags
    );

__declspec(dllimport)
void
__stdcall
FatalAppExitA(
      UINT uAction,
      LPCSTR lpMessageText
    );
__declspec(dllimport)
void
__stdcall
FatalAppExitW(
      UINT uAction,
      LPCWSTR lpMessageText
    );




#line 4806 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
void
__stdcall
GetStartupInfoA(
      LPSTARTUPINFOA lpStartupInfo
    );


#line 4816 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





















#line 4838 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



















#line 4858 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD
__stdcall
GetFirmwareEnvironmentVariableA(
      LPCSTR lpName,
      LPCSTR lpGuid,
      PVOID pBuffer,
      DWORD    nSize
    );
__declspec(dllimport)
DWORD
__stdcall
GetFirmwareEnvironmentVariableW(
      LPCWSTR lpName,
      LPCWSTR lpGuid,
      PVOID pBuffer,
      DWORD    nSize
    );




#line 4882 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
SetFirmwareEnvironmentVariableA(
      LPCSTR lpName,
      LPCSTR lpGuid,
      PVOID pValue,
      DWORD    nSize
    );
__declspec(dllimport)
BOOL
__stdcall
SetFirmwareEnvironmentVariableW(
      LPCWSTR lpName,
      LPCWSTR lpGuid,
      PVOID pValue,
      DWORD    nSize
    );




#line 4906 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
GetFirmwareType (
      PFIRMWARE_TYPE FirmwareType
    );


__declspec(dllimport)
BOOL
__stdcall
IsNativeVhdBoot (
      PBOOL NativeVhdBoot
    );

#line 4925 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
HRSRC
__stdcall
FindResourceA(
      HMODULE hModule,
          LPCSTR lpName,
          LPCSTR lpType
    );
__declspec(dllimport)
 
HRSRC
__stdcall
FindResourceW(
      HMODULE hModule,
          LPCWSTR lpName,
          LPCWSTR lpType
    );




#line 4949 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
HRSRC
__stdcall
FindResourceExA(
      HMODULE hModule,
          LPCSTR lpType,
          LPCSTR lpName,
          WORD    wLanguage
    );


#line 4963 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
EnumResourceTypesA(
      HMODULE hModule,
          ENUMRESTYPEPROCA lpEnumFunc,
          LONG_PTR lParam
    );
__declspec(dllimport)
BOOL
__stdcall
EnumResourceTypesW(
      HMODULE hModule,
          ENUMRESTYPEPROCW lpEnumFunc,
          LONG_PTR lParam
    );




#line 4985 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
EnumResourceNamesA(
      HMODULE hModule,
          LPCSTR lpType,
          ENUMRESNAMEPROCA lpEnumFunc,
          LONG_PTR lParam
    );
__declspec(dllimport)
BOOL
__stdcall
EnumResourceNamesW(
      HMODULE hModule,
          LPCWSTR lpType,
          ENUMRESNAMEPROCW lpEnumFunc,
          LONG_PTR lParam
    );




#line 5009 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
EnumResourceLanguagesA(
      HMODULE hModule,
          LPCSTR lpType,
          LPCSTR lpName,
          ENUMRESLANGPROCA lpEnumFunc,
          LONG_PTR lParam
    );
__declspec(dllimport)
BOOL
__stdcall
EnumResourceLanguagesW(
      HMODULE hModule,
          LPCWSTR lpType,
          LPCWSTR lpName,
          ENUMRESLANGPROCW lpEnumFunc,
          LONG_PTR lParam
    );




#line 5035 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
HANDLE
__stdcall
BeginUpdateResourceA(
      LPCSTR pFileName,
      BOOL bDeleteExistingResources
    );
__declspec(dllimport)
HANDLE
__stdcall
BeginUpdateResourceW(
      LPCWSTR pFileName,
      BOOL bDeleteExistingResources
    );




#line 5055 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
UpdateResourceA(
      HANDLE hUpdate,
      LPCSTR lpType,
      LPCSTR lpName,
      WORD wLanguage,
      LPVOID lpData,
      DWORD cb
    );
__declspec(dllimport)
BOOL
__stdcall
UpdateResourceW(
      HANDLE hUpdate,
      LPCWSTR lpType,
      LPCWSTR lpName,
      WORD wLanguage,
      LPVOID lpData,
      DWORD cb
    );




#line 5083 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
EndUpdateResourceA(
      HANDLE hUpdate,
      BOOL   fDiscard
    );
__declspec(dllimport)
BOOL
__stdcall
EndUpdateResourceW(
      HANDLE hUpdate,
      BOOL   fDiscard
    );




#line 5103 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
ATOM
__stdcall
GlobalAddAtomA(
      LPCSTR lpString
    );
__declspec(dllimport)
ATOM
__stdcall
GlobalAddAtomW(
      LPCWSTR lpString
    );




#line 5123 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
ATOM
__stdcall
GlobalAddAtomExA(
      LPCSTR lpString,
      DWORD Flags
    );
__declspec(dllimport)
ATOM
__stdcall
GlobalAddAtomExW(
      LPCWSTR lpString,
      DWORD Flags
    );




#line 5143 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
ATOM
__stdcall
GlobalFindAtomA(
      LPCSTR lpString
    );
__declspec(dllimport)
ATOM
__stdcall
GlobalFindAtomW(
      LPCWSTR lpString
    );




#line 5161 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
UINT
__stdcall
GlobalGetAtomNameA(
      ATOM nAtom,
      LPSTR lpBuffer,
      int nSize
    );
__declspec(dllimport)
UINT
__stdcall
GlobalGetAtomNameW(
      ATOM nAtom,
      LPWSTR lpBuffer,
      int nSize
    );




#line 5183 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
ATOM
__stdcall
AddAtomA(
      LPCSTR lpString
    );
__declspec(dllimport)
ATOM
__stdcall
AddAtomW(
      LPCWSTR lpString
    );




#line 5201 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
ATOM
__stdcall
FindAtomA(
      LPCSTR lpString
    );
__declspec(dllimport)
ATOM
__stdcall
FindAtomW(
      LPCWSTR lpString
    );




#line 5219 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
UINT
__stdcall
GetAtomNameA(
      ATOM nAtom,
      LPSTR lpBuffer,
      int nSize
    );
__declspec(dllimport)
UINT
__stdcall
GetAtomNameW(
      ATOM nAtom,
      LPWSTR lpBuffer,
      int nSize
    );




#line 5241 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
UINT
__stdcall
GetProfileIntA(
      LPCSTR lpAppName,
      LPCSTR lpKeyName,
      INT nDefault
    );
__declspec(dllimport)
UINT
__stdcall
GetProfileIntW(
      LPCWSTR lpAppName,
      LPCWSTR lpKeyName,
      INT nDefault
    );




#line 5263 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD
__stdcall
GetProfileStringA(
      LPCSTR lpAppName,
      LPCSTR lpKeyName,
      LPCSTR lpDefault,
      LPSTR lpReturnedString,
          DWORD nSize
    );
__declspec(dllimport)
DWORD
__stdcall
GetProfileStringW(
      LPCWSTR lpAppName,
      LPCWSTR lpKeyName,
      LPCWSTR lpDefault,
      LPWSTR lpReturnedString,
          DWORD nSize
    );




#line 5289 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
WriteProfileStringA(
      LPCSTR lpAppName,
      LPCSTR lpKeyName,
      LPCSTR lpString
    );
__declspec(dllimport)
BOOL
__stdcall
WriteProfileStringW(
      LPCWSTR lpAppName,
      LPCWSTR lpKeyName,
      LPCWSTR lpString
    );




#line 5311 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD
__stdcall
GetProfileSectionA(
      LPCSTR lpAppName,
      LPSTR lpReturnedString,
      DWORD nSize
    );
__declspec(dllimport)
DWORD
__stdcall
GetProfileSectionW(
      LPCWSTR lpAppName,
      LPWSTR lpReturnedString,
      DWORD nSize
    );




#line 5333 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
WriteProfileSectionA(
      LPCSTR lpAppName,
      LPCSTR lpString
    );
__declspec(dllimport)
BOOL
__stdcall
WriteProfileSectionW(
      LPCWSTR lpAppName,
      LPCWSTR lpString
    );




#line 5353 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
UINT
__stdcall
GetPrivateProfileIntA(
          LPCSTR lpAppName,
          LPCSTR lpKeyName,
          INT nDefault,
      LPCSTR lpFileName
    );
__declspec(dllimport)
UINT
__stdcall
GetPrivateProfileIntW(
          LPCWSTR lpAppName,
          LPCWSTR lpKeyName,
          INT nDefault,
      LPCWSTR lpFileName
    );




#line 5377 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"























#line 5401 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileStringA(
      LPCSTR lpAppName,
      LPCSTR lpKeyName,
      LPCSTR lpDefault,
      LPSTR lpReturnedString,
          DWORD nSize,
      LPCSTR lpFileName
    );
__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileStringW(
      LPCWSTR lpAppName,
      LPCWSTR lpKeyName,
      LPCWSTR lpDefault,
      LPWSTR lpReturnedString,
          DWORD nSize,
      LPCWSTR lpFileName
    );




#line 5429 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



























#line 5457 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileStringA(
      LPCSTR lpAppName,
      LPCSTR lpKeyName,
      LPCSTR lpString,
      LPCSTR lpFileName
    );
__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileStringW(
      LPCWSTR lpAppName,
      LPCWSTR lpKeyName,
      LPCWSTR lpString,
      LPCWSTR lpFileName
    );




#line 5481 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileSectionA(
          LPCSTR lpAppName,
      LPSTR lpReturnedString,
          DWORD nSize,
      LPCSTR lpFileName
    );
__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileSectionW(
          LPCWSTR lpAppName,
      LPWSTR lpReturnedString,
          DWORD nSize,
      LPCWSTR lpFileName
    );




#line 5505 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"























#line 5529 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileSectionA(
      LPCSTR lpAppName,
      LPCSTR lpString,
      LPCSTR lpFileName
    );
__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileSectionW(
      LPCWSTR lpAppName,
      LPCWSTR lpString,
      LPCWSTR lpFileName
    );




#line 5551 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileSectionNamesA(
      LPSTR lpszReturnBuffer,
          DWORD nSize,
      LPCSTR lpFileName
    );
__declspec(dllimport)
DWORD
__stdcall
GetPrivateProfileSectionNamesW(
      LPWSTR lpszReturnBuffer,
          DWORD nSize,
      LPCWSTR lpFileName
    );




#line 5574 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





















#line 5596 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetPrivateProfileStructA(
          LPCSTR lpszSection,
          LPCSTR lpszKey,
      LPVOID   lpStruct,
          UINT     uSizeStruct,
      LPCSTR szFile
    );
__declspec(dllimport)
BOOL
__stdcall
GetPrivateProfileStructW(
          LPCWSTR lpszSection,
          LPCWSTR lpszKey,
      LPVOID   lpStruct,
          UINT     uSizeStruct,
      LPCWSTR szFile
    );




#line 5622 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

























#line 5648 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileStructA(
          LPCSTR lpszSection,
          LPCSTR lpszKey,
      LPVOID lpStruct,
          UINT     uSizeStruct,
      LPCSTR szFile
    );
__declspec(dllimport)
BOOL
__stdcall
WritePrivateProfileStructW(
          LPCWSTR lpszSection,
          LPCWSTR lpszKey,
      LPVOID lpStruct,
          UINT     uSizeStruct,
      LPCWSTR szFile
    );




#line 5674 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD
__stdcall
GetTempPathA(
      DWORD nBufferLength,
      LPSTR lpBuffer
    );


#line 5685 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
UINT
__stdcall
GetTempFileNameA(
      LPCSTR lpPathName,
      LPCSTR lpPrefixString,
      UINT uUnique,
      LPSTR lpTempFileName
    );


#line 5698 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"























#line 5722 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




__declspec(dllimport)
 
UINT
__stdcall
GetSystemWow64DirectoryA(
      LPSTR lpBuffer,
      UINT uSize
    );
__declspec(dllimport)
 
UINT
__stdcall
GetSystemWow64DirectoryW(
      LPWSTR lpBuffer,
      UINT uSize
    );




#line 5747 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOLEAN
__stdcall
Wow64EnableWow64FsRedirection (
      BOOLEAN Wow64FsEnableRedirection
    );




typedef UINT (__stdcall* PGET_SYSTEM_WOW64_DIRECTORY_A)(  LPSTR lpBuffer,   UINT uSize);
typedef UINT (__stdcall* PGET_SYSTEM_WOW64_DIRECTORY_W)(  LPWSTR lpBuffer,   UINT uSize);





















#line 5782 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 5784 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 5785 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

















#line 5803 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



















#line 5823 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
SetDllDirectoryA(
      LPCSTR lpPathName
    );
__declspec(dllimport)
BOOL
__stdcall
SetDllDirectoryW(
      LPCWSTR lpPathName
    );




#line 5843 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
DWORD
__stdcall
GetDllDirectoryA(
      DWORD nBufferLength,
      LPSTR lpBuffer
    );
__declspec(dllimport)
 
DWORD
__stdcall
GetDllDirectoryW(
      DWORD nBufferLength,
      LPWSTR lpBuffer
    );




#line 5865 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 5867 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"






__declspec(dllimport)
BOOL
__stdcall
SetSearchPathMode (
      DWORD Flags
    );

#line 5881 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family




















#line 5905 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 5907 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family


__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryExA(
          LPCSTR lpTemplateDirectory,
          LPCSTR lpNewDirectory,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryExW(
          LPCWSTR lpTemplateDirectory,
          LPCWSTR lpNewDirectory,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );




#line 5933 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryTransactedA(
      LPCSTR lpTemplateDirectory,
          LPCSTR lpNewDirectory,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes,
          HANDLE hTransaction
    );
__declspec(dllimport)
BOOL
__stdcall
CreateDirectoryTransactedW(
      LPCWSTR lpTemplateDirectory,
          LPCWSTR lpNewDirectory,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes,
          HANDLE hTransaction
    );




#line 5959 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
RemoveDirectoryTransactedA(
      LPCSTR lpPathName,
          HANDLE hTransaction
    );
__declspec(dllimport)
BOOL
__stdcall
RemoveDirectoryTransactedW(
      LPCWSTR lpPathName,
          HANDLE hTransaction
    );




#line 5979 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
DWORD
__stdcall
GetFullPathNameTransactedA(
                 LPCSTR lpFileName,
                 DWORD nBufferLength,
      LPSTR lpBuffer,
     LPSTR *lpFilePart,
                 HANDLE hTransaction
    );
__declspec(dllimport)
 
DWORD
__stdcall
GetFullPathNameTransactedW(
                 LPCWSTR lpFileName,
                 DWORD nBufferLength,
      LPWSTR lpBuffer,
     LPWSTR *lpFilePart,
                 HANDLE hTransaction
    );




#line 6007 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6009 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"







__declspec(dllimport)
BOOL
__stdcall
DefineDosDeviceA(
          DWORD dwFlags,
          LPCSTR lpDeviceName,
      LPCSTR lpTargetPath
    );


#line 6027 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD
__stdcall
QueryDosDeviceA(
      LPCSTR lpDeviceName,
      LPSTR lpTargetPath,
          DWORD ucchMax
    );


#line 6039 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





__declspec(dllimport)
HANDLE
__stdcall
CreateFileTransactedA(
            LPCSTR lpFileName,
            DWORD dwDesiredAccess,
            DWORD dwShareMode,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
            DWORD dwCreationDisposition,
            DWORD dwFlagsAndAttributes,
        HANDLE hTemplateFile,
            HANDLE hTransaction,
        PUSHORT pusMiniVersion,
      PVOID  lpExtendedParameter
    );
__declspec(dllimport)
HANDLE
__stdcall
CreateFileTransactedW(
            LPCWSTR lpFileName,
            DWORD dwDesiredAccess,
            DWORD dwShareMode,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
            DWORD dwCreationDisposition,
            DWORD dwFlagsAndAttributes,
        HANDLE hTemplateFile,
            HANDLE hTransaction,
        PUSHORT pusMiniVersion,
      PVOID  lpExtendedParameter
    );




#line 6079 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6081 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




__declspec(dllimport)
HANDLE
__stdcall
ReOpenFile(
      HANDLE  hOriginalFile,
      DWORD   dwDesiredAccess,
      DWORD   dwShareMode,
      DWORD   dwFlagsAndAttributes
    );

#line 6096 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




__declspec(dllimport)
BOOL
__stdcall
SetFileAttributesTransactedA(
          LPCSTR lpFileName,
          DWORD dwFileAttributes,
          HANDLE hTransaction
    );
__declspec(dllimport)
BOOL
__stdcall
SetFileAttributesTransactedW(
          LPCWSTR lpFileName,
          DWORD dwFileAttributes,
          HANDLE hTransaction
    );




#line 6121 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetFileAttributesTransactedA(
       LPCSTR lpFileName,
       GET_FILEEX_INFO_LEVELS fInfoLevelId,
      LPVOID lpFileInformation,
          HANDLE hTransaction
    );
__declspec(dllimport)
BOOL
__stdcall
GetFileAttributesTransactedW(
       LPCWSTR lpFileName,
       GET_FILEEX_INFO_LEVELS fInfoLevelId,
      LPVOID lpFileInformation,
          HANDLE hTransaction
    );




#line 6145 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6147 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
DWORD
__stdcall
GetCompressedFileSizeA(
       LPCSTR lpFileName,
      LPDWORD  lpFileSizeHigh
    );
__declspec(dllimport)
DWORD
__stdcall
GetCompressedFileSizeW(
       LPCWSTR lpFileName,
      LPDWORD  lpFileSizeHigh
    );




#line 6167 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
DWORD
__stdcall
GetCompressedFileSizeTransactedA(
           LPCSTR lpFileName,
      LPDWORD  lpFileSizeHigh,
           HANDLE hTransaction
    );
__declspec(dllimport)
DWORD
__stdcall
GetCompressedFileSizeTransactedW(
           LPCWSTR lpFileName,
      LPDWORD  lpFileSizeHigh,
           HANDLE hTransaction
    );




#line 6191 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
DeleteFileTransactedA(
          LPCSTR lpFileName,
          HANDLE hTransaction
    );
__declspec(dllimport)
BOOL
__stdcall
DeleteFileTransactedW(
          LPCWSTR lpFileName,
          HANDLE hTransaction
    );




#line 6211 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6213 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6215 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family


















#line 6237 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6239 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family




__declspec(dllimport)
BOOL
__stdcall
CheckNameLegalDOS8Dot3A(
           LPCSTR lpName,
      LPSTR lpOemName,
           DWORD OemNameSize,
      PBOOL pbNameContainsSpaces ,
          PBOOL pbNameLegal
    );
__declspec(dllimport)
BOOL
__stdcall
CheckNameLegalDOS8Dot3W(
           LPCWSTR lpName,
      LPSTR lpOemName,
           DWORD OemNameSize,
      PBOOL pbNameContainsSpaces ,
          PBOOL pbNameLegal
    );




#line 6271 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6273 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6275 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion



#pragma region Desktop Family




__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileTransactedA(
            LPCSTR lpFileName,
            FINDEX_INFO_LEVELS fInfoLevelId,
      LPVOID lpFindFileData,
            FINDEX_SEARCH_OPS fSearchOp,
      LPVOID lpSearchFilter,
            DWORD dwAdditionalFlags,
            HANDLE hTransaction
    );
__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileTransactedW(
            LPCWSTR lpFileName,
            FINDEX_INFO_LEVELS fInfoLevelId,
      LPVOID lpFindFileData,
            FINDEX_SEARCH_OPS fSearchOp,
      LPVOID lpSearchFilter,
            DWORD dwAdditionalFlags,
            HANDLE hTransaction
    );




#line 6313 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6315 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6317 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#line 6320 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
CopyFileA(
      LPCSTR lpExistingFileName,
      LPCSTR lpNewFileName,
      BOOL bFailIfExists
    );
__declspec(dllimport)
BOOL
__stdcall
CopyFileW(
      LPCWSTR lpExistingFileName,
      LPCWSTR lpNewFileName,
      BOOL bFailIfExists
    );




#line 6346 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





















#line 6368 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6370 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion



#pragma region Desktop Family


typedef
DWORD
(__stdcall *LPPROGRESS_ROUTINE)(
          LARGE_INTEGER TotalFileSize,
          LARGE_INTEGER TotalBytesTransferred,
          LARGE_INTEGER StreamSize,
          LARGE_INTEGER StreamBytesTransferred,
          DWORD dwStreamNumber,
          DWORD dwCallbackReason,
          HANDLE hSourceFile,
          HANDLE hDestinationFile,
      LPVOID lpData
    );

__declspec(dllimport)
BOOL
__stdcall
CopyFileExA(
             LPCSTR lpExistingFileName,
             LPCSTR lpNewFileName,
         LPPROGRESS_ROUTINE lpProgressRoutine,
         LPVOID lpData,
    
      LPBOOL pbCancel,
             DWORD dwCopyFlags
    );
__declspec(dllimport)
BOOL
__stdcall
CopyFileExW(
             LPCWSTR lpExistingFileName,
             LPCWSTR lpNewFileName,
         LPPROGRESS_ROUTINE lpProgressRoutine,
         LPVOID lpData,
    
      LPBOOL pbCancel,
             DWORD dwCopyFlags
    );




#line 6420 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
CopyFileTransactedA(
          LPCSTR lpExistingFileName,
          LPCSTR lpNewFileName,
      LPPROGRESS_ROUTINE lpProgressRoutine,
      LPVOID lpData,
      LPBOOL pbCancel,
          DWORD dwCopyFlags,
          HANDLE hTransaction
    );
__declspec(dllimport)
BOOL
__stdcall
CopyFileTransactedW(
          LPCWSTR lpExistingFileName,
          LPCWSTR lpNewFileName,
      LPPROGRESS_ROUTINE lpProgressRoutine,
      LPVOID lpData,
      LPBOOL pbCancel,
          DWORD dwCopyFlags,
          HANDLE hTransaction
    );




#line 6452 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6454 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6456 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family








typedef enum _COPYFILE2_MESSAGE_TYPE {
     COPYFILE2_CALLBACK_NONE = 0,
     COPYFILE2_CALLBACK_CHUNK_STARTED,
     COPYFILE2_CALLBACK_CHUNK_FINISHED,
     COPYFILE2_CALLBACK_STREAM_STARTED,
     COPYFILE2_CALLBACK_STREAM_FINISHED,
     COPYFILE2_CALLBACK_POLL_CONTINUE,
     COPYFILE2_CALLBACK_ERROR,
     COPYFILE2_CALLBACK_MAX,
} COPYFILE2_MESSAGE_TYPE;

typedef enum _COPYFILE2_MESSAGE_ACTION {
    COPYFILE2_PROGRESS_CONTINUE = 0,
    COPYFILE2_PROGRESS_CANCEL,
    COPYFILE2_PROGRESS_STOP,
    COPYFILE2_PROGRESS_QUIET,
    COPYFILE2_PROGRESS_PAUSE,
} COPYFILE2_MESSAGE_ACTION;

typedef enum _COPYFILE2_COPY_PHASE {
    COPYFILE2_PHASE_NONE = 0,
    COPYFILE2_PHASE_PREPARE_SOURCE,
    COPYFILE2_PHASE_PREPARE_DEST,
    COPYFILE2_PHASE_READ_SOURCE,
    COPYFILE2_PHASE_WRITE_DESTINATION,
    COPYFILE2_PHASE_SERVER_COPY,
    COPYFILE2_PHASE_NAMEGRAFT_COPY,
    
    COPYFILE2_PHASE_MAX,
} COPYFILE2_COPY_PHASE;



typedef struct COPYFILE2_MESSAGE {

    COPYFILE2_MESSAGE_TYPE  Type;
    DWORD                   dwPadding;

    union {

        struct {
            DWORD           dwStreamNumber; 
            DWORD           dwReserved;
            HANDLE           hSourceFile; 
            HANDLE           hDestinationFile; 
            ULARGE_INTEGER  uliChunkNumber; 
            ULARGE_INTEGER  uliChunkSize;  
            ULARGE_INTEGER  uliStreamSize; 
            ULARGE_INTEGER  uliTotalFileSize; 
        } ChunkStarted;

        struct {
            DWORD           dwStreamNumber; 
            DWORD           dwFlags;
            HANDLE           hSourceFile; 
            HANDLE           hDestinationFile; 
            ULARGE_INTEGER  uliChunkNumber; 
            ULARGE_INTEGER  uliChunkSize;  
            ULARGE_INTEGER  uliStreamSize; 
            ULARGE_INTEGER  uliStreamBytesTransferred; 
            ULARGE_INTEGER  uliTotalFileSize; 
            ULARGE_INTEGER  uliTotalBytesTransferred; 
        } ChunkFinished;

        struct {
            DWORD           dwStreamNumber;
            DWORD           dwReserved;
            HANDLE           hSourceFile; 
            HANDLE           hDestinationFile; 
            ULARGE_INTEGER  uliStreamSize; 
            ULARGE_INTEGER  uliTotalFileSize; 
        } StreamStarted;

        struct {
            DWORD           dwStreamNumber;
            DWORD           dwReserved;
            HANDLE           hSourceFile; 
            HANDLE           hDestinationFile; 
            ULARGE_INTEGER  uliStreamSize;
            ULARGE_INTEGER  uliStreamBytesTransferred;
            ULARGE_INTEGER  uliTotalFileSize;
            ULARGE_INTEGER  uliTotalBytesTransferred;
        } StreamFinished;

        struct {
            DWORD           dwReserved;
        } PollContinue;

        struct {
            COPYFILE2_COPY_PHASE    CopyPhase;
            DWORD                   dwStreamNumber;
            HRESULT                 hrFailure;
            DWORD                   dwReserved;
            ULARGE_INTEGER          uliChunkNumber;
            ULARGE_INTEGER          uliStreamSize;
            ULARGE_INTEGER          uliStreamBytesTransferred;
            ULARGE_INTEGER          uliTotalFileSize;
            ULARGE_INTEGER          uliTotalBytesTransferred;
        } Error;

    } Info;

} COPYFILE2_MESSAGE;

typedef
COPYFILE2_MESSAGE_ACTION (__stdcall *PCOPYFILE2_PROGRESS_ROUTINE)(
         const COPYFILE2_MESSAGE     *pMessage,
     PVOID                       pvCallbackContext
);

typedef struct COPYFILE2_EXTENDED_PARAMETERS {
  DWORD                         dwSize;
  DWORD                         dwCopyFlags;
  BOOL                          *pfCancel;
  PCOPYFILE2_PROGRESS_ROUTINE   pProgressRoutine;
  PVOID                         pvCallbackContext;
} COPYFILE2_EXTENDED_PARAMETERS;

__declspec(dllimport)
HRESULT
__stdcall
CopyFile2(
         PCWSTR                          pwszExistingFileName,
         PCWSTR                          pwszNewFileName,
     COPYFILE2_EXTENDED_PARAMETERS   *pExtendedParameters
);

#line 6595 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6597 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#line 6600 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#pragma region Desktop Family


__declspec(dllimport)
BOOL
__stdcall
MoveFileA(
      LPCSTR lpExistingFileName,
      LPCSTR lpNewFileName
    );
__declspec(dllimport)
BOOL
__stdcall
MoveFileW(
      LPCWSTR lpExistingFileName,
      LPCWSTR lpNewFileName
    );




#line 6623 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



















#line 6643 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6645 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family


__declspec(dllimport)
BOOL
__stdcall
MoveFileExA(
          LPCSTR lpExistingFileName,
      LPCSTR lpNewFileName,
          DWORD    dwFlags
    );
__declspec(dllimport)
BOOL
__stdcall
MoveFileExW(
          LPCWSTR lpExistingFileName,
      LPCWSTR lpNewFileName,
          DWORD    dwFlags
    );




#line 6671 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6673 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
MoveFileWithProgressA(
          LPCSTR lpExistingFileName,
      LPCSTR lpNewFileName,
      LPPROGRESS_ROUTINE lpProgressRoutine,
      LPVOID lpData,
          DWORD dwFlags
    );
__declspec(dllimport)
BOOL
__stdcall
MoveFileWithProgressW(
          LPCWSTR lpExistingFileName,
      LPCWSTR lpNewFileName,
      LPPROGRESS_ROUTINE lpProgressRoutine,
      LPVOID lpData,
          DWORD dwFlags
    );




#line 6704 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 6705 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


__declspec(dllimport)
BOOL
__stdcall
MoveFileTransactedA(
          LPCSTR lpExistingFileName,
      LPCSTR lpNewFileName,
      LPPROGRESS_ROUTINE lpProgressRoutine,
      LPVOID lpData,
          DWORD dwFlags,
          HANDLE hTransaction
    );
__declspec(dllimport)
BOOL
__stdcall
MoveFileTransactedW(
          LPCWSTR lpExistingFileName,
      LPCWSTR lpNewFileName,
      LPPROGRESS_ROUTINE lpProgressRoutine,
      LPVOID lpData,
          DWORD dwFlags,
          HANDLE hTransaction
    );




#line 6734 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 6735 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6737 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family









#line 6750 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6752 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family





__declspec(dllimport)
BOOL
__stdcall
ReplaceFileA(
            LPCSTR lpReplacedFileName,
            LPCSTR lpReplacementFileName,
        LPCSTR lpBackupFileName,
            DWORD    dwReplaceFlags,
      LPVOID   lpExclude,
      LPVOID  lpReserved
    );
__declspec(dllimport)
BOOL
__stdcall
ReplaceFileW(
            LPCWSTR lpReplacedFileName,
            LPCWSTR lpReplacementFileName,
        LPCWSTR lpBackupFileName,
            DWORD    dwReplaceFlags,
      LPVOID   lpExclude,
      LPVOID  lpReserved
    );




#line 6787 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 6788 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"







__declspec(dllimport)
BOOL
__stdcall
CreateHardLinkA(
            LPCSTR lpFileName,
            LPCSTR lpExistingFileName,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
__declspec(dllimport)
BOOL
__stdcall
CreateHardLinkW(
            LPCWSTR lpFileName,
            LPCWSTR lpExistingFileName,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );




#line 6816 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6818 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"






__declspec(dllimport)
BOOL
__stdcall
CreateHardLinkTransactedA(
            LPCSTR lpFileName,
            LPCSTR lpExistingFileName,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes,
            HANDLE hTransaction
    );
__declspec(dllimport)
BOOL
__stdcall
CreateHardLinkTransactedW(
            LPCWSTR lpFileName,
            LPCWSTR lpExistingFileName,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes,
            HANDLE hTransaction
    );




#line 6847 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 6849 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"








typedef enum _STREAM_INFO_LEVELS {

    FindStreamInfoStandard,
    FindStreamInfoMaxInfoLevel

} STREAM_INFO_LEVELS;

typedef struct _WIN32_FIND_STREAM_DATA {

    LARGE_INTEGER StreamSize;
    WCHAR cStreamName[ 260 + 36 ];

} WIN32_FIND_STREAM_DATA, *PWIN32_FIND_STREAM_DATA;

__declspec(dllimport)
HANDLE
__stdcall
FindFirstStreamW(
            LPCWSTR lpFileName,
            STREAM_INFO_LEVELS InfoLevel,
      LPVOID lpFindStreamData,
      DWORD dwFlags
    );


__declspec(dllimport)
HANDLE
__stdcall
FindFirstStreamTransactedW (
            LPCWSTR lpFileName,
            STREAM_INFO_LEVELS InfoLevel,
      LPVOID lpFindStreamData,
      DWORD dwFlags,
            HANDLE hTransaction
    );
#line 6893 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
FindNextStreamW(
       HANDLE hFindStream,
      LPVOID lpFindStreamData
    );
#line 6902 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileNameW (
         LPCWSTR lpFileName,
         DWORD dwFlags,
      LPDWORD StringLength,
      PWSTR LinkName
    );

__declspec(dllimport)
BOOL
__stdcall
FindNextFileNameW (
         HANDLE hFindStream,
      LPDWORD StringLength,
      PWSTR LinkName
    );

__declspec(dllimport)
HANDLE
__stdcall
FindFirstFileNameTransactedW (
          LPCWSTR lpFileName,
          DWORD dwFlags,
       LPDWORD StringLength,
      PWSTR LinkName,
      HANDLE hTransaction
    );

#line 6936 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
HANDLE
__stdcall
CreateNamedPipeA(
          LPCSTR lpName,
          DWORD dwOpenMode,
          DWORD dwPipeMode,
          DWORD nMaxInstances,
          DWORD nOutBufferSize,
          DWORD nInBufferSize,
          DWORD nDefaultTimeOut,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );


#line 6953 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeHandleStateA(
           HANDLE hNamedPipe,
      LPDWORD lpState,
      LPDWORD lpCurInstances,
      LPDWORD lpMaxCollectionCount,
      LPDWORD lpCollectDataTimeout,
      LPSTR lpUserName,
           DWORD nMaxUserNameSize
    );
__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeHandleStateW(
           HANDLE hNamedPipe,
      LPDWORD lpState,
      LPDWORD lpCurInstances,
      LPDWORD lpMaxCollectionCount,
      LPDWORD lpCollectDataTimeout,
      LPWSTR lpUserName,
           DWORD nMaxUserNameSize
    );




#line 6983 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
CallNamedPipeA(
       LPCSTR lpNamedPipeName,
      LPVOID lpInBuffer,
       DWORD nInBufferSize,
      LPVOID lpOutBuffer,
       DWORD nOutBufferSize,
      LPDWORD lpBytesRead,
       DWORD nTimeOut
    );
__declspec(dllimport)
BOOL
__stdcall
CallNamedPipeW(
       LPCWSTR lpNamedPipeName,
      LPVOID lpInBuffer,
       DWORD nInBufferSize,
      LPVOID lpOutBuffer,
       DWORD nOutBufferSize,
      LPDWORD lpBytesRead,
       DWORD nTimeOut
    );




#line 7013 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
WaitNamedPipeA(
      LPCSTR lpNamedPipeName,
      DWORD nTimeOut
    );


#line 7024 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeClientComputerNameA(
      HANDLE Pipe,
       LPSTR ClientComputerName,
      ULONG ClientComputerNameLength
    );



#line 7040 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeClientProcessId(
      HANDLE Pipe,
      PULONG ClientProcessId
    );

__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeClientSessionId(
      HANDLE Pipe,
      PULONG ClientSessionId
    );

__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeServerProcessId(
      HANDLE Pipe,
      PULONG ServerProcessId
    );

__declspec(dllimport)
BOOL
__stdcall
GetNamedPipeServerSessionId(
      HANDLE Pipe,
      PULONG ServerSessionId
    );

#line 7074 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
SetVolumeLabelA(
      LPCSTR lpRootPathName,
      LPCSTR lpVolumeName
    );
__declspec(dllimport)
BOOL
__stdcall
SetVolumeLabelW(
      LPCWSTR lpRootPathName,
      LPCWSTR lpVolumeName
    );




#line 7094 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
void
__stdcall
SetFileApisToOEM( void );

__declspec(dllimport)
void
__stdcall
SetFileApisToANSI( void );

__declspec(dllimport)
BOOL
__stdcall
AreFileApisANSI( void );

__declspec(dllimport)
BOOL
__stdcall
GetVolumeInformationA(
       LPCSTR lpRootPathName,
      LPSTR lpVolumeNameBuffer,
           DWORD nVolumeNameSize,
      LPDWORD lpVolumeSerialNumber,
      LPDWORD lpMaximumComponentLength,
      LPDWORD lpFileSystemFlags,
      LPSTR lpFileSystemNameBuffer,
           DWORD nFileSystemNameSize
    );



#line 7127 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
SetFileBandwidthReservation(
       HANDLE  hFile,
       DWORD   nPeriodMilliseconds,
       DWORD   nBytesPerPeriod,
       BOOL    bDiscardable,
      LPDWORD lpTransferSize,
      LPDWORD lpNumOutstandingRequests
    );

__declspec(dllimport)
BOOL
__stdcall
GetFileBandwidthReservation(
       HANDLE  hFile,
      LPDWORD lpPeriodMilliseconds,
      LPDWORD lpBytesPerPeriod,
      LPBOOL  pDiscardable,
      LPDWORD lpTransferSize,
      LPDWORD lpNumOutstandingRequests
    );

#line 7155 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





__declspec(dllimport)
BOOL
__stdcall
ClearEventLogA (
          HANDLE hEventLog,
      LPCSTR lpBackupFileName
    );
__declspec(dllimport)
BOOL
__stdcall
ClearEventLogW (
          HANDLE hEventLog,
      LPCWSTR lpBackupFileName
    );




#line 7179 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
BackupEventLogA (
      HANDLE hEventLog,
      LPCSTR lpBackupFileName
    );
__declspec(dllimport)
BOOL
__stdcall
BackupEventLogW (
      HANDLE hEventLog,
      LPCWSTR lpBackupFileName
    );




#line 7199 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
CloseEventLog (
      HANDLE hEventLog
    );

__declspec(dllimport)
BOOL
__stdcall
DeregisterEventSource (
      HANDLE hEventLog
    );

__declspec(dllimport)
BOOL
__stdcall
NotifyChangeEventLog(
      HANDLE  hEventLog,
      HANDLE  hEvent
    );

__declspec(dllimport)
BOOL
__stdcall
GetNumberOfEventLogRecords (
       HANDLE hEventLog,
      PDWORD NumberOfRecords
    );

__declspec(dllimport)
BOOL
__stdcall
GetOldestEventLogRecord (
       HANDLE hEventLog,
      PDWORD OldestRecord
    );

__declspec(dllimport)
HANDLE
__stdcall
OpenEventLogA (
      LPCSTR lpUNCServerName,
          LPCSTR lpSourceName
    );
__declspec(dllimport)
HANDLE
__stdcall
OpenEventLogW (
      LPCWSTR lpUNCServerName,
          LPCWSTR lpSourceName
    );




#line 7257 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
HANDLE
__stdcall
RegisterEventSourceA (
      LPCSTR lpUNCServerName,
          LPCSTR lpSourceName
    );
__declspec(dllimport)
HANDLE
__stdcall
RegisterEventSourceW (
      LPCWSTR lpUNCServerName,
          LPCWSTR lpSourceName
    );




#line 7277 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
HANDLE
__stdcall
OpenBackupEventLogA (
      LPCSTR lpUNCServerName,
          LPCSTR lpFileName
    );
__declspec(dllimport)
HANDLE
__stdcall
OpenBackupEventLogW (
      LPCWSTR lpUNCServerName,
          LPCWSTR lpFileName
    );




#line 7297 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
ReadEventLogA (
       HANDLE     hEventLog,
       DWORD      dwReadFlags,
       DWORD      dwRecordOffset,
      LPVOID     lpBuffer,
       DWORD      nNumberOfBytesToRead,
      DWORD      *pnBytesRead,
      DWORD      *pnMinNumberOfBytesNeeded
    );
__declspec(dllimport)
BOOL
__stdcall
ReadEventLogW (
       HANDLE     hEventLog,
       DWORD      dwReadFlags,
       DWORD      dwRecordOffset,
      LPVOID     lpBuffer,
       DWORD      nNumberOfBytesToRead,
      DWORD      *pnBytesRead,
      DWORD      *pnMinNumberOfBytesNeeded
    );




#line 7327 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
ReportEventA (
          HANDLE     hEventLog,
          WORD       wType,
          WORD       wCategory,
          DWORD      dwEventID,
      PSID       lpUserSid,
          WORD       wNumStrings,
          DWORD      dwDataSize,
      LPCSTR *lpStrings,
      LPVOID lpRawData
    );
__declspec(dllimport)
BOOL
__stdcall
ReportEventW (
          HANDLE     hEventLog,
          WORD       wType,
          WORD       wCategory,
          DWORD      dwEventID,
      PSID       lpUserSid,
          WORD       wNumStrings,
          DWORD      dwDataSize,
      LPCWSTR *lpStrings,
      LPVOID lpRawData
    );




#line 7361 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




typedef struct _EVENTLOG_FULL_INFORMATION
{
    DWORD    dwFull;
}
EVENTLOG_FULL_INFORMATION, *LPEVENTLOG_FULL_INFORMATION;

__declspec(dllimport)
BOOL
__stdcall
GetEventLogInformation (
       HANDLE     hEventLog,
       DWORD      dwInfoLevel,
      LPVOID lpBuffer,
       DWORD      cbBufSize,
      LPDWORD    pcbBytesNeeded
    );








typedef ULONG OPERATION_ID;





typedef struct _OPERATION_START_PARAMETERS {
    ULONG Version;
    OPERATION_ID OperationId;
    ULONG Flags;
} OPERATION_START_PARAMETERS, *POPERATION_START_PARAMETERS;







typedef struct _OPERATION_END_PARAMETERS {
    ULONG Version;
    OPERATION_ID OperationId;
    ULONG Flags;
} OPERATION_END_PARAMETERS, *POPERATION_END_PARAMETERS;



__declspec(dllimport)
BOOL
__stdcall
OperationStart (
      OPERATION_START_PARAMETERS* OperationStartParams
    );

__declspec(dllimport)
BOOL
__stdcall
OperationEnd (
      OPERATION_END_PARAMETERS* OperationEndParams
    );

#line 7430 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"







__declspec(dllimport)
BOOL
__stdcall
AccessCheckAndAuditAlarmA (
          LPCSTR SubsystemName,
      LPVOID HandleId,
          LPSTR ObjectTypeName,
      LPSTR ObjectName,
          PSECURITY_DESCRIPTOR SecurityDescriptor,
          DWORD DesiredAccess,
          PGENERIC_MAPPING GenericMapping,
          BOOL ObjectCreation,
         LPDWORD GrantedAccess,
         LPBOOL AccessStatus,
         LPBOOL pfGenerateOnClose
    );


#line 7456 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeAndAuditAlarmA (
          LPCSTR SubsystemName,
          LPVOID HandleId,
          LPCSTR ObjectTypeName,
      LPCSTR ObjectName,
          PSECURITY_DESCRIPTOR SecurityDescriptor,
      PSID PrincipalSelfSid,
          DWORD DesiredAccess,
          AUDIT_EVENT_TYPE AuditType,
          DWORD Flags,
      POBJECT_TYPE_LIST ObjectTypeList,
          DWORD ObjectTypeListLength,
          PGENERIC_MAPPING GenericMapping,
          BOOL ObjectCreation,
         LPDWORD GrantedAccess,
         LPBOOL AccessStatus,
         LPBOOL pfGenerateOnClose
    );


#line 7483 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultListAndAuditAlarmA (
          LPCSTR SubsystemName,
          LPVOID HandleId,
          LPCSTR ObjectTypeName,
      LPCSTR ObjectName,
          PSECURITY_DESCRIPTOR SecurityDescriptor,
      PSID PrincipalSelfSid,
          DWORD DesiredAccess,
          AUDIT_EVENT_TYPE AuditType,
          DWORD Flags,
      POBJECT_TYPE_LIST ObjectTypeList,
          DWORD ObjectTypeListLength,
          PGENERIC_MAPPING GenericMapping,
          BOOL ObjectCreation,
            LPDWORD GrantedAccess,
            LPDWORD AccessStatusList,
         LPBOOL pfGenerateOnClose
    );


#line 7508 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
AccessCheckByTypeResultListAndAuditAlarmByHandleA (
          LPCSTR SubsystemName,
          LPVOID HandleId,
          HANDLE ClientToken,
          LPCSTR ObjectTypeName,
      LPCSTR ObjectName,
          PSECURITY_DESCRIPTOR SecurityDescriptor,
      PSID PrincipalSelfSid,
          DWORD DesiredAccess,
          AUDIT_EVENT_TYPE AuditType,
          DWORD Flags,
      POBJECT_TYPE_LIST ObjectTypeList,
          DWORD ObjectTypeListLength,
          PGENERIC_MAPPING GenericMapping,
          BOOL ObjectCreation,
            LPDWORD GrantedAccess,
            LPDWORD AccessStatusList,
         LPBOOL pfGenerateOnClose
    );


#line 7534 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 7535 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
ObjectOpenAuditAlarmA (
          LPCSTR SubsystemName,
          LPVOID HandleId,
          LPSTR ObjectTypeName,
      LPSTR ObjectName,
          PSECURITY_DESCRIPTOR pSecurityDescriptor,
          HANDLE ClientToken,
          DWORD DesiredAccess,
          DWORD GrantedAccess,
      PPRIVILEGE_SET Privileges,
          BOOL ObjectCreation,
          BOOL AccessGranted,
         LPBOOL GenerateOnClose
    );


#line 7556 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
ObjectPrivilegeAuditAlarmA (
      LPCSTR SubsystemName,
      LPVOID HandleId,
      HANDLE ClientToken,
      DWORD DesiredAccess,
      PPRIVILEGE_SET Privileges,
      BOOL AccessGranted
    );


#line 7571 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
ObjectCloseAuditAlarmA (
      LPCSTR SubsystemName,
      LPVOID HandleId,
      BOOL GenerateOnClose
    );


#line 7583 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
ObjectDeleteAuditAlarmA (
      LPCSTR SubsystemName,
      LPVOID HandleId,
      BOOL GenerateOnClose
    );


#line 7595 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
PrivilegedServiceAuditAlarmA (
      LPCSTR SubsystemName,
      LPCSTR ServiceName,
      HANDLE ClientToken,
      PPRIVILEGE_SET Privileges,
      BOOL AccessGranted
    );


#line 7609 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


__declspec(dllimport)
BOOL
__stdcall
AddConditionalAce (
      PACL pAcl,
         DWORD dwAceRevision,
         DWORD AceFlags,
         UCHAR AceType,
         DWORD AccessMask,
         PSID pSid,
         PWCHAR ConditionStr,
      DWORD *ReturnLength
    );
#line 7625 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
SetFileSecurityA (
      LPCSTR lpFileName,
      SECURITY_INFORMATION SecurityInformation,
      PSECURITY_DESCRIPTOR pSecurityDescriptor
    );


#line 7637 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetFileSecurityA (
       LPCSTR lpFileName,
       SECURITY_INFORMATION RequestedInformation,
      PSECURITY_DESCRIPTOR pSecurityDescriptor,
       DWORD nLength,
      LPDWORD lpnLengthNeeded
    );


#line 7651 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


__declspec(dllimport)
BOOL
__stdcall
ReadDirectoryChangesW(
             HANDLE hDirectory,
      LPVOID lpBuffer,
             DWORD nBufferLength,
             BOOL bWatchSubtree,
             DWORD dwNotifyFilter,
        LPDWORD lpBytesReturned,
      LPOVERLAPPED lpOverlapped,
         LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );
#line 7667 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
  
LPVOID
__stdcall
MapViewOfFileExNuma(
          HANDLE hFileMappingObject,
          DWORD dwDesiredAccess,
          DWORD dwFileOffsetHigh,
          DWORD dwFileOffsetLow,
          SIZE_T dwNumberOfBytesToMap,
      LPVOID lpBaseAddress,
          DWORD nndPreferred
    );

#line 7685 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
IsBadReadPtr(
      const void *lp,
          UINT_PTR ucb
    );

__declspec(dllimport)
BOOL
__stdcall
IsBadWritePtr(
      LPVOID lp,
          UINT_PTR ucb
    );

__declspec(dllimport)
BOOL
__stdcall
IsBadHugeReadPtr(
      const void *lp,
          UINT_PTR ucb
    );

__declspec(dllimport)
BOOL
__stdcall
IsBadHugeWritePtr(
      LPVOID lp,
          UINT_PTR ucb
    );

__declspec(dllimport)
BOOL
__stdcall
IsBadCodePtr(
      FARPROC lpfn
    );

__declspec(dllimport)
BOOL
__stdcall
IsBadStringPtrA(
      LPCSTR lpsz,
          UINT_PTR ucchMax
    );
__declspec(dllimport)
BOOL
__stdcall
IsBadStringPtrW(
      LPCWSTR lpsz,
          UINT_PTR ucchMax
    );




#line 7744 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
  BOOL
__stdcall
LookupAccountSidA(
      LPCSTR lpSystemName,
      PSID Sid,
      LPSTR Name,
       LPDWORD cchName,
      LPSTR ReferencedDomainName,
      LPDWORD cchReferencedDomainName,
      PSID_NAME_USE peUse
    );
__declspec(dllimport)
  BOOL
__stdcall
LookupAccountSidW(
      LPCWSTR lpSystemName,
      PSID Sid,
      LPWSTR Name,
       LPDWORD cchName,
      LPWSTR ReferencedDomainName,
      LPDWORD cchReferencedDomainName,
      PSID_NAME_USE peUse
    );




#line 7774 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
  BOOL
__stdcall
LookupAccountNameA(
      LPCSTR lpSystemName,
          LPCSTR lpAccountName,
      PSID Sid,
       LPDWORD cbSid,
      LPSTR ReferencedDomainName,
       LPDWORD cchReferencedDomainName,
         PSID_NAME_USE peUse
    );
__declspec(dllimport)
  BOOL
__stdcall
LookupAccountNameW(
      LPCWSTR lpSystemName,
          LPCWSTR lpAccountName,
      PSID Sid,
       LPDWORD cbSid,
      LPWSTR ReferencedDomainName,
       LPDWORD cchReferencedDomainName,
         PSID_NAME_USE peUse
    );




#line 7804 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
  BOOL
__stdcall
LookupAccountNameLocalA(
          LPCSTR lpAccountName,
      PSID Sid,
       LPDWORD cbSid,
      LPSTR ReferencedDomainName,
       LPDWORD cchReferencedDomainName,
         PSID_NAME_USE peUse
    );
__declspec(dllimport)
  BOOL
__stdcall
LookupAccountNameLocalW(
          LPCWSTR lpAccountName,
      PSID Sid,
       LPDWORD cbSid,
      LPWSTR ReferencedDomainName,
       LPDWORD cchReferencedDomainName,
         PSID_NAME_USE peUse
    );




#line 7834 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
  BOOL
__stdcall
LookupAccountSidLocalA(
      PSID Sid,
      LPSTR Name,
       LPDWORD cchName,
      LPSTR ReferencedDomainName,
      LPDWORD cchReferencedDomainName,
      PSID_NAME_USE peUse
    );
__declspec(dllimport)
  BOOL
__stdcall
LookupAccountSidLocalW(
      PSID Sid,
      LPWSTR Name,
       LPDWORD cchName,
      LPWSTR ReferencedDomainName,
      LPDWORD cchReferencedDomainName,
      PSID_NAME_USE peUse
    );




#line 7862 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"























#line 7886 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
LookupPrivilegeValueA(
      LPCSTR lpSystemName,
          LPCSTR lpName,
         PLUID   lpLuid
    );
__declspec(dllimport)
BOOL
__stdcall
LookupPrivilegeValueW(
      LPCWSTR lpSystemName,
          LPCWSTR lpName,
         PLUID   lpLuid
    );




#line 7908 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
  BOOL
__stdcall
LookupPrivilegeNameA(
      LPCSTR lpSystemName,
          PLUID   lpLuid,
      LPSTR lpName,
       LPDWORD cchName
    );
__declspec(dllimport)
  BOOL
__stdcall
LookupPrivilegeNameW(
      LPCWSTR lpSystemName,
          PLUID   lpLuid,
      LPWSTR lpName,
       LPDWORD cchName
    );




#line 7932 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
  BOOL
__stdcall
LookupPrivilegeDisplayNameA(
      LPCSTR lpSystemName,
          LPCSTR lpName,
      LPSTR lpDisplayName,
       LPDWORD cchDisplayName,
         LPDWORD lpLanguageId
    );
__declspec(dllimport)
  BOOL
__stdcall
LookupPrivilegeDisplayNameW(
      LPCWSTR lpSystemName,
          LPCWSTR lpName,
      LPWSTR lpDisplayName,
       LPDWORD cchDisplayName,
         LPDWORD lpLanguageId
    );




#line 7958 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
BuildCommDCBA(
       LPCSTR lpDef,
      LPDCB lpDCB
    );
__declspec(dllimport)
BOOL
__stdcall
BuildCommDCBW(
       LPCWSTR lpDef,
      LPDCB lpDCB
    );




#line 7978 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
BuildCommDCBAndTimeoutsA(
       LPCSTR lpDef,
      LPDCB lpDCB,
      LPCOMMTIMEOUTS lpCommTimeouts
    );
__declspec(dllimport)
BOOL
__stdcall
BuildCommDCBAndTimeoutsW(
       LPCWSTR lpDef,
      LPDCB lpDCB,
      LPCOMMTIMEOUTS lpCommTimeouts
    );




#line 8000 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
CommConfigDialogA(
          LPCSTR lpszName,
      HWND hWnd,
       LPCOMMCONFIG lpCC
    );
__declspec(dllimport)
BOOL
__stdcall
CommConfigDialogW(
          LPCWSTR lpszName,
      HWND hWnd,
       LPCOMMCONFIG lpCC
    );




#line 8022 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetDefaultCommConfigA(
         LPCSTR lpszName,
      LPCOMMCONFIG lpCC,
      LPDWORD lpdwSize
    );
__declspec(dllimport)
BOOL
__stdcall
GetDefaultCommConfigW(
         LPCWSTR lpszName,
      LPCOMMCONFIG lpCC,
      LPDWORD lpdwSize
    );




#line 8044 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
SetDefaultCommConfigA(
      LPCSTR lpszName,
      LPCOMMCONFIG lpCC,
      DWORD dwSize
    );
__declspec(dllimport)
BOOL
__stdcall
SetDefaultCommConfigW(
      LPCWSTR lpszName,
      LPCOMMCONFIG lpCC,
      DWORD dwSize
    );




#line 8066 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





#line 8072 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
BOOL
__stdcall
GetComputerNameA (
      LPSTR lpBuffer,
      LPDWORD nSize
    );
__declspec(dllimport)
 
BOOL
__stdcall
GetComputerNameW (
      LPWSTR lpBuffer,
      LPDWORD nSize
    );




#line 8094 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
SetComputerNameA (
      LPCSTR lpComputerName
    );
__declspec(dllimport)
BOOL
__stdcall
SetComputerNameW (
      LPCWSTR lpComputerName
    );




#line 8112 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




__declspec(dllimport)
BOOL
__stdcall
SetComputerNameExA (
      COMPUTER_NAME_FORMAT NameType,
      LPCTSTR lpBuffer
    );


#line 8126 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


__declspec(dllimport)
 
BOOL
__stdcall
DnsHostnameToComputerNameA (
         LPCSTR Hostname,
      LPSTR ComputerName,
      LPDWORD nSize
    );
__declspec(dllimport)
 
BOOL
__stdcall
DnsHostnameToComputerNameW (
         LPCWSTR Hostname,
      LPWSTR ComputerName,
      LPDWORD nSize
    );




#line 8151 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 8153 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetUserNameA (
      LPSTR lpBuffer,
      LPDWORD pcbBuffer
    );
__declspec(dllimport)
BOOL
__stdcall
GetUserNameW (
      LPWSTR lpBuffer,
      LPDWORD pcbBuffer
    );




#line 8173 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"













#line 8187 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





#line 8193 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


#line 8196 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


#line 8199 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
LogonUserA (
             LPCSTR lpszUsername,
         LPCSTR lpszDomain,
         LPCSTR lpszPassword,
             DWORD dwLogonType,
             DWORD dwLogonProvider,
     PHANDLE phToken
    );
__declspec(dllimport)
BOOL
__stdcall
LogonUserW (
             LPCWSTR lpszUsername,
         LPCWSTR lpszDomain,
         LPCWSTR lpszPassword,
             DWORD dwLogonType,
             DWORD dwLogonProvider,
     PHANDLE phToken
    );




#line 8229 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
LogonUserExA (
                 LPCSTR lpszUsername,
             LPCSTR lpszDomain,
             LPCSTR lpszPassword,
                 DWORD dwLogonType,
                 DWORD dwLogonProvider,
     PHANDLE phToken,
     PSID  *ppLogonSid,
     PVOID *ppProfileBuffer,
            LPDWORD pdwProfileLength,
            PQUOTA_LIMITS pQuotaLimits
    );
__declspec(dllimport)
BOOL
__stdcall
LogonUserExW (
                 LPCWSTR lpszUsername,
             LPCWSTR lpszDomain,
             LPCWSTR lpszPassword,
                 DWORD dwLogonType,
                 DWORD dwLogonProvider,
     PHANDLE phToken,
     PSID  *ppLogonSid,
     PVOID *ppProfileBuffer,
            LPDWORD pdwProfileLength,
            PQUOTA_LIMITS pQuotaLimits
    );




#line 8265 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





#line 8271 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
CreateProcessAsUserA (
         HANDLE hToken,
         LPCSTR lpApplicationName,
      LPSTR lpCommandLine,
         LPSECURITY_ATTRIBUTES lpProcessAttributes,
         LPSECURITY_ATTRIBUTES lpThreadAttributes,
             BOOL bInheritHandles,
             DWORD dwCreationFlags,
         LPVOID lpEnvironment,
         LPCSTR lpCurrentDirectory,
             LPSTARTUPINFOA lpStartupInfo,
            LPPROCESS_INFORMATION lpProcessInformation
    );


#line 8291 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"











__declspec(dllimport)
  BOOL
__stdcall
CreateProcessWithLogonW(
             LPCWSTR lpUsername,
         LPCWSTR lpDomain,
             LPCWSTR lpPassword,
             DWORD dwLogonFlags,
         LPCWSTR lpApplicationName,
      LPWSTR lpCommandLine,
             DWORD dwCreationFlags,
         LPVOID lpEnvironment,
         LPCWSTR lpCurrentDirectory,
             LPSTARTUPINFOW lpStartupInfo,
            LPPROCESS_INFORMATION lpProcessInformation
      );

__declspec(dllimport)
  BOOL
__stdcall
CreateProcessWithTokenW(
             HANDLE hToken,
             DWORD dwLogonFlags,
         LPCWSTR lpApplicationName,
      LPWSTR lpCommandLine,
             DWORD dwCreationFlags,
         LPVOID lpEnvironment,
         LPCWSTR lpCurrentDirectory,
             LPSTARTUPINFOW lpStartupInfo,
            LPPROCESS_INFORMATION lpProcessInformation
      );

#line 8335 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
IsTokenUntrusted(
      HANDLE TokenHandle
    );







__declspec(dllimport)
BOOL
__stdcall
RegisterWaitForSingleObject(
     PHANDLE phNewWaitObject,
             HANDLE hObject,
             WAITORTIMERCALLBACK Callback,
         PVOID Context,
             ULONG dwMilliseconds,
             ULONG dwFlags
    );

__declspec(dllimport)
 
BOOL
__stdcall
UnregisterWait(
      HANDLE WaitHandle
    );

__declspec(dllimport)
BOOL
__stdcall
BindIoCompletionCallback (
      HANDLE FileHandle,
      LPOVERLAPPED_COMPLETION_ROUTINE Function,
      ULONG Flags
    );

__declspec(dllimport)
HANDLE
__stdcall
SetTimerQueueTimer(
      HANDLE TimerQueue,
          WAITORTIMERCALLBACK Callback,
      PVOID Parameter,
          DWORD DueTime,
          DWORD Period,
          BOOL PreferIo
    );

__declspec(dllimport)
 
BOOL
__stdcall
CancelTimerQueueTimer(
      HANDLE TimerQueue,
          HANDLE Timer
    );

__declspec(dllimport)
 
BOOL
__stdcall
DeleteTimerQueue(
      HANDLE TimerQueue
    );





__forceinline
void
InitializeThreadpoolEnvironment(
      PTP_CALLBACK_ENVIRON pcbe
    )
{
    TpInitializeCallbackEnviron(pcbe);
}

__forceinline
void
SetThreadpoolCallbackPool(
      PTP_CALLBACK_ENVIRON pcbe,
         PTP_POOL             ptpp
    )
{
    TpSetCallbackThreadpool(pcbe, ptpp);
}

__forceinline
void
SetThreadpoolCallbackCleanupGroup(
       PTP_CALLBACK_ENVIRON              pcbe,
          PTP_CLEANUP_GROUP                 ptpcg,
      PTP_CLEANUP_GROUP_CANCEL_CALLBACK pfng
    )
{
    TpSetCallbackCleanupGroup(pcbe, ptpcg, pfng);
}

__forceinline
void
SetThreadpoolCallbackRunsLong(
      PTP_CALLBACK_ENVIRON pcbe
    )
{
    TpSetCallbackLongFunction(pcbe);
}

__forceinline
void
SetThreadpoolCallbackLibrary(
      PTP_CALLBACK_ENVIRON pcbe,
         PVOID                mod
    )
{
    TpSetCallbackRaceWithDll(pcbe, mod);
}



__forceinline
void
SetThreadpoolCallbackPriority(
      PTP_CALLBACK_ENVIRON pcbe,
         TP_CALLBACK_PRIORITY Priority
    )
{
    TpSetCallbackPriority(pcbe, Priority);
}

#line 8473 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__forceinline
void
SetThreadpoolCallbackPersistent(
      PTP_CALLBACK_ENVIRON pcbe
    )
{
    TpSetCallbackPersistent(pcbe);
}

__forceinline
void
DestroyThreadpoolEnvironment(
      PTP_CALLBACK_ENVIRON pcbe
    )
{
    TpDestroyCallbackEnviron(pcbe);
}

#line 8493 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





__declspec(dllimport)
 
HANDLE
__stdcall
CreatePrivateNamespaceA(
      LPSECURITY_ATTRIBUTES lpPrivateNamespaceAttributes,
          LPVOID lpBoundaryDescriptor,
          LPCSTR lpAliasPrefix
    );





#line 8513 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
HANDLE
__stdcall
OpenPrivateNamespaceA(
          LPVOID lpBoundaryDescriptor,
          LPCSTR lpAliasPrefix
    );





#line 8528 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"






__declspec(dllimport)
 
HANDLE
__stdcall
CreateBoundaryDescriptorA(
      LPCSTR Name,
      ULONG Flags
    );





#line 8548 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


__declspec(dllimport)
BOOL
__stdcall
AddIntegrityLabelToBoundaryDescriptor(
      HANDLE * BoundaryDescriptor,
      PSID IntegrityLabel
    );


#line 8560 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 8562 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
















typedef struct tagHW_PROFILE_INFOA {
    DWORD  dwDockInfo;
    CHAR   szHwProfileGuid[39];
    CHAR   szHwProfileName[80];
} HW_PROFILE_INFOA, *LPHW_PROFILE_INFOA;
typedef struct tagHW_PROFILE_INFOW {
    DWORD  dwDockInfo;
    WCHAR  szHwProfileGuid[39];
    WCHAR  szHwProfileName[80];
} HW_PROFILE_INFOW, *LPHW_PROFILE_INFOW;




typedef HW_PROFILE_INFOA HW_PROFILE_INFO;
typedef LPHW_PROFILE_INFOA LPHW_PROFILE_INFO;
#line 8595 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


__declspec(dllimport)
BOOL
__stdcall
GetCurrentHwProfileA (
      LPHW_PROFILE_INFOA  lpHwProfileInfo
    );
__declspec(dllimport)
BOOL
__stdcall
GetCurrentHwProfileW (
      LPHW_PROFILE_INFOW  lpHwProfileInfo
    );




#line 8614 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 8615 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
VerifyVersionInfoA(
      LPOSVERSIONINFOEXA lpVersionInformation,
         DWORD dwTypeMask,
         DWORDLONG dwlConditionMask
    );
__declspec(dllimport)
BOOL
__stdcall
VerifyVersionInfoW(
      LPOSVERSIONINFOEXW lpVersionInformation,
         DWORD dwTypeMask,
         DWORDLONG dwlConditionMask
    );




#line 8637 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


#line 8640 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion





#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winerror.h"












#pragma once
#line 15 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winerror.h"





























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 21901 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winerror.h"



















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 25921 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winerror.h"


__forceinline HRESULT HRESULT_FROM_WIN32(unsigned long x) { return (HRESULT)(x) <= 0 ? (HRESULT)(x) : (HRESULT) (((x) & 0x0000FFFF) | (7 << 16) | 0x80000000);}


#line 25927 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winerror.h"










































#line 25970 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winerror.h"


























































































































































































#line 26157 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winerror.h"





































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 
 
 
 
 


















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 45002 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winerror.h"




































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 52719 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\winerror.h"

#line 8647 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"
 










#pragma once
#line 14 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"




#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apiset.h"

















































































































































































#line 19 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\apisetcconv.h"






























































































#line 20 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"











#line 32 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"


extern "C" {
#line 36 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"



#pragma region Application Family







typedef struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
} TIME_ZONE_INFORMATION, *PTIME_ZONE_INFORMATION, *LPTIME_ZONE_INFORMATION;

typedef struct _TIME_DYNAMIC_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
    WCHAR TimeZoneKeyName[ 128 ];
    BOOLEAN DynamicDaylightTimeDisabled;
} DYNAMIC_TIME_ZONE_INFORMATION, *PDYNAMIC_TIME_ZONE_INFORMATION;

__declspec(dllimport)
 
BOOL
__stdcall
SystemTimeToTzSpecificLocalTime(
      const TIME_ZONE_INFORMATION * lpTimeZoneInformation,
      const SYSTEMTIME * lpUniversalTime,
      LPSYSTEMTIME lpLocalTime
    );


__declspec(dllimport)
 
BOOL
__stdcall
TzSpecificLocalTimeToSystemTime(
      const TIME_ZONE_INFORMATION * lpTimeZoneInformation,
      const SYSTEMTIME * lpLocalTime,
      LPSYSTEMTIME lpUniversalTime
    );


__declspec(dllimport)
 
BOOL
__stdcall
FileTimeToSystemTime(
      const FILETIME * lpFileTime,
      LPSYSTEMTIME lpSystemTime
    );


__declspec(dllimport)
 
BOOL
__stdcall
SystemTimeToFileTime(
      const SYSTEMTIME * lpSystemTime,
      LPFILETIME lpFileTime
    );


__declspec(dllimport)
 
DWORD
__stdcall
GetTimeZoneInformation(
      LPTIME_ZONE_INFORMATION lpTimeZoneInformation
    );


#line 121 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"
#pragma endregion

#pragma region Desktop Family



__declspec(dllimport)
BOOL
__stdcall
SetTimeZoneInformation(
      const TIME_ZONE_INFORMATION * lpTimeZoneInformation
    );





__declspec(dllimport)
BOOL
__stdcall
SetDynamicTimeZoneInformation(
      const DYNAMIC_TIME_ZONE_INFORMATION * lpTimeZoneInformation
    );


#line 147 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"

#line 149 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"
#pragma endregion

#pragma region Application Family






__declspec(dllimport)
 
DWORD
__stdcall
GetDynamicTimeZoneInformation(
      PDYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation
    );


#line 168 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"




 
BOOL
__stdcall
GetTimeZoneInformationForYear(
      USHORT wYear,
      PDYNAMIC_TIME_ZONE_INFORMATION pdtzi,
      LPTIME_ZONE_INFORMATION ptzi
    );


#line 183 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"






__declspec(dllimport)
 
DWORD
__stdcall
EnumDynamicTimeZoneInformation(
      const DWORD dwIndex,
      PDYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation
    );


__declspec(dllimport)
 
DWORD
__stdcall
GetDynamicTimeZoneInformationEffectiveYears(
      const PDYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation,
      LPDWORD FirstYear,
      LPDWORD LastYear
    );


#line 211 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"

#line 213 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"
#pragma endregion




}
#line 220 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"

#line 222 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\timezoneapi.h"

#line 8648 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#pragma region Desktop Family






























typedef struct _SYSTEM_POWER_STATUS {
    BYTE ACLineStatus;
    BYTE BatteryFlag;
    BYTE BatteryLifePercent;
    BYTE Reserved1;
    DWORD BatteryLifeTime;
    DWORD BatteryFullLifeTime;
}   SYSTEM_POWER_STATUS, *LPSYSTEM_POWER_STATUS;

__declspec(dllimport)
BOOL
__stdcall
GetSystemPowerStatus(
      LPSYSTEM_POWER_STATUS lpSystemPowerStatus
    );

__declspec(dllimport)
BOOL
__stdcall
SetSystemPowerState(
      BOOL fSuspend,
      BOOL fForce
    );

#line 8705 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




typedef
void
__stdcall
BAD_MEMORY_CALLBACK_ROUTINE(
    void
    );

typedef BAD_MEMORY_CALLBACK_ROUTINE *PBAD_MEMORY_CALLBACK_ROUTINE;

__declspec(dllimport)
PVOID
__stdcall
RegisterBadMemoryNotification(
      PBAD_MEMORY_CALLBACK_ROUTINE Callback
    );

__declspec(dllimport)
BOOL
__stdcall
UnregisterBadMemoryNotification(
      PVOID RegistrationHandle
    );



__declspec(dllimport)
BOOL
__stdcall
GetMemoryErrorHandlingCapabilities(
      PULONG Capabilities
    );

#line 8742 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"






__declspec(dllimport)
BOOL
__stdcall
AllocateUserPhysicalPages(
         HANDLE hProcess,
      PULONG_PTR NumberOfPages,
      PULONG_PTR PageArray
    );



__declspec(dllimport)
BOOL
__stdcall
AllocateUserPhysicalPagesNuma(
         HANDLE hProcess,
      PULONG_PTR NumberOfPages,
      PULONG_PTR PageArray,
         DWORD nndPreferred
    );

#line 8770 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
FreeUserPhysicalPages(
         HANDLE hProcess,
      PULONG_PTR NumberOfPages,
      PULONG_PTR PageArray
    );

__declspec(dllimport)
BOOL
__stdcall
MapUserPhysicalPages(
      PVOID VirtualAddress,
      ULONG_PTR NumberOfPages,
      PULONG_PTR PageArray
    );

__declspec(dllimport)
BOOL
__stdcall
MapUserPhysicalPagesScatter(
      PVOID *VirtualAddresses,
      ULONG_PTR NumberOfPages,
      PULONG_PTR PageArray
    );

__declspec(dllimport)
 
HANDLE
__stdcall
CreateJobObjectA(
      LPSECURITY_ATTRIBUTES lpJobAttributes,
      LPCSTR lpName
    );
__declspec(dllimport)
 
HANDLE
__stdcall
CreateJobObjectW(
      LPSECURITY_ATTRIBUTES lpJobAttributes,
      LPCWSTR lpName
    );




#line 8819 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
 
HANDLE
__stdcall
OpenJobObjectA(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCSTR lpName
    );
__declspec(dllimport)
 
HANDLE
__stdcall
OpenJobObjectW(
      DWORD dwDesiredAccess,
      BOOL bInheritHandle,
      LPCWSTR lpName
    );




#line 8843 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
AssignProcessToJobObject(
      HANDLE hJob,
      HANDLE hProcess
    );

__declspec(dllimport)
BOOL
__stdcall
TerminateJobObject(
      HANDLE hJob,
      UINT uExitCode
    );

__declspec(dllimport)
BOOL
__stdcall
QueryInformationJobObject(
       HANDLE hJob,
           JOBOBJECTINFOCLASS JobObjectInformationClass,
      LPVOID lpJobObjectInformation,
           DWORD cbJobObjectInformationLength,
      LPDWORD lpReturnLength
    );

__declspec(dllimport)
BOOL
__stdcall
SetInformationJobObject(
      HANDLE hJob,
      JOBOBJECTINFOCLASS JobObjectInformationClass,
      LPVOID lpJobObjectInformation,
      DWORD cbJobObjectInformationLength
    );

__declspec(dllimport)
BOOL
__stdcall
CreateJobSet (
      ULONG NumJob,
      PJOB_SET_ARRAY UserJobSet,
      ULONG Flags);

__declspec(dllimport)
HANDLE
__stdcall
FindFirstVolumeA(
      LPSTR lpszVolumeName,
      DWORD cchBufferLength
    );


#line 8899 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
FindNextVolumeA(
      HANDLE hFindVolume,
      LPSTR lpszVolumeName,
         DWORD cchBufferLength
    );


#line 8911 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
HANDLE
__stdcall
FindFirstVolumeMountPointA(
      LPCSTR lpszRootPathName,
      LPSTR lpszVolumeMountPoint,
      DWORD cchBufferLength
    );
__declspec(dllimport)
HANDLE
__stdcall
FindFirstVolumeMountPointW(
      LPCWSTR lpszRootPathName,
      LPWSTR lpszVolumeMountPoint,
      DWORD cchBufferLength
    );




#line 8933 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
FindNextVolumeMountPointA(
      HANDLE hFindVolumeMountPoint,
      LPSTR lpszVolumeMountPoint,
      DWORD cchBufferLength
    );
__declspec(dllimport)
BOOL
__stdcall
FindNextVolumeMountPointW(
      HANDLE hFindVolumeMountPoint,
      LPWSTR lpszVolumeMountPoint,
      DWORD cchBufferLength
    );




#line 8955 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
FindVolumeMountPointClose(
      HANDLE hFindVolumeMountPoint
    );

__declspec(dllimport)
BOOL
__stdcall
SetVolumeMountPointA(
      LPCSTR lpszVolumeMountPoint,
      LPCSTR lpszVolumeName
    );
__declspec(dllimport)
BOOL
__stdcall
SetVolumeMountPointW(
      LPCWSTR lpszVolumeMountPoint,
      LPCWSTR lpszVolumeName
    );




#line 8982 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
DeleteVolumeMountPointA(
      LPCSTR lpszVolumeMountPoint
    );


#line 8992 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetVolumeNameForVolumeMountPointA(
      LPCSTR lpszVolumeMountPoint,
      LPSTR lpszVolumeName,
      DWORD cchBufferLength
    );


#line 9004 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetVolumePathNameA(
      LPCSTR lpszFileName,
      LPSTR lpszVolumePathName,
      DWORD cchBufferLength
    );


#line 9016 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 9018 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
GetVolumePathNamesForVolumeNameA(
       LPCSTR lpszVolumeName,
         LPCH lpszVolumePathNames,
       DWORD cchBufferLength,
      PDWORD lpcchReturnLength
    );



#line 9034 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 9036 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"












typedef struct tagACTCTXA {
    ULONG       cbSize;
    DWORD       dwFlags;
    LPCSTR      lpSource;
    USHORT      wProcessorArchitecture;
    LANGID      wLangId;
    LPCSTR      lpAssemblyDirectory;
    LPCSTR      lpResourceName;
    LPCSTR      lpApplicationName;
    HMODULE     hModule;
} ACTCTXA, *PACTCTXA;
typedef struct tagACTCTXW {
    ULONG       cbSize;
    DWORD       dwFlags;
    LPCWSTR     lpSource;
    USHORT      wProcessorArchitecture;
    LANGID      wLangId;
    LPCWSTR     lpAssemblyDirectory;
    LPCWSTR     lpResourceName;
    LPCWSTR     lpApplicationName;
    HMODULE     hModule;
} ACTCTXW, *PACTCTXW;




typedef ACTCTXA ACTCTX;
typedef PACTCTXA PACTCTX;
#line 9077 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

typedef const ACTCTXA *PCACTCTXA;
typedef const ACTCTXW *PCACTCTXW;



typedef PCACTCTXA PCACTCTX;
#line 9085 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
HANDLE
__stdcall
CreateActCtxA(
      PCACTCTXA pActCtx
    );
__declspec(dllimport)
HANDLE
__stdcall
CreateActCtxW(
      PCACTCTXW pActCtx
    );




#line 9105 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
void
__stdcall
AddRefActCtx(
      HANDLE hActCtx
    );


__declspec(dllimport)
void
__stdcall
ReleaseActCtx(
      HANDLE hActCtx
    );

__declspec(dllimport)
BOOL
__stdcall
ZombifyActCtx(
      HANDLE hActCtx
    );


 
__declspec(dllimport)
BOOL
__stdcall
ActivateActCtx(
      HANDLE hActCtx,
        ULONG_PTR *lpCookie
    );




 
__declspec(dllimport)
BOOL
__stdcall
DeactivateActCtx(
      DWORD dwFlags,
      ULONG_PTR ulCookie
    );

__declspec(dllimport)
BOOL
__stdcall
GetCurrentActCtx(
     HANDLE *lphActCtx);


typedef struct tagACTCTX_SECTION_KEYED_DATA_2600 {
    ULONG cbSize;
    ULONG ulDataFormatVersion;
    PVOID lpData;
    ULONG ulLength;
    PVOID lpSectionGlobalData;
    ULONG ulSectionGlobalDataLength;
    PVOID lpSectionBase;
    ULONG ulSectionTotalLength;
    HANDLE hActCtx;
    ULONG ulAssemblyRosterIndex;
} ACTCTX_SECTION_KEYED_DATA_2600, *PACTCTX_SECTION_KEYED_DATA_2600;
typedef const ACTCTX_SECTION_KEYED_DATA_2600 * PCACTCTX_SECTION_KEYED_DATA_2600;

typedef struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA {
    PVOID lpInformation;
    PVOID lpSectionBase;
    ULONG ulSectionLength;
    PVOID lpSectionGlobalDataBase;
    ULONG ulSectionGlobalDataLength;
} ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA, *PACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;
typedef const ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA *PCACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;

typedef struct tagACTCTX_SECTION_KEYED_DATA {
    ULONG cbSize;
    ULONG ulDataFormatVersion;
    PVOID lpData;
    ULONG ulLength;
    PVOID lpSectionGlobalData;
    ULONG ulSectionGlobalDataLength;
    PVOID lpSectionBase;
    ULONG ulSectionTotalLength;
    HANDLE hActCtx;
    ULONG ulAssemblyRosterIndex;

    ULONG ulFlags;
    ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
} ACTCTX_SECTION_KEYED_DATA, *PACTCTX_SECTION_KEYED_DATA;
typedef const ACTCTX_SECTION_KEYED_DATA * PCACTCTX_SECTION_KEYED_DATA;







 
__declspec(dllimport)
BOOL
__stdcall
FindActCtxSectionStringA(
            DWORD dwFlags,
      const GUID *lpExtensionGuid,
            ULONG ulSectionId,
            LPCSTR lpStringToFind,
           PACTCTX_SECTION_KEYED_DATA ReturnedData
    );
 
__declspec(dllimport)
BOOL
__stdcall
FindActCtxSectionStringW(
            DWORD dwFlags,
      const GUID *lpExtensionGuid,
            ULONG ulSectionId,
            LPCWSTR lpStringToFind,
           PACTCTX_SECTION_KEYED_DATA ReturnedData
    );




#line 9230 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
FindActCtxSectionGuid(
            DWORD dwFlags,
      const GUID *lpExtensionGuid,
            ULONG ulSectionId,
        const GUID *lpGuidToFind,
           PACTCTX_SECTION_KEYED_DATA ReturnedData
    );





typedef struct _ACTIVATION_CONTEXT_BASIC_INFORMATION {
    HANDLE  hActCtx;
    DWORD   dwFlags;
} ACTIVATION_CONTEXT_BASIC_INFORMATION, *PACTIVATION_CONTEXT_BASIC_INFORMATION;

typedef const struct _ACTIVATION_CONTEXT_BASIC_INFORMATION *PCACTIVATION_CONTEXT_BASIC_INFORMATION;



#line 9256 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 9257 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




































 
__declspec(dllimport)
BOOL
__stdcall
QueryActCtxW(
           DWORD dwFlags,
           HANDLE hActCtx,
       PVOID pvSubInstance,
           ULONG ulInfoClass,
      PVOID pvBuffer,
           SIZE_T cbBuffer,
      SIZE_T *pcbWrittenOrRequired
    );

typedef   BOOL (__stdcall * PQUERYACTCTXW_FUNC)(
           DWORD dwFlags,
           HANDLE hActCtx,
       PVOID pvSubInstance,
           ULONG ulInfoClass,
      PVOID pvBuffer,
           SIZE_T cbBuffer,
      SIZE_T *pcbWrittenOrRequired
    );

#line 9318 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




__declspec(dllimport)
DWORD
__stdcall
WTSGetActiveConsoleSessionId(
    void
    );

#line 9330 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
WORD
__stdcall
GetActiveProcessorGroupCount(
    void
    );

__declspec(dllimport)
WORD
__stdcall
GetMaximumProcessorGroupCount(
    void
    );

__declspec(dllimport)
DWORD
__stdcall
GetActiveProcessorCount(
      WORD GroupNumber
    );

__declspec(dllimport)
DWORD
__stdcall
GetMaximumProcessorCount(
      WORD GroupNumber
    );

#line 9362 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





__declspec(dllimport)
BOOL
__stdcall
GetNumaProcessorNode(
       UCHAR Processor,
      PUCHAR NodeNumber
    );



__declspec(dllimport)
BOOL
__stdcall
GetNumaNodeNumberFromHandle(
       HANDLE hFile,
      PUSHORT NodeNumber
    );

#line 9386 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
GetNumaProcessorNodeEx(
       PPROCESSOR_NUMBER Processor,
      PUSHORT NodeNumber
    );

#line 9398 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOL
__stdcall
GetNumaNodeProcessorMask(
       UCHAR Node,
      PULONGLONG ProcessorMask
    );

__declspec(dllimport)
BOOL
__stdcall
GetNumaAvailableMemoryNode(
       UCHAR Node,
      PULONGLONG AvailableBytes
    );



__declspec(dllimport)
BOOL
__stdcall
GetNumaAvailableMemoryNodeEx(
       USHORT Node,
      PULONGLONG AvailableBytes
    );

#line 9426 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
GetNumaProximityNode(
       ULONG ProximityId,
      PUCHAR NodeNumber
    );

#line 9438 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
GetNumaProximityNodeEx(
       ULONG ProximityId,
      PUSHORT NodeNumber
    );

#line 9450 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




typedef DWORD (__stdcall *APPLICATION_RECOVERY_CALLBACK)(PVOID pvParameter);































__declspec(dllimport)
HRESULT
__stdcall
RegisterApplicationRecoveryCallback(
       APPLICATION_RECOVERY_CALLBACK pRecoveyCallback,
       PVOID pvParameter,
      DWORD dwPingInterval,
      DWORD dwFlags
    );

__declspec(dllimport)
HRESULT
__stdcall
UnregisterApplicationRecoveryCallback(void);

__declspec(dllimport)
HRESULT
__stdcall
RegisterApplicationRestart(
      PCWSTR pwzCommandline,
      DWORD dwFlags
    );

__declspec(dllimport)
HRESULT
__stdcall
UnregisterApplicationRestart(void);

__declspec(dllimport)
HRESULT
__stdcall
GetApplicationRecoveryCallback(
       HANDLE hProcess,
      APPLICATION_RECOVERY_CALLBACK* pRecoveryCallback,
     PVOID* ppvParameter,
      PDWORD pdwPingInterval,
      PDWORD pdwFlags
    );

__declspec(dllimport)
HRESULT
__stdcall
GetApplicationRestartSettings(
      HANDLE hProcess,
      PWSTR pwzCommandline,
      PDWORD pcchSize,
      PDWORD pdwFlags
    );

__declspec(dllimport)
HRESULT
__stdcall
ApplicationRecoveryInProgress(
      PBOOL pbCancelled
    );

__declspec(dllimport)
void
__stdcall
ApplicationRecoveryFinished(
      BOOL bSuccess
    );

#line 9550 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 9552 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion



#pragma region Application Family


typedef struct _FILE_BASIC_INFO {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    DWORD FileAttributes;
} FILE_BASIC_INFO, *PFILE_BASIC_INFO;

typedef struct _FILE_STANDARD_INFO {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    DWORD NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_INFO, *PFILE_STANDARD_INFO;

typedef struct _FILE_NAME_INFO {
    DWORD FileNameLength;
    WCHAR FileName[1];
} FILE_NAME_INFO, *PFILE_NAME_INFO;

typedef struct _FILE_RENAME_INFO {
    BOOLEAN ReplaceIfExists;
    HANDLE RootDirectory;
    DWORD FileNameLength;
    WCHAR FileName[1];
} FILE_RENAME_INFO, *PFILE_RENAME_INFO;

typedef struct _FILE_ALLOCATION_INFO {
    LARGE_INTEGER AllocationSize;
} FILE_ALLOCATION_INFO, *PFILE_ALLOCATION_INFO;

typedef struct _FILE_END_OF_FILE_INFO {
    LARGE_INTEGER EndOfFile;
} FILE_END_OF_FILE_INFO, *PFILE_END_OF_FILE_INFO;

typedef struct _FILE_STREAM_INFO {
    DWORD NextEntryOffset;
    DWORD StreamNameLength;
    LARGE_INTEGER StreamSize;
    LARGE_INTEGER StreamAllocationSize;
    WCHAR StreamName[1];
} FILE_STREAM_INFO, *PFILE_STREAM_INFO;

typedef struct _FILE_COMPRESSION_INFO {
    LARGE_INTEGER CompressedFileSize;
    WORD CompressionFormat;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved[3];
} FILE_COMPRESSION_INFO, *PFILE_COMPRESSION_INFO;

typedef struct _FILE_ATTRIBUTE_TAG_INFO {
    DWORD FileAttributes;
    DWORD ReparseTag;
} FILE_ATTRIBUTE_TAG_INFO, *PFILE_ATTRIBUTE_TAG_INFO;

typedef struct _FILE_DISPOSITION_INFO {
    BOOLEAN DeleteFileA;
} FILE_DISPOSITION_INFO, *PFILE_DISPOSITION_INFO;

typedef struct _FILE_ID_BOTH_DIR_INFO {
    DWORD NextEntryOffset;
    DWORD FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    DWORD FileAttributes;
    DWORD FileNameLength;
    DWORD EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    LARGE_INTEGER FileId;
    WCHAR FileName[1];
} FILE_ID_BOTH_DIR_INFO, *PFILE_ID_BOTH_DIR_INFO;

typedef struct _FILE_FULL_DIR_INFO {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    WCHAR FileName[1];
} FILE_FULL_DIR_INFO, *PFILE_FULL_DIR_INFO;

typedef enum _PRIORITY_HINT {
      IoPriorityHintVeryLow = 0,
      IoPriorityHintLow,
      IoPriorityHintNormal,
      MaximumIoPriorityHintType
} PRIORITY_HINT;

typedef struct _FILE_IO_PRIORITY_HINT_INFO {
    PRIORITY_HINT PriorityHint;
} FILE_IO_PRIORITY_HINT_INFO, *PFILE_IO_PRIORITY_HINT_INFO;





typedef struct _FILE_ALIGNMENT_INFO {
    ULONG AlignmentRequirement;
} FILE_ALIGNMENT_INFO, *PFILE_ALIGNMENT_INFO;




















typedef struct _FILE_STORAGE_INFO {
    ULONG LogicalBytesPerSector;
    ULONG PhysicalBytesPerSectorForAtomicity;
    ULONG PhysicalBytesPerSectorForPerformance;
    ULONG FileSystemEffectivePhysicalBytesPerSectorForAtomicity;
    ULONG Flags;
    ULONG ByteOffsetForSectorAlignment;
    ULONG ByteOffsetForPartitionAlignment;
} FILE_STORAGE_INFO, *PFILE_STORAGE_INFO;




typedef struct _EXT_FILE_ID_128 {
    UCHAR Identifier[16];
} EXT_FILE_ID_128, *PEXT_FILE_ID_128;




typedef struct _FILE_ID_INFO {
    ULONGLONG VolumeSerialNumber;
    EXT_FILE_ID_128 FileId;
} FILE_ID_INFO, *PFILE_ID_INFO;




typedef struct _FILE_ID_EXTD_DIR_INFO {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    ULONG ReparsePointTag;
    EXT_FILE_ID_128 FileId;
    WCHAR FileName[1];
} FILE_ID_EXTD_DIR_INFO, *PFILE_ID_EXTD_DIR_INFO;

#line 9738 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"












#line 9751 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"









#line 9761 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"










#line 9772 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

typedef struct _FILE_REMOTE_PROTOCOL_INFO
{
    
    USHORT StructureVersion;     
    USHORT StructureSize;        

    ULONG  Protocol;             

    
    USHORT ProtocolMajorVersion;
    USHORT ProtocolMinorVersion;
    USHORT ProtocolRevision;

    USHORT Reserved;

    
    ULONG  Flags;

    struct {
        ULONG Reserved[8];
    } GenericReserved;

    





#line 9802 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
    union {
    
        struct {
        
            struct {
                ULONG Capabilities;
            } Server;
            
            struct {
                ULONG Capabilities;
                ULONG CachingFlags;
            } Share;
            
        } Smb2;
        
        ULONG Reserved[16];
        
    } ProtocolSpecific;

#line 9822 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

} FILE_REMOTE_PROTOCOL_INFO, *PFILE_REMOTE_PROTOCOL_INFO;

__declspec(dllimport)
BOOL
__stdcall
GetFileInformationByHandleEx(
       HANDLE hFile,
       FILE_INFO_BY_HANDLE_CLASS FileInformationClass,
      LPVOID lpFileInformation,
       DWORD dwBufferSize
);

#line 9836 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family


typedef enum _FILE_ID_TYPE {
      FileIdType,
      ObjectIdType,
      ExtendedFileIdType,
      MaximumFileIdType
} FILE_ID_TYPE, *PFILE_ID_TYPE;

typedef struct FILE_ID_DESCRIPTOR {
    DWORD dwSize;  
    FILE_ID_TYPE Type; 
    union {
        LARGE_INTEGER FileId;
        GUID ObjectId;

        EXT_FILE_ID_128 ExtendedFileId;
#line 9857 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
    } ;
} FILE_ID_DESCRIPTOR, *LPFILE_ID_DESCRIPTOR;

__declspec(dllimport)
HANDLE
__stdcall
OpenFileById (
          HANDLE hVolumeHint,
          LPFILE_ID_DESCRIPTOR lpFileId,
          DWORD dwDesiredAccess,
          DWORD dwShareMode,
      LPSECURITY_ATTRIBUTES lpSecurityAttributes,
          DWORD dwFlagsAndAttributes
    );

#line 9873 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#line 9876 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#pragma region Desktop Family












__declspec(dllimport)
BOOLEAN
__stdcall
CreateSymbolicLinkA (
      LPCSTR lpSymlinkFileName,
      LPCSTR lpTargetFileName,
      DWORD dwFlags
    );
__declspec(dllimport)
BOOLEAN
__stdcall
CreateSymbolicLinkW (
      LPCWSTR lpSymlinkFileName,
      LPCWSTR lpTargetFileName,
      DWORD dwFlags
    );




#line 9911 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__declspec(dllimport)
BOOLEAN
__stdcall
CreateSymbolicLinkTransactedA (
          LPCSTR lpSymlinkFileName,
          LPCSTR lpTargetFileName,
          DWORD dwFlags,
          HANDLE hTransaction
    );
__declspec(dllimport)
BOOLEAN
__stdcall
CreateSymbolicLinkTransactedW (
          LPCWSTR lpSymlinkFileName,
          LPCWSTR lpTargetFileName,
          DWORD dwFlags,
          HANDLE hTransaction
    );




#line 9935 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 9937 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




__declspec(dllimport)
BOOL
__stdcall
QueryActCtxSettingsW(
           DWORD dwFlags,
           HANDLE hActCtx,
           PCWSTR settingsNameSpace,
               PCWSTR settingName,
      PWSTR pvBuffer,
           SIZE_T dwBuffer,
      SIZE_T *pdwWrittenOrRequired
    );

#line 9955 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



__declspec(dllimport)
BOOL
__stdcall
ReplacePartitionUnit (
      PWSTR TargetPartition,
      PWSTR SparePartition,
      ULONG Flags
    );

#line 9968 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




__declspec(dllimport)
BOOL
__stdcall
AddSecureMemoryCacheCallback(
       PSECURE_MEMORY_CACHE_CALLBACK pfnCallBack
    );

__declspec(dllimport)
BOOL
__stdcall
RemoveSecureMemoryCacheCallback(
       PSECURE_MEMORY_CACHE_CALLBACK pfnCallBack
    );

#line 9987 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 9989 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion



#pragma region Desktop Family


 
__declspec(dllimport)
BOOL
__stdcall
CopyContext(
      PCONTEXT Destination,
      DWORD ContextFlags,
      PCONTEXT Source
    );

#line 10007 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Application Family


 
__declspec(dllimport)
BOOL
__stdcall
InitializeContext(
      PVOID Buffer,
      DWORD ContextFlags,
      PCONTEXT* Context,
      PDWORD ContextLength
    );
#line 10023 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion



#pragma region Application Family


__declspec(dllimport)
DWORD64
__stdcall
GetEnabledXStateFeatures(
    void
    );

 
__declspec(dllimport)
BOOL
__stdcall
GetXStateFeaturesMask(
      PCONTEXT Context,
      PDWORD64 FeatureMask
    );

 
__declspec(dllimport)
PVOID
__stdcall
LocateXStateFeature(
      PCONTEXT Context,
      DWORD FeatureId,
      PDWORD Length
    );

#line 10057 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#pragma region Desktop Family


 
__declspec(dllimport)
BOOL
__stdcall
SetXStateFeaturesMask(
      PCONTEXT Context,
      DWORD64 FeatureMask
    );

#line 10072 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#line 10075 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 10077 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



#pragma region Desktop Family


__declspec(dllimport)
DWORD
__stdcall
EnableThreadProfiling(
      HANDLE ThreadHandle,
      DWORD Flags,
      DWORD64 HardwareCounters,
      HANDLE *PerformanceDataHandle
    );

__declspec(dllimport)
DWORD
__stdcall
DisableThreadProfiling(
      HANDLE PerformanceDataHandle
    );

__declspec(dllimport)
DWORD
__stdcall
QueryThreadProfiling(
      HANDLE ThreadHandle,
      PBOOLEAN Enabled
    );

__declspec(dllimport)
DWORD
__stdcall
ReadThreadProfilingData(
      HANDLE PerformanceDataHandle,
      DWORD Flags,
      PPERFORMANCE_DATA PerformanceData
    );

#line 10118 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#pragma endregion

#line 10121 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"






#line 10128 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 10129 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"


}
#line 10133 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



#pragma warning(pop)




#line 10142 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 10143 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"



#line 10147 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




























#pragma once
#line 10177 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"










#line 10188 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"





extern "C++" {

__forceinline
unsigned
_InterlockedIncrement(
       unsigned volatile *Addend
    )
{
    return (unsigned) _InterlockedIncrement((volatile long*) Addend);
}

__forceinline
unsigned long
_InterlockedIncrement(
       unsigned long volatile *Addend
    )
{
    return (unsigned long) _InterlockedIncrement((volatile long*) Addend);
}



__forceinline
unsigned __int64
_InterlockedIncrement(
       unsigned __int64 volatile *Addend
    )
{
    return (unsigned __int64) _InterlockedIncrement64((volatile __int64*) Addend);
}

#line 10225 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__forceinline
unsigned
_InterlockedDecrement(
       unsigned volatile *Addend
    )
{
    return (unsigned long) _InterlockedDecrement((volatile long*) Addend);
}

__forceinline
unsigned long
_InterlockedDecrement(
       unsigned long volatile *Addend
    )
{
    return (unsigned long) _InterlockedDecrement((volatile long*) Addend);
}



__forceinline
unsigned __int64
_InterlockedDecrement(
       unsigned __int64 volatile *Addend
    )
{
    return (unsigned __int64) _InterlockedDecrement64((volatile __int64*) Addend);
}

#line 10256 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__forceinline
unsigned
_InterlockedExchange(
       unsigned volatile *Target,
      unsigned Value
    )
{
    return (unsigned) _InterlockedExchange((volatile long*) Target, (long) Value);
}

__forceinline
unsigned long
_InterlockedExchange(
       unsigned long volatile *Target,
      unsigned long Value
    )
{
    return (unsigned long) _InterlockedExchange((volatile long*) Target, (long) Value);
}



__forceinline
unsigned __int64
_InterlockedExchange(
       unsigned __int64 volatile *Target,
      unsigned __int64 Value
    )
{
    return (unsigned __int64) _InterlockedExchange64((volatile __int64*) Target, (__int64) Value);
}

#line 10290 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__forceinline
unsigned
_InterlockedExchangeAdd(
       unsigned volatile *Addend,
      unsigned Value
    )
{
    return (unsigned) _InterlockedExchangeAdd((volatile long*) Addend, (long) Value);
}

__forceinline
unsigned
InterlockedExchangeSubtract(
       unsigned volatile *Addend,
      unsigned Value
    )
{
    return (unsigned) _InterlockedExchangeAdd((volatile long*) Addend,  - (long) Value);
}

__forceinline
unsigned long
_InterlockedExchangeAdd(
       unsigned long volatile *Addend,
      unsigned long Value
    )
{
    return (unsigned long) _InterlockedExchangeAdd((volatile long*) Addend, (long) Value);
}

__forceinline
unsigned long
InterlockedExchangeSubtract(
       unsigned long volatile *Addend,
      unsigned long Value
    )
{
    return (unsigned long) _InterlockedExchangeAdd((volatile long*) Addend,  - (long) Value);
}



__forceinline
unsigned __int64
_InterlockedExchangeAdd(
       unsigned __int64 volatile *Addend,
      unsigned __int64 Value
    )
{
    return (unsigned __int64) _InterlockedExchangeAdd64((volatile __int64*) Addend,  (__int64) Value);
}

__forceinline
unsigned __int64
InterlockedExchangeSubtract(
       unsigned __int64 volatile *Addend,
      unsigned __int64 Value
    )
{
    return (unsigned __int64) _InterlockedExchangeAdd64((volatile __int64*) Addend,  - (__int64) Value);
}

#line 10354 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

__forceinline
unsigned
_InterlockedCompareExchange(
       unsigned volatile *Destination,
      unsigned Exchange,
      unsigned Comperand
    )
{
    return (unsigned) _InterlockedCompareExchange((volatile long*) Destination, (long) Exchange, (long) Comperand);
}

__forceinline
unsigned long
_InterlockedCompareExchange(
       unsigned long volatile *Destination,
      unsigned long Exchange,
      unsigned long Comperand
    )
{
    return (unsigned long) _InterlockedCompareExchange((volatile long*) Destination, (long) Exchange, (long) Comperand);
}



__forceinline
unsigned __int64
_InterlockedCompareExchange(
       unsigned __int64 volatile *Destination,
      unsigned __int64 Exchange,
      unsigned __int64 Comperand
    )
{
    return (unsigned __int64) _InterlockedCompareExchange64((volatile __int64*) Destination, (__int64) Exchange, (__int64) Comperand);
}

__forceinline
unsigned __int64
_InterlockedAnd(
       unsigned __int64 volatile *Destination,
      unsigned __int64 Value
    )
{
    return (unsigned __int64) _InterlockedAnd64((volatile __int64*) Destination, (__int64) Value);
}

__forceinline
unsigned __int64
_InterlockedOr(
       unsigned __int64 volatile *Destination,
      unsigned __int64 Value
    )
{
    return (unsigned __int64) _InterlockedOr64((volatile __int64*) Destination, (__int64) Value);
}

__forceinline
unsigned __int64
_InterlockedXor(
       unsigned __int64 volatile *Destination,
      unsigned __int64 Value
    )
{
    return (unsigned __int64) _InterlockedXor64((volatile __int64*) Destination, (__int64) Value);
}

#line 10421 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

} 
#line 10424 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 10426 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"




#line 10431 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 10432 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 10433 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 10434 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 10435 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"
#line 10436 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\winbase.h"

#line 166 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\windows.h"
#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"














#pragma once


#pragma warning(push)
#pragma warning(disable: 4201)      
#line 21 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"














#line 36 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"









#line 46 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"


extern "C" {
#line 50 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
















































#line 99 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"





#line 105 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"






#line 112 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"






























#line 143 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"













#line 157 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"

















#line 175 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
















#line 192 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"


#line 195 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"


#line 198 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"














































































#line 277 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"








#pragma region Desktop Family



typedef struct _DRAWPATRECT {
        POINT ptPosition;
        POINT ptSize;
        WORD wStyle;
        WORD wPattern;
} DRAWPATRECT, *PDRAWPATRECT;
#line 296 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"

#line 298 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#line 301 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"




































































































#line 402 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"











#pragma region Desktop Family






typedef struct _PSINJECTDATA {

    DWORD   DataBytes;      
    WORD    InjectionPoint; 
    WORD    PageNumber;     

    

} PSINJECTDATA, *PPSINJECTDATA;

#line 431 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion



































































#line 500 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"

#pragma region Desktop Family






typedef struct _PSFEATURE_OUTPUT {

    BOOL bPageIndependent;
    BOOL bSetPageDevice;

} PSFEATURE_OUTPUT, *PPSFEATURE_OUTPUT;





typedef struct _PSFEATURE_CUSTPAPER {

    LONG lOrientation;
    LONG lWidth;
    LONG lHeight;
    LONG lWidthOffset;
    LONG lHeightOffset;

} PSFEATURE_CUSTPAPER, *PPSFEATURE_CUSTPAPER;

#line 530 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion



















































#pragma region Application Family


typedef struct  tagXFORM
  {
    FLOAT   eM11;
    FLOAT   eM12;
    FLOAT   eM21;
    FLOAT   eM22;
    FLOAT   eDx;
    FLOAT   eDy;
  } XFORM, *PXFORM,  *LPXFORM;


typedef struct tagBITMAP
  {
    LONG        bmType;
    LONG        bmWidth;
    LONG        bmHeight;
    LONG        bmWidthBytes;
    WORD        bmPlanes;
    WORD        bmBitsPixel;
    LPVOID      bmBits;
  } BITMAP, *PBITMAP,  *NPBITMAP,  *LPBITMAP;

#line 608 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack1.h"























#pragma warning(disable:4103)

#pragma pack(push,1)


#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack1.h"


#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack1.h"
#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack1.h"
#line 611 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"

#pragma region Application Family


typedef struct tagRGBTRIPLE {
        BYTE    rgbtBlue;
        BYTE    rgbtGreen;
        BYTE    rgbtRed;
} RGBTRIPLE, *PRGBTRIPLE,  *NPRGBTRIPLE,  *LPRGBTRIPLE;

#line 622 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"


























#pragma warning(disable:4103)

#pragma pack(pop)


#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"


#line 36 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"
#line 37 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"
#line 625 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"

#pragma region Application Family


typedef struct tagRGBQUAD {
        BYTE    rgbBlue;
        BYTE    rgbGreen;
        BYTE    rgbRed;
        BYTE    rgbReserved;
} RGBQUAD;

#line 637 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#pragma region Desktop Family


typedef RGBQUAD * LPRGBQUAD;

#line 645 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion


















#pragma region Application Family


typedef LONG   LCSCSTYPE;



typedef LONG    LCSGAMUTMATCH;



























typedef long            FXPT16DOT16,  *LPFXPT16DOT16;
typedef long            FXPT2DOT30,  *LPFXPT2DOT30;




typedef struct tagCIEXYZ
{
        FXPT2DOT30 ciexyzX;
        FXPT2DOT30 ciexyzY;
        FXPT2DOT30 ciexyzZ;
} CIEXYZ;

#line 713 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#pragma region Desktop Family


typedef CIEXYZ   *LPCIEXYZ;

#line 721 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#pragma region Application Family


typedef struct tagICEXYZTRIPLE
{
        CIEXYZ  ciexyzRed;
        CIEXYZ  ciexyzGreen;
        CIEXYZ  ciexyzBlue;
} CIEXYZTRIPLE;

#line 734 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#pragma region Desktop Family


typedef CIEXYZTRIPLE     *LPCIEXYZTRIPLE;

#line 742 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#pragma region Application Family







typedef struct tagLOGCOLORSPACEA {
    DWORD lcsSignature;
    DWORD lcsVersion;
    DWORD lcsSize;
    LCSCSTYPE lcsCSType;
    LCSGAMUTMATCH lcsIntent;
    CIEXYZTRIPLE lcsEndpoints;
    DWORD lcsGammaRed;
    DWORD lcsGammaGreen;
    DWORD lcsGammaBlue;
    CHAR   lcsFilename[260];
} LOGCOLORSPACEA, *LPLOGCOLORSPACEA;
typedef struct tagLOGCOLORSPACEW {
    DWORD lcsSignature;
    DWORD lcsVersion;
    DWORD lcsSize;
    LCSCSTYPE lcsCSType;
    LCSGAMUTMATCH lcsIntent;
    CIEXYZTRIPLE lcsEndpoints;
    DWORD lcsGammaRed;
    DWORD lcsGammaGreen;
    DWORD lcsGammaBlue;
    WCHAR  lcsFilename[260];
} LOGCOLORSPACEW, *LPLOGCOLORSPACEW;




typedef LOGCOLORSPACEA LOGCOLORSPACE;
typedef LPLOGCOLORSPACEA LPLOGCOLORSPACE;
#line 783 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"

#line 785 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#line 788 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"

#pragma region Desktop Family



typedef struct tagBITMAPCOREHEADER {
        DWORD   bcSize;                 
        WORD    bcWidth;
        WORD    bcHeight;
        WORD    bcPlanes;
        WORD    bcBitCount;
} BITMAPCOREHEADER,  *LPBITMAPCOREHEADER, *PBITMAPCOREHEADER;

#line 802 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#pragma region Application Family


typedef struct tagBITMAPINFOHEADER{
        DWORD      biSize;
        LONG       biWidth;
        LONG       biHeight;
        WORD       biPlanes;
        WORD       biBitCount;
        DWORD      biCompression;
        DWORD      biSizeImage;
        LONG       biXPelsPerMeter;
        LONG       biYPelsPerMeter;
        DWORD      biClrUsed;
        DWORD      biClrImportant;
} BITMAPINFOHEADER,  *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;

#line 822 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion



#pragma region Desktop Family


typedef struct {
        DWORD        bV4Size;
        LONG         bV4Width;
        LONG         bV4Height;
        WORD         bV4Planes;
        WORD         bV4BitCount;
        DWORD        bV4V4Compression;
        DWORD        bV4SizeImage;
        LONG         bV4XPelsPerMeter;
        LONG         bV4YPelsPerMeter;
        DWORD        bV4ClrUsed;
        DWORD        bV4ClrImportant;
        DWORD        bV4RedMask;
        DWORD        bV4GreenMask;
        DWORD        bV4BlueMask;
        DWORD        bV4AlphaMask;
        DWORD        bV4CSType;
        CIEXYZTRIPLE bV4Endpoints;
        DWORD        bV4GammaRed;
        DWORD        bV4GammaGreen;
        DWORD        bV4GammaBlue;
} BITMAPV4HEADER,  *LPBITMAPV4HEADER, *PBITMAPV4HEADER;

#line 853 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion
#line 855 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"



#pragma region Desktop Family

typedef struct {
        DWORD        bV5Size;
        LONG         bV5Width;
        LONG         bV5Height;
        WORD         bV5Planes;
        WORD         bV5BitCount;
        DWORD        bV5Compression;
        DWORD        bV5SizeImage;
        LONG         bV5XPelsPerMeter;
        LONG         bV5YPelsPerMeter;
        DWORD        bV5ClrUsed;
        DWORD        bV5ClrImportant;
        DWORD        bV5RedMask;
        DWORD        bV5GreenMask;
        DWORD        bV5BlueMask;
        DWORD        bV5AlphaMask;
        DWORD        bV5CSType;
        CIEXYZTRIPLE bV5Endpoints;
        DWORD        bV5GammaRed;
        DWORD        bV5GammaGreen;
        DWORD        bV5GammaBlue;
        DWORD        bV5Intent;
        DWORD        bV5ProfileData;
        DWORD        bV5ProfileSize;
        DWORD        bV5Reserved;
} BITMAPV5HEADER,  *LPBITMAPV5HEADER, *PBITMAPV5HEADER;

#line 888 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion




#line 894 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"









#line 904 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"

#pragma region Application Family


typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER    bmiHeader;
    RGBQUAD             bmiColors[1];
} BITMAPINFO,  *LPBITMAPINFO, *PBITMAPINFO;

#line 914 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#pragma region Desktop Family


typedef struct tagBITMAPCOREINFO {
    BITMAPCOREHEADER    bmciHeader;
    RGBTRIPLE           bmciColors[1];
} BITMAPCOREINFO,  *LPBITMAPCOREINFO, *PBITMAPCOREINFO;

#line 925 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack2.h"























#pragma warning(disable:4103)

#pragma pack(push,2)


#line 30 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack2.h"


#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack2.h"
#line 34 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\pshpack2.h"
#line 928 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"

#pragma region Desktop Family


typedef struct tagBITMAPFILEHEADER {
        WORD    bfType;
        DWORD   bfSize;
        WORD    bfReserved1;
        WORD    bfReserved2;
        DWORD   bfOffBits;
} BITMAPFILEHEADER,  *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;

#line 941 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"
#pragma endregion

#line 1 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"


























#pragma warning(disable:4103)

#pragma pack(pop)


#line 33 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"


#line 36 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"
#line 37 "c:\\p4\\External\\SDK\\Windows8.0\\include\\shared\\poppack.h"
#line 944 "c:\\p4\\External\\SDK\\Windows8.0\\include\\um\\wingdi.h"






#pragma region Desktop Family


typedef struct tagFONTSIGNATURE
{
    DWORD fsUsb[4];
    DWORD fsCsb[2];
} FONTSIGNATURE, *PFONTSIGNATURE, *LPFONTSIGNATURE;

typedef struct tagCHARSETINFO
{
    UINT ciCharset;
    UINT ciACP;
    FONTSIGNATURE fs;
} CHARSETINFO, *PCHARSETINFO,  *NPCHARSETINFO,  *LPCHARSETINFO;

#pragma endregion









{








