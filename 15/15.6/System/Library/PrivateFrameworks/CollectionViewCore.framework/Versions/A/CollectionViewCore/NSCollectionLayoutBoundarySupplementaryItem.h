@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem <NSCopying>

@property (nonatomic, getter=_pinningZIndex, setter=_setPinningZIndex:) long long _pinningZIndex;
@property (nonatomic) char extendsBoundary;
@property (nonatomic) char pinToVisibleBounds;
@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } offset;

+ (id)itemWithLayoutSize:(id)a0;
+ (id)boundarySupplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2;
+ (id)itemWithLayoutSize:(id)a0 supplementaryItems:(id)a1;
+ (id)boundarySupplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2 absoluteOffset:(struct CGPoint { double x0; double x1; })a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)boundarySupplementaryItem;
- (id)copyWithContainerAnchor:(id)a0 itemAnchor:(id)a1;
- (id)initWithSize:(id)a0 contentInsets:(struct CVCDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 elementKind:(id)a2 containerAnchor:(id)a3 itemAnchor:(id)a4 zIndex:(long long)a5 alignment:(long long)a6 offset:(struct CGPoint { double x0; double x1; })a7 extendsBoundary:(char)a8 pinToVisibleBounds:(char)a9;
- (void)setPinningZIndex:(long long)a0;

@end
