@class AUAudioUnitViewService, AURemoteHost;

@interface AURemoteExtensionContext : NSExtensionContext {
    AURemoteHost *_host;
    BOOL _isUIExtension;
}

@property (nonatomic) AUAudioUnitViewService *viewService;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (BOOL)conformsToProtocol:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)open:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 instanceUUID:(id)a1 reply:(id /* block */)a2;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;

@end
