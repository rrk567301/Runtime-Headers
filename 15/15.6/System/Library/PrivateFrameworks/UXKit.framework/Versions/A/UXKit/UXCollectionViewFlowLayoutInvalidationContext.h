@interface UXCollectionViewFlowLayoutInvalidationContext : UXCollectionViewLayoutInvalidationContext {
    struct { unsigned char invalidateDelegateMetrics : 1; unsigned char invalidateAttributes : 1; } _flowLayoutInvalidationFlags;
}

@property (nonatomic) char invalidateFlowLayoutDelegateMetrics;
@property (nonatomic) char invalidateFlowLayoutAttributes;

- (id)init;

@end
