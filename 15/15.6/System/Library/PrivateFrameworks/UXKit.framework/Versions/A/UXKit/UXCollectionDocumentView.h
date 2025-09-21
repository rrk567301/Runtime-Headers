@class UXCollectionView;

@interface UXCollectionDocumentView : NSView

@property (weak, nonatomic) UXCollectionView *collectionView;

- (void).cxx_destruct;
- (void)layout;
- (void)_invalidateFocus;
- (char)acceptsFirstResponder;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (char)isOpaque;
- (void)prepareContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)wantsUpdateLayer;

@end
