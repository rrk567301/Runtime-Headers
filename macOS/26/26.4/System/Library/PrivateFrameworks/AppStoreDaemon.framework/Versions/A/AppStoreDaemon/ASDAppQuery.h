@class NSUUID, NSString, ASDServiceBroker, NSPredicate, NSMutableDictionary, ASDAppQueryExecutor, NSObject, ASDNotificationCenter;
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
    NSUUID *_pairingID;
}

@property (readonly) NSPredicate *predicate;
@property (weak) id<ASDAppQueryResultsObserver> observer;
@property (nonatomic) long long queryOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryForBundleAtPath:(id)a0;
+ (id)queryWithPredicate:(id)a0;
+ (id)queryDefaultPairedWatchForBetaApps;
+ (id)queryForBeagleApps;
+ (id)queryForUpdates;
+ (id)queryForBundleIDs:(id)a0;
+ (void)anyWithPredicate:(id)a0 withResultHandler:(id /* block */)a1;
+ (id)queryForBetaApps;
+ (id)queryForBetaAppsOnDeviceWithPairingID:(id)a0;
+ (id)queryForSystemAppsOnDeviceWithPairingID:(id)a0;
+ (id)queryForAlmondApps;
+ (id)queryForAppClipWithStoreItemID:(long long)a0;
+ (id)queryForBetaAppsWithStoreItemIDs:(id)a0;
+ (id)queryForStoreApps;
+ (id)queryForStoreItemIDs:(id)a0;

- (id)initWithPredicate:(id)a0;
- (id)initWithPredicate:(id)a0 queryExecutor:(id)a1 serviceBroker:(id)a2 notificationCenter:(id)a3;
- (void).cxx_destruct;
- (void)notificationCenter:(id)a0 receivedNotifications:(id)a1;
- (id)init;
- (void)executeQueryWithResultHandler:(id /* block */)a0;
- (void)notificationCenter:(id)a0 receivedProgress:(id)a1;
- (void)_unitTest_setHasRunOnce:(BOOL)a0;
- (void)_handleBrokerConnectionNotification:(id)a0;
- (void)dealloc;

@end
