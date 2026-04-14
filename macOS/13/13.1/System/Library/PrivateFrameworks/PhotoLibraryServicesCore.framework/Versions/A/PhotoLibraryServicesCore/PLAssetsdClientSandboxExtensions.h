@class NSMutableDictionary;

@interface PLAssetsdClientSandboxExtensions : NSObject {
    NSMutableDictionary *_securityScopedURLs;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)consumeSandboxExtensions:(id)a0;
- (void)_stopUsingSecurityScopedURLs;

@end
