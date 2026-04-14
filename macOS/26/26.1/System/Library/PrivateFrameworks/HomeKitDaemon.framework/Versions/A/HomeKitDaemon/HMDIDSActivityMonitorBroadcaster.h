@class HMFTimer, NSString, HMDIDSActivityMonitor, NSObject;
@protocol OS_dispatch_queue, HMMXPCActivityInterface, HMDIDSActivityMonitorBroadcasterPushTokenDataSource;

@interface HMDIDSActivityMonitorBroadcaster : NSObject <HMFLogging, HMFTimerDelegate, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> {
    HMFTimer *_debounceTimer;
    BOOL _isBroadcasting;
}

@property (readonly) HMDIDSActivityMonitor *activityMonitor;
@property (retain) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource> dataSource;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMMXPCActivityInterface> xpcActivityInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteria;
+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)initWithActivityMonitor:(id)a0 timer:(id)a1 xpcActivityInterface:(id)a2;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dataSourceDidUpdate:(id)a0;
- (void)_refreshBroadcastSubscription;
- (void)configureWithQueue:(id)a0;
- (id)initWithActivityMonitor:(id)a0;
- (void)_registerForXPCPoll;
- (void)configureWithDataSource:(id)a0;

@end
