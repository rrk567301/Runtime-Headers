@interface PLSearchSpotlightSandboxExtension : NSObject {
    long long _spotlightSandboxExtensionHandle;
}

- (void)dealloc;
- (void)_releaseSpotlightSandboxExtension;
- (id)initWithPathManager:(id)a0;
- (char)_acquireSpotlightSandboxExtensionWithPathManager:(id)a0;

@end
