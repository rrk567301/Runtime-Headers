@class NSString, NSUUID, NSMutableSet, NSObject;
@protocol OS_nw_endpoint, ARDeviceConnectionDaemonServiceProtocol;

@interface ARDeviceConnectionRemoteService : ARRemoteService <ARDeviceConnectionRemoteServiceProtocol> {
    NSMutableSet *_currentAppConnections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_sessionID;
    NSObject<OS_nw_endpoint> *_deviceEndpoint;
    _Atomic BOOL _queueRunning;
}

@property (readonly, nonatomic) id<ARDeviceConnectionDaemonServiceProtocol> service;
@property (readonly) id<ARDeviceConnectionDaemonServiceProtocol> syncService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)daemonServiceInterface;
+ (id)remoteServiceInterface;

- (void)_commonInit;
- (void).cxx_destruct;
- (void)asyncServiceWithCallback:(id /* block */)a0;
- (BOOL)deregisterAppConnection:(id)a0;
- (void)didUpdateTimesyncQueue:(BOOL)a0;
- (BOOL)registerAppConnection:(id)a0;
- (BOOL)registerSessionID:(id)a0 forDeviceEndpoint:(id)a1;
- (void)serviceDidReconnect:(BOOL)a0;
- (void)setTimebaseCorrection:(double)a0 sessionID:(id)a1;
- (void)syncServiceWithTimeout:(unsigned long long)a0 callback:(id /* block */)a1;

@end
