@class NSXPCConnection, NSXPCInterface;

@interface EPDeveloperTool : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

@property (readonly) long long authorizationStatus;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)requestDeveloperToolAccessWithCompletionHandler:(id /* block */)a0;

@end
