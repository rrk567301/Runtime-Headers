@interface ICNFMCCIDURLProtocol : NSURLProtocol

+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)registerDataProvider:(id)a0;
+ (void)unregisterDataProvider:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
