@class NSXPCConnection;

@interface VSSubscriptionServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)serviceWithErrorHandler:(id /* block */)a0;

@end
