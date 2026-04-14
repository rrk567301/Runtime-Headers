@class NSCollectionView, STKImageGlyph;

@interface CPKInlineCell : NSCollectionViewItem

@property (readonly, nonatomic) STKImageGlyph *imageGlyph;
@property (weak, nonatomic) NSCollectionView *collectionViewPrivate;

- (void).cxx_destruct;
- (id)collectionView;
- (id)initWithView:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)didSelectDelete:(id)a0;
- (void)didSelectID:(id)a0;
- (void)didSelectNewEmoji:(id)a0;
- (id)editMenuForStickers;

@end
