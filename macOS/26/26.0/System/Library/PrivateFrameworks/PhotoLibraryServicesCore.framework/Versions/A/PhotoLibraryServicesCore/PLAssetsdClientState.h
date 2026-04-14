@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdClientState : NSObject {
    _Atomic BOOL _isOpen;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
}

- (BOOL)isOpen;
- (id)init;
- (BOOL)consumeSandboxExtensions:(id)a0;
- (void).cxx_destruct;

@end
