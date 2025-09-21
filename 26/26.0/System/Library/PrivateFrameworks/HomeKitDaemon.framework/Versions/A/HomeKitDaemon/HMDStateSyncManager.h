@class NSHashTable, NSNotificationCenter, HMFTimer, NSString, NSUUID, NSMutableDictionary, HMFMessageDispatcher, NSMutableSet, HMDResidentStatusChannel, NSObject, NSMapTable, HMDHome;
@protocol HMDResidentDeviceManagerContext, OS_dispatch_queue, HMFTimerProvider;

@interface HMDStateSyncManager : NSObject <HMFLogging, HMDResidentStatusChannelObserver, HMFMessageReceiver, HMFTimerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    HMFMessageDispatcher *_dispatcher;
}

@property (readonly, weak) HMDHome *home;
@property (readonly, weak) HMDResidentStatusChannel *residentStatusChannel;
@property (readonly, weak) id<HMDResidentDeviceManagerContext> residentDeviceManagerContext;
@property (readonly) BOOL isResidentCapable;
@property (readonly, nonatomic) NSHashTable *stateSyncDelegates;
@property (readonly, nonatomic) NSMapTable *stateSyncObserversByDomain;
@property (readonly, nonatomic) NSMutableDictionary *scopeByDomain;
@property (readonly, nonatomic) NSMutableDictionary *syncOptionsByDomain;
@property (readonly, nonatomic) NSMutableDictionary *lastPublishedStateByDomain;
@property (readonly, nonatomic) NSMutableDictionary *lastPublishedChangeTokenByDomain;
@property (readonly, nonatomic) NSMutableDictionary *lastSeenChangeTokensByDomain;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<HMFTimerProvider> timerProvider;
@property (retain, nonatomic) HMFTimer *fetchRetryTimer;
@property (retain, nonatomic) NSMutableSet *fetchRetryDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)configure;
- (id)_createBackoffTimer;
- (void)addDelegate:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_handleStateSyncPublishMessage:(id)a0;
- (void)publishState:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (id)_changeTokenForState:(id)a0;
- (void)_configureWithResidentStatusChannel:(id)a0;
- (void)_handleResidentStatusChannelReadyNotification:(id)a0;
- (void)_handleStateSyncFetchMessage:(id)a0;
- (void)_handleStateSyncResponse:(id)a0 domain:(id)a1;
- (void)_performSyncForDomains:(id)a0;
- (void)_publishToAllUsersWithState:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)_publishToResidentsWithState:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)_removeDomainFromFetchRetryDomains:(id)a0;
- (void)_startRetryTimerForDomains:(id)a0;
- (void)_stopPublishingToAllUsersForDomain:(id)a0 completion:(id /* block */)a1;
- (void)_stopPublishingToResidentsForDomain:(id)a0 completion:(id /* block */)a1;
- (void)channel:(id)a0 didObserveNewDomainDataDevices:(id)a1 removedDomainDataDevices:(id)a2 updatedDomainDataDevices:(id)a3;
- (void)configureDomain:(id)a0 scope:(long long)a1 syncOptions:(long long)a2 completion:(id /* block */)a3;
- (id)initWithHome:(id)a0 queue:(id)a1 isResidentCapable:(BOOL)a2 dispatcher:(id)a3 notificationCenter:(id)a4 residentDeviceManagerContext:(id)a5 timerProvider:(id)a6;
- (id)initWithHome:(id)a0 queue:(id)a1 residentDeviceManagerContext:(id)a2;
- (void)publishChangeToken:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)registerObserver:(id)a0 domain:(id)a1;
- (void)stopPublishingForDomain:(id)a0 completion:(id /* block */)a1;
- (void)unregisterObserverForDomain:(id)a0;

@end
