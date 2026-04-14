@class NSString, NSURL, OKDocument;

@interface OKMediaItem : NSObject {
    unsigned long long _uniqueURLHash;
}

@property (nonatomic) OKDocument *document;
@property (readonly, copy, nonatomic) NSString *uniqueURLNormalisedString;
@property (readonly, copy, nonatomic) NSURL *uniqueURL;

+ (id)scheme;
+ (BOOL)isRemote;
+ (id)urlForMediaObject:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (id)resourceURL;
- (id)metadata;
- (id)avAsset;
- (id)regionsOfInterest;
- (id)thumbnailImageForResolution:(unsigned long long)a0 aspectRatio:(double)a1 scale:(double)a2 quality:(double)a3;
- (id)initWithUniqueURL:(id)a0;
- (BOOL)hasMetadataAlreadyDiskCached;
- (BOOL)hasThumbnailAlreadyDiskCachedForResolution:(unsigned long long)a0;
- (id)operationWithBlock:(id /* block */)a0 completionHandlerWithObject:(id /* block */)a1;
- (id)metadataWithCompletionHandler:(id /* block */)a0 force:(BOOL)a1 cache:(BOOL)a2;
- (id)thumbnailImageForResolution:(unsigned long long)a0 aspectRatio:(double)a1 scale:(double)a2 quality:(double)a3 completionHandler:(id /* block */)a4 force:(BOOL)a5 cache:(BOOL)a6;
- (id)detectRegionsOfInterestWithCompletionHandler:(id /* block */)a0 force:(BOOL)a1 cache:(BOOL)a2;
- (id)prepareCaches:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;

@end
