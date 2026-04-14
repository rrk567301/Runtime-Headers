@class NSXPCConnection;

@interface BMXPCConnectionWrapper : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;

@end
