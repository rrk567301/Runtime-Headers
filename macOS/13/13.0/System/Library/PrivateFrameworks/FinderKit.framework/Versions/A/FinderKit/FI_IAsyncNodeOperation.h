@class NSObject;
@protocol IAsyncNodeOperationDelegateProtocol;

@interface FI_IAsyncNodeOperation : NSObject {
    struct OpaqueOperationRef { } *_operationRef;
    struct TOperationMonitor { struct OpaqueMonitorData *fMonitorData; unsigned char fCancelRequested; struct OperationStatus *fStatus; unsigned int fAccumulatedStatusMask; unsigned int fStatusChangeInterval; struct DSSemaphore *fRequestSemaphoreID; struct OpaqueEventQueue *fQueue; void /* function */ *fTickleProc; void /* function */ *fUniqueNameProc; int fVersion; id /* block */ fEventHandler; } _operationMonitor;
    struct vector<TOperationRecord, std::allocator<TOperationRecord>> { struct TOperationRecord *__begin_; struct TOperationRecord *__end_; struct __compressed_pair<TOperationRecord *, std::allocator<TOperationRecord>> { struct TOperationRecord *__value_; } __end_cap_; } _operationRecordList;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
    struct shared_ptr<TAsyncNodeOperationAssistant> { struct TAsyncNodeOperationAssistant *__ptr_; struct __shared_weak_count *__cntrl_; } _operationAssistant;
    struct OperationIterator { struct OpaqueOperationData *fData; void /* function */ *fFirstProc; void /* function */ *fNextProc; } _operationIterator;
    struct __wrap_iter<TOperationRecord *> { struct TOperationRecord *__i; } _operationRecordIter;
    struct OperationStatus { unsigned int fStage; struct HFSUniStr255 { unsigned short length; unsigned short unicode[255]; } fCurrentName; long long fTimeEstimate; long long fItemsTotal; long long fItemsCompleted; long long fBytesTotal; long long fBytesCompleted; long long fFSItemsTotal; long long fFSItemsCompleted; } _status;
    unsigned int _respondsToFlags;
}

@property (retain, nonatomic) FI_IAsyncNodeOperation *selfReference;
@property (retain, nonatomic) NSObject<IAsyncNodeOperationDelegateProtocol> *delegate;
@property unsigned int options;

+ (id)operationWithNodes:(const void *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (int)startOperation;
- (const void *)nodes;
- (int)cancelOperation;
- (id)initWithNodes:(const void *)a0;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (void)configureOperationRecord:(void *)a0 forIndex:(unsigned long long)a1;
- (void)configureOperationRecord:(void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (int)handleSuboperationCompleted:(unsigned int)a0 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })firstNodeName;
- (int)cancelCurrentSuboperation;
- (void)configureForNodes:(const void *)a0;
- (struct OperationRecord { struct OpaqueNodeRef *x0; struct OpaqueNodeRef *x1; struct PropertyList *x2; unsigned int x3; unsigned int x4; struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } x5; struct OpaqueNodeRef *x6; struct OpaqueNodeRef *x7; struct OpaqueNodeRef *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; long long x13; long long x14; long long x15; long long x16; unsigned char x17; unsigned char x18; } *)operationIterFirst;
- (struct OperationRecord { struct OpaqueNodeRef *x0; struct OpaqueNodeRef *x1; struct PropertyList *x2; unsigned int x3; unsigned int x4; struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } x5; struct OpaqueNodeRef *x6; struct OpaqueNodeRef *x7; struct OpaqueNodeRef *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; long long x13; long long x14; long long x15; long long x16; unsigned char x17; unsigned char x18; } *)operationIterNext;
- (void)resetOperationRecordIter;
- (int)handleStatusNotification;
- (int)handleErrorNotification:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;
- (int)handleWarningNotification:(struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;
- (int)handleSuboperationStarted:(unsigned int)a0;
- (int)handleCompletedNotification;

@end
