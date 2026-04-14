@class NSXPCListenerEndpoint;

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler

@property (retain, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint;

- (id)remoteObjectInterface;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)createConnection;
- (BOOL)addToRefCountWithError:(id *)a0;

@end
