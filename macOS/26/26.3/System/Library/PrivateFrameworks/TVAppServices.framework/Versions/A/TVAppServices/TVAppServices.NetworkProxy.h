@interface TVAppServices.NetworkProxy : NSURLProtocol

+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;

- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;

@end
