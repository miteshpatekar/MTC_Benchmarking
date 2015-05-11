






/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CkChareID mainhandle;
 */
extern CkChareID mainhandle;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainhandle(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainhandle;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int grain;
 */
extern int grain;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_grain(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|grain;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int N;
 */
extern int N;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_N(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|N;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkGroupID counterGroup;
 */
extern CkGroupID counterGroup;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_counterGroup(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|counterGroup;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PartialBoard;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PartialBoard::operator new(size_t s){
  return PartialBoard::alloc(__idx, s, 0, 0);
}
void *CMessage_PartialBoard::operator new(size_t s, int* sz){
  return PartialBoard::alloc(__idx, s, sz, 0);
}
void *CMessage_PartialBoard::operator new(size_t s, int* sz,const int pb){
  return PartialBoard::alloc(__idx, s, sz, pb);
}
void *CMessage_PartialBoard::operator new(size_t s, const int p) {
  return PartialBoard::alloc(__idx, s, 0, p);
}
void* CMessage_PartialBoard::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_PartialBoard::CMessage_PartialBoard() {
PartialBoard *newmsg = (PartialBoard *)this;
}
void CMessage_PartialBoard::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PartialBoard::pack(PartialBoard *msg) {
  return (void *) msg;
}
PartialBoard* CMessage_PartialBoard::unpack(void* buf) {
  PartialBoard *msg = (PartialBoard *) buf;
  return msg;
}
int CMessage_PartialBoard::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message DUMMYMSG;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_DUMMYMSG::operator new(size_t s){
  return DUMMYMSG::alloc(__idx, s, 0, 0);
}
void *CMessage_DUMMYMSG::operator new(size_t s, int* sz){
  return DUMMYMSG::alloc(__idx, s, sz, 0);
}
void *CMessage_DUMMYMSG::operator new(size_t s, int* sz,const int pb){
  return DUMMYMSG::alloc(__idx, s, sz, pb);
}
void *CMessage_DUMMYMSG::operator new(size_t s, const int p) {
  return DUMMYMSG::alloc(__idx, s, 0, p);
}
void* CMessage_DUMMYMSG::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_DUMMYMSG::CMessage_DUMMYMSG() {
DUMMYMSG *newmsg = (DUMMYMSG *)this;
}
void CMessage_DUMMYMSG::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_DUMMYMSG::pack(DUMMYMSG *msg) {
  return (void *) msg;
}
DUMMYMSG* CMessage_DUMMYMSG::unpack(void* buf) {
  DUMMYMSG *msg = (DUMMYMSG *) buf;
  return msg;
}
int CMessage_DUMMYMSG::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare main: Chare{
main(CkArgMsg* impl_msg);
threaded void Quiescence1(DUMMYMSG* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: main(CkArgMsg* impl_msg);
 */

CkChareID CProxy_main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_main::__idx, CkIndex_main::idx_main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_main::__idx, CkIndex_main::idx_main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_main::CProxy_main(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_main::__idx, CkIndex_main::idx_main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_main::reg_main_CkArgMsg() {
  int epidx = CkRegisterEp("main(CkArgMsg* impl_msg)",
      _call_main_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_main::_call_main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  main* impl_obj = static_cast<main *>(impl_obj_void);
  new (impl_obj) main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void Quiescence1(DUMMYMSG* impl_msg);
 */

void CProxy_main::Quiescence1(DUMMYMSG* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_main::idx_Quiescence1_DUMMYMSG(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_main::idx_Quiescence1_DUMMYMSG(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_main::idx_Quiescence1_DUMMYMSG(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_main::reg_Quiescence1_DUMMYMSG() {
  int epidx = CkRegisterEp("Quiescence1(DUMMYMSG* impl_msg)",
      _call_Quiescence1_DUMMYMSG, CMessage_DUMMYMSG::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)DUMMYMSG::ckDebugPup);
  return epidx;
}


void CkIndex_main::_call_Quiescence1_DUMMYMSG(void* impl_msg, void* impl_obj_void)
{
  main* impl_obj = static_cast<main *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_Quiescence1_DUMMYMSG, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthResume(tid);
}

void CkIndex_main::_callthr_Quiescence1_DUMMYMSG(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  main *impl_obj = (main *) impl_arg->obj;
  delete impl_arg;
  impl_obj->Quiescence1((DUMMYMSG*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: main(CkArgMsg* impl_msg);
  idx_main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_main_CkArgMsg());

  // REG: threaded void Quiescence1(DUMMYMSG* impl_msg);
  idx_Quiescence1_DUMMYMSG();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare queens: Chare{
queens(PartialBoard* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_queens::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: queens(PartialBoard* impl_msg);
 */

CkChareID CProxy_queens::ckNew(PartialBoard* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_queens::__idx, CkIndex_queens::idx_queens_PartialBoard(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_queens::ckNew(PartialBoard* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_queens::__idx, CkIndex_queens::idx_queens_PartialBoard(), impl_msg, pcid, impl_onPE);
}

  CProxy_queens::CProxy_queens(PartialBoard* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_queens::__idx, CkIndex_queens::idx_queens_PartialBoard(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_queens::reg_queens_PartialBoard() {
  int epidx = CkRegisterEp("queens(PartialBoard* impl_msg)",
      _call_queens_PartialBoard, CMessage_PartialBoard::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PartialBoard::ckDebugPup);
  return epidx;
}


void CkIndex_queens::_call_queens_PartialBoard(void* impl_msg, void* impl_obj_void)
{
  queens* impl_obj = static_cast<queens *>(impl_obj_void);
  new (impl_obj) queens((PartialBoard*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_queens::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: queens(PartialBoard* impl_msg);
  idx_queens_PartialBoard();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPgm(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCounter();

  CkRegisterReadonly("mainhandle","CkChareID",sizeof(mainhandle),(void *) &mainhandle,__xlater_roPup_mainhandle);

  CkRegisterReadonly("grain","int",sizeof(grain),(void *) &grain,__xlater_roPup_grain);

  CkRegisterReadonly("N","int",sizeof(N),(void *) &N,__xlater_roPup_N);

  CkRegisterReadonly("counterGroup","CkGroupID",sizeof(counterGroup),(void *) &counterGroup,__xlater_roPup_counterGroup);

/* REG: message PartialBoard;
*/
CMessage_PartialBoard::__register("PartialBoard", sizeof(PartialBoard),(CkPackFnPtr) PartialBoard::pack,(CkUnpackFnPtr) PartialBoard::unpack);

/* REG: message DUMMYMSG;
*/
CMessage_DUMMYMSG::__register("DUMMYMSG", sizeof(DUMMYMSG),(CkPackFnPtr) DUMMYMSG::pack,(CkUnpackFnPtr) DUMMYMSG::unpack);

/* REG: mainchare main: Chare{
main(CkArgMsg* impl_msg);
threaded void Quiescence1(DUMMYMSG* impl_msg);
};
*/
  CkIndex_main::__register("main", sizeof(main));

/* REG: chare queens: Chare{
queens(PartialBoard* impl_msg);
};
*/
  CkIndex_queens::__register("queens", sizeof(queens));

}
extern "C" void CkRegisterMainModule(void) {
  _registerPgm();
}
#endif /* CK_TEMPLATES_ONLY */
