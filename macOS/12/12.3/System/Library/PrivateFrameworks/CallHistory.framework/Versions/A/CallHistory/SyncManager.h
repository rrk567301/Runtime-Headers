@class NSString, CallHistoryDBClientHandle, TransactionManager;

@interface SyncManager : CHLogger <SyncManagerProtocol> {
    TransactionManager *_transactionManager;
}

@property (readonly, nonatomic) CallHistoryDBClientHandle *dbHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)insert:(id)a0;
- (void)resetTimers;
- (void)deleteAllObjects;
- (void)updateObjects:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (void)deleteObjectWithUniqueId:(id)a0;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (double)timerIncoming;
- (double)timerOutgoing;
- (double)timerLifetime;
- (id)fetchObjectsWithLimits:(id)a0;
- (void)insertWithoutTransaction:(id)a0;
- (void)updateAllObjects:(id)a0;
- (void)deleteObjectsWithLimits:(id)a0;
- (void)insertRecordsWithoutTransactions:(id)a0;
- (long long)setRead:(BOOL)a0 forCallsWithPredicate:(id)a1 error:(id *)a2;
- (long long)deleteCallsWithPredicate:(id)a0 error:(id *)a1;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void)initDBHandle;
- (void)addUpdateTransactions:(id)a0;
- (id)predicateForCallKind:(id)a0;
- (id)predicateForCallKinds:(id)a0;
- (id)predicateForLimits:(id)a0;
- (id)archiveCallObject:(id)a0;
- (id)fetchAllObjects;

@end
