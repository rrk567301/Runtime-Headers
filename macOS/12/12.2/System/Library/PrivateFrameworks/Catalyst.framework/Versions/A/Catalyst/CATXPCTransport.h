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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (void)didInvalidate;
- (void)suspendConnection;
- (void)resumeConnection;
- (void)invalidateConnection;
- (BOOL)boolValueForEntitlement:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)setUpConnection;
- (void)tearDownConnection;
- (void)processMessage:(id)a0 completion:(id /* block */)a1;
- (void)transportSendMessageOperation:(id)a0 processMessage:(id)a1;

@end
