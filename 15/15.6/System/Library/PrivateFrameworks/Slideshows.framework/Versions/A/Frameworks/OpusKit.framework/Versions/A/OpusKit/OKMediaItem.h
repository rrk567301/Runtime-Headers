@class NSString, NSURL, OKDocument;

@interface OKMediaItem : NSObject {
    unsigned long long _uniqueURLHash;
}

@property (nonatomic) OKDocument *document;
@property (readonly, copy, nonatomic) NSString *uniqueURLNormalisedString;
@property (readonly, copy, nonatomic) NSURL *uniqueURL;

+ (id)scheme;
+ (char)isRemote;
+ (id)urlForMediaObject:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)invalidate;
- (id)resourceURL;
- (id)metadata;
- (id)avAsset;
- (id)regionsOfInterest;
- (id)thumbnailImageForResolution:(unsigned long long)a0 aspectRatio:(double)a1 scale:(double)a2 quality:(double)a3;
- (id)avAssetWithCompletionHandler:(id /* block */)a0;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (id)detectRegionsOfInterestWithCompletionHandler:(id /* block */)a0 force:(char)a1 cache:(char)a2;
- (char)hasMetadataAlreadyDiskCached;
- (char)hasThumbnailAlreadyDiskCachedForResolution:(unsigned long long)a0;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithUniqueURL:(id)a0;
- (id)metadataWithCompletionHandler:(id /* block */)a0 force:(char)a1 cache:(char)a2;
- (id)operationWithBlock:(id /* block */)a0 completionHandlerWithObject:(id /* block */)a1;
- (id)prepareCaches:(char)a0 withCompletionHandler:(id /* block */)a1;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;
- (id)thumbnailImageForResolution:(unsigned long long)a0 aspectRatio:(double)a1 scale:(double)a2 quality:(double)a3 completionHandler:(id /* block */)a4 force:(char)a5 cache:(char)a6;

@end
