@class NSString, HMDIDSActivityMonitorObserver, HMDIDSActivityMonitor, NSMutableDictionary, HMDIDSActivityMonitorBroadcaster, NSMutableSet, NSObject, _HMDIDSProxyLinkPreferenceAssertion;
@protocol HMDIDSService, OS_dispatch_queue, HMDIDSServiceManagerNotificationCenter;

@interface HMDIDSServiceManager : HMFObject <HMFLogging> {
    NSMutableSet *_applicationBundleIdentifiersThatNeedWakingMessages;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDIDSActivityMonitor *_activityMonitor;
    _HMDIDSProxyLinkPreferenceAssertion *_proxyLinkPreferenceAssertion;
    id<HMDIDSServiceManagerNotificationCenter> _notificationCenter;
    NSMutableDictionary *_services;
}

@property (class, readonly) HMDIDSServiceManager *sharedManager;
@property (class, readonly, copy) NSString *sharedIDSServiceName;

@property (readonly) id<HMDIDSService> service;
@property (readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (readonly) HMDIDSActivityMonitorObserver *activityObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)setActivityMonitorDataSource:(id)a0;
- (void)unconfigure;
- (void)retrieveFirewallWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)serviceWithName:(id)a0;
- (id)initWithNotificationCenter:(id)a0;
- (id)initWithDefaults;
- (void)handleProcessInfoStateChanged:(id)a0;
- (void)addProxyServiceLinkPreferencesAssertionHolder:(id)a0;
- (void).cxx_destruct;

@end
