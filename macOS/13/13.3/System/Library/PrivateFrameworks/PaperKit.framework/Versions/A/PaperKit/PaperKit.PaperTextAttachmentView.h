@interface PaperKit.PaperTextAttachmentView : NSView <PaperKitViewControllerDelegate, PKTextAttachmentDrawingViewLinedPaperSupport> {
    void /* unknown type, empty encoding */ relaunchDelay;
    void /* unknown type, empty encoding */ isCurrentPaperViewControllerDark;
    void /* unknown type, empty encoding */ paperViewConstraints;
    void /* unknown type, empty encoding */ paperViewLiveResizeConstraints;
    void /* unknown type, empty encoding */ currentLinedPaper;
    void /* unknown type, empty encoding */ textAttachment;
    void /* unknown type, empty encoding */ paperKitViewController;
    void /* unknown type, empty encoding */ paperBounds;
    void /* unknown type, empty encoding */ groupSessionMessenger;
    void /* unknown type, empty encoding */ liveStreamMessenger;
    void /* unknown type, empty encoding */ participantDetailsDataSource;
    void /* unknown type, empty encoding */ showParticipantCursors;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToSuperview;
- (void)viewWillStartLiveResize;
- (void)setLinedPaper:(id)a0;
- (void)decryptData:(id)a0 :(id)a1;
- (void)invalidated:(id)a0;
- (void)openLink:(id)a0 :(id)a1;
- (void)paperBounds:(id)a0 :(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)textClipViewDidChange;
- (void)textViewDidChangeSize;

@end
