@class NSColor;

@interface ILImagePreview : NSView {
    BOOL _supportsDragAndDrop;
}

@property BOOL animates;
@property BOOL autoresizes;
@property NSColor *backgroundColor;
@property (readonly) struct CGSize { double width; double height; } imageSize;
@property (weak) id delegate;

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGImage { } *)createThumbnailOfSize:(unsigned long long)a0;
- (void)setImageWithURL:(id)a0;
- (void)_dragSelectionWithEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fitImageRect;

@end
