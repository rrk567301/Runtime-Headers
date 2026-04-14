@class NSXPCConnection;

@interface BMXPCConnectionWrapper : NSObject

@property BOOL isValid;
@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void)invalidate;
- (id)_initWithConnection:(id)a0;
- (void).cxx_destruct;

@end
