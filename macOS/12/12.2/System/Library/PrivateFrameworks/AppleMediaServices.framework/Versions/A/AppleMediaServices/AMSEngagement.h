@class AMSEngagementConnection, NSMapTable, NSNotificationCenter, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AMSEngagement : NSObject

@property (class, readonly) NSObject<OS_dispatch_queue> *_engagementQueue;
@property (class, readonly) NSObject<OS_dispatch_queue> *_notifyQueue;
@property (class, readonly) NSNotificationCenter *notificationCenter;

@property (retain) AMSEngagementConnection *connection;
@property (retain) NSMapTable *observerInfo;
@property (retain) NSMutableSet *runningPromises;

+ (id)_connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)sync;
- (id)enqueueData:(id)a0;
- (id)enqueueEvent:(id)a0;
- (id)enqueueMessageEvent:(id)a0;
- (void)handleDialogResult:(id)a0;
- (void)_observeNotifications;
- (void)_manageRunningPromise:(id)a0;
- (void)_scheduleSyncIfNeeded:(id)a0;
- (id)_parseActions:(id)a0;
- (id)syncMetricsIdentifiers;
- (void)_pushEventReceieved:(id)a0;
- (void)_connectionErrorNotification;
- (void)_removeRunningPromise:(id)a0;
- (void)handlePushEvent:(id)a0;
- (void)_handleServiceResponse:(id)a0;
- (void)_failAllRunningPromisesWithError:(id)a0;
- (id)treatmentStoreService;
- (id)_createCombinedLogKey;
- (void)addObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;
- (void)removeObserver:(id)a0 placement:(id)a1 serviceType:(id)a2;

@end
