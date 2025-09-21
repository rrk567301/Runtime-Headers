@interface OKMediaResourceItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;

- (char)hasMetadataAlreadyDiskCached;
- (char)hasThumbnailAlreadyDiskCachedForResolution:(unsigned long long)a0;
- (id)initWithFilename:(id)a0 andExtension:(id)a1;

@end
