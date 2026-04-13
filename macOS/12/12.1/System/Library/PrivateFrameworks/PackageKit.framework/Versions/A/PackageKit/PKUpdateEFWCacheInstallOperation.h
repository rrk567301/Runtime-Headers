@class NSString;

@interface PKUpdateEFWCacheInstallOperation : PKInstallOperation {
    NSString *_cacheTool;
}

- (void)dealloc;
- (int)installState;
- (void)main;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (BOOL)_cacheEmbeddedContentForBundleAtPath:(id)a0 error:(id *)a1;

@end
