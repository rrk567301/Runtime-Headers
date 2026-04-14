@class NSCollectionLayoutDecorationItem, NSString, NSCollectionLayoutItem, NSCollectionLayoutAnchor, NSCollectionLayoutSize, NSCollectionLayoutSupplementaryItem;

@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem <_NSCollectionLayoutAuxiliaryItem, NSCopying>

@property (nonatomic, getter=_pinningZIndex, setter=_setPinningZIndex:) long long _pinningZIndex;
@property BOOL extendsBoundary;
@property BOOL pinToVisibleBounds;
@property (readonly) long long alignment;
@property (readonly) struct CGPoint { double x; double y; } offset;
@property (readonly, nonatomic) NSCollectionLayoutSize *size;
@property (readonly, nonatomic) NSString *elementKind;
@property (readonly, nonatomic) NSCollectionLayoutAnchor *containerAnchor;
@property (readonly, nonatomic) NSCollectionLayoutAnchor *itemAnchor;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } _effectiveContentInsets;
@property (readonly, nonatomic) long long zIndex;
@property (readonly, nonatomic) NSCollectionLayoutItem *item;
@property (readonly, nonatomic) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (readonly, nonatomic) NSCollectionLayoutBoundarySupplementaryItem *boundarySupplementaryItem;
@property (readonly, nonatomic) NSCollectionLayoutDecorationItem *decorationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)boundarySupplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2 absoluteOffset:(struct CGPoint { double x0; double x1; })a3;
+ (id)boundarySupplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSize:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 elementKind:(id)a2 containerAnchor:(id)a3 itemAnchor:(id)a4 zIndex:(long long)a5 alignment:(long long)a6 offset:(struct CGPoint { double x0; double x1; })a7 extendsBoundary:(BOOL)a8 pinToVisibleBounds:(BOOL)a9;
- (void)setPinningZIndex:(long long)a0;
- (id)copyWithContainerAnchor:(id)a0 itemAnchor:(id)a1;

@end
