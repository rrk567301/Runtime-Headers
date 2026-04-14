@interface MusicKit.ArtworkLoadingProtocol : NSURLProtocol

+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;

@end
