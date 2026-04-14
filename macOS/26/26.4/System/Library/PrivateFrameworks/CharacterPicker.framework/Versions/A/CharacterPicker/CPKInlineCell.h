@class NSCollectionView, STKImageGlyph;

@interface CPKInlineCell : NSCollectionViewItem

@property (readonly, nonatomic) STKImageGlyph *imageGlyph;
@property (weak, nonatomic) NSCollectionView *collectionViewPrivate;

- (id)collectionView;
- (id)initWithView:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
