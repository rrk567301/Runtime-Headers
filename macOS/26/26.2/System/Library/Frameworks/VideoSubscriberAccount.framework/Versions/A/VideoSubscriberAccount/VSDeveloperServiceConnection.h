@class NSXPCConnection;

@interface VSDeveloperServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)init;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void)dealloc;

@end
