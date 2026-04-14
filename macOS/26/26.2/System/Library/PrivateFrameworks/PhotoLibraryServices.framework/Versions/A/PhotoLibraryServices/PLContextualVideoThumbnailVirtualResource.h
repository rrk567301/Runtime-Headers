@class NSString;

@interface PLContextualVideoThumbnailVirtualResource : PLVirtualResource

@property (readonly, copy) NSString *thumbnailIdentifier;

+ (unsigned int)recipeIDForContextualVideoThumbnail;
+ (id)uniformTypeIdentifierForContextualVideoThumbnail;

- (long long)dataLength;
- (id)customSuffix;
- (void).cxx_destruct;
- (long long)estimatedDataLength;
- (id)initWithAsset:(id)a0 thumbnailIdentifier:(id)a1;

@end
