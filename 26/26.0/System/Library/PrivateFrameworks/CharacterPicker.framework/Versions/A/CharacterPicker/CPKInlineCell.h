@class NSCollectionView, STKImageGlyph;

@interface CPKInlineCell : NSCollectionViewItem

@property (readonly, nonatomic) STKImageGlyph *imageGlyph;
@property (weak, nonatomic) NSCollectionView *collectionViewPrivate;

- (void)setSelected:(BOOL)a0;
- (id)initWithView:(id)a0;
- (id)collectionView;
- (void).cxx_destruct;

@end
