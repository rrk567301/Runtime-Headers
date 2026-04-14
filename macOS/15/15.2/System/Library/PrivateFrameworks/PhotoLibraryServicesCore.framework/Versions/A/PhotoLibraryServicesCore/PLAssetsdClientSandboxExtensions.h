@class NSMutableDictionary;

@interface PLAssetsdClientSandboxExtensions : NSObject {
    NSMutableDictionary *_securityScopedURLs;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_stopUsingSecurityScopedURLs;
- (BOOL)consumeSandboxExtensions:(id)a0;

@end
