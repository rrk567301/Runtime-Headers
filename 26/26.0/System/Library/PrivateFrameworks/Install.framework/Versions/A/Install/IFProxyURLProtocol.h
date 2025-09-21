@interface IFProxyURLProtocol : NSURLProtocol

+ (id)canonicalRequestForRequest:(id)a0;
+ (void)initialize;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)_canonicalURLForURL:(id)a0;

- (void)startLoading;
- (void)stopLoading;
- (void)didLoadData:(id)a0;

@end
