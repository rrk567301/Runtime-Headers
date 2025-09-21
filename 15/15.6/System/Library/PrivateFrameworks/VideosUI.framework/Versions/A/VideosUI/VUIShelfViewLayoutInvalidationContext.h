@class NSIndexPath;

@interface VUIShelfViewLayoutInvalidationContext : NSCollectionViewLayoutInvalidationContext

@property (nonatomic) char invalidateLayout;
@property (nonatomic) char invalidateVerticalBumps;
@property (retain, nonatomic) NSIndexPath *focusedItemIndexPath;

- (void).cxx_destruct;

@end
