@class NSImage;

@interface AMPDesktopUI.AMPRollableArtworkLockup : AMPDesktopUI.AMPArtworkLockup {
    void /* unknown type, empty encoding */ rolloverTracker;
    void /* unknown type, empty encoding */ overlay;
    void /* unknown type, empty encoding */ largePlayBtn;
    void /* unknown type, empty encoding */ smallPlayBtn;
    void /* unknown type, empty encoding */ downloadBtn;
    void /* unknown type, empty encoding */ actionBtn;
    void /* unknown type, empty encoding */ previewProgressView;
}

@property (nonatomic) void /* unknown type, empty encoding */ trackRollover;
@property (nonatomic) void /* unknown type, empty encoding */ isRolledOver;
@property (nonatomic, readonly) NSImage *playImage;
@property (nonatomic, readonly) NSImage *rawPlayImage;
@property (nonatomic, readonly) BOOL modelSupportsPlayback;
@property (nonatomic, readonly) BOOL shouldHideRollOver;
@property (nonatomic, readonly) BOOL shouldHidePreviewProgress;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewDidMoveToWindow;
- (void)reflectPlayBtn:(id)a0;
- (void)reflectActionBtn:(id)a0;
- (void)reflectDownloadBtn:(id)a0;

@end
