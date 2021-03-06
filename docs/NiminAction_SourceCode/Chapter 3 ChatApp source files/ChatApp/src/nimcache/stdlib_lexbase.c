/* Generated by Nim Compiler v0.12.1 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread  -I/home/renzhen/Nim12.0/lib -o src/nimcache/stdlib_lexbase.o src/nimcache/stdlib_lexbase.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Baselexer222011 Baselexer222011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj219227 Streamobj219227;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY89058[32];
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Baselexer222011  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj219227* input;
NI linenumber;
NI sentinel;
NI linestart;
TY89058 refillchars;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY219228) (Streamobj219227* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY219232) (Streamobj219227* s);
typedef N_NIMCALL_PTR(void, TY219236) (Streamobj219227* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY219241) (Streamobj219227* s);
typedef N_NIMCALL_PTR(NI, TY219245) (Streamobj219227* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY219251) (Streamobj219227* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY219257) (Streamobj219227* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY219263) (Streamobj219227* s);
struct  Streamobj219227  {
  TNimObject Sup;
TY219228 closeimpl;
TY219232 atendimpl;
TY219236 setpositionimpl;
TY219241 getpositionimpl;
TY219245 readdataimpl;
TY219251 peekdataimpl;
TY219257 writedataimpl;
TY219263 flushimpl;
};
N_NIMCALL(void, close_222033)(Baselexer222011* L);
N_NOCONV(void, dealloc_8448)(void* p);
N_NIMCALL(void, close_219291)(Streamobj219227* s);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_30201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_222043)(Baselexer222011* L);
N_NIMCALL(void, failedassertimpl_99603)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, readdata_219380)(Streamobj219227* s, void* buffer, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_8433)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_222827)(Baselexer222011* L, NI pos);
N_NIMCALL(NI, handlecr_223007)(Baselexer222011* L, NI pos);
N_NIMCALL(NI, handlelf_223216)(Baselexer222011* L, NI pos);
N_NIMCALL(NI, handlerefillchar_223416)(Baselexer222011* L, NI pos);
N_NIMCALL(void, skiputf8bom_223607)(Baselexer222011* L);
N_NIMCALL(void, open_223635)(Baselexer222011* L, Streamobj219227* input, NI buflen, TY89058 refillchars);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_8401)(NI size);
N_NIMCALL(NI, getcolnumber_224008)(Baselexer222011* L, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_224019)(Baselexer222011* L, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY89058 Newlines_222005 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP941, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP944, "\012  0 <= toCopy ", 15);
STRING_LITERAL(TMP953, "s < L.bufLen ", 13);
STRING_LITERAL(TMP958, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP964, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP966, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP968, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP970, "contains(L.refillChars, L.buf[pos]) ", 36);
STRING_LITERAL(TMP973, "\012  0 < bufLen ", 14);
STRING_LITERAL(TMP974, "\012  not (input == nil) ", 22);
STRING_LITERAL(TMP978, "", 0);
STRING_LITERAL(TMP980, "\012", 1);
STRING_LITERAL(TMP981, "^\012", 2);
extern NIM_THREADVAR TFrame* frameptr_27442;
extern TNimType NTI4011; /* RootObj */
TNimType NTI222011; /* BaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI219225; /* Stream */
extern TNimType NTI89058; /* set[char] */

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_27442 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_27442).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_27442;
	frameptr_27442 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_30201();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_27442 = (*frameptr_27442).prev;
}

N_NIMCALL(void, close_222033)(Baselexer222011* L) {
	nimfr("close", "lexbase.nim")
	nimln(46, "lexbase.nim");
	dealloc_8448(((void*) ((*L).buf)));
	nimln(47, "lexbase.nim");
	close_219291((*L).input);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = 0;
	{
		if (!(b == ((NI) 0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == ((NI) -1));
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI)(a / b);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, fillbuffer_222043)(Baselexer222011* L) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP942;
	NI TMP943;
	NI TMP947;
	NI TMP948;
	NI LOC13;
	NI TMP949;
	NI TMP950;
	nimfr("fillBuffer", "lexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(57, "lexbase.nim");
	{
		if (!!(((*L).sentinel < (*L).buflen))) goto LA3;
		failedassertimpl_99603(((NimStringDesc*) &TMP941));
	}
	LA3: ;
	nimln(58, "lexbase.nim");
	TMP942 = subInt((*L).buflen, (*L).sentinel);
	TMP943 = subInt((NI)(TMP942), ((NI) 1));
	tocopy = (NI)(TMP943);
	nimln(59, "lexbase.nim");
	{
		if (!!((((NI) 0) <= tocopy))) goto LA7;
		failedassertimpl_99603(((NimStringDesc*) &TMP944));
	}
	LA7: ;
	nimln(60, "lexbase.nim");
	{
		NI TMP945;
		NI TMP946;
		nimln(357, "system.nim");
		if (!(((NI) 0) < tocopy)) goto LA11;
		nimln(61, "lexbase.nim");
		TMP945 = addInt((*L).sentinel, ((NI) 1));
		TMP946 = mulInt(tocopy, ((NI) 1));
		memmove(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)(TMP945)]))), ((NI)chckRange((NI)(TMP946), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA11: ;
	nimln(63, "lexbase.nim");
	nimln(64, "lexbase.nim");
	nimln(63, "lexbase.nim");
	nimln(64, "lexbase.nim");
	TMP947 = addInt((*L).sentinel, ((NI) 1));
	TMP948 = mulInt((NI)(TMP947), ((NI) 1));
	LOC13 = 0;
	LOC13 = readdata_219380((*L).input, ((void*) ((&(*L).buf[tocopy]))), (NI)(TMP948));
	TMP949 = divInt(LOC13, ((NI) 1));
	charsread = (NI)(TMP949);
	nimln(65, "lexbase.nim");
	TMP950 = addInt(tocopy, charsread);
	s = (NI)(TMP950);
	nimln(66, "lexbase.nim");
	{
		NI TMP951;
		TMP951 = addInt((*L).sentinel, ((NI) 1));
		if (!(charsread < (NI)(TMP951))) goto LA16;
		nimln(67, "lexbase.nim");
		(*L).buf[s] = 0;
		nimln(68, "lexbase.nim");
		(*L).sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		NI TMP952;
		nimln(71, "lexbase.nim");
		TMP952 = subInt(s, ((NI) 1));
		s = (NI)(TMP952);
		{
			nimln(72, "lexbase.nim");
			while (1) {
				nimln(73, "lexbase.nim");
				{
					if (!!((s < (*L).buflen))) goto LA23;
					failedassertimpl_99603(((NimStringDesc*) &TMP953));
				}
				LA23: ;
				{
					nimln(74, "lexbase.nim");
					while (1) {
						NIM_BOOL LOC27;
						NI TMP954;
						LOC27 = 0;
						nimln(353, "system.nim");
						LOC27 = (((NI) 0) <= s);
						if (!(LOC27)) goto LA28;
						nimln(1104, "system.nim");
						LOC27 = !((((*L).refillchars[((NU8)((*L).buf[s]))/8] &(1<<(((NU8)((*L).buf[s]))%8)))!=0));
						LA28: ;
						if (!LOC27) goto LA26;
						nimln(74, "lexbase.nim");
						TMP954 = subInt(s, ((NI) 1));
						s = (NI)(TMP954);
					} LA26: ;
				}
				nimln(75, "lexbase.nim");
				{
					nimln(353, "system.nim");
					if (!(((NI) 0) <= s)) goto LA31;
					nimln(77, "lexbase.nim");
					(*L).sentinel = s;
					nimln(78, "lexbase.nim");
					goto LA19;
				}
				goto LA29;
				LA31: ;
				{
					NI TMP955;
					NI TMP956;
					void* LOC34;
					NI TMP959;
					NI LOC39;
					NI TMP960;
					NI TMP963;
					nimln(82, "lexbase.nim");
					oldbuflen = (*L).buflen;
					nimln(83, "lexbase.nim");
					TMP955 = mulInt((*L).buflen, ((NI) 2));
					(*L).buflen = (NI)(TMP955);
					nimln(84, "lexbase.nim");
					TMP956 = mulInt((*L).buflen, ((NI) 1));
					LOC34 = 0;
					LOC34 = realloc_8433(((void*) ((*L).buf)), ((NI)chckRange((NI)(TMP956), ((NI) 0), ((NI) IL64(9223372036854775807)))));
					(*L).buf = ((NCSTRING) (LOC34));
					nimln(85, "lexbase.nim");
					{
						NI TMP957;
						TMP957 = subInt((*L).buflen, oldbuflen);
						if (!!(((NI)(TMP957) == oldbuflen))) goto LA37;
						failedassertimpl_99603(((NimStringDesc*) &TMP958));
					}
					LA37: ;
					nimln(86, "lexbase.nim");
					nimln(87, "lexbase.nim");
					nimln(86, "lexbase.nim");
					nimln(87, "lexbase.nim");
					TMP959 = mulInt(oldbuflen, ((NI) 1));
					LOC39 = 0;
					LOC39 = readdata_219380((*L).input, ((void*) ((&(*L).buf[oldbuflen]))), (NI)(TMP959));
					TMP960 = divInt(LOC39, ((NI) 1));
					charsread = (NI)(TMP960);
					nimln(88, "lexbase.nim");
					{
						NI TMP961;
						NI TMP962;
						if (!(charsread < oldbuflen)) goto LA42;
						nimln(89, "lexbase.nim");
						TMP961 = addInt(oldbuflen, charsread);
						(*L).buf[(NI)(TMP961)] = 0;
						nimln(90, "lexbase.nim");
						TMP962 = addInt(oldbuflen, charsread);
						(*L).sentinel = (NI)(TMP962);
						nimln(91, "lexbase.nim");
						goto LA19;
					}
					LA42: ;
					nimln(92, "lexbase.nim");
					TMP963 = subInt((*L).buflen, ((NI) 1));
					s = (NI)(TMP963);
				}
				LA29: ;
			}
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_222827)(Baselexer222011* L, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "lexbase.nim")
	result = 0;
	nimln(95, "lexbase.nim");
	{
		if (!!((pos <= (*L).sentinel))) goto LA3;
		failedassertimpl_99603(((NimStringDesc*) &TMP964));
	}
	LA3: ;
	nimln(96, "lexbase.nim");
	{
		NI TMP965;
		if (!(pos < (*L).sentinel)) goto LA7;
		nimln(97, "lexbase.nim");
		TMP965 = addInt(pos, ((NI) 1));
		result = (NI)(TMP965);
	}
	goto LA5;
	LA7: ;
	{
		nimln(99, "lexbase.nim");
		fillbuffer_222043(L);
		nimln(100, "lexbase.nim");
		(*L).bufpos = ((NI) 0);
		nimln(101, "lexbase.nim");
		result = ((NI) 0);
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_223007)(Baselexer222011* L, NI pos) {
	NI result;
	NI TMP967;
	nimfr("handleCR", "lexbase.nim")
	result = 0;
	nimln(107, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(13)))) goto LA3;
		failedassertimpl_99603(((NimStringDesc*) &TMP966));
	}
	LA3: ;
	nimln(108, "lexbase.nim");
	TMP967 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP967);
	nimln(109, "lexbase.nim");
	result = fillbaselexer_222827(L, pos);
	nimln(110, "lexbase.nim");
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA7;
		nimln(111, "lexbase.nim");
		result = fillbaselexer_222827(L, result);
	}
	LA7: ;
	nimln(112, "lexbase.nim");
	(*L).linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_223216)(Baselexer222011* L, NI pos) {
	NI result;
	NI TMP969;
	nimfr("handleLF", "lexbase.nim")
	result = 0;
	nimln(118, "lexbase.nim");
	{
		if (!!(((NU8)((*L).buf[pos]) == (NU8)(10)))) goto LA3;
		failedassertimpl_99603(((NimStringDesc*) &TMP968));
	}
	LA3: ;
	nimln(119, "lexbase.nim");
	TMP969 = addInt((*L).linenumber, ((NI) 1));
	(*L).linenumber = (NI)(TMP969);
	nimln(120, "lexbase.nim");
	result = fillbaselexer_222827(L, pos);
	nimln(121, "lexbase.nim");
	(*L).linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlerefillchar_223416)(Baselexer222011* L, NI pos) {
	NI result;
	nimfr("handleRefillChar", "lexbase.nim")
	result = 0;
	nimln(125, "lexbase.nim");
	{
		if (!!((((*L).refillchars[((NU8)((*L).buf[pos]))/8] &(1<<(((NU8)((*L).buf[pos]))%8)))!=0))) goto LA3;
		failedassertimpl_99603(((NimStringDesc*) &TMP970));
	}
	LA3: ;
	nimln(126, "lexbase.nim");
	result = fillbaselexer_222827(L, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_223607)(Baselexer222011* L) {
	nimfr("skipUtf8Bom", "lexbase.nim")
	nimln(129, "lexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI TMP971;
		NI TMP972;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(130, "lexbase.nim");
		TMP971 = addInt((*L).bufpos, ((NI) 3));
		(*L).bufpos = (NI)(TMP971);
		nimln(131, "lexbase.nim");
		TMP972 = addInt((*L).linestart, ((NI) 3));
		(*L).linestart = (NI)(TMP972);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, open_223635)(Baselexer222011* L, Streamobj219227* input, NI buflen, TY89058 refillchars) {
	NI TMP975;
	void* LOC9;
	NI TMP976;
	nimfr("open", "lexbase.nim")
	nimln(136, "lexbase.nim");
	{
		if (!!((((NI) 0) < buflen))) goto LA3;
		failedassertimpl_99603(((NimStringDesc*) &TMP973));
	}
	LA3: ;
	nimln(137, "lexbase.nim");
	{
		if (!!(!((input == NIM_NIL)))) goto LA7;
		failedassertimpl_99603(((NimStringDesc*) &TMP974));
	}
	LA7: ;
	nimln(138, "lexbase.nim");
	unsureAsgnRef((void**) (&(*L).input), input);
	nimln(139, "lexbase.nim");
	(*L).bufpos = ((NI) 0);
	nimln(140, "lexbase.nim");
	(*L).buflen = buflen;
	nimln(141, "lexbase.nim");
	memcpy((void*)(*L).refillchars, (NIM_CONST void*)refillchars, 32);
	nimln(142, "lexbase.nim");
	TMP975 = mulInt(buflen, ((NI) 1));
	LOC9 = 0;
	LOC9 = alloc_8401(((NI)chckRange((NI)(TMP975), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	(*L).buf = ((NCSTRING) (LOC9));
	nimln(143, "lexbase.nim");
	TMP976 = subInt(buflen, ((NI) 1));
	(*L).sentinel = (NI)(TMP976);
	nimln(144, "lexbase.nim");
	(*L).linestart = ((NI) 0);
	nimln(145, "lexbase.nim");
	(*L).linenumber = ((NI) 1);
	nimln(146, "lexbase.nim");
	fillbuffer_222043(L);
	nimln(147, "lexbase.nim");
	skiputf8bom_223607(L);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_224008)(Baselexer222011* L, NI pos) {
	NI result;
	NI TMP977;
	nimfr("getColNumber", "lexbase.nim")
	result = 0;
	nimln(151, "lexbase.nim");
	TMP977 = subInt(pos, (*L).linestart);
	if ((NI)(TMP977) == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
	result = ((NI)(TMP977) > 0? ((NI)(TMP977)) : -((NI)(TMP977)));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_224019)(Baselexer222011* L, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "lexbase.nim")
	result = 0;
	i = 0;
	nimln(156, "lexbase.nim");
	result = copyString(((NimStringDesc*) &TMP978));
	nimln(157, "lexbase.nim");
	i = (*L).linestart;
	{
		nimln(158, "lexbase.nim");
		while (1) {
			NI TMP979;
			nimln(1098, "system.nim");
			if (!!((((NU8)((*L).buf[i])) == ((NU8)(13)) || ((NU8)((*L).buf[i])) == ((NU8)(10)) || ((NU8)((*L).buf[i])) == ((NU8)(0))))) goto LA2;
			nimln(159, "lexbase.nim");
			result = addChar(result, (*L).buf[i]);
			nimln(160, "lexbase.nim");
			TMP979 = addInt(i, ((NI) 1));
			i = (NI)(TMP979);
		} LA2: ;
	}
	nimln(161, "lexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP980));
	nimln(162, "lexbase.nim");
	{
		NimStringDesc* LOC7;
		NI LOC8;
		NimStringDesc* LOC9;
		if (!marker) goto LA5;
		nimln(163, "lexbase.nim");
		LOC7 = 0;
		nimln(654, "strutils.nim");
		nimln(163, "lexbase.nim");
		LOC8 = 0;
		LOC8 = getcolnumber_224008(L, (*L).bufpos);
		LOC9 = 0;
		LOC9 = nsuRepeatChar(32, ((NI)chckRange(LOC8, ((NI) 0), ((NI) IL64(9223372036854775807)))));
		LOC7 = rawNewString(LOC9->Sup.len + 2);
appendString(LOC7, LOC9);
appendString(LOC7, ((NimStringDesc*) &TMP981));
		result = resizeString(result, LOC7->Sup.len + 0);
appendString(result, LOC7);
	}
	LA5: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit000)(void) {
	nimfr("lexbase", "lexbase.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit000)(void) {
static TNimNode* TMP1165[8];
static TNimNode TMP915[9];
NTI222011.size = sizeof(Baselexer222011);
NTI222011.kind = 17;
NTI222011.base = (&NTI4011);
TMP1165[0] = &TMP915[1];
TMP915[1].kind = 1;
TMP915[1].offset = offsetof(Baselexer222011, bufpos);
TMP915[1].typ = (&NTI108);
TMP915[1].name = "bufpos";
TMP1165[1] = &TMP915[2];
TMP915[2].kind = 1;
TMP915[2].offset = offsetof(Baselexer222011, buf);
TMP915[2].typ = (&NTI151);
TMP915[2].name = "buf";
TMP1165[2] = &TMP915[3];
TMP915[3].kind = 1;
TMP915[3].offset = offsetof(Baselexer222011, buflen);
TMP915[3].typ = (&NTI108);
TMP915[3].name = "bufLen";
TMP1165[3] = &TMP915[4];
TMP915[4].kind = 1;
TMP915[4].offset = offsetof(Baselexer222011, input);
TMP915[4].typ = (&NTI219225);
TMP915[4].name = "input";
TMP1165[4] = &TMP915[5];
TMP915[5].kind = 1;
TMP915[5].offset = offsetof(Baselexer222011, linenumber);
TMP915[5].typ = (&NTI108);
TMP915[5].name = "lineNumber";
TMP1165[5] = &TMP915[6];
TMP915[6].kind = 1;
TMP915[6].offset = offsetof(Baselexer222011, sentinel);
TMP915[6].typ = (&NTI108);
TMP915[6].name = "sentinel";
TMP1165[6] = &TMP915[7];
TMP915[7].kind = 1;
TMP915[7].offset = offsetof(Baselexer222011, linestart);
TMP915[7].typ = (&NTI108);
TMP915[7].name = "lineStart";
TMP1165[7] = &TMP915[8];
TMP915[8].kind = 1;
TMP915[8].offset = offsetof(Baselexer222011, refillchars);
TMP915[8].typ = (&NTI89058);
TMP915[8].name = "refillChars";
TMP915[0].len = 8; TMP915[0].kind = 2; TMP915[0].sons = &TMP1165[0];
NTI222011.node = &TMP915[0];
}

