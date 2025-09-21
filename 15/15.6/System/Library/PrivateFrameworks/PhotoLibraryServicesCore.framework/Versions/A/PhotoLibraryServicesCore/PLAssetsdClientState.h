@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdClientState : NSObject {
    _Atomic BOOL _isOpen;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
}

- (id)init;
- (void).cxx_destruct;
- (char)isOpen;
- (char)consumeSandboxExtensions:(id)a0;

@end
