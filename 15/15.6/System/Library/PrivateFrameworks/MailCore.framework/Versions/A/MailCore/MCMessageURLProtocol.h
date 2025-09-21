@interface MCMessageURLProtocol : NSURLProtocol

+ (char)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (char)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;

- (void)stopLoading;
- (void)startLoading;

@end
