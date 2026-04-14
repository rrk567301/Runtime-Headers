@class NSArray, FINode, NSString, NSObject, NSProgress;
@protocol OS_dispatch_queue;

@interface FIOperation : NSObject {
    struct unordered_map<NSURL *, std::pair<NSProgress *, TNSWeakPtr<FINode>>, std::hash<NSURL *>, std::equal_to<NSURL *>, std::allocator<std::pair<NSURL *const, std::pair<NSProgress *, TNSWeakPtr<FINode>>>>> { struct __hash_table<std::__hash_value_type<NSURL *, std::pair<NSProgress *, TNSWeakPtr<FINode>>>, std::__unordered_map_hasher<NSURL *, std::__hash_value_type<NSURL *, std::pair<NSProgress *, TNSWeakPtr<FINode>>>, std::hash<NSURL *>, std::equal_to<NSURL *>>, std::__unordered_map_equal<NSURL *, std::__hash_value_type<NSURL *, std::pair<NSProgress *, TNSWeakPtr<FINode>>>, std::equal_to<NSURL *>, std::hash<NSURL *>>, std::allocator<std::__hash_value_type<NSURL *, std::pair<NSProgress *, TNSWeakPtr<FINode>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSURL *, std::pair<NSProgress *, TNSWeakPtr<FINode>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSURL *, std::pair<NSProgress *, TNSWeakPtr<FINode>>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSURL *, std::pair<NSProgress *, TNSWeakPtr<FINode>>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSURL *, std::pair<NSProgress *, TNSWeakPtr<FINode>>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _urlToChildProgressMap;
}

@property (readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) NSObject *progressSubscriber;
@property unsigned long long childProgressHighWaterMark;
@property BOOL waitingForNodes;
@property BOOL scheduleWasDeferred;
@property (nonatomic) struct OpaqueOperationRef { } *operationRef;
@property (nonatomic) unsigned int operationType;
@property (copy) NSArray *sourceNodes;
@property (retain) FINode *destinationNode;
@property (copy, nonatomic) NSString *authorizationPrompt;
@property (nonatomic) struct OperationMonitorEx { struct OpaqueMonitorData *fMonitorData; unsigned char fCancelRequested; struct OperationStatus *fStatus; unsigned int fAccumulatedStatusMask; unsigned int fStatusChangeInterval; struct DSSemaphore *fRequestSemaphoreID; struct OpaqueEventQueue *fQueue; void /* function */ *fTickleProc; void /* function */ *fUniqueNameProc; int fVersion; id /* block */ fEventHandler; } operationMonitor;
@property (nonatomic) struct OperationStatus { unsigned int fStage; struct HFSUniStr255 { unsigned short length; unsigned short unicode[255]; } fCurrentName; long long fTimeEstimate; long long fItemsTotal; long long fItemsCompleted; long long fBytesTotal; long long fBytesCompleted; long long fFSItemsTotal; long long fFSItemsCompleted; } operationStatus;
@property (nonatomic) struct OperationIterator { struct OpaqueOperationData *fData; void /* function */ *fFirstProc; void /* function */ *fNextProc; } iterator;
@property unsigned long long currentIndex;
@property (retain) NSArray *opRecords;
@property (retain, nonatomic) FIOperation *selfReference;
@property (nonatomic) BOOL executedAsFPAction;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) id /* block */ stageChangedHandler;
@property (copy, nonatomic) id /* block */ conflictHandler;
@property (copy, nonatomic) id /* block */ warningHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ subOperationStartedHandler;
@property (copy, nonatomic) id /* block */ subOperationCompletedHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL cancellable;
@property (readonly, nonatomic) BOOL cancelled;
@property (readonly, nonatomic) BOOL pausable;
@property (readonly, nonatomic) BOOL paused;
@property (copy, nonatomic) id /* block */ errorRecoveryHandler;

+ (id)uniqueNameByAppendingNumber:(id)a0 fileExtension:(id)a1;

- (void)pause;
- (void)schedule;
- (void)dealloc;
- (void)invalidate;
- (void)cancel;
- (void)resume;
- (id)init;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)markAsCancelled;
- (void)warningHandler:(struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;
- (void)_postCancel;
- (void)_postReplyWithResolution:(unsigned int)a0 result:(int)a1;
- (void)callOnOperationQueue:(id /* block */)a0;
- (void)configureForNodes:(id)a0;
- (void)conflictHandler:(struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0 conflictIter:(const struct OperationIterator { struct OpaqueOperationData *x0; void /* function */ *x1; void /* function */ *x2; } *)a1;
- (id)createFPOperation;
- (id)createOperationRef;
- (id)currentOperationRecord;
- (void)errorHandler:(struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0 errorIter:(const struct OperationIterator { struct OpaqueOperationData *x0; void /* function */ *x1; void /* function */ *x2; } *)a1;
- (BOOL)hasChildProgress;
- (void)initIterator;
- (void)initOperationMonitor;
- (void)initOperationStatus;
- (id)makeOperationRecordForNode:(id)a0;
- (id)makeProgress;
- (void)operationCompleted;
- (BOOL)requiresFPOperation;
- (void)resetIterator;
- (void)statusChangedHandlerPriv:(const struct OperationStatus { unsigned int x0; struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; } *)a0;
- (void)subOperationCompletedHandler:(unsigned int)a0 targetNode:(id)a1;
- (void)subOperationStartedHandler:(unsigned int)a0;
- (void)tearDownCallbacks;

@end
