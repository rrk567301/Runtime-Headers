@class NSCollectionView, STKImageGlyph;

@interface CPKInlineCell : NSCollectionViewItem

@property (readonly, nonatomic) STKImageGlyph *imageGlyph;
@property (weak, nonatomic) NSCollectionView *collectionViewPrivate;

- (id)initWithView:(id)a0;
- (id)collectionView;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;

@end
