@interface GKGridLayoutInvalidationContext : NSUICollectionViewLayoutInvalidationContext

@property (nonatomic) char invalidateIncrementalReveal;
@property (nonatomic) char invalidateBoundsChange;
@property (nonatomic) char invalidatePlaceholderVisibility;
@property (nonatomic) char invalidatePinnableAreas;

@end
