@class NSString, NSXPCConnection;

@interface CATXPCTransport : CATTransport <CATXPCInterface> {
    NSXPCConnection *mConnection;
    BOOL mConnectionHasResumed;
    BOOL mConnectionShouldInvalidate;
    BOOL mConnectionHasInvalidated;
}

@property (readonly) int auditSessionIdentifier;
@property (readonly) int processIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)invalidateConnection;
- (id)operationToSendMessage:(id)a0;
- (void)dealloc;
- (void)resumeConnection;
- (void)didInvalidate;
- (void)suspendConnection;
- (id)initWithXPCConnection:(id)a0;
- (void)processMessage:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)setUpConnection;
- (id)valueForEntitlement:(id)a0;
- (void)tearDownConnection;
- (void)transportSendMessageOperation:(id)a0 processMessage:(id)a1;
- (BOOL)boolValueForEntitlement:(id)a0;
- (void).cxx_destruct;

@end
