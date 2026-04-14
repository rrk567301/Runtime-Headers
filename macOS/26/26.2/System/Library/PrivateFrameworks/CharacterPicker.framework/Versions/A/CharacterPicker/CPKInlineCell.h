@class NSCollectionView, STKImageGlyph;

@interface CPKInlineCell : NSCollectionViewItem

@property (readonly, nonatomic) STKImageGlyph *imageGlyph;
@property (weak, nonatomic) NSCollectionView *collectionViewPrivate;

- (id)collectionView;
- (void)setSelected:(BOOL)a0;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;

@end
