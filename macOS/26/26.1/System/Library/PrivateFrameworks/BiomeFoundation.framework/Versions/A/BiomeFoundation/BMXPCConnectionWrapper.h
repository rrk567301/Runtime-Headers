@class NSXPCConnection;

@interface BMXPCConnectionWrapper : NSObject

@property BOOL isValid;
@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithConnection:(id)a0;

@end
