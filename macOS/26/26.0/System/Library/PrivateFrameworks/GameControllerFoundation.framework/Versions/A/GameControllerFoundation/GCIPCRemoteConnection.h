@class NSArray, NSXPCConnection, NSString, NSObject;
@protocol OS_os_log;

@interface GCIPCRemoteConnection : NSObject <GCIPCConnection> {
    _Atomic BOOL _invalid;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSArray *interruptionHandlers;
@property (copy) NSArray *invalidationHandlers;
@property (readonly) NSObject<OS_os_log> *log;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly) struct { unsigned int x0[8]; } peerAuditToken;
@property (readonly) int peerAuditSessionIdentifier;
@property (readonly) int peerProcessIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) NSString *peerBundleIdentifier;

- (id)addInterruptionHandler:(id /* block */)a0;
- (id)remoteProxyWithErrorHandler:(id /* block */)a0;
- (id)debugDescription;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)init;
- (id)description;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (unsigned long long)hash;
- (id)remoteProxy;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)scheduleSendBarrierBlock:(id /* block */)a0;
- (id)addInvalidationHandler:(id /* block */)a0;
- (id)peerValueForEntitlement:(id)a0;
- (BOOL)isEqualToConnection:(id)a0;

@end
