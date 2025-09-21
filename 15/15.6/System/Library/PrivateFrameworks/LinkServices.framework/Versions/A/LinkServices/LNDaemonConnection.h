@class NSXPCConnection;

@interface LNDaemonConnection : LNConnection

@property (retain, nonatomic) NSXPCConnection *mediatorXPCConnection;

- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (char)refreshWithOptions:(id)a0;

@end
