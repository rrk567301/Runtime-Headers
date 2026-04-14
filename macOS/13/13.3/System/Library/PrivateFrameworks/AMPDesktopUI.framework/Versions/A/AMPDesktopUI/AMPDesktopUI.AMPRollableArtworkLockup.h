@interface AMPDesktopUI.AMPRollableArtworkLockup : NSView {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ pullingArtwork;
    void /* unknown type, empty encoding */ rolloverTracker;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ overlay;
    void /* unknown type, empty encoding */ largePlayBtn;
    void /* unknown type, empty encoding */ smallPlayBtn;
    void /* unknown type, empty encoding */ downloadBtn;
    void /* unknown type, empty encoding */ actionBtn;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic) void /* unknown type, empty encoding */ isRolledOver;
@property (nonatomic, readonly) BOOL shouldHideRollOver;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (void)reflectPlayBtn:(id)a0;
- (void)reflectActionBtn:(id)a0;
- (void)reflectDownloadBtn:(id)a0;

@end
