@class NSString, SHKSharingService;
@protocol NSSharingExtensionContextProtocol;

@interface SHKHostExtensionContext : NSExtensionContext <SHKHostExtensionContextProtocol> {
    id<NSSharingExtensionContextProtocol> _remote;
}

@property (weak) SHKSharingService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)remote;
- (void).cxx_destruct;
- (void)cancelServiceUI;
- (void)animateRemoteWithCompletionHandler:(id /* block */)a0;
- (void)invalidateRemoteWindowControllerWithCompletionBlock:(id /* block */)a0;
- (void)sendOptionsDictionaryToRemote:(id)a0 completion:(id /* block */)a1;
- (void)startSessionTeardownByCallingContinuationBlock:(id /* block */)a0;

@end
