@class NSNumber, NSMutableArray, IMGroupAcknowledgementPollViewController;

@interface IMGroupAcknowledgementPollLayout : NSCollectionViewLayout

@property (readonly) NSMutableArray *sectionLayoutAttributesArray;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } lastLayoutEdgeInsets;
@property (weak) IMGroupAcknowledgementPollViewController *groupAcknowledgementPollViewController;
@property (copy) NSNumber *expandedSection;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (long long)scrollDirection;
- (void)invalidateLayoutAttributes;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)initWithGroupAcknowledgementPollViewController:(id)a0;

@end
