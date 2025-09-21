@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) int processIdentifier;

- (id)remoteObjectProxy;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (BOOL)hasEntitlement:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (id)auditTokenString;
- (void).cxx_destruct;

@end
