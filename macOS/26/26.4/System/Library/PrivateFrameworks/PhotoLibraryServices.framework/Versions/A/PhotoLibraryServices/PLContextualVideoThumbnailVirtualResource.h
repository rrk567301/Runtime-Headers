@class NSString;

@interface PLContextualVideoThumbnailVirtualResource : PLVirtualResource

@property (readonly, copy) NSString *thumbnailIdentifier;

+ (unsigned int)recipeIDForContextualVideoThumbnail;
+ (id)uniformTypeIdentifierForContextualVideoThumbnail;

- (long long)dataLength;
- (void).cxx_destruct;
- (long long)estimatedDataLength;
- (id)customSuffix;
- (id)initWithAsset:(id)a0 thumbnailIdentifier:(id)a1;

@end
