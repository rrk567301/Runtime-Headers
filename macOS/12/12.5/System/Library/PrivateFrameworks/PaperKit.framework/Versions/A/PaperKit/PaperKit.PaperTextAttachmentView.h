@interface PaperKit.PaperTextAttachmentView : NSView <PaperKitViewControllerDelegate, PKTextAttachmentDrawingViewLinedPaperSupport> {
    void /* unknown type, empty encoding */ isCurrentPaperViewControllerDark;
    void /* unknown type, empty encoding */ paperViewConstraints;
    void /* unknown type, empty encoding */ paperViewLiveResizeConstraints;
    void /* unknown type, empty encoding */ currentLinedPaper;
    void /* unknown type, empty encoding */ textAttachment;
    void /* unknown type, empty encoding */ paperKitViewController;
    void /* unknown type, empty encoding */ paperBounds;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToSuperview;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (void)setLinedPaper:(id)a0;
- (void)openLink:(id)a0 :(id)a1;
- (void)paperBounds:(id)a0 :(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)decryptData:(id)a0 :(id)a1;
- (void)invalidated:(id)a0;
- (void)textViewDidChangeSize;
- (void)textClipViewDidChange;

@end
