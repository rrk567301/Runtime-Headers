@class ASDAppQueryExecutor, NSString, NSMutableDictionary, NSPredicate, ASDServiceBroker, NSObject, ASDNotificationCenter;
@protocol OS_dispatch_queue, ASDAppQueryResultsObserver;

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _hasRunOnce;
    BOOL _isForUpdates;
    ASDNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<ASDAppQueryResultsObserver> _observer;
    ASDAppQueryExecutor *_queryExecutor;
    NSMutableDictionary *_resultCache;
    ASDServiceBroker *_serviceBroker;
    NSString *_remoteDeviceID;
    id _device;
}

@property (readonly) NSPredicate *predicate;
@property (weak) id<ASDAppQueryResultsObserver> observer;
@property (nonatomic) long long queryOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)anyWithPredicate:(id)a0 withResultHandler:(id /* block */)a1;
+ (id)queryForBetaAppsWithStoreItemIDs:(id)a0;
+ (id)queryDefaultPairedWatchForBetaApps;
+ (id)queryForStoreItemIDs:(id)a0;
+ (id)queryForSystemAppsOnPairedDevice:(id)a0;
+ (id)queryForBundleIDs:(id)a0;
+ (id)queryForBundleAtPath:(id)a0;
+ (id)queryForBeagleApps;
+ (id)queryForStoreApps;
+ (id)queryForBetaApps;
+ (id)queryForAppClipWithStoreItemID:(long long)a0;
+ (id)queryForAlmondApps;
+ (id)queryForBetaAppsOnPairedDevice:(id)a0;
+ (id)queryWithPredicate:(id)a0;
+ (id)queryForUpdates;

- (void)executeQueryWithResultHandler:(id /* block */)a0;
- (void)dealloc;
- (void)notificationCenter:(id)a0 receivedProgress:(id)a1;
- (void)_unitTest_setHasRunOnce:(BOOL)a0;
- (void)_handleBrokerConnectionNotification:(id)a0;
- (id)init;
- (id)initWithPredicate:(id)a0 queryExecutor:(id)a1 serviceBroker:(id)a2 notificationCenter:(id)a3;
- (void)notificationCenter:(id)a0 receivedNotifications:(id)a1;
- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;

@end
