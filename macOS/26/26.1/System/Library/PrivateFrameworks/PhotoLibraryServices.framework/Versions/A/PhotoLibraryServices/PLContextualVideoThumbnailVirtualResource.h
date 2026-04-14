@class NSString;

@interface PLContextualVideoThumbnailVirtualResource : PLVirtualResource

@property (readonly, copy) NSString *thumbnailIdentifier;

+ (unsigned int)recipeIDForContextualVideoThumbnail;
+ (id)uniformTypeIdentifierForContextualVideoThumbnail;

- (long long)estimatedDataLength;
- (void).cxx_destruct;
- (id)customSuffix;
- (long long)dataLength;
- (id)initWithAsset:(id)a0 thumbnailIdentifier:(id)a1;

@end
