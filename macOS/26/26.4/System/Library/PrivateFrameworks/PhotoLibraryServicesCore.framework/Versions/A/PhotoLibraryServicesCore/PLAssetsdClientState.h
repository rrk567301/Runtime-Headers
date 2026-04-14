@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdClientState : NSObject {
    _Atomic BOOL _isOpen;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
}

- (BOOL)isOpen;
- (void).cxx_destruct;
- (id)init;
- (BOOL)consumeSandboxExtensions:(id)a0;

@end
