@class NSString, EKEventStore, NSPredicate, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface EKPredicateMonitor : NSObject <EKCancellableRemoteOperation, EKPredicateMonitor> {
    EKEventStore *_store;
    id /* block */ _block;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_queue;
    int _receivedGeneration;
    int _predicateGeneration;
    NSMutableDictionary *_predicateUpdateCompletionCallbackBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) unsigned long long propertyFilter;

+ (unsigned long long)convertOptions:(unsigned long long)a0;
+ (unsigned long long)convertPropertyFilter:(unsigned long long)a0;

- (void)_start;
- (void)start;
- (void)stop;
- (void)cancel;
- (void)disconnected;
- (void)performAsyncOnQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_validatePredicateSupportsEfficientMonitoring;
- (void)generation:(int)a0 completedWithError:(id)a1;
- (id)initWithEventStore:(id)a0 predicate:(id)a1 filterChanges:(unsigned long long)a2 options:(unsigned long long)a3 queue:(id)a4 resultsBlock:(id /* block */)a5;
- (void)receivedBatchResultsFromServer:(id)a0 finished:(BOOL)a1;
- (void)updatePredicate:(id)a0 completion:(id /* block */)a1;

@end
