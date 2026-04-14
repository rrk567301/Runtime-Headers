@class HMDAppleAccountManager, HMFMessageTransport, HMDRemoteAccountManager, IDSAccount, NSObject, NSMapTable, IDSService, NSString, HMDIDSActivityMonitorObserver, HMDModernTransportDeviceReachabilityObserver, NSOperationQueue, NSArray, HMFNetMonitor, HMDAccountRegistry, HMFTimer;
@protocol OS_dispatch_queue, HMFLocking, HMDRemoteDeviceMonitorFactory;

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFTimerDelegate, IDSServiceDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, HMDIDSActivityMonitorObserverDelegate, HMDModernTransportDeviceReachabilityObserverListener, HMFNetMonitorDelegate, HMDRemoteDeviceMonitorFactory> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    HMDModernTransportDeviceReachabilityObserver *_transportReachabilityObserver;
    BOOL _started;
    IDSService *_service;
    IDSService *_modernService;
    HMFMessageTransport *_transport;
    IDSAccount *_iCloudAccount;
    HMDIDSActivityMonitorObserver *_activityObserver;
    HMDAppleAccountManager *_accountManager;
    HMDRemoteAccountManager *_remoteAccountManager;
    HMFNetMonitor *_netMonitor;
    id<HMDRemoteDeviceMonitorFactory> _factory;
    NSMapTable *_deviceInformationByDevice;
    HMFTimer *_deviceHealthTimer;
    HMFTimer *_initialDeviceHealthTimer;
}

@property (retain, nonatomic) HMDModernTransportDeviceReachabilityObserver *transportReachabilityObserver;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly) NSArray *unreachableDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)a0 timeout:(double)a1 restriction:(unsigned long long)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)account:(id)a0 loginChanged:(id)a1;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)timerDidFire:(id)a0;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (id)dumpState;
- (void)modernTransportDeviceReachabilityObserverDidUpdate:(id)a0 isReachable:(BOOL)a1;
- (void)confirmDevice:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)startMonitoringDevice:(id)a0 withInitialReachability:(id)a1;
- (id)initWithAccountRegistry:(id)a0 transport:(id)a1 activityObserver:(id)a2;
- (void)observer:(id)a0 didUpdateDevice:(id)a1 isOnline:(BOOL)a2;
- (id)newConfirmationHandlerWithTimeout:(double)a0 workQueue:(id)a1 handler:(id /* block */)a2;
- (id)initWithAccountRegistry:(id)a0 activityObserver:(id)a1 queue:(id)a2 service:(id)a3 modernService:(id)a4 transport:(id)a5 accountManager:(id)a6 remoteAccountManager:(id)a7 netMonitor:(id)a8 factory:(id)a9;
- (id)newInitialDeviceHealthTimer;
- (id)newRepeatingDeviceHealthTimer;
- (void)handleCurrentDeviceUpdate:(id)a0;
- (void)handleAccountRemoved:(id)a0;
- (void)_handleGlobalReachabilityChange;
- (void)handleDeviceRemovedFromAccount:(id)a0;
- (id)newSendMessageOperationWithMessage:(id)a0;
- (id)newDeviceMonitoringTimer;
- (void)stopMonitoringDevice:(id)a0;
- (void)_handleIncomingMessageForDevice:(id)a0;

@end
