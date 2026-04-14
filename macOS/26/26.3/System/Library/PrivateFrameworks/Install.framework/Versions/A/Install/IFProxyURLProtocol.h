@interface IFProxyURLProtocol : NSURLProtocol

+ (void)initialize;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)_canonicalURLForURL:(id)a0;

- (void)startLoading;
- (void)stopLoading;
- (void)didLoadData:(id)a0;

@end
