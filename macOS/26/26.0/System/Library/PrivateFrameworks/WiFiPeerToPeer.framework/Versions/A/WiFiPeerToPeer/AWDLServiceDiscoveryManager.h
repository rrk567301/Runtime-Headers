@class NSString, NSXPCConnection, NSLock, NSMutableArray;

@interface AWDLServiceDiscoveryManager : NSObject <AWDLServiceDiscoveryManagerXPCDelegate> {
    NSLock *_lock;
    NSXPCConnection *_xpcConnection;
    int _notifyToken;
    BOOL _attemptedReconnect;
    NSMutableArray *_activeTrafficRegistrations;
    long long _suspendCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setTrafficRegistration:(id)a0 error:(id *)a1;
- (BOOL)_requiresConnection;
- (BOOL)performRealtimeConnectivityCheckWithConfiguration:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)invalidatedActiveTrafficRegistration:(id)a0;
- (BOOL)clearTrafficRegistration:(id)a0 error:(id *)a1;
- (BOOL)queryAirPlayConnectivityWithConfiguration:(id)a0 error:(id *)a1;
- (void)connectionInvalidated;
- (id)init;
- (BOOL)_usingAWDLDiscoveryManagerProxy:(id /* block */)a0 onSuccess:(id /* block */)a1 error:(id *)a2;
- (BOOL)getActiveTrafficRegistrationWithCompletionHandler:(id /* block */)a0;
- (BOOL)resumeAWDLWithError:(id *)a0;
- (void)_removeFirstTrafficRegistrationMatching:(id)a0;
- (BOOL)setTrafficRegistration:(id)a0 onInvalidationHandler:(id /* block */)a1 error:(id *)a2;
- (BOOL)suspendAWDLWithError:(id *)a0;
- (void).cxx_destruct;
- (void)_destroyConnection;
- (void)_retryConnection;

@end
