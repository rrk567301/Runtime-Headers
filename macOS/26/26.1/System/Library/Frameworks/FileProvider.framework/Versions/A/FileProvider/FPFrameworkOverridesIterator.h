@class NSURL, NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy {
    NSArray *_overrides;
    unsigned char _mightBeFPURL;
    unsigned char _checkURL;
    id /* block */ _noSuitableModuleFoundHandler;
    unsigned long long _currentIndex;
    NSInvocation *_invocation;
}

@property (class, readonly, copy) NSURL *overrideDirectoryURL;

+ (id)newIteratorWithNotFoundHandler:(id /* block */)a0;
+ (void)addOverride:(id)a0;
+ (id)newIteratorForURL:(struct __CFURL { } *)a0 withNotFoundHandler:(id /* block */)a1;
+ (id)allOverrides;
+ (void)removeOverride:(id)a0;

- (void)callNextOverrides;
- (void)finish;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithOverrides:(id)a0 url:(struct __CFURL { } *)a1 noSuitableModuleFoundHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithOverrides:(id)a0 noSuitableModuleFoundHandler:(id /* block */)a1;

@end
