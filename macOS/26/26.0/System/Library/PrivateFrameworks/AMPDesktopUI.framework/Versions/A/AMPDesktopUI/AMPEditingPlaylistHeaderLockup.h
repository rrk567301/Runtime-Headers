@class NSColor, NSString, NSFont;
@protocol AMPEditingPlaylistHeaderLockupModel;

@interface AMPEditingPlaylistHeaderLockup : AMPBindableView {
    void /* unknown type, empty encoding */ kArtworkHeight;
    void /* unknown type, empty encoding */ kMetadataSpacing;
    void /* unknown type, empty encoding */ kMetadataToArtMargin;
    void /* unknown type, empty encoding */ kEditButtonOffset;
    void /* unknown type, empty encoding */ kEditButtonSize;
    void /* unknown type, empty encoding */ kOverlayTopMargin;
    void /* unknown type, empty encoding */ kOverlayMargin;
    void /* unknown type, empty encoding */ kOverlaySmallSizeTextThreshold;
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ descField;
    void /* unknown type, empty encoding */ publishCheck;
    void /* unknown type, empty encoding */ editArtworkButton;
    void /* unknown type, empty encoding */ titleOverlay;
    void /* unknown type, empty encoding */ artworkAspectConstraint;
    void /* unknown type, empty encoding */ smallFont;
    void /* unknown type, empty encoding */ largeFont;
}

@property (nonatomic, retain) id<AMPEditingPlaylistHeaderLockupModel> viewModel;
@property (nonatomic, readonly) BOOL hideTitleOverlay;
@property (nonatomic, readonly) NSColor *titleOverlayTextColor;
@property (nonatomic, readonly) NSString *titleOverlayText;
@property (nonatomic, readonly) NSFont *titleOverlayFont;

+ (id)keyPathsForValuesAffectingHideTitleOverlay;
+ (id)keyPathsForValuesAffectingTitleOverlayFont;
+ (id)keyPathsForValuesAffectingTitleOverlayText;
+ (id)keyPathsForValuesAffectingTitleOverlayTextColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)reflectEditArtwork:(id)a0;

@end
