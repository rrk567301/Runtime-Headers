@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) int processIdentifier;

- (id)remoteObjectProxy;
- (void)invalidate;
- (struct { unsigned int x0[8]; })auditToken;
- (id)auditTokenString;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasEntitlement:(id)a0;

@end
