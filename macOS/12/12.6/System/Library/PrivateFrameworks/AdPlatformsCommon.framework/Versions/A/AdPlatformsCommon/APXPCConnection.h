@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) int processIdentifier;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (id)remoteObjectProxy;
- (BOOL)hasEntitlement:(id)a0;

@end
