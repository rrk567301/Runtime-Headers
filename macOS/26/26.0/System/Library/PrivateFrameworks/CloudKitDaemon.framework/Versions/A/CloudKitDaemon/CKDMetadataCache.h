@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)sharedCache;
+ (id)dbFileName;
+ (id)cacheDatabaseSchema;

- (void)removeContainerID:(id)a0;
- (void)_enumerateContainerServerInfo:(id)a0 bindings:(id)a1 usingBlock:(id /* block */)a2;
- (id)inlock_containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)globalConfiguration;
- (id)publicKeyOfType:(id)a0 withIdentifier:(id)a1;
- (void)enumerateKnownAppContainerAccountTuplesForAccountID:(id)a0 usingBlock:(id /* block */)a1;
- (void)inlock_setDateOfLastTokenUpdate:(id)a0;
- (id)knownAppContainerAccountTuplesForAccountID:(id)a0;
- (id)dateOfLastTokenUpdate;
- (void)inlock_expungeDataForAccountID:(id)a0;
- (void)setDateOfLastTokenUpdate:(id)a0;
- (void)removeKnownApplicationID:(id)a0;
- (id)containerServerInfos;
- (void)enumerateKnownAppContainerAccountTuplesUsingBlock:(id /* block */)a0;
- (id)knownContainerizedApplicationIDs;
- (id)containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (void)setContainerServerInfo:(id)a0 forContainerID:(id)a1 accountID:(id)a2;
- (id)pushTokenForAppContainerAccountTuple:(id)a0 filterOldTokens:(BOOL)a1;
- (void)setPushToken:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void)expungeStaleAccountIDs;
- (id)knownAppContainerAccountTuples;
- (void)setApplicationMetadata:(id)a0 forApplicationID:(id)a1;
- (void)setGlobalConfiguration:(id)a0;
- (id)applicationMetadataForApplicationID:(id)a0;
- (id)initWithCacheDir:(id)a0;
- (id)knownApplicationIDs;
- (id)appContainerAccountMetadataForAppContainerAccountTuple:(id)a0;
- (void)setCachedDSID:(id)a0 forAccountID:(id)a1;
- (void)expungeOldData;
- (void)expungeDataForAccountID:(id)a0;
- (id)cachedDSIDForAccountID:(id)a0;
- (void)expungeAllData;
- (void)setPublicKey:(id)a0 ofType:(id)a1 withIdentifier:(id)a2;
- (id)inlock_applicationMetadataForApplicationID:(id)a0;
- (void)willCreateDatabase;
- (void)setAppContainerAccountMetadata:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void).cxx_destruct;

@end
