@interface PLSearchSpotlightSandboxExtension : NSObject {
    long long _spotlightSandboxExtensionHandle;
}

- (id)initWithPathManager:(id)a0;
- (void)dealloc;
- (BOOL)_acquireSpotlightSandboxExtensionWithPathManager:(id)a0;
- (void)_releaseSpotlightSandboxExtension;

@end
