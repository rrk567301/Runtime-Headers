@interface RPBroadcastActivityViewServiceExtensionContext : NSExtensionContext

+ (id)sharedInstance;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)remoteProxy;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;

@end
