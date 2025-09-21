@interface _LSBundleProvider : NSObject {
    void *_provider;
}

@property (readonly) struct __SecCode { } *copySecCodeRef;
@property (readonly) void *provider;

- (void)dealloc;
- (id)initWithURL:(id)a0 useCacheIfPossible:(char)a1;
- (char)usingCachedItem;
- (id)bundle;
- (id)bundle:(char)a0 reason:(id)a1;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)bundleURL;
- (id)cdHashes;
- (struct __CFBundle { } *)cfBundleRef;
- (struct __CFBundle { } *)cfBundleRef:(char)a0 reason:(id)a1;
- (struct __SecCode { } *)copySecCodeRef;
- (id)infoDictionary;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0;

@end
