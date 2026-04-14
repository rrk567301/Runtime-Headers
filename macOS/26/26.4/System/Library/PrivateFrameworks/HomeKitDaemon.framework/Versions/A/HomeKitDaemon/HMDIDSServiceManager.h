@class NSString, HMDIDSActivityMonitorObserver, HMDIDSActivityMonitor, NSMutableDictionary, HMDIDSActivityMonitorBroadcaster, NSMutableSet, NSObject, _HMDIDSProxyLinkPreferenceAssertion;
@protocol HMDIDSService, HMDIDSServiceManagerNotificationCenter, HMDIDSServiceManager, OS_dispatch_queue;

@interface HMDIDSServiceManager : HMFObject <HMFLogging, HMDIDSServiceManager> {
    NSMutableSet *_applicationBundleIdentifiersThatNeedWakingMessages;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDIDSActivityMonitor *_activityMonitor;
    _HMDIDSProxyLinkPreferenceAssertion *_proxyLinkPreferenceAssertion;
    id<HMDIDSServiceManagerNotificationCenter> _notificationCenter;
    NSMutableDictionary *_services;
}

@property (class, readonly) id<HMDIDSServiceManager> sharedManager;
@property (class, readonly, copy) NSString *sharedIDSServiceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<HMDIDSService> service;
@property (readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (readonly) HMDIDSActivityMonitorObserver *activityObserver;

+ (id)logCategory;
+ (id)makeDefaultServiceManager;

- (void)configure;
- (void)setActivityMonitorDataSource:(id)a0;
- (id)initWithNotificationCenter:(id)a0;
- (void)addProxyServiceLinkPreferencesAssertionHolder:(id)a0;
- (void)handleProcessInfoStateChanged:(id)a0;
- (void)retrieveFirewallWithQueue:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)serviceWithName:(id)a0;
- (void)unconfigure;

@end
