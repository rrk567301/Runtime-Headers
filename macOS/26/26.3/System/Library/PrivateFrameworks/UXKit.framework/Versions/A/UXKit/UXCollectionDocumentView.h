@class UXCollectionView;

@interface UXCollectionDocumentView : NSView

@property (weak, nonatomic) UXCollectionView *collectionView;

- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)layout;
- (BOOL)acceptsFirstResponder;
- (void).cxx_destruct;
- (void)_invalidateFocus;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)prepareContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;

@end
