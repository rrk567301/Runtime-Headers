@class NSXPCConnection;

@interface BMXPCConnectionWrapper : NSObject

@property char isValid;
@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_initWithConnection:(id)a0;

@end
