@class NSUUID, NSString, CKRecordID, HMDHomeManager, NSSet, HMDObjectLookup, HMCContext, HMDCoreData, HMCPartition, HMDBackingStoreLocal, HMBLocalZone, HMDHome;
@protocol HMDBackingStoreObjectProtocol, HMDBackingStoreDataSource;

@interface HMDBackingStore : HMFObject <HMDBackingStoreDataSource, HMFLogging> {
    char _removedLegacyArchive;
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
@property (readonly) char isAtomicSaveFeatureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_saveToLocalStoreWithReason:(id)a0 homeManager:(id)a1 shouldIncrementGenerationCounter:(char)a2 backingStore:(id)a3;
+ (id)cdlsActiveBackingStores;
+ (id)cdlsBackingStoreForHomeManagerWithError:(id *)a0;
+ (id)cdlsBackingStoreWithHandle:(id)a0 error:(id *)a1;
+ (id)cdlsFetchManagedObjectWithUUID:(id)a0 ofManagedObjectType:(Class)a1 error:(id *)a2;
+ (id)cdlsFetchManagedObjectWithUUID:(id)a0 ofModelType:(Class)a1 error:(id *)a2;
+ (id)cdlsFetchManagedObjectsWithUUIDStrings:(id)a0 ofManagedObjectType:(Class)a1;
+ (id)cdlsFetchObjectWithUUID:(id)a0 ofModelType:(Class)a1 error:(id *)a2;
+ (id)cdlsModelIDStringsForManagedObjects:(id)a0;
+ (id)dependencySortTestInterface:(id)a0;
+ (void)saveToPersistentStoreWithReason:(id)a0 homeManager:(id)a1 shouldIncrementGenerationCounter:(char)a2 backingStore:(id)a3 completionHandler:(id /* block */)a4;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)logIdentifier;
- (id)createHomeObjectLookupWithHome:(id)a0;
- (void)_cdlsReplayAllModelsStartingAt:(id)a0 fromContext:(id)a1 isInitialGraphLoad:(char)a2;
- (id)backingStoreOperationQueue;
- (void)cdlsCommit:(id)a0 run:(char)a1 save:(char)a2 coreDataBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)cdlsDelete:(id)a0 destination:(unsigned long long)a1;
- (id)cdlsFetchObjectWithUUID:(id)a0 ofModelType:(Class)a1 error:(id *)a2;
- (void)cdlsReplayAllModelsStartingAt:(id)a0 isInitialGraphLoad:(char)a1;
- (void)cdlsUpdate:(id)a0 destination:(unsigned long long)a1;
- (void)commit:(id)a0 run:(char)a1 save:(char)a2 archiveInline:(char)a3 coreDataBlock:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)commit:(id)a0 run:(char)a1 save:(char)a2 coreDataBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)a0;
- (id)createBackingStoreOperation;
- (id)dataForPersistentStoreIncrementingGeneration:(char)a0 reason:(id)a1;
- (void)dmKickClients;
- (void)handleCoreDataDidSaveNotification:(id)a0;
- (void)handleCoreDataDidSaveNotification:(id)a0 sourceContext:(id)a1;
- (void)handleCoreDataWillSaveNotification:(id)a0;
- (id)initWithUUID:(id)a0 home:(id)a1;
- (id)initWithUUID:(id)a0 homeManager:(id)a1;
- (id)initWithUUID:(id)a0 homeManager:(id)a1 home:(id)a2 dataSource:(id)a3;
- (id)localBackingStore;
- (void)submitBlock:(id /* block */)a0;
- (id)transaction:(id)a0 options:(id)a1;

@end
