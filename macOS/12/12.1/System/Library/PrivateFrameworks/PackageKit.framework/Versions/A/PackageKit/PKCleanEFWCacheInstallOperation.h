@class NSString;

@interface PKCleanEFWCacheInstallOperation : PKInstallOperation {
    NSString *_cacheTool;
}

- (void)dealloc;
- (int)installState;
- (void)main;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;

@end
