@class NSString, NSXPCConnection, ARAppConnection, ARRemoteService, NSObject;
@protocol OS_os_transaction, ARDaemonServiceDelegate, OS_os_activity, ARRemoteServiceBaseProtocol, ARNetworkingServiceType, OS_nw_endpoint, OS_channel_rt, ARDaemonServiceDataSource;

@interface ARDaemonService : NSObject <ARServiceType, ARDaemonServiceBaseProtocol> {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_os_activity> *_daemonServiceActivity;
    NSString *_shortenedServiceNameForLogging;
    BOOL _authorized;
    BOOL _dataAccessAllowed;
    BOOL _hidFocused;
}

@property (class, readonly, nonatomic) Class remoteServiceClass;
@property (class, readonly, nonatomic) BOOL serviceTypeRequiresDataAccessMonitoring;
@property (class, readonly, nonatomic) BOOL serviceTypeRequiresAlgorithmObservationWhileSuspended;
@property (class, readonly, nonatomic) long long maximumConcurrentServicesPerClient;
@property (class, readonly, nonatomic) BOOL isSupported;

@property (retain) NSObject<OS_channel_rt> *channel;
@property (retain) NSObject<OS_channel_rt> *dispatchChannel;
@property (retain) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
@property (retain, nonatomic) id<ARNetworkingServiceType> networkingService;
@property (retain, nonatomic) ARAppConnection *clientAppConnection;
@property (retain) ARRemoteService *remoteService;
@property (nonatomic, getter=isDryRun) BOOL dryRun;
@property (readonly) id<ARRemoteServiceBaseProtocol> clientService;
@property (nonatomic) BOOL hasStreamingBundleIDOverrideEntitlement;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (readonly, nonatomic) NSString *clientProcessName;
@property (weak, nonatomic) id<ARDaemonServiceDataSource> dataSource;
@property (weak, nonatomic) id<ARDaemonServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (id)deviceID;
- (void)invalidationHandler;
- (void)interruptionHandler;
- (void).cxx_destruct;
- (void)invalidateClient;
- (void)setupCompleteForRTChannel;
- (void)startService:(id /* block */)a0;
- (void)startServiceWithDeviceEndpoint:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)channelDataSize;
- (void)configureWithNetworkingService:(id)a0;
- (void)_commonInitWithProcessName:(id)a0 processIdentifier:(int)a1 bundleIdentifier:(id)a2;
- (void)beginDispatchChannelCreation;
- (void)beginRTChannelCreation;
- (unsigned long long)dispatchChannelDataSize;
- (id)initAsLocalService;
- (id)initWithConnection:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2;
- (id)initWithRemoteService:(id)a0;
- (unsigned long long)minimumChannelQueueSize;
- (BOOL)requiresChannelSetup;
- (BOOL)requiresDispatchChannelSetup;
- (void)setupCompleteForRTDispatchChannel;
- (id)shortenedServiceNameForLogging;

@end
