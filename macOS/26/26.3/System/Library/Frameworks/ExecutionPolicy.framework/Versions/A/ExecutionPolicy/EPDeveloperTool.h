@class NSXPCConnection, NSXPCInterface;

@interface EPDeveloperTool : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

@property (readonly) long long authorizationStatus;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestDeveloperToolAccessWithCompletionHandler:(id /* block */)a0;

@end
