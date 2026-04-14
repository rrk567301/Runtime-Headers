@class NSMapTable, AMSEngagementConnection, NSNotificationCenter, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSEngagement : NSObject

@property (class, readonly) NSObject<OS_dispatch_queue> *_notifyQueue;
@property (class, readonly) NSObject<OS_dispatch_queue> *_engagementQueue;
@property (class, readonly) NSNotificationCenter *notificationCenter;

@property (retain) NSMapTable *observerInfo;
@property (retain) NSMutableSet *runningPromises;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly) AMSEngagementConnection *connection;

+ (id)_connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)sync;
- (id)initWithBag:(id)a0;
- (id)enqueueMessageEvent:(id)a0;
- (void)handleDialogResult:(id)a0;
- (void)_pushEventReceieved:(id)a0;
- (void)_connectionErrorNotification;
- (id)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2;
- (id)enqueueEvent:(id)a0;
- (id)enqueueData:(id)a0;
- (id)syncDestinations:(id)a0;
- (id)treatmentStoreService;
- (id)syncMetricsIdentifiers;
- (id)_createCombinedLogKey;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2 queue:(id)a3;
- (void)removeObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (void)_observeNotifications;
- (void)_manageRunningPromise:(id)a0;
- (void)_removeRunningPromise:(id)a0;
- (void)_failAllRunningPromisesWithError:(id)a0;
- (id)_parseActions:(id)a0;
- (void)handlePushEvent:(id)a0;
- (void)_handleServiceResponse:(id)a0;
- (void)_scheduleSyncIfNeeded:(id)a0;

@end
