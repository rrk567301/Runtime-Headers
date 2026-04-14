@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)sharedCache;
+ (id)dbFileName;
+ (id)cacheDatabaseSchema;

- (void).cxx_destruct;
- (void)willCreateDatabase;
- (void)setGlobalConfiguration:(id)a0;
- (id)globalConfiguration;
- (id)initWithCacheDir:(id)a0;
- (void)expungeAllData;
- (void)expungeOldData;
- (void)inlock_expungeDataForAccountID:(id)a0;
- (void)expungeDataForAccountID:(id)a0;
- (void)expungeStaleAccountIDs;
- (id)pushTokenForAppContainerAccountTuple:(id)a0 filterOldTokens:(BOOL)a1;
- (void)setPushToken:(id)a0 forAppContainerAccountTuple:(id)a1;
- (id)knownAppContainerAccountTuplesForAccountID:(id)a0;
- (id)knownAppContainerTuples;
- (id)knownAppContainerAccountTuples;
- (id)appContainerAccountMetadataForAppContainerAccountTuple:(id)a0;
- (void)setAppContainerAccountMetadata:(id)a0 forAppContainerAccountTuple:(id)a1;
- (id)dateOfLastTokenUpdate;
- (void)inlock_setDateOfLastTokenUpdate:(id)a0;
- (void)setDateOfLastTokenUpdate:(id)a0;
- (id)inlock_applicationMetadataForApplicationID:(id)a0;
- (id)applicationMetadataForApplicationID:(id)a0;
- (void)setApplicationMetadata:(id)a0 forApplicationID:(id)a1;
- (id)knownApplicationIDs;
- (id)knownContainerizedApplicationIDs;
- (void)removeKnownApplicationID:(id)a0;
- (id)publicKeyOfType:(id)a0 withIdentifier:(id)a1;
- (void)setPublicKey:(id)a0 ofType:(id)a1 withIdentifier:(id)a2;
- (id)inlock_containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (void)setContainerServerInfo:(id)a0 forContainerID:(id)a1 accountID:(id)a2;
- (void)removeContainerID:(id)a0;
- (void)setCachedDSID:(id)a0 forAccountID:(id)a1;
- (id)cachedDSIDForAccountID:(id)a0;

@end
