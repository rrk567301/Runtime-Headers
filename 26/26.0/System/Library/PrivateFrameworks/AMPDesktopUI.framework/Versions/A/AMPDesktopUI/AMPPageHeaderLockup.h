@class NSImage, NSAttributedString;
@protocol AMPPageHeaderLockupModel;

@interface AMPPageHeaderLockup : AMPBindableView {
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ controlStack;
    void /* unknown type, empty encoding */ playButton;
    void /* unknown type, empty encoding */ shuffleButton;
    void /* unknown type, empty encoding */ artworkAspectConstraint;
}

@property (nonatomic, retain) id<AMPPageHeaderLockupModel> viewModel;
@property (nonatomic) BOOL showCircularArt;
@property (nonatomic, readonly) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) NSImage *titleImage;
@property (nonatomic, readonly) BOOL playButtonsShouldBeEnabled;

+ (id)keyPathsForValuesAffectingAttributedTitle;
+ (id)keyPathsForValuesAffectingPlayButtonsShouldBeEnabled;
+ (id)keyPathsForValuesAffectingTitleImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)doTitleClicked:(id)a0;
- (void)doPlayButton:(id)a0;
- (void)doShuffleButton:(id)a0;

@end
