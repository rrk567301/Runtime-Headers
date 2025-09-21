@interface QLPreviewMultiPartURLProtocol : NSURLProtocol

+ (void)initialize;
+ (char)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)protocolScheme;

- (void)stopLoading;
- (void)startLoading;

@end
