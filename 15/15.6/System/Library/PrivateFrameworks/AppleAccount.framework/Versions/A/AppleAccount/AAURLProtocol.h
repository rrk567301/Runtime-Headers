@interface AAURLProtocol : NSURLProtocol {
    unsigned long long _state;
}

+ (char)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (char)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;

- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)startLoading;
- (id)_normalizedRequestForURL:(id)a0;

@end
