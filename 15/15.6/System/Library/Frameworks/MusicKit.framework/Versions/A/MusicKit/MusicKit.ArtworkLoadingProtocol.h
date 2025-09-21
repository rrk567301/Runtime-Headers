@interface MusicKit.ArtworkLoadingProtocol : NSURLProtocol

+ (char)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)startLoading;

@end
