@class NSSet;

@interface SearchUICollectionViewLayout : NSCollectionViewCompositionalLayout

@property (retain, nonatomic) NSSet *sectionIndexesForHeightMatching;

+ (Class)layoutAttributesClass;
+ (void)applyForcedHeightToAttributes:(id)a0 height:(double)a1;

- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;

@end
