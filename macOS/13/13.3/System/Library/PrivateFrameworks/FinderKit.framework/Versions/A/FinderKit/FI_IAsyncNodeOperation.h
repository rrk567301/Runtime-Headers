@class NSObject;
@protocol IAsyncNodeOperationDelegateProtocol;

@interface FI_IAsyncNodeOperation : NSObject {
    struct OpaqueOperationRef { } *_operationRef;
    struct TOperationMonitor { struct OpaqueMonitorData *fMonitorData; unsigned char fCancelRequested; struct OperationStatus *fStatus; unsigned int fAccumulatedStatusMask; unsigned int fStatusChangeInterval; struct DSSemaphore *fRequestSemaphoreID; struct OpaqueEventQueue *fQueue; void /* function */ *fTickleProc; void /* function */ *fUniqueNameProc; int fVersion; id /* block */ fEventHandler; } _operationMonitor;
    struct vector<std::shared_ptr<TOperationRecord>, std::allocator<std::shared_ptr<TOperationRecord>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<TOperationRecord> *, std::allocator<std::shared_ptr<TOperationRecord>>> { void *__value_; } __end_cap_; } _operationRecordList;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
    struct TOperationIterator { struct OperationIterator { struct OpaqueOperationData *fData; void /* function */ *fFirstProc; void /* function */ *fNextProc; } fIterator; struct function<std::shared_ptr<TOperationRecord> ()> { struct __value_func<std::shared_ptr<TOperationRecord> ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fFirstProc; struct function<std::shared_ptr<TOperationRecord> ()> { struct __value_func<std::shared_ptr<TOperationRecord> ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fNextProc; struct unordered_map<const OperationRecord *, std::shared_ptr<TOperationRecord>, std::hash<const OperationRecord *>, std::equal_to<const OperationRecord *>, std::allocator<std::pair<const OperationRecord *const, std::shared_ptr<TOperationRecord>>>> { struct __hash_table<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, std::__unordered_map_hasher<const OperationRecord *, std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, std::hash<const OperationRecord *>, std::equal_to<const OperationRecord *>, true>, std::__unordered_map_equal<const OperationRecord *, std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, std::equal_to<const OperationRecord *>, std::hash<const OperationRecord *>, true>, std::allocator<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const OperationRecord *, std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, std::hash<const OperationRecord *>, std::equal_to<const OperationRecord *>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const OperationRecord *, std::__hash_value_type<const OperationRecord *, std::shared_ptr<TOperationRecord>>, std::equal_to<const OperationRecord *>, std::hash<const OperationRecord *>, true>> { float __value_; } __p3_; } __table_; } fDSOpRecToOpRec; } _operationIterator;
    struct __wrap_iter<std::shared_ptr<TOperationRecord> *> { void *__i; } _operationRecordIter;
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
- (int)cancelCurrentSuboperation;
- (void)configureForNodes:(const void *)a0;
- (void)configureOperationRecord:(void *)a0 forIndex:(unsigned long long)a1;
- (void)configureOperationRecord:(void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })firstNodeName;
- (int)handleCompletedNotification;
- (int)handleErrorNotification:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;
- (int)handleStatusNotification;
- (int)handleSuboperationCompleted:(unsigned int)a0 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (int)handleSuboperationStarted:(unsigned int)a0;
- (int)handleWarningNotification:(struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })operationIterFirst;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })operationIterNext;
- (void)resetOperationRecordIter;

@end
