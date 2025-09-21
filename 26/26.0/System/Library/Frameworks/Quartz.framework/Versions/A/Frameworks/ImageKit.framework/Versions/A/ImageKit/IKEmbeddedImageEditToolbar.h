@class NSView, NSButton;

@interface IKEmbeddedImageEditToolbar : IKImageEditFrameToolbar {
    NSView *_cropButtonContainer;
    NSButton *_cropButton;
    BOOL _cropMode;
}

- (void)finalize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (id)backgroundColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)configButton:(id)a0 action:(SEL)a1 title:(id)a2;
- (void)enterCropMode;
- (void)leaveCropMode;
- (void)selectionRectAdded;
- (void)selectionRectRemoved;
- (id)toolbarType;

@end
