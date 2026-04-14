@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)sharedCache;
+ (id)cacheDatabaseSchema;
+ (id)dbFileName;

- (void)enumerateKnownAppContainerAccountTuplesUsingBlock:(id /* block */)a0;
- (void)setApplicationMetadata:(id)a0 forApplicationID:(id)a1;
- (void)expungeStaleAccountIDs;
- (id)inlock_applicationMetadataForApplicationID:(id)a0;
- (void)inlock_expungeDataForAccountID:(id)a0;
- (void)inlock_setDateOfLastTokenUpdate:(id)a0;
- (id)pushTokenForAppContainerAccountTuple:(id)a0 filterOldTokens:(BOOL)a1;
- (void)removeContainerID:(id)a0;
- (id)inlock_containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)cachedDSIDForAccountID:(id)a0;
- (void)setCachedDSID:(id)a0 forAccountID:(id)a1;
- (id)knownContainerizedApplicationIDs;
- (id)publicKeyOfType:(id)a0 withIdentifier:(id)a1;
- (void)setPushToken:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void)setContainerServerInfo:(id)a0 forContainerID:(id)a1 accountID:(id)a2;
- (void)expungeOldData;
- (id)containerServerInfos;
- (void).cxx_destruct;
- (id)globalConfiguration;
- (id)appContainerAccountMetadataForAppContainerAccountTuple:(id)a0;
- (id)dateOfLastTokenUpdate;
- (void)setGlobalConfiguration:(id)a0;
- (void)expungeDataForAccountID:(id)a0;
- (void)willCreateDatabase;
- (id)applicationMetadataForApplicationID:(id)a0;
- (id)knownApplicationIDs;
- (void)setAppContainerAccountMetadata:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void)enumerateKnownAppContainerAccountTuplesForAccountID:(id)a0 usingBlock:(id /* block */)a1;
- (void)_enumerateContainerServerInfo:(id)a0 bindings:(id)a1 usingBlock:(id /* block */)a2;
- (id)knownAppContainerAccountTuplesForAccountID:(id)a0;
- (id)initWithCacheDir:(id)a0;
- (void)expungeAllData;
- (void)removeKnownApplicationID:(id)a0;
- (id)knownAppContainerAccountTuples;
- (void)setDateOfLastTokenUpdate:(id)a0;
- (void)setPublicKey:(id)a0 ofType:(id)a1 withIdentifier:(id)a2;

@end
