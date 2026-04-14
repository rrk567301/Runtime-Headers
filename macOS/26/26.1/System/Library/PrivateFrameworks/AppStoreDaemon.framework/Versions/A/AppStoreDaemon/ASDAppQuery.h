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

+ (id)queryForStoreApps;
+ (id)queryForAppClipWithStoreItemID:(long long)a0;
+ (id)queryDefaultPairedWatchForBetaApps;
+ (id)queryForSystemAppsOnPairedDevice:(id)a0;
+ (id)queryForBetaAppsWithStoreItemIDs:(id)a0;
+ (id)queryForBundleIDs:(id)a0;
+ (id)queryWithPredicate:(id)a0;
+ (id)queryForBetaAppsOnPairedDevice:(id)a0;
+ (id)queryForBeagleApps;
+ (void)anyWithPredicate:(id)a0 withResultHandler:(id /* block */)a1;
+ (id)queryForUpdates;
+ (id)queryForAlmondApps;
+ (id)queryForBetaApps;
+ (id)queryForStoreItemIDs:(id)a0;
+ (id)queryForBundleAtPath:(id)a0;

- (void)notificationCenter:(id)a0 receivedNotifications:(id)a1;
- (void)_handleBrokerConnectionNotification:(id)a0;
- (id)initWithPredicate:(id)a0;
- (id)initWithPredicate:(id)a0 queryExecutor:(id)a1 serviceBroker:(id)a2 notificationCenter:(id)a3;
- (void)dealloc;
- (void)_unitTest_setHasRunOnce:(BOOL)a0;
- (void)notificationCenter:(id)a0 receivedProgress:(id)a1;
- (void).cxx_destruct;
- (void)executeQueryWithResultHandler:(id /* block */)a0;
- (id)init;

@end
