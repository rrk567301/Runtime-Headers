@class NSDictionary, NSIndexSet;

@interface GKCollectionGridLayout : GKCollectionFocusingLayout

@property (retain, nonatomic) NSDictionary *itemAttributes;
@property (retain, nonatomic) NSDictionary *headerAttributes;
@property (retain, nonatomic) NSDictionary *footerAttributes;
@property (nonatomic) char didPerformInitialContentInsetScroll;
@property (nonatomic) char centersItemsInExcessSpace;
@property (nonatomic) char sectionInsetRelativeWithContentInset;
@property (nonatomic) long long autoWidthColumns;
@property (nonatomic) double extraSectionHeaderToCellSpace;
@property (retain, nonatomic) NSIndexSet *sectionsThatShowHeaderWhenEmpty;
@property (retain, nonatomic) NSIndexSet *sectionsThatShowFootersWhenEmpty;
@property (nonatomic) char shouldPerformInitialScrollToContentInsetTop;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (void)applyDefaults;
- (long long)lastValidSection;

@end
