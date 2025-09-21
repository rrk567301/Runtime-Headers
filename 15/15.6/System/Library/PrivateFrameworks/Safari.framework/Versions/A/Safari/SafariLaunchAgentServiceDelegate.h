@class NSString, SafariLaunchAgent;

@interface SafariLaunchAgentServiceDelegate : NSObject <NSXPCListenerDelegate> {
    SafariLaunchAgent *_safariLaunchAgent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
