@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) int processIdentifier;

- (void)invalidate;
- (BOOL)hasEntitlement:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (id)auditTokenString;
- (id)initWithConnection:(id)a0;
- (id)remoteObjectProxy;
- (void).cxx_destruct;

@end
