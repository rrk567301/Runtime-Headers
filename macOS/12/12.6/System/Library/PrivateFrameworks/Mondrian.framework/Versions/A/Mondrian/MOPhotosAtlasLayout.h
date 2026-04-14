@interface MOPhotosAtlasLayout : MOPhotosLayout

@property unsigned long long cellSpacing;
@property unsigned long long numberOfItemsPerRow;
@property (readonly) struct CGSize { double width; double height; } cellSize;

+ (Class)layoutAccessibilityClass;

- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)debuggingLayoutOptionsDescriptions;

@end
