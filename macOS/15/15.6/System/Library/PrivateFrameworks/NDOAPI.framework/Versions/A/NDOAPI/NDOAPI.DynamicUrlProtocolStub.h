@interface NDOAPI.DynamicUrlProtocolStub : NSURLProtocol {
    void /* unknown type, empty encoding */ stub;
}

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void).cxx_destruct;
- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)startLoading;

@end
