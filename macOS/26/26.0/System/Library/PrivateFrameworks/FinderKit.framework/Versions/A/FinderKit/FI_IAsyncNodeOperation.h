@class NSObject;
@protocol IAsyncNodeOperationDelegateProtocol;

@interface FI_IAsyncNodeOperation : NSObject {
    struct OpaqueOperationRef { } *_operationRef;
    struct TOperationMonitor { struct unique_ptr<OperationMonitorEx, std::default_delete<OperationMonitorEx>> { struct OperationMonitorEx *__ptr_; } fDetails; } _operationMonitor;
    struct vector<std::shared_ptr<TOperationRecord>, std::allocator<std::shared_ptr<TOperationRecord>>> { void *__begin_; void *__end_; void *__cap_; } _operationRecordList;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _nodes;
    struct TOperationIterator { struct unique_ptr<TOperationIteratorDetails, std::default_delete<TOperationIteratorDetails>> { struct TOperationIteratorDetails *__ptr_; } fDetails; } _operationIterator;
    struct __wrap_iter<std::shared_ptr<TOperationRecord> *> { void *__i_; } _operationRecordIter;
    struct OperationStatus { unsigned int fStage; struct HFSUniStr255 { unsigned short length; unsigned short unicode[255]; } fCurrentName; long long fTimeEstimate; long long fItemsTotal; long long fItemsCompleted; long long fBytesTotal; long long fBytesCompleted; long long fFSItemsTotal; long long fFSItemsCompleted; } _status;
    unsigned int _respondsToFlags;
}

@property (retain, nonatomic) FI_IAsyncNodeOperation *selfReference;
@property (retain, nonatomic) NSObject<IAsyncNodeOperationDelegateProtocol> *delegate;
@property unsigned int options;

+ (id)operationWithNodes:(const void *)a0;

- (void)dealloc;
- (id).cxx_construct;
- (int)cancelOperation;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (void)configureForNodes:(const void *)a0;
- (id)initWithNodes:(const void *)a0;
- (const void *)nodes;
- (int)startOperation;
- (int)cancelCurrentSuboperation;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })configureOperationRecordForIndex:(unsigned long long)a0;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })configureOperationRecordForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })firstNodeName;
- (int)handleCompletedNotification;
- (void)handleErrorNotification:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;
- (int)handleStatusNotification;
- (int)handleSuboperationCompleted:(unsigned int)a0 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (int)handleSuboperationStarted:(unsigned int)a0;
- (void)handleWarningNotification:(struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })operationIterFirst;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })operationIterNext;
- (void)resetOperationRecordIter;

@end
