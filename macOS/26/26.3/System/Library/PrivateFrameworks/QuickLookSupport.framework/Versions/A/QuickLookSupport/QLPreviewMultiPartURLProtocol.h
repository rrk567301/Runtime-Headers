@interface QLPreviewMultiPartURLProtocol : NSURLProtocol

+ (void)initialize;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)protocolScheme;

- (void)startLoading;
- (void)stopLoading;

@end
