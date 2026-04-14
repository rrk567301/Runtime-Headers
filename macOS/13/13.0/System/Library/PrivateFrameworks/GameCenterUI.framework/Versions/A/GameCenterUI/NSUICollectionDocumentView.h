@class NSUICollectionView;

@interface NSUICollectionDocumentView : NSView

@property (weak, nonatomic) NSUICollectionView *collectionView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityFocusedAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityEnabledAttribute;
- (BOOL)isFlipped;

@end
