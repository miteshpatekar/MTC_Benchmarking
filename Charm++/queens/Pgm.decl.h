#ifndef _DECL_Pgm_H_
#define _DECL_Pgm_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "Counter.decl.h"

/* DECLS: readonly CkChareID mainhandle;
 */

/* DECLS: readonly int grain;
 */

/* DECLS: readonly int N;
 */

/* DECLS: readonly CkGroupID counterGroup;
 */

/* DECLS: message PartialBoard;
 */
class PartialBoard;
class CMessage_PartialBoard:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_PartialBoard();
    static void *pack(PartialBoard *p);
    static PartialBoard* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: message DUMMYMSG;
 */
class DUMMYMSG;
class CMessage_DUMMYMSG:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_DUMMYMSG();
    static void *pack(DUMMYMSG *p);
    static DUMMYMSG* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: mainchare main: Chare{
main(CkArgMsg* impl_msg);
threaded void Quiescence1(DUMMYMSG* impl_msg);
};
 */
 class main;
 class CkIndex_main;
 class CProxy_main;
/* --------------- index object ------------------ */
class CkIndex_main:public CkIndex_Chare{
  public:
    typedef main local_t;
    typedef CkIndex_main index_t;
    typedef CProxy_main proxy_t;
    typedef CProxy_main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_main_CkArgMsg() {
      static int epidx = reg_main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_main_CkArgMsg(); }
    
    static void _call_main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void Quiescence1(DUMMYMSG* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Quiescence1_DUMMYMSG();
    // Entry point index lookup
    
    inline static int idx_Quiescence1_DUMMYMSG() {
      static int epidx = reg_Quiescence1_DUMMYMSG();
      return epidx;
    }

    
    inline static int idx_Quiescence1(void (main::*)(DUMMYMSG* impl_msg) ) {
      return idx_Quiescence1_DUMMYMSG();
    }


    
    static int Quiescence1(DUMMYMSG* impl_msg) { return idx_Quiescence1_DUMMYMSG(); }
    
    static void _call_Quiescence1_DUMMYMSG(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Quiescence1_DUMMYMSG(void* impl_msg, void* impl_obj);
    
    static void _callthr_Quiescence1_DUMMYMSG(CkThrCallArg *);
};
/* --------------- element proxy ------------------ */
class CProxy_main:public CProxy_Chare{
  public:
    typedef main local_t;
    typedef CkIndex_main index_t;
    typedef CProxy_main proxy_t;
    typedef CProxy_main element_t;

    CProxy_main(void) {};
    CProxy_main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p); }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    main *ckLocal(void) const
    { return (main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_main(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

/* DECLS: threaded void Quiescence1(DUMMYMSG* impl_msg);
 */
    
    void Quiescence1(DUMMYMSG* impl_msg);

};
PUPmarshall(CProxy_main)
#define main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_main> CBase_main;

/* DECLS: chare queens: Chare{
queens(PartialBoard* impl_msg);
};
 */
 class queens;
 class CkIndex_queens;
 class CProxy_queens;
/* --------------- index object ------------------ */
class CkIndex_queens:public CkIndex_Chare{
  public:
    typedef queens local_t;
    typedef CkIndex_queens index_t;
    typedef CProxy_queens proxy_t;
    typedef CProxy_queens element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: queens(PartialBoard* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_queens_PartialBoard();
    // Entry point index lookup
    
    inline static int idx_queens_PartialBoard() {
      static int epidx = reg_queens_PartialBoard();
      return epidx;
    }

    
    static int ckNew(PartialBoard* impl_msg) { return idx_queens_PartialBoard(); }
    
    static void _call_queens_PartialBoard(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_queens_PartialBoard(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_queens:public CProxy_Chare{
  public:
    typedef queens local_t;
    typedef CkIndex_queens index_t;
    typedef CProxy_queens proxy_t;
    typedef CProxy_queens element_t;

    CProxy_queens(void) {};
    CProxy_queens(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_queens(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p); }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    queens *ckLocal(void) const
    { return (queens *)CkLocalChare(&ckGetChareID()); }
/* DECLS: queens(PartialBoard* impl_msg);
 */
    static CkChareID ckNew(PartialBoard* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(PartialBoard* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_queens(PartialBoard* impl_msg, int onPE=CK_PE_ANY);

};
PUPmarshall(CProxy_queens)
#define queens_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_queens> CBase_queens;








/* ---------------- method closures -------------- */
class Closure_main {
  public:


};

/* ---------------- method closures -------------- */
class Closure_queens {
  public:

};

extern void _registerPgm(void);
extern "C" void CkRegisterMainModule(void);
#endif
