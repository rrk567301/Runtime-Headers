@interface SSPhotosResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isSyndicated;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (id)buildResult;
- (id)buildInlineCardSections;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (id)buildImageCardSection;
- (id)oneUpPhotoCard;

@end
