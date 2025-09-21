@class NSArray, NSMutableSet, _EDSearchableIndexPendingRemovals, NSMutableArray;

@interface EDSearchableIndexState : NSObject

@property (nonatomic) long long resumeCount;
@property (nonatomic) long long transaction;
@property (readonly, copy, nonatomic) NSMutableSet *removedIdentifiers;
@property (readonly, copy, nonatomic) NSMutableArray *preparingItems;
@property (readonly, copy, nonatomic) NSMutableArray *pendingItems;
@property (readonly, copy, nonatomic) NSMutableArray *preprocessingItems;
@property (readonly, copy, nonatomic) NSMutableArray *processingItems;
@property (readonly, copy, nonatomic) NSMutableSet *pendingDomainRemovals;
@property (retain, nonatomic) _EDSearchableIndexPendingRemovals *pendingIdentifierRemovals;
@property (nonatomic) char isActive;
@property (nonatomic) char needsRefresh;
@property (nonatomic) char needsVerification;
@property (nonatomic) char coalesceTimerFired;
@property (nonatomic) char scheduledProcessing;
@property (nonatomic) char scheduledRefresh;
@property (nonatomic) char scheduledVerification;
@property (nonatomic) char indexImmediately;
@property (nonatomic) char clientStateFetched;
@property char persistenceAvailable;
@property (readonly, nonatomic) unsigned long long countOfItemsInPendingQueues;
@property (readonly, copy, nonatomic) NSArray *pendingIdentifiers;
@property (readonly, nonatomic) char needsToScheduleRefresh;
@property (readonly, nonatomic) char needsToScheduleVerification;
@property (readonly, nonatomic) char needsImmediateProcessing;
@property (readonly, nonatomic) char queueContentsAllowsRefresh;

- (void).cxx_destruct;
- (long long)resume;
- (long long)suspend;
- (void)removeItemsForDomainIdentifier:(id)a0;
- (void)didCompleteBacklog;
- (void)didIndexItems:(id)a0;
- (void)didPrepareItems:(id)a0;
- (char)didPreprocessItem:(id)a0;
- (void)failedToIndexItems:(id)a0;
- (long long)indexItem:(id)a0;
- (id)initWithPendingIdentifierRemovals:(id)a0;
- (id)prepareToIndexItems:(id)a0;
- (id)processBatchOfSize:(unsigned long long)a0;
- (void)removeIdentifiersFromPendingQueues:(id)a0 reasons:(id)a1;
- (id)removePendingDomainRemovals;
- (void)startReindex;

@end
