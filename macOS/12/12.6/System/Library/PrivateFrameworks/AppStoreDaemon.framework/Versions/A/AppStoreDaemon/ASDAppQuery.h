@class ASDAppQueryExecutor, NSString, NSMutableDictionary, NSPredicate, ASDServiceBroker, NSObject, ASDNotificationCenter;
@protocol OS_dispatch_queue, ASDAppQueryResultsObserver;

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _hasRunOnce;
    ASDNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<ASDAppQueryResultsObserver> _observer;
    ASDAppQueryExecutor *_queryExecutor;
    NSMutableDictionary *_resultCache;
    ASDServiceBroker *_serviceBroker;
    id _device;
}

@property (readonly) NSPredicate *predicate;
@property (weak) id<ASDAppQueryResultsObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryForBundleIDs:(id)a0;
+ (id)queryForStoreItemIDs:(id)a0;
+ (id)_defaultExecutor;
+ (id)_newProgressForApp:(id)a0 fromRemoteProgress:(id)a1 usingServiceBroker:(id)a2;
+ (id)queryForAlmondApps;
+ (id)queryForAppClipWithStoreItemID:(long long)a0;
+ (id)queryForBeagleApps;
+ (id)queryForBetaApps;
+ (id)queryForBundleAtPath:(id)a0;
+ (id)queryDefaultPairedWatchForBetaApps;
+ (id)queryForBetaAppsOnPairedDevice:(id)a0;
+ (id)queryForStoreApps;
+ (id)queryForBetaAppsWithStoreItemIDs:(id)a0;
+ (id)queryForSystemAppsOnPairedDevice:(id)a0;
+ (id)queryWithPredicate:(id)a0;
+ (void)anyWithPredicate:(id)a0 withResultHandler:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0;
- (void)executeQueryWithResultHandler:(id /* block */)a0;
- (id)initWithPredicate:(id)a0 queryExecutor:(id)a1 serviceBroker:(id)a2 notificationCenter:(id)a3;
- (void)_handleBrokerConnectionNotification:(id)a0;
- (void)_debugReceivedApps:(id)a0;
- (id)_replaceCachedResultsWithResults:(id)a0;
- (void)_handleNotificationRegisteredWithUserInfo:(id)a0;
- (void)_handleNotificationUnregisteredWithUserInfo:(id)a0;
- (void)_handleNotificationRefreshWithUserInfo:(id)a0;
- (void)_handleNotificationErrorWithUserInfo:(id)a0;
- (void)_updateCachedResultsWithResults:(id)a0;
- (id)_downloadProgressForApp:(id)a0 fromRemoteProgress:(id)a1;
- (id)_installProgressForApp:(id)a0 fromRemoteProgress:(id)a1;
- (void)_sendResultsChangedWithResults:(id)a0;
- (id)_removeCachedResultsForBundleIDs:(id)a0;
- (void)_handleAppsUpdatedWithResults:(id)a0;
- (void)_handleAppsRemovedWithBundleIDs:(id)a0;
- (void)_handleAppsReplacedWithResults:(id)a0;
- (void)notificationCenter:(id)a0 receivedNotifications:(id)a1;
- (void)notificationCenter:(id)a0 receivedProgress:(id)a1;
- (void)_unitTest_setHasRunOnce:(BOOL)a0;

@end
