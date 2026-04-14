@class NSXPCListenerEndpoint;

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler

@property (retain, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint;

- (id)remoteObjectInterface;
- (void)createConnection;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (BOOL)addToRefCountWithError:(id *)a0;

@end
