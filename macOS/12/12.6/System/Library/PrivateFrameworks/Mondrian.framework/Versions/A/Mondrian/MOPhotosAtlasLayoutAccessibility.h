@class MOPhotosAtlasLayout;

@interface MOPhotosAtlasLayoutAccessibility : UXCollectionViewLayoutAccessibility

@property (readonly, weak, nonatomic) MOPhotosAtlasLayout *layout;
@property (readonly, nonatomic) unsigned long long numberOfItemsPerRow;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cellSize;

+ (Class)sectionAccessibilityClass;

- (id)initWithLayout:(id)a0;

@end
