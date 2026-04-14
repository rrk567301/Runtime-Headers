@class CKDMetadataCache, NSHashTable, CKTestDevice, NSURL, CKSQLiteDatabase, CKTestServer, CKDThrottleManager, CKDLogicalDeviceScopedStateManager, CKTestDeviceReference, CKDAccountDataSecurityObserver, CKDOperationInfoCache, CKDTokenRegistrationScheduler;

@interface CKDLogicalDeviceContext : NSObject

@property (retain, nonatomic) CKTestServer *testServer;
@property (retain, nonatomic) CKDMetadataCache *metadataCache;
@property (retain, nonatomic) CKDOperationInfoCache *operationInfoCache;
@property (retain, nonatomic) CKDThrottleManager *throttleManager;
@property (retain, nonatomic) CKDLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (retain, nonatomic) CKDTokenRegistrationScheduler *tokenRegistrationScheduler;
@property (retain, nonatomic) CKDAccountDataSecurityObserver *accountDataSecurityObserver;
@property (retain, nonatomic) CKSQLiteDatabase *deviceScopedDatabase;
@property (retain, nonatomic) NSHashTable *sharedPcsCaches;
@property (readonly, nonatomic) CKTestDeviceReference *testDeviceReference;
@property (readonly, nonatomic) CKTestDevice *testDevice;
@property (readonly, nonatomic) BOOL isLiveDevice;
@property (readonly, nonatomic) NSURL *cacheDirectory;
@property (readonly, nonatomic) long long pushBehavior;

+ (id)defaultContext;
+ (id)deviceContextForTestDeviceReference:(id)a0;
+ (id)existingDefaultContext;

- (void).cxx_destruct;
- (id)deviceScopedPushTopic:(id)a0;
- (void)clearPCSMemoryCaches;
- (id)pcsCacheForContainerID:(id)a0 accountOverrideInfo:(id)a1 accountID:(id)a2 encryptionServiceName:(id)a3;
- (id)_initWithTestDeviceReference:(id)a0;

@end
