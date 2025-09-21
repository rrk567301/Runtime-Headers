@class NSString, NSXPCConnection;

@interface ML3Client : NSObject

@property (class, readonly, nonatomic) ML3Client *daemonClient;
@property (class, readonly, nonatomic) ML3Client *processClient;

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic, getter=isDaemonClient) char daemonClient;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;

@end
