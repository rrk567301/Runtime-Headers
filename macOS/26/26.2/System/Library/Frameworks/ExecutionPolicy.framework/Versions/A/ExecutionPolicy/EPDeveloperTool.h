@class NSXPCConnection, NSXPCInterface;

@interface EPDeveloperTool : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

@property (readonly) long long authorizationStatus;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)requestDeveloperToolAccessWithCompletionHandler:(id /* block */)a0;

@end
