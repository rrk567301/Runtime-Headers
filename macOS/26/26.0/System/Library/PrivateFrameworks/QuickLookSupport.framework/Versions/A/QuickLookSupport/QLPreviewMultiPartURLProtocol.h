@interface QLPreviewMultiPartURLProtocol : NSURLProtocol

+ (id)canonicalRequestForRequest:(id)a0;
+ (void)initialize;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)protocolScheme;

- (void)startLoading;
- (void)stopLoading;

@end
