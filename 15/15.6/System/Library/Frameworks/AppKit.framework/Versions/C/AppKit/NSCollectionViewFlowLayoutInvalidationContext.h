@interface NSCollectionViewFlowLayoutInvalidationContext : NSCollectionViewLayoutInvalidationContext {
    struct { unsigned char invalidateDelegateMetrics : 1; unsigned char invalidateAttributes : 1; } _flowLayoutInvalidationFlags;
}

@property char invalidateFlowLayoutDelegateMetrics;
@property char invalidateFlowLayoutAttributes;

- (id)init;

@end
