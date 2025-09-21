@class NSImage;
@protocol AMPPlaylistItemLockupModel;

@interface AMPDesktopUI.TrackNumberAndPlayStateCell : AMPRolloverTableCell {
    void /* unknown type, empty encoding */ bouncyLinesView;
    void /* unknown type, empty encoding */ playBtnLabel;
    void /* unknown type, empty encoding */ pauseBtnLabel;
    void /* unknown type, empty encoding */ stopBtnLabel;
}

@property (nonatomic, weak) void /* function */ label;
@property (nonatomic, weak) void /* function */ playStateBtn;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, retain) id<AMPPlaylistItemLockupModel> viewModel;
@property (nonatomic, readonly) NSImage *playImage;
@property (nonatomic, readonly) NSImage *rawPlayImage;
@property (nonatomic, readonly) BOOL shouldHideBouncyLines;
@property (nonatomic, readonly) BOOL modelSupportsPlayback;
@property (nonatomic, readonly) BOOL shouldHidePlayButton;
@property (nonatomic, readonly) id trackNumber;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)reflectPlayBtn:(id)a0;
- (id)propertyKeysForViewSpy;

@end
