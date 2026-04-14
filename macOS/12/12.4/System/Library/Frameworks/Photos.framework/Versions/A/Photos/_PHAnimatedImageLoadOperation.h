@class PHAnimatedImage, NSURL;

@interface _PHAnimatedImageLoadOperation : NSOperation {
    long long _cacheStrategy;
    BOOL _useSharedImageDecoding;
    NSURL *_animatedImageURL;
}

@property (retain) PHAnimatedImage *animatedImage;

+ (long long)nextRequestID;
+ (id)_requestIsolationQueue;
+ (id)_inq_animatedImageLoadingOperations;
+ (void)_registerOperation:(id)a0 forRequestID:(long long)a1;
+ (id)_removeOperation:(long long)a0;
+ (id)_animatedImageSharedLoadingQueue;

- (void).cxx_destruct;
- (void)main;
- (id)initWithURL:(id)a0 cachingStrategy:(long long)a1 useSharedDecoding:(BOOL)a2;

@end
