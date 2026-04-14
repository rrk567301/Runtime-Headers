@class NSXPCListenerEndpoint;

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler

@property (retain, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint;

- (id)initWithEndpoint:(id)a0;
- (id)remoteObjectInterface;
- (void)createConnection;
- (void).cxx_destruct;
- (BOOL)addToRefCountWithError:(id *)a0;

@end
