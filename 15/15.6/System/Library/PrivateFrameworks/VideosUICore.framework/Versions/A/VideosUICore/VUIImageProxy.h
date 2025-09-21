@class VUIImageDecorator, _VUIDecoratorRequest;
@protocol VUINetworkRequestLoader;

@interface VUIImageProxy : NSObject <NSCopying>

@property (retain, nonatomic) id imageLoader;
@property (nonatomic) long long groupType;
@property (retain, nonatomic) id requestToken;
@property (retain, nonatomic) _VUIDecoratorRequest *decoratorRequestToken;
@property (nonatomic) char isLoading;
@property (retain, nonatomic) id imageDidWriteObserver;
@property (nonatomic) char returnImageAfterWrittenToDisk;
@property (readonly, nonatomic) id object;
@property (nonatomic) struct CGSize { double width; double height; } expectedSize;
@property (nonatomic) struct CGSize { double width; double height; } dynamicProxyRequestedSize;
@property (nonatomic) char cacheOnLoad;
@property (nonatomic) char allowsSubstitutionForOriginal;
@property (retain, nonatomic) VUIImageDecorator *decorator;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ writeCompletionHandler;
@property (nonatomic) long long imageDirection;
@property (weak, nonatomic) id<VUINetworkRequestLoader> requestLoader;
@property (nonatomic) char loadSynchronouslyIfCached;
@property (nonatomic) char writeToAssetLibrary;
@property (nonatomic) char optimizedImageRendering;

+ (id)_imageDecoratorQueue;
+ (id)_imageReadWriteQueue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)load;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithObject:(id)a0 imageLoader:(id)a1 groupType:(long long)a2;
- (id)_imageLoaderKey;
- (id)_assetKeyWithImageLoaderKey:(id)a0 decoratorIdentifier:(id)a1;
- (void)_callCompletionHandlerWithImage:(id)a0 error:(id)a1 finished:(char)a2;
- (void)_callWriteCompletionHandlerWithPath:(id)a0 error:(id)a1 finished:(char)a2;
- (void)_completeImageLoadWithImage:(id)a0 imagePath:(id)a1 error:(id)a2 assetKey:(id)a3 expiryDate:(id)a4 tags:(id)a5 requestRecord:(id)a6;
- (void)_decorateAndWriteImage:(id)a0 imagePath:(id)a1 scaleToSize:(struct CGSize { double x0; double x1; })a2 cropToFit:(char)a3 scalingResult:(unsigned long long)a4 assetKey:(id)a5 expiryDate:(id)a6 tags:(id)a7 requestRecord:(id)a8;
- (id)_decoratedImageAssetKey;
- (id)_decoratedImageAssetPath;
- (id)_decoratorIdentifier;
- (id)_imageAssetPathWithAssetKey:(id)a0;
- (void)_imageDidWriteHandler:(id)a0;
- (id)_originalImageAssetKey;
- (id)_originalImageAssetPath;
- (char)isImageAvailable;
- (char)isOfSameOriginAs:(id)a0;

@end
