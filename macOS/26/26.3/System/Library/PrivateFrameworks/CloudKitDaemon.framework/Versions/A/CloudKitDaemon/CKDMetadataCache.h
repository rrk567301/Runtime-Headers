@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)dbFileName;
+ (id)sharedCache;
+ (id)cacheDatabaseSchema;

- (void)setCachedDSID:(id)a0 forAccountID:(id)a1;
- (void)removeKnownApplicationID:(id)a0;
- (id)knownAppContainerAccountTuples;
- (void)expungeOldData;
- (void)setContainerServerInfo:(id)a0 forContainerID:(id)a1 accountID:(id)a2;
- (void)expungeAllData;
- (id)knownAppContainerAccountTuplesForAccountID:(id)a0;
- (id)inlock_containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (void)setAppContainerAccountMetadata:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void)expungeDataForAccountID:(id)a0;
- (id)cachedDSIDForAccountID:(id)a0;
- (id)inlock_applicationMetadataForApplicationID:(id)a0;
- (id)containerServerInfos;
- (void)setPushToken:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void)willCreateDatabase;
- (id)containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)dateOfLastTokenUpdate;
- (id)applicationMetadataForApplicationID:(id)a0;
- (void)_enumerateContainerServerInfo:(id)a0 bindings:(id)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)enumerateKnownAppContainerAccountTuplesUsingBlock:(id /* block */)a0;
- (id)appContainerAccountMetadataForAppContainerAccountTuple:(id)a0;
- (void)setDateOfLastTokenUpdate:(id)a0;
- (void)expungeStaleAccountIDs;
- (void)inlock_setDateOfLastTokenUpdate:(id)a0;
- (void)removeContainerID:(id)a0;
- (void)setApplicationMetadata:(id)a0 forApplicationID:(id)a1;
- (void)setGlobalConfiguration:(id)a0;
- (id)knownContainerizedApplicationIDs;
- (id)pushTokenForAppContainerAccountTuple:(id)a0 filterOldTokens:(BOOL)a1;
- (void)inlock_expungeDataForAccountID:(id)a0;
- (id)publicKeyOfType:(id)a0 withIdentifier:(id)a1;
- (void)enumerateKnownAppContainerAccountTuplesForAccountID:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithCacheDir:(id)a0;
- (id)knownApplicationIDs;
- (id)globalConfiguration;
- (void)setPublicKey:(id)a0 ofType:(id)a1 withIdentifier:(id)a2;

@end
