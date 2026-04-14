@class NSUUID, NSString, CKRecordID, HMDHomeManager, NSSet, HMDObjectLookup, HMCContext, HMDCoreData, HMCPartition, HMDBackingStoreLocal, HMBLocalZone, HMDHome;
@protocol HMDBackingStoreObjectProtocol, HMDBackingStoreDataSource;

@interface HMDBackingStore : HMFObject <HMDBackingStoreDataSource, HMFLogging> {
    BOOL _removedLegacyArchive;
    id<HMDBackingStoreDataSource> _dataSource;
}

@property (class, readonly, nonatomic) NSSet *allowedTypes;
@property (class, readonly, nonatomic) NSSet *internalAllowedTypes;
@property (class, readonly, nonatomic) NSSet *deeplyProblematicObjectTypes;

@property (readonly, nonatomic) HMCPartition *partition;
@property (readonly, nonatomic) HMDCoreData *coreData;
@property (readonly, nonatomic) CKRecordID *root;
@property (retain, nonatomic) HMDBackingStoreLocal *local;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMDObjectLookup *lookup;
@property (retain, nonatomic) HMBLocalZone *localZone;
@property (readonly, nonatomic) NSString *contextName;
@property (readonly, nonatomic) NSString *contextTransactionAuthor;
@property (retain, nonatomic) HMCContext *context;
@property (weak, nonatomic) id<HMDBackingStoreObjectProtocol> delegate;
@property (readonly) NSString *activeControllerKeyUsername;
@property (readonly) BOOL isAtomicSaveFeatureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)cdlsFetchManagedObjectWithUUID:(id)a0 ofManagedObjectType:(Class)a1 error:(id *)a2;
+ (id)cdlsActiveBackingStores;
+ (id)cdlsFetchManagedObjectsWithUUIDStrings:(id)a0 ofManagedObjectType:(Class)a1;
+ (id)cdlsModelIDStringsForManagedObjects:(id)a0;
+ (id)cdlsBackingStoreForHomeManagerWithError:(id *)a0;
+ (id)_saveToLocalStoreWithReason:(id)a0 homeManager:(id)a1 shouldIncrementGenerationCounter:(BOOL)a2 backingStore:(id)a3;
+ (void)saveToPersistentStoreWithReason:(id)a0 homeManager:(id)a1 shouldIncrementGenerationCounter:(BOOL)a2 backingStore:(id)a3 completionHandler:(id /* block */)a4;
+ (id)dependencySortTestInterface:(id)a0;
+ (id)cdlsFetchManagedObjectWithUUID:(id)a0 ofModelType:(Class)a1 error:(id *)a2;
+ (id)cdlsBackingStoreWithHandle:(id)a0 error:(id *)a1;
+ (id)cdlsFetchObjectWithUUID:(id)a0 ofModelType:(Class)a1 error:(id *)a2;

- (id)localBackingStore;
- (id)createHomeObjectLookupWithHome:(id)a0;
- (void)handleCoreDataDidSaveNotification:(id)a0;
- (id)transaction:(id)a0 options:(id)a1;
- (id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)a0;
- (void)cdlsReplayAllModelsStartingAt:(id)a0 isInitialGraphLoad:(BOOL)a1;
- (id)createBackingStoreOperation;
- (id)initWithUUID:(id)a0;
- (id)backingStoreOperationQueue;
- (id)initWithUUID:(id)a0 homeManager:(id)a1;
- (id)initWithUUID:(id)a0 home:(id)a1;
- (void)_cdlsReplayAllModelsStartingAt:(id)a0 fromContext:(id)a1 isInitialGraphLoad:(BOOL)a2;
- (id)dataForPersistentStoreIncrementingGeneration:(BOOL)a0 reason:(id)a1;
- (void)handleCoreDataDidSaveNotification:(id)a0 sourceContext:(id)a1;
- (void)cdlsDelete:(id)a0 destination:(unsigned long long)a1;
- (void)submitBlock:(id /* block */)a0;
- (void)handleCoreDataWillSaveNotification:(id)a0;
- (void)cdlsUpdate:(id)a0 destination:(unsigned long long)a1;
- (id)cdlsFetchObjectWithUUID:(id)a0 ofModelType:(Class)a1 error:(id *)a2;
- (void)commit:(id)a0 run:(BOOL)a1 save:(BOOL)a2 coreDataBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)logIdentifier;
- (id)initWithUUID:(id)a0 homeManager:(id)a1 home:(id)a2 dataSource:(id)a3;
- (void)cdlsCommit:(id)a0 run:(BOOL)a1 save:(BOOL)a2 coreDataBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)dmKickClients;
- (void).cxx_destruct;
- (void)commit:(id)a0 run:(BOOL)a1 save:(BOOL)a2 archiveInline:(BOOL)a3 coreDataBlock:(id /* block */)a4 completionHandler:(id /* block */)a5;

@end
