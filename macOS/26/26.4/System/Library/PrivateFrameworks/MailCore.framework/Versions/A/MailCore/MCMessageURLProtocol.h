@interface MCMessageURLProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
