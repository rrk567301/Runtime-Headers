@class NSXPCConnection;

@interface VSUserAccountServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
