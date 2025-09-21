@class NSXPCListenerEndpoint;

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler

@property (retain, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)remoteObjectInterface;
- (void)createConnection;
- (char)addToRefCountWithError:(id *)a0;

@end
