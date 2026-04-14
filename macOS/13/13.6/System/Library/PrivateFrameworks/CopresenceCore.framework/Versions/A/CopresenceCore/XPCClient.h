@class NSString, NSXPCConnection;

@interface XPCClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic) NSString *bundleID;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;

@end
