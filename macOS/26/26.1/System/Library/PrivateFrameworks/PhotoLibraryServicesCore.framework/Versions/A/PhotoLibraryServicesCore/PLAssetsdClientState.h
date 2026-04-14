@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdClientState : NSObject {
    _Atomic BOOL _isOpen;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
}

- (BOOL)isOpen;
- (BOOL)consumeSandboxExtensions:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
