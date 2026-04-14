@class NSString;

@interface PLContextualVideoThumbnailVirtualResource : PLVirtualResource

@property (readonly, copy) NSString *thumbnailIdentifier;

+ (unsigned int)recipeIDForContextualVideoThumbnail;
+ (id)uniformTypeIdentifierForContextualVideoThumbnail;

- (long long)dataLength;
- (long long)estimatedDataLength;
- (void).cxx_destruct;
- (id)customSuffix;
- (id)initWithAsset:(id)a0 thumbnailIdentifier:(id)a1;

@end
