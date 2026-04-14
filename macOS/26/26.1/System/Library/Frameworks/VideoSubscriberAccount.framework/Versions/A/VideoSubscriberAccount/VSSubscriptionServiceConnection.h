@class NSXPCConnection;

@interface VSSubscriptionServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
