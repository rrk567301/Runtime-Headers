@class NSString, NSUUID, ARAppConnectionManager, NSMutableSet, ARNetworkServiceControl, NSObject;
@protocol OS_nw_endpoint, OS_dispatch_queue, ARDeviceConnectionRemoteServiceProtocol;

@interface ARDeviceConnectionDaemonService : ARDaemonService <ARDeviceConnectionDaemonServiceProtocol> {
    NSMutableSet *_currentAppConnections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_nw_endpoint> *_deviceEndpoint;
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_timesyncQueue;
}

@property (copy, nonatomic) id /* block */ timesyncClientCallbackBlock;
@property (weak, nonatomic) ARAppConnectionManager *appConnectionManager;
@property (weak, nonatomic) ARNetworkServiceControl *networkServiceControl;
@property (readonly, nonatomic) id<ARDeviceConnectionRemoteServiceProtocol> client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (Class)remoteServiceClass;

- (id)initWithConnection:(id)a0;
- (void)invalidationHandler;
- (void)interruptionHandler;
- (void).cxx_destruct;
- (void)deregisterAppConnection:(id)a0 reply:(id /* block */)a1;
- (void)registerAppConnection:(id)a0 reply:(id /* block */)a1;
- (void)registerAppConnections:(id)a0 reply:(id /* block */)a1;
- (void)registerSessionID:(id)a0 forDeviceEndpoint:(id)a1 reply:(id /* block */)a2;
- (void)setTimebaseCorrection:(double)a0 sessionID:(id)a1;
- (void)setupCompleteForRTChannel;
- (unsigned long long)channelDataSize;
- (void)_closeTimesync;
- (void)_timesyncLoopWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)minimumChannelQueueSize;
- (BOOL)requiresChannelSetup;

@end
