@class NSArray, VUIShelfLayoutHelper;
@protocol VUIShelfViewLayoutDelegate;

@interface VUIShelfViewLayout : NSCollectionViewLayout

@property (retain, nonatomic) VUIShelfLayoutHelper *layoutHelper;
@property (retain, nonatomic) NSArray *shelfLayoutSections;
@property (weak, nonatomic) id<VUIShelfViewLayoutDelegate> delegate;
@property (nonatomic) BOOL shouldSnapContent;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long prominentSectionIndex;
@property (nonatomic) struct CGSize { double width; double height; } headerReferenceSize;
@property (nonatomic) double headerSelectionMargin;
@property (nonatomic) double headerBottomMargin;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } sectionInset;

+ (double)defaultHeaderSelectionMargin;

- (long long)scrollDirection;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingSelectionFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectForRTL;
- (BOOL)_bumpHeaderForLayoutSection:(id)a0 forIndexPath:(id)a1;
- (id)_indexPathForItemAtProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)computedContentHeight;
- (long long)computedRowCount;
- (id)indexPathForSnappedContent;
- (void)snapContent;
- (void)snapContentToIndexPath:(id)a0;

@end
