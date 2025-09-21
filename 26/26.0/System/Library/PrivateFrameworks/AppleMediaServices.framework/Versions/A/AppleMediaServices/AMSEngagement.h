@class NSString, AMSEngagementMessageCache, AMSBagKeySet, NSObject, NSMutableSet, AMSEngagementConnection, NSMapTable, NSNotificationCenter;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSEngagement : NSObject <AMSBagConsumer> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *_notifyQueue;
@property (class, readonly) NSObject<OS_dispatch_queue> *_engagementQueue;
@property (class, readonly) NSNotificationCenter *notificationCenter;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSMapTable *observerInfo;
@property (retain) NSMutableSet *runningPromises;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSEngagementConnection *connection;
@property (readonly) AMSEngagementMessageCache *cacheInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_connection;
+ (id)createBagForSubProfile;
+ (void)_recordLoggingEventWithBag:(id)a0 enqueueData:(id)a1 eventType:(id)a2 userInfo:(id)a3 destinations:(id)a4 error:(id)a5;
+ (double)_enqueueTimeout;

- (id)enqueueEvent:(id)a0;
- (id)sync;
- (void)handleDialogResult:(id)a0;
- (void)handlePushEvent:(id)a0;
- (id)enqueueData:(id)a0 to:(id)a1;
- (void)dealloc;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2 queue:(id)a3;
- (id)syncMetricsIdentifiers;
- (void)_scheduleSyncIfNeeded:(id)a0;
- (void)addObserver:(id)a0 placements:(id)a1 serviceType:(id)a2;
- (void)_pushEventReceived:(id)a0;
- (id)_createCombinedLogKey;
- (id)_enqueue:(id)a0;
- (void)addObserver:(id)a0 placements:(id)a1 serviceType:(id)a2 queue:(id)a3;
- (id)manualSyncMetricsIdentifiers;
- (id)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2;
- (id)enqueueMessageEvent:(id)a0;
- (id)init;
- (id)fetchMetricsIdentifiers;
- (void)_handleServiceResponse:(id)a0;
- (void)addCachePolicy:(long long)a0 forPlacements:(id)a1 serviceType:(id)a2;
- (id)enqueueData:(id)a0;
- (id)initWithBag:(id)a0;
- (id)initWithoutBag;
- (id)_enqueueWithContext:(id)a0;
- (void)_connectionErrorNotification;
- (void)removeObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (void)_manageRunningPromise:(id)a0;
- (id)treatmentStoreService;
- (id)_parseActions:(id)a0;
- (void)_observeNotifications;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (id)syncDestinations:(id)a0;
- (void)_failAllRunningPromisesWithError:(id)a0;
- (id)syncWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)_removeRunningPromise:(id)a0;

@end
