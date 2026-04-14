@class NSString, EKEventStore, NSPredicate, NSError;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {
    id /* block */ _callback;
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    unsigned int _cancellationToken;
    BOOL _finished;
    BOOL _isCancelled;
    int _retryCount;
    BOOL _batchingEnabled;
    BOOL _returnedFirstBatch;
    BOOL _returnedLastBatch;
    int _batchSize;
    NSError *_batchError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostHandle;
+ (id)searchWithEntityClass:(Class)a0 predicate:(id)a1 store:(id)a2;

- (void)terminate;
- (id)initWithEntityClass:(Class)a0 predicate:(id)a1 store:(id)a2;
- (void)_startProcessingWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 processor:(id /* block */)a2 queue:(id)a3;
- (void)_startActivityWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 queue:(id)a2;
- (id)runSynchronously;
- (void)_fetchObjectIDsActualWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 queue:(id)a2;
- (id)_createOSActivity;
- (void)cancel;
- (void)signpostEndWithError:(int)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)filterSkippedReminders:(id)a0;
- (id)startWithCompletion:(id /* block */)a0 queue:(id)a1;
- (id)fetchObjectIDs;
- (void)_startFetchObjectIDsActivityWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 queue:(id)a2;
- (void)_startActualWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 queue:(id)a2;
- (id)stepWithBatchSize:(int)a0 completed:(BOOL *)a1 error:(id *)a2;
- (void)signpostStart;

@end
