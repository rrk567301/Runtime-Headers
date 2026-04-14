@class NSString;
@protocol TransactionManagerProtocol, CHFeatureFlags, CallHistoryDBClientHandleProtocol;

@interface SyncManager : CHLogger <SyncManagerProtocol>

@property (readonly, nonatomic) id<CallHistoryDBClientHandleProtocol> dbHandle;
@property (readonly, nonatomic) id<CHFeatureFlags> featureFlags;
@property (readonly, nonatomic) id<TransactionManagerProtocol> transactionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)predicateForCallKinds:(id)a0;
- (id)updatedPredicate:(id)a0 withLimits:(id)a1;
- (id)fetchAllObjects;
- (void)deleteAllObjects;
- (void)insertRecords:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)initWithTransactionManager:(id)a0 dbHandle:(id)a1;
- (id)init;
- (long long)setRead:(BOOL)a0 forCallsWithPredicate:(id)a1 error:(id *)a2;
- (id)predicateForLimits:(id)a0;
- (double)timerOutgoing;
- (long long)deleteCallsWithPredicate:(id)a0 error:(id *)a1;
- (void)insert:(id)a0 withTransaction:(BOOL)a1;
- (void)addUpdateTransactions:(id)a0;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2;
- (double)timerIncoming;
- (void)resetTimers;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2 limit:(unsigned long long)a3 offset:(unsigned long long)a4 batchSize:(unsigned long long)a5;
- (long long)deleteCallsWithPredicate:(id)a0 withTransaction:(BOOL)a1 error:(id *)a2;
- (id)predicateForCallKind:(id)a0;
- (void).cxx_destruct;
- (void)updateObjects:(id)a0;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2 limit:(unsigned long long)a3 offset:(unsigned long long)a4 batchSize:(unsigned long long)a5;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2 limit:(unsigned long long)a3 offset:(unsigned long long)a4 batchSize:(unsigned long long)a5;
- (void)updateAllObjects:(id)a0;
- (id)fetchObjectsWithLimits:(id)a0;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2;
- (void)deleteObjectsWithUniqueIds:(id)a0 withTransaction:(BOOL)a1;
- (void)insertRecordsWithoutTransactions:(id)a0;
- (double)timerLifetime;
- (void)initDBHandle;
- (void)updateObjectsWithCalls:(id)a0 withTransactions:(BOOL)a1;
- (id)archiveCallObject:(id)a0;
- (id)bundleIDToServiceProvider:(id)a0;
- (void)deleteObjectsWithLimits:(id)a0;

@end
