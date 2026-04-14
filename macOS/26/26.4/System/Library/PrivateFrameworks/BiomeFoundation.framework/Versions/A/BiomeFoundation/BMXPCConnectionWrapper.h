@class NSXPCConnection;

@interface BMXPCConnectionWrapper : NSObject

@property BOOL isValid;
@property (readonly, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithConnection:(id)a0;

@end
