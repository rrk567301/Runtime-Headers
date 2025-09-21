@class NSString, NSArray, NSMutableDictionary, NSDictionary, APHomeKitDeviceMonitor, NSMutableSet, NSObject, CUSystemMonitor, CUCoalescer;
@protocol OS_dispatch_queue;

@interface APBonjourCacheHomeKit : NSObject

@property (nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) BOOL activatedPresentDeviceStashing;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) NSDictionary *cachedDevices;
@property (retain, nonatomic) NSMutableDictionary *presentRealDevices;
@property (retain, nonatomic) NSMutableSet *reportedCachedDeviceIDs;
@property (retain, nonatomic) NSMutableSet *expectedDeviceIDs;
@property (retain, nonatomic) NSString *currentNetworkSignature;
@property (nonatomic) CUSystemMonitor *systemMonitor;
@property (nonatomic) APHomeKitDeviceMonitor *homeKitDeviceMonitor;
@property (retain, nonatomic) NSArray *evictionPolicies;
@property (nonatomic) CUCoalescer *diskWriteCoalescer;
@property (nonatomic) BOOL usePresentDeviceStashing;
@property (nonatomic) BOOL requireDeviceNetworkSignature;
@property (readonly, nonatomic) NSArray *availableCachedDevices;
@property (copy, nonatomic) id /* block */ cachedDeviceFoundHandler;
@property (copy, nonatomic) id /* block */ cachedDeviceLostHandler;

+ (id)getDeviceID:(id)a0;
+ (BOOL)isDeviceCacheable:(id)a0;
+ (id)prepareDeviceInfo:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)init;
- (void)loadCache;
- (BOOL)canCacheDevice:(id)a0;
- (id)copyDescription;
- (void)realDeviceLost:(id)a0;
- (void)activateWithCompletionInternal:(id /* block */)a0;
- (void)addExpectedDeviceID:(id)a0;
- (BOOL)cacheDevice:(id)a0;
- (void)checkAndEvictCachedDevicesIfNecessary;
- (id)copyDescriptionInternal;
- (id)describeBonjourInfo:(id)a0;
- (void)evictCachedDeviceWithID:(id)a0;
- (void)evictCachedDeviceWithIDInternal:(id)a0;
- (void)forceReportCachedDevicesFound;
- (void)forceReportCachedDevicesLost;
- (id)getCacheDirectoryURLWithParentDirectory:(id)a0 creatingIfNecessary:(BOOL)a1;
- (id)getCacheFileURLCreatingParentDirectoriesIfNecessary:(BOOL)a0;
- (id)getReportableCachedDevices;
- (void)handleHomeKitDeviceConfigurationChanged:(id)a0;
- (void)handleNetworkSignatureChanged:(id)a0;
- (void)handleRealDeviceFoundForCachedDevice:(id)a0;
- (void)handleRealDeviceLostForCachedDevice:(id)a0;
- (void)invalidateInternal;
- (BOOL)isValidNetworkSignature:(id)a0;
- (void)realDeviceFound:(id)a0;
- (void)realDeviceFound:(id)a0 userInfo:(id)a1;
- (void)realDeviceFoundInternal:(id)a0;
- (void)realDeviceLostInternal:(id)a0;
- (void)removeAllExpectedDeviceIDs;
- (void)removeExpectedDeviceID:(id)a0;
- (void)reportCachedDevice:(id)a0 found:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)setupDiskWriteCoalescer;
- (void)setupEvictionPolicies;
- (void)setupIntrospector;
- (BOOL)shouldEvictDevice:(id)a0 policy:(id *)a1;
- (BOOL)shouldProcessDeviceForCache:(id)a0;
- (BOOL)uncacheDevice:(id)a0;
- (void)updateExpectedDeviceIDsAdding:(id)a0 removing:(id)a1;
- (BOOL)writeCache;

@end
