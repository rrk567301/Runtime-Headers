@class CPKCalculatedGeometry, STKImageGlyph, STKStickerView;

@interface CPKInlineAttachmentView : CPKDraggableView

@property (retain, nonatomic) STKStickerView *stickerView;
@property (retain, nonatomic) CPKCalculatedGeometry *geometry;
@property (nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) STKImageGlyph *imageGlyph;

- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })draggingFrame;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (id)tooltipString;
- (id)draggingImage;
- (id)initWithStickerView:(id)a0 geometry:(id)a1;
- (id)pasteboardItem;

@end
