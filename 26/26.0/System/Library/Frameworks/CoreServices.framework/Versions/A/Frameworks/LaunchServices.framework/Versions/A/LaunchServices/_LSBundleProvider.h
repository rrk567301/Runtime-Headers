@interface _LSBundleProvider : NSObject {
    void *_provider;
}

@property (readonly) struct __SecCode { } *copySecCodeRef;
@property (readonly) void *provider;

- (id)bundlePath;
- (id)bundleIdentifier;
- (id)infoDictionary;
- (id)bundleURL;
- (void)dealloc;
- (id)bundle;
- (id)initWithURL:(id)a0 useCacheIfPossible:(BOOL)a1;
- (BOOL)usingCachedItem;
- (id)bundle:(BOOL)a0 reason:(id)a1;
- (id)cdHashes;
- (struct __CFBundle { } *)cfBundleRef;
- (struct __CFBundle { } *)cfBundleRef:(BOOL)a0 reason:(id)a1;
- (struct __SecCode { } *)copySecCodeRef;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0;

@end
