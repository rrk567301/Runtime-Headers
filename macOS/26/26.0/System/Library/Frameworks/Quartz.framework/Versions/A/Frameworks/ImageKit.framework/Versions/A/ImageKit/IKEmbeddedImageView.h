@interface IKEmbeddedImageView : NSView {
    void *_privateData;
}

- (void)finalize;
- (void)windowWillClose:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setImage:(id)a0;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstResponder;
- (void)setImageAlignment:(unsigned long long)a0;
- (void)setImageFrameStyle:(unsigned long long)a0;
- (void)setImageScaling:(unsigned long long)a0;
- (void)doCrop:(id)a0;
- (void)addToolbar;
- (void)crop:(id)a0;
- (void)doCancelCrop:(id)a0;
- (void)effects:(id)a0;
- (void)removeToolbar;
- (void)rotate90ccw:(id)a0;
- (void)rotate90cw:(id)a0;
- (void)selectionRectAdded;
- (void)selectionRectRemoved;
- (void)updateTextView;

@end
