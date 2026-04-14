@class NSMutableDictionary;

@interface PLAssetsdClientSandboxExtensions : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_securityScopedURLs;
}

- (void)dealloc;
- (void)_stopUsingSecurityScopedURLs;
- (id)init;
- (BOOL)consumeSandboxExtensions:(id)a0;
- (void).cxx_destruct;

@end
