@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdClientState : NSObject {
    _Atomic BOOL _isOpen;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
}

- (id)init;
- (BOOL)isOpen;
- (void).cxx_destruct;
- (BOOL)consumeSandboxExtensions:(id)a0;

@end
