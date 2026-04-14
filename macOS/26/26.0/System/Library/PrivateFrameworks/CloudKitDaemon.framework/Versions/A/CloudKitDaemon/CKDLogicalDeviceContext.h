@class NSHashTable, CKDTokenRegistrationScheduler, NSURL, NSString, CKSQLiteDatabase, CKDThrottleManager, CKDLogicalDeviceScopedStateManager, CKDAccountDataSecurityObserver, CKDMetadataCache, CKDOperationInfoCache;
@protocol CKDTestDeviceProtocol, CKTestDeviceReferenceProtocol, CKDTestServerProtocol;

@interface CKDLogicalDeviceContext : NSObject <CKDAccountDataSecurityObserverDelegate>

@property (retain, nonatomic) CKDAccountDataSecurityObserver *accountDataSecurityObserver;
@property (retain, nonatomic) NSHashTable *sharedPcsCaches;
@property (readonly) id<CKTestDeviceReferenceProtocol> testDeviceReference;
@property (readonly, nonatomic) id<CKDTestDeviceProtocol> testDevice;
@property (readonly, nonatomic) id<CKDTestServerProtocol> testServer;
@property (readonly, nonatomic) BOOL isLiveDevice;
@property (readonly, nonatomic) BOOL isDetachedTestServerReference;
@property (readonly, nonatomic) BOOL supportsCaching;
@property (readonly, nonatomic) CKDMetadataCache *metadataCache;
@property (readonly, nonatomic) CKDOperationInfoCache *operationInfoCache;
@property (readonly, nonatomic) CKDThrottleManager *throttleManager;
@property (readonly, nonatomic) CKSQLiteDatabase *deviceScopedDatabase;
@property (readonly, weak, nonatomic) CKDLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (readonly, nonatomic) CKDTokenRegistrationScheduler *tokenRegistrationScheduler;
@property (readonly, nonatomic) NSURL *cacheDirectory;
@property (readonly, nonatomic) long long pushBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)existingDefaultContext;
+ (id)deviceContextForTestDeviceReference:(id)a0;
+ (id)defaultContext;

- (long long)boolOptionForKey:(id)a0;
- (id)_initWithTestDeviceReference:(id)a0;
- (void)accountDataSecurityObserver:(id)a0 didUpdateWalrusStatusForAccountID:(id)a1;
- (void)accountDataSecurityObserver:(id)a0 didUpdateManateeStatusForAccountID:(id)a1;
- (id)optionForKey:(id)a0;
- (void)clearPCSMemoryCaches;
- (id)pcsCacheForContainerID:(id)a0 accountOverrideInfo:(id)a1 accountID:(id)a2 encryptionServiceName:(id)a3;
- (void).cxx_destruct;
- (id)deviceScopedPushTopic:(id)a0;

@end
