@class NSString;

@interface FI_TTagOperationDelegate : NSObject <IAsyncNodeOperationDelegateProtocol> {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } fLock;
    struct TConditionVariable { struct condition_variable_any { struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __cv_; struct shared_ptr<std::mutex> { struct mutex *__ptr_; struct __shared_weak_count *__cntrl_; } __mut_; } fCondition; int fWaitCount; } fCondition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)waitForOperationToFinish;
- (int)asyncNodeOperation:(id)a0 statusNotification:(const struct TOperationMonitor { struct OpaqueMonitorData *x0; unsigned char x1; struct OperationStatus *x2; unsigned int x3; unsigned int x4; struct DSSemaphore *x5; struct OpaqueEventQueue *x6; void /* function */ *x7; void /* function */ *x8; int x9; id /* block */ x10; } *)a1;
- (int)asyncNodeOperation:(id)a0 errorNotification:(const struct TOperationMonitor { struct OpaqueMonitorData *x0; unsigned char x1; struct OperationStatus *x2; unsigned int x3; unsigned int x4; struct DSSemaphore *x5; struct OpaqueEventQueue *x6; void /* function */ *x7; void /* function */ *x8; int x9; id /* block */ x10; } *)a1 error:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a2 reply:(struct NodeEventReply { struct DSSemaphore *x0; unsigned int x1; int x2; } *)a3;
- (int)asyncNodeOperation:(id)a0 completedNotification:(const struct TOperationMonitor { struct OpaqueMonitorData *x0; unsigned char x1; struct OperationStatus *x2; unsigned int x3; unsigned int x4; struct DSSemaphore *x5; struct OpaqueEventQueue *x6; void /* function */ *x7; void /* function */ *x8; int x9; id /* block */ x10; } *)a1;

@end
