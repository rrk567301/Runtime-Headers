@class UXCollectionView;

@interface UXCollectionDocumentView : NSView

@property (weak, nonatomic) UXCollectionView *collectionView;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_invalidateFocus;
- (void)prepareContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
