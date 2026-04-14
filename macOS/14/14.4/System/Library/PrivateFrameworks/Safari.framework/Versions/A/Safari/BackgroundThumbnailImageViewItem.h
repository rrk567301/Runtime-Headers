@class StartPagePopoverItemView, NSString, NSView, NSImageView, NSLayoutConstraint, NSButton;

@interface BackgroundThumbnailImageViewItem : NSCollectionViewItem {
    StartPagePopoverItemView *_imageView;
    NSButton *_button;
    NSImageView *_xmarkButton;
    NSLayoutConstraint *_buttonXConstraint;
    NSLayoutConstraint *_buttonYConstraint;
    NSLayoutConstraint *_buttonWidthConstraint;
    NSLayoutConstraint *_buttonHeightConstraint;
}

@property (retain, nonatomic) NSView *backgroundView;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (nonatomic) BOOL canDisplayGeneratedBackgroundImage;

+ (id)_plusImage;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_showOpenPanel;
- (void)loadView;
- (void)setSelected:(BOOL)a0;
- (void)viewDidAppear;
- (id)_builtInImageNameToSimpleName:(id)a0;
- (void)_clearImage;
- (BOOL)_clearImageButtonVisible;
- (void)_configureButton;
- (void)addClearButton;
- (void)addOpenButton;
- (void)forwardSelectionToCollectionView:(id)a0;
- (void)removeOpenButton;
- (void)untoggleButton;
- (void)updateBackgroundImage:(struct CGImage { } *)a0 accessibilityLabel:(id)a1;

@end
