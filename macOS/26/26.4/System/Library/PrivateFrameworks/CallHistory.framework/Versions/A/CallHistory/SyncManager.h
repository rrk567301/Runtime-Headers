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

- (void)resetTimers;
- (long long)deleteCallsWithPredicate:(id)a0 withTransaction:(BOOL)a1 error:(id *)a2;
- (void)deleteAllObjects;
- (id)predicateForCallKinds:(id)a0;
- (id)initWithTransactionManager:(id)a0 dbHandle:(id)a1;
- (void)insert:(id)a0 withTransaction:(BOOL)a1;
- (double)timerOutgoing;
- (void)insertRecordsWithoutTransactions:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (void)deleteObjectsWithLimits:(id)a0;
- (id)fetchAllObjects;
- (id)fetchObjectsWithLimits:(id)a0;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2 limit:(unsigned long long)a3 offset:(unsigned long long)a4 batchSize:(unsigned long long)a5;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2;
- (double)timerLifetime;
- (id)bundleIDToServiceProvider:(id)a0;
- (void).cxx_destruct;
- (id)archiveCallObject:(id)a0;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2 limit:(unsigned long long)a3 offset:(unsigned long long)a4 batchSize:(unsigned long long)a5;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2 limit:(unsigned long long)a3 offset:(unsigned long long)a4 batchSize:(unsigned long long)a5;
- (void)updateAllObjects:(id)a0;
- (id)predicateForLimits:(id)a0;
- (void)addUpdateTransactions:(id)a0;
- (id)predicateForCallKind:(id)a0;
- (id)init;
- (void)updateObjectsWithCalls:(id)a0 withTransactions:(BOOL)a1;
- (double)timerIncoming;
- (long long)deleteCallsWithPredicate:(id)a0 error:(id *)a1;
- (long long)setRead:(BOOL)a0 forCallsWithPredicate:(id)a1 error:(id *)a2;
- (void)updateObjects:(id)a0;
- (void)deleteObjectsWithUniqueIds:(id)a0 withTransaction:(BOOL)a1;
- (void)insertRecords:(id)a0;
- (id)updatedPredicate:(id)a0 withLimits:(id)a1;
- (void)initDBHandle;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1 limitsDictionary:(id)a2;

@end
