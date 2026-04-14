@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)sharedCache;
+ (id)dbFileName;
+ (id)cacheDatabaseSchema;

- (void).cxx_destruct;
- (void)willCreateDatabase;
- (void)resetThrottles;
- (void)addThrottle:(id)a0;
- (void)setGlobalConfiguration:(id)a0;
- (id)globalConfiguration;
- (id)applicationMetadataForApplicationID:(id)a0;
- (id)appContainerAccountMetadataForAppContainerAccountTuple:(id)a0;
- (void)setApplicationMetadata:(id)a0 forApplicationID:(id)a1;
- (void)setAppContainerAccountMetadata:(id)a0 forAppContainerAccountTuple:(id)a1;
- (id)knownAppContainerAccountTuplesForAccountID:(id)a0;
- (void)removeContainerID:(id)a0;
- (id)knownAppContainerAccountTuples;
- (id)initWithCacheDir:(id)a0;
- (void)setPushToken:(id)a0 forAppContainerAccountTuple:(id)a1;
- (id)dateOfLastTokenUpdate;
- (void)setDateOfLastTokenUpdate:(id)a0;
- (id)pushTokenForAppContainerAccountTuple:(id)a0 filterOldTokens:(BOOL)a1;
- (void)setCachedDSID:(id)a0 forAccountID:(id)a1;
- (id)publicKeyOfType:(id)a0 withIdentifier:(id)a1;
- (void)setPublicKey:(id)a0 ofType:(id)a1 withIdentifier:(id)a2;
- (void)setContainerServerInfo:(id)a0 forContainerID:(id)a1 accountID:(id)a2;
- (id)containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (void)expungeAllData;
- (id)cachedDSIDForAccountID:(id)a0;
- (id)throttles;
- (void)removeThrottle:(id)a0;
- (void)inlock_setDateOfLastTokenUpdate:(id)a0;
- (void)inlock_expungeDataForAccountID:(id)a0;
- (id)inlock_applicationMetadataForApplicationID:(id)a0;
- (id)inlock_containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (void)expungeOldData;
- (void)expungeDataForAccountID:(id)a0;
- (void)expungeStaleAccountIDs;
- (id)knownAppContainerTuples;
- (id)knownApplicationIDs;
- (id)knownContainerizedApplicationIDs;
- (void)removeKnownApplicationID:(id)a0;

@end
