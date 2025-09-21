@class NSMutableArray, NSArray, NSString, NSOperationQueue, NSHashTable, NSObject;
@protocol OS_voucher;

@interface NSOperation : NSObject {
    struct { NSOperation *__prevOp; NSOperation *__nextOp; NSOperation *__nextPriOp; NSOperationQueue *__queue; NSMutableArray *__dependencies; NSHashTable *__down_dependencies; long long __unfinished_deps; id /* block */ __completion; void *__obsInfo; void *__implicitObsInfo; double __thread_prio; char *__nameBuffer; NSObject<OS_voucher> *_voucher; id /* block */ __schedule; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __wait_mutex; struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __wait_cond; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } __lock; char _shouldRemoveDependenciesAfterFinish; _Atomic unsigned char __state; char __prio; _Atomic char __cached_isReady; _Atomic char __isCancelled; _Atomic unsigned char __propertyQoS; _Atomic unsigned char __isExecutingObserverCount; _Atomic unsigned char __isFinishedObserverCount; _Atomic unsigned char __isReadyObserverCount; _Atomic unsigned char __isCancelledObserverCount; } _iop;
}

@property (readonly, getter=isCancelled) char cancelled;
@property (readonly, getter=isExecuting) char executing;
@property (readonly, getter=isFinished) char finished;
@property (readonly, getter=isConcurrent) char concurrent;
@property (readonly, getter=isAsynchronous) char asynchronous;
@property (readonly, getter=isReady) char ready;
@property (readonly, copy) NSArray *dependencies;
@property long long queuePriority;
@property (copy) id /* block */ completionBlock;
@property double threadPriority;
@property long long qualityOfService;
@property (copy) NSString *name;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (char)_removesDependenciesAfterFinish;
+ (id)keyPathsForValuesAffectingReady;
+ (id)currentOperation;
+ (id)keyPathsForValuesAffectingCancelled;
+ (id)keyPathsForValuesAffectingExecuting;
+ (id)keyPathsForValuesAffectingFinished;
+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)setObservationInfo:(void *)a0;
- (void)waitUntilFinished;
- (void)start;
- (void *)observationInfo;
- (id)__graphDescription:(unsigned long long)a0;
- (id /* block */)_copyCompletionBlock;
- (id)_implicitObservationInfo;
- (void)addDependency:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)cancel;
- (void)main;
- (void)removeAllDependencies;
- (void)removeDependency:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)waitUntilFinishedOrTimeout:(double)a0;

@end
