@class NSString, NSImage;

@interface AMPDesktopUI.AMPRollableArtworkLockup : AMPDesktopUI.AMPArtworkLockup {
    void /* unknown type, empty encoding */ rolloverTracker;
    void /* unknown type, empty encoding */ axFocusChangedNotification;
    void /* unknown type, empty encoding */ overlay;
    void /* unknown type, empty encoding */ largePlayBtn;
    void /* unknown type, empty encoding */ smallPlayBtn;
    void /* unknown type, empty encoding */ downloadBtn;
    void /* unknown type, empty encoding */ actionBtn;
    void /* unknown type, empty encoding */ previewProgressView;
    void /* unknown type, empty encoding */ bouncyLinesView;
    void /* unknown type, empty encoding */ playBtnLabel;
    void /* unknown type, empty encoding */ pauseBtnLabel;
    void /* unknown type, empty encoding */ stopBtnLabel;
    void /* unknown type, empty encoding */ forceShowAreaOverride;
}

@property (nonatomic) BOOL trackRollover;
@property (nonatomic) BOOL showBouncyLinesAnimation;
@property (nonatomic, readonly) NSString *axLabel;
@property (nonatomic, readonly) NSImage *playImage;
@property (nonatomic, readonly) NSImage *rawPlayImage;
@property (nonatomic, readonly) BOOL modelSupportsPlayback;
@property (nonatomic) BOOL isRolledOver;
@property (nonatomic) BOOL isActuallyRolledOver;
@property (nonatomic, readonly) BOOL shouldHideRollOver;
@property (nonatomic, readonly) BOOL shouldHidePreviewProgress;
@property (nonatomic, readonly) BOOL shouldHideBouncyLines;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (BOOL)accessibilityIsIgnored;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)resignFirstResponder;
- (void)encodeWithCoder:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (void)reflectPlayBtn:(id)a0;
- (id)propertyKeysForViewSpy;
- (void)reflectActionBtn:(id)a0;
- (void)reflectDownloadBtn:(id)a0;

@end
