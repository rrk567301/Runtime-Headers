@class NSString, NSArray, HMDHomeManager, HMDRemoteDeviceMonitor, NSMutableDictionary, HMFPromise, NSMutableSet, HMFFuture, HMDModernTransportDeviceReachabilityObserver, NSObject, HMDRemoteMessageTransport;
@protocol OS_dispatch_queue;

@interface HMDSecureRemoteMessageTransport : HMFMessageTransport <HMDSecureRemoteSessionDelegate, HMFLogging, HMFMessageTransportDelegate, HMFDumpState> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) HMDSecureRemoteMessageTransport *defaultTransport;

@property (readonly, nonatomic) HMFPromise *startPromise;
@property (readonly, nonatomic) NSMutableSet *secureRemoteSessions;
@property (retain, nonatomic) NSMutableDictionary *currentHomeConfigurations;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) HMDRemoteMessageTransport *modernTransport;
@property (readonly, copy) NSArray *transports;
@property (readonly) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly, nonatomic) HMFFuture *startFuture;
@property (readonly) HMDModernTransportDeviceReachabilityObserver *modernReachabilityObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)start;
- (void)reset;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)shortDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (id)dumpState;
- (id)accountRegistry;
- (void)secureRemoteSession:(id)a0 receivedRequestToSendMessage:(id)a1;
- (void)secureRemoteSession:(id)a0 didCloseWithError:(id)a1;
- (void)updateHome:(id)a0 configurationVersion:(long long)a1;
- (void)removeHome:(id)a0;
- (id)prepareAnswerForRequestedCapabilities:(id)a0;
- (void)pingDevice:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithTransports:(id)a0;
- (id)initWithLegacyTransports:(id)a0 modernTransport:(id)a1 reachabilityObserver:(id)a2;
- (id)_preferredTransportForMessage:(id)a0;
- (void)_electDeviceForAccountDestination:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendSecureMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handlePingMessage:(id)a0;
- (void)_handleSecureMessage:(id)a0 fromDevice:(id)a1 transport:(id)a2;
- (void)_handleElectDeviceForIDSSession:(id)a0;
- (BOOL)_haveAllCapabilities:(id)a0;
- (void)_pingDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendPingToDevice:(id)a0 timeout:(double)a1 restriction:(unsigned long long)a2 responseHandler:(id /* block */)a3;
- (id)_secureRemoteSessionForDevice:(id)a0;
- (id)_openSecureSessionToDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateDeviceInformationFromMessage:(id)a0;
- (BOOL)_handleReceivedMessage:(id)a0 transport:(id)a1;
- (void)_configureWorkQueue:(id)a0;
- (void)openSecureSessionToDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
