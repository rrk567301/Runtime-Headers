@class NSMutableArray, NSManagedObjectID;
@protocol EKServerChangeObserver;

@interface CalDAVOperationQueue : NSObject {
    BOOL _stopped;
    BOOL _needsAccountPropertyRefresh;
    NSMutableArray *_operations;
    NSMutableArray *_failedOperations;
    NSMutableArray *_lowPriorityOperations;
    NSManagedObjectID *_sessionID;
    id<EKServerChangeObserver> _observer;
}

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isStopped;
- (void)stop;
- (id)operations;
- (id)peek;
- (BOOL)isStalled;
- (BOOL)isBusy;
- (id)initWithSessionID:(id)a0;
- (void)registerObserver:(id)a0;
- (void)enqueueOperation:(id)a0;
- (void)removeOperation:(id)a0;
- (void)removeAllOperations;
- (id)nextOperationNotCurrentlyRunning;
- (BOOL)isProcessingOperationForChange:(id)a0;
- (void)insertOperation:(id)a0;
- (id)allOperations;
- (void)kick;
- (BOOL)isPendingRetry;
- (id)failedOperations;
- (void)beginNextOperation;
- (void)_addBackFailedOperations;
- (void)flattenOperationDependencies;
- (id)threadSafeQueueDescription;
- (id)_operationAtIndex:(unsigned long long)a0;
- (void)removeOperation:(id)a0 removeEntities:(BOOL)a1;
- (void)dequeueOperation:(id)a0;
- (void)detectSyncMalfunctions;
- (void)removeDependentOperationsFromQueue:(id)a0;
- (void)removeFromQueue:(id)a0;
- (void)_findLowPriorityDependenciesForOperation:(id)a0 addToSet:(id)a1;
- (void)_fixPriorityInversions;
- (void)_promoteNextLowPriorityOperation;
- (void)setNeedsAccountPropertyRefresh:(BOOL)a0;
- (void)reorderFailedOperation:(id)a0;
- (void)completeOperation:(id)a0;
- (void)tryOperationAgain:(id)a0;
- (void)removeAndRevertOperation:(id)a0;
- (void)removeOperationAndRefresh:(id)a0;
- (id)lowPriorityOperations;
- (BOOL)needsAccountPropertyRefresh;
- (void)transferDependencyGraphOfOperation:(id)a0 toOperation:(id)a1;

@end
