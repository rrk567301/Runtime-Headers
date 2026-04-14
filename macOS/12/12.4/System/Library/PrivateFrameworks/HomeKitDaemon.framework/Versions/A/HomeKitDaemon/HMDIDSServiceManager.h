@class NSString, HMDIDSActivityMonitorObserver, IDSService, HMDIDSActivityMonitor, HMDIDSActivityMonitorBroadcaster, NSObject, _HMDIDSProxyLinkPreferenceAssertion;
@protocol OS_dispatch_queue;

@interface HMDIDSServiceManager : HMFObject <HMFLogging>

@property (class, readonly) HMDIDSServiceManager *sharedManager;
@property (class, readonly) IDSService *sharedIDSService;
@property (class, readonly, copy) NSString *sharedIDSServiceName;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDIDSActivityMonitor *activityMonitor;
@property (weak) _HMDIDSProxyLinkPreferenceAssertion *proxyLinkPreferenceAssertion;
@property (readonly) IDSService *service;
@property (readonly) IDSService *legacyService;
@property (readonly) IDSService *proxyService;
@property (readonly) IDSService *streamService;
@property (readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (readonly) HMDIDSActivityMonitorObserver *activityObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
