@class NSString, NSMutableDictionary, HMDIDSActivityMonitor;
@protocol HMDIDSActivityMonitorObserverRegistrationManager;

@interface HMDIDSActivityMonitorObserver : NSObject <IDSActivityMonitorListenerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) HMDIDSActivityMonitor *activityMonitor;
@property (readonly) NSMutableDictionary *subactivityToDelegatesMap;
@property (retain) id<HMDIDSActivityMonitorObserverRegistrationManager> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)addObserver:(id)a0 forSubActivity:(id)a1;
- (id)logIdentifier;
- (void)removeObserver:(id)a0 forSubActivity:(id)a1;
- (void)stopObservingPresenceForDevice:(id)a0;
- (void)configureWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithActivityMonitor:(id)a0;
- (void)activityMonitor:(id)a0 didReceiveActivityUpdate:(id)a1;
- (void)startObservingPresenceForDevice:(id)a0;

@end
