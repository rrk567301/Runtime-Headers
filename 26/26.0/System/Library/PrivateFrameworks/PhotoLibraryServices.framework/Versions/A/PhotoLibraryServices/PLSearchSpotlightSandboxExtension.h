@interface PLSearchSpotlightSandboxExtension : NSObject {
    long long _spotlightSandboxExtensionHandle;
}

- (id)initWithPathManager:(id)a0;
- (void)dealloc;
- (void)_releaseSpotlightSandboxExtension;
- (BOOL)_acquireSpotlightSandboxExtensionWithPathManager:(id)a0;

@end
